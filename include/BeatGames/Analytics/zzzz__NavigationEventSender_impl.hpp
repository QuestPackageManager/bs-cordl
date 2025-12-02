#pragma once
// IWYU pragma private; include "BeatGames/Analytics/NavigationEventSender.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatGames/Analytics/zzzz__NavigationEventSender_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatGames::Analytics::NavigationEventSender._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::NavigationEventSender::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::BeatGames::Analytics::NavigationEventSender::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3161308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::NavigationEventSender*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::NavigationEventSender.SendScreenImpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::NavigationEventSender::*)(::StringW)>(
    &::BeatGames::Analytics::NavigationEventSender::SendScreenImpression)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3161320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::NavigationEventSender*>::get(), "SendScreenImpression",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::NavigationEventSender.SendButtonClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::NavigationEventSender::*)(::StringW, ::StringW)>(
    &::BeatGames::Analytics::NavigationEventSender::SendButtonClick)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3161480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::NavigationEventSender*>::get(), "SendButtonClick", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& BeatGames::Analytics::NavigationEventSender::__cordl_internal_get__analyticsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& BeatGames::Analytics::NavigationEventSender::__cordl_internal_get__analyticsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr void BeatGames::Analytics::NavigationEventSender::__cordl_internal_set__analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatGames::Analytics::NavigationEventSender::_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::NavigationEventSender*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, analyticsManager);
}
inline void BeatGames::Analytics::NavigationEventSender::SendScreenImpression(::StringW screenID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::NavigationEventSender*>::get(), "SendScreenImpression",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, screenID);
}
inline void BeatGames::Analytics::NavigationEventSender::SendButtonClick(::StringW buttonID, ::StringW screenID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::NavigationEventSender*>::get(), "SendButtonClick", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buttonID, screenID);
}
inline ::BeatGames::Analytics::NavigationEventSender* BeatGames::Analytics::NavigationEventSender::New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatGames::Analytics::NavigationEventSender*>(analyticsManager));
}
// Ctor Parameters []
constexpr ::BeatGames::Analytics::NavigationEventSender::NavigationEventSender() {}
