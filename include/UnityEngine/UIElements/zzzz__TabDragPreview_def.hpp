#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TabDragPreview.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TabDragPreview)
// Forward declare root types
namespace UnityEngine::UIElements {
class TabDragPreview;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TabDragPreview);
// Dependencies UnityEngine.UIElements.VisualElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TabDragPreview
class CORDL_TYPE TabDragPreview : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  static inline ::UnityEngine::UIElements::TabDragPreview* New_ctor();

  /// @brief Method .ctor, addr 0x6b40064, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TabDragPreview();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TabDragPreview", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TabDragPreview(TabDragPreview&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TabDragPreview", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TabDragPreview(TabDragPreview const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4325 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TabDragPreview, 0x4a8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TabDragPreview);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TabDragPreview*, "UnityEngine.UIElements", "TabDragPreview");
