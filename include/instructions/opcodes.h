#ifndef INCLUDE_INSTRUCTIONS_OPCODES_H_
#define INCLUDE_INSTRUCTIONS_OPCODES_H_

#include <string>
#include <vector>
#include "utils/types.h"

namespace Instructions {
namespace Opcodes {
enum opcode_reference {
  kAALOAD = 0x32,
  kAASTORE = 0x53,
  kACONST_NULL = 0x01,
  kALOAD = 0x19,
  kALOAD_0 = 0x2a,
  kALOAD_1 = 0x2b,
  kALOAD_2 = 0x2c,
  kALOAD_3 = 0x2d,
  kANEWARRAY = 0xbd,
  kARETURN = 0xb0,
  kARRAYLENGTH = 0xbe,
  kASTORE = 0x3a,
  kASTORE_0 = 0x4b,
  kASTORE_1 = 0x4c,
  kASTORE_2 = 0x4d,
  kASTORE_3 = 0x4e,
  kATHROW = 0xbf,
  kBALOAD = 0x33,
  kBASTORE = 0x54,
  kBIPUSH = 0x10,
  kBREAKPOINT = 0xca,
  kCALOAD = 0x34,
  kCASTORE = 0x55,
  kCHECKCAST = 0xc0,
  kD2F = 0x90,
  kD2I = 0x8e,
  kD2L = 0x8f,
  kDADD = 0x63,
  kDALOAD = 0x31,
  kDASTORE = 0x52,
  kDCMPG = 0x98,
  kDCMPL = 0x97,
  kDCONST_0 = 0x0e,
  kDCONST_1 = 0x0f,
  kDDIV = 0x6f,
  kDLOAD = 0x18,
  kDLOAD_0 = 0x26,
  kDLOAD_1 = 0x27,
  kDLOAD_2 = 0x28,
  kDLOAD_3 = 0x29,
  kDMUL = 0x6b,
  kDNEG = 0x77,
  kDREM = 0x73,
  kDRETURN = 0xaf,
  kDSTORE = 0x39,
  kDSTORE_0 = 0x47,
  kDSTORE_1 = 0x48,
  kDSTORE_2 = 0x49,
  kDSTORE_3 = 0x4a,
  kDSUB = 0x67,
  kDUP = 0x59,
  kDUP_X1 = 0x5a,
  kDUP_X2 = 0x5b,
  kDUP2 = 0x5c,
  kDUP2_X1 = 0x5d,
  kDUP2_X2 = 0x5e,
  kF2D = 0x8d,
  kF2I = 0x8b,
  kF2L = 0x8c,
  kFADD = 0x62,
  kFALOAD = 0x30,
  kFASTORE = 0x51,
  kFCMPG = 0x96,
  kFCMPL = 0x95,
  kFCONST_0 = 0x0b,
  kFCONST_1 = 0x0c,
  kFCONST_2 = 0x0d,
  kFDIV = 0x6e,
  kFLOAD = 0x17,
  kFLOAD_0 = 0x22,
  kFLOAD_1 = 0x23,
  kFLOAD_2 = 0x24,
  kFLOAD_3 = 0x25,
  kFMUL = 0x6a,
  kFNEG = 0x76,
  kFREM = 0x72,
  kFRETURN = 0xae,
  kFSTORE = 0x38,
  kFSTORE_0 = 0x43,
  kFSTORE_1 = 0x44,
  kFSTORE_2 = 0x45,
  kFSTORE_3 = 0x46,
  kFSUB = 0x66,
  kGETFIELD = 0xb4,
  kGETSTATIC = 0xb2,
  kGOTO = 0xa7,
  kGOTO_W = 0xc8,
  kI2B = 0x91,
  kI2C = 0x92,
  kI2D = 0x87,
  kI2F = 0x86,
  kI2L = 0x85,
  kI2S = 0x93,
  kIADD = 0x60,
  kIALOAD = 0x2e,
  kIAND = 0x7e,
  kIASTORE = 0x4f,
  kICONST_M1 = 0x02,
  kICONST_0 = 0x03,
  kICONST_1 = 0x04,
  kICONST_2 = 0x05,
  kICONST_3 = 0x06,
  kICONST_4 = 0x07,
  kICONST_5 = 0x08,
  kIDIV = 0x6c,
  kIF_ACMPEQ = 0xa5,
  kIF_ACMPNE = 0xa6,
  kIF_ICMPEQ = 0x9f,
  kIF_ICMPGE = 0xa2,
  kIF_ICMPGT = 0xa3,
  kIF_ICMPLE = 0xa4,
  kIF_ICMPLT = 0xa1,
  kIF_ICMPNE = 0xa0,
  kIFEQ = 0x99,
  kIFGE = 0x9c,
  kIFGT = 0x9d,
  kIFLE = 0x9e,
  kIFLT = 0x9b,
  kIFNE = 0x9a,
  kIFNONNULL = 0xc7,
  kIFNULL = 0xc6,
  kIINC = 0x84,
  kILOAD = 0x15,
  kILOAD_0 = 0x1a,
  kILOAD_1 = 0x1b,
  kILOAD_2 = 0x1c,
  kILOAD_3 = 0x1d,
  kIMPDEP1 = 0xfe,
  kIMPDEP2 = 0xff,
  kIMUL = 0x68,
  kINEG = 0x74,
  kINSTANCEOF = 0xc1,
  kINVOKEDYNAMIC = 0xba,
  kINVOKEINTERFACE = 0xb9,
  kINVOKESPECIAL = 0xb7,
  kINVOKESTATIC = 0xb8,
  kINVOKEVIRTUAL = 0xb6,
  kIOR = 0x80,
  kIREM = 0x70,
  kIRETURN = 0xac,
  kISHL = 0x78,
  kISHR = 0x7a,
  kISTORE = 0x36,
  kISTORE_0 = 0x3b,
  kISTORE_1 = 0x3c,
  kISTORE_2 = 0x3d,
  kISTORE_3 = 0x3e,
  kISUB = 0x64,
  kIUSHR = 0x7c,
  kIXOR = 0x82,
  kJSR = 0xa8,
  kJSR_W = 0xc9,
  kL2D = 0x8a,
  kL2F = 0x89,
  kL2I = 0x88,
  kLADD = 0x61,
  kLALOAD = 0x2f,
  kLAND = 0x7f,
  kLASTORE = 0x50,
  kLCMP = 0x94,
  kLCONST_0 = 0x09,
  kLCONST_1 = 0x0a,
  kLDC = 0x12,
  kLDC_W = 0x13,
  kLDC2_W = 0x14,
  kLDIV = 0x6d,
  kLLOAD = 0x16,
  kLLOAD_0 = 0x1e,
  kLLOAD_1 = 0x1f,
  kLLOAD_2 = 0x20,
  kLLOAD_3 = 0x21,
  kLMUL = 0x69,
  kLNEG = 0x75,
  kLOOKUPSWITCH = 0xab,
  kLOR = 0x81,
  kLREM = 0x71,
  kLRETURN = 0xad,
  kLSHL = 0x79,
  kLSHR = 0x7b,
  kLSTORE = 0x37,
  kLSTORE_0 = 0x3f,
  kLSTORE_1 = 0x40,
  kLSTORE_2 = 0x41,
  kLSTORE_3 = 0x42,
  kLSUB = 0x65,
  kLUSHR = 0x7d,
  kLXOR = 0x83,
  kMONITORENTER = 0xc2,
  kMONITOREXIT = 0xc3,
  kMULTIANEWARRAY = 0xc5,
  kNEW = 0xbb,
  kNEWARRAY = 0xbc,
  kNOP = 0x00,
  kPOP = 0x57,
  kPOP2 = 0x58,
  kPUTFIELD = 0xb5,
  kPUTSTATIC = 0xb3,
  kRET = 0xa9,
  kRETURN = 0xb1,
  kSALOAD = 0x35,
  kSASTORE = 0x56,
  kSIPUSH = 0x11,
  kSWAP = 0x5f,
  kTABLESWITCH = 0xaa,
  kWIDE = 0xc4
};

std::string getMnemonic(const Utils::Types::u1 &opcode);
}  // namespace Opcodes
}  // namespace Instructions

#endif  // INCLUDE_INSTRUCTIONS_OPCODES_H_
