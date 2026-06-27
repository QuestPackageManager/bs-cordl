#pragma once
// IWYU pragma private; include "System/Convert.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Convert)
namespace System {
struct Base64FormattingOptions;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class IConvertible;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class Convert;
}
// Write type traits
MARK_REF_PTR_T(::System::Convert);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Convert
class CORDL_TYPE Convert : public ::System::Object {
public:
// Declarations
/// @brief Field ConvertTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ConvertTypes, put=setStaticF_ConvertTypes)) ::ArrayW<::System::Type*,::Array<::System::Type*>*>  ConvertTypes;

/// @brief Field DBNull, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DBNull, put=setStaticF_DBNull)) ::System::Object*  DBNull;

/// @brief Field EnumType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EnumType, put=setStaticF_EnumType)) ::System::Type*  EnumType;

/// @brief Field base64Table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_base64Table, put=setStaticF_base64Table)) ::ArrayW<char16_t,::Array<char16_t>*>  base64Table;

/// @brief Field s_decodingMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_decodingMap, put=setStaticF_s_decodingMap)) ::ArrayW<int8_t,::Array<int8_t>*>  s_decodingMap;

/// @brief Method ChangeType, addr 0x5a7960c, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  conversionType) ;

/// @brief Method ChangeType, addr 0x5a796b0, size 0x928, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  conversionType, ::System::IFormatProvider*  provider) ;

/// @brief Method ChangeType, addr 0x5a78d90, size 0x87c, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::TypeCode  typeCode, ::System::IFormatProvider*  provider) ;

/// @brief Method ConvertToBase64Array, addr 0x5a7f65c, size 0x23c, virtual false, abstract: false, final false
static inline int32_t ConvertToBase64Array(char16_t*  outChars, uint8_t*  inData, int32_t  offset, int32_t  length, bool  insertLineBreaks) ;

/// @brief Method CopyToTempBufferWithoutWhiteSpace, addr 0x5a80380, size 0x138, virtual false, abstract: false, final false
static inline void CopyToTempBufferWithoutWhiteSpace(::System::ReadOnlySpan_1<char16_t>  chars, ::System::Span_1<char16_t>  tempBuffer, ::ByRef<int32_t>  consumed, ::ByRef<int32_t>  charsWritten) ;

/// @brief Method Decode, addr 0x5a78c60, size 0x50, virtual false, abstract: false, final false
static inline int32_t Decode(::ByRef<char16_t>  encodedChars, ::ByRef<int8_t>  decodingMap) ;

/// @brief Method DefaultToType, addr 0x5a751c4, size 0xab0, virtual false, abstract: false, final false
static inline ::System::Object* DefaultToType(::System::IConvertible*  value, ::System::Type*  targetType, ::System::IFormatProvider*  provider) ;

/// @brief Method FromBase64CharArray, addr 0x5a804d8, size 0x204, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromBase64CharArray(::ArrayW<char16_t,::Array<char16_t>*>  inArray, int32_t  offset, int32_t  length) ;

/// @brief Method FromBase64CharPtr, addr 0x5a7fcd0, size 0x1a0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromBase64CharPtr(char16_t*  inputPtr, int32_t  inputLength) ;

/// @brief Method FromBase64String, addr 0x5a7fc28, size 0xa8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromBase64String(::StringW  s) ;

/// @brief Method FromBase64_ComputeResultLength, addr 0x5a806dc, size 0xbc, virtual false, abstract: false, final false
static inline int32_t FromBase64_ComputeResultLength(char16_t*  inputPtr, int32_t  inputLength) ;

/// @brief Method GetTypeCode, addr 0x5a78cc8, size 0xc8, virtual false, abstract: false, final false
static inline ::System::TypeCode GetTypeCode(::System::Object*  value) ;

/// @brief Method IsSpace, addr 0x5a804b8, size 0x20, virtual false, abstract: false, final false
static inline bool IsSpace(char16_t  c) ;

/// @brief Method ThrowByteOverflowException, addr 0x5a7a024, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowByteOverflowException() ;

/// @brief Method ThrowCharOverflowException, addr 0x5a79fd8, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowCharOverflowException() ;

/// @brief Method ThrowInt16OverflowException, addr 0x5a7a0bc, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInt16OverflowException() ;

/// @brief Method ThrowInt32OverflowException, addr 0x5a7a154, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInt32OverflowException() ;

/// @brief Method ThrowInt64OverflowException, addr 0x5a7a1ec, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInt64OverflowException() ;

/// @brief Method ThrowSByteOverflowException, addr 0x5a7a070, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowSByteOverflowException() ;

/// @brief Method ThrowUInt16OverflowException, addr 0x5a7a108, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowUInt16OverflowException() ;

/// @brief Method ThrowUInt32OverflowException, addr 0x5a7a1a0, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowUInt32OverflowException() ;

/// @brief Method ThrowUInt64OverflowException, addr 0x5a7a238, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowUInt64OverflowException() ;

/// @brief Method ToBase64CharArray, addr 0x5a7f898, size 0x8c, virtual false, abstract: false, final false
static inline int32_t ToBase64CharArray(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray, int32_t  offsetIn, int32_t  length, ::ArrayW<char16_t,::Array<char16_t>*>  outArray, int32_t  offsetOut) ;

/// @brief Method ToBase64CharArray, addr 0x5a7f924, size 0x304, virtual false, abstract: false, final false
static inline int32_t ToBase64CharArray(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray, int32_t  offsetIn, int32_t  length, ::ArrayW<char16_t,::Array<char16_t>*>  outArray, int32_t  offsetOut, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64String, addr 0x5a7f204, size 0x184, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::System::ReadOnlySpan_1<uint8_t>  bytes, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64String, addr 0x5a7f144, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray) ;

/// @brief Method ToBase64String, addr 0x5a7f388, size 0x74, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray, int32_t  offset, int32_t  length) ;

/// @brief Method ToBase64String, addr 0x5a7f3fc, size 0x1b0, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray, int32_t  offset, int32_t  length, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64_CalculateAndValidateOutputLength, addr 0x5a7f5ac, size 0xb0, virtual false, abstract: false, final false
static inline int32_t ToBase64_CalculateAndValidateOutputLength(int32_t  inputLength, bool  insertLineBreaks) ;

/// @brief Method ToBoolean, addr 0x5a7a4d8, size 0x30, virtual false, abstract: false, final false
static inline bool ToBoolean(::StringW  value) ;

/// @brief Method ToBoolean, addr 0x5a7a508, size 0x30, virtual false, abstract: false, final false
static inline bool ToBoolean(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToBoolean, addr 0x5a7a550, size 0x78, virtual false, abstract: false, final false
static inline bool ToBoolean(::System::Decimal  value) ;

/// @brief Method ToBoolean, addr 0x5a7a284, size 0xf8, virtual false, abstract: false, final false
static inline bool ToBoolean(::System::Object*  value) ;

/// @brief Method ToBoolean, addr 0x5a7a37c, size 0x108, virtual false, abstract: false, final false
static inline bool ToBoolean(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToBoolean, addr 0x5a7a544, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(double_t  value) ;

/// @brief Method ToBoolean, addr 0x5a7a538, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(float_t  value) ;

/// @brief Method ToBoolean, addr 0x5a7a490, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int16_t  value) ;

/// @brief Method ToBoolean, addr 0x5a7a4a8, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int32_t  value) ;

/// @brief Method ToBoolean, addr 0x5a7a4c0, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int64_t  value) ;

/// @brief Method ToBoolean, addr 0x5a7a484, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int8_t  value) ;

/// @brief Method ToBoolean, addr 0x5a7a49c, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint16_t  value) ;

/// @brief Method ToBoolean, addr 0x5a7a4b4, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint32_t  value) ;

/// @brief Method ToBoolean, addr 0x5a7a4cc, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint64_t  value) ;

/// @brief Method ToBoolean, addr 0x5a76614, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint8_t  value) ;

/// @brief Method ToByte, addr 0x5a7b7ac, size 0x78, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value) ;

/// @brief Method ToByte, addr 0x5a7e7b0, size 0x120, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToByte, addr 0x5a7b824, size 0x14, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToByte, addr 0x5a7b734, size 0x78, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Decimal  value) ;

/// @brief Method ToByte, addr 0x5a7b1b0, size 0xf8, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Object*  value) ;

/// @brief Method ToByte, addr 0x5a7b2a8, size 0x108, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToByte, addr 0x5a74c74, size 0x8, virtual false, abstract: false, final false
static inline uint8_t ToByte(bool  value) ;

/// @brief Method ToByte, addr 0x5a776fc, size 0x68, virtual false, abstract: false, final false
static inline uint8_t ToByte(char16_t  value) ;

/// @brief Method ToByte, addr 0x5a7b6d0, size 0x64, virtual false, abstract: false, final false
static inline uint8_t ToByte(double_t  value) ;

/// @brief Method ToByte, addr 0x5a7b670, size 0x60, virtual false, abstract: false, final false
static inline uint8_t ToByte(float_t  value) ;

/// @brief Method ToByte, addr 0x5a7b410, size 0x68, virtual false, abstract: false, final false
static inline uint8_t ToByte(int16_t  value) ;

/// @brief Method ToByte, addr 0x5a7b4e0, size 0x64, virtual false, abstract: false, final false
static inline uint8_t ToByte(int32_t  value) ;

/// @brief Method ToByte, addr 0x5a7b5a8, size 0x64, virtual false, abstract: false, final false
static inline uint8_t ToByte(int64_t  value) ;

/// @brief Method ToByte, addr 0x5a7b3b0, size 0x60, virtual false, abstract: false, final false
static inline uint8_t ToByte(int8_t  value) ;

/// @brief Method ToByte, addr 0x5a7b478, size 0x68, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint16_t  value) ;

/// @brief Method ToByte, addr 0x5a7b544, size 0x64, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint32_t  value) ;

/// @brief Method ToByte, addr 0x5a7b60c, size 0x64, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint64_t  value) ;

/// @brief Method ToChar, addr 0x5a7aa1c, size 0x58, virtual false, abstract: false, final false
static inline char16_t ToChar(::StringW  value) ;

/// @brief Method ToChar, addr 0x5a7aa74, size 0x98, virtual false, abstract: false, final false
static inline char16_t ToChar(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToChar, addr 0x5a7a5c8, size 0xf8, virtual false, abstract: false, final false
static inline char16_t ToChar(::System::Object*  value) ;

/// @brief Method ToChar, addr 0x5a7a6c0, size 0x108, virtual false, abstract: false, final false
static inline char16_t ToChar(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToChar, addr 0x5a7a828, size 0x60, virtual false, abstract: false, final false
static inline char16_t ToChar(int16_t  value) ;

/// @brief Method ToChar, addr 0x5a7a88c, size 0x64, virtual false, abstract: false, final false
static inline char16_t ToChar(int32_t  value) ;

/// @brief Method ToChar, addr 0x5a7a954, size 0x64, virtual false, abstract: false, final false
static inline char16_t ToChar(int64_t  value) ;

/// @brief Method ToChar, addr 0x5a7a7c8, size 0x60, virtual false, abstract: false, final false
static inline char16_t ToChar(int8_t  value) ;

/// @brief Method ToChar, addr 0x5a7a888, size 0x4, virtual false, abstract: false, final false
static inline char16_t ToChar(uint16_t  value) ;

/// @brief Method ToChar, addr 0x5a7a8f0, size 0x64, virtual false, abstract: false, final false
static inline char16_t ToChar(uint32_t  value) ;

/// @brief Method ToChar, addr 0x5a7a9b8, size 0x64, virtual false, abstract: false, final false
static inline char16_t ToChar(uint64_t  value) ;

/// @brief Method ToChar, addr 0x5a7667c, size 0x8, virtual false, abstract: false, final false
static inline char16_t ToChar(uint8_t  value) ;

/// @brief Method ToDateTime, addr 0x5a7e548, size 0x84, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDateTime, addr 0x5a7e410, size 0x138, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0x5a7e380, size 0x90, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0x5a7de80, size 0x130, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0x5a75044, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(bool  value) ;

/// @brief Method ToDecimal, addr 0x5a7e2e8, size 0x98, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(double_t  value) ;

/// @brief Method ToDecimal, addr 0x5a7e250, size 0x98, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(float_t  value) ;

/// @brief Method ToDecimal, addr 0x5a7e014, size 0x64, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int16_t  value) ;

/// @brief Method ToDecimal, addr 0x5a7e0d4, size 0x60, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int32_t  value) ;

/// @brief Method ToDecimal, addr 0x5a7e190, size 0x64, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int64_t  value) ;

/// @brief Method ToDecimal, addr 0x5a7dfb0, size 0x64, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int8_t  value) ;

/// @brief Method ToDecimal, addr 0x5a7e078, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint16_t  value) ;

/// @brief Method ToDecimal, addr 0x5a7e134, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint32_t  value) ;

/// @brief Method ToDecimal, addr 0x5a7e1f4, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint64_t  value) ;

/// @brief Method ToDecimal, addr 0x5a76acc, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint8_t  value) ;

/// @brief Method ToDouble, addr 0x5a7de64, size 0x1c, virtual false, abstract: false, final false
static inline double_t ToDouble(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDouble, addr 0x5a7ddf8, size 0x6c, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Decimal  value) ;

/// @brief Method ToDouble, addr 0x5a7dbac, size 0xf8, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Object*  value) ;

/// @brief Method ToDouble, addr 0x5a7dca4, size 0x108, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDouble, addr 0x5a74fd0, size 0x14, virtual false, abstract: false, final false
static inline double_t ToDouble(bool  value) ;

/// @brief Method ToDouble, addr 0x5a7ddf0, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(float_t  value) ;

/// @brief Method ToDouble, addr 0x5a7ddb8, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(int16_t  value) ;

/// @brief Method ToDouble, addr 0x5a7ddd0, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(int32_t  value) ;

/// @brief Method ToDouble, addr 0x5a7dde0, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(int64_t  value) ;

/// @brief Method ToDouble, addr 0x5a7ddac, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(int8_t  value) ;

/// @brief Method ToDouble, addr 0x5a7ddc4, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(uint16_t  value) ;

/// @brief Method ToDouble, addr 0x5a7ddd8, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(uint32_t  value) ;

/// @brief Method ToDouble, addr 0x5a7dde8, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(uint64_t  value) ;

/// @brief Method ToDouble, addr 0x5a76a64, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(uint8_t  value) ;

/// @brief Method ToInt16, addr 0x5a7bd6c, size 0x7c, virtual false, abstract: false, final false
static inline int16_t ToInt16(::StringW  value) ;

/// @brief Method ToInt16, addr 0x5a7ea00, size 0x130, virtual false, abstract: false, final false
static inline int16_t ToInt16(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt16, addr 0x5a7bde8, size 0x18, virtual false, abstract: false, final false
static inline int16_t ToInt16(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt16, addr 0x5a7bcf4, size 0x78, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Decimal  value) ;

/// @brief Method ToInt16, addr 0x5a7b838, size 0xf8, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Object*  value) ;

/// @brief Method ToInt16, addr 0x5a7b930, size 0x108, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt16, addr 0x5a74cdc, size 0x8, virtual false, abstract: false, final false
static inline int16_t ToInt16(bool  value) ;

/// @brief Method ToInt16, addr 0x5a777c0, size 0x60, virtual false, abstract: false, final false
static inline int16_t ToInt16(char16_t  value) ;

/// @brief Method ToInt16, addr 0x5a7bc90, size 0x64, virtual false, abstract: false, final false
static inline int16_t ToInt16(double_t  value) ;

/// @brief Method ToInt16, addr 0x5a7bc30, size 0x60, virtual false, abstract: false, final false
static inline int16_t ToInt16(float_t  value) ;

/// @brief Method ToInt16, addr 0x5a7baa0, size 0x64, virtual false, abstract: false, final false
static inline int16_t ToInt16(int32_t  value) ;

/// @brief Method ToInt16, addr 0x5a7bb68, size 0x64, virtual false, abstract: false, final false
static inline int16_t ToInt16(int64_t  value) ;

/// @brief Method ToInt16, addr 0x5a7ba38, size 0x8, virtual false, abstract: false, final false
static inline int16_t ToInt16(int8_t  value) ;

/// @brief Method ToInt16, addr 0x5a7ba40, size 0x60, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint16_t  value) ;

/// @brief Method ToInt16, addr 0x5a7bb04, size 0x64, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint32_t  value) ;

/// @brief Method ToInt16, addr 0x5a7bbcc, size 0x64, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint64_t  value) ;

/// @brief Method ToInt16, addr 0x5a767a4, size 0x8, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint8_t  value) ;

/// @brief Method ToInt32, addr 0x5a7c7b4, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value) ;

/// @brief Method ToInt32, addr 0x5a7ec50, size 0xdc, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt32, addr 0x5a7c830, size 0x18, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt32, addr 0x5a7c73c, size 0x78, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Decimal  value) ;

/// @brief Method ToInt32, addr 0x5a7c3a4, size 0xf8, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Object*  value) ;

/// @brief Method ToInt32, addr 0x5a7c49c, size 0x108, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt32, addr 0x5a74dac, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(bool  value) ;

/// @brief Method ToInt32, addr 0x5a778dc, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(char16_t  value) ;

/// @brief Method ToInt32, addr 0x5a7b034, size 0xf4, virtual false, abstract: false, final false
static inline int32_t ToInt32(double_t  value) ;

/// @brief Method ToInt32, addr 0x5a7c6dc, size 0x60, virtual false, abstract: false, final false
static inline int32_t ToInt32(float_t  value) ;

/// @brief Method ToInt32, addr 0x5a7c5a4, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(int16_t  value) ;

/// @brief Method ToInt32, addr 0x5a7c614, size 0x64, virtual false, abstract: false, final false
static inline int32_t ToInt32(int64_t  value) ;

/// @brief Method ToInt32, addr 0x5a7c5ac, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint16_t  value) ;

/// @brief Method ToInt32, addr 0x5a7c5b4, size 0x60, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint32_t  value) ;

/// @brief Method ToInt32, addr 0x5a7c678, size 0x64, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint64_t  value) ;

/// @brief Method ToInt32, addr 0x5a7686c, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint8_t  value) ;

/// @brief Method ToInt64, addr 0x5a7d240, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value) ;

/// @brief Method ToInt64, addr 0x5a7ee08, size 0xdc, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt64, addr 0x5a7d2bc, size 0x18, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt64, addr 0x5a7d1c8, size 0x78, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Decimal  value) ;

/// @brief Method ToInt64, addr 0x5a7cdc8, size 0xf8, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Object*  value) ;

/// @brief Method ToInt64, addr 0x5a7cec0, size 0x108, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt64, addr 0x5a74e7c, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(bool  value) ;

/// @brief Method ToInt64, addr 0x5a779a4, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(char16_t  value) ;

/// @brief Method ToInt64, addr 0x5a7d0b0, size 0x118, virtual false, abstract: false, final false
static inline int64_t ToInt64(double_t  value) ;

/// @brief Method ToInt64, addr 0x5a7d050, size 0x60, virtual false, abstract: false, final false
static inline int64_t ToInt64(float_t  value) ;

/// @brief Method ToInt64, addr 0x5a7cfd0, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(int16_t  value) ;

/// @brief Method ToInt64, addr 0x5a7cfe0, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(int32_t  value) ;

/// @brief Method ToInt64, addr 0x5a7cfc8, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(int8_t  value) ;

/// @brief Method ToInt64, addr 0x5a7cfd8, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint16_t  value) ;

/// @brief Method ToInt64, addr 0x5a7cfe8, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint32_t  value) ;

/// @brief Method ToInt64, addr 0x5a7cff0, size 0x60, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint64_t  value) ;

/// @brief Method ToInt64, addr 0x5a76934, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint8_t  value) ;

/// @brief Method ToSByte, addr 0x5a7e8d0, size 0x130, virtual false, abstract: false, final false
static inline int8_t ToSByte(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToSByte, addr 0x5a7b1a0, size 0x10, virtual false, abstract: false, final false
static inline int8_t ToSByte(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSByte, addr 0x5a7b128, size 0x78, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Decimal  value) ;

/// @brief Method ToSByte, addr 0x5a7ab0c, size 0xf8, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Object*  value) ;

/// @brief Method ToSByte, addr 0x5a7ac04, size 0x108, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSByte, addr 0x5a74c0c, size 0x8, virtual false, abstract: false, final false
static inline int8_t ToSByte(bool  value) ;

/// @brief Method ToSByte, addr 0x5a77638, size 0x68, virtual false, abstract: false, final false
static inline int8_t ToSByte(char16_t  value) ;

/// @brief Method ToSByte, addr 0x5a7afd0, size 0x64, virtual false, abstract: false, final false
static inline int8_t ToSByte(double_t  value) ;

/// @brief Method ToSByte, addr 0x5a7af70, size 0x60, virtual false, abstract: false, final false
static inline int8_t ToSByte(float_t  value) ;

/// @brief Method ToSByte, addr 0x5a7ad0c, size 0x6c, virtual false, abstract: false, final false
static inline int8_t ToSByte(int16_t  value) ;

/// @brief Method ToSByte, addr 0x5a7ade0, size 0x64, virtual false, abstract: false, final false
static inline int8_t ToSByte(int32_t  value) ;

/// @brief Method ToSByte, addr 0x5a7aea8, size 0x64, virtual false, abstract: false, final false
static inline int8_t ToSByte(int64_t  value) ;

/// @brief Method ToSByte, addr 0x5a7ad78, size 0x68, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint16_t  value) ;

/// @brief Method ToSByte, addr 0x5a7ae44, size 0x64, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint32_t  value) ;

/// @brief Method ToSByte, addr 0x5a7af0c, size 0x64, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint64_t  value) ;

/// @brief Method ToSByte, addr 0x5a766e0, size 0x60, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint8_t  value) ;

/// @brief Method ToSingle, addr 0x5a7db14, size 0x7c, virtual false, abstract: false, final false
static inline float_t ToSingle(::StringW  value) ;

/// @brief Method ToSingle, addr 0x5a7db90, size 0x1c, virtual false, abstract: false, final false
static inline float_t ToSingle(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSingle, addr 0x5a7daa8, size 0x6c, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Decimal  value) ;

/// @brief Method ToSingle, addr 0x5a7d858, size 0xf8, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Object*  value) ;

/// @brief Method ToSingle, addr 0x5a7d950, size 0x108, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSingle, addr 0x5a74f54, size 0x14, virtual false, abstract: false, final false
static inline float_t ToSingle(bool  value) ;

/// @brief Method ToSingle, addr 0x5a7daa0, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(double_t  value) ;

/// @brief Method ToSingle, addr 0x5a7da64, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(int16_t  value) ;

/// @brief Method ToSingle, addr 0x5a7da7c, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(int32_t  value) ;

/// @brief Method ToSingle, addr 0x5a7da8c, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(int64_t  value) ;

/// @brief Method ToSingle, addr 0x5a7da58, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(int8_t  value) ;

/// @brief Method ToSingle, addr 0x5a7da70, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(uint16_t  value) ;

/// @brief Method ToSingle, addr 0x5a7da84, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(uint32_t  value) ;

/// @brief Method ToSingle, addr 0x5a7da94, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(uint64_t  value) ;

/// @brief Method ToSingle, addr 0x5a769fc, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(uint8_t  value) ;

/// @brief Method ToString, addr 0x5a7e5cc, size 0x198, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x5a7e764, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(char16_t  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x5a7e794, size 0x1c, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x5a7f044, size 0x80, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  value, int32_t  toBase) ;

/// @brief Method ToString, addr 0x5a7f0c4, size 0x80, virtual false, abstract: false, final false
static inline ::StringW ToString(int64_t  value, int32_t  toBase) ;

/// @brief Method ToString, addr 0x5a7efc0, size 0x84, virtual false, abstract: false, final false
static inline ::StringW ToString(uint8_t  value, int32_t  toBase) ;

/// @brief Method ToUInt16, addr 0x5a7eb30, size 0x120, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToUInt16, addr 0x5a7c38c, size 0x18, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt16, addr 0x5a7c314, size 0x78, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Decimal  value) ;

/// @brief Method ToUInt16, addr 0x5a7be00, size 0xf8, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Object*  value) ;

/// @brief Method ToUInt16, addr 0x5a7bef8, size 0x108, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt16, addr 0x5a74d44, size 0x8, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(bool  value) ;

/// @brief Method ToUInt16, addr 0x5a7787c, size 0x4, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(char16_t  value) ;

/// @brief Method ToUInt16, addr 0x5a7c2b0, size 0x64, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(double_t  value) ;

/// @brief Method ToUInt16, addr 0x5a7c250, size 0x60, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(float_t  value) ;

/// @brief Method ToUInt16, addr 0x5a7c060, size 0x60, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int16_t  value) ;

/// @brief Method ToUInt16, addr 0x5a7c0c0, size 0x64, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int32_t  value) ;

/// @brief Method ToUInt16, addr 0x5a7c188, size 0x64, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int64_t  value) ;

/// @brief Method ToUInt16, addr 0x5a7c000, size 0x60, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int8_t  value) ;

/// @brief Method ToUInt16, addr 0x5a7c124, size 0x64, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint32_t  value) ;

/// @brief Method ToUInt16, addr 0x5a7c1ec, size 0x64, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint64_t  value) ;

/// @brief Method ToUInt16, addr 0x5a76808, size 0x8, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint8_t  value) ;

/// @brief Method ToUInt32, addr 0x5a7ed2c, size 0xdc, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToUInt32, addr 0x5a7cdb0, size 0x18, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt32, addr 0x5a7cd38, size 0x78, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Decimal  value) ;

/// @brief Method ToUInt32, addr 0x5a7c848, size 0xf8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Object*  value) ;

/// @brief Method ToUInt32, addr 0x5a7c940, size 0x108, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt32, addr 0x5a74e14, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(bool  value) ;

/// @brief Method ToUInt32, addr 0x5a77940, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(char16_t  value) ;

/// @brief Method ToUInt32, addr 0x5a7cc98, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(double_t  value) ;

/// @brief Method ToUInt32, addr 0x5a7cc38, size 0x60, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(float_t  value) ;

/// @brief Method ToUInt32, addr 0x5a7caa8, size 0x60, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int16_t  value) ;

/// @brief Method ToUInt32, addr 0x5a7cb10, size 0x60, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int32_t  value) ;

/// @brief Method ToUInt32, addr 0x5a7cb70, size 0x64, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int64_t  value) ;

/// @brief Method ToUInt32, addr 0x5a7ca48, size 0x60, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int8_t  value) ;

/// @brief Method ToUInt32, addr 0x5a7cb08, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint16_t  value) ;

/// @brief Method ToUInt32, addr 0x5a7cbd4, size 0x64, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint64_t  value) ;

/// @brief Method ToUInt32, addr 0x5a768d0, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint8_t  value) ;

/// @brief Method ToUInt64, addr 0x5a7eee4, size 0xdc, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToUInt64, addr 0x5a7d840, size 0x18, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt64, addr 0x5a7d7c8, size 0x78, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Decimal  value) ;

/// @brief Method ToUInt64, addr 0x5a7d2d4, size 0xf8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Object*  value) ;

/// @brief Method ToUInt64, addr 0x5a7d3cc, size 0x108, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt64, addr 0x5a74ee4, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(bool  value) ;

/// @brief Method ToUInt64, addr 0x5a77a08, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(char16_t  value) ;

/// @brief Method ToUInt64, addr 0x5a7d6c4, size 0x104, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(double_t  value) ;

/// @brief Method ToUInt64, addr 0x5a7d664, size 0x60, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(float_t  value) ;

/// @brief Method ToUInt64, addr 0x5a7d534, size 0x60, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int16_t  value) ;

/// @brief Method ToUInt64, addr 0x5a7d59c, size 0x60, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int32_t  value) ;

/// @brief Method ToUInt64, addr 0x5a7d604, size 0x60, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int64_t  value) ;

/// @brief Method ToUInt64, addr 0x5a7d4d4, size 0x60, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int8_t  value) ;

/// @brief Method ToUInt64, addr 0x5a7d594, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint16_t  value) ;

/// @brief Method ToUInt64, addr 0x5a7d5fc, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint32_t  value) ;

/// @brief Method ToUInt64, addr 0x5a76998, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint8_t  value) ;

/// @brief Method TryDecodeFromUtf16, addr 0x5a788e0, size 0x380, virtual false, abstract: false, final false
static inline bool TryDecodeFromUtf16(::System::ReadOnlySpan_1<char16_t>  utf16, ::System::Span_1<uint8_t>  bytes, ::ByRef<int32_t>  consumed, ::ByRef<int32_t>  written) ;

/// @brief Method TryFromBase64Chars, addr 0x5a7fe70, size 0x510, virtual false, abstract: false, final false
static inline bool TryFromBase64Chars(::System::ReadOnlySpan_1<char16_t>  chars, ::System::Span_1<uint8_t>  bytes, ::ByRef<int32_t>  bytesWritten) ;

/// @brief Method WriteThreeLowOrderBytes, addr 0x5a78cb0, size 0x18, virtual false, abstract: false, final false
static inline void WriteThreeLowOrderBytes(::ByRef<uint8_t>  destination, int32_t  value) ;

static inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> getStaticF_ConvertTypes() ;

static inline ::System::Object* getStaticF_DBNull() ;

static inline ::System::Type* getStaticF_EnumType() ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_base64Table() ;

static inline ::ArrayW<int8_t,::Array<int8_t>*> getStaticF_s_decodingMap() ;

static inline void setStaticF_ConvertTypes(::ArrayW<::System::Type*,::Array<::System::Type*>*>  value) ;

static inline void setStaticF_DBNull(::System::Object*  value) ;

static inline void setStaticF_EnumType(::System::Type*  value) ;

static inline void setStaticF_base64Table(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline void setStaticF_s_decodingMap(::ArrayW<int8_t,::Array<int8_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Convert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Convert(Convert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Convert(Convert const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2366};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Convert, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::Convert);
DEFINE_IL2CPP_ARG_TYPE(::System::Convert*, "System", "Convert");
