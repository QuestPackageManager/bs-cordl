#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EffectPoolsManualInstaller_def.hpp"
#include "GlobalNamespace/zzzz__FlyingTextEffect_def.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreEffect_def.hpp"
#include "GlobalNamespace/zzzz__BombCutSoundEffect_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutSoundEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatEffect_def.hpp"
#include "GlobalNamespace/zzzz__FlyingSpriteEffect_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EffectPoolsManualInstaller.ManualInstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EffectPoolsManualInstaller::*)(::Zenject::DiContainer*, bool)>(
    &::GlobalNamespace::EffectPoolsManualInstaller::ManualInstallBindings)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x226f65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EffectPoolsManualInstaller*>::get(), "ManualInstallBindings", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EffectPoolsManualInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EffectPoolsManualInstaller::*)()>(&::GlobalNamespace::EffectPoolsManualInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226f8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EffectPoolsManualInstaller*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FlyingTextEffect*& GlobalNamespace::EffectPoolsManualInstaller::__get__flyingTextEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingTextEffectPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FlyingTextEffect*> const& GlobalNamespace::EffectPoolsManualInstaller::__get__flyingTextEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingTextEffectPrefab;
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__set__flyingTextEffectPrefab(::GlobalNamespace::FlyingTextEffect* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____flyingTextEffectPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FlyingScoreEffect*& GlobalNamespace::EffectPoolsManualInstaller::__get__flyingScoreEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingScoreEffectPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FlyingScoreEffect*> const& GlobalNamespace::EffectPoolsManualInstaller::__get__flyingScoreEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingScoreEffectPrefab;
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__set__flyingScoreEffectPrefab(::GlobalNamespace::FlyingScoreEffect* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____flyingScoreEffectPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatEffect*& GlobalNamespace::EffectPoolsManualInstaller::__get__beatEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatEffectPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatEffect*> const& GlobalNamespace::EffectPoolsManualInstaller::__get__beatEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatEffectPrefab;
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__set__beatEffectPrefab(::GlobalNamespace::BeatEffect* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatEffectPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatEffect*& GlobalNamespace::EffectPoolsManualInstaller::__get__shortBeatEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortBeatEffectPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatEffect*> const& GlobalNamespace::EffectPoolsManualInstaller::__get__shortBeatEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortBeatEffectPrefab;
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__set__shortBeatEffectPrefab(::GlobalNamespace::BeatEffect* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shortBeatEffectPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NoteCutSoundEffect*& GlobalNamespace::EffectPoolsManualInstaller::__get__noteCutSoundEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutSoundEffectPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutSoundEffect*> const& GlobalNamespace::EffectPoolsManualInstaller::__get__noteCutSoundEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutSoundEffectPrefab;
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__set__noteCutSoundEffectPrefab(::GlobalNamespace::NoteCutSoundEffect* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteCutSoundEffectPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BombCutSoundEffect*& GlobalNamespace::EffectPoolsManualInstaller::__get__bombCutSoundEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombCutSoundEffectPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BombCutSoundEffect*> const& GlobalNamespace::EffectPoolsManualInstaller::__get__bombCutSoundEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombCutSoundEffectPrefab;
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__set__bombCutSoundEffectPrefab(::GlobalNamespace::BombCutSoundEffect* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombCutSoundEffectPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FlyingSpriteEffect*& GlobalNamespace::EffectPoolsManualInstaller::__get__flyingSpriteEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingSpriteEffectPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FlyingSpriteEffect*> const& GlobalNamespace::EffectPoolsManualInstaller::__get__flyingSpriteEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingSpriteEffectPrefab;
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__set__flyingSpriteEffectPrefab(::GlobalNamespace::FlyingSpriteEffect* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____flyingSpriteEffectPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::EffectPoolsManualInstaller::ManualInstallBindings(::Zenject::DiContainer* container, bool shortBeatEffect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EffectPoolsManualInstaller*>::get(), "ManualInstallBindings", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, shortBeatEffect);
}
inline ::GlobalNamespace::EffectPoolsManualInstaller* GlobalNamespace::EffectPoolsManualInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EffectPoolsManualInstaller*>());
}
inline void GlobalNamespace::EffectPoolsManualInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EffectPoolsManualInstaller*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EffectPoolsManualInstaller::EffectPoolsManualInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
