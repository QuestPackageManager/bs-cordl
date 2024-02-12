#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Number_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Number)
namespace GlobalNamespace {
struct __Number__NumberBuffer__DigitsAndNullTerminator;
}
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
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
struct __Number__NumberBuffer;
}
// Forward declare root types
namespace System {
class Number;
}
namespace GlobalNamespace {
struct __Number__NumberBuffer__DigitsAndNullTerminator;
}
namespace System {
struct __Number__NumberBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Number);
MARK_VAL_T(::GlobalNamespace::__Number__NumberBuffer__DigitsAndNullTerminator);
MARK_VAL_T(::System::__Number__NumberBuffer);
// Type: ::DigitsAndNullTerminator
// SizeInfo { instance_size: 102, native_size: 102, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2450))
// CS Name: ::Number::NumberBuffer::DigitsAndNullTerminator
#pragma pack(push, 0)
struct CORDL_TYPE __Number__NumberBuffer__DigitsAndNullTerminator {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Number__NumberBuffer__DigitsAndNullTerminator();

  /// @brief Size padding 0x66 - 0x0 = 0x66, packed as 0x66
  uint8_t _cordl_size_padding[0x66];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x66 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Number__NumberBuffer__DigitsAndNullTerminator, 0x66>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NumberBuffer
// SizeInfo { instance_size: 122, native_size: 122, calculated_instance_size: 122, calculated_native_size: 138, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: Some(1)
// }
namespace System {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2450))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2451))
// CS Name: ::Number::NumberBuffer
#pragma pack(push, 1)
struct CORDL_TYPE __Number__NumberBuffer {
public:
  // Declarations
  using DigitsAndNullTerminator = ::GlobalNamespace::__Number__NumberBuffer__DigitsAndNullTerminator;

  __declspec(property(get = get_sign, put = set_sign)) bool sign;

  __declspec(property(get = get_digits))::cordl_internals::Ptr<char16_t> digits;

  /// @brief Method get_sign, addr 0x25df944, size 0x10, virtual false, abstract: false, final false
  inline bool get_sign();

  /// @brief Method set_sign, addr 0x25df954, size 0xc, virtual false, abstract: false, final false
  inline void set_sign(bool value);

  /// @brief Method get_digits, addr 0x25df960, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<char16_t> get_digits();

  // Ctor Parameters [CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_sign", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_digits", ty: "::GlobalNamespace::__Number__NumberBuffer__DigitsAndNullTerminator", modifiers: "", def_value: None },
  // CppParam { name: "_allDigits", ty: "::cordl_internals::Ptr<char16_t>", modifiers: "", def_value: None }]
  constexpr __Number__NumberBuffer(int32_t precision, int32_t scale, int32_t _sign, ::GlobalNamespace::__Number__NumberBuffer__DigitsAndNullTerminator _digits,
                                   ::cordl_internals::Ptr<char16_t> _allDigits) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Number__NumberBuffer();

  /// @brief Field precision, offset: 0x0, size: 0x4, def value: None
  int32_t precision;

  /// @brief Field scale, offset: 0x4, size: 0x4, def value: None
  int32_t scale;

  /// @brief Field _sign, offset: 0x8, size: 0x4, def value: None
  int32_t _sign;

  /// @brief Field _digits, offset: 0xc, size: 0x66, def value: None
  ::GlobalNamespace::__Number__NumberBuffer__DigitsAndNullTerminator _digits;

  /// @brief Field _allDigits, offset: 0x72, size: 0x8, def value: None
  ::cordl_internals::Ptr<char16_t> _allDigits;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x7a };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Number__NumberBuffer, 0x7a>, "Size mismatch!");

static_assert(offsetof(::System::__Number__NumberBuffer, precision) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::__Number__NumberBuffer, scale) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::__Number__NumberBuffer, _sign) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::__Number__NumberBuffer, _digits) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::__Number__NumberBuffer, _allDigits) == 0x72, "Offset mismatch!");

} // namespace System
// Type: System::Number
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2452))
// CS Name: ::System::Number*
class CORDL_TYPE Number : public ::System::Object {
public:
  // Declarations
  using NumberBuffer = ::System::__Number__NumberBuffer;

  /// @brief Field s_posCurrencyFormats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_posCurrencyFormats, put = setStaticF_s_posCurrencyFormats))::ArrayW<::StringW, ::Array<::StringW>*> s_posCurrencyFormats;

  /// @brief Field s_negCurrencyFormats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_negCurrencyFormats, put = setStaticF_s_negCurrencyFormats))::ArrayW<::StringW, ::Array<::StringW>*> s_negCurrencyFormats;

  /// @brief Field s_posPercentFormats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_posPercentFormats, put = setStaticF_s_posPercentFormats))::ArrayW<::StringW, ::Array<::StringW>*> s_posPercentFormats;

  /// @brief Field s_negPercentFormats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_negPercentFormats, put = setStaticF_s_negPercentFormats))::ArrayW<::StringW, ::Array<::StringW>*> s_negPercentFormats;

  /// @brief Field s_negNumberFormats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_negNumberFormats, put = setStaticF_s_negNumberFormats))::ArrayW<::StringW, ::Array<::StringW>*> s_negNumberFormats;

  /// @brief Field s_charToHexLookup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_charToHexLookup, put = setStaticF_s_charToHexLookup))::ArrayW<int32_t, ::Array<int32_t>*> s_charToHexLookup;

  /// @brief Field s_rgval64Power10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_rgval64Power10, put = setStaticF_s_rgval64Power10))::ArrayW<uint64_t, ::Array<uint64_t>*> s_rgval64Power10;

  /// @brief Field s_rgexp64Power10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_rgexp64Power10, put = setStaticF_s_rgexp64Power10))::ArrayW<int8_t, ::Array<int8_t>*> s_rgexp64Power10;

  /// @brief Field s_rgval64Power10By16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_rgval64Power10By16, put = setStaticF_s_rgval64Power10By16))::ArrayW<uint64_t, ::Array<uint64_t>*> s_rgval64Power10By16;

  /// @brief Field s_rgexp64Power10By16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_rgexp64Power10By16, put = setStaticF_s_rgexp64Power10By16))::ArrayW<int16_t, ::Array<int16_t>*> s_rgexp64Power10By16;

  static inline void setStaticF_s_posCurrencyFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_posCurrencyFormats();

  static inline void setStaticF_s_negCurrencyFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_negCurrencyFormats();

  static inline void setStaticF_s_posPercentFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_posPercentFormats();

  static inline void setStaticF_s_negPercentFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_negPercentFormats();

  static inline void setStaticF_s_negNumberFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_negNumberFormats();

  static inline void setStaticF_s_charToHexLookup(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_charToHexLookup();

  static inline void setStaticF_s_rgval64Power10(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> getStaticF_s_rgval64Power10();

  static inline void setStaticF_s_rgexp64Power10(::ArrayW<int8_t, ::Array<int8_t>*> value);

  static inline ::ArrayW<int8_t, ::Array<int8_t>*> getStaticF_s_rgexp64Power10();

  static inline void setStaticF_s_rgval64Power10By16(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> getStaticF_s_rgval64Power10By16();

  static inline void setStaticF_s_rgexp64Power10By16(::ArrayW<int16_t, ::Array<int16_t>*> value);

  static inline ::ArrayW<int16_t, ::Array<int16_t>*> getStaticF_s_rgexp64Power10By16();

  /// @brief Method FormatDecimal, addr 0x25d306c, size 0x1e0, virtual false, abstract: false, final false
  static inline ::StringW FormatDecimal(::System::Decimal value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method TryFormatDecimal, addr 0x25d4c3c, size 0x20c, virtual false, abstract: false, final false
  static inline bool TryFormatDecimal(::System::Decimal value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination,
                                      ByRef<int32_t> charsWritten);

  /// @brief Method DecimalToNumber, addr 0x25d338c, size 0x218, virtual false, abstract: false, final false
  static inline void DecimalToNumber(::System::Decimal value, ByRef<::System::__Number__NumberBuffer> number);

  /// @brief Method FormatDouble, addr 0x25d4e94, size 0x160, virtual false, abstract: false, final false
  static inline ::StringW FormatDouble(double_t value, ::StringW format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method TryFormatDouble, addr 0x25d52d8, size 0x17c, virtual false, abstract: false, final false
  static inline bool TryFormatDouble(double_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination,
                                     ByRef<int32_t> charsWritten);

  /// @brief Method FormatDouble, addr 0x25d4ff4, size 0x2e4, virtual false, abstract: false, final false
  static inline ::StringW FormatDouble(ByRef<::System::Text::ValueStringBuilder> sb, double_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatSingle, addr 0x25d5e94, size 0x160, virtual false, abstract: false, final false
  static inline ::StringW FormatSingle(float_t value, ::StringW format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method TryFormatSingle, addr 0x25d62e4, size 0x17c, virtual false, abstract: false, final false
  static inline bool TryFormatSingle(float_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination,
                                     ByRef<int32_t> charsWritten);

  /// @brief Method FormatSingle, addr 0x25d5ff4, size 0x2f0, virtual false, abstract: false, final false
  static inline ::StringW FormatSingle(ByRef<::System::Text::ValueStringBuilder> sb, float_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method TryCopyTo, addr 0x25d5454, size 0xdc, virtual false, abstract: false, final false
  static inline bool TryCopyTo(::StringW source, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method FormatInt32, addr 0x25cc0a8, size 0x3c0, virtual false, abstract: false, final false
  static inline ::StringW FormatInt32(int32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method TryFormatInt32, addr 0x25cced0, size 0x420, virtual false, abstract: false, final false
  static inline bool TryFormatInt32(int32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method FormatUInt32, addr 0x25cc674, size 0x370, virtual false, abstract: false, final false
  static inline ::StringW FormatUInt32(uint32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method TryFormatUInt32, addr 0x25ccaf8, size 0x3d8, virtual false, abstract: false, final false
  static inline bool TryFormatUInt32(uint32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination,
                                     ByRef<int32_t> charsWritten);

  /// @brief Method FormatInt64, addr 0x25cf370, size 0x2c8, virtual false, abstract: false, final false
  static inline ::StringW FormatInt64(int64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method TryFormatInt64, addr 0x25cf8d4, size 0x334, virtual false, abstract: false, final false
  static inline bool TryFormatInt64(int64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method FormatUInt64, addr 0x25d7dcc, size 0x290, virtual false, abstract: false, final false
  static inline ::StringW FormatUInt64(uint64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method TryFormatUInt64, addr 0x25d81f0, size 0x2dc, virtual false, abstract: false, final false
  static inline bool TryFormatUInt64(uint64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination,
                                     ByRef<int32_t> charsWritten);

  /// @brief Method Int32ToNumber, addr 0x25d84cc, size 0x12c, virtual false, abstract: false, final false
  static inline void Int32ToNumber(int32_t value, ByRef<::System::__Number__NumberBuffer> number);

  /// @brief Method NegativeInt32ToDecStr, addr 0x25d65f0, size 0x1ac, virtual false, abstract: false, final false
  static inline ::StringW NegativeInt32ToDecStr(int32_t value, int32_t digits, ::StringW sNegative);

  /// @brief Method TryNegativeInt32ToDecStr, addr 0x25d6a98, size 0x1e8, virtual false, abstract: false, final false
  static inline bool TryNegativeInt32ToDecStr(int32_t value, int32_t digits, ::StringW sNegative, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method Int32ToHexStr, addr 0x25d679c, size 0x138, virtual false, abstract: false, final false
  static inline ::StringW Int32ToHexStr(int32_t value, char16_t hexBase, int32_t digits);

  /// @brief Method TryInt32ToHexStr, addr 0x25d6c80, size 0x174, virtual false, abstract: false, final false
  static inline bool TryInt32ToHexStr(int32_t value, char16_t hexBase, int32_t digits, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method Int32ToHexChars, addr 0x25d85f8, size 0x40, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> Int32ToHexChars(::cordl_internals::Ptr<char16_t> buffer, uint32_t value, int32_t hexBase, int32_t digits);

  /// @brief Method UInt32ToNumber, addr 0x25d8638, size 0x118, virtual false, abstract: false, final false
  static inline void UInt32ToNumber(uint32_t value, ByRef<::System::__Number__NumberBuffer> number);

  /// @brief Method UInt32ToDecChars, addr 0x25d4e48, size 0x4c, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> UInt32ToDecChars(::cordl_internals::Ptr<char16_t> bufferEnd, uint32_t value, int32_t digits);

  /// @brief Method UInt32ToDecStr, addr 0x25d6460, size 0x190, virtual false, abstract: false, final false
  static inline ::StringW UInt32ToDecStr(uint32_t value, int32_t digits);

  /// @brief Method TryUInt32ToDecStr, addr 0x25d68d4, size 0x1c4, virtual false, abstract: false, final false
  static inline bool TryUInt32ToDecStr(uint32_t value, int32_t digits, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method Int64ToNumber, addr 0x25d74d8, size 0x1a8, virtual false, abstract: false, final false
  static inline void Int64ToNumber(int64_t input, ByRef<::System::__Number__NumberBuffer> number);

  /// @brief Method NegativeInt64ToDecStr, addr 0x25d704c, size 0x2a0, virtual false, abstract: false, final false
  static inline ::StringW NegativeInt64ToDecStr(int64_t input, int32_t digits, ::StringW sNegative);

  /// @brief Method TryNegativeInt64ToDecStr, addr 0x25d7904, size 0x2c4, virtual false, abstract: false, final false
  static inline bool TryNegativeInt64ToDecStr(int64_t input, int32_t digits, ::StringW sNegative, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method Int64ToHexStr, addr 0x25d72ec, size 0x1ec, virtual false, abstract: false, final false
  static inline ::StringW Int64ToHexStr(int64_t value, char16_t hexBase, int32_t digits);

  /// @brief Method TryInt64ToHexStr, addr 0x25d7bc8, size 0x204, virtual false, abstract: false, final false
  static inline bool TryInt64ToHexStr(int64_t value, char16_t hexBase, int32_t digits, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method UInt64ToNumber, addr 0x25d805c, size 0x194, virtual false, abstract: false, final false
  static inline void UInt64ToNumber(uint64_t value, ByRef<::System::__Number__NumberBuffer> number);

  /// @brief Method UInt64ToDecStr, addr 0x25d6df4, size 0x258, virtual false, abstract: false, final false
  static inline ::StringW UInt64ToDecStr(uint64_t value, int32_t digits);

  /// @brief Method TryUInt64ToDecStr, addr 0x25d7680, size 0x284, virtual false, abstract: false, final false
  static inline bool TryUInt64ToDecStr(uint64_t value, int32_t digits, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method ParseFormatSpecifier, addr 0x25d324c, size 0x140, virtual false, abstract: false, final false
  static inline char16_t ParseFormatSpecifier(::System::ReadOnlySpan_1<char16_t> format, ByRef<int32_t> digits);

  /// @brief Method NumberToString, addr 0x25d35a4, size 0x580, virtual false, abstract: false, final false
  static inline void NumberToString(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::System::__Number__NumberBuffer> number, char16_t format, int32_t nMaxDigits,
                                    ::System::Globalization::NumberFormatInfo* info, bool isDecimal);

  /// @brief Method NumberToStringFormat, addr 0x25d3b24, size 0x1118, virtual false, abstract: false, final false
  static inline void NumberToStringFormat(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::System::__Number__NumberBuffer> number, ::System::ReadOnlySpan_1<char16_t> format,
                                          ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatCurrency, addr 0x25d8894, size 0x268, virtual false, abstract: false, final false
  static inline void FormatCurrency(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::System::__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                    ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatFixed, addr 0x25d8afc, size 0x540, virtual false, abstract: false, final false
  static inline void FormatFixed(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::System::__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                 ::System::Globalization::NumberFormatInfo* info, ::ArrayW<int32_t, ::Array<int32_t>*> groupDigits, ::StringW sDecimal, ::StringW sGroup);

  /// @brief Method FormatNumber, addr 0x25d903c, size 0x254, virtual false, abstract: false, final false
  static inline void FormatNumber(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::System::__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                  ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatScientific, addr 0x25d9290, size 0x258, virtual false, abstract: false, final false
  static inline void FormatScientific(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::System::__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                      ::System::Globalization::NumberFormatInfo* info, char16_t expChar);

  /// @brief Method FormatExponent, addr 0x25d9c3c, size 0x2a8, virtual false, abstract: false, final false
  static inline void FormatExponent(ByRef<::System::Text::ValueStringBuilder> sb, ::System::Globalization::NumberFormatInfo* info, int32_t value, char16_t expChar, int32_t minDigits,
                                    bool positiveSign);

  /// @brief Method FormatGeneral, addr 0x25d94e8, size 0x3b8, virtual false, abstract: false, final false
  static inline void FormatGeneral(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::System::__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                   ::System::Globalization::NumberFormatInfo* info, char16_t expChar, bool bSuppressScientific);

  /// @brief Method FormatPercent, addr 0x25d98a0, size 0x268, virtual false, abstract: false, final false
  static inline void FormatPercent(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::System::__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                   ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method RoundNumber, addr 0x25d8794, size 0x100, virtual false, abstract: false, final false
  static inline void RoundNumber(ByRef<::System::__Number__NumberBuffer> number, int32_t pos);

  /// @brief Method FindSection, addr 0x25d9b08, size 0x134, virtual false, abstract: false, final false
  static inline int32_t FindSection(::System::ReadOnlySpan_1<char16_t> format, int32_t section);

  /// @brief Method Low32, addr 0x25d8790, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t Low32(uint64_t value);

  /// @brief Method High32, addr 0x25d8788, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t High32(uint64_t value);

  /// @brief Method Int64DivMod1E9, addr 0x25d8750, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t Int64DivMod1E9(ByRef<uint64_t> value);

  /// @brief Method NumberToInt32, addr 0x25d9ee4, size 0xbc, virtual false, abstract: false, final false
  static inline bool NumberToInt32(ByRef<::System::__Number__NumberBuffer> number, ByRef<int32_t> value);

  /// @brief Method NumberToInt64, addr 0x25d9fa0, size 0xb4, virtual false, abstract: false, final false
  static inline bool NumberToInt64(ByRef<::System::__Number__NumberBuffer> number, ByRef<int64_t> value);

  /// @brief Method NumberToUInt32, addr 0x25da054, size 0xb0, virtual false, abstract: false, final false
  static inline bool NumberToUInt32(ByRef<::System::__Number__NumberBuffer> number, ByRef<uint32_t> value);

  /// @brief Method NumberToUInt64, addr 0x25da104, size 0xb0, virtual false, abstract: false, final false
  static inline bool NumberToUInt64(ByRef<::System::__Number__NumberBuffer> number, ByRef<uint64_t> value);

  /// @brief Method ParseInt32, addr 0x25cd5c4, size 0x1d8, virtual false, abstract: false, final false
  static inline int32_t ParseInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseInt64, addr 0x25cfcc8, size 0x1dc, virtual false, abstract: false, final false
  static inline int64_t ParseInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseUInt32, addr 0x25db964, size 0x1b8, virtual false, abstract: false, final false
  static inline uint32_t ParseUInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseUInt64, addr 0x25dc2bc, size 0x1b8, virtual false, abstract: false, final false
  static inline uint64_t ParseUInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseNumber, addr 0x25dcc20, size 0x708, virtual false, abstract: false, final false
  static inline bool ParseNumber(ByRef<::cordl_internals::Ptr<char16_t>> str, ::cordl_internals::Ptr<char16_t> strEnd, ::System::Globalization::NumberStyles styles,
                                 ByRef<::System::__Number__NumberBuffer> number, ::System::Globalization::NumberFormatInfo* info, bool parseDecimal);

  /// @brief Method TryParseInt32, addr 0x25cd908, size 0x18c, virtual false, abstract: false, final false
  static inline bool TryParseInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ByRef<int32_t> result);

  /// @brief Method TryParseInt32IntegerStyle, addr 0x25da1b4, size 0x7a8, virtual false, abstract: false, final false
  static inline bool TryParseInt32IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                               ByRef<int32_t> result, ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseInt64IntegerStyle, addr 0x25dae6c, size 0x7b4, virtual false, abstract: false, final false
  static inline bool TryParseInt64IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                               ByRef<int64_t> result, ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseInt64, addr 0x25d0124, size 0x18c, virtual false, abstract: false, final false
  static inline bool TryParseInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ByRef<int64_t> result);

  /// @brief Method TryParseUInt32, addr 0x25dd584, size 0x18c, virtual false, abstract: false, final false
  static inline bool TryParseUInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ByRef<uint32_t> result);

  /// @brief Method TryParseUInt32IntegerStyle, addr 0x25dbb1c, size 0x7a0, virtual false, abstract: false, final false
  static inline bool TryParseUInt32IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                ByRef<uint32_t> result, ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseUInt32HexNumberStyle, addr 0x25da9f0, size 0x344, virtual false, abstract: false, final false
  static inline bool TryParseUInt32HexNumberStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                  ByRef<uint32_t> result, ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseUInt64, addr 0x25dd710, size 0x18c, virtual false, abstract: false, final false
  static inline bool TryParseUInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ByRef<uint64_t> result);

  /// @brief Method TryParseUInt64IntegerStyle, addr 0x25dc474, size 0x7ac, virtual false, abstract: false, final false
  static inline bool TryParseUInt64IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                ByRef<uint64_t> result, ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseUInt64HexNumberStyle, addr 0x25db620, size 0x344, virtual false, abstract: false, final false
  static inline bool TryParseUInt64HexNumberStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                  ByRef<uint64_t> result, ByRef<bool> failureIsOverflow);

  /// @brief Method ParseDecimal, addr 0x25dd89c, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Decimal ParseDecimal(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method NumberBufferToDecimal, addr 0x25dd9a4, size 0x2d8, virtual false, abstract: false, final false
  static inline bool NumberBufferToDecimal(ByRef<::System::__Number__NumberBuffer> number, ByRef<::System::Decimal> value);

  /// @brief Method ParseDouble, addr 0x25ddc7c, size 0x530, virtual false, abstract: false, final false
  static inline double_t ParseDouble(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseSingle, addr 0x25de27c, size 0x5a0, virtual false, abstract: false, final false
  static inline float_t ParseSingle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method TryParseDecimal, addr 0x25de81c, size 0x104, virtual false, abstract: false, final false
  static inline bool TryParseDecimal(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                     ByRef<::System::Decimal> result);

  /// @brief Method TryParseDouble, addr 0x25de920, size 0x104, virtual false, abstract: false, final false
  static inline bool TryParseDouble(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ByRef<double_t> result);

  /// @brief Method TryParseSingle, addr 0x25dea24, size 0x174, virtual false, abstract: false, final false
  static inline bool TryParseSingle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ByRef<float_t> result);

  /// @brief Method StringToNumber, addr 0x25dad34, size 0x138, virtual false, abstract: false, final false
  static inline void StringToNumber(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ByRef<::System::__Number__NumberBuffer> number,
                                    ::System::Globalization::NumberFormatInfo* info, bool parseDecimal);

  /// @brief Method TryStringToNumber, addr 0x25dd3d8, size 0x130, virtual false, abstract: false, final false
  static inline bool TryStringToNumber(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ByRef<::System::__Number__NumberBuffer> number,
                                       ::System::Globalization::NumberFormatInfo* info, bool parseDecimal);

  /// @brief Method TrailingZeros, addr 0x25dd508, size 0x7c, virtual false, abstract: false, final false
  static inline bool TrailingZeros(::System::ReadOnlySpan_1<char16_t> value, int32_t index);

  /// @brief Method MatchChars, addr 0x25dd344, size 0x84, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> MatchChars(::cordl_internals::Ptr<char16_t> p, ::cordl_internals::Ptr<char16_t> pEnd, ::StringW value);

  /// @brief Method IsWhite, addr 0x25dd328, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsWhite(int32_t ch);

  /// @brief Method IsDigit, addr 0x25dd3c8, size 0x10, virtual false, abstract: false, final false
  static inline bool IsDigit(int32_t ch);

  /// @brief Method ThrowOverflowOrFormatException, addr 0x25da95c, size 0x94, virtual false, abstract: false, final false
  static inline void ThrowOverflowOrFormatException(bool overflow, ::StringW overflowResourceKey);

  /// @brief Method NumberBufferToDouble, addr 0x25de1ac, size 0xd0, virtual false, abstract: false, final false
  static inline bool NumberBufferToDouble(ByRef<::System::__Number__NumberBuffer> number, ByRef<double_t> value);

  /// @brief Method DigitsToInt, addr 0x25deb98, size 0x34, virtual false, abstract: false, final false
  static inline uint32_t DigitsToInt(::cordl_internals::Ptr<char16_t> p, int32_t count);

  /// @brief Method Mul32x32To64, addr 0x25debcc, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t Mul32x32To64(uint32_t a, uint32_t b);

  /// @brief Method Mul64Lossy, addr 0x25debd4, size 0x98, virtual false, abstract: false, final false
  static inline uint64_t Mul64Lossy(uint64_t a, uint64_t b, ByRef<int32_t> pexp);

  /// @brief Method abs, addr 0x25dec6c, size 0xc, virtual false, abstract: false, final false
  static inline int32_t abs(int32_t value);

  /// @brief Method NumberToDouble, addr 0x25d59ac, size 0x4e8, virtual false, abstract: false, final false
  static inline double_t NumberToDouble(ByRef<::System::__Number__NumberBuffer> number);

  /// @brief Method DoubleToNumber, addr 0x25d5530, size 0x47c, virtual false, abstract: false, final false
  static inline void DoubleToNumber(double_t value, int32_t precision, ByRef<::System::__Number__NumberBuffer> number);

  // Ctor Parameters [CppParam { name: "", ty: "Number", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Number(Number&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Number", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Number(Number const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Number();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Number, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Number);
DEFINE_IL2CPP_ARG_TYPE(::System::Number*, "System", "Number");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Number__NumberBuffer__DigitsAndNullTerminator, "System", "Number/NumberBuffer/DigitsAndNullTerminator");
DEFINE_IL2CPP_ARG_TYPE(::System::__Number__NumberBuffer, "System", "Number/NumberBuffer");
