#pragma once
// IWYU pragma private; include "GlobalNamespace\QuestSettingsApplicatorSO.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_impl.hpp"
#include "GlobalNamespace/zzzz__QuestSettingsApplicatorSO_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "GlobalNamespace/zzzz__SceneType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::QuestSettingsApplicatorSO.ApplyGraphicSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestSettingsApplicatorSO::*)(::by_ref<::BeatSaber::Settings::Settings>, ::GlobalNamespace::SceneType)>(
    &::GlobalNamespace::QuestSettingsApplicatorSO::ApplyGraphicSettings)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5901470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestSettingsApplicatorSO*>(), { ::i2c::class_of<::GlobalNamespace::QuestSettingsApplicatorSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestSettingsApplicatorSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestSettingsApplicatorSO::*)()>(&::GlobalNamespace::QuestSettingsApplicatorSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5901ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestSettingsApplicatorSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuestSettingsApplicatorSO::ApplyGraphicSettings(::by_ref<::BeatSaber::Settings::Settings> settings, ::GlobalNamespace::SceneType sceneType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::QuestSettingsApplicatorSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, sceneType);
}
inline void GlobalNamespace::QuestSettingsApplicatorSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestSettingsApplicatorSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::QuestSettingsApplicatorSO* GlobalNamespace::QuestSettingsApplicatorSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuestSettingsApplicatorSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuestSettingsApplicatorSO::QuestSettingsApplicatorSO() {}
