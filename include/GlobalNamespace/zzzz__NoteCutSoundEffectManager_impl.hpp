#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutSoundEffectManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutSoundEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__INoteCutSoundEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutSoundEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutSoundEffect_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager_InitData::*)(bool, bool)>(&::GlobalNamespace::NoteCutSoundEffectManager_InitData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d094a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager_InitData*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::NoteCutSoundEffectManager_InitData::__cordl_internal_get_useTestAudioClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useTestAudioClips;
}
constexpr bool const& GlobalNamespace::NoteCutSoundEffectManager_InitData::__cordl_internal_get_useTestAudioClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useTestAudioClips;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager_InitData::__cordl_internal_set_useTestAudioClips(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useTestAudioClips = value;
}
constexpr bool& GlobalNamespace::NoteCutSoundEffectManager_InitData::__cordl_internal_get_ignoreBadCuts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreBadCuts;
}
constexpr bool const& GlobalNamespace::NoteCutSoundEffectManager_InitData::__cordl_internal_get_ignoreBadCuts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreBadCuts;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager_InitData::__cordl_internal_set_ignoreBadCuts(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignoreBadCuts = value;
}
inline void GlobalNamespace::NoteCutSoundEffectManager_InitData::_ctor(bool useTestAudioClips, bool ignoreBadCuts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager_InitData*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useTestAudioClips, ignoreBadCuts);
}
inline ::GlobalNamespace::NoteCutSoundEffectManager_InitData* GlobalNamespace::NoteCutSoundEffectManager_InitData::New_ctor(bool useTestAudioClips, bool ignoreBadCuts) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteCutSoundEffectManager_InitData*>(useTestAudioClips, ignoreBadCuts));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutSoundEffectManager_InitData::NoteCutSoundEffectManager_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.get_handleWrongSaberTypeAsGood
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NoteCutSoundEffectManager::*)()>(&::GlobalNamespace::NoteCutSoundEffectManager::get_handleWrongSaberTypeAsGood)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d07fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "get_handleWrongSaberTypeAsGood", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.set_handleWrongSaberTypeAsGood
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)(bool)>(&::GlobalNamespace::NoteCutSoundEffectManager::set_handleWrongSaberTypeAsGood)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d07fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "set_handleWrongSaberTypeAsGood", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)()>(&::GlobalNamespace::NoteCutSoundEffectManager::Start)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x5d07fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)()>(&::GlobalNamespace::NoteCutSoundEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5d082fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)()>(&::GlobalNamespace::NoteCutSoundEffectManager::LateUpdate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d084b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.IsNoteCutSoundEffectDue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::NoteCutSoundEffectManager::IsNoteCutSoundEffectDue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d08630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "IsNoteCutSoundEffectDue", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.SpawnDueWaitingNoteCutSoundEffects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)()>(&::GlobalNamespace::NoteCutSoundEffectManager::SpawnDueWaitingNoteCutSoundEffects)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5d0857c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "SpawnDueWaitingNoteCutSoundEffects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.SpawnFirstWaitingNoteCutSoundEffects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)(int32_t)>(
    &::GlobalNamespace::NoteCutSoundEffectManager::SpawnFirstWaitingNoteCutSoundEffects)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d08670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "SpawnFirstWaitingNoteCutSoundEffects", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.IndexOfWaitingNoteController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::NoteCutSoundEffectManager::IndexOfWaitingNoteController)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5d08c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(),
                                                                                           { "IndexOfWaitingNoteController", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.RemoveWaitingNoteController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::NoteCutSoundEffectManager::RemoveWaitingNoteController)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d08dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(),
                                                                                           { "RemoveWaitingNoteController", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.SpawnNoteCutSoundEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::NoteCutSoundEffectManager::SpawnNoteCutSoundEffect)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x5d08728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(),
                                                                                           { "SpawnNoteCutSoundEffect", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.HandleNoteWasSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasSpawned)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5d08e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "HandleNoteWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.HandleNoteWasDespawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasDespawned)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d08fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(),
                                                                                           { "HandleNoteWasDespawned", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteController*, ::by_ref<::GlobalNamespace::NoteCutInfo const>)>(
    &::GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5d08fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(),
                                         { "HandleNoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.HandleNoteDidStartDissolving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteControllerBase*)>(
    &::GlobalNamespace::NoteCutSoundEffectManager::HandleNoteDidStartDissolving)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5d09150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(),
                                                                                           { "HandleNoteDidStartDissolving", {}, { ::i2c::type_of<::GlobalNamespace::NoteControllerBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.HandleNoteCutSoundEffectDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteCutSoundEffect*)>(
    &::GlobalNamespace::NoteCutSoundEffectManager::HandleNoteCutSoundEffectDidFinish)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5d09308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(),
                                                                                           { "HandleNoteCutSoundEffectDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutSoundEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.IsSupportedNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::NoteCutSoundEffectManager::IsSupportedNote)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5d08f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "IsSupportedNote", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)()>(&::GlobalNamespace::NoteCutSoundEffectManager::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d093f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__audioSamplesBeatAlignOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSamplesBeatAlignOffset;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__audioSamplesBeatAlignOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSamplesBeatAlignOffset;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__audioSamplesBeatAlignOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSamplesBeatAlignOffset = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__longCutEffectsAudioClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____longCutEffectsAudioClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__longCutEffectsAudioClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____longCutEffectsAudioClips;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__longCutEffectsAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____longCutEffectsAudioClips = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__shortCutEffectsAudioClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortCutEffectsAudioClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__shortCutEffectsAudioClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortCutEffectsAudioClips;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__shortCutEffectsAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shortCutEffectsAudioClips = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__testAudioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____testAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__testAudioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____testAudioClip;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__testAudioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____testAudioClip = value;
}
constexpr ::GlobalNamespace::NoteCutSoundEffectManager_InitData*& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::NoteCutSoundEffectManager_InitData* const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__initData(::GlobalNamespace::NoteCutSoundEffectManager_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
constexpr ::GlobalNamespace::AudioManager*& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::GlobalNamespace::AudioManager* const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__audioManager(::GlobalNamespace::AudioManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioManager = value;
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectManager = value;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager>& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__saberManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager> const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__saberManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberManager = value;
}
constexpr ::GlobalNamespace::NoteCutSoundEffect_Pool*& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__noteCutSoundEffectPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutSoundEffectPool;
}
constexpr ::GlobalNamespace::NoteCutSoundEffect_Pool* const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__noteCutSoundEffectPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutSoundEffectPool;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__noteCutSoundEffectPool(::GlobalNamespace::NoteCutSoundEffect_Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteCutSoundEffectPool = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSyncController = value;
}
constexpr bool& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__handleWrongSaberTypeAsGood_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleWrongSaberTypeAsGood_k__BackingField;
}
constexpr bool const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__handleWrongSaberTypeAsGood_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleWrongSaberTypeAsGood_k__BackingField;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__handleWrongSaberTypeAsGood_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handleWrongSaberTypeAsGood_k__BackingField = value;
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__randomLongCutSoundPicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomLongCutSoundPicker;
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__randomLongCutSoundPicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomLongCutSoundPicker;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__randomLongCutSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomLongCutSoundPicker = value;
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__randomShortCutSoundPicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomShortCutSoundPicker;
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__randomShortCutSoundPicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomShortCutSoundPicker;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__randomShortCutSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomShortCutSoundPicker = value;
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__prevNoteATime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteATime;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__prevNoteATime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteATime;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__prevNoteATime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevNoteATime = value;
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__prevNoteBTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteBTime;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__prevNoteBTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteBTime;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__prevNoteBTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevNoteBTime = value;
}
constexpr ::UnityW<::GlobalNamespace::NoteCutSoundEffect>& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__prevNoteASoundEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteASoundEffect;
}
constexpr ::UnityW<::GlobalNamespace::NoteCutSoundEffect> const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__prevNoteASoundEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteASoundEffect;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__prevNoteASoundEffect(::UnityW<::GlobalNamespace::NoteCutSoundEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevNoteASoundEffect = value;
}
constexpr ::UnityW<::GlobalNamespace::NoteCutSoundEffect>& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__prevNoteBSoundEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteBSoundEffect;
}
constexpr ::UnityW<::GlobalNamespace::NoteCutSoundEffect> const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__prevNoteBSoundEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteBSoundEffect;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__prevNoteBSoundEffect(::UnityW<::GlobalNamespace::NoteCutSoundEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevNoteBSoundEffect = value;
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__beatAlignOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatAlignOffset;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__beatAlignOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatAlignOffset;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__beatAlignOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatAlignOffset = value;
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__scheduleAheadTimeSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scheduleAheadTimeSec;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__scheduleAheadTimeSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scheduleAheadTimeSec;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__scheduleAheadTimeSec(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scheduleAheadTimeSec = value;
}
constexpr bool& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__useTestAudioClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useTestAudioClips;
}
constexpr bool const& GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__useTestAudioClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useTestAudioClips;
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__useTestAudioClips(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useTestAudioClips = value;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::NoteCutSoundEffect>>*&
GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__noteCutSoundEffectPoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutSoundEffectPoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::NoteCutSoundEffect>>* const&
GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__noteCutSoundEffectPoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutSoundEffectPoolContainer;
}
constexpr void
GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__noteCutSoundEffectPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::NoteCutSoundEffect>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteCutSoundEffectPoolContainer = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::NoteController>>*&
GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__noteControllersWaitingForSoundEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteControllersWaitingForSoundEffect;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::NoteController>>* const&
GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_get__noteControllersWaitingForSoundEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteControllersWaitingForSoundEffect;
}
constexpr void
GlobalNamespace::NoteCutSoundEffectManager::__cordl_internal_set__noteControllersWaitingForSoundEffect(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::NoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteControllersWaitingForSoundEffect = value;
}
inline bool GlobalNamespace::NoteCutSoundEffectManager::get_handleWrongSaberTypeAsGood() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "get_handleWrongSaberTypeAsGood", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::set_handleWrongSaberTypeAsGood(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "set_handleWrongSaberTypeAsGood", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::NoteCutSoundEffectManager::IsNoteCutSoundEffectDue(::GlobalNamespace::NoteData* noteData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "IsNoteCutSoundEffectDue", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, noteData);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::SpawnDueWaitingNoteCutSoundEffects() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "SpawnDueWaitingNoteCutSoundEffects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::SpawnFirstWaitingNoteCutSoundEffects(int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "SpawnFirstWaitingNoteCutSoundEffects", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline int32_t GlobalNamespace::NoteCutSoundEffectManager::IndexOfWaitingNoteController(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(),
                                                                                         { "IndexOfWaitingNoteController", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::RemoveWaitingNoteController(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(),
                                                                                         { "RemoveWaitingNoteController", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::SpawnNoteCutSoundEffect(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "SpawnNoteCutSoundEffect", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasSpawned(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "HandleNoteWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasDespawned(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "HandleNoteWasDespawned", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasCut(::GlobalNamespace::NoteController* noteController,
                                                                         /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NoteCutInfo const> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(),
                                              { "HandleNoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::HandleNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(),
                                                                                         { "HandleNoteDidStartDissolving", {}, { ::i2c::type_of<::GlobalNamespace::NoteControllerBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::HandleNoteCutSoundEffectDidFinish(::GlobalNamespace::NoteCutSoundEffect* noteCutSoundEffect) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(),
                                                                                         { "HandleNoteCutSoundEffectDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutSoundEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteCutSoundEffect);
}
inline bool GlobalNamespace::NoteCutSoundEffectManager::IsSupportedNote(::GlobalNamespace::NoteData* noteData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { "IsSupportedNote", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, noteData);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffectManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutSoundEffectManager* GlobalNamespace::NoteCutSoundEffectManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteCutSoundEffectManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::INoteCutSoundEffectDidFinishEvent"
constexpr GlobalNamespace::NoteCutSoundEffectManager::operator ::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteCutSoundEffectDidFinishEvent"
constexpr ::GlobalNamespace::INoteCutSoundEffectDidFinishEvent* GlobalNamespace::NoteCutSoundEffectManager::i___GlobalNamespace__INoteCutSoundEffectDidFinishEvent() noexcept {
  return static_cast<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutSoundEffectManager::NoteCutSoundEffectManager() {}
