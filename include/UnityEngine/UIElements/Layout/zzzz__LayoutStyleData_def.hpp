#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutStyleData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer2_1_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer9_1_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutAlign_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDirection_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDisplay_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutFlexDirection_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutJustify_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutOverflow_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutPositionType_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutValue_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutWrap_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LayoutStyleData)
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutStyleData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutStyleData);
// Dependencies UnityEngine.UIElements.Layout.FixedBuffer2`1<T>, UnityEngine.UIElements.Layout.FixedBuffer9`1<T>, UnityEngine.UIElements.Layout.LayoutAlign,
// UnityEngine.UIElements.Layout.LayoutDirection, UnityEngine.UIElements.Layout.LayoutDisplay, UnityEngine.UIElements.Layout.LayoutFlexDirection, UnityEngine.UIElements.Layout.LayoutJustify,
// UnityEngine.UIElements.Layout.LayoutOverflow, UnityEngine.UIElements.Layout.LayoutPositionType, UnityEngine.UIElements.Layout.LayoutValue, UnityEngine.UIElements.Layout.LayoutWrap
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutStyleData
struct CORDL_TYPE LayoutStyleData {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x18c
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::UnityEngine::UIElements::Layout::LayoutStyleData Default;

  static inline ::UnityEngine::UIElements::Layout::LayoutStyleData getStaticF_Default();

  static inline void setStaticF_Default(::UnityEngine::UIElements::Layout::LayoutStyleData value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutStyleData();

  // Ctor Parameters [CppParam { name: "Direction", ty: "::UnityEngine::UIElements::Layout::LayoutDirection", modifiers: "", def_value: None }, CppParam { name: "FlexDirection", ty:
  // "::UnityEngine::UIElements::Layout::LayoutFlexDirection", modifiers: "", def_value: None }, CppParam { name: "JustifyContent", ty: "::UnityEngine::UIElements::Layout::LayoutJustify", modifiers:
  // "", def_value: None }, CppParam { name: "AlignContent", ty: "::UnityEngine::UIElements::Layout::LayoutAlign", modifiers: "", def_value: None }, CppParam { name: "AlignItems", ty:
  // "::UnityEngine::UIElements::Layout::LayoutAlign", modifiers: "", def_value: None }, CppParam { name: "AlignSelf", ty: "::UnityEngine::UIElements::Layout::LayoutAlign", modifiers: "", def_value:
  // None }, CppParam { name: "PositionType", ty: "::UnityEngine::UIElements::Layout::LayoutPositionType", modifiers: "", def_value: None }, CppParam { name: "AspectRatio", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "FlexWrap", ty: "::UnityEngine::UIElements::Layout::LayoutWrap", modifiers: "", def_value: None }, CppParam { name: "Overflow", ty:
  // "::UnityEngine::UIElements::Layout::LayoutOverflow", modifiers: "", def_value: None }, CppParam { name: "Display", ty: "::UnityEngine::UIElements::Layout::LayoutDisplay", modifiers: "",
  // def_value: None }, CppParam { name: "FlexGrow", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "FlexShrink", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "FlexBasis", ty: "::UnityEngine::UIElements::Layout::LayoutValue", modifiers: "", def_value: None }, CppParam { name: "border", ty:
  // "::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue>", modifiers: "", def_value: None }, CppParam { name: "position", ty:
  // "::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue>", modifiers: "", def_value: None }, CppParam { name: "margin", ty:
  // "::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue>", modifiers: "", def_value: None }, CppParam { name: "padding", ty:
  // "::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue>", modifiers: "", def_value: None }, CppParam { name: "maxDimensions", ty:
  // "::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue>", modifiers: "", def_value: None }, CppParam { name: "minDimensions", ty:
  // "::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue>", modifiers: "", def_value: None }, CppParam { name: "dimensions", ty:
  // "::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue>", modifiers: "", def_value: None }]
  constexpr LayoutStyleData(::UnityEngine::UIElements::Layout::LayoutDirection Direction, ::UnityEngine::UIElements::Layout::LayoutFlexDirection FlexDirection,
                            ::UnityEngine::UIElements::Layout::LayoutJustify JustifyContent, ::UnityEngine::UIElements::Layout::LayoutAlign AlignContent,
                            ::UnityEngine::UIElements::Layout::LayoutAlign AlignItems, ::UnityEngine::UIElements::Layout::LayoutAlign AlignSelf,
                            ::UnityEngine::UIElements::Layout::LayoutPositionType PositionType, float_t AspectRatio, ::UnityEngine::UIElements::Layout::LayoutWrap FlexWrap,
                            ::UnityEngine::UIElements::Layout::LayoutOverflow Overflow, ::UnityEngine::UIElements::Layout::LayoutDisplay Display, float_t FlexGrow, float_t FlexShrink,
                            ::UnityEngine::UIElements::Layout::LayoutValue FlexBasis, ::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue> border,
                            ::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue> position,
                            ::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue> margin,
                            ::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue> padding,
                            ::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue> maxDimensions,
                            ::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue> minDimensions,
                            ::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue> dimensions) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5442 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18c };

  /// @brief Field Direction, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::Layout::LayoutDirection Direction;

  /// @brief Field FlexDirection, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::Layout::LayoutFlexDirection FlexDirection;

  /// @brief Field JustifyContent, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::Layout::LayoutJustify JustifyContent;

  /// @brief Field AlignContent, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::UIElements::Layout::LayoutAlign AlignContent;

  /// @brief Field AlignItems, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::Layout::LayoutAlign AlignItems;

  /// @brief Field AlignSelf, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::UIElements::Layout::LayoutAlign AlignSelf;

  /// @brief Field PositionType, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UIElements::Layout::LayoutPositionType PositionType;

  /// @brief Field AspectRatio, offset: 0x1c, size: 0x4, def value: None
  float_t AspectRatio;

  /// @brief Field FlexWrap, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::UIElements::Layout::LayoutWrap FlexWrap;

  /// @brief Field Overflow, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::UIElements::Layout::LayoutOverflow Overflow;

  /// @brief Field Display, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::UIElements::Layout::LayoutDisplay Display;

  /// @brief Field FlexGrow, offset: 0x2c, size: 0x4, def value: None
  float_t FlexGrow;

  /// @brief Field FlexShrink, offset: 0x30, size: 0x4, def value: None
  float_t FlexShrink;

  /// @brief Field FlexBasis, offset: 0x34, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::LayoutValue FlexBasis;

  /// @brief Field border, offset: 0x3c, size: 0x48, def value: None
  ::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue> border;

  /// @brief Field position, offset: 0x84, size: 0x48, def value: None
  ::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue> position;

  /// @brief Field margin, offset: 0xcc, size: 0x48, def value: None
  ::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue> margin;

  /// @brief Field padding, offset: 0x114, size: 0x48, def value: None
  ::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue> padding;

  /// @brief Field maxDimensions, offset: 0x15c, size: 0x10, def value: None
  ::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue> maxDimensions;

  /// @brief Field minDimensions, offset: 0x16c, size: 0x10, def value: None
  ::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue> minDimensions;

  /// @brief Field dimensions, offset: 0x17c, size: 0x10, def value: None
  ::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue> dimensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, Direction) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, FlexDirection) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, JustifyContent) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, AlignContent) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, AlignItems) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, AlignSelf) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, PositionType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, AspectRatio) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, FlexWrap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, Overflow) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, Display) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, FlexGrow) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, FlexShrink) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, FlexBasis) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, border) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, position) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, margin) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, padding) == 0x114, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, maxDimensions) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, minDimensions) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutStyleData, dimensions) == 0x17c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutStyleData, 0x18c>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutStyleData, "UnityEngine.UIElements.Layout", "LayoutStyleData");
