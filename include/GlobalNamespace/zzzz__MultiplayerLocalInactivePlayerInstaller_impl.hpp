#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerInstaller_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarDataSender_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x23dcc48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dd264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioManagerSO*& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> const& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__set__audioManager(::GlobalNamespace::AudioManagerSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__beatmapLoudnessModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLoudnessModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelModel*> const& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__beatmapLoudnessModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLoudnessModel;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__set__beatmapLoudnessModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLoudnessModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RelativeSfxVolumePerLevelModel*& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__relativeSfxVolumePerLevelModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolumePerLevelModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RelativeSfxVolumePerLevelModel*> const&
GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__relativeSfxVolumePerLevelModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolumePerLevelModel;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__set__relativeSfxVolumePerLevelModel(::GlobalNamespace::RelativeSfxVolumePerLevelModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____relativeSfxVolumePerLevelModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerDataModel*& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__set__playerDataModel(::GlobalNamespace::PlayerDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSender*& GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__optionalAvatarDataSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalAvatarDataSender;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::OptionalAvatarDataSender*> const&
GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__optionalAvatarDataSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalAvatarDataSender;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__set__optionalAvatarDataSender(::BeatSaber::AvatarCore::OptionalAvatarDataSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____optionalAvatarDataSender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller* GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>());
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::MultiplayerLocalInactivePlayerInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
