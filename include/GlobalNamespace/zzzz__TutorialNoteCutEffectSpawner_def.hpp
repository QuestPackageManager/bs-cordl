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
struct NoteCutInfo;
}
namespace GlobalNamespace {
class NoteController;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5437))
// CS Name: ::TutorialNoteCutEffectSpawner*
class CORDL_TYPE TutorialNoteCutEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _failFlyingTextSpawner, offset 0x18, size 0x8
  __declspec(property(get = __get__failFlyingTextSpawner, put = __set__failFlyingTextSpawner))::GlobalNamespace::FlyingTextSpawner* _failFlyingTextSpawner;

  /// @brief Field _beatmapObjectManager, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapObjectManager, put = __set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  constexpr ::GlobalNamespace::FlyingTextSpawner*& __get__failFlyingTextSpawner();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FlyingTextSpawner*> const& __get__failFlyingTextSpawner() const;

  constexpr void __set__failFlyingTextSpawner(::GlobalNamespace::FlyingTextSpawner* value);

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __get__beatmapObjectManager() const;

  constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  /// @brief Method Start addr 0x2126530 size 0x8c virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x21265bc size 0x98 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleNoteWasCut addr 0x2126654 size 0x268 virtual false final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  static inline ::GlobalNamespace::TutorialNoteCutEffectSpawner* New_ctor();

  /// @brief Method .ctor addr 0x21268bc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TutorialNoteCutEffectSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialNoteCutEffectSpawner(TutorialNoteCutEffectSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialNoteCutEffectSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialNoteCutEffectSpawner(TutorialNoteCutEffectSpawner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialNoteCutEffectSpawner();

public:
  /// @brief Field _failFlyingTextSpawner, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::FlyingTextSpawner* ____failFlyingTextSpawner;

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
