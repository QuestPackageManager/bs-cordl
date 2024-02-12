#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__ComputedStyle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InitialStyle)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
struct Align;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace UnityEngine::UIElements {
struct Cursor;
}
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
namespace UnityEngine::UIElements {
struct EasingFunction;
}
namespace UnityEngine::UIElements {
struct FlexDirection;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct Justify;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct OverflowClipBox;
}
namespace UnityEngine::UIElements {
struct OverflowInternal;
}
namespace UnityEngine::UIElements {
struct Position;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
namespace UnityEngine::UIElements {
struct TextOverflow;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine::UIElements {
struct Visibility;
}
namespace UnityEngine::UIElements {
struct WhiteSpace;
}
namespace UnityEngine::UIElements {
struct Wrap;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine {
struct TextAnchor;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class InitialStyle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::InitialStyle);
// Type: UnityEngine.UIElements.StyleSheets::InitialStyle
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6555))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6744))
// CS Name: ::UnityEngine.UIElements.StyleSheets::InitialStyle*
class CORDL_TYPE InitialStyle : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_InitialStyle, offset 0xffffffff, size 0x58
  static __declspec(property(get = getStaticF_s_InitialStyle, put = setStaticF_s_InitialStyle))::UnityEngine::UIElements::ComputedStyle s_InitialStyle;

  static inline void setStaticF_s_InitialStyle(::UnityEngine::UIElements::ComputedStyle value);

  static inline ::UnityEngine::UIElements::ComputedStyle getStaticF_s_InitialStyle();

  /// @brief Method Get, addr 0x2e0fef0, size 0x54, virtual false, abstract: false, final false
  static inline ByRef<::UnityEngine::UIElements::ComputedStyle> Get();

  /// @brief Method Acquire, addr 0x2e0ff44, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::ComputedStyle Acquire();

  /// @brief Method get_alignContent, addr 0x2e10d3c, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Align get_alignContent();

  /// @brief Method get_alignItems, addr 0x2e10db4, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Align get_alignItems();

  /// @brief Method get_alignSelf, addr 0x2e10e2c, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Align get_alignSelf();

  /// @brief Method get_backgroundColor, addr 0x2e10ea4, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method get_backgroundImage, addr 0x2e10f20, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Background get_backgroundImage();

  /// @brief Method get_borderBottomColor, addr 0x2e10fa0, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_borderBottomColor();

  /// @brief Method get_borderBottomLeftRadius, addr 0x2e1101c, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_borderBottomLeftRadius();

  /// @brief Method get_borderBottomRightRadius, addr 0x2e11094, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_borderBottomRightRadius();

  /// @brief Method get_borderBottomWidth, addr 0x2e1110c, size 0x78, virtual false, abstract: false, final false
  static inline float_t get_borderBottomWidth();

  /// @brief Method get_borderLeftColor, addr 0x2e11184, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_borderLeftColor();

  /// @brief Method get_borderLeftWidth, addr 0x2e11200, size 0x78, virtual false, abstract: false, final false
  static inline float_t get_borderLeftWidth();

  /// @brief Method get_borderRightColor, addr 0x2e11278, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_borderRightColor();

  /// @brief Method get_borderRightWidth, addr 0x2e112f4, size 0x78, virtual false, abstract: false, final false
  static inline float_t get_borderRightWidth();

  /// @brief Method get_borderTopColor, addr 0x2e1136c, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_borderTopColor();

  /// @brief Method get_borderTopLeftRadius, addr 0x2e113e8, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_borderTopLeftRadius();

  /// @brief Method get_borderTopRightRadius, addr 0x2e11460, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_borderTopRightRadius();

  /// @brief Method get_borderTopWidth, addr 0x2e114d8, size 0x78, virtual false, abstract: false, final false
  static inline float_t get_borderTopWidth();

  /// @brief Method get_bottom, addr 0x2e11550, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_bottom();

  /// @brief Method get_color, addr 0x2e115c8, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_color();

  /// @brief Method get_cursor, addr 0x2e11640, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Cursor get_cursor();

  /// @brief Method get_display, addr 0x2e116c8, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::DisplayStyle get_display();

  /// @brief Method get_flexBasis, addr 0x2e11740, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_flexBasis();

  /// @brief Method get_flexDirection, addr 0x2e117b8, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FlexDirection get_flexDirection();

  /// @brief Method get_flexGrow, addr 0x2e11830, size 0x78, virtual false, abstract: false, final false
  static inline float_t get_flexGrow();

  /// @brief Method get_flexShrink, addr 0x2e118a8, size 0x78, virtual false, abstract: false, final false
  static inline float_t get_flexShrink();

  /// @brief Method get_flexWrap, addr 0x2e11920, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Wrap get_flexWrap();

  /// @brief Method get_fontSize, addr 0x2e11998, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_fontSize();

  /// @brief Method get_height, addr 0x2e11a0c, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_height();

  /// @brief Method get_justifyContent, addr 0x2e11a84, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Justify get_justifyContent();

  /// @brief Method get_left, addr 0x2e11afc, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_left();

  /// @brief Method get_letterSpacing, addr 0x2e11b74, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_letterSpacing();

  /// @brief Method get_marginBottom, addr 0x2e11be8, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_marginBottom();

  /// @brief Method get_marginLeft, addr 0x2e11c60, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_marginLeft();

  /// @brief Method get_marginRight, addr 0x2e11cd8, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_marginRight();

  /// @brief Method get_marginTop, addr 0x2e11d50, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_marginTop();

  /// @brief Method get_maxHeight, addr 0x2e11dc8, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_maxHeight();

  /// @brief Method get_maxWidth, addr 0x2e11e40, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_maxWidth();

  /// @brief Method get_minHeight, addr 0x2e11eb8, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_minHeight();

  /// @brief Method get_minWidth, addr 0x2e11f30, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_minWidth();

  /// @brief Method get_opacity, addr 0x2e11fa8, size 0x78, virtual false, abstract: false, final false
  static inline float_t get_opacity();

  /// @brief Method get_overflow, addr 0x2e12020, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::OverflowInternal get_overflow();

  /// @brief Method get_paddingBottom, addr 0x2e12098, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_paddingBottom();

  /// @brief Method get_paddingLeft, addr 0x2e12110, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_paddingLeft();

  /// @brief Method get_paddingRight, addr 0x2e12188, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_paddingRight();

  /// @brief Method get_paddingTop, addr 0x2e12200, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_paddingTop();

  /// @brief Method get_position, addr 0x2e12278, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Position get_position();

  /// @brief Method get_right, addr 0x2e122f0, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_right();

  /// @brief Method get_rotate, addr 0x2e12368, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Rotate get_rotate();

  /// @brief Method get_scale, addr 0x2e123f0, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Scale get_scale();

  /// @brief Method get_textOverflow, addr 0x2e1246c, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TextOverflow get_textOverflow();

  /// @brief Method get_textShadow, addr 0x2e124e4, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TextShadow get_textShadow();

  /// @brief Method get_top, addr 0x2e12568, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_top();

  /// @brief Method get_transformOrigin, addr 0x2e125e0, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TransformOrigin get_transformOrigin();

  /// @brief Method get_transitionDelay, addr 0x2e12668, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* get_transitionDelay();

  /// @brief Method get_transitionDuration, addr 0x2e126e0, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* get_transitionDuration();

  /// @brief Method get_transitionProperty, addr 0x2e12758, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* get_transitionProperty();

  /// @brief Method get_transitionTimingFunction, addr 0x2e127d0, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* get_transitionTimingFunction();

  /// @brief Method get_translate, addr 0x2e12848, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Translate get_translate();

  /// @brief Method get_unityBackgroundImageTintColor, addr 0x2e128d0, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_unityBackgroundImageTintColor();

  /// @brief Method get_unityBackgroundScaleMode, addr 0x2e1294c, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::ScaleMode get_unityBackgroundScaleMode();

  /// @brief Method get_unityFont, addr 0x2e129c4, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Font> get_unityFont();

  /// @brief Method get_unityFontDefinition, addr 0x2e12a38, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FontDefinition get_unityFontDefinition();

  /// @brief Method get_unityFontStyleAndWeight, addr 0x2e12ab0, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::FontStyle get_unityFontStyleAndWeight();

  /// @brief Method get_unityOverflowClipBox, addr 0x2e12b24, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::OverflowClipBox get_unityOverflowClipBox();

  /// @brief Method get_unityParagraphSpacing, addr 0x2e12b9c, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_unityParagraphSpacing();

  /// @brief Method get_unitySliceBottom, addr 0x2e12c10, size 0x78, virtual false, abstract: false, final false
  static inline int32_t get_unitySliceBottom();

  /// @brief Method get_unitySliceLeft, addr 0x2e12c88, size 0x78, virtual false, abstract: false, final false
  static inline int32_t get_unitySliceLeft();

  /// @brief Method get_unitySliceRight, addr 0x2e12d00, size 0x78, virtual false, abstract: false, final false
  static inline int32_t get_unitySliceRight();

  /// @brief Method get_unitySliceTop, addr 0x2e12d78, size 0x78, virtual false, abstract: false, final false
  static inline int32_t get_unitySliceTop();

  /// @brief Method get_unityTextAlign, addr 0x2e12df0, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextAnchor get_unityTextAlign();

  /// @brief Method get_unityTextOutlineColor, addr 0x2e12e64, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_unityTextOutlineColor();

  /// @brief Method get_unityTextOutlineWidth, addr 0x2e12edc, size 0x74, virtual false, abstract: false, final false
  static inline float_t get_unityTextOutlineWidth();

  /// @brief Method get_unityTextOverflowPosition, addr 0x2e12f50, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TextOverflowPosition get_unityTextOverflowPosition();

  /// @brief Method get_visibility, addr 0x2e12fc8, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Visibility get_visibility();

  /// @brief Method get_whiteSpace, addr 0x2e1303c, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::WhiteSpace get_whiteSpace();

  /// @brief Method get_width, addr 0x2e130b0, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_width();

  /// @brief Method get_wordSpacing, addr 0x2e13128, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length get_wordSpacing();

  // Ctor Parameters [CppParam { name: "", ty: "InitialStyle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitialStyle(InitialStyle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitialStyle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitialStyle(InitialStyle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialStyle();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::InitialStyle, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::InitialStyle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::InitialStyle*, "UnityEngine.UIElements.StyleSheets", "InitialStyle");
