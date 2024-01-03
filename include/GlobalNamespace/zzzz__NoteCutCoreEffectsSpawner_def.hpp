#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteCutCoreEffectsSpawner)
namespace GlobalNamespace {
class NoteCutParticlesEffect;
}
namespace GlobalNamespace {
class ShockwaveEffect;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class BombExplosionEffect;
}
namespace GlobalNamespace {
struct __NoteCutHapticEffect__Type;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class NoteCutHapticEffect;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class NoteDebrisSpawner;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutCoreEffectsSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteCutCoreEffectsSpawner);
// Type: ::NoteCutCoreEffectsSpawner
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4893))
// CS Name: ::NoteCutCoreEffectsSpawner*
class CORDL_TYPE NoteCutCoreEffectsSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _shockWaveYPos, offset 0x18, size 0x4
  __declspec(property(get = __get__shockWaveYPos, put = __set__shockWaveYPos)) float_t _shockWaveYPos;

  /// @brief Field _noteCutParticlesEffect, offset 0x20, size 0x8
  __declspec(property(get = __get__noteCutParticlesEffect, put = __set__noteCutParticlesEffect))::GlobalNamespace::NoteCutParticlesEffect* _noteCutParticlesEffect;

  /// @brief Field _noteDebrisSpawner, offset 0x28, size 0x8
  __declspec(property(get = __get__noteDebrisSpawner, put = __set__noteDebrisSpawner))::GlobalNamespace::NoteDebrisSpawner* _noteDebrisSpawner;

  /// @brief Field _noteCutHapticEffect, offset 0x30, size 0x8
  __declspec(property(get = __get__noteCutHapticEffect, put = __set__noteCutHapticEffect))::GlobalNamespace::NoteCutHapticEffect* _noteCutHapticEffect;

  /// @brief Field _shockwaveEffect, offset 0x38, size 0x8
  __declspec(property(get = __get__shockwaveEffect, put = __set__shockwaveEffect))::GlobalNamespace::ShockwaveEffect* _shockwaveEffect;

  /// @brief Field _bombExplosionEffect, offset 0x40, size 0x8
  __declspec(property(get = __get__bombExplosionEffect, put = __set__bombExplosionEffect))::GlobalNamespace::BombExplosionEffect* _bombExplosionEffect;

  /// @brief Field _colorManager, offset 0x48, size 0x8
  __declspec(property(get = __get__colorManager, put = __set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _beatmapObjectManager, offset 0x50, size 0x8
  __declspec(property(get = __get__beatmapObjectManager, put = __set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _audioTimeSyncController, offset 0x58, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::AudioTimeSyncController* _audioTimeSyncController;

  constexpr float_t& __get__shockWaveYPos();

  constexpr float_t const& __get__shockWaveYPos() const;

  constexpr void __set__shockWaveYPos(float_t value);

  constexpr ::GlobalNamespace::NoteCutParticlesEffect*& __get__noteCutParticlesEffect();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutParticlesEffect*> const& __get__noteCutParticlesEffect() const;

  constexpr void __set__noteCutParticlesEffect(::GlobalNamespace::NoteCutParticlesEffect* value);

  constexpr ::GlobalNamespace::NoteDebrisSpawner*& __get__noteDebrisSpawner();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteDebrisSpawner*> const& __get__noteDebrisSpawner() const;

  constexpr void __set__noteDebrisSpawner(::GlobalNamespace::NoteDebrisSpawner* value);

  constexpr ::GlobalNamespace::NoteCutHapticEffect*& __get__noteCutHapticEffect();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutHapticEffect*> const& __get__noteCutHapticEffect() const;

  constexpr void __set__noteCutHapticEffect(::GlobalNamespace::NoteCutHapticEffect* value);

  constexpr ::GlobalNamespace::ShockwaveEffect*& __get__shockwaveEffect();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ShockwaveEffect*> const& __get__shockwaveEffect() const;

  constexpr void __set__shockwaveEffect(::GlobalNamespace::ShockwaveEffect* value);

  constexpr ::GlobalNamespace::BombExplosionEffect*& __get__bombExplosionEffect();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BombExplosionEffect*> const& __get__bombExplosionEffect() const;

  constexpr void __set__bombExplosionEffect(::GlobalNamespace::BombExplosionEffect* value);

  constexpr ::GlobalNamespace::ColorManager*& __get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __get__colorManager() const;

  constexpr void __set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __get__beatmapObjectManager() const;

  constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr ::GlobalNamespace::AudioTimeSyncController*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value);

  /// @brief Method Start, addr 0x23a2554, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23a25e0, size 0x98, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleNoteWasCut, addr 0x23a2678, size 0x17c, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method PlayHitNoteHapticEffect, addr 0x23a2db0, size 0x50, virtual false, abstract: false, final false
  inline void PlayHitNoteHapticEffect(::GlobalNamespace::NoteCutInfo noteCutInfo, ::GlobalNamespace::__NoteCutHapticEffect__Type hapticType);

  /// @brief Method SpawnNoteCutEffect, addr 0x23a2844, size 0x56c, virtual false, abstract: false, final false
  inline void SpawnNoteCutEffect(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::GlobalNamespace::NoteController* noteController, int32_t sparkleParticlesCount, int32_t explosionParticlesCount);

  /// @brief Method SpawnBombCutEffect, addr 0x23a27f4, size 0x50, virtual false, abstract: false, final false
  inline void SpawnBombCutEffect(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::GlobalNamespace::NoteController* noteController);

  static inline ::GlobalNamespace::NoteCutCoreEffectsSpawner* New_ctor();

  /// @brief Method .ctor, addr 0x23a3690, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutCoreEffectsSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutCoreEffectsSpawner(NoteCutCoreEffectsSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutCoreEffectsSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutCoreEffectsSpawner(NoteCutCoreEffectsSpawner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutCoreEffectsSpawner();

public:
  /// @brief Field _shockWaveYPos, offset: 0x18, size: 0x4, def value: None
  float_t ____shockWaveYPos;

  /// @brief Field _noteCutParticlesEffect, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::NoteCutParticlesEffect* ____noteCutParticlesEffect;

  /// @brief Field _noteDebrisSpawner, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::NoteDebrisSpawner* ____noteDebrisSpawner;

  /// @brief Field _noteCutHapticEffect, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::NoteCutHapticEffect* ____noteCutHapticEffect;

  /// @brief Field _shockwaveEffect, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ShockwaveEffect* ____shockwaveEffect;

  /// @brief Field _bombExplosionEffect, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BombExplosionEffect* ____bombExplosionEffect;

  /// @brief Field _colorManager, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _beatmapObjectManager, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _audioTimeSyncController, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::AudioTimeSyncController* ____audioTimeSyncController;

  /// @brief Field kNormalNoteSparkleParticlesCount offset 0xffffffff size 0x4
  static constexpr int32_t kNormalNoteSparkleParticlesCount{ static_cast<int32_t>(0x96) };

  /// @brief Field kNormalNoteExplosionParticlesCount offset 0xffffffff size 0x4
  static constexpr int32_t kNormalNoteExplosionParticlesCount{ static_cast<int32_t>(0x32) };

  /// @brief Field kBurstSliderElementSparkleParticlesCount offset 0xffffffff size 0x4
  static constexpr int32_t kBurstSliderElementSparkleParticlesCount{ static_cast<int32_t>(0x32) };

  /// @brief Field kBurstSliderElementParticlesCount offset 0xffffffff size 0x4
  static constexpr int32_t kBurstSliderElementParticlesCount{ static_cast<int32_t>(0x14) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutCoreEffectsSpawner, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____shockWaveYPos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____noteCutParticlesEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____noteDebrisSpawner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____noteCutHapticEffect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____shockwaveEffect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____bombExplosionEffect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____colorManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____beatmapObjectManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutCoreEffectsSpawner, ____audioTimeSyncController) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteCutCoreEffectsSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutCoreEffectsSpawner*, "", "NoteCutCoreEffectsSpawner");
