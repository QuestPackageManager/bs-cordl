#pragma once
// IWYU pragma private; include "System/DateTimeFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System::DateTimeFormat
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::DateTimeFormat*
class CORDL_TYPE DateTimeFormat : public ::System::Object {
public:
  // Declarations
  /// @brief Field InvariantAbbreviatedDayNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvariantAbbreviatedDayNames, put = setStaticF_InvariantAbbreviatedDayNames))::ArrayW<::StringW, ::Array<::StringW>*> InvariantAbbreviatedDayNames;

  /// @brief Field InvariantAbbreviatedMonthNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvariantAbbreviatedMonthNames, put = setStaticF_InvariantAbbreviatedMonthNames))::ArrayW<::StringW, ::Array<::StringW>*> InvariantAbbreviatedMonthNames;

  /// @brief Field InvariantFormatInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvariantFormatInfo, put = setStaticF_InvariantFormatInfo))::System::Globalization::DateTimeFormatInfo* InvariantFormatInfo;

  /// @brief Field NullOffset, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NullOffset, put = setStaticF_NullOffset))::System::TimeSpan NullOffset;

  /// @brief Field allStandardFormats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_allStandardFormats, put = setStaticF_allStandardFormats))::ArrayW<char16_t, ::Array<char16_t>*> allStandardFormats;

  /// @brief Field fixedNumberFormats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_fixedNumberFormats, put = setStaticF_fixedNumberFormats))::ArrayW<::StringW, ::Array<::StringW>*> fixedNumberFormats;

  /// @brief Method Append2DigitNumber, addr 0x29392a0, size 0x5c, virtual false, abstract: false, final false
  static inline void Append2DigitNumber(::System::Text::StringBuilder* result, int32_t val);

  /// @brief Method ExpandPredefinedFormat, addr 0x29395a4, size 0x370, virtual false, abstract: false, final false
  static inline ::StringW ExpandPredefinedFormat(::System::ReadOnlySpan_1<char16_t> format, ByRef<::System::DateTime> dateTime, ByRef<::System::Globalization::DateTimeFormatInfo*> dtfi,
                                                 ByRef<::System::TimeSpan> offset);

  /// @brief Method Format, addr 0x293114c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW Format(::System::DateTime dateTime, ::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method Format, addr 0x29342ec, size 0x2d0, virtual false, abstract: false, final false
  static inline ::StringW Format(::System::DateTime dateTime, ::StringW format, ::System::IFormatProvider* provider, ::System::TimeSpan offset);

  /// @brief Method FormatCustomized, addr 0x2937cbc, size 0x10cc, virtual false, abstract: false, final false
  static inline ::System::Text::StringBuilder* FormatCustomized(::System::DateTime dateTime, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                                ::System::TimeSpan offset, ::System::Text::StringBuilder* result);

  /// @brief Method FormatCustomizedRoundripTimeZone, addr 0x29390a4, size 0x1fc, virtual false, abstract: false, final false
  static inline void FormatCustomizedRoundripTimeZone(::System::DateTime dateTime, ::System::TimeSpan offset, ::System::Text::StringBuilder* result);

  /// @brief Method FormatCustomizedTimeZone, addr 0x2938d88, size 0x31c, virtual false, abstract: false, final false
  static inline void FormatCustomizedTimeZone(::System::DateTime dateTime, ::System::TimeSpan offset, ::System::ReadOnlySpan_1<char16_t> format, int32_t tokenLen, bool timeOnly,
                                              ::System::Text::StringBuilder* result);

  /// @brief Method FormatDayOfWeek, addr 0x2937828, size 0x34, virtual false, abstract: false, final false
  static inline ::StringW FormatDayOfWeek(int32_t dayOfWeek, int32_t repeat, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method FormatDigits, addr 0x29375cc, size 0x70, virtual false, abstract: false, final false
  static inline void FormatDigits(::System::Text::StringBuilder* outputBuffer, int32_t value, int32_t len);

  /// @brief Method FormatDigits, addr 0x293763c, size 0xf8, virtual false, abstract: false, final false
  static inline void FormatDigits(::System::Text::StringBuilder* outputBuffer, int32_t value, int32_t len, bool overrideLengthLimit);

  /// @brief Method FormatHebrewMonthName, addr 0x2937890, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW FormatHebrewMonthName(::System::DateTime time, int32_t month, int32_t repeatCount, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method FormatMonth, addr 0x293785c, size 0x34, virtual false, abstract: false, final false
  static inline ::StringW FormatMonth(int32_t month, int32_t repeatCount, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method FormatStringBuilder, addr 0x293a238, size 0x30c, virtual false, abstract: false, final false
  static inline ::System::Text::StringBuilder* FormatStringBuilder(::System::DateTime dateTime, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                                   ::System::TimeSpan offset);

  /// @brief Method GetRealFormat, addr 0x29392fc, size 0x2a8, virtual false, abstract: false, final false
  static inline ::StringW GetRealFormat(::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method HebrewFormatDigits, addr 0x2937734, size 0x7c, virtual false, abstract: false, final false
  static inline void HebrewFormatDigits(::System::Text::StringBuilder* outputBuffer, int32_t digits);

  /// @brief Method InvalidFormatForLocal, addr 0x2939914, size 0x4, virtual false, abstract: false, final false
  static inline void InvalidFormatForLocal(::System::ReadOnlySpan_1<char16_t> format, ::System::DateTime dateTime);

  /// @brief Method IsUseGenitiveForm, addr 0x2937b70, size 0x14c, virtual false, abstract: false, final false
  static inline bool IsUseGenitiveForm(::System::ReadOnlySpan_1<char16_t> format, int32_t index, int32_t tokenLen, char16_t patternToMatch);

  /// @brief Method ParseNextChar, addr 0x2937b00, size 0x70, virtual false, abstract: false, final false
  static inline int32_t ParseNextChar(::System::ReadOnlySpan_1<char16_t> format, int32_t pos);

  /// @brief Method ParseQuoteString, addr 0x2937950, size 0x1b0, virtual false, abstract: false, final false
  static inline int32_t ParseQuoteString(::System::ReadOnlySpan_1<char16_t> format, int32_t pos, ::System::Text::StringBuilder* result);

  /// @brief Method ParseRepeatPattern, addr 0x29377b0, size 0x78, virtual false, abstract: false, final false
  static inline int32_t ParseRepeatPattern(::System::ReadOnlySpan_1<char16_t> format, int32_t pos, char16_t patternChar);

  /// @brief Method TryFormat, addr 0x29313ac, size 0xb8, virtual false, abstract: false, final false
  static inline bool TryFormat(::System::DateTime dateTime, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format,
                               ::System::IFormatProvider* provider);

  /// @brief Method TryFormat, addr 0x29347dc, size 0x210, virtual false, abstract: false, final false
  static inline bool TryFormat(::System::DateTime dateTime, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format,
                               ::System::IFormatProvider* provider, ::System::TimeSpan offset);

  /// @brief Method TryFormatO, addr 0x2939918, size 0x508, virtual false, abstract: false, final false
  static inline bool TryFormatO(::System::DateTime dateTime, ::System::TimeSpan offset, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatR, addr 0x2939e20, size 0x418, virtual false, abstract: false, final false
  static inline bool TryFormatR(::System::DateTime dateTime, ::System::TimeSpan offset, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method WriteDigits, addr 0x293a630, size 0xac, virtual false, abstract: false, final false
  static inline void WriteDigits(uint64_t value, ::System::Span_1<char16_t> buffer);

  /// @brief Method WriteFourDecimalDigits, addr 0x293a590, size 0xa0, virtual false, abstract: false, final false
  static inline void WriteFourDecimalDigits(uint32_t value, ::System::Span_1<char16_t> buffer, int32_t startingIndex);

  /// @brief Method WriteTwoDecimalDigits, addr 0x293a544, size 0x4c, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DateTimeFormat, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::DateTimeFormat);
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeFormat*, "System", "DateTimeFormat");
