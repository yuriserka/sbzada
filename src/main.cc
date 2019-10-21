#include <locale.h>
#include <iostream>
#include "classfile.h"
#include "reader.h"
#include "utils/errors.h"
#include "utils/fileSystem.h"
#include "utils/flags.h"
#include "utils/serializers/classfileSerializer.h"
#include "viewer.h"

void dumpJsonFile(const ClassFile *cf, const std::string &filename);

int main(const int argc, const char **argv) {
  setlocale(LC_ALL, "");

  ClassFile *cf = nullptr;
  Reader *r = nullptr;
  Viewer *v = nullptr;

  try {
    // argv[0] = ./jvm
    Utils::Flags::toggleAll(++argv);

    cf = new ClassFile();
    r = new Reader(cf, Utils::Flags::options.kFILE);
    v = new Viewer(cf, r->fname);

    r->readClassFile();
    if (Utils::Flags::options.KMODE.kVIEWER) {
      if (Utils::Flags::options.kJSON) {
        dumpJsonFile(cf, r->fname);
        if (Utils::Flags::options.kVERBOSE) {
          std::cout << "json file dump complete\n";
        }
      }
      v->printClassFile();
    } else {
      throw Utils::Errors::Exception(Utils::Errors::kNOTIMPLEMENTED,
                                     "Interpreter is not implemented yet");
    }
  } catch (const Utils::Errors::Exception &e) {
    delete r;
    delete v;
    delete cf;
    if (Utils::Flags::options.kVERBOSE) {
      std::cout << "\tA exception happened\n";
    }
    std::cout << "Error Code: " << e.errorCode() << "\nMessage: " << e.what()
              << "\n";
    return EXIT_FAILURE;
  }

  delete r;
  delete v;
  delete cf;

  return 0;
}

void dumpJsonFile(const ClassFile *cf, const std::string &filename) {
  auto cfSerializer = ClassFileSerializer(cf);
  json j;
  cfSerializer.to_json(&j);
  const std::string outdir = "./.out/";
  Utils::FileSystem::makeDirectory(outdir.c_str());
  const std::string classname = filename.substr(0, filename.find_last_of('.'));
  const std::string path = outdir + '/' + classname + "_structure.json";
  std::ofstream o(path);
  o << std::setw(2) << j << std::endl;
}
