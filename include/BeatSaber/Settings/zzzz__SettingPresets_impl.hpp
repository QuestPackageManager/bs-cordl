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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Settings::SmoothCameraSettings (*)()>(
    &::BeatSaber::Settings::SettingPresets::DefaultSmoothCameraSettings)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x227ddec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get(),
                                                                               "DefaultSmoothCameraSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingPresets.DefaultAudioSettingsWithLatency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Settings::AudioSettings (*)(float_t)>(
    &::BeatSaber::Settings::SettingPresets::DefaultAudioSettingsWithLatency)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x227de7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get(), "DefaultAudioSettingsWithLatency",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingPresets.DefaultMiscSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Settings::MiscSettings (*)()>(&::BeatSaber::Settings::SettingPresets::DefaultMiscSettings)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x227de90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get(),
                                                                               "DefaultMiscSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingPresets.DefaultQuestSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Settings::QuestSettings (*)()>(&::BeatSaber::Settings::SettingPresets::DefaultQuestSettings)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x227ded4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get(),
                                                                               "DefaultQuestSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingPresets.DefaultWindowSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Settings::WindowSettings (*)()>(&::BeatSaber::Settings::SettingPresets::DefaultWindowSettings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x227dee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get(),
                                                                               "DefaultWindowSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::SettingPresets.DefaultControllerSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Settings::ControllerSettings (*)()>(&::BeatSaber::Settings::SettingPresets::DefaultControllerSettings)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x227def4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get(),
                                                                               "DefaultControllerSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void BeatSaber::Settings::SettingPresets::setStaticF_kQuest1(::BeatSaber::Settings::Settings value) {
  ::cordl_internals::setStaticField<::BeatSaber::Settings::Settings, "kQuest1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>(
      std::forward<::BeatSaber::Settings::Settings>(value));
}
inline ::BeatSaber::Settings::Settings BeatSaber::Settings::SettingPresets::getStaticF_kQuest1() {
  return ::cordl_internals::getStaticField<::BeatSaber::Settings::Settings, "kQuest1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>();
}
inline void BeatSaber::Settings::SettingPresets::setStaticF_kQuest2(::BeatSaber::Settings::Settings value) {
  ::cordl_internals::setStaticField<::BeatSaber::Settings::Settings, "kQuest2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>(
      std::forward<::BeatSaber::Settings::Settings>(value));
}
inline ::BeatSaber::Settings::Settings BeatSaber::Settings::SettingPresets::getStaticF_kQuest2() {
  return ::cordl_internals::getStaticField<::BeatSaber::Settings::Settings, "kQuest2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>();
}
inline void BeatSaber::Settings::SettingPresets::setStaticF_kQuest3(::BeatSaber::Settings::Settings value) {
  ::cordl_internals::setStaticField<::BeatSaber::Settings::Settings, "kQuest3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>(
      std::forward<::BeatSaber::Settings::Settings>(value));
}
inline ::BeatSaber::Settings::Settings BeatSaber::Settings::SettingPresets::getStaticF_kQuest3() {
  return ::cordl_internals::getStaticField<::BeatSaber::Settings::Settings, "kQuest3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>();
}
inline void BeatSaber::Settings::SettingPresets::setStaticF_kQuestPro(::BeatSaber::Settings::Settings value) {
  ::cordl_internals::setStaticField<::BeatSaber::Settings::Settings, "kQuestPro", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>(
      std::forward<::BeatSaber::Settings::Settings>(value));
}
inline ::BeatSaber::Settings::Settings BeatSaber::Settings::SettingPresets::getStaticF_kQuestPro() {
  return ::cordl_internals::getStaticField<::BeatSaber::Settings::Settings, "kQuestPro", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>();
}
inline void BeatSaber::Settings::SettingPresets::setStaticF_kStandalone(::BeatSaber::Settings::Settings value) {
  ::cordl_internals::setStaticField<::BeatSaber::Settings::Settings, "kStandalone", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>(
      std::forward<::BeatSaber::Settings::Settings>(value));
}
inline ::BeatSaber::Settings::Settings BeatSaber::Settings::SettingPresets::getStaticF_kStandalone() {
  return ::cordl_internals::getStaticField<::BeatSaber::Settings::Settings, "kStandalone", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>();
}
inline void BeatSaber::Settings::SettingPresets::setStaticF_kPlayStation4(::BeatSaber::Settings::Settings value) {
  ::cordl_internals::setStaticField<::BeatSaber::Settings::Settings, "kPlayStation4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>(
      std::forward<::BeatSaber::Settings::Settings>(value));
}
inline ::BeatSaber::Settings::Settings BeatSaber::Settings::SettingPresets::getStaticF_kPlayStation4() {
  return ::cordl_internals::getStaticField<::BeatSaber::Settings::Settings, "kPlayStation4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>();
}
inline void BeatSaber::Settings::SettingPresets::setStaticF_kPlayStation4Pro(::BeatSaber::Settings::Settings value) {
  ::cordl_internals::setStaticField<::BeatSaber::Settings::Settings, "kPlayStation4Pro", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>(
      std::forward<::BeatSaber::Settings::Settings>(value));
}
inline ::BeatSaber::Settings::Settings BeatSaber::Settings::SettingPresets::getStaticF_kPlayStation4Pro() {
  return ::cordl_internals::getStaticField<::BeatSaber::Settings::Settings, "kPlayStation4Pro", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>();
}
inline void BeatSaber::Settings::SettingPresets::setStaticF_kPlayStation5(::BeatSaber::Settings::Settings value) {
  ::cordl_internals::setStaticField<::BeatSaber::Settings::Settings, "kPlayStation5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>(
      std::forward<::BeatSaber::Settings::Settings>(value));
}
inline ::BeatSaber::Settings::Settings BeatSaber::Settings::SettingPresets::getStaticF_kPlayStation5() {
  return ::cordl_internals::getStaticField<::BeatSaber::Settings::Settings, "kPlayStation5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>();
}
inline void BeatSaber::Settings::SettingPresets::setStaticF_kLightBaking(::BeatSaber::Settings::Settings value) {
  ::cordl_internals::setStaticField<::BeatSaber::Settings::Settings, "kLightBaking", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>(
      std::forward<::BeatSaber::Settings::Settings>(value));
}
inline ::BeatSaber::Settings::Settings BeatSaber::Settings::SettingPresets::getStaticF_kLightBaking() {
  return ::cordl_internals::getStaticField<::BeatSaber::Settings::Settings, "kLightBaking", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get>();
}
inline ::BeatSaber::Settings::SmoothCameraSettings BeatSaber::Settings::SettingPresets::DefaultSmoothCameraSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get(),
                                                                             "DefaultSmoothCameraSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Settings::SmoothCameraSettings, false>(nullptr, ___internal_method);
}
inline ::BeatSaber::Settings::AudioSettings BeatSaber::Settings::SettingPresets::DefaultAudioSettingsWithLatency(float_t latency) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get(), "DefaultAudioSettingsWithLatency",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Settings::AudioSettings, false>(nullptr, ___internal_method, latency);
}
inline ::BeatSaber::Settings::MiscSettings BeatSaber::Settings::SettingPresets::DefaultMiscSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get(),
                                                                             "DefaultMiscSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Settings::MiscSettings, false>(nullptr, ___internal_method);
}
inline ::BeatSaber::Settings::QuestSettings BeatSaber::Settings::SettingPresets::DefaultQuestSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get(),
                                                                             "DefaultQuestSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Settings::QuestSettings, false>(nullptr, ___internal_method);
}
inline ::BeatSaber::Settings::WindowSettings BeatSaber::Settings::SettingPresets::DefaultWindowSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get(),
                                                                             "DefaultWindowSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Settings::WindowSettings, false>(nullptr, ___internal_method);
}
inline ::BeatSaber::Settings::ControllerSettings BeatSaber::Settings::SettingPresets::DefaultControllerSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::SettingPresets*>::get(),
                                                                             "DefaultControllerSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Settings::ControllerSettings, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::SettingPresets::SettingPresets() {}
