#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/SessionEventSender.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatGames/Analytics/Events/zzzz__SessionEventSender_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatGames::Analytics::Events::SessionEventSender._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::Events::SessionEventSender::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::BeatGames::Analytics::Events::SessionEventSender::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3191008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::SessionEventSender*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::SessionEventSender.SendSessionStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::Events::SessionEventSender::*)()>(
    &::BeatGames::Analytics::Events::SessionEventSender::SendSessionStart)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3191824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::SessionEventSender*>::get(),
                                                                               "SendSessionStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::SessionEventSender.SendSessionFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::Events::SessionEventSender::*)()>(
    &::BeatGames::Analytics::Events::SessionEventSender::SendSessionFinish)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x31918ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::SessionEventSender*>::get(),
                                                                               "SendSessionFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& BeatGames::Analytics::Events::SessionEventSender::__cordl_internal_get__analyticsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& BeatGames::Analytics::Events::SessionEventSender::__cordl_internal_get__analyticsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr void BeatGames::Analytics::Events::SessionEventSender::__cordl_internal_set__analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatGames::Analytics::Events::SessionEventSender::_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::SessionEventSender*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, analyticsManager);
}
inline void BeatGames::Analytics::Events::SessionEventSender::SendSessionStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::SessionEventSender*>::get(),
                                                                             "SendSessionStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatGames::Analytics::Events::SessionEventSender::SendSessionFinish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::SessionEventSender*>::get(),
                                                                             "SendSessionFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatGames::Analytics::Events::SessionEventSender* BeatGames::Analytics::Events::SessionEventSender::New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatGames::Analytics::Events::SessionEventSender*>(analyticsManager));
}
// Ctor Parameters []
constexpr ::BeatGames::Analytics::Events::SessionEventSender::SessionEventSender() {}
