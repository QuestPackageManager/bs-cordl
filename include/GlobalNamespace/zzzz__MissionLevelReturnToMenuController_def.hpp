#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionLevelReturnToMenuController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionLevelReturnToMenuController)
namespace GlobalNamespace {
class IReturnToMenuController;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupData;
}
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelReturnToMenuController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MissionLevelReturnToMenuController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MissionLevelReturnToMenuController*, "", "MissionLevelReturnToMenuController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionLevelReturnToMenuController
class CORDL_TYPE MissionLevelReturnToMenuController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _missionLevelSceneSetupData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelSceneSetupData,
                      put = __cordl_internal_set__missionLevelSceneSetupData)) ::GlobalNamespace::MissionLevelScenesTransitionSetupData* _missionLevelSceneSetupData;

  /// @brief Field _missionObjectiveCheckersManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjectiveCheckersManager,
                      put = __cordl_internal_set__missionObjectiveCheckersManager)) ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>
      _missionObjectiveCheckersManager;

  /// @brief Field _prepareLevelCompletionResults, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__prepareLevelCompletionResults, put = __cordl_internal_set__prepareLevelCompletionResults)) ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>
      _prepareLevelCompletionResults;

  /// @brief Convert operator to "::GlobalNamespace::IReturnToMenuController"
  constexpr operator ::GlobalNamespace::IReturnToMenuController*() noexcept;

  static inline ::GlobalNamespace::MissionLevelReturnToMenuController* New_ctor();

  /// @brief Method ReturnToMenu, addr 0x5917904, size 0xb4, virtual true, abstract: false, final true
  inline void ReturnToMenu();

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData* const& __cordl_internal_get__missionLevelSceneSetupData() const;

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData*& __cordl_internal_get__missionLevelSceneSetupData();

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> const& __cordl_internal_get__missionObjectiveCheckersManager() const;

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>& __cordl_internal_get__missionObjectiveCheckersManager();

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> const& __cordl_internal_get__prepareLevelCompletionResults() const;

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>& __cordl_internal_get__prepareLevelCompletionResults();

  constexpr void __cordl_internal_set__missionLevelSceneSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__missionObjectiveCheckersManager(::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> value);

  constexpr void __cordl_internal_set__prepareLevelCompletionResults(::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> value);

  /// @brief Method .ctor, addr 0x59179b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IReturnToMenuController"
  constexpr ::GlobalNamespace::IReturnToMenuController* i___GlobalNamespace__IReturnToMenuController() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelReturnToMenuController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelReturnToMenuController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelReturnToMenuController(MissionLevelReturnToMenuController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelReturnToMenuController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelReturnToMenuController(MissionLevelReturnToMenuController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6762 };

  /// @brief Field _prepareLevelCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> ____prepareLevelCompletionResults;

  /// @brief Field _missionObjectiveCheckersManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> ____missionObjectiveCheckersManager;

  /// @brief Field _missionLevelSceneSetupData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MissionLevelScenesTransitionSetupData* ____missionLevelSceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionLevelReturnToMenuController, ____prepareLevelCompletionResults) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelReturnToMenuController, ____missionObjectiveCheckersManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelReturnToMenuController, ____missionLevelSceneSetupData) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MissionLevelReturnToMenuController) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
