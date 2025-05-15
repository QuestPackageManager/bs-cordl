#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TwoPaneSplitView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TwoPaneSplitViewOrientation_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TwoPaneSplitView)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct TwoPaneSplitViewOrientation;
}
namespace UnityEngine::UIElements {
class TwoPaneSplitViewResizer;
}
namespace UnityEngine::UIElements {
class TwoPaneSplitView_UxmlFactory;
}
namespace UnityEngine::UIElements {
class TwoPaneSplitView_UxmlTraits;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TwoPaneSplitView;
}
namespace UnityEngine::UIElements {
class TwoPaneSplitView_UxmlFactory;
}
namespace UnityEngine::UIElements {
class TwoPaneSplitView_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TwoPaneSplitView);
MARK_REF_PTR_T(::UnityEngine::UIElements::TwoPaneSplitView_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::TwoPaneSplitView_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TwoPaneSplitView/UxmlFactory
class CORDL_TYPE TwoPaneSplitView_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TwoPaneSplitView*, ::UnityEngine::UIElements::TwoPaneSplitView_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::TwoPaneSplitView_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4a11584, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TwoPaneSplitView_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TwoPaneSplitView_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TwoPaneSplitView_UxmlFactory(TwoPaneSplitView_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TwoPaneSplitView_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TwoPaneSplitView_UxmlFactory(TwoPaneSplitView_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5717 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TwoPaneSplitView_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.VisualElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TwoPaneSplitView/UxmlTraits
class CORDL_TYPE TwoPaneSplitView_UxmlTraits : public ::UnityEngine::UIElements::VisualElement_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_FixedPaneIndex, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FixedPaneIndex, put = __cordl_internal_set_m_FixedPaneIndex)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_FixedPaneIndex;

  /// @brief Field m_FixedPaneInitialDimension, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FixedPaneInitialDimension,
                      put = __cordl_internal_set_m_FixedPaneInitialDimension)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_FixedPaneInitialDimension;

  /// @brief Field m_Orientation, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Orientation,
                      put = __cordl_internal_set_m_Orientation)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>* m_Orientation;

  /// @brief Method Init, addr 0x4a115cc, size 0x16c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::TwoPaneSplitView_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& __cordl_internal_get_m_FixedPaneIndex() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_FixedPaneIndex();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& __cordl_internal_get_m_FixedPaneInitialDimension() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_FixedPaneInitialDimension();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>* const& __cordl_internal_get_m_Orientation() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>*& __cordl_internal_get_m_Orientation();

  constexpr void __cordl_internal_set_m_FixedPaneIndex(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_FixedPaneInitialDimension(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Orientation(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>* value);

  /// @brief Method .ctor, addr 0x4a11738, size 0x144, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TwoPaneSplitView_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TwoPaneSplitView_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TwoPaneSplitView_UxmlTraits(TwoPaneSplitView_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TwoPaneSplitView_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TwoPaneSplitView_UxmlTraits(TwoPaneSplitView_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5718 };

  /// @brief Field m_FixedPaneIndex, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_FixedPaneIndex;

  /// @brief Field m_FixedPaneInitialDimension, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_FixedPaneInitialDimension;

  /// @brief Field m_Orientation, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>* ___m_Orientation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView_UxmlTraits, ___m_FixedPaneIndex) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView_UxmlTraits, ___m_FixedPaneInitialDimension) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView_UxmlTraits, ___m_Orientation) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TwoPaneSplitView_UxmlTraits, 0x88>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TwoPaneSplitViewOrientation, UnityEngine.UIElements.VisualElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TwoPaneSplitView
class CORDL_TYPE TwoPaneSplitView : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::TwoPaneSplitView_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::TwoPaneSplitView_UxmlTraits;

  __declspec(property(get = get_contentContainer)) ::UnityEngine::UIElements::VisualElement* contentContainer;

  __declspec(property(get = get_fixedPane)) ::UnityEngine::UIElements::VisualElement* fixedPane;

  __declspec(property(get = get_fixedPaneDimension, put = set_fixedPaneDimension)) float_t fixedPaneDimension;

  __declspec(property(get = get_fixedPaneIndex)) int32_t fixedPaneIndex;

  __declspec(property(get = get_flexedPane)) ::UnityEngine::UIElements::VisualElement* flexedPane;

  /// @brief Field m_CollapseMode, offset 0x400, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CollapseMode, put = __cordl_internal_set_m_CollapseMode)) bool m_CollapseMode;

  /// @brief Field m_Content, offset 0x408, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Content, put = __cordl_internal_set_m_Content)) ::UnityEngine::UIElements::VisualElement* m_Content;

  /// @brief Field m_DragLine, offset 0x3f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DragLine, put = __cordl_internal_set_m_DragLine)) ::UnityEngine::UIElements::VisualElement* m_DragLine;

  /// @brief Field m_DragLineAnchor, offset 0x3f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DragLineAnchor, put = __cordl_internal_set_m_DragLineAnchor)) ::UnityEngine::UIElements::VisualElement* m_DragLineAnchor;

  /// @brief Field m_FixedPane, offset 0x3d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FixedPane, put = __cordl_internal_set_m_FixedPane)) ::UnityEngine::UIElements::VisualElement* m_FixedPane;

  /// @brief Field m_FixedPaneDimension, offset 0x3e8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FixedPaneDimension, put = __cordl_internal_set_m_FixedPaneDimension)) float_t m_FixedPaneDimension;

  /// @brief Field m_FixedPaneIndex, offset 0x414, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FixedPaneIndex, put = __cordl_internal_set_m_FixedPaneIndex)) int32_t m_FixedPaneIndex;

  /// @brief Field m_FixedPaneInitialDimension, offset 0x418, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FixedPaneInitialDimension, put = __cordl_internal_set_m_FixedPaneInitialDimension)) float_t m_FixedPaneInitialDimension;

  /// @brief Field m_FlexedPane, offset 0x3e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FlexedPane, put = __cordl_internal_set_m_FlexedPane)) ::UnityEngine::UIElements::VisualElement* m_FlexedPane;

  /// @brief Field m_LeftPane, offset 0x3c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LeftPane, put = __cordl_internal_set_m_LeftPane)) ::UnityEngine::UIElements::VisualElement* m_LeftPane;

  /// @brief Field m_Orientation, offset 0x410, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Orientation, put = __cordl_internal_set_m_Orientation)) ::UnityEngine::UIElements::TwoPaneSplitViewOrientation m_Orientation;

  /// @brief Field m_Resizer, offset 0x420, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Resizer, put = __cordl_internal_set_m_Resizer)) ::UnityEngine::UIElements::TwoPaneSplitViewResizer* m_Resizer;

  /// @brief Field m_RightPane, offset 0x3d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RightPane, put = __cordl_internal_set_m_RightPane)) ::UnityEngine::UIElements::VisualElement* m_RightPane;

  __declspec(property(get = get_orientation)) ::UnityEngine::UIElements::TwoPaneSplitViewOrientation orientation;

  /// @brief Field s_ContentContainerClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ContentContainerClassName, put = setStaticF_s_ContentContainerClassName)) ::StringW s_ContentContainerClassName;

  /// @brief Field s_HandleDragLineAnchorClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_HandleDragLineAnchorClassName, put = setStaticF_s_HandleDragLineAnchorClassName)) ::StringW s_HandleDragLineAnchorClassName;

  /// @brief Field s_HandleDragLineAnchorHorizontalClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_HandleDragLineAnchorHorizontalClassName, put = setStaticF_s_HandleDragLineAnchorHorizontalClassName)) ::StringW s_HandleDragLineAnchorHorizontalClassName;

  /// @brief Field s_HandleDragLineAnchorVerticalClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_HandleDragLineAnchorVerticalClassName, put = setStaticF_s_HandleDragLineAnchorVerticalClassName)) ::StringW s_HandleDragLineAnchorVerticalClassName;

  /// @brief Field s_HandleDragLineClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_HandleDragLineClassName, put = setStaticF_s_HandleDragLineClassName)) ::StringW s_HandleDragLineClassName;

  /// @brief Field s_HandleDragLineHorizontalClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_HandleDragLineHorizontalClassName, put = setStaticF_s_HandleDragLineHorizontalClassName)) ::StringW s_HandleDragLineHorizontalClassName;

  /// @brief Field s_HandleDragLineVerticalClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_HandleDragLineVerticalClassName, put = setStaticF_s_HandleDragLineVerticalClassName)) ::StringW s_HandleDragLineVerticalClassName;

  /// @brief Field s_HorizontalClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_HorizontalClassName, put = setStaticF_s_HorizontalClassName)) ::StringW s_HorizontalClassName;

  /// @brief Field s_UssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UssClassName, put = setStaticF_s_UssClassName)) ::StringW s_UssClassName;

  /// @brief Field s_VerticalClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_VerticalClassName, put = setStaticF_s_VerticalClassName)) ::StringW s_VerticalClassName;

  /// @brief Method Init, addr 0x4a0f0c8, size 0x2d8, virtual false, abstract: false, final false
  inline void Init(int32_t fixedPaneIndex, float_t fixedPaneInitialDimension, ::UnityEngine::UIElements::TwoPaneSplitViewOrientation orientation);

  static inline ::UnityEngine::UIElements::TwoPaneSplitView* New_ctor();

  /// @brief Method OnPostDisplaySetup, addr 0x4a10578, size 0x104, virtual false, abstract: false, final false
  inline void OnPostDisplaySetup(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method OnSizeChange, addr 0x4a1074c, size 0xc, virtual false, abstract: false, final false
  inline void OnSizeChange(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method OnViewDataReady, addr 0x4a113ac, size 0x3c, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method PostDisplaySetup, addr 0x4a0f3a0, size 0x11d8, virtual false, abstract: false, final false
  inline void PostDisplaySetup();

  /// @brief Method SetDragLineOffset, addr 0x4a11154, size 0x128, virtual false, abstract: false, final false
  inline void SetDragLineOffset(float_t offset);

  /// @brief Method SetFixedPaneDimension, addr 0x4a1127c, size 0x128, virtual false, abstract: false, final false
  inline void SetFixedPaneDimension(float_t dimension);

  /// @brief Method UpdateLayout, addr 0x4a10758, size 0x9fc, virtual false, abstract: false, final false
  inline void UpdateLayout(bool updateFixedPane, bool updateDragLine);

  constexpr bool const& __cordl_internal_get_m_CollapseMode() const;

  constexpr bool& __cordl_internal_get_m_CollapseMode();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Content() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Content();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_DragLine() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_DragLine();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_DragLineAnchor() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_DragLineAnchor();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_FixedPane() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_FixedPane();

  constexpr float_t const& __cordl_internal_get_m_FixedPaneDimension() const;

  constexpr float_t& __cordl_internal_get_m_FixedPaneDimension();

  constexpr int32_t const& __cordl_internal_get_m_FixedPaneIndex() const;

  constexpr int32_t& __cordl_internal_get_m_FixedPaneIndex();

  constexpr float_t const& __cordl_internal_get_m_FixedPaneInitialDimension() const;

  constexpr float_t& __cordl_internal_get_m_FixedPaneInitialDimension();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_FlexedPane() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_FlexedPane();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_LeftPane() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_LeftPane();

  constexpr ::UnityEngine::UIElements::TwoPaneSplitViewOrientation const& __cordl_internal_get_m_Orientation() const;

  constexpr ::UnityEngine::UIElements::TwoPaneSplitViewOrientation& __cordl_internal_get_m_Orientation();

  constexpr ::UnityEngine::UIElements::TwoPaneSplitViewResizer* const& __cordl_internal_get_m_Resizer() const;

  constexpr ::UnityEngine::UIElements::TwoPaneSplitViewResizer*& __cordl_internal_get_m_Resizer();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_RightPane() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_RightPane();

  constexpr void __cordl_internal_set_m_CollapseMode(bool value);

  constexpr void __cordl_internal_set_m_Content(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_DragLine(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_DragLineAnchor(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_FixedPane(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_FixedPaneDimension(float_t value);

  constexpr void __cordl_internal_set_m_FixedPaneIndex(int32_t value);

  constexpr void __cordl_internal_set_m_FixedPaneInitialDimension(float_t value);

  constexpr void __cordl_internal_set_m_FlexedPane(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_LeftPane(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Orientation(::UnityEngine::UIElements::TwoPaneSplitViewOrientation value);

  constexpr void __cordl_internal_set_m_Resizer(::UnityEngine::UIElements::TwoPaneSplitViewResizer* value);

  constexpr void __cordl_internal_set_m_RightPane(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x4a0eec0, size 0x208, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_s_ContentContainerClassName();

  static inline ::StringW getStaticF_s_HandleDragLineAnchorClassName();

  static inline ::StringW getStaticF_s_HandleDragLineAnchorHorizontalClassName();

  static inline ::StringW getStaticF_s_HandleDragLineAnchorVerticalClassName();

  static inline ::StringW getStaticF_s_HandleDragLineClassName();

  static inline ::StringW getStaticF_s_HandleDragLineHorizontalClassName();

  static inline ::StringW getStaticF_s_HandleDragLineVerticalClassName();

  static inline ::StringW getStaticF_s_HorizontalClassName();

  static inline ::StringW getStaticF_s_UssClassName();

  static inline ::StringW getStaticF_s_VerticalClassName();

  /// @brief Method get_contentContainer, addr 0x4a113a4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Method get_fixedPane, addr 0x4a0ee54, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_fixedPane();

  /// @brief Method get_fixedPaneDimension, addr 0x4a0ee74, size 0x30, virtual false, abstract: false, final false
  inline float_t get_fixedPaneDimension();

  /// @brief Method get_fixedPaneIndex, addr 0x4a0ee64, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_fixedPaneIndex();

  /// @brief Method get_flexedPane, addr 0x4a0ee5c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_flexedPane();

  /// @brief Method get_orientation, addr 0x4a0ee6c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TwoPaneSplitViewOrientation get_orientation();

  static inline void setStaticF_s_ContentContainerClassName(::StringW value);

  static inline void setStaticF_s_HandleDragLineAnchorClassName(::StringW value);

  static inline void setStaticF_s_HandleDragLineAnchorHorizontalClassName(::StringW value);

  static inline void setStaticF_s_HandleDragLineAnchorVerticalClassName(::StringW value);

  static inline void setStaticF_s_HandleDragLineClassName(::StringW value);

  static inline void setStaticF_s_HandleDragLineHorizontalClassName(::StringW value);

  static inline void setStaticF_s_HandleDragLineVerticalClassName(::StringW value);

  static inline void setStaticF_s_HorizontalClassName(::StringW value);

  static inline void setStaticF_s_UssClassName(::StringW value);

  static inline void setStaticF_s_VerticalClassName(::StringW value);

  /// @brief Method set_fixedPaneDimension, addr 0x4a0eea4, size 0x1c, virtual false, abstract: false, final false
  inline void set_fixedPaneDimension(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TwoPaneSplitView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TwoPaneSplitView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TwoPaneSplitView(TwoPaneSplitView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TwoPaneSplitView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TwoPaneSplitView(TwoPaneSplitView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5719 };

  /// @brief Field m_LeftPane, offset: 0x3c8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_LeftPane;

  /// @brief Field m_RightPane, offset: 0x3d0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_RightPane;

  /// @brief Field m_FixedPane, offset: 0x3d8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_FixedPane;

  /// @brief Field m_FlexedPane, offset: 0x3e0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_FlexedPane;

  /// @brief Field m_FixedPaneDimension, offset: 0x3e8, size: 0x4, def value: None
  float_t ___m_FixedPaneDimension;

  /// @brief Field m_DragLine, offset: 0x3f0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_DragLine;

  /// @brief Field m_DragLineAnchor, offset: 0x3f8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_DragLineAnchor;

  /// @brief Field m_CollapseMode, offset: 0x400, size: 0x1, def value: None
  bool ___m_CollapseMode;

  /// @brief Field m_Content, offset: 0x408, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Content;

  /// @brief Field m_Orientation, offset: 0x410, size: 0x4, def value: None
  ::UnityEngine::UIElements::TwoPaneSplitViewOrientation ___m_Orientation;

  /// @brief Field m_FixedPaneIndex, offset: 0x414, size: 0x4, def value: None
  int32_t ___m_FixedPaneIndex;

  /// @brief Field m_FixedPaneInitialDimension, offset: 0x418, size: 0x4, def value: None
  float_t ___m_FixedPaneInitialDimension;

  /// @brief Field m_Resizer, offset: 0x420, size: 0x8, def value: None
  ::UnityEngine::UIElements::TwoPaneSplitViewResizer* ___m_Resizer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_LeftPane) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_RightPane) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_FixedPane) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_FlexedPane) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_FixedPaneDimension) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_DragLine) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_DragLineAnchor) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_CollapseMode) == 0x400, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_Content) == 0x408, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_Orientation) == 0x410, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_FixedPaneIndex) == 0x414, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_FixedPaneInitialDimension) == 0x418, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_Resizer) == 0x420, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TwoPaneSplitView, 0x428>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TwoPaneSplitView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TwoPaneSplitView*, "UnityEngine.UIElements", "TwoPaneSplitView");
NEED_NO_BOX(::UnityEngine::UIElements::TwoPaneSplitView_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TwoPaneSplitView_UxmlFactory*, "UnityEngine.UIElements", "TwoPaneSplitView/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::TwoPaneSplitView_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TwoPaneSplitView_UxmlTraits*, "UnityEngine.UIElements", "TwoPaneSplitView/UxmlTraits");
