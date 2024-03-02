#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionLevelFinishedController)
namespace GlobalNamespace {
class ILevelEndActions;
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
class MissionLevelFinishedController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelFinishedController);
// Type: ::MissionLevelFinishedController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionLevelFinishedController*
class CORDL_TYPE MissionLevelFinishedController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gameplayManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayManager, put = __cordl_internal_set__gameplayManager))::GlobalNamespace::ILevelEndActions* _gameplayManager;

  /// @brief Field _missionLevelSceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelSceneSetupData,
                      put = __cordl_internal_set__missionLevelSceneSetupData))::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> _missionLevelSceneSetupData;

  /// @brief Field _missionObjectiveCheckersManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjectiveCheckersManager,
                      put = __cordl_internal_set__missionObjectiveCheckersManager))::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> _missionObjectiveCheckersManager;

  /// @brief Field _prepareLevelCompletionResults, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__prepareLevelCompletionResults,
                      put = __cordl_internal_set__prepareLevelCompletionResults))::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> _prepareLevelCompletionResults;

  /// @brief Method HandleLevelFinished, addr 0x24551f0, size 0x4, virtual false, abstract: false, final false
  inline void HandleLevelFinished();

  static inline ::GlobalNamespace::MissionLevelFinishedController* New_ctor();

  /// @brief Method OnDestroy, addr 0x24550e8, size 0x108, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x2454ff8, size 0xf0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartLevelFinished, addr 0x24551f4, size 0xb0, virtual false, abstract: false, final false
  inline void StartLevelFinished();

  constexpr ::GlobalNamespace::ILevelEndActions*& __cordl_internal_get__gameplayManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> const& __cordl_internal_get__gameplayManager() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__missionLevelSceneSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& __cordl_internal_get__missionLevelSceneSetupData();

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> const& __cordl_internal_get__missionObjectiveCheckersManager() const;

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>& __cordl_internal_get__missionObjectiveCheckersManager();

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> const& __cordl_internal_get__prepareLevelCompletionResults() const;

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>& __cordl_internal_get__prepareLevelCompletionResults();

  constexpr void __cordl_internal_set__gameplayManager(::GlobalNamespace::ILevelEndActions* value);

  constexpr void __cordl_internal_set__missionLevelSceneSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__missionObjectiveCheckersManager(::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> value);

  constexpr void __cordl_internal_set__prepareLevelCompletionResults(::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> value);

  /// @brief Method .ctor, addr 0x24552a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelFinishedController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelFinishedController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelFinishedController(MissionLevelFinishedController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelFinishedController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelFinishedController(MissionLevelFinishedController const&) = delete;

  /// @brief Field _prepareLevelCompletionResults, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> ____prepareLevelCompletionResults;

  /// @brief Field _missionLevelSceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> ____missionLevelSceneSetupData;

  /// @brief Field _missionObjectiveCheckersManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> ____missionObjectiveCheckersManager;

  /// @brief Field _gameplayManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ILevelEndActions* ____gameplayManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelFinishedController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelFinishedController, ____prepareLevelCompletionResults) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelFinishedController, ____missionLevelSceneSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelFinishedController, ____missionObjectiveCheckersManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelFinishedController, ____gameplayManager) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelFinishedController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelFinishedController*, "", "MissionLevelFinishedController");
