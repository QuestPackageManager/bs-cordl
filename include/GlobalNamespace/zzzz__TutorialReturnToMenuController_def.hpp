#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialReturnToMenuController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IReturnToMenuController_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TutorialReturnToMenuController)
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialReturnToMenuController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialReturnToMenuController);
// Dependencies IReturnToMenuController, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialReturnToMenuController
class CORDL_TYPE TutorialReturnToMenuController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _tutorialSceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialSceneSetupData, put = __cordl_internal_set__tutorialSceneSetupData)) ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>
      _tutorialSceneSetupData;

  /// @brief Convert operator to "::GlobalNamespace::IReturnToMenuController"
  constexpr operator ::GlobalNamespace::IReturnToMenuController*() noexcept;

  static inline ::GlobalNamespace::TutorialReturnToMenuController* New_ctor();

  /// @brief Method ReturnToMenu, addr 0x3bb280c, size 0x20, virtual true, abstract: false, final true
  inline void ReturnToMenu();

  constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> const& __cordl_internal_get__tutorialSceneSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>& __cordl_internal_get__tutorialSceneSetupData();

  constexpr void __cordl_internal_set__tutorialSceneSetupData(::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x3bb282c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IReturnToMenuController"
  constexpr ::GlobalNamespace::IReturnToMenuController* i___GlobalNamespace__IReturnToMenuController() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialReturnToMenuController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialReturnToMenuController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialReturnToMenuController(TutorialReturnToMenuController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialReturnToMenuController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialReturnToMenuController(TutorialReturnToMenuController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4463 };

  /// @brief Field _tutorialSceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> ____tutorialSceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialReturnToMenuController, ____tutorialSceneSetupData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialReturnToMenuController, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialReturnToMenuController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialReturnToMenuController*, "", "TutorialReturnToMenuController");
