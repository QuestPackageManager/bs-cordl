#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(BadNoteCutEffectSpawner)
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
struct NoteCutInfo;
}
namespace GlobalNamespace {
class __CoreGameHUDController__InitData;
}
// Forward declare root types
namespace GlobalNamespace {
class BadNoteCutEffectSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BadNoteCutEffectSpawner);
// Type: ::BadNoteCutEffectSpawner
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4884))
// CS Name: ::BadNoteCutEffectSpawner*
class CORDL_TYPE BadNoteCutEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _failFlyingSpriteSpawner, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__failFlyingSpriteSpawner,
                      put = __cordl_internal_set__failFlyingSpriteSpawner))::UnityW<::GlobalNamespace::FlyingSpriteSpawner> _failFlyingSpriteSpawner;

  /// @brief Field _beatmapObjectManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _audioTimeSyncController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController,
                      put = __cordl_internal_set__audioTimeSyncController))::UnityW<::GlobalNamespace::AudioTimeSyncController> _audioTimeSyncController;

  /// @brief Field _initData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__CoreGameHUDController__InitData* _initData;

  constexpr ::UnityW<::GlobalNamespace::FlyingSpriteSpawner>& __cordl_internal_get__failFlyingSpriteSpawner();

  constexpr ::UnityW<::GlobalNamespace::FlyingSpriteSpawner> const& __cordl_internal_get__failFlyingSpriteSpawner() const;

  constexpr void __cordl_internal_set__failFlyingSpriteSpawner(::UnityW<::GlobalNamespace::FlyingSpriteSpawner> value);

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr ::GlobalNamespace::__CoreGameHUDController__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CoreGameHUDController__InitData*> const& __cordl_internal_get__initData() const;

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__CoreGameHUDController__InitData* value);

  /// @brief Method Start, addr 0x23a0eb0, size 0xb4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23a0f64, size 0x98, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleNoteWasCut, addr 0x23a0ffc, size 0x118, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  static inline ::GlobalNamespace::BadNoteCutEffectSpawner* New_ctor();

  /// @brief Method .ctor, addr 0x23a1310, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BadNoteCutEffectSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BadNoteCutEffectSpawner(BadNoteCutEffectSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BadNoteCutEffectSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BadNoteCutEffectSpawner(BadNoteCutEffectSpawner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BadNoteCutEffectSpawner();

public:
  /// @brief Field _failFlyingSpriteSpawner, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FlyingSpriteSpawner> ____failFlyingSpriteSpawner;

  /// @brief Field _beatmapObjectManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _audioTimeSyncController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _initData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__CoreGameHUDController__InitData* ____initData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BadNoteCutEffectSpawner, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BadNoteCutEffectSpawner, ____failFlyingSpriteSpawner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BadNoteCutEffectSpawner, ____beatmapObjectManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BadNoteCutEffectSpawner, ____audioTimeSyncController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BadNoteCutEffectSpawner, ____initData) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BadNoteCutEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BadNoteCutEffectSpawner*, "", "BadNoteCutEffectSpawner");
