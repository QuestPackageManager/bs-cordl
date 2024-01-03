#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MissedNoteEffectSpawner)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class FlyingSpriteSpawner;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class __CoreGameHUDController__InitData;
}
// Forward declare root types
namespace GlobalNamespace {
class MissedNoteEffectSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissedNoteEffectSpawner);
// Type: ::MissedNoteEffectSpawner
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4892))
// CS Name: ::MissedNoteEffectSpawner*
class CORDL_TYPE MissedNoteEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _missedNoteFlyingSpriteSpawner, offset 0x18, size 0x8
  __declspec(property(get = __get__missedNoteFlyingSpriteSpawner, put = __set__missedNoteFlyingSpriteSpawner))::GlobalNamespace::FlyingSpriteSpawner* _missedNoteFlyingSpriteSpawner;

  /// @brief Field _beatmapObjectManager, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapObjectManager, put = __set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _audioTimeSyncController, offset 0x28, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::AudioTimeSyncController* _audioTimeSyncController;

  /// @brief Field _initData, offset 0x30, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__CoreGameHUDController__InitData* _initData;

  /// @brief Field _spawnPosZ, offset 0x38, size 0x4
  __declspec(property(get = __get__spawnPosZ, put = __set__spawnPosZ)) float_t _spawnPosZ;

  constexpr ::GlobalNamespace::FlyingSpriteSpawner*& __get__missedNoteFlyingSpriteSpawner();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FlyingSpriteSpawner*> const& __get__missedNoteFlyingSpriteSpawner() const;

  constexpr void __set__missedNoteFlyingSpriteSpawner(::GlobalNamespace::FlyingSpriteSpawner* value);

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __get__beatmapObjectManager() const;

  constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr ::GlobalNamespace::AudioTimeSyncController*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value);

  constexpr ::GlobalNamespace::__CoreGameHUDController__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CoreGameHUDController__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__CoreGameHUDController__InitData* value);

  constexpr float_t& __get__spawnPosZ();

  constexpr float_t const& __get__spawnPosZ() const;

  constexpr void __set__spawnPosZ(float_t value);

  /// @brief Method Start, addr 0x23a2254, size 0xd4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23a2328, size 0x98, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleNoteWasMissed, addr 0x23a23c0, size 0x18c, virtual false, abstract: false, final false
  inline void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  static inline ::GlobalNamespace::MissedNoteEffectSpawner* New_ctor();

  /// @brief Method .ctor, addr 0x23a254c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissedNoteEffectSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissedNoteEffectSpawner(MissedNoteEffectSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissedNoteEffectSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissedNoteEffectSpawner(MissedNoteEffectSpawner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissedNoteEffectSpawner();

public:
  /// @brief Field _missedNoteFlyingSpriteSpawner, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::FlyingSpriteSpawner* ____missedNoteFlyingSpriteSpawner;

  /// @brief Field _beatmapObjectManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _audioTimeSyncController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::AudioTimeSyncController* ____audioTimeSyncController;

  /// @brief Field _initData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__CoreGameHUDController__InitData* ____initData;

  /// @brief Field _spawnPosZ, offset: 0x38, size: 0x4, def value: None
  float_t ____spawnPosZ;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissedNoteEffectSpawner, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissedNoteEffectSpawner, ____missedNoteFlyingSpriteSpawner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissedNoteEffectSpawner, ____beatmapObjectManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissedNoteEffectSpawner, ____audioTimeSyncController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissedNoteEffectSpawner, ____initData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissedNoteEffectSpawner, ____spawnPosZ) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissedNoteEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissedNoteEffectSpawner*, "", "MissedNoteEffectSpawner");
