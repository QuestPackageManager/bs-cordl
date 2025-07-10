#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatEffectSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IBeatEffectDidFinishEvent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatEffectSpawner)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatEffectSpawner_InitData;
}
namespace GlobalNamespace {
class BeatEffect_Pool;
}
namespace GlobalNamespace {
class BeatEffect;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
template <typename T> class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class SongController;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatEffectSpawner;
}
namespace GlobalNamespace {
class BeatEffectSpawner_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatEffectSpawner);
MARK_REF_PTR_T(::GlobalNamespace::BeatEffectSpawner_InitData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatEffectSpawner/InitData
class CORDL_TYPE BeatEffectSpawner_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field hideNoteSpawnEffect, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_hideNoteSpawnEffect, put = __cordl_internal_set_hideNoteSpawnEffect)) bool hideNoteSpawnEffect;

  static inline ::GlobalNamespace::BeatEffectSpawner_InitData* New_ctor(bool hideNoteSpawnEffect);

  constexpr bool const& __cordl_internal_get_hideNoteSpawnEffect() const;

  constexpr bool& __cordl_internal_get_hideNoteSpawnEffect();

  constexpr void __cordl_internal_set_hideNoteSpawnEffect(bool value);

  /// @brief Method .ctor, addr 0x3b888f0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool hideNoteSpawnEffect);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatEffectSpawner_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatEffectSpawner_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatEffectSpawner_InitData(BeatEffectSpawner_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatEffectSpawner_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatEffectSpawner_InitData(BeatEffectSpawner_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4242 };

  /// @brief Field hideNoteSpawnEffect, offset: 0x10, size: 0x1, def value: None
  bool ___hideNoteSpawnEffect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner_InitData, ___hideNoteSpawnEffect) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatEffectSpawner_InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IBeatEffectDidFinishEvent, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatEffectSpawner
class CORDL_TYPE BeatEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::BeatEffectSpawner_InitData;

  /// @brief Field _audioTimeSyncController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  /// @brief Field _beatEffectPoolContainer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__beatEffectPoolContainer,
                      put = __cordl_internal_set__beatEffectPoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BeatEffect>>* _beatEffectPoolContainer;

  /// @brief Field _beatmapObjectManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _bloomFog, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomFog, put = __cordl_internal_set__bloomFog)) ::UnityW<::GlobalNamespace::BloomFogSO> _bloomFog;

  /// @brief Field _bombColorEffect, offset 0x24, size 0x10
  __declspec(property(get = __cordl_internal_get__bombColorEffect, put = __cordl_internal_set__bombColorEffect)) ::UnityEngine::Color _bombColorEffect;

  /// @brief Field _colorManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _effectDuration, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__effectDuration, put = __cordl_internal_set__effectDuration)) float_t _effectDuration;

  /// @brief Field _initData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::BeatEffectSpawner_InitData* _initData;

  /// @brief Field _songController, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__songController, put = __cordl_internal_set__songController)) ::UnityW<::GlobalNamespace::SongController> _songController;

  /// @brief Convert operator to "::GlobalNamespace::IBeatEffectDidFinishEvent"
  constexpr operator ::GlobalNamespace::IBeatEffectDidFinishEvent*() noexcept;

  /// @brief Method HandleBeatEffectDidFinish, addr 0x3b887fc, size 0xd8, virtual true, abstract: false, final true
  inline void HandleBeatEffectDidFinish(::GlobalNamespace::BeatEffect* beatEffect);

  /// @brief Method HandleNoteDidStartJump, addr 0x3b88540, size 0x2bc, virtual false, abstract: false, final false
  inline void HandleNoteDidStartJump(::GlobalNamespace::NoteController* noteController);

  /// @brief Method Init, addr 0x3b88224, size 0x7c, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::BeatEffect_Pool* beatEffectPool);

  static inline ::GlobalNamespace::BeatEffectSpawner* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b88330, size 0x90, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3b882a0, size 0x90, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3b883c0, size 0x180, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BeatEffect>>* const& __cordl_internal_get__beatEffectPoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BeatEffect>>*& __cordl_internal_get__beatEffectPoolContainer();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& __cordl_internal_get__bloomFog() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& __cordl_internal_get__bloomFog();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__bombColorEffect() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__bombColorEffect();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr float_t const& __cordl_internal_get__effectDuration() const;

  constexpr float_t& __cordl_internal_get__effectDuration();

  constexpr ::GlobalNamespace::BeatEffectSpawner_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::BeatEffectSpawner_InitData*& __cordl_internal_get__initData();

  constexpr ::UnityW<::GlobalNamespace::SongController> const& __cordl_internal_get__songController() const;

  constexpr ::UnityW<::GlobalNamespace::SongController>& __cordl_internal_get__songController();

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__beatEffectPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BeatEffect>>* value);

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value);

  constexpr void __cordl_internal_set__bombColorEffect(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__effectDuration(float_t value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::BeatEffectSpawner_InitData* value);

  constexpr void __cordl_internal_set__songController(::UnityW<::GlobalNamespace::SongController> value);

  /// @brief Method .ctor, addr 0x3b888d4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IBeatEffectDidFinishEvent"
  constexpr ::GlobalNamespace::IBeatEffectDidFinishEvent* i___GlobalNamespace__IBeatEffectDidFinishEvent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatEffectSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatEffectSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatEffectSpawner(BeatEffectSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatEffectSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatEffectSpawner(BeatEffectSpawner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4243 };

  /// @brief Field _effectDuration, offset: 0x20, size: 0x4, def value: None
  float_t ____effectDuration;

  /// @brief Field _bombColorEffect, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Color ____bombColorEffect;

  /// @brief Field _colorManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _beatmapObjectManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _audioTimeSyncController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _initData, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatEffectSpawner_InitData* ____initData;

  /// @brief Field _bloomFog, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogSO> ____bloomFog;

  /// @brief Field _songController, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongController> ____songController;

  /// @brief Field _beatEffectPoolContainer, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BeatEffect>>* ____beatEffectPoolContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____effectDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____bombColorEffect) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____colorManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____beatmapObjectManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____audioTimeSyncController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____initData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____bloomFog) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____songController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____beatEffectPoolContainer) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatEffectSpawner, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatEffectSpawner*, "", "BeatEffectSpawner");
NEED_NO_BOX(::GlobalNamespace::BeatEffectSpawner_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatEffectSpawner_InitData*, "", "BeatEffectSpawner/InitData");
