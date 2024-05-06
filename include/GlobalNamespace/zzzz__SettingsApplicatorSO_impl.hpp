#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_def.hpp"
#include "BeatSaber/GameSettings/zzzz__MainSettings_def.hpp"
#include "BeatSaber/GameSettings/zzzz__WindowMode_def.hpp"
#include "BeatSaber/PerformancePresets/zzzz__PerformancePreset_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererGraphicsSettingsPresets_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__SceneType_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO.ApplyMainSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)(::BeatSaber::GameSettings::MainSettings*)>(
    &::GlobalNamespace::SettingsApplicatorSO::ApplyMainSettings)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2696f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), "ApplyMainSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::MainSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO.ApplyPerformancePreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)(
    ::BeatSaber::PerformancePresets::PerformancePreset*, ::GlobalNamespace::SceneType)>(&::GlobalNamespace::SettingsApplicatorSO::ApplyPerformancePreset)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2696ba8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO.ApplyWindowSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)(::UnityEngine::Vector2Int, ::BeatSaber::GameSettings::WindowMode)>(
    &::GlobalNamespace::SettingsApplicatorSO::ApplyWindowSettings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2696f7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsApplicatorSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsApplicatorSO::*)()>(&::GlobalNamespace::SettingsApplicatorSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2696dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets>& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__mirrorRendererGraphicsSettingsPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRendererGraphicsSettingsPresets;
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__mirrorRendererGraphicsSettingsPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRendererGraphicsSettingsPresets;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__mirrorRendererGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirrorRendererGraphicsSettingsPresets)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO>& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__mainEffectGraphicsSettingsPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectGraphicsSettingsPresets;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__mainEffectGraphicsSettingsPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectGraphicsSettingsPresets;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__mainEffectGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainEffectGraphicsSettingsPresets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO>& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__bloomPrePassGraphicsSettingsPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassGraphicsSettingsPresets;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__bloomPrePassGraphicsSettingsPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassGraphicsSettingsPresets;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__bloomPrePassGraphicsSettingsPresets(::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassGraphicsSettingsPresets)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO>& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__mirrorRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRenderer;
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO> const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__mirrorRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRenderer;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__mirrorRenderer(::UnityW<::GlobalNamespace::MirrorRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirrorRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__mainEffectContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectContainer;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__mainEffectContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectContainer;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__mainEffectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainEffectContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO>& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__bloomPrePassEffectContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassEffectContainer;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__bloomPrePassEffectContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassEffectContainer;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__bloomPrePassEffectContainer(::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassEffectContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__hapticFeedbackManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__hapticFeedbackManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__hapticFeedbackManager(::UnityW<::GlobalNamespace::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticFeedbackManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& GlobalNamespace::SettingsApplicatorSO::__cordl_internal_get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::SettingsApplicatorSO::__cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SettingsApplicatorSO::ApplyMainSettings(::BeatSaber::GameSettings::MainSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), "ApplyMainSettings", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::MainSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
/// @param sceneType: ::GlobalNamespace::SceneType (default: static_cast<int32_t>(0x0))
inline void GlobalNamespace::SettingsApplicatorSO::ApplyPerformancePreset(::BeatSaber::PerformancePresets::PerformancePreset* preset, ::GlobalNamespace::SceneType sceneType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, preset, sceneType);
}
inline void GlobalNamespace::SettingsApplicatorSO::ApplyWindowSettings(::UnityEngine::Vector2Int resolution, ::BeatSaber::GameSettings::WindowMode windowMode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resolution, windowMode);
}
inline ::GlobalNamespace::SettingsApplicatorSO* GlobalNamespace::SettingsApplicatorSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SettingsApplicatorSO*>());
}
inline void GlobalNamespace::SettingsApplicatorSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsApplicatorSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsApplicatorSO::SettingsApplicatorSO() {}
