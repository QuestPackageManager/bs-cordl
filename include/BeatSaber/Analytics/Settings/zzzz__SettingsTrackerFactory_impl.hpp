#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/SettingsTrackerFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__SettingsTrackerFactory_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__ISettingsEventSender_def.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__AudioSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__ColorsSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__ControllerSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__EnvironmentsSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__GraphicsSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__MiscSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__PlayerSettingsTracker_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsTrackerFactory.CreateAudio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Settings::AudioSettingsTracker* (*)(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*)>(
    &::BeatSaber::Analytics::Settings::SettingsTrackerFactory::CreateAudio)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3506128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsTrackerFactory*>(),
                                                             { "CreateAudio", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsTrackerFactory.CreateColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Settings::ColorsSettingsTracker* (*)(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*)>(
    &::BeatSaber::Analytics::Settings::SettingsTrackerFactory::CreateColors)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3506180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsTrackerFactory*>(),
                                                             { "CreateColors", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsTrackerFactory.CreateController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Settings::ControllerSettingsTracker* (*)(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*)>(
    &::BeatSaber::Analytics::Settings::SettingsTrackerFactory::CreateController)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x35061d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsTrackerFactory*>(),
                                                             { "CreateController", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsTrackerFactory.CreateEnvironments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker* (*)(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*)>(
    &::BeatSaber::Analytics::Settings::SettingsTrackerFactory::CreateEnvironments)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3506230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsTrackerFactory*>(),
                                                             { "CreateEnvironments", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsTrackerFactory.CreateGraphics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Settings::GraphicsSettingsTracker* (*)(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*)>(
    &::BeatSaber::Analytics::Settings::SettingsTrackerFactory::CreateGraphics)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3506288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsTrackerFactory*>(),
                                                             { "CreateGraphics", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsTrackerFactory.CreateMisc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Settings::MiscSettingsTracker* (*)(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*)>(
    &::BeatSaber::Analytics::Settings::SettingsTrackerFactory::CreateMisc)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x35062e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsTrackerFactory*>(),
                                                             { "CreateMisc", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsTrackerFactory.CreatePlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Settings::PlayerSettingsTracker* (*)(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*)>(
    &::BeatSaber::Analytics::Settings::SettingsTrackerFactory::CreatePlayer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3506338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsTrackerFactory*>(),
                                                             { "CreatePlayer", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
    return ___internal_method;
  }
};
inline ::BeatSaber::Analytics::Settings::AudioSettingsTracker*
BeatSaber::Analytics::Settings::SettingsTrackerFactory::CreateAudio(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsTrackerFactory*>(),
                                                           { "CreateAudio", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Settings::AudioSettingsTracker*>(nullptr, ___internal_method, sender);
}
inline ::BeatSaber::Analytics::Settings::ColorsSettingsTracker*
BeatSaber::Analytics::Settings::SettingsTrackerFactory::CreateColors(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsTrackerFactory*>(),
                                                           { "CreateColors", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Settings::ColorsSettingsTracker*>(nullptr, ___internal_method, sender);
}
inline ::BeatSaber::Analytics::Settings::ControllerSettingsTracker*
BeatSaber::Analytics::Settings::SettingsTrackerFactory::CreateController(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsTrackerFactory*>(),
                                                           { "CreateController", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Settings::ControllerSettingsTracker*>(nullptr, ___internal_method, sender);
}
inline ::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker*
BeatSaber::Analytics::Settings::SettingsTrackerFactory::CreateEnvironments(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsTrackerFactory*>(),
                                                           { "CreateEnvironments", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker*>(nullptr, ___internal_method, sender);
}
inline ::BeatSaber::Analytics::Settings::GraphicsSettingsTracker*
BeatSaber::Analytics::Settings::SettingsTrackerFactory::CreateGraphics(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsTrackerFactory*>(),
                                                           { "CreateGraphics", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Settings::GraphicsSettingsTracker*>(nullptr, ___internal_method, sender);
}
inline ::BeatSaber::Analytics::Settings::MiscSettingsTracker*
BeatSaber::Analytics::Settings::SettingsTrackerFactory::CreateMisc(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsTrackerFactory*>(),
                                                           { "CreateMisc", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Settings::MiscSettingsTracker*>(nullptr, ___internal_method, sender);
}
inline ::BeatSaber::Analytics::Settings::PlayerSettingsTracker*
BeatSaber::Analytics::Settings::SettingsTrackerFactory::CreatePlayer(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsTrackerFactory*>(),
                                                           { "CreatePlayer", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Settings::PlayerSettingsTracker*>(nullptr, ___internal_method, sender);
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Settings::SettingsTrackerFactory::SettingsTrackerFactory() {}
