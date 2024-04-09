#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeZone_def.hpp"
#include "System/Globalization/zzzz__DaylightTime_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::TimeZone.get_InternalSyncObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)()>(&::System::TimeZone::get_InternalSyncObject)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x28474c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get(), "get_InternalSyncObject",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZone._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TimeZone::*)()>(&::System::TimeZone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2847568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZone.get_CurrentTimeZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZone* (*)()>(&::System::TimeZone::get_CurrentTimeZone)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2847570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get(), "get_CurrentTimeZone",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZone.GetUtcOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::TimeZone::*)(::System::DateTime)>(&::System::TimeZone::GetUtcOffset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZone.GetDaylightChanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::DaylightTime* (::System::TimeZone::*)(int32_t)>(&::System::TimeZone::GetDaylightChanges)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZone.CalculateUtcOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::Globalization::DaylightTime*)>(
    &::System::TimeZone::CalculateUtcOffset)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x28476dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get(), "CalculateUtcOffset", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DaylightTime*>::get() })));
    return ___internal_method;
  }
};
inline void System::TimeZone::setStaticF_currentTimeZone(::System::TimeZone* value) {
  ::cordl_internals::setStaticField<::System::TimeZone*, "currentTimeZone", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get>(std::forward<::System::TimeZone*>(value));
}
inline ::System::TimeZone* System::TimeZone::getStaticF_currentTimeZone() {
  return ::cordl_internals::getStaticField<::System::TimeZone*, "currentTimeZone", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get>();
}
inline void System::TimeZone::setStaticF_s_InternalSyncObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::TimeZone::getStaticF_s_InternalSyncObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get>();
}
inline ::System::Object* System::TimeZone::get_InternalSyncObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get(), "get_InternalSyncObject",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method);
}
inline ::System::TimeZone* System::TimeZone::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::TimeZone*>());
}
inline void System::TimeZone::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::TimeZone* System::TimeZone::get_CurrentTimeZone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get(), "get_CurrentTimeZone",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZone*, false>(nullptr, ___internal_method);
}
inline ::System::TimeSpan System::TimeZone::GetUtcOffset(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method, time);
}
inline ::System::Globalization::DaylightTime* System::TimeZone::GetDaylightChanges(int32_t year) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DaylightTime*, false>(this, ___internal_method, year);
}
inline ::System::TimeSpan System::TimeZone::CalculateUtcOffset(::System::DateTime time, ::System::Globalization::DaylightTime* daylightTimes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZone*>::get(), "CalculateUtcOffset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DaylightTime*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, time, daylightTimes);
}
// Ctor Parameters []
constexpr ::System::TimeZone::TimeZone() {}
