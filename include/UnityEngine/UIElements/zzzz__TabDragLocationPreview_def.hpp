#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TabDragLocationPreview.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TabDragLocationPreview)
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TabDragLocationPreview;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TabDragLocationPreview);
// Dependencies UnityEngine.UIElements.VisualElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TabDragLocationPreview
class CORDL_TYPE TabDragLocationPreview : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  /// @brief Field horizontalUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_horizontalUssClassName, put = setStaticF_horizontalUssClassName)) ::StringW horizontalUssClassName;

  /// @brief Field m_Preview, offset 0x4a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Preview, put = __cordl_internal_set_m_Preview)) ::UnityEngine::UIElements::VisualElement* m_Preview;

  __declspec(property(get = get_preview)) ::UnityEngine::UIElements::VisualElement* preview;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Field verticalUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_verticalUssClassName, put = setStaticF_verticalUssClassName)) ::StringW verticalUssClassName;

  /// @brief Field visualUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_visualUssClassName, put = setStaticF_visualUssClassName)) ::StringW visualUssClassName;

  static inline ::UnityEngine::UIElements::TabDragLocationPreview* New_ctor();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Preview() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Preview();

  constexpr void __cordl_internal_set_m_Preview(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x6b401bc, size 0x108, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_horizontalUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  static inline ::StringW getStaticF_verticalUssClassName();

  static inline ::StringW getStaticF_visualUssClassName();

  /// @brief Method get_preview, addr 0x6b401b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_preview();

  static inline void setStaticF_horizontalUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline void setStaticF_verticalUssClassName(::StringW value);

  static inline void setStaticF_visualUssClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TabDragLocationPreview();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TabDragLocationPreview", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TabDragLocationPreview(TabDragLocationPreview&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TabDragLocationPreview", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TabDragLocationPreview(TabDragLocationPreview const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4326 };

  /// @brief Field m_Preview, offset: 0x4a8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Preview;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TabDragLocationPreview, ___m_Preview) == 0x4a8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TabDragLocationPreview, 0x4b0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TabDragLocationPreview);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TabDragLocationPreview*, "UnityEngine.UIElements", "TabDragLocationPreview");
