#include "viewer.h"

#include <iostream>
#include "utils/constantPool.h"

static std::ios state(NULL);

void Viewer::printClassFile() {
    std::cout << "Visualizing ClassFile structure for "
              << this->classname << "\n";
    this->printMagic();
    this->printVersion();
    this->printConstantPool();
}

void Viewer::printMagic() {
    state.copyfmt(std::cout);
    std::cout << "Magic: '" << "0x" << std::hex << std::uppercase
              << this->classfile->magic << "'\n";
    std::cout.copyfmt(state);
}

void Viewer::printVersion() {
    std::cout << "Version: '" << this->classfile->major_version << "."
              << this->classfile->minor_version << "'\n";
}

void Viewer::printConstantPool() {
    std::cout << "Constant Pool:\n";
    for (auto i = 0; i < /*this->classfile->constant_pool_count-1*/1; ++i) {
        std::cout << "\tTAG '" << i + 1 << "': ";
        auto constpool = &this->classfile->constant_pool[i];
        auto name = Utils::ConstantPool::getConstantTypeName(constpool->tag);
        std::cout << "(" << unsigned(constpool->tag) << ", " << name << ")\n";
        switch (constpool->tag) {
            namespace cp = ::Utils::ConstantPool;
        case cp::CONSTANT_Class:
            std::cout << "\t\tName Index: "
                      << constpool->info.classinfo_->name_index << "\n";
            break;
        default:
            break;
        }
    }
}
