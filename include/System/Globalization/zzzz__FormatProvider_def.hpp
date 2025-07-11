#pragma once
// IWYU pragma private; include "System/Globalization/FormatProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FormatProvider)
namespace System::Globalization {
class FormatProvider_Number;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System::Globalization {
struct Number_FormatProvider_NumberBuffer;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Text {
struct ValueStringBuilder;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Globalization {
class FormatProvider;
}
namespace System::Globalization {
class FormatProvider_Number;
}
namespace System::Globalization {
struct Number_FormatProvider_NumberBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::FormatProvider);
MARK_REF_PTR_T(::System::Globalization::FormatProvider_Number);
MARK_VAL_T(::System::Globalization::Number_FormatProvider_NumberBuffer);
// Dependencies
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.FormatProvider/Number/NumberBuffer
struct CORDL_TYPE Number_FormatProvider_NumberBuffer {
public:
  // Declarations
  __declspec(property(get = get_digits)) ::cordl_internals::Ptr<char16_t> digits;

  /// @brief Method get_digits, addr 0x4234fdc, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<char16_t> get_digits();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Number_FormatProvider_NumberBuffer();

  // Ctor Parameters [CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sign",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "overrideDigits", ty: "::cordl_internals::Ptr<char16_t>", modifiers: "", def_value: None }]
  constexpr Number_FormatProvider_NumberBuffer(int32_t precision, int32_t scale, bool sign, ::cordl_internals::Ptr<char16_t> overrideDigits) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17950 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field precision, offset: 0x0, size: 0x4, def value: None
  int32_t precision;

  /// @brief Field scale, offset: 0x4, size: 0x4, def value: None
  int32_t scale;

  /// @brief Field sign, offset: 0x8, size: 0x1, def value: None
  bool sign;

  /// @brief Field overrideDigits, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<char16_t> overrideDigits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::Number_FormatProvider_NumberBuffer, precision) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::Number_FormatProvider_NumberBuffer, scale) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::Number_FormatProvider_NumberBuffer, sign) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::Number_FormatProvider_NumberBuffer, overrideDigits) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::Number_FormatProvider_NumberBuffer, 0x18>, "Size mismatch!");

} // namespace System::Globalization
// Dependencies System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.FormatProvider/Number
class CORDL_TYPE FormatProvider_Number : public ::System::Object {
public:
  // Declarations
  using NumberBuffer = ::System::Globalization::Number_FormatProvider_NumberBuffer;

  /// @brief Field s_negCurrencyFormats, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_negCurrencyFormats, put = setStaticF_s_negCurrencyFormats)) ::ArrayW<::StringW, ::Array<::StringW>*> s_negCurrencyFormats;

  /// @brief Field s_negNumberFormats, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_negNumberFormats, put = setStaticF_s_negNumberFormats)) ::ArrayW<::StringW, ::Array<::StringW>*> s_negNumberFormats;

  /// @brief Field s_negPercentFormats, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_negPercentFormats, put = setStaticF_s_negPercentFormats)) ::ArrayW<::StringW, ::Array<::StringW>*> s_negPercentFormats;

  /// @brief Field s_posCurrencyFormats, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_posCurrencyFormats, put = setStaticF_s_posCurrencyFormats)) ::ArrayW<::StringW, ::Array<::StringW>*> s_posCurrencyFormats;

  /// @brief Field s_posNumberFormat, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_posNumberFormat, put = setStaticF_s_posNumberFormat)) ::StringW s_posNumberFormat;

  /// @brief Field s_posPercentFormats, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_posPercentFormats, put = setStaticF_s_posPercentFormats)) ::ArrayW<::StringW, ::Array<::StringW>*> s_posPercentFormats;

  /// @brief Method FindSection, addr 0x42347d0, size 0x14c, virtual false, abstract: false, final false
  static inline int32_t FindSection(::System::ReadOnlySpan_1<char16_t> format, int32_t section);

  /// @brief Method FormatCurrency, addr 0x42330e0, size 0x260, virtual false, abstract: false, final false
  static inline void FormatCurrency(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                    ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatExponent, addr 0x42344e0, size 0x2f0, virtual false, abstract: false, final false
  static inline void FormatExponent(::ByRef<::System::Text::ValueStringBuilder> sb, ::System::Globalization::NumberFormatInfo* info, int32_t value, char16_t expChar, int32_t minDigits,
                                    bool positiveSign);

  /// @brief Method FormatFixed, addr 0x4233340, size 0x50c, virtual false, abstract: false, final false
  static inline void FormatFixed(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                 ::System::Globalization::NumberFormatInfo* info, ::ArrayW<int32_t, ::Array<int32_t>*> groupDigits, ::StringW sDecimal, ::StringW sGroup);

  /// @brief Method FormatGeneral, addr 0x4233cd0, size 0x388, virtual false, abstract: false, final false
  static inline void FormatGeneral(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                   ::System::Globalization::NumberFormatInfo* info, char16_t expChar, bool bSuppressScientific);

  /// @brief Method FormatNumber, addr 0x423384c, size 0x248, virtual false, abstract: false, final false
  static inline void FormatNumber(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                  ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatPercent, addr 0x4234058, size 0x260, virtual false, abstract: false, final false
  static inline void FormatPercent(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                   ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatScientific, addr 0x4233a94, size 0x23c, virtual false, abstract: false, final false
  static inline void FormatScientific(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number, int32_t nMinDigits,
                                      int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo* info, char16_t expChar);

  /// @brief Method Int32ToDecChars, addr 0x4232fb4, size 0x5c, virtual false, abstract: false, final false
  static inline void Int32ToDecChars(::cordl_internals::Ptr<char16_t> buffer, ::ByRef<int32_t> index, uint32_t value, int32_t digits);

  /// @brief Method IsWhite, addr 0x42326d8, size 0x28, virtual false, abstract: false, final false
  static inline bool IsWhite(char16_t ch);

  /// @brief Method MatchChars, addr 0x4232700, size 0xc4, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> MatchChars(::cordl_internals::Ptr<char16_t> p, ::cordl_internals::Ptr<char16_t> pEnd, ::StringW str);

  /// @brief Method MatchChars, addr 0x42327c4, size 0x5c, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> MatchChars(::cordl_internals::Ptr<char16_t> p, ::cordl_internals::Ptr<char16_t> pEnd, ::cordl_internals::Ptr<char16_t> str);

  /// @brief Method NumberToString, addr 0x4230fb0, size 0x558, virtual false, abstract: false, final false
  static inline void NumberToString(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number, char16_t format, int32_t nMaxDigits,
                                    ::System::Globalization::NumberFormatInfo* info, bool isDecimal);

  /// @brief Method NumberToStringFormat, addr 0x4231508, size 0x1098, virtual false, abstract: false, final false
  static inline void NumberToStringFormat(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number,
                                          ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseFormatSpecifier, addr 0x4230e6c, size 0x144, virtual false, abstract: false, final false
  static inline char16_t ParseFormatSpecifier(::System::ReadOnlySpan_1<char16_t> format, ::ByRef<int32_t> digits);

  /// @brief Method ParseNumber, addr 0x4232820, size 0x704, virtual false, abstract: false, final false
  static inline bool ParseNumber(::ByRef<::cordl_internals::Ptr<char16_t>> str, ::cordl_internals::Ptr<char16_t> strEnd, ::System::Globalization::NumberStyles options,
                                 ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number, ::System::Text::StringBuilder* sb, ::System::Globalization::NumberFormatInfo* numfmt,
                                 bool parseDecimal);

  /// @brief Method RoundNumber, addr 0x4233010, size 0xd0, virtual false, abstract: false, final false
  static inline void RoundNumber(::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number, int32_t pos);

  /// @brief Method TrailingZeros, addr 0x4232f24, size 0x90, virtual false, abstract: false, final false
  static inline bool TrailingZeros(::System::ReadOnlySpan_1<char16_t> s, int32_t index);

  /// @brief Method TryStringToNumber, addr 0x42325a0, size 0x138, virtual false, abstract: false, final false
  static inline bool TryStringToNumber(::System::ReadOnlySpan_1<char16_t> str, ::System::Globalization::NumberStyles options,
                                       ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number, ::System::Text::StringBuilder* sb,
                                       ::System::Globalization::NumberFormatInfo* numfmt, bool parseDecimal);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_negCurrencyFormats();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_negNumberFormats();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_negPercentFormats();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_posCurrencyFormats();

  static inline ::StringW getStaticF_s_posNumberFormat();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_posPercentFormats();

  static inline void setStaticF_s_negCurrencyFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_s_negNumberFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_s_negPercentFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_s_posCurrencyFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_s_posNumberFormat(::StringW value);

  static inline void setStaticF_s_posPercentFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method wcslen, addr 0x42342b8, size 0x20, virtual false, abstract: false, final false
  static inline int32_t wcslen(::cordl_internals::Ptr<char16_t> s);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormatProvider_Number();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FormatProvider_Number", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormatProvider_Number(FormatProvider_Number&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormatProvider_Number", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormatProvider_Number(FormatProvider_Number const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17951 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::FormatProvider_Number, 0x10>, "Size mismatch!");

} // namespace System::Globalization
// Dependencies System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.FormatProvider
class CORDL_TYPE FormatProvider : public ::System::Object {
public:
  // Declarations
  using Number = ::System::Globalization::FormatProvider_Number;

  /// @brief Method FormatBigInteger, addr 0x4230d08, size 0x138, virtual false, abstract: false, final false
  static inline void FormatBigInteger(::ByRef<::System::Text::ValueStringBuilder> sb, int32_t precision, int32_t scale, bool sign, ::System::ReadOnlySpan_1<char16_t> format,
                                      ::System::Globalization::NumberFormatInfo* numberFormatInfo, ::ArrayW<char16_t, ::Array<char16_t>*> digits, int32_t startIndex);

  /// @brief Method TryStringToBigInteger, addr 0x422f368, size 0xf4, virtual false, abstract: false, final false
  static inline bool TryStringToBigInteger(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* numberFormatInfo,
                                           ::System::Text::StringBuilder* receiver, ::ByRef<int32_t> precision, ::ByRef<int32_t> scale, ::ByRef<bool> sign);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormatProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FormatProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormatProvider(FormatProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormatProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormatProvider(FormatProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17952 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::FormatProvider, 0x10>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::FormatProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::FormatProvider*, "System.Globalization", "FormatProvider");
NEED_NO_BOX(::System::Globalization::FormatProvider_Number);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::FormatProvider_Number*, "System.Globalization", "FormatProvider/Number");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::Number_FormatProvider_NumberBuffer, "System.Globalization", "FormatProvider/Number/NumberBuffer");
