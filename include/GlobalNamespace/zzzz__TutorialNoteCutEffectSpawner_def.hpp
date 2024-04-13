#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(TutorialNoteCutEffectSpawner)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class FlyingTextSpawner;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialNoteCutEffectSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialNoteCutEffectSpawner);
// Type: ::TutorialNoteCutEffectSpawner
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialNoteCutEffectSpawner*
class CORDL_TYPE TutorialNoteCutEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapObjectManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _failFlyingTextSpawner, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__failFlyingTextSpawner, put = __cordl_internal_set__failFlyingTextSpawner))::UnityW<::GlobalNamespace::FlyingTextSpawner> _failFlyingTextSpawner;

  /// @brief Method HandleNoteWasCut, addr 0x262c964, size 0x268, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  static inline ::GlobalNamespace::TutorialNoteCutEffectSpawner* New_ctor();

  /// @brief Method OnDestroy, addr 0x262c8cc, size 0x98, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x262c840, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::UnityW<::GlobalNamespace::FlyingTextSpawner> const& __cordl_internal_get__failFlyingTextSpawner() const;

  constexpr ::UnityW<::GlobalNamespace::FlyingTextSpawner>& __cordl_internal_get__failFlyingTextSpawner();

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__failFlyingTextSpawner(::UnityW<::GlobalNamespace::FlyingTextSpawner> value);

  /// @brief Method .ctor, addr 0x262cbcc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialNoteCutEffectSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialNoteCutEffectSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialNoteCutEffectSpawner(TutorialNoteCutEffectSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialNoteCutEffectSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialNoteCutEffectSpawner(TutorialNoteCutEffectSpawner const&) = delete;

  /// @brief Field _failFlyingTextSpawner, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FlyingTextSpawner> ____failFlyingTextSpawner;

  /// @brief Field _beatmapObjectManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialNoteCutEffectSpawner, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialNoteCutEffectSpawner, ____failFlyingTextSpawner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialNoteCutEffectSpawner, ____beatmapObjectManager) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialNoteCutEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialNoteCutEffectSpawner*, "", "TutorialNoteCutEffectSpawner");
