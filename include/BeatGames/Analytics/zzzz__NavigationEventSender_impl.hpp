#pragma once
// IWYU pragma private; include "BeatGames\Analytics\NavigationEventSender.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatGames/Analytics/zzzz__NavigationEventSender_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatGames::Analytics::NavigationEventSender._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::NavigationEventSender::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::BeatGames::Analytics::NavigationEventSender::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3257a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::NavigationEventSender*>(), { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::NavigationEventSender.SendScreenImpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::NavigationEventSender::*)(::StringW)>(&::BeatGames::Analytics::NavigationEventSender::SendScreenImpression)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3257a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::NavigationEventSender*>(), { "SendScreenImpression", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::NavigationEventSender.SendButtonClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::NavigationEventSender::*)(::StringW, ::StringW)>(
    &::BeatGames::Analytics::NavigationEventSender::SendButtonClick)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3257bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::NavigationEventSender*>(), { "SendButtonClick", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
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
  this->____analyticsManager = value;
}
inline void BeatGames::Analytics::NavigationEventSender::_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::NavigationEventSender*>(), { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, analyticsManager);
}
inline void BeatGames::Analytics::NavigationEventSender::SendScreenImpression(::StringW screenID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::NavigationEventSender*>(), { "SendScreenImpression", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, screenID);
}
inline void BeatGames::Analytics::NavigationEventSender::SendButtonClick(::StringW buttonID, ::StringW screenID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::NavigationEventSender*>(), { "SendButtonClick", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonID, screenID);
}
inline ::BeatGames::Analytics::NavigationEventSender* BeatGames::Analytics::NavigationEventSender::New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatGames::Analytics::NavigationEventSender*>(analyticsManager));
}
// Ctor Parameters []
constexpr ::BeatGames::Analytics::NavigationEventSender::NavigationEventSender() {}
