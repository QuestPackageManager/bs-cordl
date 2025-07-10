#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialBeatmapObjectPoolsInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(TutorialBeatmapObjectPoolsInstaller)
namespace GlobalNamespace {
class BombNoteController;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class TutorialNoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialBeatmapObjectPoolsInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller);
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialBeatmapObjectPoolsInstaller
class CORDL_TYPE TutorialBeatmapObjectPoolsInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _basicNotePrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__basicNotePrefab, put = __cordl_internal_set__basicNotePrefab)) ::UnityW<::GlobalNamespace::TutorialNoteController> _basicNotePrefab;

  /// @brief Field _bombNotePrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__bombNotePrefab, put = __cordl_internal_set__bombNotePrefab)) ::UnityW<::GlobalNamespace::BombNoteController> _bombNotePrefab;

  /// @brief Field _obstaclePrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__obstaclePrefab, put = __cordl_internal_set__obstaclePrefab)) ::UnityW<::GlobalNamespace::ObstacleController> _obstaclePrefab;

  /// @brief Method InstallBindings, addr 0x3bf75d0, size 0x190, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::TutorialNoteController> const& __cordl_internal_get__basicNotePrefab() const;

  constexpr ::UnityW<::GlobalNamespace::TutorialNoteController>& __cordl_internal_get__basicNotePrefab();

  constexpr ::UnityW<::GlobalNamespace::BombNoteController> const& __cordl_internal_get__bombNotePrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BombNoteController>& __cordl_internal_get__bombNotePrefab();

  constexpr ::UnityW<::GlobalNamespace::ObstacleController> const& __cordl_internal_get__obstaclePrefab() const;

  constexpr ::UnityW<::GlobalNamespace::ObstacleController>& __cordl_internal_get__obstaclePrefab();

  constexpr void __cordl_internal_set__basicNotePrefab(::UnityW<::GlobalNamespace::TutorialNoteController> value);

  constexpr void __cordl_internal_set__bombNotePrefab(::UnityW<::GlobalNamespace::BombNoteController> value);

  constexpr void __cordl_internal_set__obstaclePrefab(::UnityW<::GlobalNamespace::ObstacleController> value);

  /// @brief Method .ctor, addr 0x3bf7760, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialBeatmapObjectPoolsInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialBeatmapObjectPoolsInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialBeatmapObjectPoolsInstaller(TutorialBeatmapObjectPoolsInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialBeatmapObjectPoolsInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialBeatmapObjectPoolsInstaller(TutorialBeatmapObjectPoolsInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4735 };

  /// @brief Field _basicNotePrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TutorialNoteController> ____basicNotePrefab;

  /// @brief Field _bombNotePrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BombNoteController> ____bombNotePrefab;

  /// @brief Field _obstaclePrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObstacleController> ____obstaclePrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller, ____basicNotePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller, ____bombNotePrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller, ____obstaclePrefab) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*, "", "TutorialBeatmapObjectPoolsInstaller");
