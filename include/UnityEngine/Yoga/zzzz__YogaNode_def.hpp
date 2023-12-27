#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaNode)
namespace UnityEngine::Yoga {
class YogaConfig;
}
namespace UnityEngine::Yoga {
struct YogaMeasureMode;
}
namespace UnityEngine::Yoga {
struct YogaEdge;
}
namespace UnityEngine::Yoga {
class BaselineFunction;
}
namespace UnityEngine::Yoga {
struct YogaFlexDirection;
}
namespace UnityEngine::Yoga {
struct YogaPositionType;
}
namespace UnityEngine::Yoga {
struct YogaDisplay;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class WeakReference;
}
namespace UnityEngine::Yoga {
struct YogaAlign;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace UnityEngine::Yoga {
struct YogaValue;
}
namespace UnityEngine::Yoga {
struct YogaWrap;
}
namespace UnityEngine::Yoga {
struct YogaOverflow;
}
namespace UnityEngine::Yoga {
struct YogaJustify;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::Yoga {
class MeasureFunction;
}
namespace UnityEngine::Yoga {
struct YogaSize;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15354))
// CS Name: ::UnityEngine.Yoga::YogaNode*
class CORDL_TYPE YogaNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field _ygNode, offset 0x10, size 0x8
  __declspec(property(get = __get__ygNode, put = __set__ygNode)) void* _ygNode;

  /// @brief Field _config, offset 0x18, size 0x8
  __declspec(property(get = __get__config, put = __set__config))::UnityEngine::Yoga::YogaConfig* _config;

  /// @brief Field _parent, offset 0x20, size 0x8
  __declspec(property(get = __get__parent, put = __set__parent))::System::WeakReference* _parent;

  /// @brief Field _children, offset 0x28, size 0x8
  __declspec(property(get = __get__children, put = __set__children))::System::Collections::Generic::List_1<::UnityEngine::Yoga::YogaNode*>* _children;

  /// @brief Field _measureFunction, offset 0x30, size 0x8
  __declspec(property(get = __get__measureFunction, put = __set__measureFunction))::UnityEngine::Yoga::MeasureFunction* _measureFunction;

  /// @brief Field _baselineFunction, offset 0x38, size 0x8
  __declspec(property(get = __get__baselineFunction, put = __set__baselineFunction))::UnityEngine::Yoga::BaselineFunction* _baselineFunction;

  /// @brief Field _data, offset 0x40, size 0x8
  __declspec(property(get = __get__data, put = __set__data))::System::Object* _data;

  __declspec(property(put = set_Left))::UnityEngine::Yoga::YogaValue Left;

  __declspec(property(put = set_Top))::UnityEngine::Yoga::YogaValue Top;

  __declspec(property(put = set_Right))::UnityEngine::Yoga::YogaValue Right;

  __declspec(property(put = set_Bottom))::UnityEngine::Yoga::YogaValue Bottom;

  __declspec(property(put = set_MarginLeft))::UnityEngine::Yoga::YogaValue MarginLeft;

  __declspec(property(put = set_MarginTop))::UnityEngine::Yoga::YogaValue MarginTop;

  __declspec(property(put = set_MarginRight))::UnityEngine::Yoga::YogaValue MarginRight;

  __declspec(property(put = set_MarginBottom))::UnityEngine::Yoga::YogaValue MarginBottom;

  __declspec(property(put = set_PaddingLeft))::UnityEngine::Yoga::YogaValue PaddingLeft;

  __declspec(property(put = set_PaddingTop))::UnityEngine::Yoga::YogaValue PaddingTop;

  __declspec(property(put = set_PaddingRight))::UnityEngine::Yoga::YogaValue PaddingRight;

  __declspec(property(put = set_PaddingBottom))::UnityEngine::Yoga::YogaValue PaddingBottom;

  __declspec(property(put = set_BorderLeftWidth)) float_t BorderLeftWidth;

  __declspec(property(put = set_BorderTopWidth)) float_t BorderTopWidth;

  __declspec(property(put = set_BorderRightWidth)) float_t BorderRightWidth;

  __declspec(property(put = set_BorderBottomWidth)) float_t BorderBottomWidth;

  __declspec(property(get = get_LayoutMarginLeft)) float_t LayoutMarginLeft;

  __declspec(property(get = get_LayoutMarginTop)) float_t LayoutMarginTop;

  __declspec(property(get = get_LayoutMarginRight)) float_t LayoutMarginRight;

  __declspec(property(get = get_LayoutMarginBottom)) float_t LayoutMarginBottom;

  __declspec(property(get = get_LayoutPaddingLeft)) float_t LayoutPaddingLeft;

  __declspec(property(get = get_LayoutPaddingTop)) float_t LayoutPaddingTop;

  __declspec(property(get = get_LayoutPaddingRight)) float_t LayoutPaddingRight;

  __declspec(property(get = get_LayoutPaddingBottom)) float_t LayoutPaddingBottom;

  __declspec(property(get = get_LayoutBorderLeft)) float_t LayoutBorderLeft;

  __declspec(property(get = get_LayoutBorderTop)) float_t LayoutBorderTop;

  __declspec(property(get = get_LayoutBorderRight)) float_t LayoutBorderRight;

  __declspec(property(get = get_LayoutBorderBottom)) float_t LayoutBorderBottom;

  __declspec(property(put = set_Config))::UnityEngine::Yoga::YogaConfig* Config;

  __declspec(property(get = get_IsDirty)) bool IsDirty;

  __declspec(property(get = get_HasNewLayout)) bool HasNewLayout;

  __declspec(property(get = get_IsMeasureDefined)) bool IsMeasureDefined;

  __declspec(property(get = get_IsBaselineDefined)) bool IsBaselineDefined;

  __declspec(property(put = set_FlexDirection))::UnityEngine::Yoga::YogaFlexDirection FlexDirection;

  __declspec(property(put = set_JustifyContent))::UnityEngine::Yoga::YogaJustify JustifyContent;

  __declspec(property(put = set_Display))::UnityEngine::Yoga::YogaDisplay Display;

  __declspec(property(put = set_AlignItems))::UnityEngine::Yoga::YogaAlign AlignItems;

  __declspec(property(put = set_AlignSelf))::UnityEngine::Yoga::YogaAlign AlignSelf;

  __declspec(property(put = set_AlignContent))::UnityEngine::Yoga::YogaAlign AlignContent;

  __declspec(property(put = set_PositionType))::UnityEngine::Yoga::YogaPositionType PositionType;

  __declspec(property(put = set_Wrap))::UnityEngine::Yoga::YogaWrap Wrap;

  __declspec(property(put = set_Flex)) float_t Flex;

  __declspec(property(put = set_FlexGrow)) float_t FlexGrow;

  __declspec(property(put = set_FlexShrink)) float_t FlexShrink;

  __declspec(property(put = set_FlexBasis))::UnityEngine::Yoga::YogaValue FlexBasis;

  __declspec(property(put = set_Width))::UnityEngine::Yoga::YogaValue Width;

  __declspec(property(put = set_Height))::UnityEngine::Yoga::YogaValue Height;

  __declspec(property(put = set_MaxWidth))::UnityEngine::Yoga::YogaValue MaxWidth;

  __declspec(property(put = set_MaxHeight))::UnityEngine::Yoga::YogaValue MaxHeight;

  __declspec(property(put = set_MinWidth))::UnityEngine::Yoga::YogaValue MinWidth;

  __declspec(property(put = set_MinHeight))::UnityEngine::Yoga::YogaValue MinHeight;

  __declspec(property(get = get_LayoutX)) float_t LayoutX;

  __declspec(property(get = get_LayoutY)) float_t LayoutY;

  __declspec(property(get = get_LayoutRight)) float_t LayoutRight;

  __declspec(property(get = get_LayoutBottom)) float_t LayoutBottom;

  __declspec(property(get = get_LayoutWidth)) float_t LayoutWidth;

  __declspec(property(get = get_LayoutHeight)) float_t LayoutHeight;

  __declspec(property(put = set_Overflow))::UnityEngine::Yoga::YogaOverflow Overflow;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Yoga::YogaNode*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Yoga::YogaNode*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr void*& __get__ygNode();

  constexpr void* const& __get__ygNode() const;

  constexpr void __set__ygNode(void* value);

  constexpr ::UnityEngine::Yoga::YogaConfig*& __get__config();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Yoga::YogaConfig*> const& __get__config() const;

  constexpr void __set__config(::UnityEngine::Yoga::YogaConfig* value);

  constexpr ::System::WeakReference*& __get__parent();

  constexpr ::cordl_internals::to_const_pointer<::System::WeakReference*> const& __get__parent() const;

  constexpr void __set__parent(::System::WeakReference* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Yoga::YogaNode*>*& __get__children();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Yoga::YogaNode*>*> const& __get__children() const;

  constexpr void __set__children(::System::Collections::Generic::List_1<::UnityEngine::Yoga::YogaNode*>* value);

  constexpr ::UnityEngine::Yoga::MeasureFunction*& __get__measureFunction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Yoga::MeasureFunction*> const& __get__measureFunction() const;

  constexpr void __set__measureFunction(::UnityEngine::Yoga::MeasureFunction* value);

  constexpr ::UnityEngine::Yoga::BaselineFunction*& __get__baselineFunction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Yoga::BaselineFunction*> const& __get__baselineFunction() const;

  constexpr void __set__baselineFunction(::UnityEngine::Yoga::BaselineFunction* value);

  constexpr ::System::Object*& __get__data();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__data() const;

  constexpr void __set__data(::System::Object* value);

  /// @brief Method set_Left addr 0x2ea1f20 size 0xc virtual false final false
  inline void set_Left(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_Top addr 0x2ea1fb0 size 0xc virtual false final false
  inline void set_Top(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_Right addr 0x2ea1fbc size 0xc virtual false final false
  inline void set_Right(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_Bottom addr 0x2ea1fc8 size 0xc virtual false final false
  inline void set_Bottom(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method SetStylePosition addr 0x2ea1f2c size 0x84 virtual false final false
  inline void SetStylePosition(::UnityEngine::Yoga::YogaEdge edge, ::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_MarginLeft addr 0x2ea208c size 0xc virtual false final false
  inline void set_MarginLeft(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_MarginTop addr 0x2ea2160 size 0xc virtual false final false
  inline void set_MarginTop(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_MarginRight addr 0x2ea216c size 0xc virtual false final false
  inline void set_MarginRight(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_MarginBottom addr 0x2ea2178 size 0xc virtual false final false
  inline void set_MarginBottom(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method SetStyleMargin addr 0x2ea2098 size 0xc8 virtual false final false
  inline void SetStyleMargin(::UnityEngine::Yoga::YogaEdge edge, ::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_PaddingLeft addr 0x2ea2270 size 0xc virtual false final false
  inline void set_PaddingLeft(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_PaddingTop addr 0x2ea2300 size 0xc virtual false final false
  inline void set_PaddingTop(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_PaddingRight addr 0x2ea230c size 0xc virtual false final false
  inline void set_PaddingRight(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_PaddingBottom addr 0x2ea2318 size 0xc virtual false final false
  inline void set_PaddingBottom(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method SetStylePadding addr 0x2ea227c size 0x84 virtual false final false
  inline void SetStylePadding(::UnityEngine::Yoga::YogaEdge edge, ::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_BorderLeftWidth addr 0x2ea23cc size 0x50 virtual false final false
  inline void set_BorderLeftWidth(float_t value);

  /// @brief Method set_BorderTopWidth addr 0x2ea2470 size 0x50 virtual false final false
  inline void set_BorderTopWidth(float_t value);

  /// @brief Method set_BorderRightWidth addr 0x2ea24c0 size 0x50 virtual false final false
  inline void set_BorderRightWidth(float_t value);

  /// @brief Method set_BorderBottomWidth addr 0x2ea2510 size 0x50 virtual false final false
  inline void set_BorderBottomWidth(float_t value);

  /// @brief Method get_LayoutMarginLeft addr 0x2ea2560 size 0x40 virtual false final false
  inline float_t get_LayoutMarginLeft();

  /// @brief Method get_LayoutMarginTop addr 0x2ea25e4 size 0x40 virtual false final false
  inline float_t get_LayoutMarginTop();

  /// @brief Method get_LayoutMarginRight addr 0x2ea2624 size 0x40 virtual false final false
  inline float_t get_LayoutMarginRight();

  /// @brief Method get_LayoutMarginBottom addr 0x2ea2664 size 0x40 virtual false final false
  inline float_t get_LayoutMarginBottom();

  /// @brief Method get_LayoutPaddingLeft addr 0x2ea26a4 size 0x40 virtual false final false
  inline float_t get_LayoutPaddingLeft();

  /// @brief Method get_LayoutPaddingTop addr 0x2ea2728 size 0x40 virtual false final false
  inline float_t get_LayoutPaddingTop();

  /// @brief Method get_LayoutPaddingRight addr 0x2ea2768 size 0x40 virtual false final false
  inline float_t get_LayoutPaddingRight();

  /// @brief Method get_LayoutPaddingBottom addr 0x2ea27a8 size 0x40 virtual false final false
  inline float_t get_LayoutPaddingBottom();

  /// @brief Method get_LayoutBorderLeft addr 0x2ea27e8 size 0x40 virtual false final false
  inline float_t get_LayoutBorderLeft();

  /// @brief Method get_LayoutBorderTop addr 0x2ea286c size 0x40 virtual false final false
  inline float_t get_LayoutBorderTop();

  /// @brief Method get_LayoutBorderRight addr 0x2ea28ac size 0x40 virtual false final false
  inline float_t get_LayoutBorderRight();

  /// @brief Method get_LayoutBorderBottom addr 0x2ea28ec size 0x40 virtual false final false
  inline float_t get_LayoutBorderBottom();

  static inline ::UnityEngine::Yoga::YogaNode* New_ctor(::UnityEngine::Yoga::YogaConfig* config);

  /// @brief Method .ctor addr 0x2ea292c size 0x130 virtual false final false
  inline void _ctor(::UnityEngine::Yoga::YogaConfig* config);

  /// @brief Method Finalize addr 0x2ea2aa0 size 0x98 virtual true final false
  inline void Finalize();

  /// @brief Method set_Config addr 0x2ea2bc4 size 0xb0 virtual false final false
  inline void set_Config(::UnityEngine::Yoga::YogaConfig* value);

  /// @brief Method get_IsDirty addr 0x2ea2cb8 size 0x3c virtual false final false
  inline bool get_IsDirty();

  /// @brief Method MarkDirty addr 0x2ea2d30 size 0x3c virtual true final false
  inline void MarkDirty();

  /// @brief Method get_HasNewLayout addr 0x2ea2da8 size 0x3c virtual false final false
  inline bool get_HasNewLayout();

  /// @brief Method get_IsMeasureDefined addr 0x2ea2e20 size 0x10 virtual false final false
  inline bool get_IsMeasureDefined();

  /// @brief Method get_IsBaselineDefined addr 0x2ea2e30 size 0x10 virtual false final false
  inline bool get_IsBaselineDefined();

  /// @brief Method CopyStyle addr 0x2ea2e40 size 0x4c virtual false final false
  inline void CopyStyle(::UnityEngine::Yoga::YogaNode* srcNode);

  /// @brief Method set_FlexDirection addr 0x2ea2ed0 size 0x44 virtual false final false
  inline void set_FlexDirection(::UnityEngine::Yoga::YogaFlexDirection value);

  /// @brief Method set_JustifyContent addr 0x2ea2f58 size 0x44 virtual false final false
  inline void set_JustifyContent(::UnityEngine::Yoga::YogaJustify value);

  /// @brief Method set_Display addr 0x2ea2fe0 size 0x44 virtual false final false
  inline void set_Display(::UnityEngine::Yoga::YogaDisplay value);

  /// @brief Method set_AlignItems addr 0x2ea3068 size 0x44 virtual false final false
  inline void set_AlignItems(::UnityEngine::Yoga::YogaAlign value);

  /// @brief Method set_AlignSelf addr 0x2ea30f0 size 0x44 virtual false final false
  inline void set_AlignSelf(::UnityEngine::Yoga::YogaAlign value);

  /// @brief Method set_AlignContent addr 0x2ea3178 size 0x44 virtual false final false
  inline void set_AlignContent(::UnityEngine::Yoga::YogaAlign value);

  /// @brief Method set_PositionType addr 0x2ea3200 size 0x44 virtual false final false
  inline void set_PositionType(::UnityEngine::Yoga::YogaPositionType value);

  /// @brief Method set_Wrap addr 0x2ea3288 size 0x44 virtual false final false
  inline void set_Wrap(::UnityEngine::Yoga::YogaWrap value);

  /// @brief Method set_Flex addr 0x2ea3310 size 0x4c virtual false final false
  inline void set_Flex(float_t value);

  /// @brief Method set_FlexGrow addr 0x2ea33a8 size 0x4c virtual false final false
  inline void set_FlexGrow(float_t value);

  /// @brief Method set_FlexShrink addr 0x2ea3440 size 0x4c virtual false final false
  inline void set_FlexShrink(float_t value);

  /// @brief Method set_FlexBasis addr 0x2ea34d8 size 0xbc virtual false final false
  inline void set_FlexBasis(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_Width addr 0x2ea3668 size 0xbc virtual false final false
  inline void set_Width(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_Height addr 0x2ea37f8 size 0xbc virtual false final false
  inline void set_Height(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_MaxWidth addr 0x2ea3988 size 0x7c virtual false final false
  inline void set_MaxWidth(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_MaxHeight addr 0x2ea3a9c size 0x7c virtual false final false
  inline void set_MaxHeight(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_MinWidth addr 0x2ea3bb0 size 0x7c virtual false final false
  inline void set_MinWidth(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method set_MinHeight addr 0x2ea3cc4 size 0x7c virtual false final false
  inline void set_MinHeight(::UnityEngine::Yoga::YogaValue value);

  /// @brief Method get_LayoutX addr 0x2ea3dd8 size 0x3c virtual false final false
  inline float_t get_LayoutX();

  /// @brief Method get_LayoutY addr 0x2ea3e50 size 0x3c virtual false final false
  inline float_t get_LayoutY();

  /// @brief Method get_LayoutRight addr 0x2ea3ec8 size 0x3c virtual false final false
  inline float_t get_LayoutRight();

  /// @brief Method get_LayoutBottom addr 0x2ea3f40 size 0x3c virtual false final false
  inline float_t get_LayoutBottom();

  /// @brief Method get_LayoutWidth addr 0x2ea3fb8 size 0x3c virtual false final false
  inline float_t get_LayoutWidth();

  /// @brief Method get_LayoutHeight addr 0x2ea4030 size 0x3c virtual false final false
  inline float_t get_LayoutHeight();

  /// @brief Method set_Overflow addr 0x2ea40a8 size 0x44 virtual false final false
  inline void set_Overflow(::UnityEngine::Yoga::YogaOverflow value);

  /// @brief Method get_Count addr 0x2ea4130 size 0x4c virtual false final false
  inline int32_t get_Count();

  /// @brief Method MarkLayoutSeen addr 0x2ea417c size 0x40 virtual false final false
  inline void MarkLayoutSeen();

  /// @brief Method Insert addr 0x2ea4200 size 0x124 virtual false final false
  inline void Insert(int32_t index, ::UnityEngine::Yoga::YogaNode* node);

  /// @brief Method RemoveAt addr 0x2ea4378 size 0xc8 virtual false final false
  inline void RemoveAt(int32_t index);

  /// @brief Method Clear addr 0x2ea4484 size 0x64 virtual false final false
  inline void Clear();

  /// @brief Method SetMeasureFunction addr 0x2ea44e8 size 0xd8 virtual false final false
  inline void SetMeasureFunction(::UnityEngine::Yoga::MeasureFunction* measureFunction);

  /// @brief Method CalculateLayout addr 0x2ea467c size 0x84 virtual false final false
  inline void CalculateLayout(float_t width, float_t height);

  /// @brief Method MeasureInternal addr 0x2ea4798 size 0x7c virtual false final false
  static inline ::UnityEngine::Yoga::YogaSize MeasureInternal(::UnityEngine::Yoga::YogaNode* node, float_t width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, float_t height,
                                                              ::UnityEngine::Yoga::YogaMeasureMode heightMode);

  /// @brief Method BaselineInternal addr 0x2ea4814 size 0x74 virtual false final false
  static inline float_t BaselineInternal(::UnityEngine::Yoga::YogaNode* node, float_t width, float_t height);

  /// @brief Method GetEnumerator addr 0x2ea4888 size 0x12c virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Yoga::YogaNode*>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ea49b4 size 0x12c virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "YogaNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  YogaNode(YogaNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "YogaNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  YogaNode(YogaNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr YogaNode();

public:
  /// @brief Field _ygNode, offset: 0x10, size: 0x8, def value: None
  void* ____ygNode;

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

} // namespace UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::YogaNode);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaNode*, "UnityEngine.Yoga", "YogaNode");
