#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EditorPanelRootElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PanelRootElement_def.hpp"
CORDL_MODULE_EXPORT(EditorPanelRootElement)
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EditorPanelRootElement;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EditorPanelRootElement);
// Dependencies UnityEngine.UIElements.PanelRootElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EditorPanelRootElement
class CORDL_TYPE EditorPanelRootElement : public ::UnityEngine::UIElements::PanelRootElement {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::EditorPanelRootElement* New_ctor();

  /// @brief Method OnEventCompletedAtAnyTarget, addr 0x6befccc, size 0x3c, virtual false, abstract: false, final false
  inline void OnEventCompletedAtAnyTarget(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method .ctor, addr 0x6bede88, size 0x238, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditorPanelRootElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EditorPanelRootElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditorPanelRootElement(EditorPanelRootElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditorPanelRootElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditorPanelRootElement(EditorPanelRootElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4653 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EditorPanelRootElement, 0x4a8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EditorPanelRootElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EditorPanelRootElement*, "UnityEngine.UIElements", "EditorPanelRootElement");
