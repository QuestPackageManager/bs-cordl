#pragma once
// IWYU pragma private; include "BeatGames/Analytics/AnalyticsEventsDispatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatGames/Analytics/zzzz__AnalyticsEventsDispatcher_def.hpp"
#include "BeatGames/Analytics/Events/zzzz__SessionEventSender_def.hpp"
#include "BeatGames/Analytics/Events/zzzz__TelemetryEventSender_def.hpp"
#include "BeatGames/Analytics/zzzz__NavigationEventSender_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatGames::Analytics::AnalyticsEventsDispatcher.get_Navigation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatGames::Analytics::NavigationEventSender* (::BeatGames::Analytics::AnalyticsEventsDispatcher::*)()>(
    &::BeatGames::Analytics::AnalyticsEventsDispatcher::get_Navigation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3190e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::AnalyticsEventsDispatcher*>::get(),
                                                                               "get_Navigation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::AnalyticsEventsDispatcher.get_Session
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatGames::Analytics::Events::SessionEventSender* (::BeatGames::Analytics::AnalyticsEventsDispatcher::*)()>(
    &::BeatGames::Analytics::AnalyticsEventsDispatcher::get_Session)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3190e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::AnalyticsEventsDispatcher*>::get(),
                                                                               "get_Session", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::AnalyticsEventsDispatcher.get_Telemetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatGames::Analytics::Events::TelemetryEventSender* (::BeatGames::Analytics::AnalyticsEventsDispatcher::*)()>(
    &::BeatGames::Analytics::AnalyticsEventsDispatcher::get_Telemetry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3190e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::AnalyticsEventsDispatcher*>::get(),
                                                                               "get_Telemetry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::AnalyticsEventsDispatcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::AnalyticsEventsDispatcher::*)(::OSCE::Analytics::AnalyticsManager*, ::StringW)>(
    &::BeatGames::Analytics::AnalyticsEventsDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3190e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::AnalyticsEventsDispatcher*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatGames::Analytics::NavigationEventSender*& BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_get__navigationEventSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____navigationEventSender;
}
constexpr ::BeatGames::Analytics::NavigationEventSender* const& BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_get__navigationEventSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____navigationEventSender;
}
constexpr void BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_set__navigationEventSender(::BeatGames::Analytics::NavigationEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____navigationEventSender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatGames::Analytics::Events::SessionEventSender*& BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_get__sessionEventSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionEventSender;
}
constexpr ::BeatGames::Analytics::Events::SessionEventSender* const& BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_get__sessionEventSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionEventSender;
}
constexpr void BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_set__sessionEventSender(::BeatGames::Analytics::Events::SessionEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sessionEventSender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_get__analyticsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_get__analyticsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr void BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_set__analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatGames::Analytics::Events::TelemetryEventSender*& BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_get__telemetryEventSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryEventSender;
}
constexpr ::BeatGames::Analytics::Events::TelemetryEventSender* const& BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_get__telemetryEventSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryEventSender;
}
constexpr void BeatGames::Analytics::AnalyticsEventsDispatcher::__cordl_internal_set__telemetryEventSender(::BeatGames::Analytics::Events::TelemetryEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____telemetryEventSender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatGames::Analytics::NavigationEventSender* BeatGames::Analytics::AnalyticsEventsDispatcher::get_Navigation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::AnalyticsEventsDispatcher*>::get(),
                                                                             "get_Navigation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatGames::Analytics::NavigationEventSender*, false>(this, ___internal_method);
}
inline ::BeatGames::Analytics::Events::SessionEventSender* BeatGames::Analytics::AnalyticsEventsDispatcher::get_Session() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::AnalyticsEventsDispatcher*>::get(),
                                                                             "get_Session", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatGames::Analytics::Events::SessionEventSender*, false>(this, ___internal_method);
}
inline ::BeatGames::Analytics::Events::TelemetryEventSender* BeatGames::Analytics::AnalyticsEventsDispatcher::get_Telemetry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::AnalyticsEventsDispatcher*>::get(),
                                                                             "get_Telemetry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatGames::Analytics::Events::TelemetryEventSender*, false>(this, ___internal_method);
}
inline void BeatGames::Analytics::AnalyticsEventsDispatcher::_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager, ::StringW oculusAuthToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::AnalyticsEventsDispatcher*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, analyticsManager, oculusAuthToken);
}
inline ::BeatGames::Analytics::AnalyticsEventsDispatcher* BeatGames::Analytics::AnalyticsEventsDispatcher::New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager, ::StringW oculusAuthToken) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatGames::Analytics::AnalyticsEventsDispatcher*>(analyticsManager, oculusAuthToken));
}
// Ctor Parameters []
constexpr ::BeatGames::Analytics::AnalyticsEventsDispatcher::AnalyticsEventsDispatcher() {}
