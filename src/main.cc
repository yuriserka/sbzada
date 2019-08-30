#include <iostream>
#include "classfile.h"
#include "reader.h"
#include "viewer.h"
#include "utils/flags.h"
#include "utils/errors.h"

int main(const int argc, const char **argv) {
    // argv[0] = ./jvm
    Utils::Flags::toggleAll(++argv);

    auto cf = new ClassFile();
    auto r = new Reader(cf, Utils::Flags::kFILE);
    auto v = new Viewer(cf, r->fname);

    try {
        r->readClassFile();
        v->printClassFile();
    }
    catch (const std::exception &e) {
        delete cf;
        delete r;
        delete v;
        if (Utils::Flags::kVERBOSE) {
            std::cout << "\tA exception happened\n";
        }
        std::cerr << e.what() << "\n";
        return EXIT_FAILURE;
    }

    delete cf;
    delete r;
    delete v;

    return 0;
}
