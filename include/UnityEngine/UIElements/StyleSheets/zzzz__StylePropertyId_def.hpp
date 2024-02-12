#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StylePropertyId)
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::StylePropertyId);
// Type: UnityEngine.UIElements.StyleSheets::StylePropertyId
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6746))
// CS Name: ::UnityEngine.UIElements.StyleSheets::StylePropertyId
struct CORDL_TYPE StylePropertyId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StylePropertyId_Unwrapped
  enum struct __StylePropertyId_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Custom = static_cast<int32_t>(0xffffffff),
    __E_AlignContent = static_cast<int32_t>(0x20000),
    __E_AlignItems = static_cast<int32_t>(0x20001),
    __E_AlignSelf = static_cast<int32_t>(0x20002),
    __E_All = static_cast<int32_t>(0x40000),
    __E_BackgroundColor = static_cast<int32_t>(0x70000),
    __E_BackgroundImage = static_cast<int32_t>(0x70001),
    __E_BorderBottomColor = static_cast<int32_t>(0x70002),
    __E_BorderBottomLeftRadius = static_cast<int32_t>(0x70003),
    __E_BorderBottomRightRadius = static_cast<int32_t>(0x70004),
    __E_BorderBottomWidth = static_cast<int32_t>(0x20003),
    __E_BorderColor = static_cast<int32_t>(0x40001),
    __E_BorderLeftColor = static_cast<int32_t>(0x70005),
    __E_BorderLeftWidth = static_cast<int32_t>(0x20004),
    __E_BorderRadius = static_cast<int32_t>(0x40002),
    __E_BorderRightColor = static_cast<int32_t>(0x70006),
    __E_BorderRightWidth = static_cast<int32_t>(0x20005),
    __E_BorderTopColor = static_cast<int32_t>(0x70007),
    __E_BorderTopLeftRadius = static_cast<int32_t>(0x70008),
    __E_BorderTopRightRadius = static_cast<int32_t>(0x70009),
    __E_BorderTopWidth = static_cast<int32_t>(0x20006),
    __E_BorderWidth = static_cast<int32_t>(0x40003),
    __E_Bottom = static_cast<int32_t>(0x20007),
    __E_Color = static_cast<int32_t>(0x10000),
    __E_Cursor = static_cast<int32_t>(0x30000),
    __E_Display = static_cast<int32_t>(0x20008),
    __E_Flex = static_cast<int32_t>(0x40004),
    __E_FlexBasis = static_cast<int32_t>(0x20009),
    __E_FlexDirection = static_cast<int32_t>(0x2000a),
    __E_FlexGrow = static_cast<int32_t>(0x2000b),
    __E_FlexShrink = static_cast<int32_t>(0x2000c),
    __E_FlexWrap = static_cast<int32_t>(0x2000d),
    __E_FontSize = static_cast<int32_t>(0x10001),
    __E_Height = static_cast<int32_t>(0x2000e),
    __E_JustifyContent = static_cast<int32_t>(0x2000f),
    __E_Left = static_cast<int32_t>(0x20010),
    __E_LetterSpacing = static_cast<int32_t>(0x10002),
    __E_Margin = static_cast<int32_t>(0x40005),
    __E_MarginBottom = static_cast<int32_t>(0x20011),
    __E_MarginLeft = static_cast<int32_t>(0x20012),
    __E_MarginRight = static_cast<int32_t>(0x20013),
    __E_MarginTop = static_cast<int32_t>(0x20014),
    __E_MaxHeight = static_cast<int32_t>(0x20015),
    __E_MaxWidth = static_cast<int32_t>(0x20016),
    __E_MinHeight = static_cast<int32_t>(0x20017),
    __E_MinWidth = static_cast<int32_t>(0x20018),
    __E_Opacity = static_cast<int32_t>(0x7000a),
    __E_Overflow = static_cast<int32_t>(0x7000b),
    __E_Padding = static_cast<int32_t>(0x40006),
    __E_PaddingBottom = static_cast<int32_t>(0x20019),
    __E_PaddingLeft = static_cast<int32_t>(0x2001a),
    __E_PaddingRight = static_cast<int32_t>(0x2001b),
    __E_PaddingTop = static_cast<int32_t>(0x2001c),
    __E_Position = static_cast<int32_t>(0x2001d),
    __E_Right = static_cast<int32_t>(0x2001e),
    __E_Rotate = static_cast<int32_t>(0x50000),
    __E_Scale = static_cast<int32_t>(0x50001),
    __E_TextOverflow = static_cast<int32_t>(0x30001),
    __E_TextShadow = static_cast<int32_t>(0x10003),
    __E_Top = static_cast<int32_t>(0x2001f),
    __E_TransformOrigin = static_cast<int32_t>(0x50002),
    __E_Transition = static_cast<int32_t>(0x40007),
    __E_TransitionDelay = static_cast<int32_t>(0x60000),
    __E_TransitionDuration = static_cast<int32_t>(0x60001),
    __E_TransitionProperty = static_cast<int32_t>(0x60002),
    __E_TransitionTimingFunction = static_cast<int32_t>(0x60003),
    __E_Translate = static_cast<int32_t>(0x50003),
    __E_UnityBackgroundImageTintColor = static_cast<int32_t>(0x30002),
    __E_UnityBackgroundScaleMode = static_cast<int32_t>(0x30003),
    __E_UnityFont = static_cast<int32_t>(0x10004),
    __E_UnityFontDefinition = static_cast<int32_t>(0x10005),
    __E_UnityFontStyleAndWeight = static_cast<int32_t>(0x10006),
    __E_UnityOverflowClipBox = static_cast<int32_t>(0x30004),
    __E_UnityParagraphSpacing = static_cast<int32_t>(0x10007),
    __E_UnitySliceBottom = static_cast<int32_t>(0x30005),
    __E_UnitySliceLeft = static_cast<int32_t>(0x30006),
    __E_UnitySliceRight = static_cast<int32_t>(0x30007),
    __E_UnitySliceTop = static_cast<int32_t>(0x30008),
    __E_UnityTextAlign = static_cast<int32_t>(0x10008),
    __E_UnityTextOutline = static_cast<int32_t>(0x40008),
    __E_UnityTextOutlineColor = static_cast<int32_t>(0x10009),
    __E_UnityTextOutlineWidth = static_cast<int32_t>(0x1000a),
    __E_UnityTextOverflowPosition = static_cast<int32_t>(0x30009),
    __E_Visibility = static_cast<int32_t>(0x1000b),
    __E_WhiteSpace = static_cast<int32_t>(0x1000c),
    __E_Width = static_cast<int32_t>(0x20020),
    __E_WordSpacing = static_cast<int32_t>(0x1000d),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StylePropertyId_Unwrapped() const noexcept {
    return static_cast<__StylePropertyId_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StylePropertyId(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyId();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Unknown;

  /// @brief Field Custom value: static_cast<int32_t>(0xffffffff)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Custom;

  /// @brief Field AlignContent value: static_cast<int32_t>(0x20000)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const AlignContent;

  /// @brief Field AlignItems value: static_cast<int32_t>(0x20001)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const AlignItems;

  /// @brief Field AlignSelf value: static_cast<int32_t>(0x20002)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const AlignSelf;

  /// @brief Field All value: static_cast<int32_t>(0x40000)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const All;

  /// @brief Field BackgroundColor value: static_cast<int32_t>(0x70000)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BackgroundColor;

  /// @brief Field BackgroundImage value: static_cast<int32_t>(0x70001)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BackgroundImage;

  /// @brief Field BorderBottomColor value: static_cast<int32_t>(0x70002)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderBottomColor;

  /// @brief Field BorderBottomLeftRadius value: static_cast<int32_t>(0x70003)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderBottomLeftRadius;

  /// @brief Field BorderBottomRightRadius value: static_cast<int32_t>(0x70004)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderBottomRightRadius;

  /// @brief Field BorderBottomWidth value: static_cast<int32_t>(0x20003)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderBottomWidth;

  /// @brief Field BorderColor value: static_cast<int32_t>(0x40001)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderColor;

  /// @brief Field BorderLeftColor value: static_cast<int32_t>(0x70005)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderLeftColor;

  /// @brief Field BorderLeftWidth value: static_cast<int32_t>(0x20004)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderLeftWidth;

  /// @brief Field BorderRadius value: static_cast<int32_t>(0x40002)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderRadius;

  /// @brief Field BorderRightColor value: static_cast<int32_t>(0x70006)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderRightColor;

  /// @brief Field BorderRightWidth value: static_cast<int32_t>(0x20005)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderRightWidth;

  /// @brief Field BorderTopColor value: static_cast<int32_t>(0x70007)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderTopColor;

  /// @brief Field BorderTopLeftRadius value: static_cast<int32_t>(0x70008)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderTopLeftRadius;

  /// @brief Field BorderTopRightRadius value: static_cast<int32_t>(0x70009)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderTopRightRadius;

  /// @brief Field BorderTopWidth value: static_cast<int32_t>(0x20006)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderTopWidth;

  /// @brief Field BorderWidth value: static_cast<int32_t>(0x40003)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderWidth;

  /// @brief Field Bottom value: static_cast<int32_t>(0x20007)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Bottom;

  /// @brief Field Color value: static_cast<int32_t>(0x10000)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Color;

  /// @brief Field Cursor value: static_cast<int32_t>(0x30000)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Cursor;

  /// @brief Field Display value: static_cast<int32_t>(0x20008)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Display;

  /// @brief Field Flex value: static_cast<int32_t>(0x40004)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Flex;

  /// @brief Field FlexBasis value: static_cast<int32_t>(0x20009)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FlexBasis;

  /// @brief Field FlexDirection value: static_cast<int32_t>(0x2000a)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FlexDirection;

  /// @brief Field FlexGrow value: static_cast<int32_t>(0x2000b)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FlexGrow;

  /// @brief Field FlexShrink value: static_cast<int32_t>(0x2000c)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FlexShrink;

  /// @brief Field FlexWrap value: static_cast<int32_t>(0x2000d)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FlexWrap;

  /// @brief Field FontSize value: static_cast<int32_t>(0x10001)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FontSize;

  /// @brief Field Height value: static_cast<int32_t>(0x2000e)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Height;

  /// @brief Field JustifyContent value: static_cast<int32_t>(0x2000f)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const JustifyContent;

  /// @brief Field Left value: static_cast<int32_t>(0x20010)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Left;

  /// @brief Field LetterSpacing value: static_cast<int32_t>(0x10002)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const LetterSpacing;

  /// @brief Field Margin value: static_cast<int32_t>(0x40005)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Margin;

  /// @brief Field MarginBottom value: static_cast<int32_t>(0x20011)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MarginBottom;

  /// @brief Field MarginLeft value: static_cast<int32_t>(0x20012)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MarginLeft;

  /// @brief Field MarginRight value: static_cast<int32_t>(0x20013)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MarginRight;

  /// @brief Field MarginTop value: static_cast<int32_t>(0x20014)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MarginTop;

  /// @brief Field MaxHeight value: static_cast<int32_t>(0x20015)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MaxHeight;

  /// @brief Field MaxWidth value: static_cast<int32_t>(0x20016)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MaxWidth;

  /// @brief Field MinHeight value: static_cast<int32_t>(0x20017)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MinHeight;

  /// @brief Field MinWidth value: static_cast<int32_t>(0x20018)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MinWidth;

  /// @brief Field Opacity value: static_cast<int32_t>(0x7000a)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Opacity;

  /// @brief Field Overflow value: static_cast<int32_t>(0x7000b)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Overflow;

  /// @brief Field Padding value: static_cast<int32_t>(0x40006)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Padding;

  /// @brief Field PaddingBottom value: static_cast<int32_t>(0x20019)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const PaddingBottom;

  /// @brief Field PaddingLeft value: static_cast<int32_t>(0x2001a)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const PaddingLeft;

  /// @brief Field PaddingRight value: static_cast<int32_t>(0x2001b)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const PaddingRight;

  /// @brief Field PaddingTop value: static_cast<int32_t>(0x2001c)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const PaddingTop;

  /// @brief Field Position value: static_cast<int32_t>(0x2001d)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Position;

  /// @brief Field Right value: static_cast<int32_t>(0x2001e)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Right;

  /// @brief Field Rotate value: static_cast<int32_t>(0x50000)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Rotate;

  /// @brief Field Scale value: static_cast<int32_t>(0x50001)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Scale;

  /// @brief Field TextOverflow value: static_cast<int32_t>(0x30001)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TextOverflow;

  /// @brief Field TextShadow value: static_cast<int32_t>(0x10003)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TextShadow;

  /// @brief Field Top value: static_cast<int32_t>(0x2001f)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Top;

  /// @brief Field TransformOrigin value: static_cast<int32_t>(0x50002)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TransformOrigin;

  /// @brief Field Transition value: static_cast<int32_t>(0x40007)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Transition;

  /// @brief Field TransitionDelay value: static_cast<int32_t>(0x60000)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TransitionDelay;

  /// @brief Field TransitionDuration value: static_cast<int32_t>(0x60001)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TransitionDuration;

  /// @brief Field TransitionProperty value: static_cast<int32_t>(0x60002)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TransitionProperty;

  /// @brief Field TransitionTimingFunction value: static_cast<int32_t>(0x60003)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TransitionTimingFunction;

  /// @brief Field Translate value: static_cast<int32_t>(0x50003)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Translate;

  /// @brief Field UnityBackgroundImageTintColor value: static_cast<int32_t>(0x30002)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityBackgroundImageTintColor;

  /// @brief Field UnityBackgroundScaleMode value: static_cast<int32_t>(0x30003)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityBackgroundScaleMode;

  /// @brief Field UnityFont value: static_cast<int32_t>(0x10004)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityFont;

  /// @brief Field UnityFontDefinition value: static_cast<int32_t>(0x10005)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityFontDefinition;

  /// @brief Field UnityFontStyleAndWeight value: static_cast<int32_t>(0x10006)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityFontStyleAndWeight;

  /// @brief Field UnityOverflowClipBox value: static_cast<int32_t>(0x30004)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityOverflowClipBox;

  /// @brief Field UnityParagraphSpacing value: static_cast<int32_t>(0x10007)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityParagraphSpacing;

  /// @brief Field UnitySliceBottom value: static_cast<int32_t>(0x30005)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnitySliceBottom;

  /// @brief Field UnitySliceLeft value: static_cast<int32_t>(0x30006)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnitySliceLeft;

  /// @brief Field UnitySliceRight value: static_cast<int32_t>(0x30007)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnitySliceRight;

  /// @brief Field UnitySliceTop value: static_cast<int32_t>(0x30008)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnitySliceTop;

  /// @brief Field UnityTextAlign value: static_cast<int32_t>(0x10008)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityTextAlign;

  /// @brief Field UnityTextOutline value: static_cast<int32_t>(0x40008)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityTextOutline;

  /// @brief Field UnityTextOutlineColor value: static_cast<int32_t>(0x10009)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityTextOutlineColor;

  /// @brief Field UnityTextOutlineWidth value: static_cast<int32_t>(0x1000a)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityTextOutlineWidth;

  /// @brief Field UnityTextOverflowPosition value: static_cast<int32_t>(0x30009)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityTextOverflowPosition;

  /// @brief Field Visibility value: static_cast<int32_t>(0x1000b)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Visibility;

  /// @brief Field WhiteSpace value: static_cast<int32_t>(0x1000c)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const WhiteSpace;

  /// @brief Field Width value: static_cast<int32_t>(0x20020)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Width;

  /// @brief Field WordSpacing value: static_cast<int32_t>(0x1000d)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const WordSpacing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StylePropertyId, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyId, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StylePropertyId, "UnityEngine.UIElements.StyleSheets", "StylePropertyId");
