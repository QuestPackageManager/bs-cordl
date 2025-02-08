#pragma once
// IWYU pragma private; include "System/Number.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Number)
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System::Text {
struct ValueStringBuilder;
}
namespace System {
struct Decimal;
}
namespace System {
class IFormatProvider;
}
namespace System {
struct NumberBuffer_Number_DigitsAndNullTerminator;
}
namespace System {
struct Number_NumberBuffer;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System {
class Number;
}
namespace System {
struct NumberBuffer_Number_DigitsAndNullTerminator;
}
namespace System {
struct Number_NumberBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Number);
MARK_VAL_T(::System::NumberBuffer_Number_DigitsAndNullTerminator);
MARK_VAL_T(::System::Number_NumberBuffer);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Number/NumberBuffer/DigitsAndNullTerminator
#pragma pack(push, 0)
struct CORDL_TYPE NumberBuffer_Number_DigitsAndNullTerminator {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr NumberBuffer_Number_DigitsAndNullTerminator();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2449 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x66 };

  /// @brief Size padding 0x66 - 0x0 = 0x66, packed as 0x66
  uint8_t _cordl_size_padding[0x66];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::NumberBuffer_Number_DigitsAndNullTerminator, 0x66>, "Size mismatch!");

} // namespace System
// Dependencies System.Number::NumberBuffer::DigitsAndNullTerminator
namespace System {
// Is value type: true
// CS Name: System.Number/NumberBuffer
#pragma pack(push, 1)
struct CORDL_TYPE Number_NumberBuffer {
public:
  // Declarations
  using DigitsAndNullTerminator = ::System::NumberBuffer_Number_DigitsAndNullTerminator;

  __declspec(property(get = get_digits)) ::cordl_internals::Ptr<char16_t> digits;

  __declspec(property(get = get_sign, put = set_sign)) bool sign;

  /// @brief Method get_digits, addr 0x3dfe84c, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<char16_t> get_digits();

  /// @brief Method get_sign, addr 0x3dfe830, size 0x10, virtual false, abstract: false, final false
  inline bool get_sign();

  /// @brief Method set_sign, addr 0x3dfe840, size 0xc, virtual false, abstract: false, final false
  inline void set_sign(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Number_NumberBuffer();

  // Ctor Parameters [CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_sign", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_digits", ty: "::System::NumberBuffer_Number_DigitsAndNullTerminator", modifiers: "", def_value: None }, CppParam {
  // name: "_allDigits", ty: "::cordl_internals::Ptr<char16_t>", modifiers: "", def_value: None }]
  constexpr Number_NumberBuffer(int32_t precision, int32_t scale, int32_t _sign, ::System::NumberBuffer_Number_DigitsAndNullTerminator _digits, ::cordl_internals::Ptr<char16_t> _allDigits) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2450 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x7a };

  /// @brief Field precision, offset: 0x0, size: 0x4, def value: None
  int32_t precision;

  /// @brief Field scale, offset: 0x4, size: 0x4, def value: None
  int32_t scale;

  /// @brief Field _sign, offset: 0x8, size: 0x4, def value: None
  int32_t _sign;

  /// @brief Field _digits, offset: 0xc, size: 0x66, def value: None
  ::System::NumberBuffer_Number_DigitsAndNullTerminator _digits;

  /// @brief Field _allDigits, offset: 0x72, size: 0x8, def value: None
  ::cordl_internals::Ptr<char16_t> _allDigits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::System::Number_NumberBuffer, precision) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Number_NumberBuffer, scale) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Number_NumberBuffer, _sign) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Number_NumberBuffer, _digits) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Number_NumberBuffer, _allDigits) == 0x72, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Number_NumberBuffer, 0x7a>, "Size mismatch!");

} // namespace System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Number
class CORDL_TYPE Number : public ::System::Object {
public:
  // Declarations
  using NumberBuffer = ::System::Number_NumberBuffer;

  /// @brief Field s_charToHexLookup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_charToHexLookup, put = setStaticF_s_charToHexLookup)) ::ArrayW<int32_t, ::Array<int32_t>*> s_charToHexLookup;

  /// @brief Field s_negCurrencyFormats, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_negCurrencyFormats, put = setStaticF_s_negCurrencyFormats)) ::ArrayW<::StringW, ::Array<::StringW>*> s_negCurrencyFormats;

  /// @brief Field s_negNumberFormats, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_negNumberFormats, put = setStaticF_s_negNumberFormats)) ::ArrayW<::StringW, ::Array<::StringW>*> s_negNumberFormats;

  /// @brief Field s_negPercentFormats, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_negPercentFormats, put = setStaticF_s_negPercentFormats)) ::ArrayW<::StringW, ::Array<::StringW>*> s_negPercentFormats;

  /// @brief Field s_posCurrencyFormats, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_posCurrencyFormats, put = setStaticF_s_posCurrencyFormats)) ::ArrayW<::StringW, ::Array<::StringW>*> s_posCurrencyFormats;

  /// @brief Field s_posPercentFormats, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_posPercentFormats, put = setStaticF_s_posPercentFormats)) ::ArrayW<::StringW, ::Array<::StringW>*> s_posPercentFormats;

  /// @brief Field s_rgexp64Power10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_rgexp64Power10, put = setStaticF_s_rgexp64Power10)) ::ArrayW<int8_t, ::Array<int8_t>*> s_rgexp64Power10;

  /// @brief Field s_rgexp64Power10By16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_rgexp64Power10By16, put = setStaticF_s_rgexp64Power10By16)) ::ArrayW<int16_t, ::Array<int16_t>*> s_rgexp64Power10By16;

  /// @brief Field s_rgval64Power10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_rgval64Power10, put = setStaticF_s_rgval64Power10)) ::ArrayW<uint64_t, ::Array<uint64_t>*> s_rgval64Power10;

  /// @brief Field s_rgval64Power10By16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_rgval64Power10By16, put = setStaticF_s_rgval64Power10By16)) ::ArrayW<uint64_t, ::Array<uint64_t>*> s_rgval64Power10By16;

  /// @brief Method DecimalToNumber, addr 0x3df2fa4, size 0x23c, virtual false, abstract: false, final false
  static inline void DecimalToNumber(::System::Decimal value, ::ByRef<::System::Number_NumberBuffer> number);

  /// @brief Method DigitsToInt, addr 0x3dfdab0, size 0x34, virtual false, abstract: false, final false
  static inline uint32_t DigitsToInt(::cordl_internals::Ptr<char16_t> p, int32_t count);

  /// @brief Method DoubleToNumber, addr 0x3df5114, size 0x3e0, virtual false, abstract: false, final false
  static inline void DoubleToNumber(double_t value, int32_t precision, ::ByRef<::System::Number_NumberBuffer> number);

  /// @brief Method FindSection, addr 0x3df9598, size 0x14c, virtual false, abstract: false, final false
  static inline int32_t FindSection(::System::ReadOnlySpan_1<char16_t> format, int32_t section);

  /// @brief Method FormatCurrency, addr 0x3df8334, size 0x268, virtual false, abstract: false, final false
  static inline void FormatCurrency(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                    ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatDecimal, addr 0x3df2cb0, size 0x1b0, virtual false, abstract: false, final false
  static inline ::StringW FormatDecimal(::System::Decimal value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatDouble, addr 0x3df4bf8, size 0x2ec, virtual false, abstract: false, final false
  static inline ::StringW FormatDouble(::ByRef<::System::Text::ValueStringBuilder> sb, double_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatDouble, addr 0x3df4ab8, size 0x140, virtual false, abstract: false, final false
  static inline ::StringW FormatDouble(double_t value, ::StringW format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatExponent, addr 0x3df96e4, size 0x2a8, virtual false, abstract: false, final false
  static inline void FormatExponent(::ByRef<::System::Text::ValueStringBuilder> sb, ::System::Globalization::NumberFormatInfo* info, int32_t value, char16_t expChar, int32_t minDigits,
                                    bool positiveSign);

  /// @brief Method FormatFixed, addr 0x3df859c, size 0x530, virtual false, abstract: false, final false
  static inline void FormatFixed(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                 ::System::Globalization::NumberFormatInfo* info, ::ArrayW<int32_t, ::Array<int32_t>*> groupDigits, ::StringW sDecimal, ::StringW sGroup);

  /// @brief Method FormatGeneral, addr 0x3df8f78, size 0x3b8, virtual false, abstract: false, final false
  static inline void FormatGeneral(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                   ::System::Globalization::NumberFormatInfo* info, char16_t expChar, bool bSuppressScientific);

  /// @brief Method FormatInt32, addr 0x3dec4e8, size 0x29c, virtual false, abstract: false, final false
  static inline ::StringW FormatInt32(int32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method FormatInt64, addr 0x3def2cc, size 0x298, virtual false, abstract: false, final false
  static inline ::StringW FormatInt64(int64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method FormatNumber, addr 0x3df8acc, size 0x254, virtual false, abstract: false, final false
  static inline void FormatNumber(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                  ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatPercent, addr 0x3df9330, size 0x268, virtual false, abstract: false, final false
  static inline void FormatPercent(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                   ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatScientific, addr 0x3df8d20, size 0x258, virtual false, abstract: false, final false
  static inline void FormatScientific(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                      ::System::Globalization::NumberFormatInfo* info, char16_t expChar);

  /// @brief Method FormatSingle, addr 0x3df5b14, size 0x2f8, virtual false, abstract: false, final false
  static inline ::StringW FormatSingle(::ByRef<::System::Text::ValueStringBuilder> sb, float_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatSingle, addr 0x3df59d4, size 0x140, virtual false, abstract: false, final false
  static inline ::StringW FormatSingle(float_t value, ::StringW format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatUInt32, addr 0x3dec990, size 0x264, virtual false, abstract: false, final false
  static inline ::StringW FormatUInt32(uint32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method FormatUInt64, addr 0x3df78e0, size 0x260, virtual false, abstract: false, final false
  static inline ::StringW FormatUInt64(uint64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method High32, addr 0x3df822c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t High32(uint64_t value);

  /// @brief Method Int32ToHexChars, addr 0x3df809c, size 0x40, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> Int32ToHexChars(::cordl_internals::Ptr<char16_t> buffer, uint32_t value, int32_t hexBase, int32_t digits);

  /// @brief Method Int32ToHexStr, addr 0x3df62a4, size 0x138, virtual false, abstract: false, final false
  static inline ::StringW Int32ToHexStr(int32_t value, char16_t hexBase, int32_t digits);

  /// @brief Method Int32ToNumber, addr 0x3df7f70, size 0x12c, virtual false, abstract: false, final false
  static inline void Int32ToNumber(int32_t value, ::ByRef<::System::Number_NumberBuffer> number);

  /// @brief Method Int64DivMod1E9, addr 0x3df81f4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t Int64DivMod1E9(::ByRef<uint64_t> value);

  /// @brief Method Int64ToHexStr, addr 0x3df6df4, size 0x1f0, virtual false, abstract: false, final false
  static inline ::StringW Int64ToHexStr(int64_t value, char16_t hexBase, int32_t digits);

  /// @brief Method Int64ToNumber, addr 0x3df6fe4, size 0x1a8, virtual false, abstract: false, final false
  static inline void Int64ToNumber(int64_t input, ::ByRef<::System::Number_NumberBuffer> number);

  /// @brief Method IsDigit, addr 0x3dfc75c, size 0x10, virtual false, abstract: false, final false
  static inline bool IsDigit(int32_t ch);

  /// @brief Method IsWhite, addr 0x3dfc6bc, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsWhite(int32_t ch);

  /// @brief Method Low32, addr 0x3df8234, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t Low32(uint64_t value);

  /// @brief Method MatchChars, addr 0x3dfc6d8, size 0x84, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> MatchChars(::cordl_internals::Ptr<char16_t> p, ::cordl_internals::Ptr<char16_t> pEnd, ::StringW value);

  /// @brief Method Mul32x32To64, addr 0x3dfdae4, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t Mul32x32To64(uint32_t a, uint32_t b);

  /// @brief Method Mul64Lossy, addr 0x3dfdaec, size 0x98, virtual false, abstract: false, final false
  static inline uint64_t Mul64Lossy(uint64_t a, uint64_t b, ::ByRef<int32_t> pexp);

  /// @brief Method NegativeInt32ToDecStr, addr 0x3df60f8, size 0x1ac, virtual false, abstract: false, final false
  static inline ::StringW NegativeInt32ToDecStr(int32_t value, int32_t digits, ::StringW sNegative);

  /// @brief Method NegativeInt64ToDecStr, addr 0x3df6b54, size 0x2a0, virtual false, abstract: false, final false
  static inline ::StringW NegativeInt64ToDecStr(int64_t input, int32_t digits, ::StringW sNegative);

  /// @brief Method NumberBufferToDecimal, addr 0x3dfcd3c, size 0x2f8, virtual false, abstract: false, final false
  static inline bool NumberBufferToDecimal(::ByRef<::System::Number_NumberBuffer> number, ::ByRef<::System::Decimal> value);

  /// @brief Method NumberBufferToDouble, addr 0x3dfd384, size 0x8c, virtual false, abstract: false, final false
  static inline bool NumberBufferToDouble(::ByRef<::System::Number_NumberBuffer> number, ::ByRef<double_t> value);

  /// @brief Method NumberToDouble, addr 0x3df54f4, size 0x4e0, virtual false, abstract: false, final false
  static inline double_t NumberToDouble(::ByRef<::System::Number_NumberBuffer> number);

  /// @brief Method NumberToInt32, addr 0x3df998c, size 0xbc, virtual false, abstract: false, final false
  static inline bool NumberToInt32(::ByRef<::System::Number_NumberBuffer> number, ::ByRef<int32_t> value);

  /// @brief Method NumberToInt64, addr 0x3df9a48, size 0xb8, virtual false, abstract: false, final false
  static inline bool NumberToInt64(::ByRef<::System::Number_NumberBuffer> number, ::ByRef<int64_t> value);

  /// @brief Method NumberToString, addr 0x3df31e0, size 0x590, virtual false, abstract: false, final false
  static inline void NumberToString(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Number_NumberBuffer> number, char16_t format, int32_t nMaxDigits,
                                    ::System::Globalization::NumberFormatInfo* info, bool isDecimal);

  /// @brief Method NumberToStringFormat, addr 0x3df3770, size 0x1138, virtual false, abstract: false, final false
  static inline void NumberToStringFormat(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Number_NumberBuffer> number, ::System::ReadOnlySpan_1<char16_t> format,
                                          ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method NumberToUInt32, addr 0x3df9b00, size 0xb0, virtual false, abstract: false, final false
  static inline bool NumberToUInt32(::ByRef<::System::Number_NumberBuffer> number, ::ByRef<uint32_t> value);

  /// @brief Method NumberToUInt64, addr 0x3df9bb0, size 0xb0, virtual false, abstract: false, final false
  static inline bool NumberToUInt64(::ByRef<::System::Number_NumberBuffer> number, ::ByRef<uint64_t> value);

  /// @brief Method ParseDecimal, addr 0x3dfcc34, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Decimal ParseDecimal(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseDouble, addr 0x3dfd034, size 0x350, virtual false, abstract: false, final false
  static inline double_t ParseDouble(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseFormatSpecifier, addr 0x3df2e60, size 0x144, virtual false, abstract: false, final false
  static inline char16_t ParseFormatSpecifier(::System::ReadOnlySpan_1<char16_t> format, ::ByRef<int32_t> digits);

  /// @brief Method ParseInt32, addr 0x3ded554, size 0x1c4, virtual false, abstract: false, final false
  static inline int32_t ParseInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseInt64, addr 0x3defb9c, size 0x1c8, virtual false, abstract: false, final false
  static inline int64_t ParseInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseNumber, addr 0x3dfbfc0, size 0x6fc, virtual false, abstract: false, final false
  static inline bool ParseNumber(::ByRef<::cordl_internals::Ptr<char16_t>> str, ::cordl_internals::Ptr<char16_t> strEnd, ::System::Globalization::NumberStyles styles,
                                 ::ByRef<::System::Number_NumberBuffer> number, ::System::Globalization::NumberFormatInfo* info, bool parseDecimal);

  /// @brief Method ParseSingle, addr 0x3dfd410, size 0x364, virtual false, abstract: false, final false
  static inline float_t ParseSingle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseUInt32, addr 0x3dfb08c, size 0x1b0, virtual false, abstract: false, final false
  static inline uint32_t ParseUInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseUInt64, addr 0x3dfb810, size 0x1b0, virtual false, abstract: false, final false
  static inline uint64_t ParseUInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method RoundNumber, addr 0x3df8238, size 0xfc, virtual false, abstract: false, final false
  static inline void RoundNumber(::ByRef<::System::Number_NumberBuffer> number, int32_t pos);

  /// @brief Method StringToNumber, addr 0x3dfa618, size 0x138, virtual false, abstract: false, final false
  static inline void StringToNumber(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::ByRef<::System::Number_NumberBuffer> number,
                                    ::System::Globalization::NumberFormatInfo* info, bool parseDecimal);

  /// @brief Method ThrowOverflowOrFormatException, addr 0x3dfa240, size 0x88, virtual false, abstract: false, final false
  static inline void ThrowOverflowOrFormatException(bool overflow, ::StringW overflowResourceKey);

  /// @brief Method TrailingZeros, addr 0x3dfc89c, size 0x90, virtual false, abstract: false, final false
  static inline bool TrailingZeros(::System::ReadOnlySpan_1<char16_t> value, int32_t index);

  /// @brief Method TryCopyTo, addr 0x3df5040, size 0xd4, virtual false, abstract: false, final false
  static inline bool TryCopyTo(::StringW source, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatDecimal, addr 0x3df48a8, size 0x1c4, virtual false, abstract: false, final false
  static inline bool TryFormatDecimal(::System::Decimal value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination,
                                      ::ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatDouble, addr 0x3df4ee4, size 0x15c, virtual false, abstract: false, final false
  static inline bool TryFormatDouble(double_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination,
                                     ::ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatInt32, addr 0x3decfa8, size 0x2e0, virtual false, abstract: false, final false
  static inline bool TryFormatInt32(int32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination,
                                    ::ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatInt64, addr 0x3def800, size 0x2dc, virtual false, abstract: false, final false
  static inline bool TryFormatInt64(int64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination,
                                    ::ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatSingle, addr 0x3df5e0c, size 0x15c, virtual false, abstract: false, final false
  static inline bool TryFormatSingle(float_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination,
                                     ::ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatUInt32, addr 0x3decd08, size 0x2a0, virtual false, abstract: false, final false
  static inline bool TryFormatUInt32(uint32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination,
                                     ::ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatUInt64, addr 0x3df7cd4, size 0x29c, virtual false, abstract: false, final false
  static inline bool TryFormatUInt64(uint64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination,
                                     ::ByRef<int32_t> charsWritten);

  /// @brief Method TryInt32ToHexStr, addr 0x3df6788, size 0x174, virtual false, abstract: false, final false
  static inline bool TryInt32ToHexStr(int32_t value, char16_t hexBase, int32_t digits, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method TryInt64ToHexStr, addr 0x3df76dc, size 0x204, virtual false, abstract: false, final false
  static inline bool TryInt64ToHexStr(int64_t value, char16_t hexBase, int32_t digits, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method TryNegativeInt32ToDecStr, addr 0x3df65a0, size 0x1e8, virtual false, abstract: false, final false
  static inline bool TryNegativeInt32ToDecStr(int32_t value, int32_t digits, ::StringW sNegative, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method TryNegativeInt64ToDecStr, addr 0x3df7410, size 0x2cc, virtual false, abstract: false, final false
  static inline bool TryNegativeInt64ToDecStr(int64_t input, int32_t digits, ::StringW sNegative, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method TryParseDecimal, addr 0x3dfd774, size 0x104, virtual false, abstract: false, final false
  static inline bool TryParseDecimal(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                     ::ByRef<::System::Decimal> result);

  /// @brief Method TryParseDouble, addr 0x3dfd878, size 0x104, virtual false, abstract: false, final false
  static inline bool TryParseDouble(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ::ByRef<double_t> result);

  /// @brief Method TryParseInt32, addr 0x3ded884, size 0x184, virtual false, abstract: false, final false
  static inline bool TryParseInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ::ByRef<int32_t> result);

  /// @brief Method TryParseInt32IntegerStyle, addr 0x3df9c60, size 0x5e0, virtual false, abstract: false, final false
  static inline bool TryParseInt32IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                               ::ByRef<int32_t> result, ::ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseInt64, addr 0x3deffe4, size 0x184, virtual false, abstract: false, final false
  static inline bool TryParseInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ::ByRef<int64_t> result);

  /// @brief Method TryParseInt64IntegerStyle, addr 0x3dfa750, size 0x5ec, virtual false, abstract: false, final false
  static inline bool TryParseInt64IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                               ::ByRef<int64_t> result, ::ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseSingle, addr 0x3dfd97c, size 0x134, virtual false, abstract: false, final false
  static inline bool TryParseSingle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ::ByRef<float_t> result);

  /// @brief Method TryParseUInt32, addr 0x3dfc92c, size 0x184, virtual false, abstract: false, final false
  static inline bool TryParseUInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ::ByRef<uint32_t> result);

  /// @brief Method TryParseUInt32HexNumberStyle, addr 0x3dfa2c8, size 0x350, virtual false, abstract: false, final false
  static inline bool TryParseUInt32HexNumberStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                  ::ByRef<uint32_t> result, ::ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseUInt32IntegerStyle, addr 0x3dfb23c, size 0x5d4, virtual false, abstract: false, final false
  static inline bool TryParseUInt32IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                ::ByRef<uint32_t> result, ::ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseUInt64, addr 0x3dfcab0, size 0x184, virtual false, abstract: false, final false
  static inline bool TryParseUInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ::ByRef<uint64_t> result);

  /// @brief Method TryParseUInt64HexNumberStyle, addr 0x3dfad3c, size 0x350, virtual false, abstract: false, final false
  static inline bool TryParseUInt64HexNumberStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                  ::ByRef<uint64_t> result, ::ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseUInt64IntegerStyle, addr 0x3dfb9c0, size 0x600, virtual false, abstract: false, final false
  static inline bool TryParseUInt64IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                ::ByRef<uint64_t> result, ::ByRef<bool> failureIsOverflow);

  /// @brief Method TryStringToNumber, addr 0x3dfc76c, size 0x130, virtual false, abstract: false, final false
  static inline bool TryStringToNumber(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::ByRef<::System::Number_NumberBuffer> number,
                                       ::System::Globalization::NumberFormatInfo* info, bool parseDecimal);

  /// @brief Method TryUInt32ToDecStr, addr 0x3df63dc, size 0x1c4, virtual false, abstract: false, final false
  static inline bool TryUInt32ToDecStr(uint32_t value, int32_t digits, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method TryUInt64ToDecStr, addr 0x3df718c, size 0x284, virtual false, abstract: false, final false
  static inline bool TryUInt64ToDecStr(uint64_t value, int32_t digits, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method UInt32ToDecChars, addr 0x3df4a6c, size 0x4c, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> UInt32ToDecChars(::cordl_internals::Ptr<char16_t> bufferEnd, uint32_t value, int32_t digits);

  /// @brief Method UInt32ToDecStr, addr 0x3df5f68, size 0x190, virtual false, abstract: false, final false
  static inline ::StringW UInt32ToDecStr(uint32_t value, int32_t digits);

  /// @brief Method UInt32ToNumber, addr 0x3df80dc, size 0x118, virtual false, abstract: false, final false
  static inline void UInt32ToNumber(uint32_t value, ::ByRef<::System::Number_NumberBuffer> number);

  /// @brief Method UInt64ToDecStr, addr 0x3df68fc, size 0x258, virtual false, abstract: false, final false
  static inline ::StringW UInt64ToDecStr(uint64_t value, int32_t digits);

  /// @brief Method UInt64ToNumber, addr 0x3df7b40, size 0x194, virtual false, abstract: false, final false
  static inline void UInt64ToNumber(uint64_t value, ::ByRef<::System::Number_NumberBuffer> number);

  /// @brief Method abs, addr 0x3dfdb84, size 0xc, virtual false, abstract: false, final false
  static inline int32_t abs(int32_t value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_charToHexLookup();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_negCurrencyFormats();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_negNumberFormats();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_negPercentFormats();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_posCurrencyFormats();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_posPercentFormats();

  static inline ::ArrayW<int8_t, ::Array<int8_t>*> getStaticF_s_rgexp64Power10();

  static inline ::ArrayW<int16_t, ::Array<int16_t>*> getStaticF_s_rgexp64Power10By16();

  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> getStaticF_s_rgval64Power10();

  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> getStaticF_s_rgval64Power10By16();

  static inline void setStaticF_s_charToHexLookup(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_s_negCurrencyFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_s_negNumberFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_s_negPercentFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_s_posCurrencyFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_s_posPercentFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_s_rgexp64Power10(::ArrayW<int8_t, ::Array<int8_t>*> value);

  static inline void setStaticF_s_rgexp64Power10By16(::ArrayW<int16_t, ::Array<int16_t>*> value);

  static inline void setStaticF_s_rgval64Power10(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  static inline void setStaticF_s_rgval64Power10By16(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Number();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Number", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Number(Number&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Number", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Number(Number const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2451 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Number, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Number);
DEFINE_IL2CPP_ARG_TYPE(::System::Number*, "System", "Number");
DEFINE_IL2CPP_ARG_TYPE(::System::NumberBuffer_Number_DigitsAndNullTerminator, "System", "Number/NumberBuffer/DigitsAndNullTerminator");
DEFINE_IL2CPP_ARG_TYPE(::System::Number_NumberBuffer, "System", "Number/NumberBuffer");
