#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerLocalInactivePlayerInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerInstaller_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarDataSender_def.hpp"
#include "GlobalNamespace/zzzz__AudioManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x59c8138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c85f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioManager*& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__cordl_internal_get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::GlobalNamespace::AudioManager* const& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__cordl_internal_get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__cordl_internal_set__audioManager(::GlobalNamespace::AudioManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioManager = value;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__cordl_internal_get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__cordl_internal_get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneSetupData = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSender*& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__cordl_internal_get__optionalAvatarDataSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalAvatarDataSender;
}
constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSender* const& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__cordl_internal_get__optionalAvatarDataSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalAvatarDataSender;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__cordl_internal_set__optionalAvatarDataSender(::BeatSaber::AvatarCore::OptionalAvatarDataSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____optionalAvatarDataSender = value;
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller* GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::MultiplayerLocalInactivePlayerInstaller() {}
