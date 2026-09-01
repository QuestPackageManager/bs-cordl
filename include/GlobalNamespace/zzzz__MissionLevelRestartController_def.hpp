#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionLevelRestartController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionLevelRestartController)
namespace GlobalNamespace {
class ILevelRestartController;
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
class MissionLevelRestartController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MissionLevelRestartController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MissionLevelRestartController*, "", "MissionLevelRestartController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionLevelRestartController
class CORDL_TYPE MissionLevelRestartController : public ::UnityEngine::MonoBehaviour {
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

  /// @brief Convert operator to "::GlobalNamespace::ILevelRestartController"
  constexpr operator ::GlobalNamespace::ILevelRestartController*() noexcept;

  static inline ::GlobalNamespace::MissionLevelRestartController* New_ctor();

  /// @brief Method RestartLevel, addr 0x5919020, size 0xb8, virtual true, abstract: false, final true
  inline void RestartLevel();

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData* const& __cordl_internal_get__missionLevelSceneSetupData() const;

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData*& __cordl_internal_get__missionLevelSceneSetupData();

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> const& __cordl_internal_get__missionObjectiveCheckersManager() const;

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>& __cordl_internal_get__missionObjectiveCheckersManager();

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> const& __cordl_internal_get__prepareLevelCompletionResults() const;

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>& __cordl_internal_get__prepareLevelCompletionResults();

  constexpr void __cordl_internal_set__missionLevelSceneSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__missionObjectiveCheckersManager(::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> value);

  constexpr void __cordl_internal_set__prepareLevelCompletionResults(::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> value);

  /// @brief Method .ctor, addr 0x59190d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::ILevelRestartController"
  constexpr ::GlobalNamespace::ILevelRestartController* i___GlobalNamespace__ILevelRestartController() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelRestartController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelRestartController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelRestartController(MissionLevelRestartController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelRestartController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelRestartController(MissionLevelRestartController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6786 };

  /// @brief Field _prepareLevelCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> ____prepareLevelCompletionResults;

  /// @brief Field _missionObjectiveCheckersManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> ____missionObjectiveCheckersManager;

  /// @brief Field _missionLevelSceneSetupData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MissionLevelScenesTransitionSetupData* ____missionLevelSceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionLevelRestartController, ____prepareLevelCompletionResults) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelRestartController, ____missionObjectiveCheckersManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelRestartController, ____missionLevelSceneSetupData) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MissionLevelRestartController) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
