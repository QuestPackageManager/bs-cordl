#pragma once
// IWYU pragma private; include "System/Convert.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::Convert*);
DEFINE_IL2CPP_CLASS(::System::Convert*, "System", "Convert");
// [Extension]
// Dependencies System.Object, System.Type
namespace System {
// Is value type: false
// CS Name: System.Convert
class CORDL_TYPE Convert : public ::System::Object {
public:
  // Declarations
  /// @brief Field ConvertTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ConvertTypes, put = setStaticF_ConvertTypes)) ::ArrayW<::System::Type*> ConvertTypes;

  /// @brief Field DBNull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DBNull, put = setStaticF_DBNull)) ::System::Object* DBNull;

  /// @brief Field EnumType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EnumType, put = setStaticF_EnumType)) ::System::Type* EnumType;

  /// @brief Field base64Table, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_base64Table, put = setStaticF_base64Table)) ::ArrayW<char16_t> base64Table;

  /// @brief Field s_decodingMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_decodingMap, put = setStaticF_s_decodingMap)) ::ArrayW<int8_t> s_decodingMap;

  /// @brief Method ChangeType, addr 0x600a41c, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType);

  /// @brief Method ChangeType, addr 0x600a4c0, size 0x928, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType, ::System::IFormatProvider* provider);

  /// @brief Method ChangeType, addr 0x6009ba0, size 0x87c, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::TypeCode typeCode, ::System::IFormatProvider* provider);

  /// @brief Method ConvertToBase64Array, addr 0x601046c, size 0x23c, virtual false, abstract: false, final false
  static inline int32_t ConvertToBase64Array(char16_t* outChars, uint8_t* inData, int32_t offset, int32_t length, bool insertLineBreaks);

  /// @brief Method CopyToTempBufferWithoutWhiteSpace, addr 0x6011190, size 0x138, virtual false, abstract: false, final false
  static inline void CopyToTempBufferWithoutWhiteSpace(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<char16_t> tempBuffer, ::by_ref<int32_t> consumed, ::by_ref<int32_t> charsWritten);

  /// @brief Method Decode, addr 0x6009a70, size 0x50, virtual false, abstract: false, final false
  static inline int32_t Decode(::by_ref<char16_t> encodedChars, ::by_ref<int8_t> decodingMap);

  /// @brief Method DefaultToType, addr 0x6005fd4, size 0xab0, virtual false, abstract: false, final false
  static inline ::System::Object* DefaultToType(::System::IConvertible* value, ::System::Type* targetType, ::System::IFormatProvider* provider);

  /// @brief Method FromBase64CharArray, addr 0x60112e8, size 0x204, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromBase64CharArray(::ArrayW<char16_t> inArray, int32_t offset, int32_t length);

  /// @brief Method FromBase64CharPtr, addr 0x6010ae0, size 0x1a0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromBase64CharPtr(char16_t* inputPtr, int32_t inputLength);

  /// @brief Method FromBase64String, addr 0x6010a38, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromBase64String(::StringW s);

  /// @brief Method FromBase64_ComputeResultLength, addr 0x60114ec, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t FromBase64_ComputeResultLength(char16_t* inputPtr, int32_t inputLength);

  /// @brief Method GetTypeCode, addr 0x6009ad8, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::TypeCode GetTypeCode(::System::Object* value);

  /// [Extension]
  /// @brief Method IsSpace, addr 0x60112c8, size 0x20, virtual false, abstract: false, final false
  static inline bool IsSpace(char16_t c);

  /// @brief Method ThrowByteOverflowException, addr 0x600ae34, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowByteOverflowException();

  /// @brief Method ThrowCharOverflowException, addr 0x600ade8, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowCharOverflowException();

  /// @brief Method ThrowInt16OverflowException, addr 0x600aecc, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInt16OverflowException();

  /// @brief Method ThrowInt32OverflowException, addr 0x600af64, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInt32OverflowException();

  /// @brief Method ThrowInt64OverflowException, addr 0x600affc, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInt64OverflowException();

  /// @brief Method ThrowSByteOverflowException, addr 0x600ae80, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowSByteOverflowException();

  /// @brief Method ThrowUInt16OverflowException, addr 0x600af18, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowUInt16OverflowException();

  /// @brief Method ThrowUInt32OverflowException, addr 0x600afb0, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowUInt32OverflowException();

  /// @brief Method ThrowUInt64OverflowException, addr 0x600b048, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowUInt64OverflowException();

  /// @brief Method ToBase64CharArray, addr 0x60106a8, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t> outArray, int32_t offsetOut);

  /// @brief Method ToBase64CharArray, addr 0x6010734, size 0x304, virtual false, abstract: false, final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t> outArray, int32_t offsetOut, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64String, addr 0x6010014, size 0x184, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::System::ReadOnlySpan_1<uint8_t> bytes, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64String, addr 0x600ff54, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t> inArray);

  /// @brief Method ToBase64String, addr 0x6010198, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t> inArray, int32_t offset, int32_t length);

  /// @brief Method ToBase64String, addr 0x601020c, size 0x1b0, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t> inArray, int32_t offset, int32_t length, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64_CalculateAndValidateOutputLength, addr 0x60103bc, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t ToBase64_CalculateAndValidateOutputLength(int32_t inputLength, bool insertLineBreaks);

  /// @brief Method ToBoolean, addr 0x600b2e8, size 0x30, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW value);

  /// @brief Method ToBoolean, addr 0x600b318, size 0x30, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean, addr 0x600b360, size 0x78, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Decimal value);

  /// @brief Method ToBoolean, addr 0x600b094, size 0xf8, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToBoolean, addr 0x600b18c, size 0x108, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean, addr 0x600b354, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(double_t value);

  /// @brief Method ToBoolean, addr 0x600b348, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(float_t value);

  /// @brief Method ToBoolean, addr 0x600b2a0, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int16_t value);

  /// @brief Method ToBoolean, addr 0x600b2b8, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int32_t value);

  /// @brief Method ToBoolean, addr 0x600b2d0, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToBoolean, addr 0x600b294, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToBoolean, addr 0x600b2ac, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToBoolean, addr 0x600b2c4, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToBoolean, addr 0x600b2dc, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint64_t value);

  /// @brief Method ToBoolean, addr 0x6007424, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint8_t value);

  /// @brief Method ToByte, addr 0x600c5bc, size 0x78, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value);

  /// @brief Method ToByte, addr 0x600f5c0, size 0x120, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value, int32_t fromBase);

  /// @brief Method ToByte, addr 0x600c634, size 0x14, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x600c544, size 0x78, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Decimal value);

  /// @brief Method ToByte, addr 0x600bfc0, size 0xf8, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Object* value);

  /// @brief Method ToByte, addr 0x600c0b8, size 0x108, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x6005a84, size 0x8, virtual false, abstract: false, final false
  static inline uint8_t ToByte(bool value);

  /// @brief Method ToByte, addr 0x600850c, size 0x68, virtual false, abstract: false, final false
  static inline uint8_t ToByte(char16_t value);

  /// @brief Method ToByte, addr 0x600c4e0, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(double_t value);

  /// @brief Method ToByte, addr 0x600c480, size 0x60, virtual false, abstract: false, final false
  static inline uint8_t ToByte(float_t value);

  /// @brief Method ToByte, addr 0x600c220, size 0x68, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int16_t value);

  /// @brief Method ToByte, addr 0x600c2f0, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int32_t value);

  /// @brief Method ToByte, addr 0x600c3b8, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToByte, addr 0x600c1c0, size 0x60, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToByte, addr 0x600c288, size 0x68, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToByte, addr 0x600c354, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToByte, addr 0x600c41c, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint64_t value);

  /// @brief Method ToChar, addr 0x600b82c, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW value);

  /// @brief Method ToChar, addr 0x600b884, size 0x98, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToChar, addr 0x600b3d8, size 0xf8, virtual false, abstract: false, final false
  static inline char16_t ToChar(::System::Object* value);

  /// @brief Method ToChar, addr 0x600b4d0, size 0x108, virtual false, abstract: false, final false
  static inline char16_t ToChar(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToChar, addr 0x600b638, size 0x60, virtual false, abstract: false, final false
  static inline char16_t ToChar(int16_t value);

  /// @brief Method ToChar, addr 0x600b69c, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(int32_t value);

  /// @brief Method ToChar, addr 0x600b764, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToChar, addr 0x600b5d8, size 0x60, virtual false, abstract: false, final false
  static inline char16_t ToChar(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToChar, addr 0x600b698, size 0x4, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToChar, addr 0x600b700, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToChar, addr 0x600b7c8, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint64_t value);

  /// @brief Method ToChar, addr 0x600748c, size 0x8, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint8_t value);

  /// @brief Method ToDateTime, addr 0x600f358, size 0x84, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDateTime, addr 0x600f220, size 0x138, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x600f190, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x600ec90, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x6005e54, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(bool value);

  /// @brief Method ToDecimal, addr 0x600f0f8, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(double_t value);

  /// @brief Method ToDecimal, addr 0x600f060, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(float_t value);

  /// @brief Method ToDecimal, addr 0x600ee24, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int16_t value);

  /// @brief Method ToDecimal, addr 0x600eee4, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int32_t value);

  /// @brief Method ToDecimal, addr 0x600efa0, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDecimal, addr 0x600edc0, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDecimal, addr 0x600ee88, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDecimal, addr 0x600ef44, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDecimal, addr 0x600f004, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint64_t value);

  /// @brief Method ToDecimal, addr 0x60078dc, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint8_t value);

  /// @brief Method ToDouble, addr 0x600ec74, size 0x1c, virtual false, abstract: false, final false
  static inline double_t ToDouble(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x600ec08, size 0x6c, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Decimal value);

  /// @brief Method ToDouble, addr 0x600e9bc, size 0xf8, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToDouble, addr 0x600eab4, size 0x108, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x6005de0, size 0x14, virtual false, abstract: false, final false
  static inline double_t ToDouble(bool value);

  /// @brief Method ToDouble, addr 0x600ec00, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(float_t value);

  /// @brief Method ToDouble, addr 0x600ebc8, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(int16_t value);

  /// @brief Method ToDouble, addr 0x600ebe0, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(int32_t value);

  /// @brief Method ToDouble, addr 0x600ebf0, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDouble, addr 0x600ebbc, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDouble, addr 0x600ebd4, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDouble, addr 0x600ebe8, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDouble, addr 0x600ebf8, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint64_t value);

  /// @brief Method ToDouble, addr 0x6007874, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint8_t value);

  /// @brief Method ToInt16, addr 0x600cb7c, size 0x7c, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value);

  /// @brief Method ToInt16, addr 0x600f810, size 0x130, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value, int32_t fromBase);

  /// @brief Method ToInt16, addr 0x600cbf8, size 0x18, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x600cb04, size 0x78, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Decimal value);

  /// @brief Method ToInt16, addr 0x600c648, size 0xf8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Object* value);

  /// @brief Method ToInt16, addr 0x600c740, size 0x108, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x6005aec, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(bool value);

  /// @brief Method ToInt16, addr 0x60085d0, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(char16_t value);

  /// @brief Method ToInt16, addr 0x600caa0, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(double_t value);

  /// @brief Method ToInt16, addr 0x600ca40, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(float_t value);

  /// @brief Method ToInt16, addr 0x600c8b0, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int32_t value);

  /// @brief Method ToInt16, addr 0x600c978, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt16, addr 0x600c848, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt16, addr 0x600c850, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt16, addr 0x600c914, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt16, addr 0x600c9dc, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint64_t value);

  /// @brief Method ToInt16, addr 0x60075b4, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint8_t value);

  /// @brief Method ToInt32, addr 0x600d5c4, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32, addr 0x600fa60, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value, int32_t fromBase);

  /// @brief Method ToInt32, addr 0x600d640, size 0x18, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x600d54c, size 0x78, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Decimal value);

  /// @brief Method ToInt32, addr 0x600d1b4, size 0xf8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt32, addr 0x600d2ac, size 0x108, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x6005bbc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(bool value);

  /// @brief Method ToInt32, addr 0x60086ec, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(char16_t value);

  /// @brief Method ToInt32, addr 0x600be44, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t ToInt32(double_t value);

  /// @brief Method ToInt32, addr 0x600d4ec, size 0x60, virtual false, abstract: false, final false
  static inline int32_t ToInt32(float_t value);

  /// @brief Method ToInt32, addr 0x600d3b4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(int16_t value);

  /// @brief Method ToInt32, addr 0x600d424, size 0x64, virtual false, abstract: false, final false
  static inline int32_t ToInt32(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt32, addr 0x600d3bc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt32, addr 0x600d3c4, size 0x60, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt32, addr 0x600d488, size 0x64, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint64_t value);

  /// @brief Method ToInt32, addr 0x600767c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint8_t value);

  /// @brief Method ToInt64, addr 0x600e050, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64, addr 0x600fc18, size 0xdc, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value, int32_t fromBase);

  /// @brief Method ToInt64, addr 0x600e0cc, size 0x18, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x600dfd8, size 0x78, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Decimal value);

  /// @brief Method ToInt64, addr 0x600dbd8, size 0xf8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToInt64, addr 0x600dcd0, size 0x108, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x6005c8c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(bool value);

  /// @brief Method ToInt64, addr 0x60087b4, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(char16_t value);

  /// @brief Method ToInt64, addr 0x600dec0, size 0x118, virtual false, abstract: false, final false
  static inline int64_t ToInt64(double_t value);

  /// @brief Method ToInt64, addr 0x600de60, size 0x60, virtual false, abstract: false, final false
  static inline int64_t ToInt64(float_t value);

  /// @brief Method ToInt64, addr 0x600dde0, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int16_t value);

  /// @brief Method ToInt64, addr 0x600ddf0, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt64, addr 0x600ddd8, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt64, addr 0x600dde8, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt64, addr 0x600ddf8, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt64, addr 0x600de00, size 0x60, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint64_t value);

  /// @brief Method ToInt64, addr 0x6007744, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600f6e0, size 0x130, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW value, int32_t fromBase);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600bfb0, size 0x10, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600bf38, size 0x78, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Decimal value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600b91c, size 0xf8, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Object* value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600ba14, size 0x108, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x6005a1c, size 0x8, virtual false, abstract: false, final false
  static inline int8_t ToSByte(bool value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x6008448, size 0x68, virtual false, abstract: false, final false
  static inline int8_t ToSByte(char16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600bde0, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(double_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600bd80, size 0x60, virtual false, abstract: false, final false
  static inline int8_t ToSByte(float_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600bb1c, size 0x6c, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600bbf0, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600bcb8, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600bb88, size 0x68, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600bc54, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600bd1c, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x60074f0, size 0x60, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint8_t value);

  /// @brief Method ToSingle, addr 0x600e924, size 0x7c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW value);

  /// @brief Method ToSingle, addr 0x600e9a0, size 0x1c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x600e8b8, size 0x6c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Decimal value);

  /// @brief Method ToSingle, addr 0x600e668, size 0xf8, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToSingle, addr 0x600e760, size 0x108, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x6005d64, size 0x14, virtual false, abstract: false, final false
  static inline float_t ToSingle(bool value);

  /// @brief Method ToSingle, addr 0x600e8b0, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(double_t value);

  /// @brief Method ToSingle, addr 0x600e874, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(int16_t value);

  /// @brief Method ToSingle, addr 0x600e88c, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(int32_t value);

  /// @brief Method ToSingle, addr 0x600e89c, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSingle, addr 0x600e868, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSingle, addr 0x600e880, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSingle, addr 0x600e894, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSingle, addr 0x600e8a4, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint64_t value);

  /// @brief Method ToSingle, addr 0x600780c, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint8_t value);

  /// @brief Method ToString, addr 0x600f3dc, size 0x198, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x600f574, size 0x30, virtual false, abstract: false, final false
  static inline ::StringW ToString(char16_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x600f5a4, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x600fe54, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value, int32_t toBase);

  /// @brief Method ToString, addr 0x600fed4, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value, int32_t toBase);

  /// @brief Method ToString, addr 0x600fdd0, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint8_t value, int32_t toBase);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600f940, size 0x120, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW value, int32_t fromBase);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600d19c, size 0x18, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600d124, size 0x78, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Decimal value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600cc10, size 0xf8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Object* value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600cd08, size 0x108, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x6005b54, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(bool value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600868c, size 0x4, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(char16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600d0c0, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(double_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600d060, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(float_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600ce70, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600ced0, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600cf98, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600ce10, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600cf34, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600cffc, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x6007618, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600fb3c, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW value, int32_t fromBase);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600dbc0, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600db48, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Decimal value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d658, size 0xf8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Object* value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d750, size 0x108, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x6005c24, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(bool value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x6008750, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(char16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600daa8, size 0xa0, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(double_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600da48, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(float_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d8b8, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d920, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d980, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d858, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d918, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d9e4, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x60076e0, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600fcf4, size 0xdc, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value, int32_t fromBase);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e650, size 0x18, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e5d8, size 0x78, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Decimal value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e0e4, size 0xf8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Object* value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e1dc, size 0x108, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x6005cf4, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(bool value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x6008818, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(char16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e4d4, size 0x104, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(double_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e474, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(float_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e344, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e3ac, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e414, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e2e4, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e3a4, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e40c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x60077a8, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint8_t value);

  /// @brief Method TryDecodeFromUtf16, addr 0x60096f0, size 0x380, virtual false, abstract: false, final false
  static inline bool TryDecodeFromUtf16(::System::ReadOnlySpan_1<char16_t> utf16, ::System::Span_1<uint8_t> bytes, ::by_ref<int32_t> consumed, ::by_ref<int32_t> written);

  /// @brief Method TryFromBase64Chars, addr 0x6010c80, size 0x510, virtual false, abstract: false, final false
  static inline bool TryFromBase64Chars(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<uint8_t> bytes, ::by_ref<int32_t> bytesWritten);

  /// @brief Method WriteThreeLowOrderBytes, addr 0x6009ac0, size 0x18, virtual false, abstract: false, final false
  static inline void WriteThreeLowOrderBytes(::by_ref<uint8_t> destination, int32_t value);

  static inline ::ArrayW<::System::Type*> getStaticF_ConvertTypes();

  static inline ::System::Object* getStaticF_DBNull();

  static inline ::System::Type* getStaticF_EnumType();

  static inline ::ArrayW<char16_t> getStaticF_base64Table();

  static inline ::ArrayW<int8_t> getStaticF_s_decodingMap();

  static inline void setStaticF_ConvertTypes(::ArrayW<::System::Type*> value);

  static inline void setStaticF_DBNull(::System::Object* value);

  static inline void setStaticF_EnumType(::System::Type* value);

  static inline void setStaticF_base64Table(::ArrayW<char16_t> value);

  static inline void setStaticF_s_decodingMap(::ArrayW<int8_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Convert();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Convert(Convert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Convert(Convert const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2366 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Convert) == 0x10, "Size mismatch!");

} // namespace System
