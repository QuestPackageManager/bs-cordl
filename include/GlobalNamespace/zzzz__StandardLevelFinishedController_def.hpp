#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelFinishedController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StandardLevelFinishedController)
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelFinishedController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelFinishedController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardLevelFinishedController
class CORDL_TYPE StandardLevelFinishedController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gameplayManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayManager, put = __cordl_internal_set__gameplayManager)) ::GlobalNamespace::ILevelEndActions* _gameplayManager;

  /// @brief Field _prepareLevelCompletionResults, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__prepareLevelCompletionResults, put = __cordl_internal_set__prepareLevelCompletionResults)) ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>
      _prepareLevelCompletionResults;

  /// @brief Field _standardLevelSceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelSceneSetupData,
                      put = __cordl_internal_set__standardLevelSceneSetupData)) ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>
      _standardLevelSceneSetupData;

  /// @brief Method HandleLevelFinished, addr 0x3bb2708, size 0x4, virtual false, abstract: false, final false
  inline void HandleLevelFinished();

  static inline ::GlobalNamespace::StandardLevelFinishedController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bb2608, size 0x100, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3bb2518, size 0xf0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartLevelFinished, addr 0x3bb270c, size 0x40, virtual false, abstract: false, final false
  inline void StartLevelFinished();

  constexpr ::GlobalNamespace::ILevelEndActions* const& __cordl_internal_get__gameplayManager() const;

  constexpr ::GlobalNamespace::ILevelEndActions*& __cordl_internal_get__gameplayManager();

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> const& __cordl_internal_get__prepareLevelCompletionResults() const;

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>& __cordl_internal_get__prepareLevelCompletionResults();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__standardLevelSceneSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get__standardLevelSceneSetupData();

  constexpr void __cordl_internal_set__gameplayManager(::GlobalNamespace::ILevelEndActions* value);

  constexpr void __cordl_internal_set__prepareLevelCompletionResults(::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> value);

  constexpr void __cordl_internal_set__standardLevelSceneSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x3bb274c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelFinishedController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelFinishedController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelFinishedController(StandardLevelFinishedController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelFinishedController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelFinishedController(StandardLevelFinishedController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4459 };

  /// @brief Field _standardLevelSceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ____standardLevelSceneSetupData;

  /// @brief Field _prepareLevelCompletionResults, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> ____prepareLevelCompletionResults;

  /// @brief Field _gameplayManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ILevelEndActions* ____gameplayManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelFinishedController, ____standardLevelSceneSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelFinishedController, ____prepareLevelCompletionResults) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelFinishedController, ____gameplayManager) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelFinishedController, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelFinishedController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelFinishedController*, "", "StandardLevelFinishedController");
