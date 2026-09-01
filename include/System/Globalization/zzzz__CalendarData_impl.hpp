#pragma once
// IWYU pragma private; include "System\Globalization\CalendarData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__CalendarData_def.hpp"
//  Writing Method size for method: ::System::Globalization::CalendarData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CalendarData::*)()>(&::System::Globalization::CalendarData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bc57d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CalendarData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CalendarData::*)(::StringW, int32_t, bool)>(&::System::Globalization::CalendarData::_ctor)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x5bc652c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CalendarData.InitializeEraNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CalendarData::*)(::StringW, int32_t)>(&::System::Globalization::CalendarData::InitializeEraNames)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x5bc6adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(), { "InitializeEraNames", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CalendarData.GetJapaneseEraNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::System::Globalization::CalendarData::GetJapaneseEraNames)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5bc72c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(), { "GetJapaneseEraNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CalendarData.GetJapaneseEnglishEraNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::System::Globalization::CalendarData::GetJapaneseEnglishEraNames)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5bc71cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(), { "GetJapaneseEnglishEraNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CalendarData.InitializeAbbreviatedEraNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CalendarData::*)(::StringW, int32_t)>(&::System::Globalization::CalendarData::InitializeAbbreviatedEraNames)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5bc6ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(),
                                                                                           { "InitializeAbbreviatedEraNames", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CalendarData.GetCalendarData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CalendarData* (*)(int32_t)>(&::System::Globalization::CalendarData::GetCalendarData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bc50e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(), { "GetCalendarData", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CalendarData.CalendarIdToCultureName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::System::Globalization::CalendarData::CalendarIdToCultureName)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5bc756c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(), { "CalendarIdToCultureName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CalendarData.nativeGetTwoDigitYearMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Globalization::CalendarData::nativeGetTwoDigitYearMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bc57c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(), { "nativeGetTwoDigitYearMax", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CalendarData.nativeGetCalendarData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Globalization::CalendarData*, ::StringW, int32_t)>(&::System::Globalization::CalendarData::nativeGetCalendarData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5bc6a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(),
                                         { "nativeGetCalendarData", {}, { ::i2c::type_of<::System::Globalization::CalendarData*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CalendarData.fill_calendar_data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CalendarData::*)(::StringW, int32_t)>(&::System::Globalization::CalendarData::fill_calendar_data)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bc7688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(), { "fill_calendar_data", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Globalization::CalendarData::__cordl_internal_get_sNativeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sNativeName;
}
constexpr ::StringW const& System::Globalization::CalendarData::__cordl_internal_get_sNativeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sNativeName;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_sNativeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sNativeName = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::CalendarData::__cordl_internal_get_saShortDates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saShortDates;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::CalendarData::__cordl_internal_get_saShortDates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saShortDates;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_saShortDates(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saShortDates = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::CalendarData::__cordl_internal_get_saYearMonths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saYearMonths;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::CalendarData::__cordl_internal_get_saYearMonths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saYearMonths;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_saYearMonths(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saYearMonths = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::CalendarData::__cordl_internal_get_saLongDates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saLongDates;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::CalendarData::__cordl_internal_get_saLongDates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saLongDates;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_saLongDates(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saLongDates = value;
}
constexpr ::StringW& System::Globalization::CalendarData::__cordl_internal_get_sMonthDay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sMonthDay;
}
constexpr ::StringW const& System::Globalization::CalendarData::__cordl_internal_get_sMonthDay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sMonthDay;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_sMonthDay(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sMonthDay = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::CalendarData::__cordl_internal_get_saEraNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saEraNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::CalendarData::__cordl_internal_get_saEraNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saEraNames;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_saEraNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saEraNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::CalendarData::__cordl_internal_get_saAbbrevEraNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saAbbrevEraNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::CalendarData::__cordl_internal_get_saAbbrevEraNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saAbbrevEraNames;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_saAbbrevEraNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saAbbrevEraNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::CalendarData::__cordl_internal_get_saAbbrevEnglishEraNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saAbbrevEnglishEraNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::CalendarData::__cordl_internal_get_saAbbrevEnglishEraNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saAbbrevEnglishEraNames;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_saAbbrevEnglishEraNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saAbbrevEnglishEraNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::CalendarData::__cordl_internal_get_saDayNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saDayNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::CalendarData::__cordl_internal_get_saDayNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saDayNames;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_saDayNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saDayNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::CalendarData::__cordl_internal_get_saAbbrevDayNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saAbbrevDayNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::CalendarData::__cordl_internal_get_saAbbrevDayNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saAbbrevDayNames;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_saAbbrevDayNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saAbbrevDayNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::CalendarData::__cordl_internal_get_saSuperShortDayNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saSuperShortDayNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::CalendarData::__cordl_internal_get_saSuperShortDayNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saSuperShortDayNames;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_saSuperShortDayNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saSuperShortDayNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::CalendarData::__cordl_internal_get_saMonthNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saMonthNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::CalendarData::__cordl_internal_get_saMonthNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saMonthNames;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_saMonthNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saMonthNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::CalendarData::__cordl_internal_get_saAbbrevMonthNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saAbbrevMonthNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::CalendarData::__cordl_internal_get_saAbbrevMonthNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saAbbrevMonthNames;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_saAbbrevMonthNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saAbbrevMonthNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::CalendarData::__cordl_internal_get_saMonthGenitiveNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saMonthGenitiveNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::CalendarData::__cordl_internal_get_saMonthGenitiveNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saMonthGenitiveNames;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_saMonthGenitiveNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saMonthGenitiveNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::CalendarData::__cordl_internal_get_saAbbrevMonthGenitiveNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saAbbrevMonthGenitiveNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::CalendarData::__cordl_internal_get_saAbbrevMonthGenitiveNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saAbbrevMonthGenitiveNames;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_saAbbrevMonthGenitiveNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saAbbrevMonthGenitiveNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::CalendarData::__cordl_internal_get_saLeapYearMonthNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saLeapYearMonthNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::CalendarData::__cordl_internal_get_saLeapYearMonthNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saLeapYearMonthNames;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_saLeapYearMonthNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saLeapYearMonthNames = value;
}
constexpr int32_t& System::Globalization::CalendarData::__cordl_internal_get_iTwoDigitYearMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iTwoDigitYearMax;
}
constexpr int32_t const& System::Globalization::CalendarData::__cordl_internal_get_iTwoDigitYearMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iTwoDigitYearMax;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_iTwoDigitYearMax(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iTwoDigitYearMax = value;
}
constexpr int32_t& System::Globalization::CalendarData::__cordl_internal_get_iCurrentEra() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iCurrentEra;
}
constexpr int32_t const& System::Globalization::CalendarData::__cordl_internal_get_iCurrentEra() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iCurrentEra;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_iCurrentEra(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iCurrentEra = value;
}
constexpr bool& System::Globalization::CalendarData::__cordl_internal_get_bUseUserOverrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bUseUserOverrides;
}
constexpr bool const& System::Globalization::CalendarData::__cordl_internal_get_bUseUserOverrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bUseUserOverrides;
}
constexpr void System::Globalization::CalendarData::__cordl_internal_set_bUseUserOverrides(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bUseUserOverrides = value;
}
inline void System::Globalization::CalendarData::setStaticF_Invariant(::System::Globalization::CalendarData* value) {
  ::cordl_internals::setStaticField<::System::Globalization::CalendarData*, "Invariant", ::System::Globalization::CalendarData*>(std::forward<::System::Globalization::CalendarData*>(value));
}
inline ::System::Globalization::CalendarData* System::Globalization::CalendarData::getStaticF_Invariant() {
  return ::cordl_internals::getStaticField<::System::Globalization::CalendarData*, "Invariant", ::System::Globalization::CalendarData*>();
}
inline void System::Globalization::CalendarData::setStaticF_HEBREW_MONTH_NAMES(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "HEBREW_MONTH_NAMES", ::System::Globalization::CalendarData*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Globalization::CalendarData::getStaticF_HEBREW_MONTH_NAMES() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "HEBREW_MONTH_NAMES", ::System::Globalization::CalendarData*>();
}
inline void System::Globalization::CalendarData::setStaticF_HEBREW_LEAP_MONTH_NAMES(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "HEBREW_LEAP_MONTH_NAMES", ::System::Globalization::CalendarData*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Globalization::CalendarData::getStaticF_HEBREW_LEAP_MONTH_NAMES() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "HEBREW_LEAP_MONTH_NAMES", ::System::Globalization::CalendarData*>();
}
inline void System::Globalization::CalendarData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Globalization::CalendarData::_ctor(::StringW localeName, int32_t calendarId, bool bUseUserOverrides) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localeName, calendarId, bUseUserOverrides);
}
inline void System::Globalization::CalendarData::InitializeEraNames(::StringW localeName, int32_t calendarId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(), { "InitializeEraNames", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localeName, calendarId);
}
inline ::ArrayW<::StringW> System::Globalization::CalendarData::GetJapaneseEraNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(), { "GetJapaneseEraNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::CalendarData::GetJapaneseEnglishEraNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(), { "GetJapaneseEnglishEraNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline void System::Globalization::CalendarData::InitializeAbbreviatedEraNames(::StringW localeName, int32_t calendarId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(),
                                                                                         { "InitializeAbbreviatedEraNames", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localeName, calendarId);
}
inline ::System::Globalization::CalendarData* System::Globalization::CalendarData::GetCalendarData(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(), { "GetCalendarData", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CalendarData*>(nullptr, ___internal_method, calendarId);
}
inline ::StringW System::Globalization::CalendarData::CalendarIdToCultureName(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(), { "CalendarIdToCultureName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, calendarId);
}
inline int32_t System::Globalization::CalendarData::nativeGetTwoDigitYearMax(int32_t calID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(), { "nativeGetTwoDigitYearMax", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, calID);
}
inline bool System::Globalization::CalendarData::nativeGetCalendarData(::System::Globalization::CalendarData* data, ::StringW localeName, int32_t calendarId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(),
                                              { "nativeGetCalendarData", {}, { ::i2c::type_of<::System::Globalization::CalendarData*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data, localeName, calendarId);
}
inline bool System::Globalization::CalendarData::fill_calendar_data(::StringW localeName, int32_t datetimeIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CalendarData*>(), { "fill_calendar_data", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localeName, datetimeIndex);
}
inline ::System::Globalization::CalendarData* System::Globalization::CalendarData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CalendarData*>());
}
inline ::System::Globalization::CalendarData* System::Globalization::CalendarData::New_ctor(::StringW localeName, int32_t calendarId, bool bUseUserOverrides) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CalendarData*>(localeName, calendarId, bUseUserOverrides));
}
// Ctor Parameters []
constexpr ::System::Globalization::CalendarData::CalendarData() {}
