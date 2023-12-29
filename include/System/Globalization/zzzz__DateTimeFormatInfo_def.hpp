#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__DateTimeFormatFlags_def.hpp"
#include "System/Globalization/zzzz__DateTimeStyles_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TokenType_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeFormatInfo)
namespace System {
struct __DTString;
}
namespace System::Globalization {
struct DateTimeStyles;
}
namespace System {
class IFormatProvider;
}
namespace System::Globalization {
class Calendar;
}
namespace System::Globalization {
struct MonthNameStyles;
}
namespace System {
class Object;
}
namespace System {
class ICloneable;
}
namespace System::Globalization {
struct DateTimeFormatFlags;
}
namespace System {
struct TokenType;
}
namespace System::Globalization {
class __DateTimeFormatInfo__TokenHashValue;
}
namespace System {
struct DayOfWeek;
}
namespace System::Globalization {
class CultureData;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Type;
}
namespace System::Globalization {
struct CalendarId;
}
namespace System::Globalization {
class CompareInfo;
}
// Forward declare root types
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Globalization {
class __DateTimeFormatInfo__TokenHashValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::DateTimeFormatInfo);
MARK_REF_PTR_T(::System::Globalization::__DateTimeFormatInfo__TokenHashValue);
// Type: ::TokenHashValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2401)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3652))
// CS Name: ::DateTimeFormatInfo::TokenHashValue*
class CORDL_TYPE __DateTimeFormatInfo__TokenHashValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field tokenString, offset 0x10, size 0x8
  __declspec(property(get = __get_tokenString, put = __set_tokenString))::StringW tokenString;

  /// @brief Field tokenType, offset 0x18, size 0x4
  __declspec(property(get = __get_tokenType, put = __set_tokenType))::System::TokenType tokenType;

  /// @brief Field tokenValue, offset 0x1c, size 0x4
  __declspec(property(get = __get_tokenValue, put = __set_tokenValue)) int32_t tokenValue;

  constexpr ::StringW& __get_tokenString();

  constexpr ::StringW const& __get_tokenString() const;

  constexpr void __set_tokenString(::StringW value);

  constexpr ::System::TokenType& __get_tokenType();

  constexpr ::System::TokenType const& __get_tokenType() const;

  constexpr void __set_tokenType(::System::TokenType value);

  constexpr int32_t& __get_tokenValue();

  constexpr int32_t const& __get_tokenValue() const;

  constexpr void __set_tokenValue(int32_t value);

  static inline ::System::Globalization::__DateTimeFormatInfo__TokenHashValue* New_ctor(::StringW tokenString, ::System::TokenType tokenType, int32_t tokenValue);

  /// @brief Method .ctor addr 0x23f76b0 size 0x3c virtual false final false
  inline void _ctor(::StringW tokenString, ::System::TokenType tokenType, int32_t tokenValue);

  // Ctor Parameters [CppParam { name: "", ty: "__DateTimeFormatInfo__TokenHashValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DateTimeFormatInfo__TokenHashValue(__DateTimeFormatInfo__TokenHashValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DateTimeFormatInfo__TokenHashValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DateTimeFormatInfo__TokenHashValue(__DateTimeFormatInfo__TokenHashValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DateTimeFormatInfo__TokenHashValue();

public:
  /// @brief Field tokenString, offset: 0x10, size: 0x8, def value: None
  ::StringW ___tokenString;

  /// @brief Field tokenType, offset: 0x18, size: 0x4, def value: None
  ::System::TokenType ___tokenType;

  /// @brief Field tokenValue, offset: 0x1c, size: 0x4, def value: None
  int32_t ___tokenValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__DateTimeFormatInfo__TokenHashValue, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::__DateTimeFormatInfo__TokenHashValue, ___tokenString) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__DateTimeFormatInfo__TokenHashValue, ___tokenType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__DateTimeFormatInfo__TokenHashValue, ___tokenValue) == 0x1c, "Offset mismatch!");

} // namespace System::Globalization
// Type: System.Globalization::DateTimeFormatInfo
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3658)), TypeDefinitionIndex(TypeDefinitionIndex(3651)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3653))
// CS Name: ::System.Globalization::DateTimeFormatInfo*
class CORDL_TYPE DateTimeFormatInfo : public ::System::Object {
public:
  // Declarations
  using TokenHashValue = ::System::Globalization::__DateTimeFormatInfo__TokenHashValue;

  /// @brief Field _cultureData, offset 0x10, size 0x8
  __declspec(property(get = __get__cultureData, put = __set__cultureData))::System::Globalization::CultureData* _cultureData;

  /// @brief Field _name, offset 0x18, size 0x8
  __declspec(property(get = __get__name, put = __set__name))::StringW _name;

  /// @brief Field _langName, offset 0x20, size 0x8
  __declspec(property(get = __get__langName, put = __set__langName))::StringW _langName;

  /// @brief Field _compareInfo, offset 0x28, size 0x8
  __declspec(property(get = __get__compareInfo, put = __set__compareInfo))::System::Globalization::CompareInfo* _compareInfo;

  /// @brief Field _cultureInfo, offset 0x30, size 0x8
  __declspec(property(get = __get__cultureInfo, put = __set__cultureInfo))::System::Globalization::CultureInfo* _cultureInfo;

  /// @brief Field amDesignator, offset 0x38, size 0x8
  __declspec(property(get = __get_amDesignator, put = __set_amDesignator))::StringW amDesignator;

  /// @brief Field pmDesignator, offset 0x40, size 0x8
  __declspec(property(get = __get_pmDesignator, put = __set_pmDesignator))::StringW pmDesignator;

  /// @brief Field dateSeparator, offset 0x48, size 0x8
  __declspec(property(get = __get_dateSeparator, put = __set_dateSeparator))::StringW dateSeparator;

  /// @brief Field generalShortTimePattern, offset 0x50, size 0x8
  __declspec(property(get = __get_generalShortTimePattern, put = __set_generalShortTimePattern))::StringW generalShortTimePattern;

  /// @brief Field generalLongTimePattern, offset 0x58, size 0x8
  __declspec(property(get = __get_generalLongTimePattern, put = __set_generalLongTimePattern))::StringW generalLongTimePattern;

  /// @brief Field timeSeparator, offset 0x60, size 0x8
  __declspec(property(get = __get_timeSeparator, put = __set_timeSeparator))::StringW timeSeparator;

  /// @brief Field monthDayPattern, offset 0x68, size 0x8
  __declspec(property(get = __get_monthDayPattern, put = __set_monthDayPattern))::StringW monthDayPattern;

  /// @brief Field dateTimeOffsetPattern, offset 0x70, size 0x8
  __declspec(property(get = __get_dateTimeOffsetPattern, put = __set_dateTimeOffsetPattern))::StringW dateTimeOffsetPattern;

  /// @brief Field calendar, offset 0x78, size 0x8
  __declspec(property(get = __get_calendar, put = __set_calendar))::System::Globalization::Calendar* calendar;

  /// @brief Field firstDayOfWeek, offset 0x80, size 0x4
  __declspec(property(get = __get_firstDayOfWeek, put = __set_firstDayOfWeek)) int32_t firstDayOfWeek;

  /// @brief Field calendarWeekRule, offset 0x84, size 0x4
  __declspec(property(get = __get_calendarWeekRule, put = __set_calendarWeekRule)) int32_t calendarWeekRule;

  /// @brief Field fullDateTimePattern, offset 0x88, size 0x8
  __declspec(property(get = __get_fullDateTimePattern, put = __set_fullDateTimePattern))::StringW fullDateTimePattern;

  /// @brief Field abbreviatedDayNames, offset 0x90, size 0x8
  __declspec(property(get = __get_abbreviatedDayNames, put = __set_abbreviatedDayNames))::ArrayW<::StringW, ::Array<::StringW>*> abbreviatedDayNames;

  /// @brief Field m_superShortDayNames, offset 0x98, size 0x8
  __declspec(property(get = __get_m_superShortDayNames, put = __set_m_superShortDayNames))::ArrayW<::StringW, ::Array<::StringW>*> m_superShortDayNames;

  /// @brief Field dayNames, offset 0xa0, size 0x8
  __declspec(property(get = __get_dayNames, put = __set_dayNames))::ArrayW<::StringW, ::Array<::StringW>*> dayNames;

  /// @brief Field abbreviatedMonthNames, offset 0xa8, size 0x8
  __declspec(property(get = __get_abbreviatedMonthNames, put = __set_abbreviatedMonthNames))::ArrayW<::StringW, ::Array<::StringW>*> abbreviatedMonthNames;

  /// @brief Field monthNames, offset 0xb0, size 0x8
  __declspec(property(get = __get_monthNames, put = __set_monthNames))::ArrayW<::StringW, ::Array<::StringW>*> monthNames;

  /// @brief Field genitiveMonthNames, offset 0xb8, size 0x8
  __declspec(property(get = __get_genitiveMonthNames, put = __set_genitiveMonthNames))::ArrayW<::StringW, ::Array<::StringW>*> genitiveMonthNames;

  /// @brief Field m_genitiveAbbreviatedMonthNames, offset 0xc0, size 0x8
  __declspec(property(get = __get_m_genitiveAbbreviatedMonthNames, put = __set_m_genitiveAbbreviatedMonthNames))::ArrayW<::StringW, ::Array<::StringW>*> m_genitiveAbbreviatedMonthNames;

  /// @brief Field leapYearMonthNames, offset 0xc8, size 0x8
  __declspec(property(get = __get_leapYearMonthNames, put = __set_leapYearMonthNames))::ArrayW<::StringW, ::Array<::StringW>*> leapYearMonthNames;

  /// @brief Field longDatePattern, offset 0xd0, size 0x8
  __declspec(property(get = __get_longDatePattern, put = __set_longDatePattern))::StringW longDatePattern;

  /// @brief Field shortDatePattern, offset 0xd8, size 0x8
  __declspec(property(get = __get_shortDatePattern, put = __set_shortDatePattern))::StringW shortDatePattern;

  /// @brief Field yearMonthPattern, offset 0xe0, size 0x8
  __declspec(property(get = __get_yearMonthPattern, put = __set_yearMonthPattern))::StringW yearMonthPattern;

  /// @brief Field longTimePattern, offset 0xe8, size 0x8
  __declspec(property(get = __get_longTimePattern, put = __set_longTimePattern))::StringW longTimePattern;

  /// @brief Field shortTimePattern, offset 0xf0, size 0x8
  __declspec(property(get = __get_shortTimePattern, put = __set_shortTimePattern))::StringW shortTimePattern;

  /// @brief Field allYearMonthPatterns, offset 0xf8, size 0x8
  __declspec(property(get = __get_allYearMonthPatterns, put = __set_allYearMonthPatterns))::ArrayW<::StringW, ::Array<::StringW>*> allYearMonthPatterns;

  /// @brief Field allShortDatePatterns, offset 0x100, size 0x8
  __declspec(property(get = __get_allShortDatePatterns, put = __set_allShortDatePatterns))::ArrayW<::StringW, ::Array<::StringW>*> allShortDatePatterns;

  /// @brief Field allLongDatePatterns, offset 0x108, size 0x8
  __declspec(property(get = __get_allLongDatePatterns, put = __set_allLongDatePatterns))::ArrayW<::StringW, ::Array<::StringW>*> allLongDatePatterns;

  /// @brief Field allShortTimePatterns, offset 0x110, size 0x8
  __declspec(property(get = __get_allShortTimePatterns, put = __set_allShortTimePatterns))::ArrayW<::StringW, ::Array<::StringW>*> allShortTimePatterns;

  /// @brief Field allLongTimePatterns, offset 0x118, size 0x8
  __declspec(property(get = __get_allLongTimePatterns, put = __set_allLongTimePatterns))::ArrayW<::StringW, ::Array<::StringW>*> allLongTimePatterns;

  /// @brief Field m_eraNames, offset 0x120, size 0x8
  __declspec(property(get = __get_m_eraNames, put = __set_m_eraNames))::ArrayW<::StringW, ::Array<::StringW>*> m_eraNames;

  /// @brief Field m_abbrevEraNames, offset 0x128, size 0x8
  __declspec(property(get = __get_m_abbrevEraNames, put = __set_m_abbrevEraNames))::ArrayW<::StringW, ::Array<::StringW>*> m_abbrevEraNames;

  /// @brief Field m_abbrevEnglishEraNames, offset 0x130, size 0x8
  __declspec(property(get = __get_m_abbrevEnglishEraNames, put = __set_m_abbrevEnglishEraNames))::ArrayW<::StringW, ::Array<::StringW>*> m_abbrevEnglishEraNames;

  /// @brief Field optionalCalendars, offset 0x138, size 0x8
  __declspec(property(get = __get_optionalCalendars, put = __set_optionalCalendars))::ArrayW<::System::Globalization::CalendarId, ::Array<::System::Globalization::CalendarId>*> optionalCalendars;

  /// @brief Field _isReadOnly, offset 0x140, size 0x1
  __declspec(property(get = __get__isReadOnly, put = __set__isReadOnly)) bool _isReadOnly;

  /// @brief Field formatFlags, offset 0x144, size 0x4
  __declspec(property(get = __get_formatFlags, put = __set_formatFlags))::System::Globalization::DateTimeFormatFlags formatFlags;

  /// @brief Field _fullTimeSpanPositivePattern, offset 0x148, size 0x8
  __declspec(property(get = __get__fullTimeSpanPositivePattern, put = __set__fullTimeSpanPositivePattern))::StringW _fullTimeSpanPositivePattern;

  /// @brief Field _fullTimeSpanNegativePattern, offset 0x150, size 0x8
  __declspec(property(get = __get__fullTimeSpanNegativePattern, put = __set__fullTimeSpanNegativePattern))::StringW _fullTimeSpanNegativePattern;

  /// @brief Field _dtfiTokenHash, offset 0x158, size 0x8
  __declspec(property(
      get = __get__dtfiTokenHash,
      put = __set__dtfiTokenHash))::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*> _dtfiTokenHash;

  /// @brief Field s_invariantInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_invariantInfo, put = setStaticF_s_invariantInfo))::System::Globalization::DateTimeFormatInfo* s_invariantInfo;

  /// @brief Field s_monthSpaces, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_monthSpaces, put = setStaticF_s_monthSpaces))::ArrayW<char16_t, ::Array<char16_t>*> s_monthSpaces;

  /// @brief Field s_jajpDTFI, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_jajpDTFI, put = setStaticF_s_jajpDTFI))::System::Globalization::DateTimeFormatInfo* s_jajpDTFI;

  /// @brief Field s_zhtwDTFI, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_zhtwDTFI, put = setStaticF_s_zhtwDTFI))::System::Globalization::DateTimeFormatInfo* s_zhtwDTFI;

  __declspec(property(get = get_CultureName))::StringW CultureName;

  __declspec(property(get = get_Culture))::System::Globalization::CultureInfo* Culture;

  __declspec(property(get = get_LanguageName))::StringW LanguageName;

  __declspec(property(get = get_AMDesignator))::StringW AMDesignator;

  __declspec(property(get = get_Calendar, put = set_Calendar))::System::Globalization::Calendar* Calendar;

  __declspec(property(get = get_OptionalCalendars))::ArrayW<::System::Globalization::CalendarId, ::Array<::System::Globalization::CalendarId>*> OptionalCalendars;

  __declspec(property(get = get_EraNames))::ArrayW<::StringW, ::Array<::StringW>*> EraNames;

  __declspec(property(get = get_AbbreviatedEraNames))::ArrayW<::StringW, ::Array<::StringW>*> AbbreviatedEraNames;

  __declspec(property(get = get_AbbreviatedEnglishEraNames))::ArrayW<::StringW, ::Array<::StringW>*> AbbreviatedEnglishEraNames;

  __declspec(property(get = get_DateSeparator))::StringW DateSeparator;

  __declspec(property(get = get_FullDateTimePattern))::StringW FullDateTimePattern;

  __declspec(property(get = get_LongDatePattern))::StringW LongDatePattern;

  __declspec(property(get = get_LongTimePattern))::StringW LongTimePattern;

  __declspec(property(get = get_MonthDayPattern))::StringW MonthDayPattern;

  __declspec(property(get = get_PMDesignator))::StringW PMDesignator;

  __declspec(property(get = get_RFC1123Pattern))::StringW RFC1123Pattern;

  __declspec(property(get = get_ShortDatePattern))::StringW ShortDatePattern;

  __declspec(property(get = get_ShortTimePattern))::StringW ShortTimePattern;

  __declspec(property(get = get_SortableDateTimePattern))::StringW SortableDateTimePattern;

  __declspec(property(get = get_GeneralShortTimePattern))::StringW GeneralShortTimePattern;

  __declspec(property(get = get_GeneralLongTimePattern))::StringW GeneralLongTimePattern;

  __declspec(property(get = get_DateTimeOffsetPattern))::StringW DateTimeOffsetPattern;

  __declspec(property(get = get_TimeSeparator))::StringW TimeSeparator;

  __declspec(property(get = get_UniversalSortableDateTimePattern))::StringW UniversalSortableDateTimePattern;

  __declspec(property(get = get_YearMonthPattern))::StringW YearMonthPattern;

  __declspec(property(get = get_AbbreviatedDayNames))::ArrayW<::StringW, ::Array<::StringW>*> AbbreviatedDayNames;

  __declspec(property(get = get_DayNames))::ArrayW<::StringW, ::Array<::StringW>*> DayNames;

  __declspec(property(get = get_AbbreviatedMonthNames))::ArrayW<::StringW, ::Array<::StringW>*> AbbreviatedMonthNames;

  __declspec(property(get = get_MonthNames))::ArrayW<::StringW, ::Array<::StringW>*> MonthNames;

  __declspec(property(get = get_HasSpacesInMonthNames)) bool HasSpacesInMonthNames;

  __declspec(property(get = get_HasSpacesInDayNames)) bool HasSpacesInDayNames;

  __declspec(property(get = get_AllYearMonthPatterns))::ArrayW<::StringW, ::Array<::StringW>*> AllYearMonthPatterns;

  __declspec(property(get = get_AllShortDatePatterns))::ArrayW<::StringW, ::Array<::StringW>*> AllShortDatePatterns;

  __declspec(property(get = get_AllShortTimePatterns))::ArrayW<::StringW, ::Array<::StringW>*> AllShortTimePatterns;

  __declspec(property(get = get_AllLongDatePatterns))::ArrayW<::StringW, ::Array<::StringW>*> AllLongDatePatterns;

  __declspec(property(get = get_AllLongTimePatterns))::ArrayW<::StringW, ::Array<::StringW>*> AllLongTimePatterns;

  __declspec(property(get = get_UnclonedYearMonthPatterns))::ArrayW<::StringW, ::Array<::StringW>*> UnclonedYearMonthPatterns;

  __declspec(property(get = get_UnclonedShortDatePatterns))::ArrayW<::StringW, ::Array<::StringW>*> UnclonedShortDatePatterns;

  __declspec(property(get = get_UnclonedLongDatePatterns))::ArrayW<::StringW, ::Array<::StringW>*> UnclonedLongDatePatterns;

  __declspec(property(get = get_UnclonedShortTimePatterns))::ArrayW<::StringW, ::Array<::StringW>*> UnclonedShortTimePatterns;

  __declspec(property(get = get_UnclonedLongTimePatterns))::ArrayW<::StringW, ::Array<::StringW>*> UnclonedLongTimePatterns;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_MonthGenitiveNames))::ArrayW<::StringW, ::Array<::StringW>*> MonthGenitiveNames;

  __declspec(property(get = get_FullTimeSpanPositivePattern))::StringW FullTimeSpanPositivePattern;

  __declspec(property(get = get_FullTimeSpanNegativePattern))::StringW FullTimeSpanNegativePattern;

  __declspec(property(get = get_CompareInfo))::System::Globalization::CompareInfo* CompareInfo;

  __declspec(property(get = get_FormatFlags))::System::Globalization::DateTimeFormatFlags FormatFlags;

  __declspec(property(get = get_HasForceTwoDigitYears)) bool HasForceTwoDigitYears;

  __declspec(property(get = get_HasYearMonthAdjustment)) bool HasYearMonthAdjustment;

  /// @brief Convert operator to "::System::IFormatProvider"
  constexpr operator ::System::IFormatProvider*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::System::Globalization::CultureData*& __get__cultureData();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureData*> const& __get__cultureData() const;

  constexpr void __set__cultureData(::System::Globalization::CultureData* value);

  constexpr ::StringW& __get__name();

  constexpr ::StringW const& __get__name() const;

  constexpr void __set__name(::StringW value);

  constexpr ::StringW& __get__langName();

  constexpr ::StringW const& __get__langName() const;

  constexpr void __set__langName(::StringW value);

  constexpr ::System::Globalization::CompareInfo*& __get__compareInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CompareInfo*> const& __get__compareInfo() const;

  constexpr void __set__compareInfo(::System::Globalization::CompareInfo* value);

  constexpr ::System::Globalization::CultureInfo*& __get__cultureInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __get__cultureInfo() const;

  constexpr void __set__cultureInfo(::System::Globalization::CultureInfo* value);

  constexpr ::StringW& __get_amDesignator();

  constexpr ::StringW const& __get_amDesignator() const;

  constexpr void __set_amDesignator(::StringW value);

  constexpr ::StringW& __get_pmDesignator();

  constexpr ::StringW const& __get_pmDesignator() const;

  constexpr void __set_pmDesignator(::StringW value);

  constexpr ::StringW& __get_dateSeparator();

  constexpr ::StringW const& __get_dateSeparator() const;

  constexpr void __set_dateSeparator(::StringW value);

  constexpr ::StringW& __get_generalShortTimePattern();

  constexpr ::StringW const& __get_generalShortTimePattern() const;

  constexpr void __set_generalShortTimePattern(::StringW value);

  constexpr ::StringW& __get_generalLongTimePattern();

  constexpr ::StringW const& __get_generalLongTimePattern() const;

  constexpr void __set_generalLongTimePattern(::StringW value);

  constexpr ::StringW& __get_timeSeparator();

  constexpr ::StringW const& __get_timeSeparator() const;

  constexpr void __set_timeSeparator(::StringW value);

  constexpr ::StringW& __get_monthDayPattern();

  constexpr ::StringW const& __get_monthDayPattern() const;

  constexpr void __set_monthDayPattern(::StringW value);

  constexpr ::StringW& __get_dateTimeOffsetPattern();

  constexpr ::StringW const& __get_dateTimeOffsetPattern() const;

  constexpr void __set_dateTimeOffsetPattern(::StringW value);

  constexpr ::System::Globalization::Calendar*& __get_calendar();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::Calendar*> const& __get_calendar() const;

  constexpr void __set_calendar(::System::Globalization::Calendar* value);

  constexpr int32_t& __get_firstDayOfWeek();

  constexpr int32_t const& __get_firstDayOfWeek() const;

  constexpr void __set_firstDayOfWeek(int32_t value);

  constexpr int32_t& __get_calendarWeekRule();

  constexpr int32_t const& __get_calendarWeekRule() const;

  constexpr void __set_calendarWeekRule(int32_t value);

  constexpr ::StringW& __get_fullDateTimePattern();

  constexpr ::StringW const& __get_fullDateTimePattern() const;

  constexpr void __set_fullDateTimePattern(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_abbreviatedDayNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_abbreviatedDayNames() const;

  constexpr void __set_abbreviatedDayNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_m_superShortDayNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_m_superShortDayNames() const;

  constexpr void __set_m_superShortDayNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_dayNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_dayNames() const;

  constexpr void __set_dayNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_abbreviatedMonthNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_abbreviatedMonthNames() const;

  constexpr void __set_abbreviatedMonthNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_monthNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_monthNames() const;

  constexpr void __set_monthNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_genitiveMonthNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_genitiveMonthNames() const;

  constexpr void __set_genitiveMonthNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_m_genitiveAbbreviatedMonthNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_m_genitiveAbbreviatedMonthNames() const;

  constexpr void __set_m_genitiveAbbreviatedMonthNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_leapYearMonthNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_leapYearMonthNames() const;

  constexpr void __set_leapYearMonthNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::StringW& __get_longDatePattern();

  constexpr ::StringW const& __get_longDatePattern() const;

  constexpr void __set_longDatePattern(::StringW value);

  constexpr ::StringW& __get_shortDatePattern();

  constexpr ::StringW const& __get_shortDatePattern() const;

  constexpr void __set_shortDatePattern(::StringW value);

  constexpr ::StringW& __get_yearMonthPattern();

  constexpr ::StringW const& __get_yearMonthPattern() const;

  constexpr void __set_yearMonthPattern(::StringW value);

  constexpr ::StringW& __get_longTimePattern();

  constexpr ::StringW const& __get_longTimePattern() const;

  constexpr void __set_longTimePattern(::StringW value);

  constexpr ::StringW& __get_shortTimePattern();

  constexpr ::StringW const& __get_shortTimePattern() const;

  constexpr void __set_shortTimePattern(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_allYearMonthPatterns();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_allYearMonthPatterns() const;

  constexpr void __set_allYearMonthPatterns(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_allShortDatePatterns();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_allShortDatePatterns() const;

  constexpr void __set_allShortDatePatterns(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_allLongDatePatterns();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_allLongDatePatterns() const;

  constexpr void __set_allLongDatePatterns(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_allShortTimePatterns();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_allShortTimePatterns() const;

  constexpr void __set_allShortTimePatterns(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_allLongTimePatterns();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_allLongTimePatterns() const;

  constexpr void __set_allLongTimePatterns(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_m_eraNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_m_eraNames() const;

  constexpr void __set_m_eraNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_m_abbrevEraNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_m_abbrevEraNames() const;

  constexpr void __set_m_abbrevEraNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_m_abbrevEnglishEraNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_m_abbrevEnglishEraNames() const;

  constexpr void __set_m_abbrevEnglishEraNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::System::Globalization::CalendarId, ::Array<::System::Globalization::CalendarId>*>& __get_optionalCalendars();

  constexpr ::ArrayW<::System::Globalization::CalendarId, ::Array<::System::Globalization::CalendarId>*> const& __get_optionalCalendars() const;

  constexpr void __set_optionalCalendars(::ArrayW<::System::Globalization::CalendarId, ::Array<::System::Globalization::CalendarId>*> value);

  constexpr bool& __get__isReadOnly();

  constexpr bool const& __get__isReadOnly() const;

  constexpr void __set__isReadOnly(bool value);

  constexpr ::System::Globalization::DateTimeFormatFlags& __get_formatFlags();

  constexpr ::System::Globalization::DateTimeFormatFlags const& __get_formatFlags() const;

  constexpr void __set_formatFlags(::System::Globalization::DateTimeFormatFlags value);

  constexpr ::StringW& __get__fullTimeSpanPositivePattern();

  constexpr ::StringW const& __get__fullTimeSpanPositivePattern() const;

  constexpr void __set__fullTimeSpanPositivePattern(::StringW value);

  constexpr ::StringW& __get__fullTimeSpanNegativePattern();

  constexpr ::StringW const& __get__fullTimeSpanNegativePattern() const;

  constexpr void __set__fullTimeSpanNegativePattern(::StringW value);

  constexpr ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*>& __get__dtfiTokenHash();

  constexpr ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*> const& __get__dtfiTokenHash() const;

  constexpr void __set__dtfiTokenHash(::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*> value);

  static inline void setStaticF_s_invariantInfo(::System::Globalization::DateTimeFormatInfo* value);

  static inline ::System::Globalization::DateTimeFormatInfo* getStaticF_s_invariantInfo();

  static inline void setStaticF_s_monthSpaces(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_s_monthSpaces();

  static inline void setStaticF_s_jajpDTFI(::System::Globalization::DateTimeFormatInfo* value);

  static inline ::System::Globalization::DateTimeFormatInfo* getStaticF_s_jajpDTFI();

  static inline void setStaticF_s_zhtwDTFI(::System::Globalization::DateTimeFormatInfo* value);

  static inline ::System::Globalization::DateTimeFormatInfo* getStaticF_s_zhtwDTFI();

  /// @brief Method get_CultureName addr 0x23f1c10 size 0x2c virtual false final false
  inline ::StringW get_CultureName();

  /// @brief Method get_Culture addr 0x23f1c3c size 0x84 virtual false final false
  inline ::System::Globalization::CultureInfo* get_Culture();

  /// @brief Method get_LanguageName addr 0x23f1cc0 size 0x2c virtual false final false
  inline ::StringW get_LanguageName();

  /// @brief Method internalGetAbbreviatedDayOfWeekNames addr 0x23f1cec size 0x14 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> internalGetAbbreviatedDayOfWeekNames();

  /// @brief Method internalGetAbbreviatedDayOfWeekNamesCore addr 0x23f1d00 size 0x4c virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> internalGetAbbreviatedDayOfWeekNamesCore();

  /// @brief Method internalGetDayOfWeekNames addr 0x23f1d4c size 0x14 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> internalGetDayOfWeekNames();

  /// @brief Method internalGetDayOfWeekNamesCore addr 0x23f1d60 size 0x4c virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> internalGetDayOfWeekNamesCore();

  /// @brief Method internalGetAbbreviatedMonthNames addr 0x23f1dac size 0x14 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> internalGetAbbreviatedMonthNames();

  /// @brief Method internalGetAbbreviatedMonthNamesCore addr 0x23f1dc0 size 0x4c virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> internalGetAbbreviatedMonthNamesCore();

  /// @brief Method internalGetMonthNames addr 0x23f1e0c size 0x14 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> internalGetMonthNames();

  /// @brief Method internalGetMonthNamesCore addr 0x23f1e20 size 0x4c virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> internalGetMonthNamesCore();

  static inline ::System::Globalization::DateTimeFormatInfo* New_ctor();

  /// @brief Method .ctor addr 0x23f1e6c size 0xd0 virtual false final false
  inline void _ctor();

  static inline ::System::Globalization::DateTimeFormatInfo* New_ctor(::System::Globalization::CultureData* cultureData, ::System::Globalization::Calendar* cal);

  /// @brief Method .ctor addr 0x23f2128 size 0x44 virtual false final false
  inline void _ctor(::System::Globalization::CultureData* cultureData, ::System::Globalization::Calendar* cal);

  /// @brief Method InitializeOverridableProperties addr 0x23f200c size 0x11c virtual false final false
  inline void InitializeOverridableProperties(::System::Globalization::CultureData* cultureData, int32_t calendarId);

  /// @brief Method get_InvariantInfo addr 0x23f2418 size 0xd0 virtual false final false
  static inline ::System::Globalization::DateTimeFormatInfo* get_InvariantInfo();

  /// @brief Method get_CurrentInfo addr 0x23f24e8 size 0x10c virtual false final false
  static inline ::System::Globalization::DateTimeFormatInfo* get_CurrentInfo();

  /// @brief Method GetInstance addr 0x23f25f4 size 0x1c0 virtual false final false
  static inline ::System::Globalization::DateTimeFormatInfo* GetInstance(::System::IFormatProvider* provider);

  /// @brief Method GetFormat addr 0x23f27b4 size 0x98 virtual true final true
  inline ::System::Object* GetFormat(::System::Type* formatType);

  /// @brief Method Clone addr 0x23f284c size 0x100 virtual true final true
  inline ::System::Object* Clone();

  /// @brief Method get_AMDesignator addr 0x23f294c size 0x2c virtual false final false
  inline ::StringW get_AMDesignator();

  /// @brief Method get_Calendar addr 0x23f2978 size 0x8 virtual false final false
  inline ::System::Globalization::Calendar* get_Calendar();

  /// @brief Method set_Calendar addr 0x23f216c size 0x2ac virtual false final false
  inline void set_Calendar(::System::Globalization::Calendar* value);

  /// @brief Method get_OptionalCalendars addr 0x23f2a24 size 0x30 virtual false final false
  inline ::ArrayW<::System::Globalization::CalendarId, ::Array<::System::Globalization::CalendarId>*> get_OptionalCalendars();

  /// @brief Method get_EraNames addr 0x23f2a64 size 0x54 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_EraNames();

  /// @brief Method GetEraName addr 0x23f2ab8 size 0xdc virtual false final false
  inline ::StringW GetEraName(int32_t era);

  /// @brief Method get_AbbreviatedEraNames addr 0x23f2b94 size 0x54 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_AbbreviatedEraNames();

  /// @brief Method GetAbbreviatedEraName addr 0x23f2be8 size 0xec virtual false final false
  inline ::StringW GetAbbreviatedEraName(int32_t era);

  /// @brief Method get_AbbreviatedEnglishEraNames addr 0x23f2cd4 size 0x54 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_AbbreviatedEnglishEraNames();

  /// @brief Method get_DateSeparator addr 0x23f2d28 size 0x54 virtual false final false
  inline ::StringW get_DateSeparator();

  /// @brief Method get_FullDateTimePattern addr 0x23f2d7c size 0x74 virtual false final false
  inline ::StringW get_FullDateTimePattern();

  /// @brief Method get_LongDatePattern addr 0x23f2df0 size 0x3c virtual false final false
  inline ::StringW get_LongDatePattern();

  /// @brief Method get_LongTimePattern addr 0x23f2e2c size 0x3c virtual false final false
  inline ::StringW get_LongTimePattern();

  /// @brief Method get_MonthDayPattern addr 0x23f2eec size 0x54 virtual false final false
  inline ::StringW get_MonthDayPattern();

  /// @brief Method get_PMDesignator addr 0x23f2f40 size 0x2c virtual false final false
  inline ::StringW get_PMDesignator();

  /// @brief Method get_RFC1123Pattern addr 0x23f2f6c size 0x40 virtual false final false
  inline ::StringW get_RFC1123Pattern();

  /// @brief Method get_ShortDatePattern addr 0x23f2fac size 0x3c virtual false final false
  inline ::StringW get_ShortDatePattern();

  /// @brief Method get_ShortTimePattern addr 0x23f303c size 0x3c virtual false final false
  inline ::StringW get_ShortTimePattern();

  /// @brief Method get_SortableDateTimePattern addr 0x23f30a8 size 0x40 virtual false final false
  inline ::StringW get_SortableDateTimePattern();

  /// @brief Method get_GeneralShortTimePattern addr 0x23f30e8 size 0x74 virtual false final false
  inline ::StringW get_GeneralShortTimePattern();

  /// @brief Method get_GeneralLongTimePattern addr 0x23f315c size 0x74 virtual false final false
  inline ::StringW get_GeneralLongTimePattern();

  /// @brief Method get_DateTimeOffsetPattern addr 0x23f31d0 size 0x19c virtual false final false
  inline ::StringW get_DateTimeOffsetPattern();

  /// @brief Method get_TimeSeparator addr 0x23f336c size 0x2c virtual false final false
  inline ::StringW get_TimeSeparator();

  /// @brief Method get_UniversalSortableDateTimePattern addr 0x23f3398 size 0x40 virtual false final false
  inline ::StringW get_UniversalSortableDateTimePattern();

  /// @brief Method get_YearMonthPattern addr 0x23f33d8 size 0x3c virtual false final false
  inline ::StringW get_YearMonthPattern();

  /// @brief Method get_AbbreviatedDayNames addr 0x23f3468 size 0x84 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_AbbreviatedDayNames();

  /// @brief Method get_DayNames addr 0x23f34ec size 0x84 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_DayNames();

  /// @brief Method get_AbbreviatedMonthNames addr 0x23f3570 size 0x84 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_AbbreviatedMonthNames();

  /// @brief Method get_MonthNames addr 0x23f35f4 size 0x84 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_MonthNames();

  /// @brief Method get_HasSpacesInMonthNames addr 0x23f3678 size 0x28 virtual false final false
  inline bool get_HasSpacesInMonthNames();

  /// @brief Method get_HasSpacesInDayNames addr 0x23f36b8 size 0x28 virtual false final false
  inline bool get_HasSpacesInDayNames();

  /// @brief Method internalGetMonthName addr 0x23f36e0 size 0x16c virtual false final false
  inline ::StringW internalGetMonthName(int32_t month, ::System::Globalization::MonthNameStyles style, bool abbreviated);

  /// @brief Method internalGetGenitiveMonthNames addr 0x23f384c size 0x94 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> internalGetGenitiveMonthNames(bool abbreviated);

  /// @brief Method internalGetLeapYearMonthNames addr 0x23f38e0 size 0x54 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> internalGetLeapYearMonthNames();

  /// @brief Method GetAbbreviatedDayName addr 0x23f3934 size 0x100 virtual false final false
  inline ::StringW GetAbbreviatedDayName(::System::DayOfWeek dayofweek);

  /// @brief Method GetCombinedPatterns addr 0x23f3a34 size 0x16c virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetCombinedPatterns(::ArrayW<::StringW, ::Array<::StringW>*> patterns1, ::ArrayW<::StringW, ::Array<::StringW>*> patterns2,
                                                                             ::StringW connectString);

  /// @brief Method GetAllDateTimePatterns addr 0x23f3ba0 size 0x37c virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetAllDateTimePatterns(char16_t format);

  /// @brief Method GetDayName addr 0x23f4160 size 0x100 virtual false final false
  inline ::StringW GetDayName(::System::DayOfWeek dayofweek);

  /// @brief Method GetAbbreviatedMonthName addr 0x23f4260 size 0x104 virtual false final false
  inline ::StringW GetAbbreviatedMonthName(int32_t month);

  /// @brief Method GetMonthName addr 0x23f4364 size 0x104 virtual false final false
  inline ::StringW GetMonthName(int32_t month);

  /// @brief Method GetMergedPatterns addr 0x23f4468 size 0x1e4 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetMergedPatterns(::ArrayW<::StringW, ::Array<::StringW>*> patterns, ::StringW defaultPattern);

  /// @brief Method get_AllYearMonthPatterns addr 0x23f40ec size 0x74 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_AllYearMonthPatterns();

  /// @brief Method get_AllShortDatePatterns addr 0x23f3f1c size 0x74 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_AllShortDatePatterns();

  /// @brief Method get_AllShortTimePatterns addr 0x23f4004 size 0x74 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_AllShortTimePatterns();

  /// @brief Method get_AllLongDatePatterns addr 0x23f3f90 size 0x74 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_AllLongDatePatterns();

  /// @brief Method get_AllLongTimePatterns addr 0x23f4078 size 0x74 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_AllLongTimePatterns();

  /// @brief Method get_UnclonedYearMonthPatterns addr 0x23f3414 size 0x54 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_UnclonedYearMonthPatterns();

  /// @brief Method get_UnclonedShortDatePatterns addr 0x23f2fe8 size 0x54 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_UnclonedShortDatePatterns();

  /// @brief Method get_UnclonedLongDatePatterns addr 0x23f2e68 size 0x54 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_UnclonedLongDatePatterns();

  /// @brief Method get_UnclonedShortTimePatterns addr 0x23f3078 size 0x30 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_UnclonedShortTimePatterns();

  /// @brief Method get_UnclonedLongTimePatterns addr 0x23f2ebc size 0x30 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_UnclonedLongTimePatterns();

  /// @brief Method get_IsReadOnly addr 0x23f2980 size 0xa4 virtual false final false
  inline bool get_IsReadOnly();

  /// @brief Method get_MonthGenitiveNames addr 0x23f464c size 0x80 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_MonthGenitiveNames();

  /// @brief Method get_FullTimeSpanPositivePattern addr 0x23f46cc size 0xd4 virtual false final false
  inline ::StringW get_FullTimeSpanPositivePattern();

  /// @brief Method get_FullTimeSpanNegativePattern addr 0x23f47a0 size 0x68 virtual false final false
  inline ::StringW get_FullTimeSpanNegativePattern();

  /// @brief Method get_CompareInfo addr 0x23f4808 size 0x84 virtual false final false
  inline ::System::Globalization::CompareInfo* get_CompareInfo();

  /// @brief Method ValidateStyles addr 0x23f488c size 0xd8 virtual false final false
  static inline void ValidateStyles(::System::Globalization::DateTimeStyles style, ::StringW parameterName);

  /// @brief Method get_FormatFlags addr 0x23f36a0 size 0x18 virtual false final false
  inline ::System::Globalization::DateTimeFormatFlags get_FormatFlags();

  /// @brief Method InitializeFormatFlags addr 0x23f4964 size 0x13c virtual false final false
  inline ::System::Globalization::DateTimeFormatFlags InitializeFormatFlags();

  /// @brief Method get_HasForceTwoDigitYears addr 0x23f4bc4 size 0x34 virtual false final false
  inline bool get_HasForceTwoDigitYears();

  /// @brief Method get_HasYearMonthAdjustment addr 0x23f4bf8 size 0x28 virtual false final false
  inline bool get_HasYearMonthAdjustment();

  /// @brief Method YearMonthAdjustment addr 0x23f4c20 size 0x134 virtual false final false
  inline bool YearMonthAdjustment(ByRef<int32_t> year, ByRef<int32_t> month, bool parsedMonthName);

  /// @brief Method GetJapaneseCalendarDTFI addr 0x23f4d54 size 0x194 virtual false final false
  static inline ::System::Globalization::DateTimeFormatInfo* GetJapaneseCalendarDTFI();

  /// @brief Method GetTaiwanCalendarDTFI addr 0x23f4ee8 size 0x194 virtual false final false
  static inline ::System::Globalization::DateTimeFormatInfo* GetTaiwanCalendarDTFI();

  /// @brief Method ClearTokenHashTable addr 0x23f2a54 size 0x10 virtual false final false
  inline void ClearTokenHashTable();

  /// @brief Method CreateTokenHashTable addr 0x23f507c size 0x8f0 virtual false final false
  inline ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*> CreateTokenHashTable();

  /// @brief Method PopulateSpecialTokenHashTable addr 0x23f5c68 size 0x8dc virtual false final false
  inline void PopulateSpecialTokenHashTable(::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*> temp,
                                            ByRef<bool> useDateSepAsIgnorableSymbol);

  /// @brief Method IsJapaneseCalendar addr 0x23f692c size 0x13c virtual false final false
  static inline bool IsJapaneseCalendar(::System::Globalization::Calendar* calendar);

  /// @brief Method AddMonthNames addr 0x23f6544 size 0xac virtual false final false
  inline void AddMonthNames(::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*> temp,
                            ::StringW monthPostfix);

  /// @brief Method TryParseHebrewNumber addr 0x23f6a68 size 0x134 virtual false final false
  static inline bool TryParseHebrewNumber(ByRef<::System::__DTString> str, ByRef<bool> badFormat, ByRef<int32_t> number);

  /// @brief Method IsHebrewChar addr 0x23f6e08 size 0x14 virtual false final false
  static inline bool IsHebrewChar(char16_t ch);

  /// @brief Method IsAllowedJapaneseTokenFollowedByNonSpaceLetter addr 0x23f6e1c size 0x108 virtual false final false
  inline bool IsAllowedJapaneseTokenFollowedByNonSpaceLetter(::StringW tokenString, char16_t nextCh);

  /// @brief Method Tokenize addr 0x23f6f24 size 0x5cc virtual false final false
  inline bool Tokenize(::System::TokenType TokenMask, ByRef<::System::TokenType> tokenType, ByRef<int32_t> tokenValue, ByRef<::System::__DTString> str);

  /// @brief Method InsertAtCurrentHashNode addr 0x23f74f0 size 0x1c0 virtual false final false
  inline void InsertAtCurrentHashNode(::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*> hashTable,
                                      ::StringW str, char16_t ch, ::System::TokenType tokenType, int32_t tokenValue, int32_t pos, int32_t hashcode, int32_t hashProbe);

  /// @brief Method InsertHash addr 0x23f596c size 0x2fc virtual false final false
  inline void InsertHash(::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*> hashTable, ::StringW str,
                         ::System::TokenType tokenType, int32_t tokenValue);

  /// @brief Method CompareStringIgnoreCaseOptimized addr 0x23f76ec size 0xf4 virtual false final false
  inline bool CompareStringIgnoreCaseOptimized(::StringW string1, int32_t offset1, int32_t length1, ::StringW string2, int32_t offset2, int32_t length2);

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeFormatInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeFormatInfo(DateTimeFormatInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeFormatInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeFormatInfo(DateTimeFormatInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeFormatInfo();

public:
  /// @brief Field _cultureData, offset: 0x10, size: 0x8, def value: None
  ::System::Globalization::CultureData* ____cultureData;

  /// @brief Field _name, offset: 0x18, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _langName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____langName;

  /// @brief Field _compareInfo, offset: 0x28, size: 0x8, def value: None
  ::System::Globalization::CompareInfo* ____compareInfo;

  /// @brief Field _cultureInfo, offset: 0x30, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____cultureInfo;

  /// @brief Field amDesignator, offset: 0x38, size: 0x8, def value: None
  ::StringW ___amDesignator;

  /// @brief Field pmDesignator, offset: 0x40, size: 0x8, def value: None
  ::StringW ___pmDesignator;

  /// @brief Field dateSeparator, offset: 0x48, size: 0x8, def value: None
  ::StringW ___dateSeparator;

  /// @brief Field generalShortTimePattern, offset: 0x50, size: 0x8, def value: None
  ::StringW ___generalShortTimePattern;

  /// @brief Field generalLongTimePattern, offset: 0x58, size: 0x8, def value: None
  ::StringW ___generalLongTimePattern;

  /// @brief Field timeSeparator, offset: 0x60, size: 0x8, def value: None
  ::StringW ___timeSeparator;

  /// @brief Field monthDayPattern, offset: 0x68, size: 0x8, def value: None
  ::StringW ___monthDayPattern;

  /// @brief Field dateTimeOffsetPattern, offset: 0x70, size: 0x8, def value: None
  ::StringW ___dateTimeOffsetPattern;

  /// @brief Field calendar, offset: 0x78, size: 0x8, def value: None
  ::System::Globalization::Calendar* ___calendar;

  /// @brief Field firstDayOfWeek, offset: 0x80, size: 0x4, def value: None
  int32_t ___firstDayOfWeek;

  /// @brief Field calendarWeekRule, offset: 0x84, size: 0x4, def value: None
  int32_t ___calendarWeekRule;

  /// @brief Field fullDateTimePattern, offset: 0x88, size: 0x8, def value: None
  ::StringW ___fullDateTimePattern;

  /// @brief Field abbreviatedDayNames, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___abbreviatedDayNames;

  /// @brief Field m_superShortDayNames, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_superShortDayNames;

  /// @brief Field dayNames, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___dayNames;

  /// @brief Field abbreviatedMonthNames, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___abbreviatedMonthNames;

  /// @brief Field monthNames, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___monthNames;

  /// @brief Field genitiveMonthNames, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___genitiveMonthNames;

  /// @brief Field m_genitiveAbbreviatedMonthNames, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_genitiveAbbreviatedMonthNames;

  /// @brief Field leapYearMonthNames, offset: 0xc8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___leapYearMonthNames;

  /// @brief Field longDatePattern, offset: 0xd0, size: 0x8, def value: None
  ::StringW ___longDatePattern;

  /// @brief Field shortDatePattern, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___shortDatePattern;

  /// @brief Field yearMonthPattern, offset: 0xe0, size: 0x8, def value: None
  ::StringW ___yearMonthPattern;

  /// @brief Field longTimePattern, offset: 0xe8, size: 0x8, def value: None
  ::StringW ___longTimePattern;

  /// @brief Field shortTimePattern, offset: 0xf0, size: 0x8, def value: None
  ::StringW ___shortTimePattern;

  /// @brief Field allYearMonthPatterns, offset: 0xf8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___allYearMonthPatterns;

  /// @brief Field allShortDatePatterns, offset: 0x100, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___allShortDatePatterns;

  /// @brief Field allLongDatePatterns, offset: 0x108, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___allLongDatePatterns;

  /// @brief Field allShortTimePatterns, offset: 0x110, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___allShortTimePatterns;

  /// @brief Field allLongTimePatterns, offset: 0x118, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___allLongTimePatterns;

  /// @brief Field m_eraNames, offset: 0x120, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_eraNames;

  /// @brief Field m_abbrevEraNames, offset: 0x128, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_abbrevEraNames;

  /// @brief Field m_abbrevEnglishEraNames, offset: 0x130, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_abbrevEnglishEraNames;

  /// @brief Field optionalCalendars, offset: 0x138, size: 0x8, def value: None
  ::ArrayW<::System::Globalization::CalendarId, ::Array<::System::Globalization::CalendarId>*> ___optionalCalendars;

  /// @brief Field _isReadOnly, offset: 0x140, size: 0x1, def value: None
  bool ____isReadOnly;

  /// @brief Field formatFlags, offset: 0x144, size: 0x4, def value: None
  ::System::Globalization::DateTimeFormatFlags ___formatFlags;

  /// @brief Field _fullTimeSpanPositivePattern, offset: 0x148, size: 0x8, def value: None
  ::StringW ____fullTimeSpanPositivePattern;

  /// @brief Field _fullTimeSpanNegativePattern, offset: 0x150, size: 0x8, def value: None
  ::StringW ____fullTimeSpanNegativePattern;

  /// @brief Field _dtfiTokenHash, offset: 0x158, size: 0x8, def value: None
  ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*> ____dtfiTokenHash;

  /// @brief Field rfc1123Pattern offset 0xffffffff size 0x8
  static constexpr ::ConstString rfc1123Pattern{ u"ddd, dd MMM yyyy HH\':\'mm\':\'ss \'GMT\'" };

  /// @brief Field sortableDateTimePattern offset 0xffffffff size 0x8
  static constexpr ::ConstString sortableDateTimePattern{ u"yyyy\'-\'MM\'-\'dd\'T\'HH\':\'mm\':\'ss" };

  /// @brief Field universalSortableDateTimePattern offset 0xffffffff size 0x8
  static constexpr ::ConstString universalSortableDateTimePattern{ u"yyyy\'-\'MM\'-\'dd HH\':\'mm\':\'ss\'Z\'" };

  /// @brief Field DEFAULT_ALL_DATETIMES_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t DEFAULT_ALL_DATETIMES_SIZE{ static_cast<int32_t>(0x84) };

  /// @brief Field RoundtripFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString RoundtripFormat{ u"yyyy\'-\'MM\'-\'dd\'T\'HH\':\'mm\':\'ss.fffffffK" };

  /// @brief Field RoundtripDateTimeUnfixed offset 0xffffffff size 0x8
  static constexpr ::ConstString RoundtripDateTimeUnfixed{ u"yyyy\'-\'MM\'-\'ddTHH\':\'mm\':\'ss zzz" };

  /// @brief Field InvalidDateTimeStyles value: static_cast<int32_t>(0xffffff00)
  static ::System::Globalization::DateTimeStyles const InvalidDateTimeStyles;

  /// @brief Field TOKEN_HASH_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t TOKEN_HASH_SIZE{ static_cast<int32_t>(0xc7) };

  /// @brief Field SECOND_PRIME offset 0xffffffff size 0x4
  static constexpr int32_t SECOND_PRIME{ static_cast<int32_t>(0xc5) };

  /// @brief Field dateSeparatorOrTimeZoneOffset offset 0xffffffff size 0x8
  static constexpr ::ConstString dateSeparatorOrTimeZoneOffset{ u"-" };

  /// @brief Field invariantDateSeparator offset 0xffffffff size 0x8
  static constexpr ::ConstString invariantDateSeparator{ u"/" };

  /// @brief Field invariantTimeSeparator offset 0xffffffff size 0x8
  static constexpr ::ConstString invariantTimeSeparator{ u":" };

  /// @brief Field IgnorablePeriod offset 0xffffffff size 0x8
  static constexpr ::ConstString IgnorablePeriod{ u"." };

  /// @brief Field IgnorableComma offset 0xffffffff size 0x8
  static constexpr ::ConstString IgnorableComma{ u"," };

  /// @brief Field CJKYearSuff offset 0xffffffff size 0x8
  static constexpr ::ConstString CJKYearSuff{ u"\u{5e74}" };

  /// @brief Field CJKMonthSuff offset 0xffffffff size 0x8
  static constexpr ::ConstString CJKMonthSuff{ u"\u{6708}" };

  /// @brief Field CJKDaySuff offset 0xffffffff size 0x8
  static constexpr ::ConstString CJKDaySuff{ u"\u{65e5}" };

  /// @brief Field KoreanYearSuff offset 0xffffffff size 0x8
  static constexpr ::ConstString KoreanYearSuff{ u"\u{b144}" };

  /// @brief Field KoreanMonthSuff offset 0xffffffff size 0x8
  static constexpr ::ConstString KoreanMonthSuff{ u"\u{c6d4}" };

  /// @brief Field KoreanDaySuff offset 0xffffffff size 0x8
  static constexpr ::ConstString KoreanDaySuff{ u"\u{c77c}" };

  /// @brief Field KoreanHourSuff offset 0xffffffff size 0x8
  static constexpr ::ConstString KoreanHourSuff{ u"\u{c2dc}" };

  /// @brief Field KoreanMinuteSuff offset 0xffffffff size 0x8
  static constexpr ::ConstString KoreanMinuteSuff{ u"\u{bd84}" };

  /// @brief Field KoreanSecondSuff offset 0xffffffff size 0x8
  static constexpr ::ConstString KoreanSecondSuff{ u"\u{cd08}" };

  /// @brief Field CJKHourSuff offset 0xffffffff size 0x8
  static constexpr ::ConstString CJKHourSuff{ u"\u{6642}" };

  /// @brief Field ChineseHourSuff offset 0xffffffff size 0x8
  static constexpr ::ConstString ChineseHourSuff{ u"\u{65f6}" };

  /// @brief Field CJKMinuteSuff offset 0xffffffff size 0x8
  static constexpr ::ConstString CJKMinuteSuff{ u"\u{5206}" };

  /// @brief Field CJKSecondSuff offset 0xffffffff size 0x8
  static constexpr ::ConstString CJKSecondSuff{ u"\u{79d2}" };

  /// @brief Field JapaneseEraStart offset 0xffffffff size 0x8
  static constexpr ::ConstString JapaneseEraStart{ u"\u{5143}" };

  /// @brief Field LocalTimeMark offset 0xffffffff size 0x8
  static constexpr ::ConstString LocalTimeMark{ u"T" };

  /// @brief Field GMTName offset 0xffffffff size 0x8
  static constexpr ::ConstString GMTName{ u"GMT" };

  /// @brief Field ZuluName offset 0xffffffff size 0x8
  static constexpr ::ConstString ZuluName{ u"Z" };

  /// @brief Field KoreanLangName offset 0xffffffff size 0x8
  static constexpr ::ConstString KoreanLangName{ u"ko" };

  /// @brief Field JapaneseLangName offset 0xffffffff size 0x8
  static constexpr ::ConstString JapaneseLangName{ u"ja" };

  /// @brief Field EnglishLangName offset 0xffffffff size 0x8
  static constexpr ::ConstString EnglishLangName{ u"en" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::DateTimeFormatInfo, 0x160>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ____cultureData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ____name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ____langName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ____compareInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ____cultureInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___amDesignator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___pmDesignator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___dateSeparator) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___generalShortTimePattern) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___generalLongTimePattern) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___timeSeparator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___monthDayPattern) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___dateTimeOffsetPattern) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___calendar) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___firstDayOfWeek) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___calendarWeekRule) == 0x84, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___fullDateTimePattern) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___abbreviatedDayNames) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___m_superShortDayNames) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___dayNames) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___abbreviatedMonthNames) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___monthNames) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___genitiveMonthNames) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___m_genitiveAbbreviatedMonthNames) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___leapYearMonthNames) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___longDatePattern) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___shortDatePattern) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___yearMonthPattern) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___longTimePattern) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___shortTimePattern) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___allYearMonthPatterns) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___allShortDatePatterns) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___allLongDatePatterns) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___allShortTimePatterns) == 0x110, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___allLongTimePatterns) == 0x118, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___m_eraNames) == 0x120, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___m_abbrevEraNames) == 0x128, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___m_abbrevEnglishEraNames) == 0x130, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___optionalCalendars) == 0x138, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ____isReadOnly) == 0x140, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ___formatFlags) == 0x144, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ____fullTimeSpanPositivePattern) == 0x148, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ____fullTimeSpanNegativePattern) == 0x150, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfo, ____dtfiTokenHash) == 0x158, "Offset mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::DateTimeFormatInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::DateTimeFormatInfo*, "System.Globalization", "DateTimeFormatInfo");
NEED_NO_BOX(::System::Globalization::__DateTimeFormatInfo__TokenHashValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, "System.Globalization", "DateTimeFormatInfo/TokenHashValue");
