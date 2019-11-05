#ifndef INCLUDE_UTILS_MEMORY_AREAS_METHOD_AREA_H_
#define INCLUDE_UTILS_MEMORY_AREAS_METHOD_AREA_H_

#include <list>
#include <string>
#include <vector>
#include "classfile.h"
#include "utils/helper_functions.h"
#include "utils/infos.h"

namespace MemoryAreas {
class MethodArea {
 public:
  MethodArea(const ClassFile *cf) { this->update(cf); }

  void update(const ClassFile *cf) {
    auto classname = Utils::getClassName(cf);
    if (!this->isLoaded(classname)) {
      this->loaded.push_back(cf);
    }
    this->runtime_classfile = cf;
    this->runtime_constant_pool = cf->constant_pool;
    this->methods = cf->methods;
    this->fields = cf->fields;
  }

  bool isLoaded(const std::string &classname) {
    auto already_pushed =
        std::find_if(this->loaded.begin(), this->loaded.end(),
                     [&classname](const ClassFile *classfile) {
                       auto actual_name = Utils::getClassName(classfile);
                       return !classname.compare(actual_name);
                     });
    return already_pushed != this->loaded.end();
  }

  const ClassFile *getClass(const std::string &classname);
  const ClassFile *loadClass(const std::string &classname);
  Utils::Infos::method_info getMethod(const std::string &method_name);
  Utils::Infos::field_info getField(const std::string &field_name);

  std::vector<Utils::ConstantPool::cp_info> runtime_constant_pool;

 private:
  const ClassFile *runtime_classfile;
  std::list<const ClassFile *> loaded;
  std::vector<Utils::Infos::method_info> methods;
  std::vector<Utils::Infos::field_info> fields;
};
}  // namespace MemoryAreas

#endif  // INCLUDE_UTILS_MEMORY_AREAS_METHOD_AREA_H_
