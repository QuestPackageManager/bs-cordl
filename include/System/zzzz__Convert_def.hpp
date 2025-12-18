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
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
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
  __declspec(property(get = getStaticF_ConvertTypes, put = setStaticF_ConvertTypes)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ConvertTypes;

  /// @brief Field DBNull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DBNull, put = setStaticF_DBNull)) ::System::Object* DBNull;

  /// @brief Field EnumType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EnumType, put = setStaticF_EnumType)) ::System::Type* EnumType;

  /// @brief Field base64Table, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_base64Table, put = setStaticF_base64Table)) ::ArrayW<char16_t, ::Array<char16_t>*> base64Table;

  /// @brief Field s_decodingMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_decodingMap, put = setStaticF_s_decodingMap)) ::ArrayW<int8_t, ::Array<int8_t>*> s_decodingMap;

  /// @brief Method ChangeType, addr 0x5a0561c, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType);

  /// @brief Method ChangeType, addr 0x5a056c0, size 0x928, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType, ::System::IFormatProvider* provider);

  /// @brief Method ChangeType, addr 0x5a04da0, size 0x87c, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::TypeCode typeCode, ::System::IFormatProvider* provider);

  /// @brief Method ConvertToBase64Array, addr 0x5a0b5f0, size 0x23c, virtual false, abstract: false, final false
  static inline int32_t ConvertToBase64Array(char16_t* outChars, uint8_t* inData, int32_t offset, int32_t length, bool insertLineBreaks);

  /// @brief Method CopyToTempBufferWithoutWhiteSpace, addr 0x5a0c314, size 0x138, virtual false, abstract: false, final false
  static inline void CopyToTempBufferWithoutWhiteSpace(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<char16_t> tempBuffer, ::ByRef<int32_t> consumed, ::ByRef<int32_t> charsWritten);

  /// @brief Method Decode, addr 0x5a04c70, size 0x50, virtual false, abstract: false, final false
  static inline int32_t Decode(::ByRef<char16_t> encodedChars, ::ByRef<int8_t> decodingMap);

  /// @brief Method DefaultToType, addr 0x5a011d4, size 0xab0, virtual false, abstract: false, final false
  static inline ::System::Object* DefaultToType(::System::IConvertible* value, ::System::Type* targetType, ::System::IFormatProvider* provider);

  /// @brief Method FromBase64CharArray, addr 0x5a0c46c, size 0x204, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBase64CharArray(::ArrayW<char16_t, ::Array<char16_t>*> inArray, int32_t offset, int32_t length);

  /// @brief Method FromBase64CharPtr, addr 0x5a0bc64, size 0x1a0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBase64CharPtr(char16_t* inputPtr, int32_t inputLength);

  /// @brief Method FromBase64String, addr 0x5a0bbbc, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBase64String(::StringW s);

  /// @brief Method FromBase64_ComputeResultLength, addr 0x5a0c670, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t FromBase64_ComputeResultLength(char16_t* inputPtr, int32_t inputLength);

  /// @brief Method GetTypeCode, addr 0x5a04cd8, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::TypeCode GetTypeCode(::System::Object* value);

  /// @brief Method IsSpace, addr 0x5a0c44c, size 0x20, virtual false, abstract: false, final false
  static inline bool IsSpace(char16_t c);

  /// @brief Method ThrowByteOverflowException, addr 0x5a06034, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowByteOverflowException();

  /// @brief Method ThrowCharOverflowException, addr 0x5a05fe8, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowCharOverflowException();

  /// @brief Method ThrowInt16OverflowException, addr 0x5a060cc, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInt16OverflowException();

  /// @brief Method ThrowInt32OverflowException, addr 0x5a06164, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInt32OverflowException();

  /// @brief Method ThrowInt64OverflowException, addr 0x5a061fc, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInt64OverflowException();

  /// @brief Method ThrowSByteOverflowException, addr 0x5a06080, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowSByteOverflowException();

  /// @brief Method ThrowUInt16OverflowException, addr 0x5a06118, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowUInt16OverflowException();

  /// @brief Method ThrowUInt32OverflowException, addr 0x5a061b0, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowUInt32OverflowException();

  /// @brief Method ThrowUInt64OverflowException, addr 0x5a06248, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowUInt64OverflowException();

  /// @brief Method ToBase64CharArray, addr 0x5a0b82c, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t, ::Array<char16_t>*> outArray, int32_t offsetOut);

  /// @brief Method ToBase64CharArray, addr 0x5a0b8b8, size 0x304, virtual false, abstract: false, final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t, ::Array<char16_t>*> outArray, int32_t offsetOut,
                                          ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64String, addr 0x5a0b198, size 0x184, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::System::ReadOnlySpan_1<uint8_t> bytes, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64String, addr 0x5a0b0d8, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray);

  /// @brief Method ToBase64String, addr 0x5a0b31c, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offset, int32_t length);

  /// @brief Method ToBase64String, addr 0x5a0b390, size 0x1b0, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offset, int32_t length, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64_CalculateAndValidateOutputLength, addr 0x5a0b540, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t ToBase64_CalculateAndValidateOutputLength(int32_t inputLength, bool insertLineBreaks);

  /// @brief Method ToBoolean, addr 0x5a064e8, size 0x30, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW value);

  /// @brief Method ToBoolean, addr 0x5a06518, size 0x30, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean, addr 0x5a06560, size 0x78, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Decimal value);

  /// @brief Method ToBoolean, addr 0x5a06294, size 0xf8, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToBoolean, addr 0x5a0638c, size 0x108, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean, addr 0x5a06554, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(double_t value);

  /// @brief Method ToBoolean, addr 0x5a06548, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(float_t value);

  /// @brief Method ToBoolean, addr 0x5a064a0, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int16_t value);

  /// @brief Method ToBoolean, addr 0x5a064b8, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int32_t value);

  /// @brief Method ToBoolean, addr 0x5a064d0, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int64_t value);

  /// @brief Method ToBoolean, addr 0x5a06494, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int8_t value);

  /// @brief Method ToBoolean, addr 0x5a064ac, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint16_t value);

  /// @brief Method ToBoolean, addr 0x5a064c4, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint32_t value);

  /// @brief Method ToBoolean, addr 0x5a064dc, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint64_t value);

  /// @brief Method ToBoolean, addr 0x5a02624, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint8_t value);

  /// @brief Method ToByte, addr 0x5a077bc, size 0x78, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value);

  /// @brief Method ToByte, addr 0x5a0a744, size 0x120, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value, int32_t fromBase);

  /// @brief Method ToByte, addr 0x5a07834, size 0x14, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x5a07744, size 0x78, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Decimal value);

  /// @brief Method ToByte, addr 0x5a071c0, size 0xf8, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Object* value);

  /// @brief Method ToByte, addr 0x5a072b8, size 0x108, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x5a00c84, size 0x8, virtual false, abstract: false, final false
  static inline uint8_t ToByte(bool value);

  /// @brief Method ToByte, addr 0x5a0370c, size 0x68, virtual false, abstract: false, final false
  static inline uint8_t ToByte(char16_t value);

  /// @brief Method ToByte, addr 0x5a076e0, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(double_t value);

  /// @brief Method ToByte, addr 0x5a07680, size 0x60, virtual false, abstract: false, final false
  static inline uint8_t ToByte(float_t value);

  /// @brief Method ToByte, addr 0x5a07420, size 0x68, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int16_t value);

  /// @brief Method ToByte, addr 0x5a074f0, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int32_t value);

  /// @brief Method ToByte, addr 0x5a075b8, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int64_t value);

  /// @brief Method ToByte, addr 0x5a073c0, size 0x60, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int8_t value);

  /// @brief Method ToByte, addr 0x5a07488, size 0x68, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint16_t value);

  /// @brief Method ToByte, addr 0x5a07554, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint32_t value);

  /// @brief Method ToByte, addr 0x5a0761c, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint64_t value);

  /// @brief Method ToChar, addr 0x5a06a2c, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW value);

  /// @brief Method ToChar, addr 0x5a06a84, size 0x98, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToChar, addr 0x5a065d8, size 0xf8, virtual false, abstract: false, final false
  static inline char16_t ToChar(::System::Object* value);

  /// @brief Method ToChar, addr 0x5a066d0, size 0x108, virtual false, abstract: false, final false
  static inline char16_t ToChar(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToChar, addr 0x5a06838, size 0x60, virtual false, abstract: false, final false
  static inline char16_t ToChar(int16_t value);

  /// @brief Method ToChar, addr 0x5a0689c, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(int32_t value);

  /// @brief Method ToChar, addr 0x5a06964, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(int64_t value);

  /// @brief Method ToChar, addr 0x5a067d8, size 0x60, virtual false, abstract: false, final false
  static inline char16_t ToChar(int8_t value);

  /// @brief Method ToChar, addr 0x5a06898, size 0x4, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint16_t value);

  /// @brief Method ToChar, addr 0x5a06900, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint32_t value);

  /// @brief Method ToChar, addr 0x5a069c8, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint64_t value);

  /// @brief Method ToChar, addr 0x5a0268c, size 0x8, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint8_t value);

  /// @brief Method ToDateTime, addr 0x5a0a4dc, size 0x84, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDateTime, addr 0x5a0a3a4, size 0x138, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x5a0a314, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x5a09e14, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x5a01054, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(bool value);

  /// @brief Method ToDecimal, addr 0x5a0a27c, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(double_t value);

  /// @brief Method ToDecimal, addr 0x5a0a1e4, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(float_t value);

  /// @brief Method ToDecimal, addr 0x5a09fa8, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int16_t value);

  /// @brief Method ToDecimal, addr 0x5a0a068, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int32_t value);

  /// @brief Method ToDecimal, addr 0x5a0a124, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int64_t value);

  /// @brief Method ToDecimal, addr 0x5a09f44, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int8_t value);

  /// @brief Method ToDecimal, addr 0x5a0a00c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint16_t value);

  /// @brief Method ToDecimal, addr 0x5a0a0c8, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint32_t value);

  /// @brief Method ToDecimal, addr 0x5a0a188, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint64_t value);

  /// @brief Method ToDecimal, addr 0x5a02adc, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint8_t value);

  /// @brief Method ToDouble, addr 0x5a09df8, size 0x1c, virtual false, abstract: false, final false
  static inline double_t ToDouble(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x5a09d8c, size 0x6c, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Decimal value);

  /// @brief Method ToDouble, addr 0x5a09b40, size 0xf8, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToDouble, addr 0x5a09c38, size 0x108, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x5a00fe0, size 0x14, virtual false, abstract: false, final false
  static inline double_t ToDouble(bool value);

  /// @brief Method ToDouble, addr 0x5a09d84, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(float_t value);

  /// @brief Method ToDouble, addr 0x5a09d4c, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(int16_t value);

  /// @brief Method ToDouble, addr 0x5a09d64, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(int32_t value);

  /// @brief Method ToDouble, addr 0x5a09d74, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(int64_t value);

  /// @brief Method ToDouble, addr 0x5a09d40, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(int8_t value);

  /// @brief Method ToDouble, addr 0x5a09d58, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint16_t value);

  /// @brief Method ToDouble, addr 0x5a09d6c, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint32_t value);

  /// @brief Method ToDouble, addr 0x5a09d7c, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint64_t value);

  /// @brief Method ToDouble, addr 0x5a02a74, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint8_t value);

  /// @brief Method ToInt16, addr 0x5a0a994, size 0x130, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value, int32_t fromBase);

  /// @brief Method ToInt16, addr 0x5a07d7c, size 0x18, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x5a07d04, size 0x78, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Decimal value);

  /// @brief Method ToInt16, addr 0x5a07848, size 0xf8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Object* value);

  /// @brief Method ToInt16, addr 0x5a07940, size 0x108, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x5a00cec, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(bool value);

  /// @brief Method ToInt16, addr 0x5a037d0, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(char16_t value);

  /// @brief Method ToInt16, addr 0x5a07ca0, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(double_t value);

  /// @brief Method ToInt16, addr 0x5a07c40, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(float_t value);

  /// @brief Method ToInt16, addr 0x5a07ab0, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int32_t value);

  /// @brief Method ToInt16, addr 0x5a07b78, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int64_t value);

  /// @brief Method ToInt16, addr 0x5a07a48, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int8_t value);

  /// @brief Method ToInt16, addr 0x5a07a50, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint16_t value);

  /// @brief Method ToInt16, addr 0x5a07b14, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint32_t value);

  /// @brief Method ToInt16, addr 0x5a07bdc, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint64_t value);

  /// @brief Method ToInt16, addr 0x5a027b4, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint8_t value);

  /// @brief Method ToInt32, addr 0x5a08748, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32, addr 0x5a0abe4, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value, int32_t fromBase);

  /// @brief Method ToInt32, addr 0x5a087c4, size 0x18, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x5a086d0, size 0x78, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Decimal value);

  /// @brief Method ToInt32, addr 0x5a08338, size 0xf8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt32, addr 0x5a08430, size 0x108, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x5a00dbc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(bool value);

  /// @brief Method ToInt32, addr 0x5a038ec, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(char16_t value);

  /// @brief Method ToInt32, addr 0x5a07044, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t ToInt32(double_t value);

  /// @brief Method ToInt32, addr 0x5a08670, size 0x60, virtual false, abstract: false, final false
  static inline int32_t ToInt32(float_t value);

  /// @brief Method ToInt32, addr 0x5a08538, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(int16_t value);

  /// @brief Method ToInt32, addr 0x5a085a8, size 0x64, virtual false, abstract: false, final false
  static inline int32_t ToInt32(int64_t value);

  /// @brief Method ToInt32, addr 0x5a08540, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint16_t value);

  /// @brief Method ToInt32, addr 0x5a08548, size 0x60, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint32_t value);

  /// @brief Method ToInt32, addr 0x5a0860c, size 0x64, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint64_t value);

  /// @brief Method ToInt32, addr 0x5a0287c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint8_t value);

  /// @brief Method ToInt64, addr 0x5a091d4, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64, addr 0x5a0ad9c, size 0xdc, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value, int32_t fromBase);

  /// @brief Method ToInt64, addr 0x5a09250, size 0x18, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x5a0915c, size 0x78, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Decimal value);

  /// @brief Method ToInt64, addr 0x5a08d5c, size 0xf8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToInt64, addr 0x5a08e54, size 0x108, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x5a00e8c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(bool value);

  /// @brief Method ToInt64, addr 0x5a039b4, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(char16_t value);

  /// @brief Method ToInt64, addr 0x5a09044, size 0x118, virtual false, abstract: false, final false
  static inline int64_t ToInt64(double_t value);

  /// @brief Method ToInt64, addr 0x5a08fe4, size 0x60, virtual false, abstract: false, final false
  static inline int64_t ToInt64(float_t value);

  /// @brief Method ToInt64, addr 0x5a08f64, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int16_t value);

  /// @brief Method ToInt64, addr 0x5a08f74, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int32_t value);

  /// @brief Method ToInt64, addr 0x5a08f5c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int8_t value);

  /// @brief Method ToInt64, addr 0x5a08f6c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint16_t value);

  /// @brief Method ToInt64, addr 0x5a08f7c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint32_t value);

  /// @brief Method ToInt64, addr 0x5a08f84, size 0x60, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint64_t value);

  /// @brief Method ToInt64, addr 0x5a02944, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint8_t value);

  /// @brief Method ToSByte, addr 0x5a0a864, size 0x130, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW value, int32_t fromBase);

  /// @brief Method ToSByte, addr 0x5a071b0, size 0x10, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSByte, addr 0x5a07138, size 0x78, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Decimal value);

  /// @brief Method ToSByte, addr 0x5a06b1c, size 0xf8, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Object* value);

  /// @brief Method ToSByte, addr 0x5a06c14, size 0x108, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToSByte, addr 0x5a00c1c, size 0x8, virtual false, abstract: false, final false
  static inline int8_t ToSByte(bool value);

  /// @brief Method ToSByte, addr 0x5a03648, size 0x68, virtual false, abstract: false, final false
  static inline int8_t ToSByte(char16_t value);

  /// @brief Method ToSByte, addr 0x5a06fe0, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(double_t value);

  /// @brief Method ToSByte, addr 0x5a06f80, size 0x60, virtual false, abstract: false, final false
  static inline int8_t ToSByte(float_t value);

  /// @brief Method ToSByte, addr 0x5a06d1c, size 0x6c, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int16_t value);

  /// @brief Method ToSByte, addr 0x5a06df0, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int32_t value);

  /// @brief Method ToSByte, addr 0x5a06eb8, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int64_t value);

  /// @brief Method ToSByte, addr 0x5a06d88, size 0x68, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint16_t value);

  /// @brief Method ToSByte, addr 0x5a06e54, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint32_t value);

  /// @brief Method ToSByte, addr 0x5a06f1c, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint64_t value);

  /// @brief Method ToSByte, addr 0x5a026f0, size 0x60, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint8_t value);

  /// @brief Method ToSingle, addr 0x5a09aa8, size 0x7c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW value);

  /// @brief Method ToSingle, addr 0x5a09b24, size 0x1c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x5a09a3c, size 0x6c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Decimal value);

  /// @brief Method ToSingle, addr 0x5a097ec, size 0xf8, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToSingle, addr 0x5a098e4, size 0x108, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x5a00f64, size 0x14, virtual false, abstract: false, final false
  static inline float_t ToSingle(bool value);

  /// @brief Method ToSingle, addr 0x5a09a34, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(double_t value);

  /// @brief Method ToSingle, addr 0x5a099f8, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(int16_t value);

  /// @brief Method ToSingle, addr 0x5a09a10, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(int32_t value);

  /// @brief Method ToSingle, addr 0x5a09a20, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(int64_t value);

  /// @brief Method ToSingle, addr 0x5a099ec, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(int8_t value);

  /// @brief Method ToSingle, addr 0x5a09a04, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint16_t value);

  /// @brief Method ToSingle, addr 0x5a09a18, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint32_t value);

  /// @brief Method ToSingle, addr 0x5a09a28, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint64_t value);

  /// @brief Method ToSingle, addr 0x5a02a0c, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint8_t value);

  /// @brief Method ToString, addr 0x5a0a560, size 0x198, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x5a0a6f8, size 0x30, virtual false, abstract: false, final false
  static inline ::StringW ToString(char16_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x5a0a728, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x5a0afd8, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value, int32_t toBase);

  /// @brief Method ToString, addr 0x5a0b058, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value, int32_t toBase);

  /// @brief Method ToString, addr 0x5a0af54, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint8_t value, int32_t toBase);

  /// @brief Method ToUInt16, addr 0x5a0aac4, size 0x120, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt16, addr 0x5a08320, size 0x18, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt16, addr 0x5a082a8, size 0x78, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Decimal value);

  /// @brief Method ToUInt16, addr 0x5a07d94, size 0xf8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Object* value);

  /// @brief Method ToUInt16, addr 0x5a07e8c, size 0x108, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt16, addr 0x5a00d54, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(bool value);

  /// @brief Method ToUInt16, addr 0x5a0388c, size 0x4, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(char16_t value);

  /// @brief Method ToUInt16, addr 0x5a08244, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(double_t value);

  /// @brief Method ToUInt16, addr 0x5a081e4, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(float_t value);

  /// @brief Method ToUInt16, addr 0x5a07ff4, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int16_t value);

  /// @brief Method ToUInt16, addr 0x5a08054, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int32_t value);

  /// @brief Method ToUInt16, addr 0x5a0811c, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int64_t value);

  /// @brief Method ToUInt16, addr 0x5a07f94, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int8_t value);

  /// @brief Method ToUInt16, addr 0x5a080b8, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint32_t value);

  /// @brief Method ToUInt16, addr 0x5a08180, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint64_t value);

  /// @brief Method ToUInt16, addr 0x5a02818, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint8_t value);

  /// @brief Method ToUInt32, addr 0x5a0acc0, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt32, addr 0x5a08d44, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt32, addr 0x5a08ccc, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Decimal value);

  /// @brief Method ToUInt32, addr 0x5a087dc, size 0xf8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Object* value);

  /// @brief Method ToUInt32, addr 0x5a088d4, size 0x108, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt32, addr 0x5a00e24, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(bool value);

  /// @brief Method ToUInt32, addr 0x5a03950, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(char16_t value);

  /// @brief Method ToUInt32, addr 0x5a08c2c, size 0xa0, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(double_t value);

  /// @brief Method ToUInt32, addr 0x5a08bcc, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(float_t value);

  /// @brief Method ToUInt32, addr 0x5a08a3c, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int16_t value);

  /// @brief Method ToUInt32, addr 0x5a08aa4, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int32_t value);

  /// @brief Method ToUInt32, addr 0x5a08b04, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int64_t value);

  /// @brief Method ToUInt32, addr 0x5a089dc, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int8_t value);

  /// @brief Method ToUInt32, addr 0x5a08a9c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint16_t value);

  /// @brief Method ToUInt32, addr 0x5a08b68, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint64_t value);

  /// @brief Method ToUInt32, addr 0x5a028e0, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint8_t value);

  /// @brief Method ToUInt64, addr 0x5a0ae78, size 0xdc, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt64, addr 0x5a097d4, size 0x18, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt64, addr 0x5a0975c, size 0x78, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Decimal value);

  /// @brief Method ToUInt64, addr 0x5a09268, size 0xf8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Object* value);

  /// @brief Method ToUInt64, addr 0x5a09360, size 0x108, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt64, addr 0x5a00ef4, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(bool value);

  /// @brief Method ToUInt64, addr 0x5a03a18, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(char16_t value);

  /// @brief Method ToUInt64, addr 0x5a09658, size 0x104, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(double_t value);

  /// @brief Method ToUInt64, addr 0x5a095f8, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(float_t value);

  /// @brief Method ToUInt64, addr 0x5a094c8, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int16_t value);

  /// @brief Method ToUInt64, addr 0x5a09530, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int32_t value);

  /// @brief Method ToUInt64, addr 0x5a09598, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int64_t value);

  /// @brief Method ToUInt64, addr 0x5a09468, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int8_t value);

  /// @brief Method ToUInt64, addr 0x5a09528, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint16_t value);

  /// @brief Method ToUInt64, addr 0x5a09590, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint32_t value);

  /// @brief Method ToUInt64, addr 0x5a029a8, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint8_t value);

  /// @brief Method TryDecodeFromUtf16, addr 0x5a048f0, size 0x380, virtual false, abstract: false, final false
  static inline bool TryDecodeFromUtf16(::System::ReadOnlySpan_1<char16_t> utf16, ::System::Span_1<uint8_t> bytes, ::ByRef<int32_t> consumed, ::ByRef<int32_t> written);

  /// @brief Method TryFromBase64Chars, addr 0x5a0be04, size 0x510, virtual false, abstract: false, final false
  static inline bool TryFromBase64Chars(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<uint8_t> bytes, ::ByRef<int32_t> bytesWritten);

  /// @brief Method WriteThreeLowOrderBytes, addr 0x5a04cc0, size 0x18, virtual false, abstract: false, final false
  static inline void WriteThreeLowOrderBytes(::ByRef<uint8_t> destination, int32_t value);

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_ConvertTypes();

  static inline ::System::Object* getStaticF_DBNull();

  static inline ::System::Type* getStaticF_EnumType();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_base64Table();

  static inline ::ArrayW<int8_t, ::Array<int8_t>*> getStaticF_s_decodingMap();

  static inline void setStaticF_ConvertTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline void setStaticF_DBNull(::System::Object* value);

  static inline void setStaticF_EnumType(::System::Type* value);

  static inline void setStaticF_base64Table(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_s_decodingMap(::ArrayW<int8_t, ::Array<int8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Convert();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Convert(Convert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Convert(Convert const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2366 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Convert, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Convert);
DEFINE_IL2CPP_ARG_TYPE(::System::Convert*, "System", "Convert");
