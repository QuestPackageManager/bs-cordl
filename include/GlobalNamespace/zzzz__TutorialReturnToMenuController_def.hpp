#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TutorialReturnToMenuController)
namespace GlobalNamespace {
class IReturnToMenuController;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialReturnToMenuController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialReturnToMenuController);
// Type: ::TutorialReturnToMenuController
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5085))
// CS Name: ::TutorialReturnToMenuController*
class CORDL_TYPE TutorialReturnToMenuController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _tutorialSceneSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get__tutorialSceneSetupData, put = __set__tutorialSceneSetupData))::GlobalNamespace::TutorialScenesTransitionSetupDataSO* _tutorialSceneSetupData;

  /// @brief Convert operator to "::GlobalNamespace::IReturnToMenuController"
  constexpr operator ::GlobalNamespace::IReturnToMenuController*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IReturnToMenuController"
  constexpr ::GlobalNamespace::IReturnToMenuController* i___GlobalNamespace__IReturnToMenuController() noexcept;

  constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO*& __get__tutorialSceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*> const& __get__tutorialSceneSetupData() const;

  constexpr void __set__tutorialSceneSetupData(::GlobalNamespace::TutorialScenesTransitionSetupDataSO* value);

  /// @brief Method ReturnToMenu, addr 0x23cb040, size 0x20, virtual true, abstract: false, final true
  inline void ReturnToMenu();

  static inline ::GlobalNamespace::TutorialReturnToMenuController* New_ctor();

  /// @brief Method .ctor, addr 0x23cb060, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TutorialReturnToMenuController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialReturnToMenuController(TutorialReturnToMenuController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialReturnToMenuController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialReturnToMenuController(TutorialReturnToMenuController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialReturnToMenuController();

public:
  /// @brief Field _tutorialSceneSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::TutorialScenesTransitionSetupDataSO* ____tutorialSceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialReturnToMenuController, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialReturnToMenuController, ____tutorialSceneSetupData) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialReturnToMenuController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialReturnToMenuController*, "", "TutorialReturnToMenuController");
