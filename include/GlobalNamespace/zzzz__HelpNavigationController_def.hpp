#pragma once
// IWYU pragma private; include "GlobalNamespace/HelpNavigationController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__NavigationController_def.hpp"
CORDL_MODULE_EXPORT(HelpNavigationController)
// Forward declare root types
namespace GlobalNamespace {
class HelpNavigationController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HelpNavigationController);
// Type: ::HelpNavigationController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 148, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HelpNavigationController*
class CORDL_TYPE HelpNavigationController : public ::HMUI::NavigationController {
public:
  // Declarations
  static inline ::GlobalNamespace::HelpNavigationController* New_ctor();

  /// @brief Method .ctor, addr 0x266abb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HelpNavigationController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HelpNavigationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HelpNavigationController(HelpNavigationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HelpNavigationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HelpNavigationController(HelpNavigationController const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HelpNavigationController, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HelpNavigationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HelpNavigationController*, "", "HelpNavigationController");
