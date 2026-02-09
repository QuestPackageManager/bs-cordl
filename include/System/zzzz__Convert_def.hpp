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

/// @brief Method ChangeType, addr 0x5a05b28, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  conversionType) ;

/// @brief Method ChangeType, addr 0x5a05bcc, size 0x928, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  conversionType, ::System::IFormatProvider*  provider) ;

/// @brief Method ChangeType, addr 0x5a052ac, size 0x87c, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::TypeCode  typeCode, ::System::IFormatProvider*  provider) ;

/// @brief Method ConvertToBase64Array, addr 0x5a0bafc, size 0x23c, virtual false, abstract: false, final false
static inline int32_t ConvertToBase64Array(char16_t*  outChars, uint8_t*  inData, int32_t  offset, int32_t  length, bool  insertLineBreaks) ;

/// @brief Method CopyToTempBufferWithoutWhiteSpace, addr 0x5a0c820, size 0x138, virtual false, abstract: false, final false
static inline void CopyToTempBufferWithoutWhiteSpace(::System::ReadOnlySpan_1<char16_t>  chars, ::System::Span_1<char16_t>  tempBuffer, ::ByRef<int32_t>  consumed, ::ByRef<int32_t>  charsWritten) ;

/// @brief Method Decode, addr 0x5a0517c, size 0x50, virtual false, abstract: false, final false
static inline int32_t Decode(::ByRef<char16_t>  encodedChars, ::ByRef<int8_t>  decodingMap) ;

/// @brief Method DefaultToType, addr 0x5a016e0, size 0xab0, virtual false, abstract: false, final false
static inline ::System::Object* DefaultToType(::System::IConvertible*  value, ::System::Type*  targetType, ::System::IFormatProvider*  provider) ;

/// @brief Method FromBase64CharArray, addr 0x5a0c978, size 0x204, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromBase64CharArray(::ArrayW<char16_t,::Array<char16_t>*>  inArray, int32_t  offset, int32_t  length) ;

/// @brief Method FromBase64CharPtr, addr 0x5a0c170, size 0x1a0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromBase64CharPtr(char16_t*  inputPtr, int32_t  inputLength) ;

/// @brief Method FromBase64String, addr 0x5a0c0c8, size 0xa8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromBase64String(::StringW  s) ;

/// @brief Method FromBase64_ComputeResultLength, addr 0x5a0cb7c, size 0xbc, virtual false, abstract: false, final false
static inline int32_t FromBase64_ComputeResultLength(char16_t*  inputPtr, int32_t  inputLength) ;

/// @brief Method GetTypeCode, addr 0x5a051e4, size 0xc8, virtual false, abstract: false, final false
static inline ::System::TypeCode GetTypeCode(::System::Object*  value) ;

/// @brief Method IsSpace, addr 0x5a0c958, size 0x20, virtual false, abstract: false, final false
static inline bool IsSpace(char16_t  c) ;

/// @brief Method ThrowByteOverflowException, addr 0x5a06540, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowByteOverflowException() ;

/// @brief Method ThrowCharOverflowException, addr 0x5a064f4, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowCharOverflowException() ;

/// @brief Method ThrowInt16OverflowException, addr 0x5a065d8, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInt16OverflowException() ;

/// @brief Method ThrowInt32OverflowException, addr 0x5a06670, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInt32OverflowException() ;

/// @brief Method ThrowInt64OverflowException, addr 0x5a06708, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInt64OverflowException() ;

/// @brief Method ThrowSByteOverflowException, addr 0x5a0658c, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowSByteOverflowException() ;

/// @brief Method ThrowUInt16OverflowException, addr 0x5a06624, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowUInt16OverflowException() ;

/// @brief Method ThrowUInt32OverflowException, addr 0x5a066bc, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowUInt32OverflowException() ;

/// @brief Method ThrowUInt64OverflowException, addr 0x5a06754, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowUInt64OverflowException() ;

/// @brief Method ToBase64CharArray, addr 0x5a0bd38, size 0x8c, virtual false, abstract: false, final false
static inline int32_t ToBase64CharArray(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray, int32_t  offsetIn, int32_t  length, ::ArrayW<char16_t,::Array<char16_t>*>  outArray, int32_t  offsetOut) ;

/// @brief Method ToBase64CharArray, addr 0x5a0bdc4, size 0x304, virtual false, abstract: false, final false
static inline int32_t ToBase64CharArray(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray, int32_t  offsetIn, int32_t  length, ::ArrayW<char16_t,::Array<char16_t>*>  outArray, int32_t  offsetOut, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64String, addr 0x5a0b6a4, size 0x184, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::System::ReadOnlySpan_1<uint8_t>  bytes, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64String, addr 0x5a0b5e4, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray) ;

/// @brief Method ToBase64String, addr 0x5a0b828, size 0x74, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray, int32_t  offset, int32_t  length) ;

/// @brief Method ToBase64String, addr 0x5a0b89c, size 0x1b0, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray, int32_t  offset, int32_t  length, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64_CalculateAndValidateOutputLength, addr 0x5a0ba4c, size 0xb0, virtual false, abstract: false, final false
static inline int32_t ToBase64_CalculateAndValidateOutputLength(int32_t  inputLength, bool  insertLineBreaks) ;

/// @brief Method ToBoolean, addr 0x5a069f4, size 0x30, virtual false, abstract: false, final false
static inline bool ToBoolean(::StringW  value) ;

/// @brief Method ToBoolean, addr 0x5a06a24, size 0x30, virtual false, abstract: false, final false
static inline bool ToBoolean(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToBoolean, addr 0x5a06a6c, size 0x78, virtual false, abstract: false, final false
static inline bool ToBoolean(::System::Decimal  value) ;

/// @brief Method ToBoolean, addr 0x5a067a0, size 0xf8, virtual false, abstract: false, final false
static inline bool ToBoolean(::System::Object*  value) ;

/// @brief Method ToBoolean, addr 0x5a06898, size 0x108, virtual false, abstract: false, final false
static inline bool ToBoolean(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToBoolean, addr 0x5a06a60, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(double_t  value) ;

/// @brief Method ToBoolean, addr 0x5a06a54, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(float_t  value) ;

/// @brief Method ToBoolean, addr 0x5a069ac, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int16_t  value) ;

/// @brief Method ToBoolean, addr 0x5a069c4, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int32_t  value) ;

/// @brief Method ToBoolean, addr 0x5a069dc, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int64_t  value) ;

/// @brief Method ToBoolean, addr 0x5a069a0, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int8_t  value) ;

/// @brief Method ToBoolean, addr 0x5a069b8, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint16_t  value) ;

/// @brief Method ToBoolean, addr 0x5a069d0, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint32_t  value) ;

/// @brief Method ToBoolean, addr 0x5a069e8, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint64_t  value) ;

/// @brief Method ToBoolean, addr 0x5a02b30, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint8_t  value) ;

/// @brief Method ToByte, addr 0x5a07cc8, size 0x78, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value) ;

/// @brief Method ToByte, addr 0x5a0ac50, size 0x120, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToByte, addr 0x5a07d40, size 0x14, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToByte, addr 0x5a07c50, size 0x78, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Decimal  value) ;

/// @brief Method ToByte, addr 0x5a076cc, size 0xf8, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Object*  value) ;

/// @brief Method ToByte, addr 0x5a077c4, size 0x108, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToByte, addr 0x5a01190, size 0x8, virtual false, abstract: false, final false
static inline uint8_t ToByte(bool  value) ;

/// @brief Method ToByte, addr 0x5a03c18, size 0x68, virtual false, abstract: false, final false
static inline uint8_t ToByte(char16_t  value) ;

/// @brief Method ToByte, addr 0x5a07bec, size 0x64, virtual false, abstract: false, final false
static inline uint8_t ToByte(double_t  value) ;

/// @brief Method ToByte, addr 0x5a07b8c, size 0x60, virtual false, abstract: false, final false
static inline uint8_t ToByte(float_t  value) ;

/// @brief Method ToByte, addr 0x5a0792c, size 0x68, virtual false, abstract: false, final false
static inline uint8_t ToByte(int16_t  value) ;

/// @brief Method ToByte, addr 0x5a079fc, size 0x64, virtual false, abstract: false, final false
static inline uint8_t ToByte(int32_t  value) ;

/// @brief Method ToByte, addr 0x5a07ac4, size 0x64, virtual false, abstract: false, final false
static inline uint8_t ToByte(int64_t  value) ;

/// @brief Method ToByte, addr 0x5a078cc, size 0x60, virtual false, abstract: false, final false
static inline uint8_t ToByte(int8_t  value) ;

/// @brief Method ToByte, addr 0x5a07994, size 0x68, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint16_t  value) ;

/// @brief Method ToByte, addr 0x5a07a60, size 0x64, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint32_t  value) ;

/// @brief Method ToByte, addr 0x5a07b28, size 0x64, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint64_t  value) ;

/// @brief Method ToChar, addr 0x5a06f38, size 0x58, virtual false, abstract: false, final false
static inline char16_t ToChar(::StringW  value) ;

/// @brief Method ToChar, addr 0x5a06f90, size 0x98, virtual false, abstract: false, final false
static inline char16_t ToChar(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToChar, addr 0x5a06ae4, size 0xf8, virtual false, abstract: false, final false
static inline char16_t ToChar(::System::Object*  value) ;

/// @brief Method ToChar, addr 0x5a06bdc, size 0x108, virtual false, abstract: false, final false
static inline char16_t ToChar(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToChar, addr 0x5a06d44, size 0x60, virtual false, abstract: false, final false
static inline char16_t ToChar(int16_t  value) ;

/// @brief Method ToChar, addr 0x5a06da8, size 0x64, virtual false, abstract: false, final false
static inline char16_t ToChar(int32_t  value) ;

/// @brief Method ToChar, addr 0x5a06e70, size 0x64, virtual false, abstract: false, final false
static inline char16_t ToChar(int64_t  value) ;

/// @brief Method ToChar, addr 0x5a06ce4, size 0x60, virtual false, abstract: false, final false
static inline char16_t ToChar(int8_t  value) ;

/// @brief Method ToChar, addr 0x5a06da4, size 0x4, virtual false, abstract: false, final false
static inline char16_t ToChar(uint16_t  value) ;

/// @brief Method ToChar, addr 0x5a06e0c, size 0x64, virtual false, abstract: false, final false
static inline char16_t ToChar(uint32_t  value) ;

/// @brief Method ToChar, addr 0x5a06ed4, size 0x64, virtual false, abstract: false, final false
static inline char16_t ToChar(uint64_t  value) ;

/// @brief Method ToChar, addr 0x5a02b98, size 0x8, virtual false, abstract: false, final false
static inline char16_t ToChar(uint8_t  value) ;

/// @brief Method ToDateTime, addr 0x5a0a9e8, size 0x84, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDateTime, addr 0x5a0a8b0, size 0x138, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0x5a0a820, size 0x90, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0x5a0a320, size 0x130, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0x5a01560, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(bool  value) ;

/// @brief Method ToDecimal, addr 0x5a0a788, size 0x98, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(double_t  value) ;

/// @brief Method ToDecimal, addr 0x5a0a6f0, size 0x98, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(float_t  value) ;

/// @brief Method ToDecimal, addr 0x5a0a4b4, size 0x64, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int16_t  value) ;

/// @brief Method ToDecimal, addr 0x5a0a574, size 0x60, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int32_t  value) ;

/// @brief Method ToDecimal, addr 0x5a0a630, size 0x64, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int64_t  value) ;

/// @brief Method ToDecimal, addr 0x5a0a450, size 0x64, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int8_t  value) ;

/// @brief Method ToDecimal, addr 0x5a0a518, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint16_t  value) ;

/// @brief Method ToDecimal, addr 0x5a0a5d4, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint32_t  value) ;

/// @brief Method ToDecimal, addr 0x5a0a694, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint64_t  value) ;

/// @brief Method ToDecimal, addr 0x5a02fe8, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint8_t  value) ;

/// @brief Method ToDouble, addr 0x5a0a304, size 0x1c, virtual false, abstract: false, final false
static inline double_t ToDouble(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDouble, addr 0x5a0a298, size 0x6c, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Decimal  value) ;

/// @brief Method ToDouble, addr 0x5a0a04c, size 0xf8, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Object*  value) ;

/// @brief Method ToDouble, addr 0x5a0a144, size 0x108, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDouble, addr 0x5a014ec, size 0x14, virtual false, abstract: false, final false
static inline double_t ToDouble(bool  value) ;

/// @brief Method ToDouble, addr 0x5a0a290, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(float_t  value) ;

/// @brief Method ToDouble, addr 0x5a0a258, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(int16_t  value) ;

/// @brief Method ToDouble, addr 0x5a0a270, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(int32_t  value) ;

/// @brief Method ToDouble, addr 0x5a0a280, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(int64_t  value) ;

/// @brief Method ToDouble, addr 0x5a0a24c, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(int8_t  value) ;

/// @brief Method ToDouble, addr 0x5a0a264, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(uint16_t  value) ;

/// @brief Method ToDouble, addr 0x5a0a278, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(uint32_t  value) ;

/// @brief Method ToDouble, addr 0x5a0a288, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(uint64_t  value) ;

/// @brief Method ToDouble, addr 0x5a02f80, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(uint8_t  value) ;

/// @brief Method ToInt16, addr 0x5a0aea0, size 0x130, virtual false, abstract: false, final false
static inline int16_t ToInt16(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt16, addr 0x5a08288, size 0x18, virtual false, abstract: false, final false
static inline int16_t ToInt16(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt16, addr 0x5a08210, size 0x78, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Decimal  value) ;

/// @brief Method ToInt16, addr 0x5a07d54, size 0xf8, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Object*  value) ;

/// @brief Method ToInt16, addr 0x5a07e4c, size 0x108, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt16, addr 0x5a011f8, size 0x8, virtual false, abstract: false, final false
static inline int16_t ToInt16(bool  value) ;

/// @brief Method ToInt16, addr 0x5a03cdc, size 0x60, virtual false, abstract: false, final false
static inline int16_t ToInt16(char16_t  value) ;

/// @brief Method ToInt16, addr 0x5a081ac, size 0x64, virtual false, abstract: false, final false
static inline int16_t ToInt16(double_t  value) ;

/// @brief Method ToInt16, addr 0x5a0814c, size 0x60, virtual false, abstract: false, final false
static inline int16_t ToInt16(float_t  value) ;

/// @brief Method ToInt16, addr 0x5a07fbc, size 0x64, virtual false, abstract: false, final false
static inline int16_t ToInt16(int32_t  value) ;

/// @brief Method ToInt16, addr 0x5a08084, size 0x64, virtual false, abstract: false, final false
static inline int16_t ToInt16(int64_t  value) ;

/// @brief Method ToInt16, addr 0x5a07f54, size 0x8, virtual false, abstract: false, final false
static inline int16_t ToInt16(int8_t  value) ;

/// @brief Method ToInt16, addr 0x5a07f5c, size 0x60, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint16_t  value) ;

/// @brief Method ToInt16, addr 0x5a08020, size 0x64, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint32_t  value) ;

/// @brief Method ToInt16, addr 0x5a080e8, size 0x64, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint64_t  value) ;

/// @brief Method ToInt16, addr 0x5a02cc0, size 0x8, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint8_t  value) ;

/// @brief Method ToInt32, addr 0x5a08c54, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value) ;

/// @brief Method ToInt32, addr 0x5a0b0f0, size 0xdc, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt32, addr 0x5a08cd0, size 0x18, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt32, addr 0x5a08bdc, size 0x78, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Decimal  value) ;

/// @brief Method ToInt32, addr 0x5a08844, size 0xf8, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Object*  value) ;

/// @brief Method ToInt32, addr 0x5a0893c, size 0x108, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt32, addr 0x5a012c8, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(bool  value) ;

/// @brief Method ToInt32, addr 0x5a03df8, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(char16_t  value) ;

/// @brief Method ToInt32, addr 0x5a07550, size 0xf4, virtual false, abstract: false, final false
static inline int32_t ToInt32(double_t  value) ;

/// @brief Method ToInt32, addr 0x5a08b7c, size 0x60, virtual false, abstract: false, final false
static inline int32_t ToInt32(float_t  value) ;

/// @brief Method ToInt32, addr 0x5a08a44, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(int16_t  value) ;

/// @brief Method ToInt32, addr 0x5a08ab4, size 0x64, virtual false, abstract: false, final false
static inline int32_t ToInt32(int64_t  value) ;

/// @brief Method ToInt32, addr 0x5a08a4c, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint16_t  value) ;

/// @brief Method ToInt32, addr 0x5a08a54, size 0x60, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint32_t  value) ;

/// @brief Method ToInt32, addr 0x5a08b18, size 0x64, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint64_t  value) ;

/// @brief Method ToInt32, addr 0x5a02d88, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint8_t  value) ;

/// @brief Method ToInt64, addr 0x5a096e0, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value) ;

/// @brief Method ToInt64, addr 0x5a0b2a8, size 0xdc, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt64, addr 0x5a0975c, size 0x18, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt64, addr 0x5a09668, size 0x78, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Decimal  value) ;

/// @brief Method ToInt64, addr 0x5a09268, size 0xf8, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Object*  value) ;

/// @brief Method ToInt64, addr 0x5a09360, size 0x108, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt64, addr 0x5a01398, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(bool  value) ;

/// @brief Method ToInt64, addr 0x5a03ec0, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(char16_t  value) ;

/// @brief Method ToInt64, addr 0x5a09550, size 0x118, virtual false, abstract: false, final false
static inline int64_t ToInt64(double_t  value) ;

/// @brief Method ToInt64, addr 0x5a094f0, size 0x60, virtual false, abstract: false, final false
static inline int64_t ToInt64(float_t  value) ;

/// @brief Method ToInt64, addr 0x5a09470, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(int16_t  value) ;

/// @brief Method ToInt64, addr 0x5a09480, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(int32_t  value) ;

/// @brief Method ToInt64, addr 0x5a09468, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(int8_t  value) ;

/// @brief Method ToInt64, addr 0x5a09478, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint16_t  value) ;

/// @brief Method ToInt64, addr 0x5a09488, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint32_t  value) ;

/// @brief Method ToInt64, addr 0x5a09490, size 0x60, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint64_t  value) ;

/// @brief Method ToInt64, addr 0x5a02e50, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint8_t  value) ;

/// @brief Method ToSByte, addr 0x5a0ad70, size 0x130, virtual false, abstract: false, final false
static inline int8_t ToSByte(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToSByte, addr 0x5a076bc, size 0x10, virtual false, abstract: false, final false
static inline int8_t ToSByte(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSByte, addr 0x5a07644, size 0x78, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Decimal  value) ;

/// @brief Method ToSByte, addr 0x5a07028, size 0xf8, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Object*  value) ;

/// @brief Method ToSByte, addr 0x5a07120, size 0x108, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSByte, addr 0x5a01128, size 0x8, virtual false, abstract: false, final false
static inline int8_t ToSByte(bool  value) ;

/// @brief Method ToSByte, addr 0x5a03b54, size 0x68, virtual false, abstract: false, final false
static inline int8_t ToSByte(char16_t  value) ;

/// @brief Method ToSByte, addr 0x5a074ec, size 0x64, virtual false, abstract: false, final false
static inline int8_t ToSByte(double_t  value) ;

/// @brief Method ToSByte, addr 0x5a0748c, size 0x60, virtual false, abstract: false, final false
static inline int8_t ToSByte(float_t  value) ;

/// @brief Method ToSByte, addr 0x5a07228, size 0x6c, virtual false, abstract: false, final false
static inline int8_t ToSByte(int16_t  value) ;

/// @brief Method ToSByte, addr 0x5a072fc, size 0x64, virtual false, abstract: false, final false
static inline int8_t ToSByte(int32_t  value) ;

/// @brief Method ToSByte, addr 0x5a073c4, size 0x64, virtual false, abstract: false, final false
static inline int8_t ToSByte(int64_t  value) ;

/// @brief Method ToSByte, addr 0x5a07294, size 0x68, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint16_t  value) ;

/// @brief Method ToSByte, addr 0x5a07360, size 0x64, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint32_t  value) ;

/// @brief Method ToSByte, addr 0x5a07428, size 0x64, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint64_t  value) ;

/// @brief Method ToSByte, addr 0x5a02bfc, size 0x60, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint8_t  value) ;

/// @brief Method ToSingle, addr 0x5a09fb4, size 0x7c, virtual false, abstract: false, final false
static inline float_t ToSingle(::StringW  value) ;

/// @brief Method ToSingle, addr 0x5a0a030, size 0x1c, virtual false, abstract: false, final false
static inline float_t ToSingle(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSingle, addr 0x5a09f48, size 0x6c, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Decimal  value) ;

/// @brief Method ToSingle, addr 0x5a09cf8, size 0xf8, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Object*  value) ;

/// @brief Method ToSingle, addr 0x5a09df0, size 0x108, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSingle, addr 0x5a01470, size 0x14, virtual false, abstract: false, final false
static inline float_t ToSingle(bool  value) ;

/// @brief Method ToSingle, addr 0x5a09f40, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(double_t  value) ;

/// @brief Method ToSingle, addr 0x5a09f04, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(int16_t  value) ;

/// @brief Method ToSingle, addr 0x5a09f1c, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(int32_t  value) ;

/// @brief Method ToSingle, addr 0x5a09f2c, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(int64_t  value) ;

/// @brief Method ToSingle, addr 0x5a09ef8, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(int8_t  value) ;

/// @brief Method ToSingle, addr 0x5a09f10, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(uint16_t  value) ;

/// @brief Method ToSingle, addr 0x5a09f24, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(uint32_t  value) ;

/// @brief Method ToSingle, addr 0x5a09f34, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(uint64_t  value) ;

/// @brief Method ToSingle, addr 0x5a02f18, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(uint8_t  value) ;

/// @brief Method ToString, addr 0x5a0aa6c, size 0x198, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x5a0ac04, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(char16_t  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x5a0ac34, size 0x1c, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x5a0b4e4, size 0x80, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  value, int32_t  toBase) ;

/// @brief Method ToString, addr 0x5a0b564, size 0x80, virtual false, abstract: false, final false
static inline ::StringW ToString(int64_t  value, int32_t  toBase) ;

/// @brief Method ToString, addr 0x5a0b460, size 0x84, virtual false, abstract: false, final false
static inline ::StringW ToString(uint8_t  value, int32_t  toBase) ;

/// @brief Method ToUInt16, addr 0x5a0afd0, size 0x120, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToUInt16, addr 0x5a0882c, size 0x18, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt16, addr 0x5a087b4, size 0x78, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Decimal  value) ;

/// @brief Method ToUInt16, addr 0x5a082a0, size 0xf8, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Object*  value) ;

/// @brief Method ToUInt16, addr 0x5a08398, size 0x108, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt16, addr 0x5a01260, size 0x8, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(bool  value) ;

/// @brief Method ToUInt16, addr 0x5a03d98, size 0x4, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(char16_t  value) ;

/// @brief Method ToUInt16, addr 0x5a08750, size 0x64, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(double_t  value) ;

/// @brief Method ToUInt16, addr 0x5a086f0, size 0x60, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(float_t  value) ;

/// @brief Method ToUInt16, addr 0x5a08500, size 0x60, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int16_t  value) ;

/// @brief Method ToUInt16, addr 0x5a08560, size 0x64, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int32_t  value) ;

/// @brief Method ToUInt16, addr 0x5a08628, size 0x64, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int64_t  value) ;

/// @brief Method ToUInt16, addr 0x5a084a0, size 0x60, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int8_t  value) ;

/// @brief Method ToUInt16, addr 0x5a085c4, size 0x64, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint32_t  value) ;

/// @brief Method ToUInt16, addr 0x5a0868c, size 0x64, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint64_t  value) ;

/// @brief Method ToUInt16, addr 0x5a02d24, size 0x8, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint8_t  value) ;

/// @brief Method ToUInt32, addr 0x5a0b1cc, size 0xdc, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToUInt32, addr 0x5a09250, size 0x18, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt32, addr 0x5a091d8, size 0x78, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Decimal  value) ;

/// @brief Method ToUInt32, addr 0x5a08ce8, size 0xf8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Object*  value) ;

/// @brief Method ToUInt32, addr 0x5a08de0, size 0x108, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt32, addr 0x5a01330, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(bool  value) ;

/// @brief Method ToUInt32, addr 0x5a03e5c, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(char16_t  value) ;

/// @brief Method ToUInt32, addr 0x5a09138, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(double_t  value) ;

/// @brief Method ToUInt32, addr 0x5a090d8, size 0x60, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(float_t  value) ;

/// @brief Method ToUInt32, addr 0x5a08f48, size 0x60, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int16_t  value) ;

/// @brief Method ToUInt32, addr 0x5a08fb0, size 0x60, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int32_t  value) ;

/// @brief Method ToUInt32, addr 0x5a09010, size 0x64, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int64_t  value) ;

/// @brief Method ToUInt32, addr 0x5a08ee8, size 0x60, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int8_t  value) ;

/// @brief Method ToUInt32, addr 0x5a08fa8, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint16_t  value) ;

/// @brief Method ToUInt32, addr 0x5a09074, size 0x64, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint64_t  value) ;

/// @brief Method ToUInt32, addr 0x5a02dec, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint8_t  value) ;

/// @brief Method ToUInt64, addr 0x5a0b384, size 0xdc, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToUInt64, addr 0x5a09ce0, size 0x18, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt64, addr 0x5a09c68, size 0x78, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Decimal  value) ;

/// @brief Method ToUInt64, addr 0x5a09774, size 0xf8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Object*  value) ;

/// @brief Method ToUInt64, addr 0x5a0986c, size 0x108, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt64, addr 0x5a01400, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(bool  value) ;

/// @brief Method ToUInt64, addr 0x5a03f24, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(char16_t  value) ;

/// @brief Method ToUInt64, addr 0x5a09b64, size 0x104, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(double_t  value) ;

/// @brief Method ToUInt64, addr 0x5a09b04, size 0x60, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(float_t  value) ;

/// @brief Method ToUInt64, addr 0x5a099d4, size 0x60, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int16_t  value) ;

/// @brief Method ToUInt64, addr 0x5a09a3c, size 0x60, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int32_t  value) ;

/// @brief Method ToUInt64, addr 0x5a09aa4, size 0x60, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int64_t  value) ;

/// @brief Method ToUInt64, addr 0x5a09974, size 0x60, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int8_t  value) ;

/// @brief Method ToUInt64, addr 0x5a09a34, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint16_t  value) ;

/// @brief Method ToUInt64, addr 0x5a09a9c, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint32_t  value) ;

/// @brief Method ToUInt64, addr 0x5a02eb4, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint8_t  value) ;

/// @brief Method TryDecodeFromUtf16, addr 0x5a04dfc, size 0x380, virtual false, abstract: false, final false
static inline bool TryDecodeFromUtf16(::System::ReadOnlySpan_1<char16_t>  utf16, ::System::Span_1<uint8_t>  bytes, ::ByRef<int32_t>  consumed, ::ByRef<int32_t>  written) ;

/// @brief Method TryFromBase64Chars, addr 0x5a0c310, size 0x510, virtual false, abstract: false, final false
static inline bool TryFromBase64Chars(::System::ReadOnlySpan_1<char16_t>  chars, ::System::Span_1<uint8_t>  bytes, ::ByRef<int32_t>  bytesWritten) ;

/// @brief Method WriteThreeLowOrderBytes, addr 0x5a051cc, size 0x18, virtual false, abstract: false, final false
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
