#pragma once
// IWYU pragma private; include "GlobalNamespace/IReturnToMenuController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IReturnToMenuController)
// Forward declare root types
namespace GlobalNamespace {
class IReturnToMenuController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IReturnToMenuController);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IReturnToMenuController
class CORDL_TYPE IReturnToMenuController {
public:
  // Declarations
  /// @brief Method ReturnToMenu, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReturnToMenu();

  // Ctor Parameters [CppParam { name: "", ty: "IReturnToMenuController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReturnToMenuController(IReturnToMenuController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22646 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IReturnToMenuController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IReturnToMenuController*, "", "IReturnToMenuController");
