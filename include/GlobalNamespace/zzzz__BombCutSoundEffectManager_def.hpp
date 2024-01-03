#pragma once
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
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4059))
// CS Name: ::BombCutSoundEffectManager*
class CORDL_TYPE BombCutSoundEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _volume, offset 0x18, size 0x4
  __declspec(property(get = __get__volume, put = __set__volume)) float_t _volume;

  /// @brief Field _bombExplosionAudioClips, offset 0x20, size 0x8
  __declspec(property(get = __get__bombExplosionAudioClips, put = __set__bombExplosionAudioClips))::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> _bombExplosionAudioClips;

  /// @brief Field _beatmapObjectManager, offset 0x28, size 0x8
  __declspec(property(get = __get__beatmapObjectManager, put = __set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field saberManager, offset 0x30, size 0x8
  __declspec(property(get = __get_saberManager, put = __set_saberManager))::GlobalNamespace::SaberManager* saberManager;

  /// @brief Field _bombCutSoundEffectPool, offset 0x38, size 0x8
  __declspec(property(get = __get__bombCutSoundEffectPool, put = __set__bombCutSoundEffectPool))::GlobalNamespace::__BombCutSoundEffect__Pool* _bombCutSoundEffectPool;

  /// @brief Field _randomSoundPicker, offset 0x40, size 0x8
  __declspec(property(get = __get__randomSoundPicker, put = __set__randomSoundPicker))::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* _randomSoundPicker;

  constexpr float_t& __get__volume();

  constexpr float_t const& __get__volume() const;

  constexpr void __set__volume(float_t value);

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*>& __get__bombExplosionAudioClips();

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> const& __get__bombExplosionAudioClips() const;

  constexpr void __set__bombExplosionAudioClips(::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> value);

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __get__beatmapObjectManager() const;

  constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr ::GlobalNamespace::SaberManager*& __get_saberManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> const& __get_saberManager() const;

  constexpr void __set_saberManager(::GlobalNamespace::SaberManager* value);

  constexpr ::GlobalNamespace::__BombCutSoundEffect__Pool*& __get__bombCutSoundEffectPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BombCutSoundEffect__Pool*> const& __get__bombCutSoundEffectPool() const;

  constexpr void __set__bombCutSoundEffectPool(::GlobalNamespace::__BombCutSoundEffect__Pool* value);

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*& __get__randomSoundPicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> const& __get__randomSoundPicker() const;

  constexpr void __set__randomSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* value);

  /// @brief Method Start, addr 0x222c8d8, size 0xe4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method HandleNoteWasCut, addr 0x222c9bc, size 0x220, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method OnDestroy, addr 0x222cbdc, size 0x98, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleBombCutSoundEffectDidFinish, addr 0x222cc74, size 0xb8, virtual false, abstract: false, final false
  inline void HandleBombCutSoundEffectDidFinish(::GlobalNamespace::BombCutSoundEffect* bombCutSoundEffect);

  static inline ::GlobalNamespace::BombCutSoundEffectManager* New_ctor();

  /// @brief Method .ctor, addr 0x222cd2c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BombCutSoundEffectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BombCutSoundEffectManager(BombCutSoundEffectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BombCutSoundEffectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BombCutSoundEffectManager(BombCutSoundEffectManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BombCutSoundEffectManager();

public:
  /// @brief Field _volume, offset: 0x18, size: 0x4, def value: None
  float_t ____volume;

  /// @brief Field _bombExplosionAudioClips, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> ____bombExplosionAudioClips;

  /// @brief Field _beatmapObjectManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field saberManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SaberManager* ___saberManager;

  /// @brief Field _bombCutSoundEffectPool, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__BombCutSoundEffect__Pool* ____bombCutSoundEffectPool;

  /// @brief Field _randomSoundPicker, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* ____randomSoundPicker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BombCutSoundEffectManager, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BombCutSoundEffectManager, ____volume) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombCutSoundEffectManager, ____bombExplosionAudioClips) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombCutSoundEffectManager, ____beatmapObjectManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombCutSoundEffectManager, ___saberManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombCutSoundEffectManager, ____bombCutSoundEffectPool) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombCutSoundEffectManager, ____randomSoundPicker) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BombCutSoundEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BombCutSoundEffectManager*, "", "BombCutSoundEffectManager");
