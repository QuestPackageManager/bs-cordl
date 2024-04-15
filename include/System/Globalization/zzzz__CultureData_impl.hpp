#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__CultureData_def.hpp"
#include "System/Globalization/zzzz__CalendarData_def.hpp"
#include "System/Globalization/zzzz__CalendarId_def.hpp"
#include "System/Globalization/zzzz__CultureData_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
// Ctor Parameters [CppParam { name: "currency_decimal_digits", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currency_decimal_separator", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "currency_group_separator", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currency_group_sizes0", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "currency_group_sizes1", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currency_negative_pattern", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "currency_positive_pattern", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currency_symbol", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "nan_symbol", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "negative_infinity_symbol", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "negative_sign", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "number_decimal_digits", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "number_decimal_separator", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "number_group_separator", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "number_group_sizes0", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "number_group_sizes1", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "number_negative_pattern", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "per_mille_symbol", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "percent_negative_pattern", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "percent_positive_pattern", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "percent_symbol", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "positive_infinity_symbol", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "positive_sign", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::__CultureData__NumberFormatEntryManaged::__CultureData__NumberFormatEntryManaged(
    int32_t currency_decimal_digits, int32_t currency_decimal_separator, int32_t currency_group_separator, int32_t currency_group_sizes0, int32_t currency_group_sizes1,
    int32_t currency_negative_pattern, int32_t currency_positive_pattern, int32_t currency_symbol, int32_t nan_symbol, int32_t negative_infinity_symbol, int32_t negative_sign,
    int32_t number_decimal_digits, int32_t number_decimal_separator, int32_t number_group_separator, int32_t number_group_sizes0, int32_t number_group_sizes1, int32_t number_negative_pattern,
    int32_t per_mille_symbol, int32_t percent_negative_pattern, int32_t percent_positive_pattern, int32_t percent_symbol, int32_t positive_infinity_symbol, int32_t positive_sign) noexcept {
  this->currency_decimal_digits = currency_decimal_digits;
  this->currency_decimal_separator = currency_decimal_separator;
  this->currency_group_separator = currency_group_separator;
  this->currency_group_sizes0 = currency_group_sizes0;
  this->currency_group_sizes1 = currency_group_sizes1;
  this->currency_negative_pattern = currency_negative_pattern;
  this->currency_positive_pattern = currency_positive_pattern;
  this->currency_symbol = currency_symbol;
  this->nan_symbol = nan_symbol;
  this->negative_infinity_symbol = negative_infinity_symbol;
  this->negative_sign = negative_sign;
  this->number_decimal_digits = number_decimal_digits;
  this->number_decimal_separator = number_decimal_separator;
  this->number_group_separator = number_group_separator;
  this->number_group_sizes0 = number_group_sizes0;
  this->number_group_sizes1 = number_group_sizes1;
  this->number_negative_pattern = number_negative_pattern;
  this->per_mille_symbol = per_mille_symbol;
  this->percent_negative_pattern = percent_negative_pattern;
  this->percent_positive_pattern = percent_positive_pattern;
  this->percent_symbol = percent_symbol;
  this->positive_infinity_symbol = positive_infinity_symbol;
  this->positive_sign = positive_sign;
}
// Ctor Parameters []
constexpr ::System::Globalization::__CultureData__NumberFormatEntryManaged::__CultureData__NumberFormatEntryManaged() {}
//  Writing Method size for method: ::System::Globalization::CultureData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::CultureData::*)(::StringW)>(&::System::Globalization::CultureData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27f0158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_Invariant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureData* (*)()>(&::System::Globalization::CultureData::get_Invariant)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x27ec304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_Invariant",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.GetCultureData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureData* (*)(::StringW, bool)>(&::System::Globalization::CultureData::GetCultureData)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x27f0180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "GetCultureData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.GetCultureData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Globalization::CultureData* (*)(::StringW, bool, int32_t, int32_t, int32_t, ::StringW, int32_t, int32_t, int32_t, int32_t, bool, ::StringW)>(
        &::System::Globalization::CultureData::GetCultureData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x27f026c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "GetCultureData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.fill_culture_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::fill_culture_data)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27f038c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "fill_culture_data", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.GetCalendar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CalendarData* (::System::Globalization::CultureData::*)(int32_t)>(
    &::System::Globalization::CultureData::GetCalendar)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27e5920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "GetCalendar", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_LongTimes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::CultureData::*)()>(
    &::System::Globalization::CultureData::get_LongTimes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27f0390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_LongTimes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_ShortTimes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::CultureData::*)()>(
    &::System::Globalization::CultureData::get_ShortTimes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27f03a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_ShortTimes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_SISO639LANGNAME
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_SISO639LANGNAME)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f03c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(),
                                                                               "get_SISO639LANGNAME", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_IFIRSTDAYOFWEEK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_IFIRSTDAYOFWEEK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f03c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(),
                                                                               "get_IFIRSTDAYOFWEEK", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_IFIRSTWEEKOFYEAR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_IFIRSTWEEKOFYEAR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f03d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(),
                                                                               "get_IFIRSTWEEKOFYEAR", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_SAM1159
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_SAM1159)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f03d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_SAM1159",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_SPM2359
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_SPM2359)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f03e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_SPM2359",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_TimeSeparator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_TimeSeparator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f03e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(),
                                                                               "get_TimeSeparator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_CalendarIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::System::Globalization::CultureData::*)()>(
    &::System::Globalization::CultureData::get_CalendarIds)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x27f03f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_CalendarIds",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.GetCalendarIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Globalization::CalendarId, ::Array<::System::Globalization::CalendarId>*> (
    ::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::GetCalendarIds)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27f05a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "GetCalendarIds",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_IsInvariantCulture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_IsInvariantCulture)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27eaf58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(),
                                                                               "get_IsInvariantCulture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_CultureName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_CultureName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f0678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_CultureName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_SCOMPAREINFO
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_SCOMPAREINFO)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27f0680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_SCOMPAREINFO",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_STEXTINFO
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_STEXTINFO)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f06c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_STEXTINFO",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_UseUserOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_UseUserOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f06c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(),
                                                                               "get_UseUserOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.EraNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::CultureData::*)(int32_t)>(
    &::System::Globalization::CultureData::EraNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27f06d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "EraNames", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.AbbrevEraNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::CultureData::*)(int32_t)>(
    &::System::Globalization::CultureData::AbbrevEraNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27f06ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "AbbrevEraNames", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.AbbreviatedEnglishEraNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::CultureData::*)(int32_t)>(
    &::System::Globalization::CultureData::AbbreviatedEnglishEraNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27f0708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "AbbreviatedEnglishEraNames",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.ShortDates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::CultureData::*)(int32_t)>(
    &::System::Globalization::CultureData::ShortDates)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27f0724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "ShortDates", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.LongDates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::CultureData::*)(int32_t)>(
    &::System::Globalization::CultureData::LongDates)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27f0740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "LongDates", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.YearMonths
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::CultureData::*)(int32_t)>(
    &::System::Globalization::CultureData::YearMonths)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27f075c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "YearMonths", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.DayNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::CultureData::*)(int32_t)>(
    &::System::Globalization::CultureData::DayNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27f0778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "DayNames", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.AbbreviatedDayNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::CultureData::*)(int32_t)>(
    &::System::Globalization::CultureData::AbbreviatedDayNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27f0794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "AbbreviatedDayNames",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.MonthNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::CultureData::*)(int32_t)>(
    &::System::Globalization::CultureData::MonthNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27f07b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "MonthNames", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.GenitiveMonthNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::CultureData::*)(int32_t)>(
    &::System::Globalization::CultureData::GenitiveMonthNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27f07cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "GenitiveMonthNames",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.AbbreviatedMonthNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::CultureData::*)(int32_t)>(
    &::System::Globalization::CultureData::AbbreviatedMonthNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27f07e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "AbbreviatedMonthNames",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.AbbreviatedGenitiveMonthNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::CultureData::*)(int32_t)>(
    &::System::Globalization::CultureData::AbbreviatedGenitiveMonthNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27f0804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "AbbreviatedGenitiveMonthNames",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.LeapYearMonthNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::CultureData::*)(int32_t)>(
    &::System::Globalization::CultureData::LeapYearMonthNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27f0820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "LeapYearMonthNames",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.MonthDay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::MonthDay)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27f083c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "MonthDay", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.DateSeparator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::DateSeparator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x27f0858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "DateSeparator", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.GetDateSeparator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Globalization::CultureData::GetDateSeparator)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x27f0904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "GetDateSeparator", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.GetSeparator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::Globalization::CultureData::GetSeparator)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x27f094c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "GetSeparator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.IndexOfTimePart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t, ::StringW)>(&::System::Globalization::CultureData::IndexOfTimePart)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x27f0a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "IndexOfTimePart", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.UnescapeNlsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int32_t, int32_t)>(&::System::Globalization::CultureData::UnescapeNlsString)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x27f0b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "UnescapeNlsString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.ReescapeWin32Strings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Globalization::CultureData::ReescapeWin32Strings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27e4d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "ReescapeWin32Strings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.ReescapeWin32String
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Globalization::CultureData::ReescapeWin32String)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27e4d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "ReescapeWin32String",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.strlen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::Ptr<uint8_t>)>(&::System::Globalization::CultureData::strlen)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27f0ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "strlen", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.idx2string
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::cordl_internals::Ptr<uint8_t>, int32_t)>(&::System::Globalization::CultureData::idx2string)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27f0cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "idx2string", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.create_group_sizes_array
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::System::Globalization::CultureData::*)(int32_t, int32_t)>(
    &::System::Globalization::CultureData::create_group_sizes_array)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27f0d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "create_group_sizes_array", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.GetNFIValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::CultureData::*)(::System::Globalization::NumberFormatInfo*)>(
    &::System::Globalization::CultureData::GetNFIValues)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x27eadc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "GetNFIValues", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.fill_number_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::cordl_internals::Ptr<uint8_t> (*)(int32_t, ByRef<::System::Globalization::__CultureData__NumberFormatEntryManaged>)>(&::System::Globalization::CultureData::fill_number_data)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27f0df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "fill_number_data", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__CultureData__NumberFormatEntryManaged>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Globalization::CultureData::__cordl_internal_get_sAM1159() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sAM1159;
}
constexpr ::StringW const& System::Globalization::CultureData::__cordl_internal_get_sAM1159() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sAM1159;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_sAM1159(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sAM1159)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::CultureData::__cordl_internal_get_sPM2359() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sPM2359;
}
constexpr ::StringW const& System::Globalization::CultureData::__cordl_internal_get_sPM2359() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sPM2359;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_sPM2359(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sPM2359)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::CultureData::__cordl_internal_get_sTimeSeparator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sTimeSeparator;
}
constexpr ::StringW const& System::Globalization::CultureData::__cordl_internal_get_sTimeSeparator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sTimeSeparator;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_sTimeSeparator(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sTimeSeparator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::CultureData::__cordl_internal_get_saLongTimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saLongTimes;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::CultureData::__cordl_internal_get_saLongTimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saLongTimes;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_saLongTimes(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___saLongTimes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::CultureData::__cordl_internal_get_saShortTimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saShortTimes;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::CultureData::__cordl_internal_get_saShortTimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saShortTimes;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_saShortTimes(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___saShortTimes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Globalization::CultureData::__cordl_internal_get_iFirstDayOfWeek() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iFirstDayOfWeek;
}
constexpr int32_t const& System::Globalization::CultureData::__cordl_internal_get_iFirstDayOfWeek() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iFirstDayOfWeek;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_iFirstDayOfWeek(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iFirstDayOfWeek = value;
}
constexpr int32_t& System::Globalization::CultureData::__cordl_internal_get_iFirstWeekOfYear() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iFirstWeekOfYear;
}
constexpr int32_t const& System::Globalization::CultureData::__cordl_internal_get_iFirstWeekOfYear() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iFirstWeekOfYear;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_iFirstWeekOfYear(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iFirstWeekOfYear = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Globalization::CultureData::__cordl_internal_get_waCalendars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waCalendars;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Globalization::CultureData::__cordl_internal_get_waCalendars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waCalendars;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_waCalendars(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___waCalendars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Globalization::CalendarData*, ::Array<::System::Globalization::CalendarData*>*>& System::Globalization::CultureData::__cordl_internal_get_calendars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calendars;
}
constexpr ::ArrayW<::System::Globalization::CalendarData*, ::Array<::System::Globalization::CalendarData*>*> const& System::Globalization::CultureData::__cordl_internal_get_calendars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calendars;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_calendars(::ArrayW<::System::Globalization::CalendarData*, ::Array<::System::Globalization::CalendarData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___calendars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::CultureData::__cordl_internal_get_sISO639Language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sISO639Language;
}
constexpr ::StringW const& System::Globalization::CultureData::__cordl_internal_get_sISO639Language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sISO639Language;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_sISO639Language(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sISO639Language)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::CultureData::__cordl_internal_get_sRealName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sRealName;
}
constexpr ::StringW const& System::Globalization::CultureData::__cordl_internal_get_sRealName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sRealName;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_sRealName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sRealName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Globalization::CultureData::__cordl_internal_get_bUseOverrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bUseOverrides;
}
constexpr bool const& System::Globalization::CultureData::__cordl_internal_get_bUseOverrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bUseOverrides;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_bUseOverrides(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bUseOverrides = value;
}
constexpr int32_t& System::Globalization::CultureData::__cordl_internal_get_calendarId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calendarId;
}
constexpr int32_t const& System::Globalization::CultureData::__cordl_internal_get_calendarId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calendarId;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_calendarId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___calendarId = value;
}
constexpr int32_t& System::Globalization::CultureData::__cordl_internal_get_numberIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numberIndex;
}
constexpr int32_t const& System::Globalization::CultureData::__cordl_internal_get_numberIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numberIndex;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_numberIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numberIndex = value;
}
constexpr int32_t& System::Globalization::CultureData::__cordl_internal_get_iDefaultAnsiCodePage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iDefaultAnsiCodePage;
}
constexpr int32_t const& System::Globalization::CultureData::__cordl_internal_get_iDefaultAnsiCodePage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iDefaultAnsiCodePage;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_iDefaultAnsiCodePage(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iDefaultAnsiCodePage = value;
}
constexpr int32_t& System::Globalization::CultureData::__cordl_internal_get_iDefaultOemCodePage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iDefaultOemCodePage;
}
constexpr int32_t const& System::Globalization::CultureData::__cordl_internal_get_iDefaultOemCodePage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iDefaultOemCodePage;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_iDefaultOemCodePage(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iDefaultOemCodePage = value;
}
constexpr int32_t& System::Globalization::CultureData::__cordl_internal_get_iDefaultMacCodePage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iDefaultMacCodePage;
}
constexpr int32_t const& System::Globalization::CultureData::__cordl_internal_get_iDefaultMacCodePage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iDefaultMacCodePage;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_iDefaultMacCodePage(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iDefaultMacCodePage = value;
}
constexpr int32_t& System::Globalization::CultureData::__cordl_internal_get_iDefaultEbcdicCodePage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iDefaultEbcdicCodePage;
}
constexpr int32_t const& System::Globalization::CultureData::__cordl_internal_get_iDefaultEbcdicCodePage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iDefaultEbcdicCodePage;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_iDefaultEbcdicCodePage(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iDefaultEbcdicCodePage = value;
}
constexpr bool& System::Globalization::CultureData::__cordl_internal_get_isRightToLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRightToLeft;
}
constexpr bool const& System::Globalization::CultureData::__cordl_internal_get_isRightToLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRightToLeft;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_isRightToLeft(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRightToLeft = value;
}
constexpr ::StringW& System::Globalization::CultureData::__cordl_internal_get_sListSeparator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sListSeparator;
}
constexpr ::StringW const& System::Globalization::CultureData::__cordl_internal_get_sListSeparator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sListSeparator;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_sListSeparator(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sListSeparator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Globalization::CultureData::setStaticF_s_Invariant(::System::Globalization::CultureData* value) {
  ::cordl_internals::setStaticField<::System::Globalization::CultureData*, "s_Invariant", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get>(
      std::forward<::System::Globalization::CultureData*>(value));
}
inline ::System::Globalization::CultureData* System::Globalization::CultureData::getStaticF_s_Invariant() {
  return ::cordl_internals::getStaticField<::System::Globalization::CultureData*, "s_Invariant", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get>();
}
inline ::System::Globalization::CultureData* System::Globalization::CultureData::New_ctor(::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Globalization::CultureData*>(name));
}
inline void System::Globalization::CultureData::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::System::Globalization::CultureData* System::Globalization::CultureData::get_Invariant() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_Invariant",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureData*, false>(nullptr, ___internal_method);
}
inline ::System::Globalization::CultureData* System::Globalization::CultureData::GetCultureData(::StringW cultureName, bool useUserOverride) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "GetCultureData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureData*, false>(nullptr, ___internal_method, cultureName, useUserOverride);
}
inline ::System::Globalization::CultureData* System::Globalization::CultureData::GetCultureData(::StringW cultureName, bool useUserOverride, int32_t datetimeIndex, int32_t calendarId,
                                                                                                int32_t numberIndex, ::StringW iso2lang, int32_t ansiCodePage, int32_t oemCodePage, int32_t macCodePage,
                                                                                                int32_t ebcdicCodePage, bool rightToLeft, ::StringW listSeparator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "GetCultureData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureData*, false>(nullptr, ___internal_method, cultureName, useUserOverride, datetimeIndex, calendarId, numberIndex, iso2lang,
                                                                                           ansiCodePage, oemCodePage, macCodePage, ebcdicCodePage, rightToLeft, listSeparator);
}
inline void System::Globalization::CultureData::fill_culture_data(int32_t datetimeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "fill_culture_data",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, datetimeIndex);
}
inline ::System::Globalization::CalendarData* System::Globalization::CultureData::GetCalendar(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "GetCalendar",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CalendarData*, false>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::CultureData::get_LongTimes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_LongTimes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::CultureData::get_ShortTimes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_ShortTimes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureData::get_SISO639LANGNAME() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(),
                                                                             "get_SISO639LANGNAME", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Globalization::CultureData::get_IFIRSTDAYOFWEEK() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(),
                                                                             "get_IFIRSTDAYOFWEEK", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Globalization::CultureData::get_IFIRSTWEEKOFYEAR() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(),
                                                                             "get_IFIRSTWEEKOFYEAR", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureData::get_SAM1159() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_SAM1159",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureData::get_SPM2359() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_SPM2359",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureData::get_TimeSeparator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_TimeSeparator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Globalization::CultureData::get_CalendarIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_CalendarIds",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Globalization::CalendarId, ::Array<::System::Globalization::CalendarId>*> System::Globalization::CultureData::GetCalendarIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "GetCalendarIds",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Globalization::CalendarId, ::Array<::System::Globalization::CalendarId>*>, false>(this, ___internal_method);
}
inline bool System::Globalization::CultureData::get_IsInvariantCulture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(),
                                                                             "get_IsInvariantCulture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureData::get_CultureName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_CultureName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureData::get_SCOMPAREINFO() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_SCOMPAREINFO",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureData::get_STEXTINFO() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "get_STEXTINFO",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Globalization::CultureData::get_UseUserOverride() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(),
                                                                             "get_UseUserOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::CultureData::EraNames(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "EraNames",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::CultureData::AbbrevEraNames(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "AbbrevEraNames",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::CultureData::AbbreviatedEnglishEraNames(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "AbbreviatedEnglishEraNames",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::CultureData::ShortDates(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "ShortDates",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::CultureData::LongDates(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "LongDates",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::CultureData::YearMonths(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "YearMonths",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::CultureData::DayNames(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "DayNames",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::CultureData::AbbreviatedDayNames(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "AbbreviatedDayNames",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::CultureData::MonthNames(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "MonthNames",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::CultureData::GenitiveMonthNames(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "GenitiveMonthNames",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::CultureData::AbbreviatedMonthNames(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "AbbreviatedMonthNames",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::CultureData::AbbreviatedGenitiveMonthNames(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "AbbreviatedGenitiveMonthNames",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::CultureData::LeapYearMonthNames(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "LeapYearMonthNames",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, calendarId);
}
inline ::StringW System::Globalization::CultureData::MonthDay(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "MonthDay",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, calendarId);
}
inline ::StringW System::Globalization::CultureData::DateSeparator(int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "DateSeparator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, calendarId);
}
inline ::StringW System::Globalization::CultureData::GetDateSeparator(::StringW format) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "GetDateSeparator", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, format);
}
inline ::StringW System::Globalization::CultureData::GetSeparator(::StringW format, ::StringW timeParts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "GetSeparator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, format, timeParts);
}
inline int32_t System::Globalization::CultureData::IndexOfTimePart(::StringW format, int32_t startIndex, ::StringW timeParts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "IndexOfTimePart", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, format, startIndex, timeParts);
}
inline ::StringW System::Globalization::CultureData::UnescapeNlsString(::StringW str, int32_t start, int32_t end) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "UnescapeNlsString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, str, start, end);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::CultureData::ReescapeWin32Strings(::ArrayW<::StringW, ::Array<::StringW>*> array) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "ReescapeWin32Strings", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method, array);
}
inline ::StringW System::Globalization::CultureData::ReescapeWin32String(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "ReescapeWin32String", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, str);
}
inline int32_t System::Globalization::CultureData::strlen(::cordl_internals::Ptr<uint8_t> s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "strlen", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s);
}
inline ::StringW System::Globalization::CultureData::idx2string(::cordl_internals::Ptr<uint8_t> data, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "idx2string", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, data, idx);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Globalization::CultureData::create_group_sizes_array(int32_t gs0, int32_t gs1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "create_group_sizes_array", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method, gs0, gs1);
}
inline void System::Globalization::CultureData::GetNFIValues(::System::Globalization::NumberFormatInfo* nfi) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "GetNFIValues", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nfi);
}
inline ::cordl_internals::Ptr<uint8_t> System::Globalization::CultureData::fill_number_data(int32_t index, ByRef<::System::Globalization::__CultureData__NumberFormatEntryManaged> nfe) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureData*>::get(), "fill_number_data", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__CultureData__NumberFormatEntryManaged>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<uint8_t>, false>(nullptr, ___internal_method, index, nfe);
}
// Ctor Parameters []
constexpr ::System::Globalization::CultureData::CultureData() {}
