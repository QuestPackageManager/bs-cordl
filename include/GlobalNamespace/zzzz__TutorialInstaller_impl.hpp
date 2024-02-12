#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialInstaller_def.hpp"
#include "GlobalNamespace/zzzz__EffectPoolsManualInstaller_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightDetector_def.hpp"
#include "GlobalNamespace/zzzz__TutorialSceneSetupData_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialInstaller::*)()>(&::GlobalNamespace::TutorialInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xd18;
  constexpr static std::size_t addrs = 0x23cedcc;

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
  constexpr static std::size_t addrs = 0x23cfae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialInstaller*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::TutorialInstaller::__cordl_internal_get__audioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::TutorialInstaller::__cordl_internal_get__audioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr void GlobalNamespace::TutorialInstaller::__cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::TutorialInstaller::__cordl_internal_get__songBPM() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songBPM;
}
constexpr float_t const& GlobalNamespace::TutorialInstaller::__cordl_internal_get__songBPM() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songBPM;
}
constexpr void GlobalNamespace::TutorialInstaller::__cordl_internal_set__songBPM(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songBPM = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector>& GlobalNamespace::TutorialInstaller::__cordl_internal_get__playerHeightDetectorPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightDetectorPrefab;
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector> const& GlobalNamespace::TutorialInstaller::__cordl_internal_get__playerHeightDetectorPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightDetectorPrefab;
}
constexpr void GlobalNamespace::TutorialInstaller::__cordl_internal_set__playerHeightDetectorPrefab(::UnityW<::GlobalNamespace::PlayerHeightDetector> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerHeightDetectorPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller>& GlobalNamespace::TutorialInstaller::__cordl_internal_get__effectPoolsManualInstaller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectPoolsManualInstaller;
}
constexpr ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> const& GlobalNamespace::TutorialInstaller::__cordl_internal_get__effectPoolsManualInstaller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectPoolsManualInstaller;
}
constexpr void GlobalNamespace::TutorialInstaller::__cordl_internal_set__effectPoolsManualInstaller(::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____effectPoolsManualInstaller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::TutorialSceneSetupData*& GlobalNamespace::TutorialInstaller::__cordl_internal_get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialSceneSetupData*> const& GlobalNamespace::TutorialInstaller::__cordl_internal_get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::TutorialInstaller::__cordl_internal_set__sceneSetupData(::GlobalNamespace::TutorialSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TutorialInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialInstaller* GlobalNamespace::TutorialInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialInstaller*>());
}
inline void GlobalNamespace::TutorialInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialInstaller*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialInstaller::TutorialInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
