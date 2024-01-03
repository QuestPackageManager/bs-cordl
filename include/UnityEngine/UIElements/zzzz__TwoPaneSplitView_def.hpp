#pragma once
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
template <typename T> class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __TwoPaneSplitView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __TwoPaneSplitView__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TwoPaneSplitView;
}
namespace UnityEngine::UIElements {
class __TwoPaneSplitView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __TwoPaneSplitView__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TwoPaneSplitView);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6737))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7137))
// CS Name: ::TwoPaneSplitView::UxmlTraits*
class CORDL_TYPE __TwoPaneSplitView__UxmlTraits : public ::UnityEngine::UIElements::__VisualElement__UxmlTraits {
public:
  // Declarations
  /// @brief Field m_FixedPaneIndex, offset 0x70, size 0x8
  __declspec(property(get = __get_m_FixedPaneIndex, put = __set_m_FixedPaneIndex))::UnityEngine::UIElements::UxmlIntAttributeDescription* m_FixedPaneIndex;

  /// @brief Field m_FixedPaneInitialDimension, offset 0x78, size 0x8
  __declspec(property(get = __get_m_FixedPaneInitialDimension, put = __set_m_FixedPaneInitialDimension))::UnityEngine::UIElements::UxmlIntAttributeDescription* m_FixedPaneInitialDimension;

  /// @brief Field m_Orientation, offset 0x80, size 0x8
  __declspec(property(get = __get_m_Orientation,
                      put = __set_m_Orientation))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>* m_Orientation;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __get_m_FixedPaneIndex();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __get_m_FixedPaneIndex() const;

  constexpr void __set_m_FixedPaneIndex(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __get_m_FixedPaneInitialDimension();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __get_m_FixedPaneInitialDimension() const;

  constexpr void __set_m_FixedPaneInitialDimension(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>*& __get_m_Orientation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>*> const& __get_m_Orientation() const;

  constexpr void __set_m_Orientation(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>* value);

  /// @brief Method Init, addr 0x2e3f730, size 0x16c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x2e3f89c, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TwoPaneSplitView__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TwoPaneSplitView__UxmlTraits(__TwoPaneSplitView__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TwoPaneSplitView__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TwoPaneSplitView__UxmlTraits(__TwoPaneSplitView__UxmlTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TwoPaneSplitView__UxmlTraits();

public:
  /// @brief Field m_FixedPaneIndex, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_FixedPaneIndex;

  /// @brief Field m_FixedPaneInitialDimension, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_FixedPaneInitialDimension;

  /// @brief Field m_Orientation, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>* ___m_Orientation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits, 0x88>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits, ___m_FixedPaneIndex) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits, ___m_FixedPaneInitialDimension) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits, ___m_Orientation) == 0x80, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::TwoPaneSplitView
// SizeInfo { instance_size: 1040, native_size: -1, calculated_instance_size: 1040, calculated_native_size: 1040, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6744)), TypeDefinitionIndex(TypeDefinitionIndex(7139))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7138))
// CS Name: ::UnityEngine.UIElements::TwoPaneSplitView*
class CORDL_TYPE TwoPaneSplitView : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using UxmlTraits = ::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits;

  using UxmlFactory = ::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory;

  /// @brief Field m_LeftPane, offset 0x3b0, size 0x8
  __declspec(property(get = __get_m_LeftPane, put = __set_m_LeftPane))::UnityEngine::UIElements::VisualElement* m_LeftPane;

  /// @brief Field m_RightPane, offset 0x3b8, size 0x8
  __declspec(property(get = __get_m_RightPane, put = __set_m_RightPane))::UnityEngine::UIElements::VisualElement* m_RightPane;

  /// @brief Field m_FixedPane, offset 0x3c0, size 0x8
  __declspec(property(get = __get_m_FixedPane, put = __set_m_FixedPane))::UnityEngine::UIElements::VisualElement* m_FixedPane;

  /// @brief Field m_FlexedPane, offset 0x3c8, size 0x8
  __declspec(property(get = __get_m_FlexedPane, put = __set_m_FlexedPane))::UnityEngine::UIElements::VisualElement* m_FlexedPane;

  /// @brief Field m_FixedPaneDimension, offset 0x3d0, size 0x4
  __declspec(property(get = __get_m_FixedPaneDimension, put = __set_m_FixedPaneDimension)) float_t m_FixedPaneDimension;

  /// @brief Field m_DragLine, offset 0x3d8, size 0x8
  __declspec(property(get = __get_m_DragLine, put = __set_m_DragLine))::UnityEngine::UIElements::VisualElement* m_DragLine;

  /// @brief Field m_DragLineAnchor, offset 0x3e0, size 0x8
  __declspec(property(get = __get_m_DragLineAnchor, put = __set_m_DragLineAnchor))::UnityEngine::UIElements::VisualElement* m_DragLineAnchor;

  /// @brief Field m_CollapseMode, offset 0x3e8, size 0x1
  __declspec(property(get = __get_m_CollapseMode, put = __set_m_CollapseMode)) bool m_CollapseMode;

  /// @brief Field m_Content, offset 0x3f0, size 0x8
  __declspec(property(get = __get_m_Content, put = __set_m_Content))::UnityEngine::UIElements::VisualElement* m_Content;

  /// @brief Field m_Orientation, offset 0x3f8, size 0x4
  __declspec(property(get = __get_m_Orientation, put = __set_m_Orientation))::UnityEngine::UIElements::TwoPaneSplitViewOrientation m_Orientation;

  /// @brief Field m_FixedPaneIndex, offset 0x3fc, size 0x4
  __declspec(property(get = __get_m_FixedPaneIndex, put = __set_m_FixedPaneIndex)) int32_t m_FixedPaneIndex;

  /// @brief Field m_FixedPaneInitialDimension, offset 0x400, size 0x4
  __declspec(property(get = __get_m_FixedPaneInitialDimension, put = __set_m_FixedPaneInitialDimension)) float_t m_FixedPaneInitialDimension;

  /// @brief Field m_Resizer, offset 0x408, size 0x8
  __declspec(property(get = __get_m_Resizer, put = __set_m_Resizer))::UnityEngine::UIElements::TwoPaneSplitViewResizer* m_Resizer;

  /// @brief Field s_UssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UssClassName, put = setStaticF_s_UssClassName))::StringW s_UssClassName;

  /// @brief Field s_ContentContainerClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ContentContainerClassName, put = setStaticF_s_ContentContainerClassName))::StringW s_ContentContainerClassName;

  /// @brief Field s_HandleDragLineClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_HandleDragLineClassName, put = setStaticF_s_HandleDragLineClassName))::StringW s_HandleDragLineClassName;

  /// @brief Field s_HandleDragLineVerticalClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_HandleDragLineVerticalClassName, put = setStaticF_s_HandleDragLineVerticalClassName))::StringW s_HandleDragLineVerticalClassName;

  /// @brief Field s_HandleDragLineHorizontalClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_HandleDragLineHorizontalClassName, put = setStaticF_s_HandleDragLineHorizontalClassName))::StringW s_HandleDragLineHorizontalClassName;

  /// @brief Field s_HandleDragLineAnchorClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_HandleDragLineAnchorClassName, put = setStaticF_s_HandleDragLineAnchorClassName))::StringW s_HandleDragLineAnchorClassName;

  /// @brief Field s_HandleDragLineAnchorVerticalClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_HandleDragLineAnchorVerticalClassName, put = setStaticF_s_HandleDragLineAnchorVerticalClassName))::StringW s_HandleDragLineAnchorVerticalClassName;

  /// @brief Field s_HandleDragLineAnchorHorizontalClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_HandleDragLineAnchorHorizontalClassName,
                             put = setStaticF_s_HandleDragLineAnchorHorizontalClassName))::StringW s_HandleDragLineAnchorHorizontalClassName;

  /// @brief Field s_VerticalClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VerticalClassName, put = setStaticF_s_VerticalClassName))::StringW s_VerticalClassName;

  /// @brief Field s_HorizontalClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_HorizontalClassName, put = setStaticF_s_HorizontalClassName))::StringW s_HorizontalClassName;

  __declspec(property(get = get_fixedPane))::UnityEngine::UIElements::VisualElement* fixedPane;

  __declspec(property(get = get_flexedPane))::UnityEngine::UIElements::VisualElement* flexedPane;

  __declspec(property(get = get_fixedPaneIndex)) int32_t fixedPaneIndex;

  __declspec(property(get = get_fixedPaneDimension, put = set_fixedPaneDimension)) float_t fixedPaneDimension;

  __declspec(property(get = get_contentContainer))::UnityEngine::UIElements::VisualElement* contentContainer;

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_LeftPane();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_LeftPane() const;

  constexpr void __set_m_LeftPane(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_RightPane();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_RightPane() const;

  constexpr void __set_m_RightPane(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_FixedPane();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_FixedPane() const;

  constexpr void __set_m_FixedPane(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_FlexedPane();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_FlexedPane() const;

  constexpr void __set_m_FlexedPane(::UnityEngine::UIElements::VisualElement* value);

  constexpr float_t& __get_m_FixedPaneDimension();

  constexpr float_t const& __get_m_FixedPaneDimension() const;

  constexpr void __set_m_FixedPaneDimension(float_t value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_DragLine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_DragLine() const;

  constexpr void __set_m_DragLine(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_DragLineAnchor();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_DragLineAnchor() const;

  constexpr void __set_m_DragLineAnchor(::UnityEngine::UIElements::VisualElement* value);

  constexpr bool& __get_m_CollapseMode();

  constexpr bool const& __get_m_CollapseMode() const;

  constexpr void __set_m_CollapseMode(bool value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_Content();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_Content() const;

  constexpr void __set_m_Content(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::TwoPaneSplitViewOrientation& __get_m_Orientation();

  constexpr ::UnityEngine::UIElements::TwoPaneSplitViewOrientation const& __get_m_Orientation() const;

  constexpr void __set_m_Orientation(::UnityEngine::UIElements::TwoPaneSplitViewOrientation value);

  constexpr int32_t& __get_m_FixedPaneIndex();

  constexpr int32_t const& __get_m_FixedPaneIndex() const;

  constexpr void __set_m_FixedPaneIndex(int32_t value);

  constexpr float_t& __get_m_FixedPaneInitialDimension();

  constexpr float_t const& __get_m_FixedPaneInitialDimension() const;

  constexpr void __set_m_FixedPaneInitialDimension(float_t value);

  constexpr ::UnityEngine::UIElements::TwoPaneSplitViewResizer*& __get_m_Resizer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TwoPaneSplitViewResizer*> const& __get_m_Resizer() const;

  constexpr void __set_m_Resizer(::UnityEngine::UIElements::TwoPaneSplitViewResizer* value);

  static inline void setStaticF_s_UssClassName(::StringW value);

  static inline ::StringW getStaticF_s_UssClassName();

  static inline void setStaticF_s_ContentContainerClassName(::StringW value);

  static inline ::StringW getStaticF_s_ContentContainerClassName();

  static inline void setStaticF_s_HandleDragLineClassName(::StringW value);

  static inline ::StringW getStaticF_s_HandleDragLineClassName();

  static inline void setStaticF_s_HandleDragLineVerticalClassName(::StringW value);

  static inline ::StringW getStaticF_s_HandleDragLineVerticalClassName();

  static inline void setStaticF_s_HandleDragLineHorizontalClassName(::StringW value);

  static inline ::StringW getStaticF_s_HandleDragLineHorizontalClassName();

  static inline void setStaticF_s_HandleDragLineAnchorClassName(::StringW value);

  static inline ::StringW getStaticF_s_HandleDragLineAnchorClassName();

  static inline void setStaticF_s_HandleDragLineAnchorVerticalClassName(::StringW value);

  static inline ::StringW getStaticF_s_HandleDragLineAnchorVerticalClassName();

  static inline void setStaticF_s_HandleDragLineAnchorHorizontalClassName(::StringW value);

  static inline ::StringW getStaticF_s_HandleDragLineAnchorHorizontalClassName();

  static inline void setStaticF_s_VerticalClassName(::StringW value);

  static inline ::StringW getStaticF_s_VerticalClassName();

  static inline void setStaticF_s_HorizontalClassName(::StringW value);

  static inline ::StringW getStaticF_s_HorizontalClassName();

  /// @brief Method get_fixedPane, addr 0x2e3d718, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_fixedPane();

  /// @brief Method get_flexedPane, addr 0x2e3d720, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_flexedPane();

  /// @brief Method get_fixedPaneIndex, addr 0x2e3d728, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_fixedPaneIndex();

  /// @brief Method get_fixedPaneDimension, addr 0x2e3d730, size 0x34, virtual false, abstract: false, final false
  inline float_t get_fixedPaneDimension();

  /// @brief Method set_fixedPaneDimension, addr 0x2e3d764, size 0x1c, virtual false, abstract: false, final false
  inline void set_fixedPaneDimension(float_t value);

  static inline ::UnityEngine::UIElements::TwoPaneSplitView* New_ctor();

  /// @brief Method .ctor, addr 0x2e3d780, size 0x210, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Init, addr 0x2e3d990, size 0x2dc, virtual false, abstract: false, final false
  inline void Init(int32_t fixedPaneIndex, float_t fixedPaneInitialDimension, ::UnityEngine::UIElements::TwoPaneSplitViewOrientation orientation);

  /// @brief Method OnPostDisplaySetup, addr 0x2e3ebdc, size 0x108, virtual false, abstract: false, final false
  inline void OnPostDisplaySetup(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method PostDisplaySetup, addr 0x2e3dc6c, size 0xf70, virtual false, abstract: false, final false
  inline void PostDisplaySetup();

  /// @brief Method OnSizeChange, addr 0x2e3ece4, size 0x4, virtual false, abstract: false, final false
  inline void OnSizeChange(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method OnSizeChange, addr 0x2e3ece8, size 0x5d0, virtual false, abstract: false, final false
  inline void OnSizeChange();

  /// @brief Method get_contentContainer, addr 0x2e3f508, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Method OnViewDataReady, addr 0x2e3f510, size 0x3c, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method SetDragLineOffset, addr 0x2e3f2b8, size 0x128, virtual false, abstract: false, final false
  inline void SetDragLineOffset(float_t offset);

  /// @brief Method SetFixedPaneDimension, addr 0x2e3f3e0, size 0x128, virtual false, abstract: false, final false
  inline void SetFixedPaneDimension(float_t dimension);

  // Ctor Parameters [CppParam { name: "", ty: "TwoPaneSplitView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TwoPaneSplitView(TwoPaneSplitView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TwoPaneSplitView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TwoPaneSplitView(TwoPaneSplitView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TwoPaneSplitView();

public:
  /// @brief Field m_LeftPane, offset: 0x3b0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_LeftPane;

  /// @brief Field m_RightPane, offset: 0x3b8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_RightPane;

  /// @brief Field m_FixedPane, offset: 0x3c0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_FixedPane;

  /// @brief Field m_FlexedPane, offset: 0x3c8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_FlexedPane;

  /// @brief Field m_FixedPaneDimension, offset: 0x3d0, size: 0x4, def value: None
  float_t ___m_FixedPaneDimension;

  /// @brief Field m_DragLine, offset: 0x3d8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_DragLine;

  /// @brief Field m_DragLineAnchor, offset: 0x3e0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_DragLineAnchor;

  /// @brief Field m_CollapseMode, offset: 0x3e8, size: 0x1, def value: None
  bool ___m_CollapseMode;

  /// @brief Field m_Content, offset: 0x3f0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Content;

  /// @brief Field m_Orientation, offset: 0x3f8, size: 0x4, def value: None
  ::UnityEngine::UIElements::TwoPaneSplitViewOrientation ___m_Orientation;

  /// @brief Field m_FixedPaneIndex, offset: 0x3fc, size: 0x4, def value: None
  int32_t ___m_FixedPaneIndex;

  /// @brief Field m_FixedPaneInitialDimension, offset: 0x400, size: 0x4, def value: None
  float_t ___m_FixedPaneInitialDimension;

  /// @brief Field m_Resizer, offset: 0x408, size: 0x8, def value: None
  ::UnityEngine::UIElements::TwoPaneSplitViewResizer* ___m_Resizer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TwoPaneSplitView, 0x410>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_LeftPane) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_RightPane) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_FixedPane) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_FlexedPane) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_FixedPaneDimension) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_DragLine) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_DragLineAnchor) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_CollapseMode) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_Content) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_Orientation) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_FixedPaneIndex) == 0x3fc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_FixedPaneInitialDimension) == 0x400, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitView, ___m_Resizer) == 0x408, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7138)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5283 }),
// TypeDefinitionIndex(TypeDefinitionIndex(7137)), TypeDefinitionIndex(TypeDefinitionIndex(6997))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7136)) CS Name: ::TwoPaneSplitView::UxmlFactory*
class CORDL_TYPE __TwoPaneSplitView__UxmlFactory
    : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TwoPaneSplitView*, ::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x2e3f6e8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TwoPaneSplitView__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TwoPaneSplitView__UxmlFactory(__TwoPaneSplitView__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TwoPaneSplitView__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TwoPaneSplitView__UxmlFactory(__TwoPaneSplitView__UxmlFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TwoPaneSplitView__UxmlFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TwoPaneSplitView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TwoPaneSplitView*, "UnityEngine.UIElements", "TwoPaneSplitView");
NEED_NO_BOX(::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory*, "UnityEngine.UIElements", "TwoPaneSplitView/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits*, "UnityEngine.UIElements", "TwoPaneSplitView/UxmlTraits");
