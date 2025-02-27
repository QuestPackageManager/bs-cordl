#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IVisualElementPanelActivatable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVisualElementPanelActivatable)
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IVisualElementPanelActivatable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IVisualElementPanelActivatable);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IVisualElementPanelActivatable
class CORDL_TYPE IVisualElementPanelActivatable {
public:
  // Declarations
  __declspec(property(get = get_element)) ::UnityEngine::UIElements::VisualElement* element;

  /// @brief Method CanBeActivated, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CanBeActivated();

  /// @brief Method OnPanelActivate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnPanelActivate();

  /// @brief Method OnPanelDeactivate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnPanelDeactivate();

  /// @brief Method get_element, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_element();

  // Ctor Parameters [CppParam { name: "", ty: "IVisualElementPanelActivatable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVisualElementPanelActivatable(IVisualElementPanelActivatable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6330 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IVisualElementPanelActivatable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IVisualElementPanelActivatable*, "UnityEngine.UIElements", "IVisualElementPanelActivatable");
