#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionLevelRestartController)
namespace GlobalNamespace {
class ILevelRestartController;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
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
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelRestartController);
// Type: ::MissionLevelRestartController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4427))
// CS Name: ::MissionLevelRestartController*
class CORDL_TYPE MissionLevelRestartController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _missionLevelSceneSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelSceneSetupData,
                      put = __cordl_internal_set__missionLevelSceneSetupData))::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> _missionLevelSceneSetupData;

  /// @brief Field _prepareLevelCompletionResults, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__prepareLevelCompletionResults,
                      put = __cordl_internal_set__prepareLevelCompletionResults))::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> _prepareLevelCompletionResults;

  /// @brief Field _missionObjectiveCheckersManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjectiveCheckersManager,
                      put = __cordl_internal_set__missionObjectiveCheckersManager))::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> _missionObjectiveCheckersManager;

  /// @brief Convert operator to "::GlobalNamespace::ILevelRestartController"
  constexpr operator ::GlobalNamespace::ILevelRestartController*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ILevelRestartController"
  constexpr ::GlobalNamespace::ILevelRestartController* i___GlobalNamespace__ILevelRestartController() noexcept;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& __cordl_internal_get__missionLevelSceneSetupData();

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__missionLevelSceneSetupData() const;

  constexpr void __cordl_internal_set__missionLevelSceneSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value);

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>& __cordl_internal_get__prepareLevelCompletionResults();

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> const& __cordl_internal_get__prepareLevelCompletionResults() const;

  constexpr void __cordl_internal_set__prepareLevelCompletionResults(::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> value);

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>& __cordl_internal_get__missionObjectiveCheckersManager();

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> const& __cordl_internal_get__missionObjectiveCheckersManager() const;

  constexpr void __cordl_internal_set__missionObjectiveCheckersManager(::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> value);

  /// @brief Method RestartLevel, addr 0x2387364, size 0xb0, virtual true, abstract: false, final true
  inline void RestartLevel();

  static inline ::GlobalNamespace::MissionLevelRestartController* New_ctor();

  /// @brief Method .ctor, addr 0x2387414, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelRestartController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelRestartController(MissionLevelRestartController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelRestartController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelRestartController(MissionLevelRestartController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelRestartController();

public:
  /// @brief Field _missionLevelSceneSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> ____missionLevelSceneSetupData;

  /// @brief Field _prepareLevelCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> ____prepareLevelCompletionResults;

  /// @brief Field _missionObjectiveCheckersManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> ____missionObjectiveCheckersManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelRestartController, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelRestartController, ____missionLevelSceneSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelRestartController, ____prepareLevelCompletionResults) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelRestartController, ____missionObjectiveCheckersManager) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelRestartController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelRestartController*, "", "MissionLevelRestartController");
