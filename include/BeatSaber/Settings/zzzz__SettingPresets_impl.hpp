#pragma once
// IWYU pragma private; include "BeatSaber/Settings/SettingPresets.hpp"
#include "BeatSaber/Settings/zzzz__Settings_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Settings/zzzz__SettingPresets_def.hpp"
#include "BeatSaber/Settings/zzzz__AudioSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__ControllerSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__MiscSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__QuestSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__SmoothCameraSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__WindowSettings_def.hpp"
//  Writing Method size for method: ::BeatSaber::Settings::SettingPresets.DefaultSmoothCameraSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Settings::SmoothCameraSettings (*)()>(&::BeatSaber::Settings::SettingPresets::DefaultSmoothCameraSettings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x32c51b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingPresets*>(), { "DefaultSmoothCameraSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingPresets.DefaultAudioSettingsWithLatency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Settings::AudioSettings (*)(float_t)>(&::BeatSaber::Settings::SettingPresets::DefaultAudioSettingsWithLatency)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32c523c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingPresets*>(), { "DefaultAudioSettingsWithLatency", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingPresets.DefaultMiscSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Settings::MiscSettings (*)()>(&::BeatSaber::Settings::SettingPresets::DefaultMiscSettings)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x32c5250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingPresets*>(), { "DefaultMiscSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingPresets.DefaultQuestSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Settings::QuestSettings (*)()>(&::BeatSaber::Settings::SettingPresets::DefaultQuestSettings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32c52a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingPresets*>(), { "DefaultQuestSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingPresets.DefaultWindowSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Settings::WindowSettings (*)()>(&::BeatSaber::Settings::SettingPresets::DefaultWindowSettings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32c52ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingPresets*>(), { "DefaultWindowSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingPresets.DefaultControllerSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Settings::ControllerSettings (*)()>(&::BeatSaber::Settings::SettingPresets::DefaultControllerSettings)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x32c52b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingPresets*>(), { "DefaultControllerSettings", {}, {} })));
    return ___internal_method;
  }
};
inline void BeatSaber::Settings::SettingPresets::setStaticF_kQuest1(::BeatSaber::Settings::Settings value) {
  ::cordl_internals::setStaticField<::BeatSaber::Settings::Settings, "kQuest1", ::BeatSaber::Settings::SettingPresets*>(std::forward<::BeatSaber::Settings::Settings>(value));
}
inline ::BeatSaber::Settings::Settings BeatSaber::Settings::SettingPresets::getStaticF_kQuest1() {
  return ::cordl_internals::getStaticField<::BeatSaber::Settings::Settings, "kQuest1", ::BeatSaber::Settings::SettingPresets*>();
}
inline void BeatSaber::Settings::SettingPresets::setStaticF_kQuest2(::BeatSaber::Settings::Settings value) {
  ::cordl_internals::setStaticField<::BeatSaber::Settings::Settings, "kQuest2", ::BeatSaber::Settings::SettingPresets*>(std::forward<::BeatSaber::Settings::Settings>(value));
}
inline ::BeatSaber::Settings::Settings BeatSaber::Settings::SettingPresets::getStaticF_kQuest2() {
  return ::cordl_internals::getStaticField<::BeatSaber::Settings::Settings, "kQuest2", ::BeatSaber::Settings::SettingPresets*>();
}
inline void BeatSaber::Settings::SettingPresets::setStaticF_kQuest3(::BeatSaber::Settings::Settings value) {
  ::cordl_internals::setStaticField<::BeatSaber::Settings::Settings, "kQuest3", ::BeatSaber::Settings::SettingPresets*>(std::forward<::BeatSaber::Settings::Settings>(value));
}
inline ::BeatSaber::Settings::Settings BeatSaber::Settings::SettingPresets::getStaticF_kQuest3() {
  return ::cordl_internals::getStaticField<::BeatSaber::Settings::Settings, "kQuest3", ::BeatSaber::Settings::SettingPresets*>();
}
inline void BeatSaber::Settings::SettingPresets::setStaticF_kQuestPro(::BeatSaber::Settings::Settings value) {
  ::cordl_internals::setStaticField<::BeatSaber::Settings::Settings, "kQuestPro", ::BeatSaber::Settings::SettingPresets*>(std::forward<::BeatSaber::Settings::Settings>(value));
}
inline ::BeatSaber::Settings::Settings BeatSaber::Settings::SettingPresets::getStaticF_kQuestPro() {
  return ::cordl_internals::getStaticField<::BeatSaber::Settings::Settings, "kQuestPro", ::BeatSaber::Settings::SettingPresets*>();
}
inline void BeatSaber::Settings::SettingPresets::setStaticF_kStandalone(::BeatSaber::Settings::Settings value) {
  ::cordl_internals::setStaticField<::BeatSaber::Settings::Settings, "kStandalone", ::BeatSaber::Settings::SettingPresets*>(std::forward<::BeatSaber::Settings::Settings>(value));
}
inline ::BeatSaber::Settings::Settings BeatSaber::Settings::SettingPresets::getStaticF_kStandalone() {
  return ::cordl_internals::getStaticField<::BeatSaber::Settings::Settings, "kStandalone", ::BeatSaber::Settings::SettingPresets*>();
}
inline void BeatSaber::Settings::SettingPresets::setStaticF_kLightBaking(::BeatSaber::Settings::Settings value) {
  ::cordl_internals::setStaticField<::BeatSaber::Settings::Settings, "kLightBaking", ::BeatSaber::Settings::SettingPresets*>(std::forward<::BeatSaber::Settings::Settings>(value));
}
inline ::BeatSaber::Settings::Settings BeatSaber::Settings::SettingPresets::getStaticF_kLightBaking() {
  return ::cordl_internals::getStaticField<::BeatSaber::Settings::Settings, "kLightBaking", ::BeatSaber::Settings::SettingPresets*>();
}
inline ::BeatSaber::Settings::SmoothCameraSettings BeatSaber::Settings::SettingPresets::DefaultSmoothCameraSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingPresets*>(), { "DefaultSmoothCameraSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Settings::SmoothCameraSettings>(nullptr, ___internal_method);
}
inline ::BeatSaber::Settings::AudioSettings BeatSaber::Settings::SettingPresets::DefaultAudioSettingsWithLatency(float_t latency) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingPresets*>(), { "DefaultAudioSettingsWithLatency", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Settings::AudioSettings>(nullptr, ___internal_method, latency);
}
inline ::BeatSaber::Settings::MiscSettings BeatSaber::Settings::SettingPresets::DefaultMiscSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingPresets*>(), { "DefaultMiscSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Settings::MiscSettings>(nullptr, ___internal_method);
}
inline ::BeatSaber::Settings::QuestSettings BeatSaber::Settings::SettingPresets::DefaultQuestSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingPresets*>(), { "DefaultQuestSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Settings::QuestSettings>(nullptr, ___internal_method);
}
inline ::BeatSaber::Settings::WindowSettings BeatSaber::Settings::SettingPresets::DefaultWindowSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingPresets*>(), { "DefaultWindowSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Settings::WindowSettings>(nullptr, ___internal_method);
}
inline ::BeatSaber::Settings::ControllerSettings BeatSaber::Settings::SettingPresets::DefaultControllerSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Settings::SettingPresets*>(), { "DefaultControllerSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Settings::ControllerSettings>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::SettingPresets::SettingPresets() {}
