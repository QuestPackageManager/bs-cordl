#pragma once
// IWYU pragma private; include "BeatSaber\Analytics\Gameplay\EventSenders\NoopHMDSessionEventSender.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__NoopHMDSessionEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IHMDSessionEventSender_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender.SendHMDSessionStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::SendHMDSessionStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32650ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender*>(), { "SendHMDSessionStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender.SendHMDSessionEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::SendHMDSessionEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32650f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender*>(), { "SendHMDSessionEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3263290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::SendHMDSessionStart() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender*>(), { "SendHMDSessionStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::SendHMDSessionEnd() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender*>(), { "SendHMDSessionEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender* BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender*>());
}
/// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender"
constexpr BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::operator ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender"
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*
BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::i___BeatSaber__Analytics__Gameplay__EventSenders__IHMDSessionEventSender() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::NoopHMDSessionEventSender() {}
