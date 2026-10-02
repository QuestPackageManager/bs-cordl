#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataAccess_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutHandle_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutNode)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutAlign;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutCacheData;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutComputedData;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutConfig;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutDataAccess;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutDisplay;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutEdge;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutFlexDirection;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutHandle;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutJustify;
}
namespace UnityEngine::UIElements::Layout {
template <typename T> struct LayoutList_1;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutOverflow;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutPositionType;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutStyleData;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutValue;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutWrap;
}
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutNode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutNode);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Layout::LayoutNode, "UnityEngine.UIElements.Layout", "LayoutNode");
// [DefaultMember("Item")]
// Dependencies UnityEngine.UIElements.Layout.LayoutDataAccess, UnityEngine.UIElements.Layout.LayoutHandle
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutNode
struct CORDL_TYPE LayoutNode {
public:
  // Declarations
  __declspec(property(put = set_AlignContent)) ::UnityEngine::UIElements::Layout::LayoutAlign AlignContent;

  __declspec(property(put = set_AlignItems)) ::UnityEngine::UIElements::Layout::LayoutAlign AlignItems;

  __declspec(property(put = set_AlignSelf)) ::UnityEngine::UIElements::Layout::LayoutAlign AlignSelf;

  __declspec(property(put = set_AspectRatio)) float_t AspectRatio;

  __declspec(property(put = set_BorderBottomWidth)) float_t BorderBottomWidth;

  __declspec(property(put = set_BorderLeftWidth)) float_t BorderLeftWidth;

  __declspec(property(put = set_BorderRightWidth)) float_t BorderRightWidth;

  __declspec(property(put = set_BorderTopWidth)) float_t BorderTopWidth;

  __declspec(property(put = set_Bottom)) ::UnityEngine::UIElements::Layout::LayoutValue Bottom;

  __declspec(property(get = get_Cache)) ::UnityEngine::UIElements::Layout::LayoutCacheData Cache;

  __declspec(property(get = get_Children)) ::UnityEngine::UIElements::Layout::LayoutList_1<::UnityEngine::UIElements::Layout::LayoutHandle> Children;

  __declspec(property(get = get_ComputedFlexBasis)) float_t ComputedFlexBasis;

  __declspec(property(get = get_Config, put = set_Config)) ::UnityEngine::UIElements::Layout::LayoutConfig Config;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(put = set_Display)) ::UnityEngine::UIElements::Layout::LayoutDisplay Display;

  __declspec(property(put = set_FlexBasis)) ::UnityEngine::UIElements::Layout::LayoutValue FlexBasis;

  __declspec(property(put = set_FlexDirection)) ::UnityEngine::UIElements::Layout::LayoutFlexDirection FlexDirection;

  __declspec(property(put = set_FlexGrow)) float_t FlexGrow;

  __declspec(property(put = set_FlexShrink)) float_t FlexShrink;

  __declspec(property(get = get_Handle)) ::UnityEngine::UIElements::Layout::LayoutHandle Handle;

  __declspec(property(get = get_HasNewLayout, put = set_HasNewLayout)) bool HasNewLayout;

  __declspec(property(put = set_Height)) ::UnityEngine::UIElements::Layout::LayoutValue Height;

  __declspec(property(get = get_IsDirty, put = set_IsDirty)) bool IsDirty;

  __declspec(property(get = get_IsUndefined)) bool IsUndefined;

  __declspec(property(put = set_JustifyContent)) ::UnityEngine::UIElements::Layout::LayoutJustify JustifyContent;

  __declspec(property(get = get_Layout)) ::UnityEngine::UIElements::Layout::LayoutComputedData Layout;

  __declspec(property(get = get_LayoutBorderBottom)) float_t LayoutBorderBottom;

  __declspec(property(get = get_LayoutBorderLeft)) float_t LayoutBorderLeft;

  __declspec(property(get = get_LayoutBorderRight)) float_t LayoutBorderRight;

  __declspec(property(get = get_LayoutBorderTop)) float_t LayoutBorderTop;

  __declspec(property(get = get_LayoutBottom)) float_t LayoutBottom;

  __declspec(property(get = get_LayoutHeight)) float_t LayoutHeight;

  __declspec(property(get = get_LayoutMarginBottom)) float_t LayoutMarginBottom;

  __declspec(property(get = get_LayoutMarginLeft)) float_t LayoutMarginLeft;

  __declspec(property(get = get_LayoutMarginRight)) float_t LayoutMarginRight;

  __declspec(property(get = get_LayoutMarginTop)) float_t LayoutMarginTop;

  __declspec(property(get = get_LayoutPaddingBottom)) float_t LayoutPaddingBottom;

  __declspec(property(get = get_LayoutPaddingLeft)) float_t LayoutPaddingLeft;

  __declspec(property(get = get_LayoutPaddingRight)) float_t LayoutPaddingRight;

  __declspec(property(get = get_LayoutPaddingTop)) float_t LayoutPaddingTop;

  __declspec(property(get = get_LayoutRight)) float_t LayoutRight;

  __declspec(property(get = get_LayoutWidth)) float_t LayoutWidth;

  __declspec(property(get = get_LayoutX)) float_t LayoutX;

  __declspec(property(get = get_LayoutY)) float_t LayoutY;

  __declspec(property(put = set_Left)) ::UnityEngine::UIElements::Layout::LayoutValue Left;

  __declspec(property(put = set_MarginBottom)) ::UnityEngine::UIElements::Layout::LayoutValue MarginBottom;

  __declspec(property(put = set_MarginLeft)) ::UnityEngine::UIElements::Layout::LayoutValue MarginLeft;

  __declspec(property(put = set_MarginRight)) ::UnityEngine::UIElements::Layout::LayoutValue MarginRight;

  __declspec(property(put = set_MarginTop)) ::UnityEngine::UIElements::Layout::LayoutValue MarginTop;

  __declspec(property(put = set_MaxHeight)) ::UnityEngine::UIElements::Layout::LayoutValue MaxHeight;

  __declspec(property(put = set_MaxWidth)) ::UnityEngine::UIElements::Layout::LayoutValue MaxWidth;

  __declspec(property(put = set_MinHeight)) ::UnityEngine::UIElements::Layout::LayoutValue MinHeight;

  __declspec(property(put = set_MinWidth)) ::UnityEngine::UIElements::Layout::LayoutValue MinWidth;

  __declspec(property(put = set_Overflow)) ::UnityEngine::UIElements::Layout::LayoutOverflow Overflow;

  __declspec(property(put = set_PaddingBottom)) ::UnityEngine::UIElements::Layout::LayoutValue PaddingBottom;

  __declspec(property(put = set_PaddingLeft)) ::UnityEngine::UIElements::Layout::LayoutValue PaddingLeft;

  __declspec(property(put = set_PaddingRight)) ::UnityEngine::UIElements::Layout::LayoutValue PaddingRight;

  __declspec(property(put = set_PaddingTop)) ::UnityEngine::UIElements::Layout::LayoutValue PaddingTop;

  __declspec(property(get = get_Parent, put = set_Parent)) ::UnityEngine::UIElements::Layout::LayoutNode Parent;

  __declspec(property(put = set_PositionType)) ::UnityEngine::UIElements::Layout::LayoutPositionType PositionType;

  __declspec(property(put = set_Right)) ::UnityEngine::UIElements::Layout::LayoutValue Right;

  __declspec(property(get = get_Style)) ::UnityEngine::UIElements::Layout::LayoutStyleData Style;

  __declspec(property(put = set_Top)) ::UnityEngine::UIElements::Layout::LayoutValue Top;

  __declspec(property(get = get_UsesMeasure, put = set_UsesMeasure)) bool UsesMeasure;

  __declspec(property(put = set_Width)) ::UnityEngine::UIElements::Layout::LayoutValue Width;

  __declspec(property(put = set_Wrap)) ::UnityEngine::UIElements::Layout::LayoutWrap Wrap;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Layout::LayoutNode>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Layout::LayoutNode>*();

  /// @brief Method CalculateLayout, addr 0x7197adc, size 0xa0, virtual false, abstract: false, final false
  inline void CalculateLayout(float_t width, float_t height);

  /// @brief Method Clear, addr 0x7195cdc, size 0x128, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CopyFromComputedStyle, addr 0x71973bc, size 0x41c, virtual false, abstract: false, final false
  inline void CopyFromComputedStyle(::UnityEngine::UIElements::ComputedStyle style);

  /// @brief Method Equals, addr 0x71979b8, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x719798c, size 0x2c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::Layout::LayoutNode other);

  /// @brief Method GetHashCode, addr 0x7197a44, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetLayoutPosition, addr 0x7195340, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetLayoutPosition();

  /// @brief Method GetLayoutRect, addr 0x719523c, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetLayoutRect();

  /// @brief Method GetLayoutSize, addr 0x71952d4, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetLayoutSize();

  /// @brief Method GetLayoutValue, addr 0x71955d0, size 0x60, virtual false, abstract: false, final false
  inline float_t GetLayoutValue(float_t* buffer, ::UnityEngine::UIElements::Layout::LayoutEdge edge);

  /// @brief Method GetOwner, addr 0x7197224, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetOwner();

  /// @brief Method Insert, addr 0x719588c, size 0x174, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::UnityEngine::UIElements::Layout::LayoutNode child);

  /// @brief Method MarkDirty, addr 0x7195a00, size 0x74, virtual false, abstract: false, final false
  inline void MarkDirty();

  /// @brief Method MarkLayoutSeen, addr 0x71973b4, size 0x8, virtual false, abstract: false, final false
  inline void MarkLayoutSeen();

  /// @brief Method RemoveAt, addr 0x7195a74, size 0x268, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method SetOwner, addr 0x719719c, size 0x88, virtual false, abstract: false, final false
  inline void SetOwner(::UnityEngine::UIElements::VisualElement* func);

  /// @brief Method SetStyleEdgeMargin, addr 0x7196764, size 0x174, virtual false, abstract: false, final false
  inline void SetStyleEdgeMargin(::UnityEngine::UIElements::Layout::LayoutEdge edge, ::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method SetStyleEdgePadding, addr 0x7196908, size 0x13c, virtual false, abstract: false, final false
  inline void SetStyleEdgePadding(::UnityEngine::UIElements::Layout::LayoutEdge edge, ::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method SetStyleEdgePosition, addr 0x71965fc, size 0x138, virtual false, abstract: false, final false
  inline void SetStyleEdgePosition(::UnityEngine::UIElements::Layout::LayoutEdge edge, ::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method SetStyleValue, addr 0x71963b8, size 0x50, virtual false, abstract: false, final false
  inline void SetStyleValue(::by_ref<::UnityEngine::UIElements::Layout::LayoutValue> currentValue, ::UnityEngine::UIElements::Layout::LayoutValue newValue);

  /// @brief Method SetStyleValueAuto, addr 0x7196d18, size 0x20, virtual false, abstract: false, final false
  inline void SetStyleValueAuto(::by_ref<::UnityEngine::UIElements::Layout::LayoutValue> currentValue);

  /// @brief Method SetStyleValuePercent, addr 0x7196c60, size 0x40, virtual false, abstract: false, final false
  inline void SetStyleValuePercent(::by_ref<::UnityEngine::UIElements::Layout::LayoutValue> currentValue, ::UnityEngine::UIElements::Layout::LayoutValue newValue);

  /// @brief Method SetStyleValuePoint, addr 0x7196ca0, size 0x78, virtual false, abstract: false, final false
  inline void SetStyleValuePoint(::by_ref<::UnityEngine::UIElements::Layout::LayoutValue> currentValue, ::UnityEngine::UIElements::Layout::LayoutValue newValue);

  /// @brief Method SetStyleValueUnit, addr 0x719621c, size 0x70, virtual false, abstract: false, final false
  inline void SetStyleValueUnit(::by_ref<::UnityEngine::UIElements::Layout::LayoutValue> currentValue, ::UnityEngine::UIElements::Layout::LayoutValue newValue);

  /// @brief Method SetValue, addr 0x7196138, size 0x44, virtual false, abstract: false, final false
  inline void SetValue(::by_ref<float_t> currentValue, float_t newValue);

  /// @brief Method SoftReset, addr 0x71977d8, size 0x100, virtual false, abstract: false, final false
  inline void SoftReset();

  /// @brief Method StyleEdgeSetAuto, addr 0x7196da4, size 0x20, virtual false, abstract: false, final false
  inline void StyleEdgeSetAuto(::by_ref<::UnityEngine::UIElements::Layout::LayoutValue> value);

  /// @brief Method StyleEdgeSetPercent, addr 0x7196d64, size 0x40, virtual false, abstract: false, final false
  inline void StyleEdgeSetPercent(::by_ref<::UnityEngine::UIElements::Layout::LayoutValue> value, float_t newValue);

  /// @brief Method StyleEdgeSetPoint, addr 0x7196acc, size 0x68, virtual false, abstract: false, final false
  inline void StyleEdgeSetPoint(::by_ref<::UnityEngine::UIElements::Layout::LayoutValue> value, float_t newValue);

  /// @brief Method .ctor, addr 0x71956d0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Layout::LayoutDataAccess access, ::UnityEngine::UIElements::Layout::LayoutHandle handle);

  /// @brief Method get_Cache, addr 0x7196e04, size 0x64, virtual false, abstract: false, final false
  inline ::by_ref<::UnityEngine::UIElements::Layout::LayoutCacheData> get_Cache();

  /// @brief Method get_Children, addr 0x719575c, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutList_1<::UnityEngine::UIElements::Layout::LayoutHandle> get_Children();

  /// @brief Method get_ComputedFlexBasis, addr 0x71955bc, size 0x14, virtual false, abstract: false, final false
  inline float_t get_ComputedFlexBasis();

  /// @brief Method get_Config, addr 0x71972a4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutConfig get_Config();

  /// @brief Method get_Count, addr 0x71957c4, size 0xc8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Handle, addr 0x7196dfc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutHandle get_Handle();

  /// @brief Method get_HasNewLayout, addr 0x7196f64, size 0x6c, virtual false, abstract: false, final false
  inline bool get_HasNewLayout();

  /// @brief Method get_IsDirty, addr 0x7196e68, size 0x6c, virtual false, abstract: false, final false
  inline bool get_IsDirty();

  /// @brief Method get_IsUndefined, addr 0x71952b4, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsUndefined();

  /// @brief Method get_Layout, addr 0x7195174, size 0x64, virtual false, abstract: false, final false
  inline ::by_ref<::UnityEngine::UIElements::Layout::LayoutComputedData> get_Layout();

  /// @brief Method get_LayoutBorderBottom, addr 0x71955a8, size 0x14, virtual false, abstract: false, final false
  inline float_t get_LayoutBorderBottom();

  /// @brief Method get_LayoutBorderLeft, addr 0x719550c, size 0x44, virtual false, abstract: false, final false
  inline float_t get_LayoutBorderLeft();

  /// @brief Method get_LayoutBorderRight, addr 0x7195564, size 0x44, virtual false, abstract: false, final false
  inline float_t get_LayoutBorderRight();

  /// @brief Method get_LayoutBorderTop, addr 0x7195550, size 0x14, virtual false, abstract: false, final false
  inline float_t get_LayoutBorderTop();

  /// @brief Method get_LayoutBottom, addr 0x7195200, size 0x14, virtual false, abstract: false, final false
  inline float_t get_LayoutBottom();

  /// @brief Method get_LayoutHeight, addr 0x7195228, size 0x14, virtual false, abstract: false, final false
  inline float_t get_LayoutHeight();

  /// @brief Method get_LayoutMarginBottom, addr 0x7195448, size 0x14, virtual false, abstract: false, final false
  inline float_t get_LayoutMarginBottom();

  /// @brief Method get_LayoutMarginLeft, addr 0x71953ac, size 0x44, virtual false, abstract: false, final false
  inline float_t get_LayoutMarginLeft();

  /// @brief Method get_LayoutMarginRight, addr 0x7195404, size 0x44, virtual false, abstract: false, final false
  inline float_t get_LayoutMarginRight();

  /// @brief Method get_LayoutMarginTop, addr 0x71953f0, size 0x14, virtual false, abstract: false, final false
  inline float_t get_LayoutMarginTop();

  /// @brief Method get_LayoutPaddingBottom, addr 0x71954f8, size 0x14, virtual false, abstract: false, final false
  inline float_t get_LayoutPaddingBottom();

  /// @brief Method get_LayoutPaddingLeft, addr 0x719545c, size 0x44, virtual false, abstract: false, final false
  inline float_t get_LayoutPaddingLeft();

  /// @brief Method get_LayoutPaddingRight, addr 0x71954b4, size 0x44, virtual false, abstract: false, final false
  inline float_t get_LayoutPaddingRight();

  /// @brief Method get_LayoutPaddingTop, addr 0x71954a0, size 0x14, virtual false, abstract: false, final false
  inline float_t get_LayoutPaddingTop();

  /// @brief Method get_LayoutRight, addr 0x71951ec, size 0x14, virtual false, abstract: false, final false
  inline float_t get_LayoutRight();

  /// @brief Method get_LayoutWidth, addr 0x7195214, size 0x14, virtual false, abstract: false, final false
  inline float_t get_LayoutWidth();

  /// @brief Method get_LayoutX, addr 0x7195160, size 0x14, virtual false, abstract: false, final false
  inline float_t get_LayoutX();

  /// @brief Method get_LayoutY, addr 0x71951d8, size 0x14, virtual false, abstract: false, final false
  inline float_t get_LayoutY();

  /// @brief Method get_Parent, addr 0x7195630, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutNode get_Parent();

  /// @brief Method get_Style, addr 0x7195e50, size 0x64, virtual false, abstract: false, final false
  inline ::by_ref<::UnityEngine::UIElements::Layout::LayoutStyleData> get_Style();

  /// @brief Method get_Undefined, addr 0x7196dec, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Layout::LayoutNode get_Undefined();

  /// @brief Method get_UsesMeasure, addr 0x7197080, size 0x6c, virtual false, abstract: false, final false
  inline bool get_UsesMeasure();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Layout::LayoutNode>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Layout::LayoutNode>* i___System__IEquatable_1___UnityEngine__UIElements__Layout__LayoutNode_();

  /// @brief Method op_Equality, addr 0x7197a58, size 0x4c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::Layout::LayoutNode lhs, ::UnityEngine::UIElements::Layout::LayoutNode rhs);

  /// @brief Method op_Inequality, addr 0x7197aa4, size 0x38, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::Layout::LayoutNode lhs, ::UnityEngine::UIElements::Layout::LayoutNode rhs);

  /// @brief Method set_AlignContent, addr 0x7195fe4, size 0x4c, virtual false, abstract: false, final false
  inline void set_AlignContent(::UnityEngine::UIElements::Layout::LayoutAlign value);

  /// @brief Method set_AlignItems, addr 0x7195f4c, size 0x4c, virtual false, abstract: false, final false
  inline void set_AlignItems(::UnityEngine::UIElements::Layout::LayoutAlign value);

  /// @brief Method set_AlignSelf, addr 0x7195f98, size 0x4c, virtual false, abstract: false, final false
  inline void set_AlignSelf(::UnityEngine::UIElements::Layout::LayoutAlign value);

  /// @brief Method set_AspectRatio, addr 0x7196534, size 0x70, virtual false, abstract: false, final false
  inline void set_AspectRatio(float_t value);

  /// @brief Method set_BorderBottomWidth, addr 0x7196bfc, size 0x64, virtual false, abstract: false, final false
  inline void set_BorderBottomWidth(float_t value);

  /// @brief Method set_BorderLeftWidth, addr 0x7196a68, size 0x64, virtual false, abstract: false, final false
  inline void set_BorderLeftWidth(float_t value);

  /// @brief Method set_BorderRightWidth, addr 0x7196b98, size 0x64, virtual false, abstract: false, final false
  inline void set_BorderRightWidth(float_t value);

  /// @brief Method set_BorderTopWidth, addr 0x7196b34, size 0x64, virtual false, abstract: false, final false
  inline void set_BorderTopWidth(float_t value);

  /// @brief Method set_Bottom, addr 0x719674c, size 0xc, virtual false, abstract: false, final false
  inline void set_Bottom(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_Config, addr 0x7197344, size 0x70, virtual false, abstract: false, final false
  inline void set_Config(::UnityEngine::UIElements::Layout::LayoutConfig value);

  /// @brief Method set_Display, addr 0x7195f00, size 0x4c, virtual false, abstract: false, final false
  inline void set_Display(::UnityEngine::UIElements::Layout::LayoutDisplay value);

  /// @brief Method set_FlexBasis, addr 0x71961ec, size 0x30, virtual false, abstract: false, final false
  inline void set_FlexBasis(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_FlexDirection, addr 0x7195e04, size 0x4c, virtual false, abstract: false, final false
  inline void set_FlexDirection(::UnityEngine::UIElements::Layout::LayoutFlexDirection value);

  /// @brief Method set_FlexGrow, addr 0x71960c8, size 0x70, virtual false, abstract: false, final false
  inline void set_FlexGrow(float_t value);

  /// @brief Method set_FlexShrink, addr 0x719617c, size 0x70, virtual false, abstract: false, final false
  inline void set_FlexShrink(float_t value);

  /// @brief Method set_HasNewLayout, addr 0x7196fdc, size 0x84, virtual false, abstract: false, final false
  inline void set_HasNewLayout(bool value);

  /// @brief Method set_Height, addr 0x71962f0, size 0x64, virtual false, abstract: false, final false
  inline void set_Height(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_IsDirty, addr 0x7196ee0, size 0x74, virtual false, abstract: false, final false
  inline void set_IsDirty(bool value);

  /// @brief Method set_JustifyContent, addr 0x7195eb4, size 0x4c, virtual false, abstract: false, final false
  inline void set_JustifyContent(::UnityEngine::UIElements::Layout::LayoutJustify value);

  /// @brief Method set_Left, addr 0x71965f0, size 0xc, virtual false, abstract: false, final false
  inline void set_Left(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_MarginBottom, addr 0x71968f0, size 0xc, virtual false, abstract: false, final false
  inline void set_MarginBottom(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_MarginLeft, addr 0x7196758, size 0xc, virtual false, abstract: false, final false
  inline void set_MarginLeft(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_MarginRight, addr 0x71968e4, size 0xc, virtual false, abstract: false, final false
  inline void set_MarginRight(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_MarginTop, addr 0x71968d8, size 0xc, virtual false, abstract: false, final false
  inline void set_MarginTop(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_MaxHeight, addr 0x7196408, size 0x64, virtual false, abstract: false, final false
  inline void set_MaxHeight(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_MaxWidth, addr 0x7196354, size 0x64, virtual false, abstract: false, final false
  inline void set_MaxWidth(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_MinHeight, addr 0x71964d0, size 0x64, virtual false, abstract: false, final false
  inline void set_MinHeight(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_MinWidth, addr 0x719646c, size 0x64, virtual false, abstract: false, final false
  inline void set_MinWidth(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_Overflow, addr 0x71965a4, size 0x4c, virtual false, abstract: false, final false
  inline void set_Overflow(::UnityEngine::UIElements::Layout::LayoutOverflow value);

  /// @brief Method set_PaddingBottom, addr 0x7196a5c, size 0xc, virtual false, abstract: false, final false
  inline void set_PaddingBottom(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_PaddingLeft, addr 0x71968fc, size 0xc, virtual false, abstract: false, final false
  inline void set_PaddingLeft(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_PaddingRight, addr 0x7196a50, size 0xc, virtual false, abstract: false, final false
  inline void set_PaddingRight(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_PaddingTop, addr 0x7196a44, size 0xc, virtual false, abstract: false, final false
  inline void set_PaddingTop(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_Parent, addr 0x71956ec, size 0x70, virtual false, abstract: false, final false
  inline void set_Parent(::UnityEngine::UIElements::Layout::LayoutNode value);

  /// @brief Method set_PositionType, addr 0x7196030, size 0x4c, virtual false, abstract: false, final false
  inline void set_PositionType(::UnityEngine::UIElements::Layout::LayoutPositionType value);

  /// @brief Method set_Right, addr 0x7196740, size 0xc, virtual false, abstract: false, final false
  inline void set_Right(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_Top, addr 0x7196734, size 0xc, virtual false, abstract: false, final false
  inline void set_Top(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_UsesMeasure, addr 0x71970f8, size 0x84, virtual false, abstract: false, final false
  inline void set_UsesMeasure(bool value);

  /// @brief Method set_Width, addr 0x719628c, size 0x64, virtual false, abstract: false, final false
  inline void set_Width(::UnityEngine::UIElements::Layout::LayoutValue value);

  /// @brief Method set_Wrap, addr 0x719607c, size 0x4c, virtual false, abstract: false, final false
  inline void set_Wrap(::UnityEngine::UIElements::Layout::LayoutWrap value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutNode();

  // Ctor Parameters [CppParam { name: "m_Access", ty: "::UnityEngine::UIElements::Layout::LayoutDataAccess", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Handle", ty:
  // "::UnityEngine::UIElements::Layout::LayoutHandle", modifiers: "", def_value: None, comment: None }]
  constexpr LayoutNode(::UnityEngine::UIElements::Layout::LayoutDataAccess m_Access, ::UnityEngine::UIElements::Layout::LayoutHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5515 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field k_DefaultChildCapacity offset 0xffffffff size 0x4
  static constexpr int32_t k_DefaultChildCapacity{ static_cast<int32_t>(0x4) };

  /// @brief Field m_Access, offset: 0x0, size: 0x38, def value: None
  ::UnityEngine::UIElements::Layout::LayoutDataAccess m_Access;

  /// @brief Field m_Handle, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::LayoutHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNode, m_Access) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNode, m_Handle) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Layout::LayoutNode) == 0x40, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
