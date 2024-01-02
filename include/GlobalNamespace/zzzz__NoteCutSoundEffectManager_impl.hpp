#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutSoundEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutSoundEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutSoundEffect_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__INoteCutSoundEffectDidFinishEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__NoteCutSoundEffectManager__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__NoteCutSoundEffectManager__InitData::*)(bool, bool)>(
    &::GlobalNamespace::__NoteCutSoundEffectManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x222f804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NoteCutSoundEffectManager__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__NoteCutSoundEffectManager__InitData::__get_useTestAudioClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useTestAudioClips;
}
constexpr bool const& GlobalNamespace::__NoteCutSoundEffectManager__InitData::__get_useTestAudioClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useTestAudioClips;
}
constexpr void GlobalNamespace::__NoteCutSoundEffectManager__InitData::__set_useTestAudioClips(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useTestAudioClips = value;
}
constexpr bool& GlobalNamespace::__NoteCutSoundEffectManager__InitData::__get_ignoreBadCuts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreBadCuts;
}
constexpr bool const& GlobalNamespace::__NoteCutSoundEffectManager__InitData::__get_ignoreBadCuts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreBadCuts;
}
constexpr void GlobalNamespace::__NoteCutSoundEffectManager__InitData::__set_ignoreBadCuts(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignoreBadCuts = value;
}
inline ::GlobalNamespace::__NoteCutSoundEffectManager__InitData* GlobalNamespace::__NoteCutSoundEffectManager__InitData::New_ctor(bool useTestAudioClips, bool ignoreBadCuts) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__NoteCutSoundEffectManager__InitData*>(useTestAudioClips, ignoreBadCuts));
}
inline void GlobalNamespace::__NoteCutSoundEffectManager__InitData::_ctor(bool useTestAudioClips, bool ignoreBadCuts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NoteCutSoundEffectManager__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useTestAudioClips, ignoreBadCuts);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__NoteCutSoundEffectManager__InitData::__NoteCutSoundEffectManager__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.get_handleWrongSaberTypeAsGood
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NoteCutSoundEffectManager::*)()>(
    &::GlobalNamespace::NoteCutSoundEffectManager::get_handleWrongSaberTypeAsGood)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222ebc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                                                                               "get_handleWrongSaberTypeAsGood", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.set_handleWrongSaberTypeAsGood
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)(bool)>(
    &::GlobalNamespace::NoteCutSoundEffectManager::set_handleWrongSaberTypeAsGood)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x222ebd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(), "set_handleWrongSaberTypeAsGood",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)()>(&::GlobalNamespace::NoteCutSoundEffectManager::Start)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x222ebdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)()>(&::GlobalNamespace::NoteCutSoundEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x222ee3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.HandleNoteWasSpawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasSpawned)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x222ef40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(), "HandleNoteWasSpawned", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)(
    ::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x222f4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(), "HandleNoteWasCut", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.HandleNoteCutSoundEffectDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteCutSoundEffect*)>(
    &::GlobalNamespace::NoteCutSoundEffectManager::HandleNoteCutSoundEffectDidFinish)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x222f6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(), "HandleNoteCutSoundEffectDidFinish", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutSoundEffect*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.IsSupportedNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::NoteCutSoundEffectManager::IsSupportedNote)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x222f4c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(), "IsSupportedNote", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)()>(&::GlobalNamespace::NoteCutSoundEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x222f784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::INoteCutSoundEffectDidFinishEvent"
constexpr GlobalNamespace::NoteCutSoundEffectManager::operator ::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::AudioManagerSO*& GlobalNamespace::NoteCutSoundEffectManager::__get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> const& GlobalNamespace::NoteCutSoundEffectManager::__get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__audioManager(::GlobalNamespace::AudioManagerSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffectManager::__get__audioSamplesBeatAlignOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSamplesBeatAlignOffset;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffectManager::__get__audioSamplesBeatAlignOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSamplesBeatAlignOffset;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__audioSamplesBeatAlignOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSamplesBeatAlignOffset = value;
}
constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*>& GlobalNamespace::NoteCutSoundEffectManager::__get__longCutEffectsAudioClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____longCutEffectsAudioClips;
}
constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> const& GlobalNamespace::NoteCutSoundEffectManager::__get__longCutEffectsAudioClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____longCutEffectsAudioClips;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__longCutEffectsAudioClips(::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____longCutEffectsAudioClips)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*>& GlobalNamespace::NoteCutSoundEffectManager::__get__shortCutEffectsAudioClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortCutEffectsAudioClips;
}
constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> const& GlobalNamespace::NoteCutSoundEffectManager::__get__shortCutEffectsAudioClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortCutEffectsAudioClips;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__shortCutEffectsAudioClips(::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shortCutEffectsAudioClips)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AudioClip*& GlobalNamespace::NoteCutSoundEffectManager::__get__testAudioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____testAudioClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& GlobalNamespace::NoteCutSoundEffectManager::__get__testAudioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____testAudioClip;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__testAudioClip(::UnityEngine::AudioClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____testAudioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__NoteCutSoundEffectManager__InitData*& GlobalNamespace::NoteCutSoundEffectManager::__get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteCutSoundEffectManager__InitData*> const& GlobalNamespace::NoteCutSoundEffectManager::__get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__initData(::GlobalNamespace::__NoteCutSoundEffectManager__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::NoteCutSoundEffectManager::__get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& GlobalNamespace::NoteCutSoundEffectManager::__get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SaberManager*& GlobalNamespace::NoteCutSoundEffectManager::__get__saberManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> const& GlobalNamespace::NoteCutSoundEffectManager::__get__saberManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__saberManager(::GlobalNamespace::SaberManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__NoteCutSoundEffect__Pool*& GlobalNamespace::NoteCutSoundEffectManager::__get__noteCutSoundEffectPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutSoundEffectPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteCutSoundEffect__Pool*> const& GlobalNamespace::NoteCutSoundEffectManager::__get__noteCutSoundEffectPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutSoundEffectPool;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__noteCutSoundEffectPool(::GlobalNamespace::__NoteCutSoundEffect__Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteCutSoundEffectPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioTimeSyncController*& GlobalNamespace::NoteCutSoundEffectManager::__get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& GlobalNamespace::NoteCutSoundEffectManager::__get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::NoteCutSoundEffectManager::__get__handleWrongSaberTypeAsGood_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleWrongSaberTypeAsGood_k__BackingField;
}
constexpr bool const& GlobalNamespace::NoteCutSoundEffectManager::__get__handleWrongSaberTypeAsGood_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleWrongSaberTypeAsGood_k__BackingField;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__handleWrongSaberTypeAsGood_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handleWrongSaberTypeAsGood_k__BackingField = value;
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*& GlobalNamespace::NoteCutSoundEffectManager::__get__randomLongCutSoundPicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomLongCutSoundPicker;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> const&
GlobalNamespace::NoteCutSoundEffectManager::__get__randomLongCutSoundPicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomLongCutSoundPicker;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__randomLongCutSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomLongCutSoundPicker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*& GlobalNamespace::NoteCutSoundEffectManager::__get__randomShortCutSoundPicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomShortCutSoundPicker;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> const&
GlobalNamespace::NoteCutSoundEffectManager::__get__randomShortCutSoundPicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomShortCutSoundPicker;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__randomShortCutSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomShortCutSoundPicker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffectManager::__get__prevNoteATime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteATime;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffectManager::__get__prevNoteATime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteATime;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__prevNoteATime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevNoteATime = value;
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffectManager::__get__prevNoteBTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteBTime;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffectManager::__get__prevNoteBTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteBTime;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__prevNoteBTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevNoteBTime = value;
}
constexpr ::GlobalNamespace::NoteCutSoundEffect*& GlobalNamespace::NoteCutSoundEffectManager::__get__prevNoteASoundEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteASoundEffect;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutSoundEffect*> const& GlobalNamespace::NoteCutSoundEffectManager::__get__prevNoteASoundEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteASoundEffect;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__prevNoteASoundEffect(::GlobalNamespace::NoteCutSoundEffect* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prevNoteASoundEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NoteCutSoundEffect*& GlobalNamespace::NoteCutSoundEffectManager::__get__prevNoteBSoundEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteBSoundEffect;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutSoundEffect*> const& GlobalNamespace::NoteCutSoundEffectManager::__get__prevNoteBSoundEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteBSoundEffect;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__prevNoteBSoundEffect(::GlobalNamespace::NoteCutSoundEffect* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prevNoteBSoundEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffectManager::__get__beatAlignOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatAlignOffset;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffectManager::__get__beatAlignOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatAlignOffset;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__beatAlignOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatAlignOffset = value;
}
constexpr bool& GlobalNamespace::NoteCutSoundEffectManager::__get__useTestAudioClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useTestAudioClips;
}
constexpr bool const& GlobalNamespace::NoteCutSoundEffectManager::__get__useTestAudioClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useTestAudioClips;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__useTestAudioClips(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useTestAudioClips = value;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>*& GlobalNamespace::NoteCutSoundEffectManager::__get__noteCutSoundEffectPoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutSoundEffectPoolContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>*> const&
GlobalNamespace::NoteCutSoundEffectManager::__get__noteCutSoundEffectPoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutSoundEffectPoolContainer;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__noteCutSoundEffectPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteCutSoundEffectPoolContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::NoteCutSoundEffectManager::get_handleWrongSaberTypeAsGood() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                                                                             "get_handleWrongSaberTypeAsGood", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::set_handleWrongSaberTypeAsGood(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(), "set_handleWrongSaberTypeAsGood",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasSpawned(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(), "HandleNoteWasSpawned", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(), "HandleNoteWasCut", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::HandleNoteCutSoundEffectDidFinish(::GlobalNamespace::NoteCutSoundEffect* noteCutSoundEffect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(), "HandleNoteCutSoundEffectDidFinish", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutSoundEffect*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteCutSoundEffect);
}
inline bool GlobalNamespace::NoteCutSoundEffectManager::IsSupportedNote(::GlobalNamespace::NoteData* noteData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(), "IsSupportedNote", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, noteData);
}
inline ::GlobalNamespace::NoteCutSoundEffectManager* GlobalNamespace::NoteCutSoundEffectManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteCutSoundEffectManager*>());
}
inline void GlobalNamespace::NoteCutSoundEffectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutSoundEffectManager::NoteCutSoundEffectManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
