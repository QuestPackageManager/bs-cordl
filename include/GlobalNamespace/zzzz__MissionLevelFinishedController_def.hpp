#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionLevelFinishedController)
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class ILevelEndActions;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5178))
// CS Name: ::MissionLevelFinishedController*
class CORDL_TYPE MissionLevelFinishedController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _prepareLevelCompletionResults, offset 0x18, size 0x8
  __declspec(property(get = __get__prepareLevelCompletionResults, put = __set__prepareLevelCompletionResults))::GlobalNamespace::PrepareLevelCompletionResults* _prepareLevelCompletionResults;

  /// @brief Field _missionLevelSceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __get__missionLevelSceneSetupData, put = __set__missionLevelSceneSetupData))::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* _missionLevelSceneSetupData;

  /// @brief Field _missionObjectiveCheckersManager, offset 0x28, size 0x8
  __declspec(property(get = __get__missionObjectiveCheckersManager, put = __set__missionObjectiveCheckersManager))::GlobalNamespace::MissionObjectiveCheckersManager* _missionObjectiveCheckersManager;

  /// @brief Field _gameplayManager, offset 0x30, size 0x8
  __declspec(property(get = __get__gameplayManager, put = __set__gameplayManager))::GlobalNamespace::ILevelEndActions* _gameplayManager;

  constexpr ::GlobalNamespace::PrepareLevelCompletionResults*& __get__prepareLevelCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> const& __get__prepareLevelCompletionResults() const;

  constexpr void __set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults* value);

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& __get__missionLevelSceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> const& __get__missionLevelSceneSetupData() const;

  constexpr void __set__missionLevelSceneSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::MissionObjectiveCheckersManager*& __get__missionObjectiveCheckersManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveCheckersManager*> const& __get__missionObjectiveCheckersManager() const;

  constexpr void __set__missionObjectiveCheckersManager(::GlobalNamespace::MissionObjectiveCheckersManager* value);

  constexpr ::GlobalNamespace::ILevelEndActions*& __get__gameplayManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> const& __get__gameplayManager() const;

  constexpr void __set__gameplayManager(::GlobalNamespace::ILevelEndActions* value);

  /// @brief Method Start addr 0x20e7c98 size 0xf0 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x20e7d88 size 0x108 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleLevelFinished addr 0x20e7e90 size 0x4 virtual false final false
  inline void HandleLevelFinished();

  /// @brief Method StartLevelFinished addr 0x20e7e94 size 0xb0 virtual false final false
  inline void StartLevelFinished();

  static inline ::GlobalNamespace::MissionLevelFinishedController* New_ctor();

  /// @brief Method .ctor addr 0x20e7f44 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelFinishedController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelFinishedController(MissionLevelFinishedController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelFinishedController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelFinishedController(MissionLevelFinishedController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelFinishedController();

public:
  /// @brief Field _prepareLevelCompletionResults, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PrepareLevelCompletionResults* ____prepareLevelCompletionResults;

  /// @brief Field _missionLevelSceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* ____missionLevelSceneSetupData;

  /// @brief Field _missionObjectiveCheckersManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MissionObjectiveCheckersManager* ____missionObjectiveCheckersManager;

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
