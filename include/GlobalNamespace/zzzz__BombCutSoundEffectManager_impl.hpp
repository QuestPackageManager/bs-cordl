#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BombCutSoundEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__BombCutSoundEffect_def.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BombCutSoundEffectManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombCutSoundEffectManager::*)()>(&::GlobalNamespace::BombCutSoundEffectManager::Start)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x222c8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombCutSoundEffectManager.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombCutSoundEffectManager::*)(
    ::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::BombCutSoundEffectManager::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x222c9bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(), "HandleNoteWasCut", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombCutSoundEffectManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombCutSoundEffectManager::*)()>(&::GlobalNamespace::BombCutSoundEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x222cbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombCutSoundEffectManager.HandleBombCutSoundEffectDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombCutSoundEffectManager::*)(::GlobalNamespace::BombCutSoundEffect*)>(
    &::GlobalNamespace::BombCutSoundEffectManager::HandleBombCutSoundEffectDidFinish)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x222cc74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(), "HandleBombCutSoundEffectDidFinish", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BombCutSoundEffect*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombCutSoundEffectManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombCutSoundEffectManager::*)()>(&::GlobalNamespace::BombCutSoundEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x222cd2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BombCutSoundEffectManager::__get__volume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volume;
}
constexpr float_t const& GlobalNamespace::BombCutSoundEffectManager::__get__volume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volume;
}
constexpr void GlobalNamespace::BombCutSoundEffectManager::__set__volume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____volume = value;
}
constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*>& GlobalNamespace::BombCutSoundEffectManager::__get__bombExplosionAudioClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombExplosionAudioClips;
}
constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> const& GlobalNamespace::BombCutSoundEffectManager::__get__bombExplosionAudioClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombExplosionAudioClips;
}
constexpr void GlobalNamespace::BombCutSoundEffectManager::__set__bombExplosionAudioClips(::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombExplosionAudioClips)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::BombCutSoundEffectManager::__get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& GlobalNamespace::BombCutSoundEffectManager::__get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::BombCutSoundEffectManager::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SaberManager*& GlobalNamespace::BombCutSoundEffectManager::__get_saberManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> const& GlobalNamespace::BombCutSoundEffectManager::__get_saberManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberManager;
}
constexpr void GlobalNamespace::BombCutSoundEffectManager::__set_saberManager(::GlobalNamespace::SaberManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___saberManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__BombCutSoundEffect__Pool*& GlobalNamespace::BombCutSoundEffectManager::__get__bombCutSoundEffectPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombCutSoundEffectPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BombCutSoundEffect__Pool*> const& GlobalNamespace::BombCutSoundEffectManager::__get__bombCutSoundEffectPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombCutSoundEffectPool;
}
constexpr void GlobalNamespace::BombCutSoundEffectManager::__set__bombCutSoundEffectPool(::GlobalNamespace::__BombCutSoundEffect__Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombCutSoundEffectPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*& GlobalNamespace::BombCutSoundEffectManager::__get__randomSoundPicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomSoundPicker;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> const& GlobalNamespace::BombCutSoundEffectManager::__get__randomSoundPicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomSoundPicker;
}
constexpr void GlobalNamespace::BombCutSoundEffectManager::__set__randomSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomSoundPicker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BombCutSoundEffectManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BombCutSoundEffectManager::HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(), "HandleNoteWasCut", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::BombCutSoundEffectManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BombCutSoundEffectManager::HandleBombCutSoundEffectDidFinish(::GlobalNamespace::BombCutSoundEffect* bombCutSoundEffect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(), "HandleBombCutSoundEffectDidFinish", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BombCutSoundEffect*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bombCutSoundEffect);
}
inline ::GlobalNamespace::BombCutSoundEffectManager* GlobalNamespace::BombCutSoundEffectManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BombCutSoundEffectManager*>());
}
inline void GlobalNamespace::BombCutSoundEffectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BombCutSoundEffectManager::BombCutSoundEffectManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
