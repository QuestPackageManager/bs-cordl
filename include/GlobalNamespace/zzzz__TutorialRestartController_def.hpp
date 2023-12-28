#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TutorialRestartController)
namespace GlobalNamespace {
class ILevelRestartController;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialRestartController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialRestartController);
// Type: ::TutorialRestartController
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5084))
// CS Name: ::TutorialRestartController*
class CORDL_TYPE TutorialRestartController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _tutorialSceneSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get__tutorialSceneSetupData, put = __set__tutorialSceneSetupData))::GlobalNamespace::TutorialScenesTransitionSetupDataSO* _tutorialSceneSetupData;

  /// @brief Convert operator to "::GlobalNamespace::ILevelRestartController"
  constexpr operator ::GlobalNamespace::ILevelRestartController*() noexcept;

  constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO*& __get__tutorialSceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*> const& __get__tutorialSceneSetupData() const;

  constexpr void __set__tutorialSceneSetupData(::GlobalNamespace::TutorialScenesTransitionSetupDataSO* value);

  /// @brief Method RestartLevel addr 0x23cb018 size 0x20 virtual true final true
  inline void RestartLevel();

  static inline ::GlobalNamespace::TutorialRestartController* New_ctor();

  /// @brief Method .ctor addr 0x23cb038 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TutorialRestartController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialRestartController(TutorialRestartController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialRestartController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialRestartController(TutorialRestartController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialRestartController();

public:
  /// @brief Field _tutorialSceneSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::TutorialScenesTransitionSetupDataSO* ____tutorialSceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialRestartController, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialRestartController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialRestartController*, "", "TutorialRestartController");
