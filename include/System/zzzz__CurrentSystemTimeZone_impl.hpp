#pragma once
#include "System/zzzz__TimeZone_impl.hpp"
#include "System/zzzz__CurrentSystemTimeZone_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Globalization/zzzz__DaylightTime_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::CurrentSystemTimeZone._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::CurrentSystemTimeZone::*)()>(&::System::CurrentSystemTimeZone::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x25af790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CurrentSystemTimeZone.GetDaylightChanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::DaylightTime* (::System::CurrentSystemTimeZone::*)(int32_t)>(
    &::System::CurrentSystemTimeZone::GetDaylightChanges)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x25af854;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CurrentSystemTimeZone.CreateDaylightChanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::DaylightTime* (*)(int32_t)>(&::System::CurrentSystemTimeZone::CreateDaylightChanges)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x25afb10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(), "CreateDaylightChanges", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CurrentSystemTimeZone.GetUtcOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::CurrentSystemTimeZone::*)(::System::DateTime)>(
    &::System::CurrentSystemTimeZone::GetUtcOffset)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x25afd9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CurrentSystemTimeZone.GetTimeZoneData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(int32_t, ByRef<::ArrayW<int64_t, ::Array<int64_t>*>>, ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>, ByRef<bool>)>(&::System::CurrentSystemTimeZone::GetTimeZoneData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25afe78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(), "GetTimeZoneData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int64_t, ::Array<int64_t>*>>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CurrentSystemTimeZone.GetCachedDaylightChanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::DaylightTime* (::System::CurrentSystemTimeZone::*)(int32_t)>(
    &::System::CurrentSystemTimeZone::GetCachedDaylightChanges)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x25af924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(), "GetCachedDaylightChanges",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int64_t& System::CurrentSystemTimeZone::__cordl_internal_get_m_ticksOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ticksOffset;
}
constexpr int64_t const& System::CurrentSystemTimeZone::__cordl_internal_get_m_ticksOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ticksOffset;
}
constexpr void System::CurrentSystemTimeZone::__cordl_internal_set_m_ticksOffset(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ticksOffset = value;
}
constexpr ::StringW& System::CurrentSystemTimeZone::__cordl_internal_get_m_standardName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_standardName;
}
constexpr ::StringW const& System::CurrentSystemTimeZone::__cordl_internal_get_m_standardName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_standardName;
}
constexpr void System::CurrentSystemTimeZone::__cordl_internal_set_m_standardName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_standardName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::CurrentSystemTimeZone::__cordl_internal_get_m_daylightName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_daylightName;
}
constexpr ::StringW const& System::CurrentSystemTimeZone::__cordl_internal_get_m_daylightName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_daylightName;
}
constexpr void System::CurrentSystemTimeZone::__cordl_internal_set_m_daylightName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_daylightName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::CurrentSystemTimeZone::__cordl_internal_get_m_CachedDaylightChanges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedDaylightChanges;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::CurrentSystemTimeZone::__cordl_internal_get_m_CachedDaylightChanges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedDaylightChanges;
}
constexpr void System::CurrentSystemTimeZone::__cordl_internal_set_m_CachedDaylightChanges(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CachedDaylightChanges)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::CurrentSystemTimeZone* System::CurrentSystemTimeZone::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::CurrentSystemTimeZone*>());
}
inline void System::CurrentSystemTimeZone::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Globalization::DaylightTime* System::CurrentSystemTimeZone::GetDaylightChanges(int32_t year) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DaylightTime*, false>(this, ___internal_method, year);
}
inline ::System::Globalization::DaylightTime* System::CurrentSystemTimeZone::CreateDaylightChanges(int32_t year) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(), "CreateDaylightChanges",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DaylightTime*, false>(nullptr, ___internal_method, year);
}
inline ::System::TimeSpan System::CurrentSystemTimeZone::GetUtcOffset(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method, time);
}
inline bool System::CurrentSystemTimeZone::GetTimeZoneData(int32_t year, ByRef<::ArrayW<int64_t, ::Array<int64_t>*>> data, ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> names,
                                                           ByRef<bool> daylight_inverted) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(), "GetTimeZoneData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int64_t, ::Array<int64_t>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, year, data, names, daylight_inverted);
}
inline ::System::Globalization::DaylightTime* System::CurrentSystemTimeZone::GetCachedDaylightChanges(int32_t year) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(), "GetCachedDaylightChanges",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DaylightTime*, false>(this, ___internal_method, year);
}
// Ctor Parameters []
constexpr ::System::CurrentSystemTimeZone::CurrentSystemTimeZone() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
