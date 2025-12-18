#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/TelemetryEventSender.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatGames/Analytics/Events/zzzz__TelemetryEventSender_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatGames::Analytics::Events::TelemetryEventSender._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::Events::TelemetryEventSender::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::BeatGames::Analytics::Events::TelemetryEventSender::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3191010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEventSender*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::TelemetryEventSender.SendTelemetryEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::Events::TelemetryEventSender::*)(
    ::StringW, ::StringW, ::StringW, int32_t, int32_t, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::BeatGames::Analytics::Events::TelemetryEventSender::SendTelemetryEvent)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x31919b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEventSender*>::get(), "SendTelemetryEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& BeatGames::Analytics::Events::TelemetryEventSender::__cordl_internal_get__analyticsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& BeatGames::Analytics::Events::TelemetryEventSender::__cordl_internal_get__analyticsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr void BeatGames::Analytics::Events::TelemetryEventSender::__cordl_internal_set__analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatGames::Analytics::Events::TelemetryEventSender::_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEventSender*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, analyticsManager);
}
inline void BeatGames::Analytics::Events::TelemetryEventSender::SendTelemetryEvent(::StringW eventName, ::StringW eventFamily, ::StringW stringValue, int32_t intValue, int32_t durationMS,
                                                                                   ::ArrayW<::StringW, ::Array<::StringW>*> tags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEventSender*>::get(), "SendTelemetryEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventName, eventFamily, stringValue, intValue, durationMS, tags);
}
inline ::BeatGames::Analytics::Events::TelemetryEventSender* BeatGames::Analytics::Events::TelemetryEventSender::New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatGames::Analytics::Events::TelemetryEventSender*>(analyticsManager));
}
// Ctor Parameters []
constexpr ::BeatGames::Analytics::Events::TelemetryEventSender::TelemetryEventSender() {}
