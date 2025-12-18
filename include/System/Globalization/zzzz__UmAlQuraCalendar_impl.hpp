#pragma once
// IWYU pragma private; include "System/Globalization/UmAlQuraCalendar.hpp"
#include "System/Globalization/zzzz__Calendar_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/Globalization/zzzz__UmAlQuraCalendar_def.hpp"
#include "System/Globalization/zzzz__UmAlQuraCalendar_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar_DateMapping._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::UmAlQuraCalendar_DateMapping::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::System::Globalization::UmAlQuraCalendar_DateMapping::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a21740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar_DateMapping>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Globalization::UmAlQuraCalendar_DateMapping::_ctor(int32_t MonthsLengthFlags, int32_t GYear, int32_t GMonth, int32_t GDay) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar_DateMapping>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, MonthsLengthFlags, GYear, GMonth, GDay);
}
// Ctor Parameters [CppParam { name: "HijriMonthsLengthFlags", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "GregorianDate", ty: "::System::DateTime", modifiers: "",
// def_value: Some("{}") }]
constexpr ::System::Globalization::UmAlQuraCalendar_DateMapping::UmAlQuraCalendar_DateMapping(int32_t HijriMonthsLengthFlags, ::System::DateTime GregorianDate) noexcept {
  this->HijriMonthsLengthFlags = HijriMonthsLengthFlags;
  this->GregorianDate = GregorianDate;
}
// Ctor Parameters []
constexpr ::System::Globalization::UmAlQuraCalendar_DateMapping::UmAlQuraCalendar_DateMapping() {}
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.InitDateMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Globalization::UmAlQuraCalendar_DateMapping, ::Array<::System::Globalization::UmAlQuraCalendar_DateMapping>*> (*)()>(
        &::System::Globalization::UmAlQuraCalendar::InitDateMapping)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5a1fe4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                               "InitDateMapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_MinSupportedDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Globalization::UmAlQuraCalendar::*)()>(
    &::System::Globalization::UmAlQuraCalendar::get_MinSupportedDateTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a1ffc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_MaxSupportedDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Globalization::UmAlQuraCalendar::*)()>(
    &::System::Globalization::UmAlQuraCalendar::get_MaxSupportedDateTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a2001c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::UmAlQuraCalendar::*)()>(&::System::Globalization::UmAlQuraCalendar::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a20078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_BaseCalendarID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)()>(
    &::System::Globalization::UmAlQuraCalendar::get_BaseCalendarID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a20088;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_ID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)()>(&::System::Globalization::UmAlQuraCalendar::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a20090;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.ConvertHijriToGregorian
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, int32_t, ::ByRef<int32_t>, ::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::System::Globalization::UmAlQuraCalendar::ConvertHijriToGregorian)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5a20098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), "ConvertHijriToGregorian", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetAbsoluteDateUmAlQura
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int32_t, int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::GetAbsoluteDateUmAlQura)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5a201f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), "GetAbsoluteDateUmAlQura", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.CheckTicksRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int64_t)>(&::System::Globalization::UmAlQuraCalendar::CheckTicksRange)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5a202bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), "CheckTicksRange",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.CheckEraRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::System::Globalization::UmAlQuraCalendar::CheckEraRange)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a2049c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), "CheckEraRange",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.CheckYearRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::CheckYearRange)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a2050c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), "CheckYearRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.CheckYearMonthRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::CheckYearMonthRange)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a20644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), "CheckYearMonthRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.ConvertGregorianToHijri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::DateTime, ::ByRef<int32_t>, ::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::System::Globalization::UmAlQuraCalendar::ConvertGregorianToHijri)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5a2071c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), "ConvertGregorianToHijri", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetDatePart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime, int32_t)>(
    &::System::Globalization::UmAlQuraCalendar::GetDatePart)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5a20a0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetDayOfMonth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime)>(
    &::System::Globalization::UmAlQuraCalendar::GetDayOfMonth)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a20b94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetDayOfWeek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DayOfWeek (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime)>(
    &::System::Globalization::UmAlQuraCalendar::GetDayOfWeek)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a20ba8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetDaysInMonth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(int32_t, int32_t, int32_t)>(
    &::System::Globalization::UmAlQuraCalendar::GetDaysInMonth)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a20c54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.RealGetDaysInYear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Globalization::UmAlQuraCalendar::RealGetDaysInYear)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a20d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), "RealGetDaysInYear",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetDaysInYear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(int32_t, int32_t)>(
    &::System::Globalization::UmAlQuraCalendar::GetDaysInYear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a20db0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetEra
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime)>(
    &::System::Globalization::UmAlQuraCalendar::GetEra)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a20e20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_Eras
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::System::Globalization::UmAlQuraCalendar::*)()>(
    &::System::Globalization::UmAlQuraCalendar::get_Eras)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a20ebc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetMonth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime)>(
    &::System::Globalization::UmAlQuraCalendar::GetMonth)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a20f24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetMonthsInYear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(int32_t, int32_t)>(
    &::System::Globalization::UmAlQuraCalendar::GetMonthsInYear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a20f38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetYear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime)>(
    &::System::Globalization::UmAlQuraCalendar::GetYear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a20fa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.IsLeapYear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::UmAlQuraCalendar::*)(int32_t, int32_t)>(
    &::System::Globalization::UmAlQuraCalendar::IsLeapYear)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a20fbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.ToDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Globalization::UmAlQuraCalendar::*)(
    int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::ToDateTime)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5a21038;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_TwoDigitYearMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)()>(
    &::System::Globalization::UmAlQuraCalendar::get_TwoDigitYearMax)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a2126c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.set_TwoDigitYearMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::UmAlQuraCalendar::*)(int32_t)>(
    &::System::Globalization::UmAlQuraCalendar::set_TwoDigitYearMax)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a212b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.ToFourDigitYear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(int32_t)>(
    &::System::Globalization::UmAlQuraCalendar::ToFourDigitYear)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5a213b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 30));
    return ___internal_method;
  }
};
inline void System::Globalization::UmAlQuraCalendar::setStaticF_HijriYearInfo(
    ::ArrayW<::System::Globalization::UmAlQuraCalendar_DateMapping, ::Array<::System::Globalization::UmAlQuraCalendar_DateMapping>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Globalization::UmAlQuraCalendar_DateMapping, ::Array<::System::Globalization::UmAlQuraCalendar_DateMapping>*>, "HijriYearInfo",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get>(
      std::forward<::ArrayW<::System::Globalization::UmAlQuraCalendar_DateMapping, ::Array<::System::Globalization::UmAlQuraCalendar_DateMapping>*>>(value));
}
inline ::ArrayW<::System::Globalization::UmAlQuraCalendar_DateMapping, ::Array<::System::Globalization::UmAlQuraCalendar_DateMapping>*>
System::Globalization::UmAlQuraCalendar::getStaticF_HijriYearInfo() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Globalization::UmAlQuraCalendar_DateMapping, ::Array<::System::Globalization::UmAlQuraCalendar_DateMapping>*>, "HijriYearInfo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get>();
}
inline void System::Globalization::UmAlQuraCalendar::setStaticF_minDate(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "minDate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get>(
      std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::Globalization::UmAlQuraCalendar::getStaticF_minDate() {
  return ::cordl_internals::getStaticField<::System::DateTime, "minDate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get>();
}
inline void System::Globalization::UmAlQuraCalendar::setStaticF_maxDate(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "maxDate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get>(
      std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::Globalization::UmAlQuraCalendar::getStaticF_maxDate() {
  return ::cordl_internals::getStaticField<::System::DateTime, "maxDate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get>();
}
inline ::ArrayW<::System::Globalization::UmAlQuraCalendar_DateMapping, ::Array<::System::Globalization::UmAlQuraCalendar_DateMapping>*> System::Globalization::UmAlQuraCalendar::InitDateMapping() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(),
                                                                             "InitDateMapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Globalization::UmAlQuraCalendar_DateMapping, ::Array<::System::Globalization::UmAlQuraCalendar_DateMapping>*>, false>(
      nullptr, ___internal_method);
}
inline ::System::DateTime System::Globalization::UmAlQuraCalendar::get_MinSupportedDateTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::System::DateTime System::Globalization::UmAlQuraCalendar::get_MaxSupportedDateTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline void System::Globalization::UmAlQuraCalendar::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Globalization::UmAlQuraCalendar::get_BaseCalendarID() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Globalization::UmAlQuraCalendar::get_ID() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Globalization::UmAlQuraCalendar::ConvertHijriToGregorian(int32_t HijriYear, int32_t HijriMonth, int32_t HijriDay, ::ByRef<int32_t> yg, ::ByRef<int32_t> mg, ::ByRef<int32_t> dg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), "ConvertHijriToGregorian", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, HijriYear, HijriMonth, HijriDay, yg, mg, dg);
}
inline int64_t System::Globalization::UmAlQuraCalendar::GetAbsoluteDateUmAlQura(int32_t year, int32_t month, int32_t day) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), "GetAbsoluteDateUmAlQura", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, year, month, day);
}
inline void System::Globalization::UmAlQuraCalendar::CheckTicksRange(int64_t ticks) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), "CheckTicksRange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ticks);
}
inline void System::Globalization::UmAlQuraCalendar::CheckEraRange(int32_t era) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), "CheckEraRange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, era);
}
inline void System::Globalization::UmAlQuraCalendar::CheckYearRange(int32_t year, int32_t era) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), "CheckYearRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, year, era);
}
inline void System::Globalization::UmAlQuraCalendar::CheckYearMonthRange(int32_t year, int32_t month, int32_t era) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), "CheckYearMonthRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, year, month, era);
}
inline void System::Globalization::UmAlQuraCalendar::ConvertGregorianToHijri(::System::DateTime time, ::ByRef<int32_t> HijriYear, ::ByRef<int32_t> HijriMonth, ::ByRef<int32_t> HijriDay) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), "ConvertGregorianToHijri", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, time, HijriYear, HijriMonth, HijriDay);
}
inline int32_t System::Globalization::UmAlQuraCalendar::GetDatePart(::System::DateTime time, int32_t part) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, time, part);
}
inline int32_t System::Globalization::UmAlQuraCalendar::GetDayOfMonth(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, time);
}
inline ::System::DayOfWeek System::Globalization::UmAlQuraCalendar::GetDayOfWeek(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::DayOfWeek, false>(this, ___internal_method, time);
}
inline int32_t System::Globalization::UmAlQuraCalendar::GetDaysInMonth(int32_t year, int32_t month, int32_t era) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, year, month, era);
}
inline int32_t System::Globalization::UmAlQuraCalendar::RealGetDaysInYear(int32_t year) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), "RealGetDaysInYear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, year);
}
inline int32_t System::Globalization::UmAlQuraCalendar::GetDaysInYear(int32_t year, int32_t era) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::UmAlQuraCalendar::GetEra(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, time);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Globalization::UmAlQuraCalendar::get_Eras() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline int32_t System::Globalization::UmAlQuraCalendar::GetMonth(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, time);
}
inline int32_t System::Globalization::UmAlQuraCalendar::GetMonthsInYear(int32_t year, int32_t era) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::UmAlQuraCalendar::GetYear(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, time);
}
inline bool System::Globalization::UmAlQuraCalendar::IsLeapYear(int32_t year, int32_t era) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, year, era);
}
inline ::System::DateTime System::Globalization::UmAlQuraCalendar::ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond,
                                                                              int32_t era) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method, year, month, day, hour, minute, second, millisecond, era);
}
inline int32_t System::Globalization::UmAlQuraCalendar::get_TwoDigitYearMax() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Globalization::UmAlQuraCalendar::set_TwoDigitYearMax(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Globalization::UmAlQuraCalendar::ToFourDigitYear(int32_t year) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, year);
}
inline ::System::Globalization::UmAlQuraCalendar* System::Globalization::UmAlQuraCalendar::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Globalization::UmAlQuraCalendar*>());
}
// Ctor Parameters []
constexpr ::System::Globalization::UmAlQuraCalendar::UmAlQuraCalendar() {}
