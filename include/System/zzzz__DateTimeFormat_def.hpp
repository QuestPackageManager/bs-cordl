#pragma once
// IWYU pragma private; include "System/DateTimeFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeFormat)
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct DateTime;
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
struct TimeSpan;
}
// Forward declare root types
namespace System {
class DateTimeFormat;
}
// Write type traits
MARK_REF_PTR_T(::System::DateTimeFormat);
// Dependencies System.Object, System.TimeSpan
namespace System {
// Is value type: false
// CS Name: System.DateTimeFormat
class CORDL_TYPE DateTimeFormat : public ::System::Object {
public:
  // Declarations
  /// @brief Field InvariantAbbreviatedDayNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InvariantAbbreviatedDayNames, put = setStaticF_InvariantAbbreviatedDayNames)) ::ArrayW<::StringW, ::Array<::StringW>*> InvariantAbbreviatedDayNames;

  /// @brief Field InvariantAbbreviatedMonthNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InvariantAbbreviatedMonthNames, put = setStaticF_InvariantAbbreviatedMonthNames)) ::ArrayW<::StringW, ::Array<::StringW>*> InvariantAbbreviatedMonthNames;

  /// @brief Field InvariantFormatInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InvariantFormatInfo, put = setStaticF_InvariantFormatInfo)) ::System::Globalization::DateTimeFormatInfo* InvariantFormatInfo;

  /// @brief Field NullOffset, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NullOffset, put = setStaticF_NullOffset)) ::System::TimeSpan NullOffset;

  /// @brief Field allStandardFormats, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_allStandardFormats, put = setStaticF_allStandardFormats)) ::ArrayW<char16_t, ::Array<char16_t>*> allStandardFormats;

  /// @brief Field fixedNumberFormats, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_fixedNumberFormats, put = setStaticF_fixedNumberFormats)) ::ArrayW<::StringW, ::Array<::StringW>*> fixedNumberFormats;

  /// @brief Method Append2DigitNumber, addr 0x3dd7374, size 0x5c, virtual false, abstract: false, final false
  static inline void Append2DigitNumber(::System::Text::StringBuilder* result, int32_t val);

  /// @brief Method ExpandPredefinedFormat, addr 0x3dd7674, size 0x39c, virtual false, abstract: false, final false
  static inline ::StringW ExpandPredefinedFormat(::System::ReadOnlySpan_1<char16_t> format, ::ByRef<::System::DateTime> dateTime, ::ByRef<::System::Globalization::DateTimeFormatInfo*> dtfi,
                                                 ::ByRef<::System::TimeSpan> offset);

  /// @brief Method Format, addr 0x3dce97c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW Format(::System::DateTime dateTime, ::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method Format, addr 0x3dd26bc, size 0x2b0, virtual false, abstract: false, final false
  static inline ::StringW Format(::System::DateTime dateTime, ::StringW format, ::System::IFormatProvider* provider, ::System::TimeSpan offset);

  /// @brief Method FormatCustomized, addr 0x3dd5c40, size 0x1138, virtual false, abstract: false, final false
  static inline ::System::Text::StringBuilder* FormatCustomized(::System::DateTime dateTime, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                                ::System::TimeSpan offset, ::System::Text::StringBuilder* result);

  /// @brief Method FormatCustomizedRoundripTimeZone, addr 0x3dd7124, size 0x250, virtual false, abstract: false, final false
  static inline void FormatCustomizedRoundripTimeZone(::System::DateTime dateTime, ::System::TimeSpan offset, ::System::Text::StringBuilder* result);

  /// @brief Method FormatCustomizedTimeZone, addr 0x3dd6d78, size 0x3ac, virtual false, abstract: false, final false
  static inline void FormatCustomizedTimeZone(::System::DateTime dateTime, ::System::TimeSpan offset, ::System::ReadOnlySpan_1<char16_t> format, int32_t tokenLen, bool timeOnly,
                                              ::System::Text::StringBuilder* result);

  /// @brief Method FormatDayOfWeek, addr 0x3dd57a8, size 0x34, virtual false, abstract: false, final false
  static inline ::StringW FormatDayOfWeek(int32_t dayOfWeek, int32_t repeat, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method FormatDigits, addr 0x3dd553c, size 0x70, virtual false, abstract: false, final false
  static inline void FormatDigits(::System::Text::StringBuilder* outputBuffer, int32_t value, int32_t len);

  /// @brief Method FormatDigits, addr 0x3dd55ac, size 0xf8, virtual false, abstract: false, final false
  static inline void FormatDigits(::System::Text::StringBuilder* outputBuffer, int32_t value, int32_t len, bool overrideLengthLimit);

  /// @brief Method FormatHebrewMonthName, addr 0x3dd5810, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW FormatHebrewMonthName(::System::DateTime time, int32_t month, int32_t repeatCount, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method FormatMonth, addr 0x3dd57dc, size 0x34, virtual false, abstract: false, final false
  static inline ::StringW FormatMonth(int32_t month, int32_t repeatCount, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method FormatStringBuilder, addr 0x3dd8254, size 0x330, virtual false, abstract: false, final false
  static inline ::System::Text::StringBuilder* FormatStringBuilder(::System::DateTime dateTime, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                                   ::System::TimeSpan offset);

  /// @brief Method GetRealFormat, addr 0x3dd73d0, size 0x2a4, virtual false, abstract: false, final false
  static inline ::StringW GetRealFormat(::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method HebrewFormatDigits, addr 0x3dd56a4, size 0x7c, virtual false, abstract: false, final false
  static inline void HebrewFormatDigits(::System::Text::StringBuilder* outputBuffer, int32_t digits);

  /// @brief Method InvalidFormatForLocal, addr 0x3dd7a10, size 0x4, virtual false, abstract: false, final false
  static inline void InvalidFormatForLocal(::System::ReadOnlySpan_1<char16_t> format, ::System::DateTime dateTime);

  /// @brief Method IsUseGenitiveForm, addr 0x3dd5ae8, size 0x158, virtual false, abstract: false, final false
  static inline bool IsUseGenitiveForm(::System::ReadOnlySpan_1<char16_t> format, int32_t index, int32_t tokenLen, char16_t patternToMatch);

  /// @brief Method ParseNextChar, addr 0x3dd5a78, size 0x70, virtual false, abstract: false, final false
  static inline int32_t ParseNextChar(::System::ReadOnlySpan_1<char16_t> format, int32_t pos);

  /// @brief Method ParseQuoteString, addr 0x3dd58d0, size 0x1a8, virtual false, abstract: false, final false
  static inline int32_t ParseQuoteString(::System::ReadOnlySpan_1<char16_t> format, int32_t pos, ::System::Text::StringBuilder* result);

  /// @brief Method ParseRepeatPattern, addr 0x3dd5720, size 0x88, virtual false, abstract: false, final false
  static inline int32_t ParseRepeatPattern(::System::ReadOnlySpan_1<char16_t> format, int32_t pos, char16_t patternChar);

  /// @brief Method TryFormat, addr 0x3dcebdc, size 0xb8, virtual false, abstract: false, final false
  static inline bool TryFormat(::System::DateTime dateTime, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format,
                               ::System::IFormatProvider* provider);

  /// @brief Method TryFormat, addr 0x3dd2bf8, size 0x20c, virtual false, abstract: false, final false
  static inline bool TryFormat(::System::DateTime dateTime, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format,
                               ::System::IFormatProvider* provider, ::System::TimeSpan offset);

  /// @brief Method TryFormatO, addr 0x3dd7a14, size 0x4dc, virtual false, abstract: false, final false
  static inline bool TryFormatO(::System::DateTime dateTime, ::System::TimeSpan offset, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatR, addr 0x3dd7ef0, size 0x364, virtual false, abstract: false, final false
  static inline bool TryFormatR(::System::DateTime dateTime, ::System::TimeSpan offset, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method WriteDigits, addr 0x3dd8670, size 0xac, virtual false, abstract: false, final false
  static inline void WriteDigits(uint64_t value, ::System::Span_1<char16_t> buffer);

  /// @brief Method WriteFourDecimalDigits, addr 0x3dd85d0, size 0xa0, virtual false, abstract: false, final false
  static inline void WriteFourDecimalDigits(uint32_t value, ::System::Span_1<char16_t> buffer, int32_t startingIndex);

  /// @brief Method WriteTwoDecimalDigits, addr 0x3dd8584, size 0x4c, virtual false, abstract: false, final false
  static inline void WriteTwoDecimalDigits(uint32_t value, ::System::Span_1<char16_t> destination, int32_t offset);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_InvariantAbbreviatedDayNames();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_InvariantAbbreviatedMonthNames();

  static inline ::System::Globalization::DateTimeFormatInfo* getStaticF_InvariantFormatInfo();

  static inline ::System::TimeSpan getStaticF_NullOffset();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_allStandardFormats();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_fixedNumberFormats();

  static inline void setStaticF_InvariantAbbreviatedDayNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_InvariantAbbreviatedMonthNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_InvariantFormatInfo(::System::Globalization::DateTimeFormatInfo* value);

  static inline void setStaticF_NullOffset(::System::TimeSpan value);

  static inline void setStaticF_allStandardFormats(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_fixedNumberFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeFormat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeFormat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeFormat(DateTimeFormat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeFormat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeFormat(DateTimeFormat const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2387 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DateTimeFormat, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::DateTimeFormat);
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeFormat*, "System", "DateTimeFormat");
