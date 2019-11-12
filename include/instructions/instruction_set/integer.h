#ifndef INCLUDE_INSTRUCTIONS_INSTRUCTION_SET_INTEGER_H_
#define INCLUDE_INSTRUCTIONS_INSTRUCTION_SET_INTEGER_H_

#include <iostream>
#include <string>
#include <vector>
#include "instructions/instruction_set/base.h"
#include "instructions/opcodes.h"
#include "utils/string.h"

namespace Instructions {
namespace Integer {
class BaseInteger : public Instruction {
 public:
  BaseInteger(const Utils::Types::u1 &tag) : Instruction(tag) {}

  inline std::vector<int> toBytecode(
      std::vector<Utils::Types::u1>::iterator *code_it, int *delta_code,
      std::stringstream *ss, const bool &wide, int *pc,
      const int &delta_tab) override {
    (*ss) << Opcodes::getMnemonic(this->opcode) << "\n";
    return {};
  }

  inline std::vector<std::string> toBytecode_json(
      std::vector<Utils::Types::u1>::iterator *code_it, int *delta_code,
      int *ret, const bool &wide, int *pc) override {
    return {};
  }
};

class ToByte : public BaseInteger {
 public:
  ToByte() : BaseInteger(Opcodes::kI2B) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class ToChar : public BaseInteger {
 public:
  ToChar() : BaseInteger(Opcodes::kI2C) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class ToDouble : public BaseInteger {
 public:
  ToDouble() : BaseInteger(Opcodes::kI2D) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class ToFloat : public BaseInteger {
 public:
  ToFloat() : BaseInteger(Opcodes::kI2F) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class ToLong : public BaseInteger {
 public:
  ToLong() : BaseInteger(Opcodes::kI2L) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class ToShort : public BaseInteger {
 public:
  ToShort() : BaseInteger(Opcodes::kI2S) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Add : public BaseInteger {
 public:
  Add() : BaseInteger(Opcodes::kIADD) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class LoadFromArray : public BaseInteger {
 public:
  LoadFromArray() : BaseInteger(Opcodes::kIALOAD) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class And : public BaseInteger {
 public:
  And() : BaseInteger(Opcodes::kIAND) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class StoreIntoArray : public BaseInteger {
 public:
  StoreIntoArray() : BaseInteger(Opcodes::kIASTORE) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Const_m1 : public BaseInteger {
 public:
  Const_m1() : BaseInteger(Opcodes::kICONST_M1) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Const_0 : public BaseInteger {
 public:
  Const_0() : BaseInteger(Opcodes::kICONST_0) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Const_1 : public BaseInteger {
 public:
  Const_1() : BaseInteger(Opcodes::kICONST_1) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Const_2 : public BaseInteger {
 public:
  Const_2() : BaseInteger(Opcodes::kICONST_2) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Const_3 : public BaseInteger {
 public:
  Const_3() : BaseInteger(Opcodes::kICONST_3) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Const_4 : public BaseInteger {
 public:
  Const_4() : BaseInteger(Opcodes::kICONST_4) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Const_5 : public BaseInteger {
 public:
  Const_5() : BaseInteger(Opcodes::kICONST_5) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class CompareEqual : public BaseInteger {
 public:
  CompareEqual() : BaseInteger(Opcodes::kIF_ICMPEQ) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class CompareGreaterEqual : public BaseInteger {
 public:
  CompareGreaterEqual() : BaseInteger(Opcodes::kIF_ICMPGE) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class CompareGreaterThan : public BaseInteger {
 public:
  CompareGreaterThan() : BaseInteger(Opcodes::kIF_ICMPGT) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class CompareLessEqual : public BaseInteger {
 public:
  CompareLessEqual() : BaseInteger(Opcodes::kIF_ICMPLE) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class CompareLessThan : public BaseInteger {
 public:
  CompareLessThan() : BaseInteger(Opcodes::kIF_ICMPLT) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class CompareNotEqual : public BaseInteger {
 public:
  CompareNotEqual() : BaseInteger(Opcodes::kIF_ICMPNE) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Div : public BaseInteger {
 public:
  Div() : BaseInteger(Opcodes::kIDIV) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Inc : public Instruction {
 public:
  Inc() : Instruction(Opcodes::kIINC) {}

  inline std::vector<int> toBytecode(
      std::vector<Utils::Types::u1>::iterator *code_it, int *delta_code,
      std::stringstream *ss, const bool &wide, int *pc,
      const int &delta_tab) override {
    (*ss) << Opcodes::getMnemonic(this->opcode) << " ";
    if (wide) {
      int16_t index = (*++*code_it << 8) | *++*code_it;
      int16_t k = (*++*code_it << 8) | *++*code_it;
      (*ss) << index << " by " << k;
      *delta_code = 4;
    } else {
      unsigned char index = *++*code_it;
      signed char k = *++*code_it;
      (*ss) << int{index} << " by " << int{k};
      *delta_code = 2;
    }
    (*ss) << "\n";
    return {};
  }

  inline std::vector<std::string> toBytecode_json(
      std::vector<Utils::Types::u1>::iterator *code_it, int *delta_code,
      int *ret, const bool &wide, int *pc) override {
    if (wide) {
      int16_t index = (*++*code_it << 8) | *++*code_it;
      int16_t k = (*++*code_it << 8) | *++*code_it;
      *delta_code = 4;
      return {Utils::String::toString(index), Utils::String::toString(k)};
    }
    unsigned char index = *++*code_it;
    signed char k = *++*code_it;
    *delta_code = 2;
    return {Utils::String::toString(int{index}), Utils::String::toString(k)};
  }

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Load : public Instruction {
 public:
  Load() : Instruction(Opcodes::kILOAD) {}

  inline std::vector<int> toBytecode(
      std::vector<Utils::Types::u1>::iterator *code_it, int *delta_code,
      std::stringstream *ss, const bool &wide, int *pc,
      const int &delta_tab) override {
    (*ss) << Opcodes::getMnemonic(this->opcode) << " ";
    if (wide) {
      int16_t index = (*++*code_it << 8) | *++*code_it;
      (*ss) << index;
      *delta_code = 2;
    } else {
      unsigned char index = *++*code_it;
      (*ss) << int{index};
      *delta_code = 1;
    }
    (*ss) << "\n";
    return {};
  }

  inline std::vector<std::string> toBytecode_json(
      std::vector<Utils::Types::u1>::iterator *code_it, int *delta_code,
      int *ret, const bool &wide, int *pc) override {
    if (wide) {
      int16_t index = (*++*code_it << 8) | *++*code_it;
      *delta_code = 2;
      return {Utils::String::toString(index)};
    }
    unsigned char index = *++*code_it;
    *delta_code = 1;
    return {Utils::String::toString(int{index})};
  }

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Load_0 : public BaseInteger {
 public:
  Load_0() : BaseInteger(Opcodes::kILOAD_0) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Load_1 : public BaseInteger {
 public:
  Load_1() : BaseInteger(Opcodes::kILOAD_1) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Load_2 : public BaseInteger {
 public:
  Load_2() : BaseInteger(Opcodes::kILOAD_2) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Load_3 : public BaseInteger {
 public:
  Load_3() : BaseInteger(Opcodes::kILOAD_3) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Mul : public BaseInteger {
 public:
  Mul() : BaseInteger(Opcodes::kIMUL) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Neg : public BaseInteger {
 public:
  Neg() : BaseInteger(Opcodes::kINEG) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Or : public BaseInteger {
 public:
  Or() : BaseInteger(Opcodes::kIOR) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Rem : public BaseInteger {
 public:
  Rem() : BaseInteger(Opcodes::kIREM) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Return : public BaseInteger {
 public:
  Return() : BaseInteger(Opcodes::kIRETURN) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class ShiftLeft : public BaseInteger {
 public:
  ShiftLeft() : BaseInteger(Opcodes::kISHL) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class ArithmeticShiftRight : public BaseInteger {
 public:
  ArithmeticShiftRight() : BaseInteger(Opcodes::kISHR) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Store : public Instruction {
 public:
  Store() : Instruction(Opcodes::kISTORE) {}

  inline std::vector<int> toBytecode(
      std::vector<Utils::Types::u1>::iterator *code_it, int *delta_code,
      std::stringstream *ss, const bool &wide, int *pc,
      const int &delta_tab) override {
    (*ss) << Opcodes::getMnemonic(this->opcode) << " ";
    if (wide) {
      int16_t index = (*++*code_it << 8) | *++*code_it;
      (*ss) << index;
      *delta_code = 2;
    } else {
      unsigned char index = *++*code_it;
      (*ss) << int{index};
      *delta_code = 1;
    }
    (*ss) << "\n";
    return {};
  }

  inline std::vector<std::string> toBytecode_json(
      std::vector<Utils::Types::u1>::iterator *code_it, int *delta_code,
      int *ret, const bool &wide, int *pc) override {
    if (wide) {
      int16_t index = (*++*code_it << 8) | *++*code_it;
      *delta_code = 2;
      return {Utils::String::toString(index)};
    }
    unsigned char index = *++*code_it;
    *delta_code = 1;
    return {Utils::String::toString(int{index})};
  }

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Store_0 : public BaseInteger {
 public:
  Store_0() : BaseInteger(Opcodes::kISTORE_0) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Store_1 : public BaseInteger {
 public:
  Store_1() : BaseInteger(Opcodes::kISTORE_1) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Store_2 : public BaseInteger {
 public:
  Store_2() : BaseInteger(Opcodes::kISTORE_2) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Store_3 : public BaseInteger {
 public:
  Store_3() : BaseInteger(Opcodes::kISTORE_3) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Sub : public BaseInteger {
 public:
  Sub() : BaseInteger(Opcodes::kISUB) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class LogicalShiftRight : public BaseInteger {
 public:
  LogicalShiftRight() : BaseInteger(Opcodes::kIUSHR) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};

class Xor : public BaseInteger {
 public:
  Xor() : BaseInteger(Opcodes::kIXOR) {}

  std::vector<int> execute(
      std::vector<Utils::Types::u1>::iterator *code_iterator,
      MemoryAreas::Thread *th, int *delta_code, const bool &wide,
      int *pc = nullptr) override;
};
}  // namespace Integer
}  // namespace Instructions

#endif  // INCLUDE_INSTRUCTIONS_INSTRUCTION_SET_INTEGER_H_
