#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutCoreEffectsSpawner_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BombExplosionEffect_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutHapticEffect_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutParticlesEffect_def.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisSpawner_def.hpp"
#include "GlobalNamespace/zzzz__ShockwaveEffect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)()>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::Start)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24305cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)()>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2430658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)(
    ::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x24306f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(), "HandleNoteWasCut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.PlayHitNoteHapticEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)(
    ::GlobalNamespace::NoteCutInfo, ::GlobalNamespace::__NoteCutHapticEffect__Type)>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::PlayHitNoteHapticEffect)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2430e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(), "PlayHitNoteHapticEffect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfo>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteCutHapticEffect__Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.SpawnNoteCutEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)(
    ByRef<::GlobalNamespace::NoteCutInfo>, ::GlobalNamespace::NoteController*, int32_t, int32_t)>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnNoteCutEffect)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x24308c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(), "SpawnNoteCutEffect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.SpawnBombCutEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)(
    ByRef<::GlobalNamespace::NoteCutInfo>, ::GlobalNamespace::NoteController*)>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnBombCutEffect)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x243086c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(), "SpawnBombCutEffect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)()>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2431710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__shockWaveYPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockWaveYPos;
}
constexpr float_t const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__shockWaveYPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockWaveYPos;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__shockWaveYPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shockWaveYPos = value;
}
constexpr ::UnityW<::GlobalNamespace::NoteCutParticlesEffect>& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__noteCutParticlesEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutParticlesEffect;
}
constexpr ::UnityW<::GlobalNamespace::NoteCutParticlesEffect> const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__noteCutParticlesEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutParticlesEffect;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__noteCutParticlesEffect(::UnityW<::GlobalNamespace::NoteCutParticlesEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteCutParticlesEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::NoteDebrisSpawner>& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__noteDebrisSpawner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDebrisSpawner;
}
constexpr ::UnityW<::GlobalNamespace::NoteDebrisSpawner> const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__noteDebrisSpawner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDebrisSpawner;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__noteDebrisSpawner(::UnityW<::GlobalNamespace::NoteDebrisSpawner> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteDebrisSpawner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::NoteCutHapticEffect>& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__noteCutHapticEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutHapticEffect;
}
constexpr ::UnityW<::GlobalNamespace::NoteCutHapticEffect> const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__noteCutHapticEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutHapticEffect;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__noteCutHapticEffect(::UnityW<::GlobalNamespace::NoteCutHapticEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteCutHapticEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ShockwaveEffect>& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__shockwaveEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockwaveEffect;
}
constexpr ::UnityW<::GlobalNamespace::ShockwaveEffect> const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__shockwaveEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockwaveEffect;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__shockwaveEffect(::UnityW<::GlobalNamespace::ShockwaveEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shockwaveEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BombExplosionEffect>& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__bombExplosionEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombExplosionEffect;
}
constexpr ::UnityW<::GlobalNamespace::BombExplosionEffect> const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__bombExplosionEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombExplosionEffect;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__bombExplosionEffect(::UnityW<::GlobalNamespace::BombExplosionEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombExplosionEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(), "HandleNoteWasCut", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::PlayHitNoteHapticEffect(::GlobalNamespace::NoteCutInfo noteCutInfo, ::GlobalNamespace::__NoteCutHapticEffect__Type hapticType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(), "PlayHitNoteHapticEffect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfo>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteCutHapticEffect__Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteCutInfo, hapticType);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnNoteCutEffect(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::GlobalNamespace::NoteController* noteController,
                                                                           int32_t sparkleParticlesCount, int32_t explosionParticlesCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(), "SpawnNoteCutEffect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteCutInfo, noteController, sparkleParticlesCount, explosionParticlesCount);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnBombCutEffect(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(), "SpawnBombCutEffect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteCutInfo, noteController);
}
inline ::GlobalNamespace::NoteCutCoreEffectsSpawner* GlobalNamespace::NoteCutCoreEffectsSpawner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoteCutCoreEffectsSpawner*>());
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutCoreEffectsSpawner::NoteCutCoreEffectsSpawner() {}
