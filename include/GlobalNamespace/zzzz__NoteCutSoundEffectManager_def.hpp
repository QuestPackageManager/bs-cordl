#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutSoundEffectManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__INoteCutSoundEffectDidFinishEvent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteCutSoundEffectManager)
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
template <typename T> class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class NoteCutSoundEffectManager_InitData;
}
namespace GlobalNamespace {
class NoteCutSoundEffect_Pool;
}
namespace GlobalNamespace {
class NoteCutSoundEffect;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
template <typename T> class RandomObjectPicker_1;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutSoundEffectManager;
}
namespace GlobalNamespace {
class NoteCutSoundEffectManager_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteCutSoundEffectManager);
MARK_REF_PTR_T(::GlobalNamespace::NoteCutSoundEffectManager_InitData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteCutSoundEffectManager/InitData
class CORDL_TYPE NoteCutSoundEffectManager_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field ignoreBadCuts, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_ignoreBadCuts, put = __cordl_internal_set_ignoreBadCuts)) bool ignoreBadCuts;

  /// @brief Field useTestAudioClips, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_useTestAudioClips, put = __cordl_internal_set_useTestAudioClips)) bool useTestAudioClips;

  static inline ::GlobalNamespace::NoteCutSoundEffectManager_InitData* New_ctor(bool useTestAudioClips, bool ignoreBadCuts);

  constexpr bool const& __cordl_internal_get_ignoreBadCuts() const;

  constexpr bool& __cordl_internal_get_ignoreBadCuts();

  constexpr bool const& __cordl_internal_get_useTestAudioClips() const;

  constexpr bool& __cordl_internal_get_useTestAudioClips();

  constexpr void __cordl_internal_set_ignoreBadCuts(bool value);

  constexpr void __cordl_internal_set_useTestAudioClips(bool value);

  /// @brief Method .ctor, addr 0x3ad35d8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool useTestAudioClips, bool ignoreBadCuts);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutSoundEffectManager_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteCutSoundEffectManager_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutSoundEffectManager_InitData(NoteCutSoundEffectManager_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutSoundEffectManager_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutSoundEffectManager_InitData(NoteCutSoundEffectManager_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4020 };

  /// @brief Field useTestAudioClips, offset: 0x10, size: 0x1, def value: None
  bool ___useTestAudioClips;

  /// @brief Field ignoreBadCuts, offset: 0x11, size: 0x1, def value: None
  bool ___ignoreBadCuts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager_InitData, ___useTestAudioClips) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager_InitData, ___ignoreBadCuts) == 0x11, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutSoundEffectManager_InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies INoteCutSoundEffectDidFinishEvent, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteCutSoundEffectManager
class CORDL_TYPE NoteCutSoundEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::NoteCutSoundEffectManager_InitData;

  /// @brief Field _audioManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManager, put = __cordl_internal_set__audioManager)) ::UnityW<::GlobalNamespace::AudioManagerSO> _audioManager;

  /// @brief Field _audioSamplesBeatAlignOffset, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__audioSamplesBeatAlignOffset, put = __cordl_internal_set__audioSamplesBeatAlignOffset)) float_t _audioSamplesBeatAlignOffset;

  /// @brief Field _audioTimeSyncController, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  /// @brief Field _beatAlignOffset, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__beatAlignOffset, put = __cordl_internal_set__beatAlignOffset)) float_t _beatAlignOffset;

  /// @brief Field _beatmapObjectManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field <handleWrongSaberTypeAsGood>k__BackingField, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__handleWrongSaberTypeAsGood_k__BackingField,
                      put = __cordl_internal_set__handleWrongSaberTypeAsGood_k__BackingField)) bool _handleWrongSaberTypeAsGood_k__BackingField;

  /// @brief Field _initData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::NoteCutSoundEffectManager_InitData* _initData;

  /// @brief Field _longCutEffectsAudioClips, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__longCutEffectsAudioClips,
                      put = __cordl_internal_set__longCutEffectsAudioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>
      _longCutEffectsAudioClips;

  /// @brief Field _noteCutSoundEffectPool, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__noteCutSoundEffectPool, put = __cordl_internal_set__noteCutSoundEffectPool)) ::GlobalNamespace::NoteCutSoundEffect_Pool* _noteCutSoundEffectPool;

  /// @brief Field _noteCutSoundEffectPoolContainer, offset 0xa8, size 0x8
  __declspec(property(
      get = __cordl_internal_get__noteCutSoundEffectPoolContainer,
      put = __cordl_internal_set__noteCutSoundEffectPoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::NoteCutSoundEffect>>* _noteCutSoundEffectPoolContainer;

  /// @brief Field _prevNoteASoundEffect, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__prevNoteASoundEffect, put = __cordl_internal_set__prevNoteASoundEffect)) ::UnityW<::GlobalNamespace::NoteCutSoundEffect> _prevNoteASoundEffect;

  /// @brief Field _prevNoteATime, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__prevNoteATime, put = __cordl_internal_set__prevNoteATime)) float_t _prevNoteATime;

  /// @brief Field _prevNoteBSoundEffect, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__prevNoteBSoundEffect, put = __cordl_internal_set__prevNoteBSoundEffect)) ::UnityW<::GlobalNamespace::NoteCutSoundEffect> _prevNoteBSoundEffect;

  /// @brief Field _prevNoteBTime, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__prevNoteBTime, put = __cordl_internal_set__prevNoteBTime)) float_t _prevNoteBTime;

  /// @brief Field _randomLongCutSoundPicker, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__randomLongCutSoundPicker,
                      put = __cordl_internal_set__randomLongCutSoundPicker)) ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* _randomLongCutSoundPicker;

  /// @brief Field _randomShortCutSoundPicker, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__randomShortCutSoundPicker,
                      put = __cordl_internal_set__randomShortCutSoundPicker)) ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* _randomShortCutSoundPicker;

  /// @brief Field _saberManager, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager)) ::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Field _shortCutEffectsAudioClips, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__shortCutEffectsAudioClips,
                      put = __cordl_internal_set__shortCutEffectsAudioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>
      _shortCutEffectsAudioClips;

  /// @brief Field _testAudioClip, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__testAudioClip, put = __cordl_internal_set__testAudioClip)) ::UnityW<::UnityEngine::AudioClip> _testAudioClip;

  /// @brief Field _useTestAudioClips, offset 0xa4, size 0x1
  __declspec(property(get = __cordl_internal_get__useTestAudioClips, put = __cordl_internal_set__useTestAudioClips)) bool _useTestAudioClips;

  __declspec(property(get = get_handleWrongSaberTypeAsGood, put = set_handleWrongSaberTypeAsGood)) bool handleWrongSaberTypeAsGood;

  /// @brief Convert operator to "::GlobalNamespace::INoteCutSoundEffectDidFinishEvent"
  constexpr operator ::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*() noexcept;

  /// @brief Method HandleNoteCutSoundEffectDidFinish, addr 0x3ad3488, size 0xd8, virtual true, abstract: false, final true
  inline void HandleNoteCutSoundEffectDidFinish(::GlobalNamespace::NoteCutSoundEffect* noteCutSoundEffect);

  /// @brief Method HandleNoteDidStartDissolving, addr 0x3ad32e8, size 0x1a0, virtual false, abstract: false, final false
  inline void HandleNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController);

  /// @brief Method HandleNoteWasCut, addr 0x3ad3138, size 0x1b0, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ::ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method HandleNoteWasSpawned, addr 0x3ad2b74, size 0x590, virtual false, abstract: false, final false
  inline void HandleNoteWasSpawned(::GlobalNamespace::NoteController* noteController);

  /// @brief Method IsSupportedNote, addr 0x3ad3104, size 0x34, virtual false, abstract: false, final false
  inline bool IsSupportedNote(::GlobalNamespace::NoteData* noteData);

  /// @brief Method LateUpdate, addr 0x3ad2acc, size 0xa8, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::NoteCutSoundEffectManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x3ad2974, size 0x158, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3ad26d8, size 0x29c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& __cordl_internal_get__audioManager() const;

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& __cordl_internal_get__audioManager();

  constexpr float_t const& __cordl_internal_get__audioSamplesBeatAlignOffset() const;

  constexpr float_t& __cordl_internal_get__audioSamplesBeatAlignOffset();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr float_t const& __cordl_internal_get__beatAlignOffset() const;

  constexpr float_t& __cordl_internal_get__beatAlignOffset();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr bool const& __cordl_internal_get__handleWrongSaberTypeAsGood_k__BackingField() const;

  constexpr bool& __cordl_internal_get__handleWrongSaberTypeAsGood_k__BackingField();

  constexpr ::GlobalNamespace::NoteCutSoundEffectManager_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::NoteCutSoundEffectManager_InitData*& __cordl_internal_get__initData();

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> const& __cordl_internal_get__longCutEffectsAudioClips() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>& __cordl_internal_get__longCutEffectsAudioClips();

  constexpr ::GlobalNamespace::NoteCutSoundEffect_Pool* const& __cordl_internal_get__noteCutSoundEffectPool() const;

  constexpr ::GlobalNamespace::NoteCutSoundEffect_Pool*& __cordl_internal_get__noteCutSoundEffectPool();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::NoteCutSoundEffect>>* const& __cordl_internal_get__noteCutSoundEffectPoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::NoteCutSoundEffect>>*& __cordl_internal_get__noteCutSoundEffectPoolContainer();

  constexpr ::UnityW<::GlobalNamespace::NoteCutSoundEffect> const& __cordl_internal_get__prevNoteASoundEffect() const;

  constexpr ::UnityW<::GlobalNamespace::NoteCutSoundEffect>& __cordl_internal_get__prevNoteASoundEffect();

  constexpr float_t const& __cordl_internal_get__prevNoteATime() const;

  constexpr float_t& __cordl_internal_get__prevNoteATime();

  constexpr ::UnityW<::GlobalNamespace::NoteCutSoundEffect> const& __cordl_internal_get__prevNoteBSoundEffect() const;

  constexpr ::UnityW<::GlobalNamespace::NoteCutSoundEffect>& __cordl_internal_get__prevNoteBSoundEffect();

  constexpr float_t const& __cordl_internal_get__prevNoteBTime() const;

  constexpr float_t& __cordl_internal_get__prevNoteBTime();

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get__randomLongCutSoundPicker() const;

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get__randomLongCutSoundPicker();

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get__randomShortCutSoundPicker() const;

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get__randomShortCutSoundPicker();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> const& __cordl_internal_get__shortCutEffectsAudioClips() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>& __cordl_internal_get__shortCutEffectsAudioClips();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__testAudioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__testAudioClip();

  constexpr bool const& __cordl_internal_get__useTestAudioClips() const;

  constexpr bool& __cordl_internal_get__useTestAudioClips();

  constexpr void __cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value);

  constexpr void __cordl_internal_set__audioSamplesBeatAlignOffset(float_t value);

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__beatAlignOffset(float_t value);

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__handleWrongSaberTypeAsGood_k__BackingField(bool value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::NoteCutSoundEffectManager_InitData* value);

  constexpr void __cordl_internal_set__longCutEffectsAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> value);

  constexpr void __cordl_internal_set__noteCutSoundEffectPool(::GlobalNamespace::NoteCutSoundEffect_Pool* value);

  constexpr void __cordl_internal_set__noteCutSoundEffectPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::NoteCutSoundEffect>>* value);

  constexpr void __cordl_internal_set__prevNoteASoundEffect(::UnityW<::GlobalNamespace::NoteCutSoundEffect> value);

  constexpr void __cordl_internal_set__prevNoteATime(float_t value);

  constexpr void __cordl_internal_set__prevNoteBSoundEffect(::UnityW<::GlobalNamespace::NoteCutSoundEffect> value);

  constexpr void __cordl_internal_set__prevNoteBTime(float_t value);

  constexpr void __cordl_internal_set__randomLongCutSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* value);

  constexpr void __cordl_internal_set__randomShortCutSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* value);

  constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  constexpr void __cordl_internal_set__shortCutEffectsAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> value);

  constexpr void __cordl_internal_set__testAudioClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set__useTestAudioClips(bool value);

  /// @brief Method .ctor, addr 0x3ad3560, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_handleWrongSaberTypeAsGood, addr 0x3ad26c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_handleWrongSaberTypeAsGood();

  /// @brief Convert to "::GlobalNamespace::INoteCutSoundEffectDidFinishEvent"
  constexpr ::GlobalNamespace::INoteCutSoundEffectDidFinishEvent* i___GlobalNamespace__INoteCutSoundEffectDidFinishEvent() noexcept;

  /// @brief Method set_handleWrongSaberTypeAsGood, addr 0x3ad26cc, size 0xc, virtual false, abstract: false, final false
  inline void set_handleWrongSaberTypeAsGood(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutSoundEffectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteCutSoundEffectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutSoundEffectManager(NoteCutSoundEffectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutSoundEffectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutSoundEffectManager(NoteCutSoundEffectManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4021 };

  /// @brief Field kDenseNotesVolumeMul offset 0xffffffff size 0x4
  static constexpr float_t kDenseNotesVolumeMul{ static_cast<float_t>(0.9f) };

  /// @brief Field kMaxNumberOfEffects offset 0xffffffff size 0x4
  static constexpr int32_t kMaxNumberOfEffects{ static_cast<int32_t>(0x40) };

  /// @brief Field kTwoNotesAtTheSameTimeVolumeMul offset 0xffffffff size 0x4
  static constexpr float_t kTwoNotesAtTheSameTimeVolumeMul{ static_cast<float_t>(0.9f) };

  /// @brief Field _audioManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioManagerSO> ____audioManager;

  /// @brief Field _audioSamplesBeatAlignOffset, offset: 0x28, size: 0x4, def value: None
  float_t ____audioSamplesBeatAlignOffset;

  /// @brief Field _longCutEffectsAudioClips, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> ____longCutEffectsAudioClips;

  /// @brief Field _shortCutEffectsAudioClips, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> ____shortCutEffectsAudioClips;

  /// @brief Field _testAudioClip, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____testAudioClip;

  /// @brief Field _initData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::NoteCutSoundEffectManager_InitData* ____initData;

  /// @brief Field _beatmapObjectManager, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _saberManager, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _noteCutSoundEffectPool, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::NoteCutSoundEffect_Pool* ____noteCutSoundEffectPool;

  /// @brief Field _audioTimeSyncController, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field <handleWrongSaberTypeAsGood>k__BackingField, offset: 0x70, size: 0x1, def value: None
  bool ____handleWrongSaberTypeAsGood_k__BackingField;

  /// @brief Field _randomLongCutSoundPicker, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* ____randomLongCutSoundPicker;

  /// @brief Field _randomShortCutSoundPicker, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* ____randomShortCutSoundPicker;

  /// @brief Field _prevNoteATime, offset: 0x88, size: 0x4, def value: None
  float_t ____prevNoteATime;

  /// @brief Field _prevNoteBTime, offset: 0x8c, size: 0x4, def value: None
  float_t ____prevNoteBTime;

  /// @brief Field _prevNoteASoundEffect, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteCutSoundEffect> ____prevNoteASoundEffect;

  /// @brief Field _prevNoteBSoundEffect, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteCutSoundEffect> ____prevNoteBSoundEffect;

  /// @brief Field _beatAlignOffset, offset: 0xa0, size: 0x4, def value: None
  float_t ____beatAlignOffset;

  /// @brief Field _useTestAudioClips, offset: 0xa4, size: 0x1, def value: None
  bool ____useTestAudioClips;

  /// @brief Field _noteCutSoundEffectPoolContainer, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::NoteCutSoundEffect>>* ____noteCutSoundEffectPoolContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____audioManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____audioSamplesBeatAlignOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____longCutEffectsAudioClips) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____shortCutEffectsAudioClips) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____testAudioClip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____initData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____beatmapObjectManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____saberManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____noteCutSoundEffectPool) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____audioTimeSyncController) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____handleWrongSaberTypeAsGood_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____randomLongCutSoundPicker) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____randomShortCutSoundPicker) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____prevNoteATime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____prevNoteBTime) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____prevNoteASoundEffect) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____prevNoteBSoundEffect) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____beatAlignOffset) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____useTestAudioClips) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffectManager, ____noteCutSoundEffectPoolContainer) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutSoundEffectManager, 0xb0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteCutSoundEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutSoundEffectManager*, "", "NoteCutSoundEffectManager");
NEED_NO_BOX(::GlobalNamespace::NoteCutSoundEffectManager_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutSoundEffectManager_InitData*, "", "NoteCutSoundEffectManager/InitData");
