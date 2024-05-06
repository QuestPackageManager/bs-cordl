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
// Type: UnityEngine.UIElements::IVisualElementPanelActivatable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IVisualElementPanelActivatable*
class CORDL_TYPE IVisualElementPanelActivatable {
public:
  // Declarations
  __declspec(property(get = get_element))::UnityEngine::UIElements::VisualElement* element;

  /// @brief Method CanBeActivated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool CanBeActivated();

  /// @brief Method OnPanelActivate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPanelActivate();

  /// @brief Method OnPanelDeactivate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPanelDeactivate();

  /// @brief Method get_element, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::VisualElement* get_element();

  // Ctor Parameters [CppParam { name: "", ty: "IVisualElementPanelActivatable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVisualElementPanelActivatable(IVisualElementPanelActivatable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVisualElementPanelActivatable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVisualElementPanelActivatable(IVisualElementPanelActivatable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IVisualElementPanelActivatable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IVisualElementPanelActivatable*, "UnityEngine.UIElements", "IVisualElementPanelActivatable");
