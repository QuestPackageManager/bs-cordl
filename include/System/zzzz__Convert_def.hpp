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

  /// @brief Method ChangeType, addr 0x600a194, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType);

  /// @brief Method ChangeType, addr 0x600a238, size 0x928, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType, ::System::IFormatProvider* provider);

  /// @brief Method ChangeType, addr 0x6009918, size 0x87c, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::TypeCode typeCode, ::System::IFormatProvider* provider);

  /// @brief Method ConvertToBase64Array, addr 0x60101e4, size 0x23c, virtual false, abstract: false, final false
  static inline int32_t ConvertToBase64Array(char16_t* outChars, uint8_t* inData, int32_t offset, int32_t length, bool insertLineBreaks);

  /// @brief Method CopyToTempBufferWithoutWhiteSpace, addr 0x6010f08, size 0x138, virtual false, abstract: false, final false
  static inline void CopyToTempBufferWithoutWhiteSpace(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<char16_t> tempBuffer, ::by_ref<int32_t> consumed, ::by_ref<int32_t> charsWritten);

  /// @brief Method Decode, addr 0x60097e8, size 0x50, virtual false, abstract: false, final false
  static inline int32_t Decode(::by_ref<char16_t> encodedChars, ::by_ref<int8_t> decodingMap);

  /// @brief Method DefaultToType, addr 0x6005d4c, size 0xab0, virtual false, abstract: false, final false
  static inline ::System::Object* DefaultToType(::System::IConvertible* value, ::System::Type* targetType, ::System::IFormatProvider* provider);

  /// @brief Method FromBase64CharArray, addr 0x6011060, size 0x204, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromBase64CharArray(::ArrayW<char16_t> inArray, int32_t offset, int32_t length);

  /// @brief Method FromBase64CharPtr, addr 0x6010858, size 0x1a0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromBase64CharPtr(char16_t* inputPtr, int32_t inputLength);

  /// @brief Method FromBase64String, addr 0x60107b0, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromBase64String(::StringW s);

  /// @brief Method FromBase64_ComputeResultLength, addr 0x6011264, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t FromBase64_ComputeResultLength(char16_t* inputPtr, int32_t inputLength);

  /// @brief Method GetTypeCode, addr 0x6009850, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::TypeCode GetTypeCode(::System::Object* value);

  /// [Extension]
  /// @brief Method IsSpace, addr 0x6011040, size 0x20, virtual false, abstract: false, final false
  static inline bool IsSpace(char16_t c);

  /// @brief Method ThrowByteOverflowException, addr 0x600abac, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowByteOverflowException();

  /// @brief Method ThrowCharOverflowException, addr 0x600ab60, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowCharOverflowException();

  /// @brief Method ThrowInt16OverflowException, addr 0x600ac44, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInt16OverflowException();

  /// @brief Method ThrowInt32OverflowException, addr 0x600acdc, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInt32OverflowException();

  /// @brief Method ThrowInt64OverflowException, addr 0x600ad74, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInt64OverflowException();

  /// @brief Method ThrowSByteOverflowException, addr 0x600abf8, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowSByteOverflowException();

  /// @brief Method ThrowUInt16OverflowException, addr 0x600ac90, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowUInt16OverflowException();

  /// @brief Method ThrowUInt32OverflowException, addr 0x600ad28, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowUInt32OverflowException();

  /// @brief Method ThrowUInt64OverflowException, addr 0x600adc0, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowUInt64OverflowException();

  /// @brief Method ToBase64CharArray, addr 0x6010420, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t> outArray, int32_t offsetOut);

  /// @brief Method ToBase64CharArray, addr 0x60104ac, size 0x304, virtual false, abstract: false, final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t> outArray, int32_t offsetOut, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64String, addr 0x600fd8c, size 0x184, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::System::ReadOnlySpan_1<uint8_t> bytes, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64String, addr 0x600fccc, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t> inArray);

  /// @brief Method ToBase64String, addr 0x600ff10, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t> inArray, int32_t offset, int32_t length);

  /// @brief Method ToBase64String, addr 0x600ff84, size 0x1b0, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t> inArray, int32_t offset, int32_t length, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64_CalculateAndValidateOutputLength, addr 0x6010134, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t ToBase64_CalculateAndValidateOutputLength(int32_t inputLength, bool insertLineBreaks);

  /// @brief Method ToBoolean, addr 0x600b060, size 0x30, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW value);

  /// @brief Method ToBoolean, addr 0x600b090, size 0x30, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean, addr 0x600b0d8, size 0x78, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Decimal value);

  /// @brief Method ToBoolean, addr 0x600ae0c, size 0xf8, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToBoolean, addr 0x600af04, size 0x108, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean, addr 0x600b0cc, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(double_t value);

  /// @brief Method ToBoolean, addr 0x600b0c0, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(float_t value);

  /// @brief Method ToBoolean, addr 0x600b018, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int16_t value);

  /// @brief Method ToBoolean, addr 0x600b030, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int32_t value);

  /// @brief Method ToBoolean, addr 0x600b048, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToBoolean, addr 0x600b00c, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToBoolean, addr 0x600b024, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToBoolean, addr 0x600b03c, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToBoolean, addr 0x600b054, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint64_t value);

  /// @brief Method ToBoolean, addr 0x600719c, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint8_t value);

  /// @brief Method ToByte, addr 0x600c334, size 0x78, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value);

  /// @brief Method ToByte, addr 0x600f338, size 0x120, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value, int32_t fromBase);

  /// @brief Method ToByte, addr 0x600c3ac, size 0x14, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x600c2bc, size 0x78, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Decimal value);

  /// @brief Method ToByte, addr 0x600bd38, size 0xf8, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Object* value);

  /// @brief Method ToByte, addr 0x600be30, size 0x108, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x60057fc, size 0x8, virtual false, abstract: false, final false
  static inline uint8_t ToByte(bool value);

  /// @brief Method ToByte, addr 0x6008284, size 0x68, virtual false, abstract: false, final false
  static inline uint8_t ToByte(char16_t value);

  /// @brief Method ToByte, addr 0x600c258, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(double_t value);

  /// @brief Method ToByte, addr 0x600c1f8, size 0x60, virtual false, abstract: false, final false
  static inline uint8_t ToByte(float_t value);

  /// @brief Method ToByte, addr 0x600bf98, size 0x68, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int16_t value);

  /// @brief Method ToByte, addr 0x600c068, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int32_t value);

  /// @brief Method ToByte, addr 0x600c130, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToByte, addr 0x600bf38, size 0x60, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToByte, addr 0x600c000, size 0x68, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToByte, addr 0x600c0cc, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToByte, addr 0x600c194, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint64_t value);

  /// @brief Method ToChar, addr 0x600b5a4, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW value);

  /// @brief Method ToChar, addr 0x600b5fc, size 0x98, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToChar, addr 0x600b150, size 0xf8, virtual false, abstract: false, final false
  static inline char16_t ToChar(::System::Object* value);

  /// @brief Method ToChar, addr 0x600b248, size 0x108, virtual false, abstract: false, final false
  static inline char16_t ToChar(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToChar, addr 0x600b3b0, size 0x60, virtual false, abstract: false, final false
  static inline char16_t ToChar(int16_t value);

  /// @brief Method ToChar, addr 0x600b414, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(int32_t value);

  /// @brief Method ToChar, addr 0x600b4dc, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToChar, addr 0x600b350, size 0x60, virtual false, abstract: false, final false
  static inline char16_t ToChar(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToChar, addr 0x600b410, size 0x4, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToChar, addr 0x600b478, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToChar, addr 0x600b540, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint64_t value);

  /// @brief Method ToChar, addr 0x6007204, size 0x8, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint8_t value);

  /// @brief Method ToDateTime, addr 0x600f0d0, size 0x84, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDateTime, addr 0x600ef98, size 0x138, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x600ef08, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x600ea08, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x6005bcc, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(bool value);

  /// @brief Method ToDecimal, addr 0x600ee70, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(double_t value);

  /// @brief Method ToDecimal, addr 0x600edd8, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(float_t value);

  /// @brief Method ToDecimal, addr 0x600eb9c, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int16_t value);

  /// @brief Method ToDecimal, addr 0x600ec5c, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int32_t value);

  /// @brief Method ToDecimal, addr 0x600ed18, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDecimal, addr 0x600eb38, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDecimal, addr 0x600ec00, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDecimal, addr 0x600ecbc, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDecimal, addr 0x600ed7c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint64_t value);

  /// @brief Method ToDecimal, addr 0x6007654, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint8_t value);

  /// @brief Method ToDouble, addr 0x600e9ec, size 0x1c, virtual false, abstract: false, final false
  static inline double_t ToDouble(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x600e980, size 0x6c, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Decimal value);

  /// @brief Method ToDouble, addr 0x600e734, size 0xf8, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToDouble, addr 0x600e82c, size 0x108, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x6005b58, size 0x14, virtual false, abstract: false, final false
  static inline double_t ToDouble(bool value);

  /// @brief Method ToDouble, addr 0x600e978, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(float_t value);

  /// @brief Method ToDouble, addr 0x600e940, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(int16_t value);

  /// @brief Method ToDouble, addr 0x600e958, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(int32_t value);

  /// @brief Method ToDouble, addr 0x600e968, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDouble, addr 0x600e934, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDouble, addr 0x600e94c, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDouble, addr 0x600e960, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDouble, addr 0x600e970, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint64_t value);

  /// @brief Method ToDouble, addr 0x60075ec, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint8_t value);

  /// @brief Method ToInt16, addr 0x600c8f4, size 0x7c, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value);

  /// @brief Method ToInt16, addr 0x600f588, size 0x130, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value, int32_t fromBase);

  /// @brief Method ToInt16, addr 0x600c970, size 0x18, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x600c87c, size 0x78, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Decimal value);

  /// @brief Method ToInt16, addr 0x600c3c0, size 0xf8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Object* value);

  /// @brief Method ToInt16, addr 0x600c4b8, size 0x108, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x6005864, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(bool value);

  /// @brief Method ToInt16, addr 0x6008348, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(char16_t value);

  /// @brief Method ToInt16, addr 0x600c818, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(double_t value);

  /// @brief Method ToInt16, addr 0x600c7b8, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(float_t value);

  /// @brief Method ToInt16, addr 0x600c628, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int32_t value);

  /// @brief Method ToInt16, addr 0x600c6f0, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt16, addr 0x600c5c0, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt16, addr 0x600c5c8, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt16, addr 0x600c68c, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt16, addr 0x600c754, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint64_t value);

  /// @brief Method ToInt16, addr 0x600732c, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint8_t value);

  /// @brief Method ToInt32, addr 0x600d33c, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32, addr 0x600f7d8, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value, int32_t fromBase);

  /// @brief Method ToInt32, addr 0x600d3b8, size 0x18, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x600d2c4, size 0x78, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Decimal value);

  /// @brief Method ToInt32, addr 0x600cf2c, size 0xf8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt32, addr 0x600d024, size 0x108, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x6005934, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(bool value);

  /// @brief Method ToInt32, addr 0x6008464, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(char16_t value);

  /// @brief Method ToInt32, addr 0x600bbbc, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t ToInt32(double_t value);

  /// @brief Method ToInt32, addr 0x600d264, size 0x60, virtual false, abstract: false, final false
  static inline int32_t ToInt32(float_t value);

  /// @brief Method ToInt32, addr 0x600d12c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(int16_t value);

  /// @brief Method ToInt32, addr 0x600d19c, size 0x64, virtual false, abstract: false, final false
  static inline int32_t ToInt32(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt32, addr 0x600d134, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt32, addr 0x600d13c, size 0x60, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt32, addr 0x600d200, size 0x64, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint64_t value);

  /// @brief Method ToInt32, addr 0x60073f4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint8_t value);

  /// @brief Method ToInt64, addr 0x600ddc8, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64, addr 0x600f990, size 0xdc, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value, int32_t fromBase);

  /// @brief Method ToInt64, addr 0x600de44, size 0x18, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x600dd50, size 0x78, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Decimal value);

  /// @brief Method ToInt64, addr 0x600d950, size 0xf8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToInt64, addr 0x600da48, size 0x108, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x6005a04, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(bool value);

  /// @brief Method ToInt64, addr 0x600852c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(char16_t value);

  /// @brief Method ToInt64, addr 0x600dc38, size 0x118, virtual false, abstract: false, final false
  static inline int64_t ToInt64(double_t value);

  /// @brief Method ToInt64, addr 0x600dbd8, size 0x60, virtual false, abstract: false, final false
  static inline int64_t ToInt64(float_t value);

  /// @brief Method ToInt64, addr 0x600db58, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int16_t value);

  /// @brief Method ToInt64, addr 0x600db68, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt64, addr 0x600db50, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt64, addr 0x600db60, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt64, addr 0x600db70, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt64, addr 0x600db78, size 0x60, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint64_t value);

  /// @brief Method ToInt64, addr 0x60074bc, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600f458, size 0x130, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW value, int32_t fromBase);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600bd28, size 0x10, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600bcb0, size 0x78, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Decimal value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600b694, size 0xf8, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Object* value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600b78c, size 0x108, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x6005794, size 0x8, virtual false, abstract: false, final false
  static inline int8_t ToSByte(bool value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x60081c0, size 0x68, virtual false, abstract: false, final false
  static inline int8_t ToSByte(char16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600bb58, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(double_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600baf8, size 0x60, virtual false, abstract: false, final false
  static inline int8_t ToSByte(float_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600b894, size 0x6c, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600b968, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600ba30, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600b900, size 0x68, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600b9cc, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x600ba94, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x6007268, size 0x60, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint8_t value);

  /// @brief Method ToSingle, addr 0x600e69c, size 0x7c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW value);

  /// @brief Method ToSingle, addr 0x600e718, size 0x1c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x600e630, size 0x6c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Decimal value);

  /// @brief Method ToSingle, addr 0x600e3e0, size 0xf8, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToSingle, addr 0x600e4d8, size 0x108, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x6005adc, size 0x14, virtual false, abstract: false, final false
  static inline float_t ToSingle(bool value);

  /// @brief Method ToSingle, addr 0x600e628, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(double_t value);

  /// @brief Method ToSingle, addr 0x600e5ec, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(int16_t value);

  /// @brief Method ToSingle, addr 0x600e604, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(int32_t value);

  /// @brief Method ToSingle, addr 0x600e614, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSingle, addr 0x600e5e0, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSingle, addr 0x600e5f8, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSingle, addr 0x600e60c, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSingle, addr 0x600e61c, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint64_t value);

  /// @brief Method ToSingle, addr 0x6007584, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint8_t value);

  /// @brief Method ToString, addr 0x600f154, size 0x198, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x600f2ec, size 0x30, virtual false, abstract: false, final false
  static inline ::StringW ToString(char16_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x600f31c, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x600fbcc, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value, int32_t toBase);

  /// @brief Method ToString, addr 0x600fc4c, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value, int32_t toBase);

  /// @brief Method ToString, addr 0x600fb48, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint8_t value, int32_t toBase);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600f6b8, size 0x120, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW value, int32_t fromBase);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600cf14, size 0x18, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600ce9c, size 0x78, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Decimal value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600c988, size 0xf8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Object* value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600ca80, size 0x108, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x60058cc, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(bool value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x6008404, size 0x4, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(char16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600ce38, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(double_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600cdd8, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(float_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600cbe8, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600cc48, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600cd10, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600cb88, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600ccac, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x600cd74, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x6007390, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600f8b4, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW value, int32_t fromBase);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d938, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d8c0, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Decimal value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d3d0, size 0xf8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Object* value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d4c8, size 0x108, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600599c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(bool value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x60084c8, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(char16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d820, size 0xa0, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(double_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d7c0, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(float_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d630, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d698, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d6f8, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d5d0, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d690, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x600d75c, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x6007458, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600fa6c, size 0xdc, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value, int32_t fromBase);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e3c8, size 0x18, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e350, size 0x78, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Decimal value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600de5c, size 0xf8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Object* value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600df54, size 0x108, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x6005a6c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(bool value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x6008590, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(char16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e24c, size 0x104, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(double_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e1ec, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(float_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e0bc, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e124, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e18c, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e05c, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e11c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x600e184, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x6007520, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint8_t value);

  /// @brief Method TryDecodeFromUtf16, addr 0x6009468, size 0x380, virtual false, abstract: false, final false
  static inline bool TryDecodeFromUtf16(::System::ReadOnlySpan_1<char16_t> utf16, ::System::Span_1<uint8_t> bytes, ::by_ref<int32_t> consumed, ::by_ref<int32_t> written);

  /// @brief Method TryFromBase64Chars, addr 0x60109f8, size 0x510, virtual false, abstract: false, final false
  static inline bool TryFromBase64Chars(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<uint8_t> bytes, ::by_ref<int32_t> bytesWritten);

  /// @brief Method WriteThreeLowOrderBytes, addr 0x6009838, size 0x18, virtual false, abstract: false, final false
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
