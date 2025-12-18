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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2454 };

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

  __declspec(property(get = get_digits)) char16_t* digits;

  __declspec(property(get = get_sign, put = set_sign)) bool sign;

  /// @brief Method get_digits, addr 0x5aa7734, size 0x8, virtual false, abstract: false, final false
  inline char16_t* get_digits();

  /// @brief Method get_sign, addr 0x5aa7718, size 0x10, virtual false, abstract: false, final false
  inline bool get_sign();

  /// @brief Method set_sign, addr 0x5aa7728, size 0xc, virtual false, abstract: false, final false
  inline void set_sign(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Number_NumberBuffer();

  // Ctor Parameters [CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_sign", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_digits", ty: "::System::NumberBuffer_Number_DigitsAndNullTerminator", modifiers: "", def_value: None }, CppParam {
  // name: "_allDigits", ty: "char16_t*", modifiers: "", def_value: None }]
  constexpr Number_NumberBuffer(int32_t precision, int32_t scale, int32_t _sign, ::System::NumberBuffer_Number_DigitsAndNullTerminator _digits, char16_t* _allDigits) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2455 };

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
  char16_t* _allDigits;

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

  /// @brief Method DecimalToNumber, addr 0x5a9b884, size 0x214, virtual false, abstract: false, final false
  static inline void DecimalToNumber(::System::Decimal value, ::ByRef<::System::Number_NumberBuffer> number);

  /// @brief Method DigitsToInt, addr 0x5aa6c20, size 0x34, virtual false, abstract: false, final false
  static inline uint32_t DigitsToInt(char16_t* p, int32_t count);

  /// @brief Method DoubleToNumber, addr 0x5a9da68, size 0x48c, virtual false, abstract: false, final false
  static inline void DoubleToNumber(double_t value, int32_t precision, ::ByRef<::System::Number_NumberBuffer> number);

  /// @brief Method FindSection, addr 0x5aa21fc, size 0x138, virtual false, abstract: false, final false
  static inline int32_t FindSection(::System::ReadOnlySpan_1<char16_t> format, int32_t section);

  /// @brief Method FormatCurrency, addr 0x5aa0f64, size 0x268, virtual false, abstract: false, final false
  static inline void FormatCurrency(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                    ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatDecimal, addr 0x5a9b594, size 0x1a4, virtual false, abstract: false, final false
  static inline ::StringW FormatDecimal(::System::Decimal value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatDouble, addr 0x5a9d52c, size 0x2f4, virtual false, abstract: false, final false
  static inline ::StringW FormatDouble(::ByRef<::System::Text::ValueStringBuilder> sb, double_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatDouble, addr 0x5a9d3e8, size 0x144, virtual false, abstract: false, final false
  static inline ::StringW FormatDouble(double_t value, ::StringW format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatExponent, addr 0x5aa2334, size 0x2d8, virtual false, abstract: false, final false
  static inline void FormatExponent(::ByRef<::System::Text::ValueStringBuilder> sb, ::System::Globalization::NumberFormatInfo* info, int32_t value, char16_t expChar, int32_t minDigits,
                                    bool positiveSign);

  /// @brief Method FormatFixed, addr 0x5aa11cc, size 0x54c, virtual false, abstract: false, final false
  static inline void FormatFixed(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                 ::System::Globalization::NumberFormatInfo* info, ::ArrayW<int32_t, ::Array<int32_t>*> groupDigits, ::StringW sDecimal, ::StringW sGroup);

  /// @brief Method FormatGeneral, addr 0x5aa1bd8, size 0x3bc, virtual false, abstract: false, final false
  static inline void FormatGeneral(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                   ::System::Globalization::NumberFormatInfo* info, char16_t expChar, bool bSuppressScientific);

  /// @brief Method FormatInt32, addr 0x5a9423c, size 0x3fc, virtual false, abstract: false, final false
  static inline ::StringW FormatInt32(int32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method FormatInt64, addr 0x5a97498, size 0x314, virtual false, abstract: false, final false
  static inline ::StringW FormatInt64(int64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method FormatNumber, addr 0x5aa1718, size 0x254, virtual false, abstract: false, final false
  static inline void FormatNumber(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                  ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatPercent, addr 0x5aa1f94, size 0x268, virtual false, abstract: false, final false
  static inline void FormatPercent(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                   ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatScientific, addr 0x5aa196c, size 0x26c, virtual false, abstract: false, final false
  static inline void FormatScientific(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                      ::System::Globalization::NumberFormatInfo* info, char16_t expChar);

  /// @brief Method FormatSingle, addr 0x5a9e508, size 0x2fc, virtual false, abstract: false, final false
  static inline ::StringW FormatSingle(::ByRef<::System::Text::ValueStringBuilder> sb, float_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatSingle, addr 0x5a9e3c4, size 0x144, virtual false, abstract: false, final false
  static inline ::StringW FormatSingle(float_t value, ::StringW format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatUInt32, addr 0x5a94830, size 0x37c, virtual false, abstract: false, final false
  static inline ::StringW FormatUInt32(uint32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method FormatUInt64, addr 0x5aa04c0, size 0x2a4, virtual false, abstract: false, final false
  static inline ::StringW FormatUInt64(uint64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method High32, addr 0x5aa0e6c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t High32(uint64_t value);

  /// @brief Method Int32ToHexChars, addr 0x5aa0cec, size 0x54, virtual false, abstract: false, final false
  static inline char16_t* Int32ToHexChars(char16_t* buffer, uint32_t value, int32_t hexBase, int32_t digits);

  /// @brief Method Int32ToHexStr, addr 0x5a9ecac, size 0x144, virtual false, abstract: false, final false
  static inline ::StringW Int32ToHexStr(int32_t value, char16_t hexBase, int32_t digits);

  /// @brief Method Int32ToNumber, addr 0x5aa0bec, size 0x100, virtual false, abstract: false, final false
  static inline void Int32ToNumber(int32_t value, ::ByRef<::System::Number_NumberBuffer> number);

  /// @brief Method Int64DivMod1E9, addr 0x5aa0e34, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t Int64DivMod1E9(::ByRef<uint64_t> value);

  /// @brief Method Int64ToHexStr, addr 0x5a9f8b8, size 0x214, virtual false, abstract: false, final false
  static inline ::StringW Int64ToHexStr(int64_t value, char16_t hexBase, int32_t digits);

  /// @brief Method Int64ToNumber, addr 0x5a9facc, size 0x1ac, virtual false, abstract: false, final false
  static inline void Int64ToNumber(int64_t input, ::ByRef<::System::Number_NumberBuffer> number);

  /// @brief Method IsDigit, addr 0x5aa560c, size 0x10, virtual false, abstract: false, final false
  static inline bool IsDigit(int32_t ch);

  /// @brief Method IsWhite, addr 0x5aa5590, size 0x14, virtual false, abstract: false, final false
  static inline bool IsWhite(int32_t ch);

  /// @brief Method Low32, addr 0x5aa0e74, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t Low32(uint64_t value);

  /// @brief Method MatchChars, addr 0x5aa55a4, size 0x68, virtual false, abstract: false, final false
  static inline char16_t* MatchChars(char16_t* p, char16_t* pEnd, ::StringW value);

  /// @brief Method Mul32x32To64, addr 0x5aa6c54, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t Mul32x32To64(uint32_t a, uint32_t b);

  /// @brief Method Mul64Lossy, addr 0x5aa6c5c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t Mul64Lossy(uint64_t a, uint64_t b, ::ByRef<int32_t> pexp);

  /// @brief Method NegativeInt32ToDecStr, addr 0x5a9eafc, size 0x1b0, virtual false, abstract: false, final false
  static inline ::StringW NegativeInt32ToDecStr(int32_t value, int32_t digits, ::StringW sNegative);

  /// @brief Method NegativeInt64ToDecStr, addr 0x5a9f5c8, size 0x2f0, virtual false, abstract: false, final false
  static inline ::StringW NegativeInt64ToDecStr(int64_t input, int32_t digits, ::StringW sNegative);

  /// @brief Method NumberBufferToDecimal, addr 0x5aa5bf4, size 0x30c, virtual false, abstract: false, final false
  static inline bool NumberBufferToDecimal(::ByRef<::System::Number_NumberBuffer> number, ::ByRef<::System::Decimal> value);

  /// @brief Method NumberBufferToDouble, addr 0x5aa639c, size 0x8c, virtual false, abstract: false, final false
  static inline bool NumberBufferToDouble(::ByRef<::System::Number_NumberBuffer> number, ::ByRef<double_t> value);

  /// @brief Method NumberToDouble, addr 0x5a9def4, size 0x4d0, virtual false, abstract: false, final false
  static inline double_t NumberToDouble(::ByRef<::System::Number_NumberBuffer> number);

  /// @brief Method NumberToInt32, addr 0x5aa260c, size 0x8c, virtual false, abstract: false, final false
  static inline bool NumberToInt32(::ByRef<::System::Number_NumberBuffer> number, ::ByRef<int32_t> value);

  /// @brief Method NumberToInt64, addr 0x5aa2698, size 0x88, virtual false, abstract: false, final false
  static inline bool NumberToInt64(::ByRef<::System::Number_NumberBuffer> number, ::ByRef<int64_t> value);

  /// @brief Method NumberToString, addr 0x5a9ba98, size 0x590, virtual false, abstract: false, final false
  static inline void NumberToString(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Number_NumberBuffer> number, char16_t format, int32_t nMaxDigits,
                                    ::System::Globalization::NumberFormatInfo* info, bool isDecimal);

  /// @brief Method NumberToStringFormat, addr 0x5a9c028, size 0x11b4, virtual false, abstract: false, final false
  static inline void NumberToStringFormat(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Number_NumberBuffer> number, ::System::ReadOnlySpan_1<char16_t> format,
                                          ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method NumberToUInt32, addr 0x5aa2720, size 0x84, virtual false, abstract: false, final false
  static inline bool NumberToUInt32(::ByRef<::System::Number_NumberBuffer> number, ::ByRef<uint32_t> value);

  /// @brief Method NumberToUInt64, addr 0x5aa27a4, size 0x84, virtual false, abstract: false, final false
  static inline bool NumberToUInt64(::ByRef<::System::Number_NumberBuffer> number, ::ByRef<uint64_t> value);

  /// @brief Method ParseDecimal, addr 0x5aa5acc, size 0x128, virtual false, abstract: false, final false
  static inline ::System::Decimal ParseDecimal(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseDouble, addr 0x5aa5f00, size 0x49c, virtual false, abstract: false, final false
  static inline double_t ParseDouble(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseFormatSpecifier, addr 0x5a9b738, size 0x14c, virtual false, abstract: false, final false
  static inline char16_t ParseFormatSpecifier(::System::ReadOnlySpan_1<char16_t> format, ::ByRef<int32_t> digits);

  /// @brief Method ParseInt32, addr 0x5a95780, size 0x1f4, virtual false, abstract: false, final false
  static inline int32_t ParseInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseInt64, addr 0x5a97e7c, size 0x1f4, virtual false, abstract: false, final false
  static inline int64_t ParseInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseNumber, addr 0x5aa4e58, size 0x738, virtual false, abstract: false, final false
  static inline bool ParseNumber(::ByRef<char16_t*> str, char16_t* strEnd, ::System::Globalization::NumberStyles styles, ::ByRef<::System::Number_NumberBuffer> number,
                                 ::System::Globalization::NumberFormatInfo* info, bool parseDecimal);

  /// @brief Method ParseSingle, addr 0x5aa6428, size 0x4b0, virtual false, abstract: false, final false
  static inline float_t ParseSingle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseUInt32, addr 0x5aa3d60, size 0x1e0, virtual false, abstract: false, final false
  static inline uint32_t ParseUInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseUInt64, addr 0x5aa45d0, size 0x1e0, virtual false, abstract: false, final false
  static inline uint64_t ParseUInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method RoundNumber, addr 0x5aa0e78, size 0xec, virtual false, abstract: false, final false
  static inline void RoundNumber(::ByRef<::System::Number_NumberBuffer> number, int32_t pos);

  /// @brief Method StringToNumber, addr 0x5aa3270, size 0x12c, virtual false, abstract: false, final false
  static inline void StringToNumber(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::ByRef<::System::Number_NumberBuffer> number,
                                    ::System::Globalization::NumberFormatInfo* info, bool parseDecimal);

  /// @brief Method ThrowOverflowOrFormatException, addr 0x5aa2e9c, size 0x90, virtual false, abstract: false, final false
  static inline void ThrowOverflowOrFormatException(bool overflow, ::StringW overflowResourceKey);

  /// @brief Method TrailingZeros, addr 0x5aa5738, size 0xa4, virtual false, abstract: false, final false
  static inline bool TrailingZeros(::System::ReadOnlySpan_1<char16_t> value, int32_t index);

  /// @brief Method TryCopyTo, addr 0x5a9d980, size 0xe8, virtual false, abstract: false, final false
  static inline bool TryCopyTo(::StringW source, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatDecimal, addr 0x5a9d1dc, size 0x1b8, virtual false, abstract: false, final false
  static inline bool TryFormatDecimal(::System::Decimal value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination,
                                      ::ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatDouble, addr 0x5a9d820, size 0x160, virtual false, abstract: false, final false
  static inline bool TryFormatDouble(double_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination,
                                     ::ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatInt32, addr 0x5a95080, size 0x454, virtual false, abstract: false, final false
  static inline bool TryFormatInt32(int32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination,
                                    ::ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatInt64, addr 0x5a97a60, size 0x36c, virtual false, abstract: false, final false
  static inline bool TryFormatInt64(int64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination,
                                    ::ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatSingle, addr 0x5a9e804, size 0x160, virtual false, abstract: false, final false
  static inline bool TryFormatSingle(float_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination,
                                     ::ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatUInt32, addr 0x5a94cd0, size 0x3b0, virtual false, abstract: false, final false
  static inline bool TryFormatUInt32(uint32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination,
                                     ::ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatUInt64, addr 0x5aa0904, size 0x2e8, virtual false, abstract: false, final false
  static inline bool TryFormatUInt64(uint64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination,
                                     ::ByRef<int32_t> charsWritten);

  /// @brief Method TryInt32ToHexStr, addr 0x5a9f1b0, size 0x180, virtual false, abstract: false, final false
  static inline bool TryInt32ToHexStr(int32_t value, char16_t hexBase, int32_t digits, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method TryInt64ToHexStr, addr 0x5aa0270, size 0x250, virtual false, abstract: false, final false
  static inline bool TryInt64ToHexStr(int64_t value, char16_t hexBase, int32_t digits, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method TryNegativeInt32ToDecStr, addr 0x5a9efc4, size 0x1ec, virtual false, abstract: false, final false
  static inline bool TryNegativeInt32ToDecStr(int32_t value, int32_t digits, ::StringW sNegative, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method TryNegativeInt64ToDecStr, addr 0x5a9ff44, size 0x32c, virtual false, abstract: false, final false
  static inline bool TryNegativeInt64ToDecStr(int64_t input, int32_t digits, ::StringW sNegative, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method TryParseDecimal, addr 0x5aa68d8, size 0x108, virtual false, abstract: false, final false
  static inline bool TryParseDecimal(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                     ::ByRef<::System::Decimal> result);

  /// @brief Method TryParseDouble, addr 0x5aa69e0, size 0x108, virtual false, abstract: false, final false
  static inline bool TryParseDouble(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ::ByRef<double_t> result);

  /// @brief Method TryParseInt32, addr 0x5a95b6c, size 0x178, virtual false, abstract: false, final false
  static inline bool TryParseInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ::ByRef<int32_t> result);

  /// @brief Method TryParseInt32IntegerStyle, addr 0x5aa2828, size 0x674, virtual false, abstract: false, final false
  static inline bool TryParseInt32IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                               ::ByRef<int32_t> result, ::ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseInt64, addr 0x5a982cc, size 0x178, virtual false, abstract: false, final false
  static inline bool TryParseInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ::ByRef<int64_t> result);

  /// @brief Method TryParseInt64IntegerStyle, addr 0x5aa339c, size 0x680, virtual false, abstract: false, final false
  static inline bool TryParseInt64IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                               ::ByRef<int64_t> result, ::ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseSingle, addr 0x5aa6ae8, size 0x138, virtual false, abstract: false, final false
  static inline bool TryParseSingle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ::ByRef<float_t> result);

  /// @brief Method TryParseUInt32, addr 0x5aa57dc, size 0x178, virtual false, abstract: false, final false
  static inline bool TryParseUInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ::ByRef<uint32_t> result);

  /// @brief Method TryParseUInt32HexNumberStyle, addr 0x5aa2f2c, size 0x344, virtual false, abstract: false, final false
  static inline bool TryParseUInt32HexNumberStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                  ::ByRef<uint32_t> result, ::ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseUInt32IntegerStyle, addr 0x5aa3f40, size 0x690, virtual false, abstract: false, final false
  static inline bool TryParseUInt32IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                ::ByRef<uint32_t> result, ::ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseUInt64, addr 0x5aa5954, size 0x178, virtual false, abstract: false, final false
  static inline bool TryParseUInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ::ByRef<uint64_t> result);

  /// @brief Method TryParseUInt64HexNumberStyle, addr 0x5aa3a1c, size 0x344, virtual false, abstract: false, final false
  static inline bool TryParseUInt64HexNumberStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                  ::ByRef<uint64_t> result, ::ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseUInt64IntegerStyle, addr 0x5aa47b0, size 0x6a8, virtual false, abstract: false, final false
  static inline bool TryParseUInt64IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                ::ByRef<uint64_t> result, ::ByRef<bool> failureIsOverflow);

  /// @brief Method TryStringToNumber, addr 0x5aa561c, size 0x11c, virtual false, abstract: false, final false
  static inline bool TryStringToNumber(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::ByRef<::System::Number_NumberBuffer> number,
                                       ::System::Globalization::NumberFormatInfo* info, bool parseDecimal);

  /// @brief Method TryUInt32ToDecStr, addr 0x5a9edf0, size 0x1d4, virtual false, abstract: false, final false
  static inline bool TryUInt32ToDecStr(uint32_t value, int32_t digits, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method TryUInt64ToDecStr, addr 0x5a9fc78, size 0x2cc, virtual false, abstract: false, final false
  static inline bool TryUInt64ToDecStr(uint64_t value, int32_t digits, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method UInt32ToDecChars, addr 0x5a9d394, size 0x54, virtual false, abstract: false, final false
  static inline char16_t* UInt32ToDecChars(char16_t* bufferEnd, uint32_t value, int32_t digits);

  /// @brief Method UInt32ToDecStr, addr 0x5a9e964, size 0x198, virtual false, abstract: false, final false
  static inline ::StringW UInt32ToDecStr(uint32_t value, int32_t digits);

  /// @brief Method UInt32ToNumber, addr 0x5aa0d40, size 0xf4, virtual false, abstract: false, final false
  static inline void UInt32ToNumber(uint32_t value, ::ByRef<::System::Number_NumberBuffer> number);

  /// @brief Method UInt64ToDecStr, addr 0x5a9f330, size 0x298, virtual false, abstract: false, final false
  static inline ::StringW UInt64ToDecStr(uint64_t value, int32_t digits);

  /// @brief Method UInt64ToNumber, addr 0x5aa0764, size 0x1a0, virtual false, abstract: false, final false
  static inline void UInt64ToNumber(uint64_t value, ::ByRef<::System::Number_NumberBuffer> number);

  /// @brief Method abs, addr 0x5aa6cf8, size 0xc, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2456 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Number, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Number);
DEFINE_IL2CPP_ARG_TYPE(::System::Number*, "System", "Number");
DEFINE_IL2CPP_ARG_TYPE(::System::NumberBuffer_Number_DigitsAndNullTerminator, "System", "Number/NumberBuffer/DigitsAndNullTerminator");
DEFINE_IL2CPP_ARG_TYPE(::System::Number_NumberBuffer, "System", "Number/NumberBuffer");
