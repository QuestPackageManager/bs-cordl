#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialInstaller_def.hpp"
#include "GlobalNamespace/zzzz__EffectPoolsManualInstaller_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightDetector_def.hpp"
#include "GlobalNamespace/zzzz__TutorialSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialInstaller::*)()>(&::GlobalNamespace::TutorialInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xd08;
  constexpr static std::size_t addrs = 0x2273700;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialInstaller::*)()>(&::GlobalNamespace::TutorialInstaller::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2274408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialInstaller*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AudioClip*& GlobalNamespace::TutorialInstaller::__get__audioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& GlobalNamespace::TutorialInstaller::__get__audioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr void GlobalNamespace::TutorialInstaller::__set__audioClip(::UnityEngine::AudioClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::TutorialInstaller::__get__songBPM() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songBPM;
}
constexpr float_t const& GlobalNamespace::TutorialInstaller::__get__songBPM() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songBPM;
}
constexpr void GlobalNamespace::TutorialInstaller::__set__songBPM(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songBPM = value;
}
constexpr ::GlobalNamespace::PlayerHeightDetector*& GlobalNamespace::TutorialInstaller::__get__playerHeightDetectorPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightDetectorPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeightDetector*> const& GlobalNamespace::TutorialInstaller::__get__playerHeightDetectorPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightDetectorPrefab;
}
constexpr void GlobalNamespace::TutorialInstaller::__set__playerHeightDetectorPrefab(::GlobalNamespace::PlayerHeightDetector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerHeightDetectorPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EffectPoolsManualInstaller*& GlobalNamespace::TutorialInstaller::__get__effectPoolsManualInstaller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectPoolsManualInstaller;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EffectPoolsManualInstaller*> const& GlobalNamespace::TutorialInstaller::__get__effectPoolsManualInstaller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectPoolsManualInstaller;
}
constexpr void GlobalNamespace::TutorialInstaller::__set__effectPoolsManualInstaller(::GlobalNamespace::EffectPoolsManualInstaller* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____effectPoolsManualInstaller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::TutorialSceneSetupData*& GlobalNamespace::TutorialInstaller::__get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialSceneSetupData*> const& GlobalNamespace::TutorialInstaller::__get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::TutorialInstaller::__set__sceneSetupData(::GlobalNamespace::TutorialSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TutorialInstaller::InstallBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialInstaller*>::get(), "InstallBindings",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialInstaller* GlobalNamespace::TutorialInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TutorialInstaller*>());
}
inline void GlobalNamespace::TutorialInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialInstaller*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialInstaller::TutorialInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
