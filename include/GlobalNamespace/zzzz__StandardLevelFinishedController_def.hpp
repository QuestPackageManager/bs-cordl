#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StandardLevelFinishedController)
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class ILevelEndActions;
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
// Type: ::StandardLevelFinishedController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5186))
// CS Name: ::StandardLevelFinishedController*
class CORDL_TYPE StandardLevelFinishedController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _standardLevelSceneSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get__standardLevelSceneSetupData, put = __set__standardLevelSceneSetupData))::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* _standardLevelSceneSetupData;

  /// @brief Field _prepareLevelCompletionResults, offset 0x20, size 0x8
  __declspec(property(get = __get__prepareLevelCompletionResults, put = __set__prepareLevelCompletionResults))::GlobalNamespace::PrepareLevelCompletionResults* _prepareLevelCompletionResults;

  /// @brief Field _gameplayManager, offset 0x28, size 0x8
  __declspec(property(get = __get__gameplayManager, put = __set__gameplayManager))::GlobalNamespace::ILevelEndActions* _gameplayManager;

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& __get__standardLevelSceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> const& __get__standardLevelSceneSetupData() const;

  constexpr void __set__standardLevelSceneSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::PrepareLevelCompletionResults*& __get__prepareLevelCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> const& __get__prepareLevelCompletionResults() const;

  constexpr void __set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults* value);

  constexpr ::GlobalNamespace::ILevelEndActions*& __get__gameplayManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> const& __get__gameplayManager() const;

  constexpr void __set__gameplayManager(::GlobalNamespace::ILevelEndActions* value);

  /// @brief Method Start addr 0x20e9234 size 0xf0 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x20e9324 size 0x108 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleLevelFinished addr 0x20e942c size 0x4 virtual false final false
  inline void HandleLevelFinished();

  /// @brief Method StartLevelFinished addr 0x20e9430 size 0x40 virtual false final false
  inline void StartLevelFinished();

  static inline ::GlobalNamespace::StandardLevelFinishedController* New_ctor();

  /// @brief Method .ctor addr 0x20e9470 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelFinishedController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelFinishedController(StandardLevelFinishedController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelFinishedController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelFinishedController(StandardLevelFinishedController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelFinishedController();

public:
  /// @brief Field _standardLevelSceneSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* ____standardLevelSceneSetupData;

  /// @brief Field _prepareLevelCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PrepareLevelCompletionResults* ____prepareLevelCompletionResults;

  /// @brief Field _gameplayManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ILevelEndActions* ____gameplayManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelFinishedController, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelFinishedController, ____standardLevelSceneSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelFinishedController, ____prepareLevelCompletionResults) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelFinishedController, ____gameplayManager) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelFinishedController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelFinishedController*, "", "StandardLevelFinishedController");
