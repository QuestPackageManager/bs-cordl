#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialRestartController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ILevelRestartController_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TutorialRestartController)
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialRestartController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialRestartController);
// Dependencies ILevelRestartController, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialRestartController
class CORDL_TYPE TutorialRestartController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _tutorialSceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialSceneSetupData, put = __cordl_internal_set__tutorialSceneSetupData)) ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>
      _tutorialSceneSetupData;

  /// @brief Convert operator to "::GlobalNamespace::ILevelRestartController"
  constexpr operator ::GlobalNamespace::ILevelRestartController*() noexcept;

  static inline ::GlobalNamespace::TutorialRestartController* New_ctor();

  /// @brief Method RestartLevel, addr 0x3bb27e4, size 0x20, virtual true, abstract: false, final true
  inline void RestartLevel();

  constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> const& __cordl_internal_get__tutorialSceneSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>& __cordl_internal_get__tutorialSceneSetupData();

  constexpr void __cordl_internal_set__tutorialSceneSetupData(::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x3bb2804, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::ILevelRestartController"
  constexpr ::GlobalNamespace::ILevelRestartController* i___GlobalNamespace__ILevelRestartController() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialRestartController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialRestartController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialRestartController(TutorialRestartController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialRestartController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialRestartController(TutorialRestartController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4462 };

  /// @brief Field _tutorialSceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> ____tutorialSceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialRestartController, ____tutorialSceneSetupData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialRestartController, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialRestartController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialRestartController*, "", "TutorialRestartController");
