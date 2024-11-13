#pragma once
// IWYU pragma private; include "UnityEngine/UI/ILayoutController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILayoutController)
// Forward declare root types
namespace UnityEngine::UI {
class ILayoutController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::ILayoutController);
// Type: UnityEngine.UI::ILayoutController
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::ILayoutController*
class CORDL_TYPE ILayoutController {
public:
  // Declarations
  /// @brief Method SetLayoutHorizontal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutVertical, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetLayoutVertical();

  // Ctor Parameters [CppParam { name: "", ty: "ILayoutController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILayoutController(ILayoutController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILayoutController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILayoutController(ILayoutController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15061 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::ILayoutController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ILayoutController*, "UnityEngine.UI", "ILayoutController");
