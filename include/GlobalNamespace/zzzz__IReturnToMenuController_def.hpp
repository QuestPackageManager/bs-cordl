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
// Type: ::IReturnToMenuController
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IReturnToMenuController*
class CORDL_TYPE IReturnToMenuController {
public:
  // Declarations
  /// @brief Method ReturnToMenu, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ReturnToMenu();

  // Ctor Parameters [CppParam { name: "", ty: "IReturnToMenuController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IReturnToMenuController(IReturnToMenuController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IReturnToMenuController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReturnToMenuController(IReturnToMenuController const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IReturnToMenuController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IReturnToMenuController*, "", "IReturnToMenuController");
