#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StylePropertyId.hpp"
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
// Dependencies
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.StylePropertyId
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
    __E_BackgroundPosition = static_cast<int32_t>(0x40001),
    __E_BackgroundPositionX = static_cast<int32_t>(0x70002),
    __E_BackgroundPositionY = static_cast<int32_t>(0x70003),
    __E_BackgroundRepeat = static_cast<int32_t>(0x70004),
    __E_BackgroundSize = static_cast<int32_t>(0x70005),
    __E_BorderBottomColor = static_cast<int32_t>(0x70006),
    __E_BorderBottomLeftRadius = static_cast<int32_t>(0x70007),
    __E_BorderBottomRightRadius = static_cast<int32_t>(0x70008),
    __E_BorderBottomWidth = static_cast<int32_t>(0x20003),
    __E_BorderColor = static_cast<int32_t>(0x40002),
    __E_BorderLeftColor = static_cast<int32_t>(0x70009),
    __E_BorderLeftWidth = static_cast<int32_t>(0x20004),
    __E_BorderRadius = static_cast<int32_t>(0x40003),
    __E_BorderRightColor = static_cast<int32_t>(0x7000a),
    __E_BorderRightWidth = static_cast<int32_t>(0x20005),
    __E_BorderTopColor = static_cast<int32_t>(0x7000b),
    __E_BorderTopLeftRadius = static_cast<int32_t>(0x7000c),
    __E_BorderTopRightRadius = static_cast<int32_t>(0x7000d),
    __E_BorderTopWidth = static_cast<int32_t>(0x20006),
    __E_BorderWidth = static_cast<int32_t>(0x40004),
    __E_Bottom = static_cast<int32_t>(0x20007),
    __E_Color = static_cast<int32_t>(0x10000),
    __E_Cursor = static_cast<int32_t>(0x30000),
    __E_Display = static_cast<int32_t>(0x20008),
    __E_Flex = static_cast<int32_t>(0x40005),
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
    __E_Margin = static_cast<int32_t>(0x40006),
    __E_MarginBottom = static_cast<int32_t>(0x20011),
    __E_MarginLeft = static_cast<int32_t>(0x20012),
    __E_MarginRight = static_cast<int32_t>(0x20013),
    __E_MarginTop = static_cast<int32_t>(0x20014),
    __E_MaxHeight = static_cast<int32_t>(0x20015),
    __E_MaxWidth = static_cast<int32_t>(0x20016),
    __E_MinHeight = static_cast<int32_t>(0x20017),
    __E_MinWidth = static_cast<int32_t>(0x20018),
    __E_Opacity = static_cast<int32_t>(0x7000e),
    __E_Overflow = static_cast<int32_t>(0x7000f),
    __E_Padding = static_cast<int32_t>(0x40007),
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
    __E_Transition = static_cast<int32_t>(0x40008),
    __E_TransitionDelay = static_cast<int32_t>(0x60000),
    __E_TransitionDuration = static_cast<int32_t>(0x60001),
    __E_TransitionProperty = static_cast<int32_t>(0x60002),
    __E_TransitionTimingFunction = static_cast<int32_t>(0x60003),
    __E_Translate = static_cast<int32_t>(0x50003),
    __E_UnityBackgroundImageTintColor = static_cast<int32_t>(0x30002),
    __E_UnityBackgroundScaleMode = static_cast<int32_t>(0x40009),
    __E_UnityEditorTextRenderingMode = static_cast<int32_t>(0x10004),
    __E_UnityFont = static_cast<int32_t>(0x10005),
    __E_UnityFontDefinition = static_cast<int32_t>(0x10006),
    __E_UnityFontStyleAndWeight = static_cast<int32_t>(0x10007),
    __E_UnityOverflowClipBox = static_cast<int32_t>(0x30003),
    __E_UnityParagraphSpacing = static_cast<int32_t>(0x10008),
    __E_UnitySliceBottom = static_cast<int32_t>(0x30004),
    __E_UnitySliceLeft = static_cast<int32_t>(0x30005),
    __E_UnitySliceRight = static_cast<int32_t>(0x30006),
    __E_UnitySliceScale = static_cast<int32_t>(0x30007),
    __E_UnitySliceTop = static_cast<int32_t>(0x30008),
    __E_UnityTextAlign = static_cast<int32_t>(0x10009),
    __E_UnityTextGenerator = static_cast<int32_t>(0x1000a),
    __E_UnityTextOutline = static_cast<int32_t>(0x4000a),
    __E_UnityTextOutlineColor = static_cast<int32_t>(0x1000b),
    __E_UnityTextOutlineWidth = static_cast<int32_t>(0x1000c),
    __E_UnityTextOverflowPosition = static_cast<int32_t>(0x30009),
    __E_Visibility = static_cast<int32_t>(0x1000d),
    __E_WhiteSpace = static_cast<int32_t>(0x1000e),
    __E_Width = static_cast<int32_t>(0x20020),
    __E_WordSpacing = static_cast<int32_t>(0x1000f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StylePropertyId_Unwrapped() const noexcept {
    return static_cast<__StylePropertyId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StylePropertyId(int32_t value__) noexcept;

  /// @brief Field AlignContent value: I32(131072)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const AlignContent;

  /// @brief Field AlignItems value: I32(131073)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const AlignItems;

  /// @brief Field AlignSelf value: I32(131074)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const AlignSelf;

  /// @brief Field All value: I32(262144)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const All;

  /// @brief Field BackgroundColor value: I32(458752)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BackgroundColor;

  /// @brief Field BackgroundImage value: I32(458753)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BackgroundImage;

  /// @brief Field BackgroundPosition value: I32(262145)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BackgroundPosition;

  /// @brief Field BackgroundPositionX value: I32(458754)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BackgroundPositionX;

  /// @brief Field BackgroundPositionY value: I32(458755)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BackgroundPositionY;

  /// @brief Field BackgroundRepeat value: I32(458756)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BackgroundRepeat;

  /// @brief Field BackgroundSize value: I32(458757)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BackgroundSize;

  /// @brief Field BorderBottomColor value: I32(458758)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderBottomColor;

  /// @brief Field BorderBottomLeftRadius value: I32(458759)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderBottomLeftRadius;

  /// @brief Field BorderBottomRightRadius value: I32(458760)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderBottomRightRadius;

  /// @brief Field BorderBottomWidth value: I32(131075)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderBottomWidth;

  /// @brief Field BorderColor value: I32(262146)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderColor;

  /// @brief Field BorderLeftColor value: I32(458761)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderLeftColor;

  /// @brief Field BorderLeftWidth value: I32(131076)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderLeftWidth;

  /// @brief Field BorderRadius value: I32(262147)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderRadius;

  /// @brief Field BorderRightColor value: I32(458762)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderRightColor;

  /// @brief Field BorderRightWidth value: I32(131077)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderRightWidth;

  /// @brief Field BorderTopColor value: I32(458763)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderTopColor;

  /// @brief Field BorderTopLeftRadius value: I32(458764)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderTopLeftRadius;

  /// @brief Field BorderTopRightRadius value: I32(458765)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderTopRightRadius;

  /// @brief Field BorderTopWidth value: I32(131078)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderTopWidth;

  /// @brief Field BorderWidth value: I32(262148)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderWidth;

  /// @brief Field Bottom value: I32(131079)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Bottom;

  /// @brief Field Color value: I32(65536)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Color;

  /// @brief Field Cursor value: I32(196608)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Cursor;

  /// @brief Field Custom value: I32(-1)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Custom;

  /// @brief Field Display value: I32(131080)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Display;

  /// @brief Field Flex value: I32(262149)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Flex;

  /// @brief Field FlexBasis value: I32(131081)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FlexBasis;

  /// @brief Field FlexDirection value: I32(131082)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FlexDirection;

  /// @brief Field FlexGrow value: I32(131083)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FlexGrow;

  /// @brief Field FlexShrink value: I32(131084)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FlexShrink;

  /// @brief Field FlexWrap value: I32(131085)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FlexWrap;

  /// @brief Field FontSize value: I32(65537)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FontSize;

  /// @brief Field Height value: I32(131086)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Height;

  /// @brief Field JustifyContent value: I32(131087)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const JustifyContent;

  /// @brief Field Left value: I32(131088)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Left;

  /// @brief Field LetterSpacing value: I32(65538)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const LetterSpacing;

  /// @brief Field Margin value: I32(262150)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Margin;

  /// @brief Field MarginBottom value: I32(131089)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MarginBottom;

  /// @brief Field MarginLeft value: I32(131090)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MarginLeft;

  /// @brief Field MarginRight value: I32(131091)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MarginRight;

  /// @brief Field MarginTop value: I32(131092)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MarginTop;

  /// @brief Field MaxHeight value: I32(131093)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MaxHeight;

  /// @brief Field MaxWidth value: I32(131094)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MaxWidth;

  /// @brief Field MinHeight value: I32(131095)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MinHeight;

  /// @brief Field MinWidth value: I32(131096)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MinWidth;

  /// @brief Field Opacity value: I32(458766)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Opacity;

  /// @brief Field Overflow value: I32(458767)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Overflow;

  /// @brief Field Padding value: I32(262151)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Padding;

  /// @brief Field PaddingBottom value: I32(131097)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const PaddingBottom;

  /// @brief Field PaddingLeft value: I32(131098)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const PaddingLeft;

  /// @brief Field PaddingRight value: I32(131099)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const PaddingRight;

  /// @brief Field PaddingTop value: I32(131100)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const PaddingTop;

  /// @brief Field Position value: I32(131101)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Position;

  /// @brief Field Right value: I32(131102)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Right;

  /// @brief Field Rotate value: I32(327680)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Rotate;

  /// @brief Field Scale value: I32(327681)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Scale;

  /// @brief Field TextOverflow value: I32(196609)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TextOverflow;

  /// @brief Field TextShadow value: I32(65539)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TextShadow;

  /// @brief Field Top value: I32(131103)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Top;

  /// @brief Field TransformOrigin value: I32(327682)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TransformOrigin;

  /// @brief Field Transition value: I32(262152)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Transition;

  /// @brief Field TransitionDelay value: I32(393216)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TransitionDelay;

  /// @brief Field TransitionDuration value: I32(393217)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TransitionDuration;

  /// @brief Field TransitionProperty value: I32(393218)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TransitionProperty;

  /// @brief Field TransitionTimingFunction value: I32(393219)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TransitionTimingFunction;

  /// @brief Field Translate value: I32(327683)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Translate;

  /// @brief Field UnityBackgroundImageTintColor value: I32(196610)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityBackgroundImageTintColor;

  /// @brief Field UnityBackgroundScaleMode value: I32(262153)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityBackgroundScaleMode;

  /// @brief Field UnityEditorTextRenderingMode value: I32(65540)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityEditorTextRenderingMode;

  /// @brief Field UnityFont value: I32(65541)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityFont;

  /// @brief Field UnityFontDefinition value: I32(65542)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityFontDefinition;

  /// @brief Field UnityFontStyleAndWeight value: I32(65543)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityFontStyleAndWeight;

  /// @brief Field UnityOverflowClipBox value: I32(196611)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityOverflowClipBox;

  /// @brief Field UnityParagraphSpacing value: I32(65544)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityParagraphSpacing;

  /// @brief Field UnitySliceBottom value: I32(196612)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnitySliceBottom;

  /// @brief Field UnitySliceLeft value: I32(196613)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnitySliceLeft;

  /// @brief Field UnitySliceRight value: I32(196614)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnitySliceRight;

  /// @brief Field UnitySliceScale value: I32(196615)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnitySliceScale;

  /// @brief Field UnitySliceTop value: I32(196616)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnitySliceTop;

  /// @brief Field UnityTextAlign value: I32(65545)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityTextAlign;

  /// @brief Field UnityTextGenerator value: I32(65546)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityTextGenerator;

  /// @brief Field UnityTextOutline value: I32(262154)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityTextOutline;

  /// @brief Field UnityTextOutlineColor value: I32(65547)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityTextOutlineColor;

  /// @brief Field UnityTextOutlineWidth value: I32(65548)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityTextOutlineWidth;

  /// @brief Field UnityTextOverflowPosition value: I32(196617)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityTextOverflowPosition;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Unknown;

  /// @brief Field Visibility value: I32(65549)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Visibility;

  /// @brief Field WhiteSpace value: I32(65550)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const WhiteSpace;

  /// @brief Field Width value: I32(131104)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Width;

  /// @brief Field WordSpacing value: I32(65551)
  static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const WordSpacing;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5450 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyId, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StylePropertyId, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StylePropertyId, "UnityEngine.UIElements.StyleSheets", "StylePropertyId");
