#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IRuntimePanelComponent.hpp"
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
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IRuntimePanelComponent
class CORDL_TYPE IRuntimePanelComponent {
public:
  // Declarations
  __declspec(property(put = set_panel)) ::UnityEngine::UIElements::IPanel* panel;

  /// @brief Method set_panel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_panel(::UnityEngine::UIElements::IPanel* value);

  // Ctor Parameters [CppParam { name: "", ty: "IRuntimePanelComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRuntimePanelComponent(IRuntimePanelComponent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6018 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IRuntimePanelComponent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IRuntimePanelComponent*, "UnityEngine.UIElements", "IRuntimePanelComponent");
