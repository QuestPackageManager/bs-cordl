#pragma once
// IWYU pragma private; include "GlobalNamespace\IReturnToMenuController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IReturnToMenuController)
// Forward declare root types
namespace GlobalNamespace {
class IReturnToMenuController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IReturnToMenuController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IReturnToMenuController*, "", "IReturnToMenuController");
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23055 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
