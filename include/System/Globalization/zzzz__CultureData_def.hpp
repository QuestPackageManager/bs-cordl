#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CultureData)
namespace System::Globalization {
class CalendarData;
}
namespace System::Globalization {
struct __CultureData__NumberFormatEntryManaged;
}
namespace System::Globalization {
struct CalendarId;
}
namespace System::Globalization {
class NumberFormatInfo;
}
// Forward declare root types
namespace System::Globalization {
class CultureData;
}
namespace System::Globalization {
struct __CultureData__NumberFormatEntryManaged;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::CultureData);
MARK_VAL_T(::System::Globalization::__CultureData__NumberFormatEntryManaged);
// Type: ::NumberFormatEntryManaged
// SizeInfo { instance_size: 92, native_size: 92, calculated_instance_size: 92, calculated_native_size: 108, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3712))
// CS Name: ::CultureData::NumberFormatEntryManaged
struct CORDL_TYPE __CultureData__NumberFormatEntryManaged {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "currency_decimal_digits", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currency_decimal_separator", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "currency_group_separator", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currency_group_sizes0", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "currency_group_sizes1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currency_negative_pattern", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "currency_positive_pattern", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currency_symbol", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "nan_symbol", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "negative_infinity_symbol", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "negative_sign", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "number_decimal_digits", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "number_decimal_separator", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "number_group_separator", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "number_group_sizes0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "number_group_sizes1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "number_negative_pattern", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "per_mille_symbol", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "percent_negative_pattern", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "percent_positive_pattern", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "percent_symbol", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "positive_infinity_symbol", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "positive_sign",
  // ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CultureData__NumberFormatEntryManaged(int32_t currency_decimal_digits, int32_t currency_decimal_separator, int32_t currency_group_separator, int32_t currency_group_sizes0,
                                                    int32_t currency_group_sizes1, int32_t currency_negative_pattern, int32_t currency_positive_pattern, int32_t currency_symbol, int32_t nan_symbol,
                                                    int32_t negative_infinity_symbol, int32_t negative_sign, int32_t number_decimal_digits, int32_t number_decimal_separator,
                                                    int32_t number_group_separator, int32_t number_group_sizes0, int32_t number_group_sizes1, int32_t number_negative_pattern, int32_t per_mille_symbol,
                                                    int32_t percent_negative_pattern, int32_t percent_positive_pattern, int32_t percent_symbol, int32_t positive_infinity_symbol,
                                                    int32_t positive_sign) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CultureData__NumberFormatEntryManaged();

  /// @brief Field currency_decimal_digits, offset: 0x0, size: 0x4, def value: None
  int32_t currency_decimal_digits;

  /// @brief Field currency_decimal_separator, offset: 0x4, size: 0x4, def value: None
  int32_t currency_decimal_separator;

  /// @brief Field currency_group_separator, offset: 0x8, size: 0x4, def value: None
  int32_t currency_group_separator;

  /// @brief Field currency_group_sizes0, offset: 0xc, size: 0x4, def value: None
  int32_t currency_group_sizes0;

  /// @brief Field currency_group_sizes1, offset: 0x10, size: 0x4, def value: None
  int32_t currency_group_sizes1;

  /// @brief Field currency_negative_pattern, offset: 0x14, size: 0x4, def value: None
  int32_t currency_negative_pattern;

  /// @brief Field currency_positive_pattern, offset: 0x18, size: 0x4, def value: None
  int32_t currency_positive_pattern;

  /// @brief Field currency_symbol, offset: 0x1c, size: 0x4, def value: None
  int32_t currency_symbol;

  /// @brief Field nan_symbol, offset: 0x20, size: 0x4, def value: None
  int32_t nan_symbol;

  /// @brief Field negative_infinity_symbol, offset: 0x24, size: 0x4, def value: None
  int32_t negative_infinity_symbol;

  /// @brief Field negative_sign, offset: 0x28, size: 0x4, def value: None
  int32_t negative_sign;

  /// @brief Field number_decimal_digits, offset: 0x2c, size: 0x4, def value: None
  int32_t number_decimal_digits;

  /// @brief Field number_decimal_separator, offset: 0x30, size: 0x4, def value: None
  int32_t number_decimal_separator;

  /// @brief Field number_group_separator, offset: 0x34, size: 0x4, def value: None
  int32_t number_group_separator;

  /// @brief Field number_group_sizes0, offset: 0x38, size: 0x4, def value: None
  int32_t number_group_sizes0;

  /// @brief Field number_group_sizes1, offset: 0x3c, size: 0x4, def value: None
  int32_t number_group_sizes1;

  /// @brief Field number_negative_pattern, offset: 0x40, size: 0x4, def value: None
  int32_t number_negative_pattern;

  /// @brief Field per_mille_symbol, offset: 0x44, size: 0x4, def value: None
  int32_t per_mille_symbol;

  /// @brief Field percent_negative_pattern, offset: 0x48, size: 0x4, def value: None
  int32_t percent_negative_pattern;

  /// @brief Field percent_positive_pattern, offset: 0x4c, size: 0x4, def value: None
  int32_t percent_positive_pattern;

  /// @brief Field percent_symbol, offset: 0x50, size: 0x4, def value: None
  int32_t percent_symbol;

  /// @brief Field positive_infinity_symbol, offset: 0x54, size: 0x4, def value: None
  int32_t positive_infinity_symbol;

  /// @brief Field positive_sign, offset: 0x58, size: 0x4, def value: None
  int32_t positive_sign;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x5c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__CultureData__NumberFormatEntryManaged, 0x5c>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, currency_decimal_digits) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, currency_decimal_separator) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, currency_group_separator) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, currency_group_sizes0) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, currency_group_sizes1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, currency_negative_pattern) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, currency_positive_pattern) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, currency_symbol) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, nan_symbol) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, negative_infinity_symbol) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, negative_sign) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, number_decimal_digits) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, number_decimal_separator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, number_group_separator) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, number_group_sizes0) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, number_group_sizes1) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, number_negative_pattern) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, per_mille_symbol) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, percent_negative_pattern) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, percent_positive_pattern) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, percent_symbol) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, positive_infinity_symbol) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureData__NumberFormatEntryManaged, positive_sign) == 0x58, "Offset mismatch!");

} // namespace System::Globalization
// Type: System.Globalization::CultureData
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3713))
// CS Name: ::System.Globalization::CultureData*
class CORDL_TYPE CultureData : public ::System::Object {
public:
  // Declarations
  using NumberFormatEntryManaged = ::System::Globalization::__CultureData__NumberFormatEntryManaged;

  /// @brief Field sAM1159, offset 0x10, size 0x8
  __declspec(property(get = __get_sAM1159, put = __set_sAM1159))::StringW sAM1159;

  /// @brief Field sPM2359, offset 0x18, size 0x8
  __declspec(property(get = __get_sPM2359, put = __set_sPM2359))::StringW sPM2359;

  /// @brief Field sTimeSeparator, offset 0x20, size 0x8
  __declspec(property(get = __get_sTimeSeparator, put = __set_sTimeSeparator))::StringW sTimeSeparator;

  /// @brief Field saLongTimes, offset 0x28, size 0x8
  __declspec(property(get = __get_saLongTimes, put = __set_saLongTimes))::ArrayW<::StringW, ::Array<::StringW>*> saLongTimes;

  /// @brief Field saShortTimes, offset 0x30, size 0x8
  __declspec(property(get = __get_saShortTimes, put = __set_saShortTimes))::ArrayW<::StringW, ::Array<::StringW>*> saShortTimes;

  /// @brief Field iFirstDayOfWeek, offset 0x38, size 0x4
  __declspec(property(get = __get_iFirstDayOfWeek, put = __set_iFirstDayOfWeek)) int32_t iFirstDayOfWeek;

  /// @brief Field iFirstWeekOfYear, offset 0x3c, size 0x4
  __declspec(property(get = __get_iFirstWeekOfYear, put = __set_iFirstWeekOfYear)) int32_t iFirstWeekOfYear;

  /// @brief Field waCalendars, offset 0x40, size 0x8
  __declspec(property(get = __get_waCalendars, put = __set_waCalendars))::ArrayW<int32_t, ::Array<int32_t>*> waCalendars;

  /// @brief Field calendars, offset 0x48, size 0x8
  __declspec(property(get = __get_calendars, put = __set_calendars))::ArrayW<::System::Globalization::CalendarData*, ::Array<::System::Globalization::CalendarData*>*> calendars;

  /// @brief Field sISO639Language, offset 0x50, size 0x8
  __declspec(property(get = __get_sISO639Language, put = __set_sISO639Language))::StringW sISO639Language;

  /// @brief Field sRealName, offset 0x58, size 0x8
  __declspec(property(get = __get_sRealName, put = __set_sRealName))::StringW sRealName;

  /// @brief Field bUseOverrides, offset 0x60, size 0x1
  __declspec(property(get = __get_bUseOverrides, put = __set_bUseOverrides)) bool bUseOverrides;

  /// @brief Field calendarId, offset 0x64, size 0x4
  __declspec(property(get = __get_calendarId, put = __set_calendarId)) int32_t calendarId;

  /// @brief Field numberIndex, offset 0x68, size 0x4
  __declspec(property(get = __get_numberIndex, put = __set_numberIndex)) int32_t numberIndex;

  /// @brief Field iDefaultAnsiCodePage, offset 0x6c, size 0x4
  __declspec(property(get = __get_iDefaultAnsiCodePage, put = __set_iDefaultAnsiCodePage)) int32_t iDefaultAnsiCodePage;

  /// @brief Field iDefaultOemCodePage, offset 0x70, size 0x4
  __declspec(property(get = __get_iDefaultOemCodePage, put = __set_iDefaultOemCodePage)) int32_t iDefaultOemCodePage;

  /// @brief Field iDefaultMacCodePage, offset 0x74, size 0x4
  __declspec(property(get = __get_iDefaultMacCodePage, put = __set_iDefaultMacCodePage)) int32_t iDefaultMacCodePage;

  /// @brief Field iDefaultEbcdicCodePage, offset 0x78, size 0x4
  __declspec(property(get = __get_iDefaultEbcdicCodePage, put = __set_iDefaultEbcdicCodePage)) int32_t iDefaultEbcdicCodePage;

  /// @brief Field isRightToLeft, offset 0x7c, size 0x1
  __declspec(property(get = __get_isRightToLeft, put = __set_isRightToLeft)) bool isRightToLeft;

  /// @brief Field sListSeparator, offset 0x80, size 0x8
  __declspec(property(get = __get_sListSeparator, put = __set_sListSeparator))::StringW sListSeparator;

  /// @brief Field s_Invariant, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Invariant, put = setStaticF_s_Invariant))::System::Globalization::CultureData* s_Invariant;

  __declspec(property(get = get_LongTimes))::ArrayW<::StringW, ::Array<::StringW>*> LongTimes;

  __declspec(property(get = get_ShortTimes))::ArrayW<::StringW, ::Array<::StringW>*> ShortTimes;

  __declspec(property(get = get_SISO639LANGNAME))::StringW SISO639LANGNAME;

  __declspec(property(get = get_IFIRSTDAYOFWEEK)) int32_t IFIRSTDAYOFWEEK;

  __declspec(property(get = get_IFIRSTWEEKOFYEAR)) int32_t IFIRSTWEEKOFYEAR;

  __declspec(property(get = get_SAM1159))::StringW SAM1159;

  __declspec(property(get = get_SPM2359))::StringW SPM2359;

  __declspec(property(get = get_TimeSeparator))::StringW TimeSeparator;

  __declspec(property(get = get_CalendarIds))::ArrayW<int32_t, ::Array<int32_t>*> CalendarIds;

  __declspec(property(get = get_IsInvariantCulture)) bool IsInvariantCulture;

  __declspec(property(get = get_CultureName))::StringW CultureName;

  __declspec(property(get = get_SCOMPAREINFO))::StringW SCOMPAREINFO;

  __declspec(property(get = get_STEXTINFO))::StringW STEXTINFO;

  __declspec(property(get = get_UseUserOverride)) bool UseUserOverride;

  constexpr ::StringW& __get_sAM1159();

  constexpr ::StringW const& __get_sAM1159() const;

  constexpr void __set_sAM1159(::StringW value);

  constexpr ::StringW& __get_sPM2359();

  constexpr ::StringW const& __get_sPM2359() const;

  constexpr void __set_sPM2359(::StringW value);

  constexpr ::StringW& __get_sTimeSeparator();

  constexpr ::StringW const& __get_sTimeSeparator() const;

  constexpr void __set_sTimeSeparator(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_saLongTimes();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_saLongTimes() const;

  constexpr void __set_saLongTimes(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_saShortTimes();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_saShortTimes() const;

  constexpr void __set_saShortTimes(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr int32_t& __get_iFirstDayOfWeek();

  constexpr int32_t const& __get_iFirstDayOfWeek() const;

  constexpr void __set_iFirstDayOfWeek(int32_t value);

  constexpr int32_t& __get_iFirstWeekOfYear();

  constexpr int32_t const& __get_iFirstWeekOfYear() const;

  constexpr void __set_iFirstWeekOfYear(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_waCalendars();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_waCalendars() const;

  constexpr void __set_waCalendars(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<::System::Globalization::CalendarData*, ::Array<::System::Globalization::CalendarData*>*>& __get_calendars();

  constexpr ::ArrayW<::System::Globalization::CalendarData*, ::Array<::System::Globalization::CalendarData*>*> const& __get_calendars() const;

  constexpr void __set_calendars(::ArrayW<::System::Globalization::CalendarData*, ::Array<::System::Globalization::CalendarData*>*> value);

  constexpr ::StringW& __get_sISO639Language();

  constexpr ::StringW const& __get_sISO639Language() const;

  constexpr void __set_sISO639Language(::StringW value);

  constexpr ::StringW& __get_sRealName();

  constexpr ::StringW const& __get_sRealName() const;

  constexpr void __set_sRealName(::StringW value);

  constexpr bool& __get_bUseOverrides();

  constexpr bool const& __get_bUseOverrides() const;

  constexpr void __set_bUseOverrides(bool value);

  constexpr int32_t& __get_calendarId();

  constexpr int32_t const& __get_calendarId() const;

  constexpr void __set_calendarId(int32_t value);

  constexpr int32_t& __get_numberIndex();

  constexpr int32_t const& __get_numberIndex() const;

  constexpr void __set_numberIndex(int32_t value);

  constexpr int32_t& __get_iDefaultAnsiCodePage();

  constexpr int32_t const& __get_iDefaultAnsiCodePage() const;

  constexpr void __set_iDefaultAnsiCodePage(int32_t value);

  constexpr int32_t& __get_iDefaultOemCodePage();

  constexpr int32_t const& __get_iDefaultOemCodePage() const;

  constexpr void __set_iDefaultOemCodePage(int32_t value);

  constexpr int32_t& __get_iDefaultMacCodePage();

  constexpr int32_t const& __get_iDefaultMacCodePage() const;

  constexpr void __set_iDefaultMacCodePage(int32_t value);

  constexpr int32_t& __get_iDefaultEbcdicCodePage();

  constexpr int32_t const& __get_iDefaultEbcdicCodePage() const;

  constexpr void __set_iDefaultEbcdicCodePage(int32_t value);

  constexpr bool& __get_isRightToLeft();

  constexpr bool const& __get_isRightToLeft() const;

  constexpr void __set_isRightToLeft(bool value);

  constexpr ::StringW& __get_sListSeparator();

  constexpr ::StringW const& __get_sListSeparator() const;

  constexpr void __set_sListSeparator(::StringW value);

  static inline void setStaticF_s_Invariant(::System::Globalization::CultureData* value);

  static inline ::System::Globalization::CultureData* getStaticF_s_Invariant();

  static inline ::System::Globalization::CultureData* New_ctor(::StringW name);

  /// @brief Method .ctor, addr 0x256b8f0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_Invariant, addr 0x2567a9c, size 0x3a4, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureData* get_Invariant();

  /// @brief Method GetCultureData, addr 0x256b918, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureData* GetCultureData(::StringW cultureName, bool useUserOverride);

  /// @brief Method GetCultureData, addr 0x256ba04, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureData* GetCultureData(::StringW cultureName, bool useUserOverride, int32_t datetimeIndex, int32_t calendarId, int32_t numberIndex, ::StringW iso2lang,
                                                                     int32_t ansiCodePage, int32_t oemCodePage, int32_t macCodePage, int32_t ebcdicCodePage, bool rightToLeft, ::StringW listSeparator);

  /// @brief Method fill_culture_data, addr 0x256bb24, size 0x4, virtual false, abstract: false, final false
  inline void fill_culture_data(int32_t datetimeIndex);

  /// @brief Method GetCalendar, addr 0x25610b8, size 0x118, virtual false, abstract: false, final false
  inline ::System::Globalization::CalendarData* GetCalendar(int32_t calendarId);

  /// @brief Method get_LongTimes, addr 0x256bb28, size 0x18, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_LongTimes();

  /// @brief Method get_ShortTimes, addr 0x256bb40, size 0x18, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_ShortTimes();

  /// @brief Method get_SISO639LANGNAME, addr 0x256bb58, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SISO639LANGNAME();

  /// @brief Method get_IFIRSTDAYOFWEEK, addr 0x256bb60, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_IFIRSTDAYOFWEEK();

  /// @brief Method get_IFIRSTWEEKOFYEAR, addr 0x256bb68, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_IFIRSTWEEKOFYEAR();

  /// @brief Method get_SAM1159, addr 0x256bb70, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SAM1159();

  /// @brief Method get_SPM2359, addr 0x256bb78, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SPM2359();

  /// @brief Method get_TimeSeparator, addr 0x256bb80, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TimeSeparator();

  /// @brief Method get_CalendarIds, addr 0x256bb88, size 0x1b0, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_CalendarIds();

  /// @brief Method GetCalendarIds, addr 0x256bd38, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Globalization::CalendarId, ::Array<::System::Globalization::CalendarId>*> GetCalendarIds();

  /// @brief Method get_IsInvariantCulture, addr 0x25666f0, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsInvariantCulture();

  /// @brief Method get_CultureName, addr 0x256be10, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CultureName();

  /// @brief Method get_SCOMPAREINFO, addr 0x256be18, size 0x40, virtual false, abstract: false, final false
  inline ::StringW get_SCOMPAREINFO();

  /// @brief Method get_STEXTINFO, addr 0x256be58, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_STEXTINFO();

  /// @brief Method get_UseUserOverride, addr 0x256be60, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseUserOverride();

  /// @brief Method EraNames, addr 0x256be68, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> EraNames(int32_t calendarId);

  /// @brief Method AbbrevEraNames, addr 0x256be84, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> AbbrevEraNames(int32_t calendarId);

  /// @brief Method AbbreviatedEnglishEraNames, addr 0x256bea0, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> AbbreviatedEnglishEraNames(int32_t calendarId);

  /// @brief Method ShortDates, addr 0x256bebc, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> ShortDates(int32_t calendarId);

  /// @brief Method LongDates, addr 0x256bed8, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> LongDates(int32_t calendarId);

  /// @brief Method YearMonths, addr 0x256bef4, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> YearMonths(int32_t calendarId);

  /// @brief Method DayNames, addr 0x256bf10, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> DayNames(int32_t calendarId);

  /// @brief Method AbbreviatedDayNames, addr 0x256bf2c, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> AbbreviatedDayNames(int32_t calendarId);

  /// @brief Method MonthNames, addr 0x256bf48, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> MonthNames(int32_t calendarId);

  /// @brief Method GenitiveMonthNames, addr 0x256bf64, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GenitiveMonthNames(int32_t calendarId);

  /// @brief Method AbbreviatedMonthNames, addr 0x256bf80, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> AbbreviatedMonthNames(int32_t calendarId);

  /// @brief Method AbbreviatedGenitiveMonthNames, addr 0x256bf9c, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> AbbreviatedGenitiveMonthNames(int32_t calendarId);

  /// @brief Method LeapYearMonthNames, addr 0x256bfb8, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> LeapYearMonthNames(int32_t calendarId);

  /// @brief Method MonthDay, addr 0x256bfd4, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW MonthDay(int32_t calendarId);

  /// @brief Method DateSeparator, addr 0x256bff0, size 0xac, virtual false, abstract: false, final false
  inline ::StringW DateSeparator(int32_t calendarId);

  /// @brief Method GetDateSeparator, addr 0x256c09c, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW GetDateSeparator(::StringW format);

  /// @brief Method GetSeparator, addr 0x256c0e4, size 0x104, virtual false, abstract: false, final false
  static inline ::StringW GetSeparator(::StringW format, ::StringW timeParts);

  /// @brief Method IndexOfTimePart, addr 0x256c1e8, size 0xec, virtual false, abstract: false, final false
  static inline int32_t IndexOfTimePart(::StringW format, int32_t startIndex, ::StringW timeParts);

  /// @brief Method UnescapeNlsString, addr 0x256c2d4, size 0x1a4, virtual false, abstract: false, final false
  static inline ::StringW UnescapeNlsString(::StringW str, int32_t start, int32_t end);

  /// @brief Method ReescapeWin32Strings, addr 0x256052c, size 0x4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> ReescapeWin32Strings(::ArrayW<::StringW, ::Array<::StringW>*> array);

  /// @brief Method ReescapeWin32String, addr 0x2560530, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW ReescapeWin32String(::StringW str);

  /// @brief Method strlen, addr 0x256c478, size 0x18, virtual false, abstract: false, final false
  static inline int32_t strlen(::cordl_internals::Ptr<uint8_t> s);

  /// @brief Method idx2string, addr 0x256c490, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW idx2string(::cordl_internals::Ptr<uint8_t> data, int32_t idx);

  /// @brief Method create_group_sizes_array, addr 0x256c4d4, size 0xb4, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> create_group_sizes_array(int32_t gs0, int32_t gs1);

  /// @brief Method GetNFIValues, addr 0x2566558, size 0x198, virtual false, abstract: false, final false
  inline void GetNFIValues(::System::Globalization::NumberFormatInfo* nfi);

  /// @brief Method fill_number_data, addr 0x256c588, size 0x4, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> fill_number_data(int32_t index, ByRef<::System::Globalization::__CultureData__NumberFormatEntryManaged> nfe);

  // Ctor Parameters [CppParam { name: "", ty: "CultureData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CultureData(CultureData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CultureData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CultureData(CultureData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CultureData();

public:
  /// @brief Field sAM1159, offset: 0x10, size: 0x8, def value: None
  ::StringW ___sAM1159;

  /// @brief Field sPM2359, offset: 0x18, size: 0x8, def value: None
  ::StringW ___sPM2359;

  /// @brief Field sTimeSeparator, offset: 0x20, size: 0x8, def value: None
  ::StringW ___sTimeSeparator;

  /// @brief Field saLongTimes, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saLongTimes;

  /// @brief Field saShortTimes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saShortTimes;

  /// @brief Field iFirstDayOfWeek, offset: 0x38, size: 0x4, def value: None
  int32_t ___iFirstDayOfWeek;

  /// @brief Field iFirstWeekOfYear, offset: 0x3c, size: 0x4, def value: None
  int32_t ___iFirstWeekOfYear;

  /// @brief Field waCalendars, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___waCalendars;

  /// @brief Field calendars, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::System::Globalization::CalendarData*, ::Array<::System::Globalization::CalendarData*>*> ___calendars;

  /// @brief Field sISO639Language, offset: 0x50, size: 0x8, def value: None
  ::StringW ___sISO639Language;

  /// @brief Field sRealName, offset: 0x58, size: 0x8, def value: None
  ::StringW ___sRealName;

  /// @brief Field bUseOverrides, offset: 0x60, size: 0x1, def value: None
  bool ___bUseOverrides;

  /// @brief Field calendarId, offset: 0x64, size: 0x4, def value: None
  int32_t ___calendarId;

  /// @brief Field numberIndex, offset: 0x68, size: 0x4, def value: None
  int32_t ___numberIndex;

  /// @brief Field iDefaultAnsiCodePage, offset: 0x6c, size: 0x4, def value: None
  int32_t ___iDefaultAnsiCodePage;

  /// @brief Field iDefaultOemCodePage, offset: 0x70, size: 0x4, def value: None
  int32_t ___iDefaultOemCodePage;

  /// @brief Field iDefaultMacCodePage, offset: 0x74, size: 0x4, def value: None
  int32_t ___iDefaultMacCodePage;

  /// @brief Field iDefaultEbcdicCodePage, offset: 0x78, size: 0x4, def value: None
  int32_t ___iDefaultEbcdicCodePage;

  /// @brief Field isRightToLeft, offset: 0x7c, size: 0x1, def value: None
  bool ___isRightToLeft;

  /// @brief Field sListSeparator, offset: 0x80, size: 0x8, def value: None
  ::StringW ___sListSeparator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::CultureData, 0x88>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___sAM1159) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___sPM2359) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___sTimeSeparator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___saLongTimes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___saShortTimes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___iFirstDayOfWeek) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___iFirstWeekOfYear) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___waCalendars) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___calendars) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___sISO639Language) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___sRealName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___bUseOverrides) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___calendarId) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___numberIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___iDefaultAnsiCodePage) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___iDefaultOemCodePage) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___iDefaultMacCodePage) == 0x74, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___iDefaultEbcdicCodePage) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___isRightToLeft) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___sListSeparator) == 0x80, "Offset mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::CultureData);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CultureData*, "System.Globalization", "CultureData");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__CultureData__NumberFormatEntryManaged, "System.Globalization", "CultureData/NumberFormatEntryManaged");
