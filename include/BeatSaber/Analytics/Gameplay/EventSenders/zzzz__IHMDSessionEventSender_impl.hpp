#pragma once
// IWYU pragma private; include "BeatSaber\Analytics\Gameplay\EventSenders\IHMDSessionEventSender.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IHMDSessionEventSender_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender.SendHMDSessionStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender::SendHMDSessionStart)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender.SendHMDSessionEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender::SendHMDSessionEnd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*>(), 1 }));
    return ___internal_method;
  }
};
inline void BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender::SendHMDSessionStart() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender::SendHMDSessionEnd() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
