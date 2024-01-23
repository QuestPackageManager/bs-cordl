#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRuntimePanelComponent)
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IRuntimePanelComponent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IRuntimePanelComponent);
// Type: UnityEngine.UIElements::IRuntimePanelComponent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6878))
// CS Name: ::UnityEngine.UIElements::IRuntimePanelComponent*
class CORDL_TYPE IRuntimePanelComponent {
public:
  // Declarations
  __declspec(property(put = set_panel))::UnityEngine::UIElements::IPanel* panel;

  /// @brief Method set_panel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_panel(::UnityEngine::UIElements::IPanel* value);

  // Ctor Parameters [CppParam { name: "", ty: "IRuntimePanelComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRuntimePanelComponent(IRuntimePanelComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRuntimePanelComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRuntimePanelComponent(IRuntimePanelComponent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IRuntimePanelComponent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IRuntimePanelComponent*, "UnityEngine.UIElements", "IRuntimePanelComponent");
