#pragma once
// IWYU pragma private; include "UnityEngine/Yoga/YogaNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaNode)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System {
class WeakReference;
}
namespace UnityEngine::Yoga {
class BaselineFunction;
}
namespace UnityEngine::Yoga {
class MeasureFunction;
}
namespace UnityEngine::Yoga {
struct YogaAlign;
}
namespace UnityEngine::Yoga {
class YogaConfig;
}
namespace UnityEngine::Yoga {
struct YogaDisplay;
}
namespace UnityEngine::Yoga {
struct YogaEdge;
}
namespace UnityEngine::Yoga {
struct YogaFlexDirection;
}
namespace UnityEngine::Yoga {
struct YogaJustify;
}
namespace UnityEngine::Yoga {
struct YogaMeasureMode;
}
namespace UnityEngine::Yoga {
struct YogaOverflow;
}
namespace UnityEngine::Yoga {
struct YogaPositionType;
}
namespace UnityEngine::Yoga {
struct YogaSize;
}
namespace UnityEngine::Yoga {
struct YogaValue;
}
namespace UnityEngine::Yoga {
struct YogaWrap;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class YogaNode;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Yoga::YogaNode);
// Type: UnityEngine.Yoga::YogaNode
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Yoga {
// Is value type: false
// CS Name: ::UnityEngine.Yoga::YogaNode*
class CORDL_TYPE YogaNode : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_AlignContent))::UnityEngine::Yoga::YogaAlign AlignContent;

  __declspec(property(put = set_AlignItems))::UnityEngine::Yoga::YogaAlign AlignItems;

  __declspec(property(put = set_AlignSelf))::UnityEngine::Yoga::YogaAlign AlignSelf;

  __declspec(property(put = set_BorderBottomWidth)) float_t BorderBottomWidth;

  __declspec(property(put = set_BorderLeftWidth)) float_t BorderLeftWidth;

  __declspec(property(put = set_BorderRightWidth)) float_t BorderRightWidth;

  __declspec(property(put = set_BorderTopWidth)) float_t BorderTopWidth;

  __declspec(property(put = set_Bottom))::UnityEngine::Yoga::YogaValue Bottom;

  __declspec(property(put = set_Config))::UnityEngine::Yoga::YogaConfig* Config;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(put = set_Display))::UnityEngine::Yoga::YogaDisplay Display;

  __declspec(property(put = set_Flex)) float_t Flex;

  __declspec(property(put = set_FlexBasis))::UnityEngine::Yoga::YogaValue FlexBasis;

  __declspec(property(put = set_FlexDirection))::UnityEngine::Yoga::YogaFlexDirection FlexDirection;

  __declspec(property(put = set_FlexGrow)) float_t FlexGrow;

  __declspec(property(put = set_FlexShrink)) float_t FlexShrink;

  __declspec(property(get = get_HasNewLayout)) bool HasNewLayout;

  __declspec(property(put = set_Height))::UnityEngine::Yoga::YogaValue Height;

  __declspec(property(get = get_IsBaselineDefined)) bool IsBaselineDefined;

  __declspec(property(get = get_IsDirty)) bool IsDirty;

  __declspec(property(get = get_IsMeasureDefined)) bool IsMeasureDefined;

  __declspec(property(put = set_JustifyContent))::UnityEngine::Yoga::YogaJustify JustifyContent;

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

  __declspec(property(put = set_Left))::UnityEngine::Yoga::YogaValue Left;

  __declspec(property(put = set_MarginBottom))::UnityEngine::Yoga::YogaValue MarginBottom;

  __declspec(property(put = set_MarginLeft))::UnityEngine::Yoga::YogaValue MarginLeft;

  __declspec(property(put = set_MarginRight))::UnityEngine::Yoga::YogaValue MarginRight;

  __declspec(property(put = set_MarginTop))::UnityEngine::Yoga::YogaValue MarginTop;

  __declspec(property(put = set_MaxHeight))::UnityEngine::Yoga::YogaValue MaxHeight;

  __declspec(property(put = set_MaxWidth))::UnityEngine::Yoga::YogaValue MaxWidth;

  __declspec(property(put = set_MinHeight))::UnityEngine::Yoga::YogaValue MinHeight;

  __declspec(property(put = set_MinWidth))::UnityEngine::Yoga::YogaValue MinWidth;

  __declspec(property(put = set_Overflow))::UnityEngine::Yoga::YogaOverflow Overflow;

  __declspec(property(put = set_PaddingBottom))::UnityEngine::Yoga::YogaValue PaddingBottom;

  __declspec(property(put = set_PaddingLeft))::UnityEngine::Yoga::YogaValue PaddingLeft;

  __declspec(property(put = set_PaddingRight))::UnityEngine::Yoga::YogaValue PaddingRight;

  __declspec(property(put = set_PaddingTop))::UnityEngine::Yoga::YogaValue PaddingTop;

  __declspec(property(put = set_PositionType))::UnityEngine::Yoga::YogaPositionType PositionType;

  __declspec(property(put = set_Right))::UnityEngine::Yoga::YogaValue Right;

  __declspec(property(put = set_Top))::UnityEngine::Yoga::YogaValue Top;

  __declspec(property(put = set_Width))::UnityEngine::Yoga::YogaValue Width;

  __declspec(property(put = set_Wrap))::UnityEngine::Yoga::YogaWrap Wrap;

  /// @brief Field _baselineFunction, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__baselineFunction, put = __cordl_internal_set__baselineFunction))::UnityEngine::Yoga::BaselineFunction* _baselineFunction;

  /// @brief Field _children, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__children, put = __cordl_internal_set__children))::System::Collections::Generic::List_1<::UnityEngine::Yoga::YogaNode*>* _children;

  /// @brief Field _config, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__config, put = __cordl_internal_set__config))::UnityEngine::Yoga::YogaConfig* _config;

  /// @brief Field _data, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data))::System::Object* _data;

  /// @brief Field _measureFunction, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__measureFunction, put = __cordl_internal_set__measureFunction))::UnityEngine::Yoga::MeasureFunction* _measureFunction;

  /// @brief Field _parent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__parent, put = __cordl_internal_set__parent))::System::WeakReference* _parent;

  /// @brief Field _ygNode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ygNode, put = __cordl_internal_set__ygNode))::System::IntPtr _ygNode;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Yoga::YogaNode*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Yoga::YogaNode*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method BaselineInternal, addr 0x3623bac, size 0x74, virtual false, abstract: false, final false
  static inline float_t BaselineInternal(::UnityEngine::Yoga::YogaNode* node, float_t width, float_t height);

  /// @brief Method CalculateLayout, addr 0x3623a14, size 0x84, virtual false, abstract: false, final false
  inline void CalculateLayout(float_t width, float_t height);

  /// @brief Method Clear, addr 0x362381c, size 0x64, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CopyStyle, addr 0x36221d8, size 0x4c, virtual false, abstract: false, final false
  inline void CopyStyle(::UnityEngine::Yoga::YogaNode* srcNode);

  /// @brief Method Finalize, addr 0x3621e38, size 0x98, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetEnumerator, addr 0x3623c20, size 0x12c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Yoga::YogaNode*>* GetEnumerator();

  /// @brief Method Insert, addr 0x3623598, size 0x124, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::UnityEngine::Yoga::YogaNode* node);

  /// @brief Method MarkDirty, addr 0x36220c8, size 0x3c, virtual true, abstract: false, final false
  inline void MarkDirty();

  /// @brief Method MarkLayoutSeen, addr 0x3623514, size 0x40, virtual false, abstract: false, final false
  inline void MarkLayoutSeen();

  /// @brief Method MeasureInternal, addr 0x3623b30, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Yoga::YogaSize MeasureInternal(::UnityEngine::Yoga::YogaNode* node, float_t width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, float_t height,
                                                              ::UnityEngine::Yoga::YogaMeasureMode heightMode);

  static inline ::UnityEngine::Yoga::YogaNode* New_ctor(::UnityEngine::Yoga::YogaConfig* config);

  /// @brief Method RemoveAt, addr 0x3623710, size 0xc8, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method SetMeasureFunction, addr 0x3623880, size 0xd8, virtual false, abstract: false, final false
  inline void SetMeasureFunction(::UnityEngine::Yoga::MeasureFunction* measureFunction);

  /// @brief Method SetStyleMargin, addr 0x3621430, size 0xc8, virtual false, abstract: false, final false
  inline void SetStyleMargin(::UnityEngine::Yoga::YogaEdge edge, ::UnityEngine::Yoga::YogaValue value);

  /// @brief Method SetStylePadding, addr 0x3621614, size 0x84, virtual false, abstract: false, final false
  inline void SetStylePadding(::UnityEngine::Yoga::YogaEdge edge, ::UnityEngine::Yoga::YogaValue value);

  /// @brief Method SetStylePosition, addr 0x36212c4, size 0x84, virtual false, abstract: false, final false
  inline void SetStylePosition(::UnityEngine::Yoga::YogaEdge edge, ::UnityEngine::Yoga::YogaValue value);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3623d4c, size 0x12c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::UnityEngine::Yoga::BaselineFunction*& __cordl_internal_get__baselineFunction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Yoga::BaselineFunction*> const& __cordl_internal_get__baselineFunction() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Yoga::YogaNode*>*& __cordl_internal_get__children();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Yoga::YogaNode*>*> const& __cordl_internal_get__children() const;

  constexpr ::UnityEngine::Yoga::YogaConfig*& __cordl_internal_get__config();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Yoga::YogaConfig*> const& __cordl_internal_get__config() const;

  constexpr ::System::Object*& __cordl_internal_get__data();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__data() const;

  constexpr ::UnityEngine::Yoga::MeasureFunction*& __cordl_internal_get__measureFunction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Yoga::MeasureFunction*> const& __cordl_internal_get__measureFunction() const;

  constexpr ::System::WeakReference*& __cordl_internal_get__parent();

  constexpr ::cordl_internals::to_const_pointer<::System::WeakReference*> const& __cordl_internal_get__parent() const;

  constexpr ::System::IntPtr const& __cordl_internal_get__ygNode() const;

  constexpr ::System::IntPtr& __cordl_internal_get__ygNode();

  constexpr void __cordl_internal_set__baselineFunction(::UnityEngine::Yoga::BaselineFunction* value);

  constexpr void __cordl_internal_set__children(::System::Collections::Generic::List_1<::UnityEngine::Yoga::YogaNode*>* value);

  constexpr void __cordl_internal_set__config(::UnityEngine::Yoga::YogaConfig* value);

  constexpr void __cordl_internal_set__data(::System::Object* value);

  constexpr void __cordl_internal_set__measureFunction(::UnityEngine::Yoga::MeasureFunction* value);

  constexpr void __cordl_internal_set__parent(::System::WeakReference* value);

  constexpr void __cordl_internal_set__ygNode(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x3621cc4, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Yoga::YogaConfig* config);

  /// @brief Method get_Count, addr 0x36234c8, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_HasNewLayout, addr 0x3622140, size 0x3c, virtual false, abstract: false, final false
  inline bool get_HasNewLayout();

  /// @brief Method get_IsBaselineDefined, addr 0x36221c8, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsBaselineDefined();

  /// @brief Method get_IsDirty, addr 0x3622050, size 0x3c, virtual false, abstract: false, final false
  inline bool get_IsDirty();

  /// @brief Method get_IsMeasureDefined, addr 0x36221b8, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsMeasureDefined();

  /// @brief Method get_LayoutBorderBottom, addr 0x3621c84, size 0x40, virtual false, abstract: false, final false
  inline float_t get_LayoutBorderBottom();

  /// @brief Method get_LayoutBorderLeft, addr 0x3621b80, size 0x40, virtual false, abstract: false, final false
  inline float_t get_LayoutBorderLeft();

  /// @brief Method get_LayoutBorderRight, addr 0x3621c44, size 0x40, virtual false, abstract: false, final false
  inline float_t get_LayoutBorderRight();

  /// @brief Method get_LayoutBorderTop, addr 0x3621c04, size 0x40, virtual false, abstract: false, final false
  inline float_t get_LayoutBorderTop();

  /// @brief Method get_LayoutBottom, addr 0x36232d8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_LayoutBottom();

  /// @brief Method get_LayoutHeight, addr 0x36233c8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_LayoutHeight();

  /// @brief Method get_LayoutMarginBottom, addr 0x36219fc, size 0x40, virtual false, abstract: false, final false
  inline float_t get_LayoutMarginBottom();

  /// @brief Method get_LayoutMarginLeft, addr 0x36218f8, size 0x40, virtual false, abstract: false, final false
  inline float_t get_LayoutMarginLeft();

  /// @brief Method get_LayoutMarginRight, addr 0x36219bc, size 0x40, virtual false, abstract: false, final false
  inline float_t get_LayoutMarginRight();

  /// @brief Method get_LayoutMarginTop, addr 0x362197c, size 0x40, virtual false, abstract: false, final false
  inline float_t get_LayoutMarginTop();

  /// @brief Method get_LayoutPaddingBottom, addr 0x3621b40, size 0x40, virtual false, abstract: false, final false
  inline float_t get_LayoutPaddingBottom();

  /// @brief Method get_LayoutPaddingLeft, addr 0x3621a3c, size 0x40, virtual false, abstract: false, final false
  inline float_t get_LayoutPaddingLeft();

  /// @brief Method get_LayoutPaddingRight, addr 0x3621b00, size 0x40, virtual false, abstract: false, final false
  inline float_t get_LayoutPaddingRight();

  /// @brief Method get_LayoutPaddingTop, addr 0x3621ac0, size 0x40, virtual false, abstract: false, final false
  inline float_t get_LayoutPaddingTop();

  /// @brief Method get_LayoutRight, addr 0x3623260, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_LayoutRight();

  /// @brief Method get_LayoutWidth, addr 0x3623350, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_LayoutWidth();

  /// @brief Method get_LayoutX, addr 0x3623170, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_LayoutX();

  /// @brief Method get_LayoutY, addr 0x36231e8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_LayoutY();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Yoga::YogaNode*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Yoga::YogaNode*>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__Yoga__YogaNode__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_AlignContent, addr 0x3622510, size 0x44, virtual false, abstract: false, final false
  inline void set_AlignContent(::UnityEngine::Yoga::YogaAlign value);

  /// @brief Method set_AlignItems, addr 0x3622400, size 0x44, virtual false, abstract: false, final false
  inline void set_AlignItems(::UnityEngine::Yoga::YogaAlign value);

  /// @brief Method set_AlignSelf, addr 0x3622488, size 0x44, virtual false, abstract: false, final false
  inline void set_AlignSelf(::UnityEngine::Yoga::YogaAlign value);

  /// @brief Method set_BorderBottomWidth, addr 0x36218a8, size 0x50, virtual false, abstract: false, final false
  inline void set_BorderBottomWidth(float_t value);

  /// @brief Method set_BorderLeftWidth, addr 0x3621764, size 0x50, virtual false, abstract: false, final false
  inline void set_BorderLeftWidth(float_t value);

  /// @brief Method set_BorderRightWidth, addr 0x3621858, size 0x50, virtual false, abstract: false, final false
  inline void set_BorderRightWidth(float_t value);

  /// @brief Method set_BorderTopWidth, addr 0x3621808, size 0x50, virtual false, abstract: false, final false
  inline void set_BorderTopWidth(float_t value);

  /// @brief Method set_Bottom, addr 0x3621360, size 0xc, virtual false, abstract: false, final false
  inline void set_Bottom(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_Config, addr 0x3621f5c, size 0xb0, virtual false, abstract: false, final false
  inline void set_Config(::UnityEngine::Yoga::YogaConfig* value);

  /// @brief Method set_Display, addr 0x3622378, size 0x44, virtual false, abstract: false, final false
  inline void set_Display(::UnityEngine::Yoga::YogaDisplay value);

  /// @brief Method set_Flex, addr 0x36226a8, size 0x4c, virtual false, abstract: false, final false
  inline void set_Flex(float_t value);

  /// @brief Method set_FlexBasis, addr 0x3622870, size 0xbc, virtual false, abstract: false, final false
  inline void set_FlexBasis(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_FlexDirection, addr 0x3622268, size 0x44, virtual false, abstract: false, final false
  inline void set_FlexDirection(::UnityEngine::Yoga::YogaFlexDirection value);

  /// @brief Method set_FlexGrow, addr 0x3622740, size 0x4c, virtual false, abstract: false, final false
  inline void set_FlexGrow(float_t value);

  /// @brief Method set_FlexShrink, addr 0x36227d8, size 0x4c, virtual false, abstract: false, final false
  inline void set_FlexShrink(float_t value);

  /// @brief Method set_Height, addr 0x3622b90, size 0xbc, virtual false, abstract: false, final false
  inline void set_Height(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_JustifyContent, addr 0x36222f0, size 0x44, virtual false, abstract: false, final false
  inline void set_JustifyContent(::UnityEngine::Yoga::YogaJustify value);

  /// @brief Method set_Left, addr 0x36212b8, size 0xc, virtual false, abstract: false, final false
  inline void set_Left(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_MarginBottom, addr 0x3621510, size 0xc, virtual false, abstract: false, final false
  inline void set_MarginBottom(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_MarginLeft, addr 0x3621424, size 0xc, virtual false, abstract: false, final false
  inline void set_MarginLeft(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_MarginRight, addr 0x3621504, size 0xc, virtual false, abstract: false, final false
  inline void set_MarginRight(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_MarginTop, addr 0x36214f8, size 0xc, virtual false, abstract: false, final false
  inline void set_MarginTop(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_MaxHeight, addr 0x3622e34, size 0x7c, virtual false, abstract: false, final false
  inline void set_MaxHeight(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_MaxWidth, addr 0x3622d20, size 0x7c, virtual false, abstract: false, final false
  inline void set_MaxWidth(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_MinHeight, addr 0x362305c, size 0x7c, virtual false, abstract: false, final false
  inline void set_MinHeight(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_MinWidth, addr 0x3622f48, size 0x7c, virtual false, abstract: false, final false
  inline void set_MinWidth(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_Overflow, addr 0x3623440, size 0x44, virtual false, abstract: false, final false
  inline void set_Overflow(::UnityEngine::Yoga::YogaOverflow value);

  /// @brief Method set_PaddingBottom, addr 0x36216b0, size 0xc, virtual false, abstract: false, final false
  inline void set_PaddingBottom(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_PaddingLeft, addr 0x3621608, size 0xc, virtual false, abstract: false, final false
  inline void set_PaddingLeft(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_PaddingRight, addr 0x36216a4, size 0xc, virtual false, abstract: false, final false
  inline void set_PaddingRight(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_PaddingTop, addr 0x3621698, size 0xc, virtual false, abstract: false, final false
  inline void set_PaddingTop(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_PositionType, addr 0x3622598, size 0x44, virtual false, abstract: false, final false
  inline void set_PositionType(::UnityEngine::Yoga::YogaPositionType value);

  /// @brief Method set_Right, addr 0x3621354, size 0xc, virtual false, abstract: false, final false
  inline void set_Right(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_Top, addr 0x3621348, size 0xc, virtual false, abstract: false, final false
  inline void set_Top(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_Width, addr 0x3622a00, size 0xbc, virtual false, abstract: false, final false
  inline void set_Width(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_Wrap, addr 0x3622620, size 0x44, virtual false, abstract: false, final false
  inline void set_Wrap(::UnityEngine::Yoga::YogaWrap value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr YogaNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "YogaNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  YogaNode(YogaNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "YogaNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  YogaNode(YogaNode const&) = delete;

  /// @brief Field _ygNode, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ____ygNode;

  /// @brief Field _config, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Yoga::YogaConfig* ____config;

  /// @brief Field _parent, offset: 0x20, size: 0x8, def value: None
  ::System::WeakReference* ____parent;

  /// @brief Field _children, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Yoga::YogaNode*>* ____children;

  /// @brief Field _measureFunction, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Yoga::MeasureFunction* ____measureFunction;

  /// @brief Field _baselineFunction, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Yoga::BaselineFunction* ____baselineFunction;

  /// @brief Field _data, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaNode, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaNode, ____ygNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaNode, ____config) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaNode, ____parent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaNode, ____children) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaNode, ____measureFunction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaNode, ____baselineFunction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaNode, ____data) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::YogaNode);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaNode*, "UnityEngine.Yoga", "YogaNode");
