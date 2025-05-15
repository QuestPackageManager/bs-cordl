#pragma once
// IWYU pragma private; include "System/Globalization/CalendarData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CalendarData)
// Forward declare root types
namespace System::Globalization {
class CalendarData;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::CalendarData);
// Dependencies System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.CalendarData
class CORDL_TYPE CalendarData : public ::System::Object {
public:
  // Declarations
  /// @brief Field HEBREW_LEAP_MONTH_NAMES, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HEBREW_LEAP_MONTH_NAMES, put = setStaticF_HEBREW_LEAP_MONTH_NAMES)) ::ArrayW<::StringW, ::Array<::StringW>*> HEBREW_LEAP_MONTH_NAMES;

  /// @brief Field HEBREW_MONTH_NAMES, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HEBREW_MONTH_NAMES, put = setStaticF_HEBREW_MONTH_NAMES)) ::ArrayW<::StringW, ::Array<::StringW>*> HEBREW_MONTH_NAMES;

  /// @brief Field Invariant, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Invariant, put = setStaticF_Invariant)) ::System::Globalization::CalendarData* Invariant;

  /// @brief Field bUseUserOverrides, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_bUseUserOverrides, put = __cordl_internal_set_bUseUserOverrides)) bool bUseUserOverrides;

  /// @brief Field iCurrentEra, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_iCurrentEra, put = __cordl_internal_set_iCurrentEra)) int32_t iCurrentEra;

  /// @brief Field iTwoDigitYearMax, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_iTwoDigitYearMax, put = __cordl_internal_set_iTwoDigitYearMax)) int32_t iTwoDigitYearMax;

  /// @brief Field sMonthDay, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_sMonthDay, put = __cordl_internal_set_sMonthDay)) ::StringW sMonthDay;

  /// @brief Field sNativeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sNativeName, put = __cordl_internal_set_sNativeName)) ::StringW sNativeName;

  /// @brief Field saAbbrevDayNames, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_saAbbrevDayNames, put = __cordl_internal_set_saAbbrevDayNames)) ::ArrayW<::StringW, ::Array<::StringW>*> saAbbrevDayNames;

  /// @brief Field saAbbrevEnglishEraNames, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_saAbbrevEnglishEraNames, put = __cordl_internal_set_saAbbrevEnglishEraNames)) ::ArrayW<::StringW, ::Array<::StringW>*> saAbbrevEnglishEraNames;

  /// @brief Field saAbbrevEraNames, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_saAbbrevEraNames, put = __cordl_internal_set_saAbbrevEraNames)) ::ArrayW<::StringW, ::Array<::StringW>*> saAbbrevEraNames;

  /// @brief Field saAbbrevMonthGenitiveNames, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_saAbbrevMonthGenitiveNames, put = __cordl_internal_set_saAbbrevMonthGenitiveNames)) ::ArrayW<::StringW, ::Array<::StringW>*>
      saAbbrevMonthGenitiveNames;

  /// @brief Field saAbbrevMonthNames, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_saAbbrevMonthNames, put = __cordl_internal_set_saAbbrevMonthNames)) ::ArrayW<::StringW, ::Array<::StringW>*> saAbbrevMonthNames;

  /// @brief Field saDayNames, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_saDayNames, put = __cordl_internal_set_saDayNames)) ::ArrayW<::StringW, ::Array<::StringW>*> saDayNames;

  /// @brief Field saEraNames, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_saEraNames, put = __cordl_internal_set_saEraNames)) ::ArrayW<::StringW, ::Array<::StringW>*> saEraNames;

  /// @brief Field saLeapYearMonthNames, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_saLeapYearMonthNames, put = __cordl_internal_set_saLeapYearMonthNames)) ::ArrayW<::StringW, ::Array<::StringW>*> saLeapYearMonthNames;

  /// @brief Field saLongDates, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_saLongDates, put = __cordl_internal_set_saLongDates)) ::ArrayW<::StringW, ::Array<::StringW>*> saLongDates;

  /// @brief Field saMonthGenitiveNames, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_saMonthGenitiveNames, put = __cordl_internal_set_saMonthGenitiveNames)) ::ArrayW<::StringW, ::Array<::StringW>*> saMonthGenitiveNames;

  /// @brief Field saMonthNames, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_saMonthNames, put = __cordl_internal_set_saMonthNames)) ::ArrayW<::StringW, ::Array<::StringW>*> saMonthNames;

  /// @brief Field saShortDates, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_saShortDates, put = __cordl_internal_set_saShortDates)) ::ArrayW<::StringW, ::Array<::StringW>*> saShortDates;

  /// @brief Field saSuperShortDayNames, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_saSuperShortDayNames, put = __cordl_internal_set_saSuperShortDayNames)) ::ArrayW<::StringW, ::Array<::StringW>*> saSuperShortDayNames;

  /// @brief Field saYearMonths, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_saYearMonths, put = __cordl_internal_set_saYearMonths)) ::ArrayW<::StringW, ::Array<::StringW>*> saYearMonths;

  /// @brief Method CalendarIdToCultureName, addr 0x3d9d848, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW CalendarIdToCultureName(int32_t calendarId);

  /// @brief Method GetCalendarData, addr 0x3d9b558, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Globalization::CalendarData* GetCalendarData(int32_t calendarId);

  /// @brief Method GetJapaneseEnglishEraNames, addr 0x3d9d4d8, size 0xe4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetJapaneseEnglishEraNames();

  /// @brief Method GetJapaneseEraNames, addr 0x3d9d5bc, size 0xe4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetJapaneseEraNames();

  /// @brief Method InitializeAbbreviatedEraNames, addr 0x3d9d21c, size 0x2bc, virtual false, abstract: false, final false
  inline void InitializeAbbreviatedEraNames(::StringW localeName, int32_t calendarId);

  /// @brief Method InitializeEraNames, addr 0x3d9ce50, size 0x3cc, virtual false, abstract: false, final false
  inline void InitializeEraNames(::StringW localeName, int32_t calendarId);

  static inline ::System::Globalization::CalendarData* New_ctor();

  static inline ::System::Globalization::CalendarData* New_ctor(::StringW localeName, int32_t calendarId, bool bUseUserOverrides);

  constexpr bool const& __cordl_internal_get_bUseUserOverrides() const;

  constexpr bool& __cordl_internal_get_bUseUserOverrides();

  constexpr int32_t const& __cordl_internal_get_iCurrentEra() const;

  constexpr int32_t& __cordl_internal_get_iCurrentEra();

  constexpr int32_t const& __cordl_internal_get_iTwoDigitYearMax() const;

  constexpr int32_t& __cordl_internal_get_iTwoDigitYearMax();

  constexpr ::StringW const& __cordl_internal_get_sMonthDay() const;

  constexpr ::StringW& __cordl_internal_get_sMonthDay();

  constexpr ::StringW const& __cordl_internal_get_sNativeName() const;

  constexpr ::StringW& __cordl_internal_get_sNativeName();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_saAbbrevDayNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_saAbbrevDayNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_saAbbrevEnglishEraNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_saAbbrevEnglishEraNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_saAbbrevEraNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_saAbbrevEraNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_saAbbrevMonthGenitiveNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_saAbbrevMonthGenitiveNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_saAbbrevMonthNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_saAbbrevMonthNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_saDayNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_saDayNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_saEraNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_saEraNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_saLeapYearMonthNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_saLeapYearMonthNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_saLongDates() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_saLongDates();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_saMonthGenitiveNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_saMonthGenitiveNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_saMonthNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_saMonthNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_saShortDates() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_saShortDates();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_saSuperShortDayNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_saSuperShortDayNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_saYearMonths() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_saYearMonths();

  constexpr void __cordl_internal_set_bUseUserOverrides(bool value);

  constexpr void __cordl_internal_set_iCurrentEra(int32_t value);

  constexpr void __cordl_internal_set_iTwoDigitYearMax(int32_t value);

  constexpr void __cordl_internal_set_sMonthDay(::StringW value);

  constexpr void __cordl_internal_set_sNativeName(::StringW value);

  constexpr void __cordl_internal_set_saAbbrevDayNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_saAbbrevEnglishEraNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_saAbbrevEraNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_saAbbrevMonthGenitiveNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_saAbbrevMonthNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_saDayNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_saEraNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_saLeapYearMonthNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_saLongDates(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_saMonthGenitiveNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_saMonthNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_saShortDates(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_saSuperShortDayNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_saYearMonths(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x3d9bc44, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d9c89c, size 0x4f4, virtual false, abstract: false, final false
  inline void _ctor(::StringW localeName, int32_t calendarId, bool bUseUserOverrides);

  /// @brief Method fill_calendar_data, addr 0x3d9da28, size 0x4, virtual false, abstract: false, final false
  inline bool fill_calendar_data(::StringW localeName, int32_t datetimeIndex);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_HEBREW_LEAP_MONTH_NAMES();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_HEBREW_MONTH_NAMES();

  static inline ::System::Globalization::CalendarData* getStaticF_Invariant();

  /// @brief Method nativeGetCalendarData, addr 0x3d9cd90, size 0xb8, virtual false, abstract: false, final false
  static inline bool nativeGetCalendarData(::System::Globalization::CalendarData* data, ::StringW localeName, int32_t calendarId);

  /// @brief Method nativeGetTwoDigitYearMax, addr 0x3d9bc3c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t nativeGetTwoDigitYearMax(int32_t calID);

  static inline void setStaticF_HEBREW_LEAP_MONTH_NAMES(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_HEBREW_MONTH_NAMES(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_Invariant(::System::Globalization::CalendarData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CalendarData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CalendarData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CalendarData(CalendarData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CalendarData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CalendarData(CalendarData const&) = delete;

  /// @brief Field MAX_CALENDARS offset 0xffffffff size 0x4
  static constexpr int32_t MAX_CALENDARS{ static_cast<int32_t>(0x17) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3703 };

  /// @brief Field sNativeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___sNativeName;

  /// @brief Field saShortDates, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saShortDates;

  /// @brief Field saYearMonths, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saYearMonths;

  /// @brief Field saLongDates, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saLongDates;

  /// @brief Field sMonthDay, offset: 0x30, size: 0x8, def value: None
  ::StringW ___sMonthDay;

  /// @brief Field saEraNames, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saEraNames;

  /// @brief Field saAbbrevEraNames, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saAbbrevEraNames;

  /// @brief Field saAbbrevEnglishEraNames, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saAbbrevEnglishEraNames;

  /// @brief Field saDayNames, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saDayNames;

  /// @brief Field saAbbrevDayNames, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saAbbrevDayNames;

  /// @brief Field saSuperShortDayNames, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saSuperShortDayNames;

  /// @brief Field saMonthNames, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saMonthNames;

  /// @brief Field saAbbrevMonthNames, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saAbbrevMonthNames;

  /// @brief Field saMonthGenitiveNames, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saMonthGenitiveNames;

  /// @brief Field saAbbrevMonthGenitiveNames, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saAbbrevMonthGenitiveNames;

  /// @brief Field saLeapYearMonthNames, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saLeapYearMonthNames;

  /// @brief Field iTwoDigitYearMax, offset: 0x90, size: 0x4, def value: None
  int32_t ___iTwoDigitYearMax;

  /// @brief Field iCurrentEra, offset: 0x94, size: 0x4, def value: None
  int32_t ___iCurrentEra;

  /// @brief Field bUseUserOverrides, offset: 0x98, size: 0x1, def value: None
  bool ___bUseUserOverrides;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::CalendarData, ___sNativeName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___saShortDates) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___saYearMonths) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___saLongDates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___sMonthDay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___saEraNames) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___saAbbrevEraNames) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___saAbbrevEnglishEraNames) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___saDayNames) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___saAbbrevDayNames) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___saSuperShortDayNames) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___saMonthNames) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___saAbbrevMonthNames) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___saMonthGenitiveNames) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___saAbbrevMonthGenitiveNames) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___saLeapYearMonthNames) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___iTwoDigitYearMax) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___iCurrentEra) == 0x94, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CalendarData, ___bUseUserOverrides) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::CalendarData, 0xa0>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::CalendarData);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CalendarData*, "System.Globalization", "CalendarData");
