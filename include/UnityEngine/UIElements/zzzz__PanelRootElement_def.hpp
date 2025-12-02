#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelRootElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
CORDL_MODULE_EXPORT(PanelRootElement)
// Forward declare root types
namespace UnityEngine::UIElements {
class PanelRootElement;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PanelRootElement);
// Dependencies UnityEngine.UIElements.VisualElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PanelRootElement
class CORDL_TYPE PanelRootElement : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::PanelRootElement* New_ctor();

  /// @brief Method .ctor, addr 0x6b84f08, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelRootElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelRootElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelRootElement(PanelRootElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelRootElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelRootElement(PanelRootElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4652 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PanelRootElement, 0x4a8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PanelRootElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PanelRootElement*, "UnityEngine.UIElements", "PanelRootElement");
