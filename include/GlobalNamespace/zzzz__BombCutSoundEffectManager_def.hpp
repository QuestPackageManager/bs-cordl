#pragma once
// IWYU pragma private; include "GlobalNamespace/BombCutSoundEffectManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BombCutSoundEffectManager)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class BombCutSoundEffect;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
template <typename T> class RandomObjectPicker_1;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class __BombCutSoundEffect__Pool;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class BombCutSoundEffectManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BombCutSoundEffectManager);
// Type: ::BombCutSoundEffectManager
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BombCutSoundEffectManager*
class CORDL_TYPE BombCutSoundEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapObjectManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _bombCutSoundEffectPool, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__bombCutSoundEffectPool, put = __cordl_internal_set__bombCutSoundEffectPool)) ::GlobalNamespace::__BombCutSoundEffect__Pool* _bombCutSoundEffectPool;

  /// @brief Field _bombExplosionAudioClips, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__bombExplosionAudioClips,
                      put = __cordl_internal_set__bombExplosionAudioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>
      _bombExplosionAudioClips;

  /// @brief Field _randomSoundPicker, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__randomSoundPicker,
                      put = __cordl_internal_set__randomSoundPicker)) ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* _randomSoundPicker;

  /// @brief Field _volume, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__volume, put = __cordl_internal_set__volume)) float_t _volume;

  /// @brief Field saberManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_saberManager, put = __cordl_internal_set_saberManager)) ::UnityW<::GlobalNamespace::SaberManager> saberManager;

  /// @brief Method HandleBombCutSoundEffectDidFinish, addr 0x3a653a4, size 0xb4, virtual false, abstract: false, final false
  inline void HandleBombCutSoundEffectDidFinish(::GlobalNamespace::BombCutSoundEffect* bombCutSoundEffect);

  /// @brief Method HandleNoteWasCut, addr 0x3a65064, size 0x21c, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  static inline ::GlobalNamespace::BombCutSoundEffectManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x3a65280, size 0x88, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3a64de8, size 0xdc, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::__BombCutSoundEffect__Pool*& __cordl_internal_get__bombCutSoundEffectPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BombCutSoundEffect__Pool*> const& __cordl_internal_get__bombCutSoundEffectPool() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> const& __cordl_internal_get__bombExplosionAudioClips() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>& __cordl_internal_get__bombExplosionAudioClips();

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get__randomSoundPicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*> const& __cordl_internal_get__randomSoundPicker() const;

  constexpr float_t const& __cordl_internal_get__volume() const;

  constexpr float_t& __cordl_internal_get__volume();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get_saberManager() const;

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get_saberManager();

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__bombCutSoundEffectPool(::GlobalNamespace::__BombCutSoundEffect__Pool* value);

  constexpr void __cordl_internal_set__bombExplosionAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> value);

  constexpr void __cordl_internal_set__randomSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* value);

  constexpr void __cordl_internal_set__volume(float_t value);

  constexpr void __cordl_internal_set_saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  /// @brief Method .ctor, addr 0x3a65458, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BombCutSoundEffectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BombCutSoundEffectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BombCutSoundEffectManager(BombCutSoundEffectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BombCutSoundEffectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BombCutSoundEffectManager(BombCutSoundEffectManager const&) = delete;

  /// @brief Field _volume, offset: 0x20, size: 0x4, def value: None
  float_t ____volume;

  /// @brief Field _bombExplosionAudioClips, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> ____bombExplosionAudioClips;

  /// @brief Field _beatmapObjectManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field saberManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ___saberManager;

  /// @brief Field _bombCutSoundEffectPool, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__BombCutSoundEffect__Pool* ____bombCutSoundEffectPool;

  /// @brief Field _randomSoundPicker, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* ____randomSoundPicker;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3997 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BombCutSoundEffectManager, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BombCutSoundEffectManager, ____volume) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombCutSoundEffectManager, ____bombExplosionAudioClips) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombCutSoundEffectManager, ____beatmapObjectManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombCutSoundEffectManager, ___saberManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombCutSoundEffectManager, ____bombCutSoundEffectPool) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombCutSoundEffectManager, ____randomSoundPicker) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BombCutSoundEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BombCutSoundEffectManager*, "", "BombCutSoundEffectManager");
