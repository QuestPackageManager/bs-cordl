#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutCoreEffectsSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteCutCoreEffectsSpawner)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class BombExplosionEffect;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class NoteCutHapticEffect;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class NoteCutParticlesEffect;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class NoteDebrisSpawner;
}
namespace GlobalNamespace {
class ShockwaveEffect;
}
namespace GlobalNamespace {
class SliderInteractionManager;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutCoreEffectsSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteCutCoreEffectsSpawner);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteCutCoreEffectsSpawner
class CORDL_TYPE NoteCutCoreEffectsSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSyncController, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  /// @brief Field _beatmapObjectManager, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _bombExplosionEffect, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__bombExplosionEffect, put = __cordl_internal_set__bombExplosionEffect)) ::UnityW<::GlobalNamespace::BombExplosionEffect> _bombExplosionEffect;

  /// @brief Field _colorManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _colorTypeToSliderInteractionManagerDictionary, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__colorTypeToSliderInteractionManagerDictionary, put = __cordl_internal_set__colorTypeToSliderInteractionManagerDictionary)) ::System::Collections::
      Generic::Dictionary_2<::GlobalNamespace::ColorType, ::UnityW<::GlobalNamespace::SliderInteractionManager>>* _colorTypeToSliderInteractionManagerDictionary;

  /// @brief Field _noteCutHapticEffect, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__noteCutHapticEffect, put = __cordl_internal_set__noteCutHapticEffect)) ::UnityW<::GlobalNamespace::NoteCutHapticEffect> _noteCutHapticEffect;

  /// @brief Field _noteCutParticlesEffect, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__noteCutParticlesEffect, put = __cordl_internal_set__noteCutParticlesEffect)) ::UnityW<::GlobalNamespace::NoteCutParticlesEffect>
      _noteCutParticlesEffect;

  /// @brief Field _noteDebrisSpawner, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__noteDebrisSpawner, put = __cordl_internal_set__noteDebrisSpawner)) ::UnityW<::GlobalNamespace::NoteDebrisSpawner> _noteDebrisSpawner;

  /// @brief Field _shockWaveYPos, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__shockWaveYPos, put = __cordl_internal_set__shockWaveYPos)) float_t _shockWaveYPos;

  /// @brief Field _shockwaveEffect, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__shockwaveEffect, put = __cordl_internal_set__shockwaveEffect)) ::UnityW<::GlobalNamespace::ShockwaveEffect> _shockwaveEffect;

  /// @brief Field _sliderInteractionManagers, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderInteractionManagers,
                      put = __cordl_internal_set__sliderInteractionManagers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* _sliderInteractionManagers;

  /// @brief Method HandleNoteWasCut, addr 0x5776104, size 0x19c, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ::ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method IsArcHapticsCurrentlyActive, addr 0x5776750, size 0x98, virtual false, abstract: false, final false
  inline bool IsArcHapticsCurrentlyActive(::GlobalNamespace::ColorType colorType);

  static inline ::GlobalNamespace::NoteCutCoreEffectsSpawner* New_ctor();

  /// @brief Method OnDestroy, addr 0x577606c, size 0x98, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method PlayHitChainNoteHapticEffect, addr 0x57766e4, size 0x6c, virtual false, abstract: false, final false
  inline void PlayHitChainNoteHapticEffect(::GlobalNamespace::NoteCutInfo noteCutInfo, bool isChainHead);

  /// @brief Method PlayHitNoteHapticEffect, addr 0x577658c, size 0x104, virtual false, abstract: false, final false
  inline void PlayHitNoteHapticEffect(::GlobalNamespace::NoteCutInfo noteCutInfo, ::GlobalNamespace::NoteData* noteData);

  /// @brief Method SpawnBombCutEffect, addr 0x5776690, size 0x54, virtual false, abstract: false, final false
  inline void SpawnBombCutEffect(::ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::GlobalNamespace::NoteController* noteController);

  /// @brief Method SpawnNoteCutEffect, addr 0x57762a0, size 0x2ec, virtual false, abstract: false, final false
  inline void SpawnNoteCutEffect(::ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::GlobalNamespace::NoteController* noteController, int32_t sparkleParticlesCount,
                                 int32_t explosionParticlesCount);

  /// @brief Method Start, addr 0x5775ec8, size 0x1a4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::UnityW<::GlobalNamespace::BombExplosionEffect> const& __cordl_internal_get__bombExplosionEffect() const;

  constexpr ::UnityW<::GlobalNamespace::BombExplosionEffect>& __cordl_internal_get__bombExplosionEffect();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::UnityW<::GlobalNamespace::SliderInteractionManager>>* const&
  __cordl_internal_get__colorTypeToSliderInteractionManagerDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::UnityW<::GlobalNamespace::SliderInteractionManager>>*&
  __cordl_internal_get__colorTypeToSliderInteractionManagerDictionary();

  constexpr ::UnityW<::GlobalNamespace::NoteCutHapticEffect> const& __cordl_internal_get__noteCutHapticEffect() const;

  constexpr ::UnityW<::GlobalNamespace::NoteCutHapticEffect>& __cordl_internal_get__noteCutHapticEffect();

  constexpr ::UnityW<::GlobalNamespace::NoteCutParticlesEffect> const& __cordl_internal_get__noteCutParticlesEffect() const;

  constexpr ::UnityW<::GlobalNamespace::NoteCutParticlesEffect>& __cordl_internal_get__noteCutParticlesEffect();

  constexpr ::UnityW<::GlobalNamespace::NoteDebrisSpawner> const& __cordl_internal_get__noteDebrisSpawner() const;

  constexpr ::UnityW<::GlobalNamespace::NoteDebrisSpawner>& __cordl_internal_get__noteDebrisSpawner();

  constexpr float_t const& __cordl_internal_get__shockWaveYPos() const;

  constexpr float_t& __cordl_internal_get__shockWaveYPos();

  constexpr ::UnityW<::GlobalNamespace::ShockwaveEffect> const& __cordl_internal_get__shockwaveEffect() const;

  constexpr ::UnityW<::GlobalNamespace::ShockwaveEffect>& __cordl_internal_get__shockwaveEffect();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* const& __cordl_internal_get__sliderInteractionManagers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>*& __cordl_internal_get__sliderInteractionManagers();

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__bombExplosionEffect(::UnityW<::GlobalNamespace::BombExplosionEffect> value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__colorTypeToSliderInteractionManagerDictionary(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::UnityW<::GlobalNamespace::SliderInteractionManager>>* value);

  constexpr void __cordl_internal_set__noteCutHapticEffect(::UnityW<::GlobalNamespace::NoteCutHapticEffect> value);

  constexpr void __cordl_internal_set__noteCutParticlesEffect(::UnityW<::GlobalNamespace::NoteCutParticlesEffect> value);

  constexpr void __cordl_internal_set__noteDebrisSpawner(::UnityW<::GlobalNamespace::NoteDebrisSpawner> value);

  constexpr void __cordl_internal_set__shockWaveYPos(float_t value);

  constexpr void __cordl_internal_set__shockwaveEffect(::UnityW<::GlobalNamespace::ShockwaveEffect> value);

  constexpr void __cordl_internal_set__sliderInteractionManagers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* value);

  /// @brief Method .ctor, addr 0x57770c0, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutCoreEffectsSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteCutCoreEffectsSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutCoreEffectsSpawner(NoteCutCoreEffectsSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutCoreEffectsSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutCoreEffectsSpawner(NoteCutCoreEffectsSpawner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5817 };

  /// @brief Field kBurstSliderElementParticlesCount offset 0xffffffff size 0x4
  static constexpr int32_t kBurstSliderElementParticlesCount{ static_cast<int32_t>(0x14) };

  /// @brief Field kBurstSliderElementSparkleParticlesCount offset 0xffffffff size 0x4
  static constexpr int32_t kBurstSliderElementSparkleParticlesCount{ static_cast<int32_t>(0x32) };

  /// @brief Field kNormalNoteExplosionParticlesCount offset 0xffffffff size 0x4
  static constexpr int32_t kNormalNoteExplosionParticlesCount{ static_cast<int32_t>(0x32) };

  /// @brief Field kNormalNoteSparkleParticlesCount offset 0xffffffff size 0x4
  static constexpr int32_t kNormalNoteSparkleParticlesCount{ static_cast<int32_t>(0x96) };

  /// @brief Field _shockWaveYPos, offset: 0x20, size: 0x4, def value: None
  float_t ____shockWaveYPos;

  /// @brief Field _noteCutParticlesEffect, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteCutParticlesEffect> ____noteCutParticlesEffect;

  /// @brief Field _noteDebrisSpawner, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteDebrisSpawner> ____noteDebrisSpawner;

  /// @brief Field _noteCutHapticEffect, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteCutHapticEffect> ____noteCutHapticEffect;

  /// @brief Field _shockwaveEffect, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ShockwaveEffect> ____shockwaveEffect;

  /// @brief Field _bombExplosionEffect, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BombExplosionEffect> ____bombExplosionEffect;

  /// @brief Field _colorManager, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _beatmapObjectManager, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _audioTimeSyncController, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _sliderInteractionManagers, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* ____sliderInteractionManagers;

  /// @brief Field _colorTypeToSliderInteractionManagerDictionary, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::UnityW<::GlobalNamespace::SliderInteractionManager>>* ____colorTypeToSliderInteractionManagerDictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____shockWaveYPos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____noteCutParticlesEffect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____noteDebrisSpawner) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____noteCutHapticEffect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____shockwaveEffect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____bombExplosionEffect) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____colorManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____beatmapObjectManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____audioTimeSyncController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____sliderInteractionManagers) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____colorTypeToSliderInteractionManagerDictionary) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutCoreEffectsSpawner, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteCutCoreEffectsSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutCoreEffectsSpawner*, "", "NoteCutCoreEffectsSpawner");
