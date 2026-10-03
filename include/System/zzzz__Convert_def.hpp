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

  /// @brief Method ChangeType, addr 0x5fcd8ac, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType);

  /// @brief Method ChangeType, addr 0x5fcd950, size 0x928, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType, ::System::IFormatProvider* provider);

  /// @brief Method ChangeType, addr 0x5fcd030, size 0x87c, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::TypeCode typeCode, ::System::IFormatProvider* provider);

  /// @brief Method ConvertToBase64Array, addr 0x5fd38fc, size 0x23c, virtual false, abstract: false, final false
  static inline int32_t ConvertToBase64Array(char16_t* outChars, uint8_t* inData, int32_t offset, int32_t length, bool insertLineBreaks);

  /// @brief Method CopyToTempBufferWithoutWhiteSpace, addr 0x5fd4620, size 0x138, virtual false, abstract: false, final false
  static inline void CopyToTempBufferWithoutWhiteSpace(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<char16_t> tempBuffer, ::by_ref<int32_t> consumed, ::by_ref<int32_t> charsWritten);

  /// @brief Method Decode, addr 0x5fccf00, size 0x50, virtual false, abstract: false, final false
  static inline int32_t Decode(::by_ref<char16_t> encodedChars, ::by_ref<int8_t> decodingMap);

  /// @brief Method DefaultToType, addr 0x5fc9464, size 0xab0, virtual false, abstract: false, final false
  static inline ::System::Object* DefaultToType(::System::IConvertible* value, ::System::Type* targetType, ::System::IFormatProvider* provider);

  /// @brief Method FromBase64CharArray, addr 0x5fd4778, size 0x204, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromBase64CharArray(::ArrayW<char16_t> inArray, int32_t offset, int32_t length);

  /// @brief Method FromBase64CharPtr, addr 0x5fd3f70, size 0x1a0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromBase64CharPtr(char16_t* inputPtr, int32_t inputLength);

  /// @brief Method FromBase64String, addr 0x5fd3ec8, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromBase64String(::StringW s);

  /// @brief Method FromBase64_ComputeResultLength, addr 0x5fd497c, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t FromBase64_ComputeResultLength(char16_t* inputPtr, int32_t inputLength);

  /// @brief Method GetTypeCode, addr 0x5fccf68, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::TypeCode GetTypeCode(::System::Object* value);

  /// [Extension]
  /// @brief Method IsSpace, addr 0x5fd4758, size 0x20, virtual false, abstract: false, final false
  static inline bool IsSpace(char16_t c);

  /// @brief Method ThrowByteOverflowException, addr 0x5fce2c4, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowByteOverflowException();

  /// @brief Method ThrowCharOverflowException, addr 0x5fce278, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowCharOverflowException();

  /// @brief Method ThrowInt16OverflowException, addr 0x5fce35c, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInt16OverflowException();

  /// @brief Method ThrowInt32OverflowException, addr 0x5fce3f4, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInt32OverflowException();

  /// @brief Method ThrowInt64OverflowException, addr 0x5fce48c, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInt64OverflowException();

  /// @brief Method ThrowSByteOverflowException, addr 0x5fce310, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowSByteOverflowException();

  /// @brief Method ThrowUInt16OverflowException, addr 0x5fce3a8, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowUInt16OverflowException();

  /// @brief Method ThrowUInt32OverflowException, addr 0x5fce440, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowUInt32OverflowException();

  /// @brief Method ThrowUInt64OverflowException, addr 0x5fce4d8, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowUInt64OverflowException();

  /// @brief Method ToBase64CharArray, addr 0x5fd3b38, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t> outArray, int32_t offsetOut);

  /// @brief Method ToBase64CharArray, addr 0x5fd3bc4, size 0x304, virtual false, abstract: false, final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t> outArray, int32_t offsetOut, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64String, addr 0x5fd34a4, size 0x184, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::System::ReadOnlySpan_1<uint8_t> bytes, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64String, addr 0x5fd33e4, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t> inArray);

  /// @brief Method ToBase64String, addr 0x5fd3628, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t> inArray, int32_t offset, int32_t length);

  /// @brief Method ToBase64String, addr 0x5fd369c, size 0x1b0, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t> inArray, int32_t offset, int32_t length, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64_CalculateAndValidateOutputLength, addr 0x5fd384c, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t ToBase64_CalculateAndValidateOutputLength(int32_t inputLength, bool insertLineBreaks);

  /// @brief Method ToBoolean, addr 0x5fce778, size 0x30, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW value);

  /// @brief Method ToBoolean, addr 0x5fce7a8, size 0x30, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean, addr 0x5fce7f0, size 0x78, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Decimal value);

  /// @brief Method ToBoolean, addr 0x5fce524, size 0xf8, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToBoolean, addr 0x5fce61c, size 0x108, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean, addr 0x5fce7e4, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(double_t value);

  /// @brief Method ToBoolean, addr 0x5fce7d8, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(float_t value);

  /// @brief Method ToBoolean, addr 0x5fce730, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int16_t value);

  /// @brief Method ToBoolean, addr 0x5fce748, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int32_t value);

  /// @brief Method ToBoolean, addr 0x5fce760, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToBoolean, addr 0x5fce724, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToBoolean, addr 0x5fce73c, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToBoolean, addr 0x5fce754, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToBoolean, addr 0x5fce76c, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint64_t value);

  /// @brief Method ToBoolean, addr 0x5fca8b4, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint8_t value);

  /// @brief Method ToByte, addr 0x5fcfa4c, size 0x78, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value);

  /// @brief Method ToByte, addr 0x5fd2a50, size 0x120, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value, int32_t fromBase);

  /// @brief Method ToByte, addr 0x5fcfac4, size 0x14, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x5fcf9d4, size 0x78, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Decimal value);

  /// @brief Method ToByte, addr 0x5fcf450, size 0xf8, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Object* value);

  /// @brief Method ToByte, addr 0x5fcf548, size 0x108, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x5fc8f14, size 0x8, virtual false, abstract: false, final false
  static inline uint8_t ToByte(bool value);

  /// @brief Method ToByte, addr 0x5fcb99c, size 0x68, virtual false, abstract: false, final false
  static inline uint8_t ToByte(char16_t value);

  /// @brief Method ToByte, addr 0x5fcf970, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(double_t value);

  /// @brief Method ToByte, addr 0x5fcf910, size 0x60, virtual false, abstract: false, final false
  static inline uint8_t ToByte(float_t value);

  /// @brief Method ToByte, addr 0x5fcf6b0, size 0x68, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int16_t value);

  /// @brief Method ToByte, addr 0x5fcf780, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int32_t value);

  /// @brief Method ToByte, addr 0x5fcf848, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToByte, addr 0x5fcf650, size 0x60, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToByte, addr 0x5fcf718, size 0x68, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToByte, addr 0x5fcf7e4, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToByte, addr 0x5fcf8ac, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint64_t value);

  /// @brief Method ToChar, addr 0x5fcecbc, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW value);

  /// @brief Method ToChar, addr 0x5fced14, size 0x98, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToChar, addr 0x5fce868, size 0xf8, virtual false, abstract: false, final false
  static inline char16_t ToChar(::System::Object* value);

  /// @brief Method ToChar, addr 0x5fce960, size 0x108, virtual false, abstract: false, final false
  static inline char16_t ToChar(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToChar, addr 0x5fceac8, size 0x60, virtual false, abstract: false, final false
  static inline char16_t ToChar(int16_t value);

  /// @brief Method ToChar, addr 0x5fceb2c, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(int32_t value);

  /// @brief Method ToChar, addr 0x5fcebf4, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToChar, addr 0x5fcea68, size 0x60, virtual false, abstract: false, final false
  static inline char16_t ToChar(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToChar, addr 0x5fceb28, size 0x4, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToChar, addr 0x5fceb90, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToChar, addr 0x5fcec58, size 0x64, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint64_t value);

  /// @brief Method ToChar, addr 0x5fca91c, size 0x8, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint8_t value);

  /// @brief Method ToDateTime, addr 0x5fd27e8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDateTime, addr 0x5fd26b0, size 0x138, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x5fd2620, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x5fd2120, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x5fc92e4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(bool value);

  /// @brief Method ToDecimal, addr 0x5fd2588, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(double_t value);

  /// @brief Method ToDecimal, addr 0x5fd24f0, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(float_t value);

  /// @brief Method ToDecimal, addr 0x5fd22b4, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int16_t value);

  /// @brief Method ToDecimal, addr 0x5fd2374, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int32_t value);

  /// @brief Method ToDecimal, addr 0x5fd2430, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDecimal, addr 0x5fd2250, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDecimal, addr 0x5fd2318, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDecimal, addr 0x5fd23d4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDecimal, addr 0x5fd2494, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint64_t value);

  /// @brief Method ToDecimal, addr 0x5fcad6c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint8_t value);

  /// @brief Method ToDouble, addr 0x5fd2104, size 0x1c, virtual false, abstract: false, final false
  static inline double_t ToDouble(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x5fd2098, size 0x6c, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Decimal value);

  /// @brief Method ToDouble, addr 0x5fd1e4c, size 0xf8, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToDouble, addr 0x5fd1f44, size 0x108, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x5fc9270, size 0x14, virtual false, abstract: false, final false
  static inline double_t ToDouble(bool value);

  /// @brief Method ToDouble, addr 0x5fd2090, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(float_t value);

  /// @brief Method ToDouble, addr 0x5fd2058, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(int16_t value);

  /// @brief Method ToDouble, addr 0x5fd2070, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(int32_t value);

  /// @brief Method ToDouble, addr 0x5fd2080, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDouble, addr 0x5fd204c, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDouble, addr 0x5fd2064, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDouble, addr 0x5fd2078, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToDouble, addr 0x5fd2088, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint64_t value);

  /// @brief Method ToDouble, addr 0x5fcad04, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint8_t value);

  /// @brief Method ToInt16, addr 0x5fd000c, size 0x7c, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value);

  /// @brief Method ToInt16, addr 0x5fd2ca0, size 0x130, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value, int32_t fromBase);

  /// @brief Method ToInt16, addr 0x5fd0088, size 0x18, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x5fcff94, size 0x78, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Decimal value);

  /// @brief Method ToInt16, addr 0x5fcfad8, size 0xf8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Object* value);

  /// @brief Method ToInt16, addr 0x5fcfbd0, size 0x108, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x5fc8f7c, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(bool value);

  /// @brief Method ToInt16, addr 0x5fcba60, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(char16_t value);

  /// @brief Method ToInt16, addr 0x5fcff30, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(double_t value);

  /// @brief Method ToInt16, addr 0x5fcfed0, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(float_t value);

  /// @brief Method ToInt16, addr 0x5fcfd40, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int32_t value);

  /// @brief Method ToInt16, addr 0x5fcfe08, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt16, addr 0x5fcfcd8, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt16, addr 0x5fcfce0, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt16, addr 0x5fcfda4, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt16, addr 0x5fcfe6c, size 0x64, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint64_t value);

  /// @brief Method ToInt16, addr 0x5fcaa44, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint8_t value);

  /// @brief Method ToInt32, addr 0x5fd0a54, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32, addr 0x5fd2ef0, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value, int32_t fromBase);

  /// @brief Method ToInt32, addr 0x5fd0ad0, size 0x18, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x5fd09dc, size 0x78, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Decimal value);

  /// @brief Method ToInt32, addr 0x5fd0644, size 0xf8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt32, addr 0x5fd073c, size 0x108, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x5fc904c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(bool value);

  /// @brief Method ToInt32, addr 0x5fcbb7c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(char16_t value);

  /// @brief Method ToInt32, addr 0x5fcf2d4, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t ToInt32(double_t value);

  /// @brief Method ToInt32, addr 0x5fd097c, size 0x60, virtual false, abstract: false, final false
  static inline int32_t ToInt32(float_t value);

  /// @brief Method ToInt32, addr 0x5fd0844, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(int16_t value);

  /// @brief Method ToInt32, addr 0x5fd08b4, size 0x64, virtual false, abstract: false, final false
  static inline int32_t ToInt32(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt32, addr 0x5fd084c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt32, addr 0x5fd0854, size 0x60, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt32, addr 0x5fd0918, size 0x64, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint64_t value);

  /// @brief Method ToInt32, addr 0x5fcab0c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint8_t value);

  /// @brief Method ToInt64, addr 0x5fd14e0, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64, addr 0x5fd30a8, size 0xdc, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value, int32_t fromBase);

  /// @brief Method ToInt64, addr 0x5fd155c, size 0x18, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x5fd1468, size 0x78, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Decimal value);

  /// @brief Method ToInt64, addr 0x5fd1068, size 0xf8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToInt64, addr 0x5fd1160, size 0x108, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x5fc911c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(bool value);

  /// @brief Method ToInt64, addr 0x5fcbc44, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(char16_t value);

  /// @brief Method ToInt64, addr 0x5fd1350, size 0x118, virtual false, abstract: false, final false
  static inline int64_t ToInt64(double_t value);

  /// @brief Method ToInt64, addr 0x5fd12f0, size 0x60, virtual false, abstract: false, final false
  static inline int64_t ToInt64(float_t value);

  /// @brief Method ToInt64, addr 0x5fd1270, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int16_t value);

  /// @brief Method ToInt64, addr 0x5fd1280, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt64, addr 0x5fd1268, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt64, addr 0x5fd1278, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt64, addr 0x5fd1288, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToInt64, addr 0x5fd1290, size 0x60, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint64_t value);

  /// @brief Method ToInt64, addr 0x5fcabd4, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x5fd2b70, size 0x130, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW value, int32_t fromBase);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x5fcf440, size 0x10, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x5fcf3c8, size 0x78, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Decimal value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x5fcedac, size 0xf8, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Object* value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x5fceea4, size 0x108, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x5fc8eac, size 0x8, virtual false, abstract: false, final false
  static inline int8_t ToSByte(bool value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x5fcb8d8, size 0x68, virtual false, abstract: false, final false
  static inline int8_t ToSByte(char16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x5fcf270, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(double_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x5fcf210, size 0x60, virtual false, abstract: false, final false
  static inline int8_t ToSByte(float_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x5fcefac, size 0x6c, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x5fcf080, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x5fcf148, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x5fcf018, size 0x68, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x5fcf0e4, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x5fcf1ac, size 0x64, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x5fca980, size 0x60, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint8_t value);

  /// @brief Method ToSingle, addr 0x5fd1db4, size 0x7c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW value);

  /// @brief Method ToSingle, addr 0x5fd1e30, size 0x1c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x5fd1d48, size 0x6c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Decimal value);

  /// @brief Method ToSingle, addr 0x5fd1af8, size 0xf8, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToSingle, addr 0x5fd1bf0, size 0x108, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x5fc91f4, size 0x14, virtual false, abstract: false, final false
  static inline float_t ToSingle(bool value);

  /// @brief Method ToSingle, addr 0x5fd1d40, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(double_t value);

  /// @brief Method ToSingle, addr 0x5fd1d04, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(int16_t value);

  /// @brief Method ToSingle, addr 0x5fd1d1c, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(int32_t value);

  /// @brief Method ToSingle, addr 0x5fd1d2c, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSingle, addr 0x5fd1cf8, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSingle, addr 0x5fd1d10, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSingle, addr 0x5fd1d24, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToSingle, addr 0x5fd1d34, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint64_t value);

  /// @brief Method ToSingle, addr 0x5fcac9c, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint8_t value);

  /// @brief Method ToString, addr 0x5fd286c, size 0x198, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x5fd2a04, size 0x30, virtual false, abstract: false, final false
  static inline ::StringW ToString(char16_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x5fd2a34, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x5fd32e4, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value, int32_t toBase);

  /// @brief Method ToString, addr 0x5fd3364, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value, int32_t toBase);

  /// @brief Method ToString, addr 0x5fd3260, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint8_t value, int32_t toBase);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x5fd2dd0, size 0x120, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW value, int32_t fromBase);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x5fd062c, size 0x18, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x5fd05b4, size 0x78, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Decimal value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x5fd00a0, size 0xf8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Object* value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x5fd0198, size 0x108, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x5fc8fe4, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(bool value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x5fcbb1c, size 0x4, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(char16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x5fd0550, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(double_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x5fd04f0, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(float_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x5fd0300, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x5fd0360, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x5fd0428, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x5fd02a0, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x5fd03c4, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x5fd048c, size 0x64, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x5fcaaa8, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x5fd2fcc, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW value, int32_t fromBase);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x5fd1050, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x5fd0fd8, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Decimal value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x5fd0ae8, size 0xf8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Object* value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x5fd0be0, size 0x108, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x5fc90b4, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(bool value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x5fcbbe0, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(char16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x5fd0f38, size 0xa0, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(double_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x5fd0ed8, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(float_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x5fd0d48, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x5fd0db0, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x5fd0e10, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x5fd0ce8, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x5fd0da8, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x5fd0e74, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x5fcab70, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x5fd3184, size 0xdc, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value, int32_t fromBase);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x5fd1ae0, size 0x18, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x5fd1a68, size 0x78, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Decimal value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x5fd1574, size 0xf8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Object* value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x5fd166c, size 0x108, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x5fc9184, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(bool value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x5fcbca8, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(char16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x5fd1964, size 0x104, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(double_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x5fd1904, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(float_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x5fd17d4, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x5fd183c, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x5fd18a4, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x5fd1774, size 0x60, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x5fd1834, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x5fd189c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x5fcac38, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint8_t value);

  /// @brief Method TryDecodeFromUtf16, addr 0x5fccb80, size 0x380, virtual false, abstract: false, final false
  static inline bool TryDecodeFromUtf16(::System::ReadOnlySpan_1<char16_t> utf16, ::System::Span_1<uint8_t> bytes, ::by_ref<int32_t> consumed, ::by_ref<int32_t> written);

  /// @brief Method TryFromBase64Chars, addr 0x5fd4110, size 0x510, virtual false, abstract: false, final false
  static inline bool TryFromBase64Chars(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<uint8_t> bytes, ::by_ref<int32_t> bytesWritten);

  /// @brief Method WriteThreeLowOrderBytes, addr 0x5fccf50, size 0x18, virtual false, abstract: false, final false
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
