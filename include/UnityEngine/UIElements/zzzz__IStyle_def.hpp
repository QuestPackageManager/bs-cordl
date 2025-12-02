#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IStyle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStyle)
namespace UnityEngine::UIElements {
struct Align;
}
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
namespace UnityEngine::UIElements {
struct EasingFunction;
}
namespace UnityEngine::UIElements {
struct EditorTextRenderingMode;
}
namespace UnityEngine::UIElements {
struct FlexDirection;
}
namespace UnityEngine::UIElements {
struct Justify;
}
namespace UnityEngine::UIElements {
struct OverflowClipBox;
}
namespace UnityEngine::UIElements {
struct Overflow;
}
namespace UnityEngine::UIElements {
struct Position;
}
namespace UnityEngine::UIElements {
struct StyleBackgroundPosition;
}
namespace UnityEngine::UIElements {
struct StyleBackgroundRepeat;
}
namespace UnityEngine::UIElements {
struct StyleBackgroundSize;
}
namespace UnityEngine::UIElements {
struct StyleBackground;
}
namespace UnityEngine::UIElements {
struct StyleColor;
}
namespace UnityEngine::UIElements {
struct StyleCursor;
}
namespace UnityEngine::UIElements {
template <typename T> struct StyleEnum_1;
}
namespace UnityEngine::UIElements {
struct StyleFloat;
}
namespace UnityEngine::UIElements {
struct StyleFontDefinition;
}
namespace UnityEngine::UIElements {
struct StyleFont;
}
namespace UnityEngine::UIElements {
struct StyleInt;
}
namespace UnityEngine::UIElements {
struct StyleLength;
}
namespace UnityEngine::UIElements {
template <typename T> struct StyleList_1;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
struct StyleRotate;
}
namespace UnityEngine::UIElements {
struct StyleScale;
}
namespace UnityEngine::UIElements {
struct StyleTextShadow;
}
namespace UnityEngine::UIElements {
struct StyleTransformOrigin;
}
namespace UnityEngine::UIElements {
struct StyleTranslate;
}
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
namespace UnityEngine::UIElements {
struct TextOverflow;
}
namespace UnityEngine::UIElements {
struct TimeValue;
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
struct FontStyle;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct TextGeneratorType;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IStyle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IStyle);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IStyle
class CORDL_TYPE IStyle {
public:
  // Declarations
  __declspec(property(get = get_alignContent, put = set_alignContent)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> alignContent;

  __declspec(property(get = get_alignItems, put = set_alignItems)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> alignItems;

  __declspec(property(get = get_alignSelf, put = set_alignSelf)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> alignSelf;

  __declspec(property(get = get_backgroundColor, put = set_backgroundColor)) ::UnityEngine::UIElements::StyleColor backgroundColor;

  __declspec(property(get = get_backgroundImage, put = set_backgroundImage)) ::UnityEngine::UIElements::StyleBackground backgroundImage;

  __declspec(property(get = get_backgroundPositionX, put = set_backgroundPositionX)) ::UnityEngine::UIElements::StyleBackgroundPosition backgroundPositionX;

  __declspec(property(get = get_backgroundPositionY, put = set_backgroundPositionY)) ::UnityEngine::UIElements::StyleBackgroundPosition backgroundPositionY;

  __declspec(property(get = get_backgroundRepeat, put = set_backgroundRepeat)) ::UnityEngine::UIElements::StyleBackgroundRepeat backgroundRepeat;

  __declspec(property(get = get_backgroundSize, put = set_backgroundSize)) ::UnityEngine::UIElements::StyleBackgroundSize backgroundSize;

  __declspec(property(get = get_borderBottomColor, put = set_borderBottomColor)) ::UnityEngine::UIElements::StyleColor borderBottomColor;

  __declspec(property(get = get_borderBottomLeftRadius, put = set_borderBottomLeftRadius)) ::UnityEngine::UIElements::StyleLength borderBottomLeftRadius;

  __declspec(property(get = get_borderBottomRightRadius, put = set_borderBottomRightRadius)) ::UnityEngine::UIElements::StyleLength borderBottomRightRadius;

  __declspec(property(get = get_borderBottomWidth, put = set_borderBottomWidth)) ::UnityEngine::UIElements::StyleFloat borderBottomWidth;

  __declspec(property(get = get_borderLeftColor, put = set_borderLeftColor)) ::UnityEngine::UIElements::StyleColor borderLeftColor;

  __declspec(property(get = get_borderLeftWidth, put = set_borderLeftWidth)) ::UnityEngine::UIElements::StyleFloat borderLeftWidth;

  __declspec(property(get = get_borderRightColor, put = set_borderRightColor)) ::UnityEngine::UIElements::StyleColor borderRightColor;

  __declspec(property(get = get_borderRightWidth, put = set_borderRightWidth)) ::UnityEngine::UIElements::StyleFloat borderRightWidth;

  __declspec(property(get = get_borderTopColor, put = set_borderTopColor)) ::UnityEngine::UIElements::StyleColor borderTopColor;

  __declspec(property(get = get_borderTopLeftRadius, put = set_borderTopLeftRadius)) ::UnityEngine::UIElements::StyleLength borderTopLeftRadius;

  __declspec(property(get = get_borderTopRightRadius, put = set_borderTopRightRadius)) ::UnityEngine::UIElements::StyleLength borderTopRightRadius;

  __declspec(property(get = get_borderTopWidth, put = set_borderTopWidth)) ::UnityEngine::UIElements::StyleFloat borderTopWidth;

  __declspec(property(get = get_bottom, put = set_bottom)) ::UnityEngine::UIElements::StyleLength bottom;

  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::UIElements::StyleColor color;

  __declspec(property(get = get_cursor, put = set_cursor)) ::UnityEngine::UIElements::StyleCursor cursor;

  __declspec(property(get = get_display, put = set_display)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> display;

  __declspec(property(get = get_flexBasis, put = set_flexBasis)) ::UnityEngine::UIElements::StyleLength flexBasis;

  __declspec(property(get = get_flexDirection, put = set_flexDirection)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection> flexDirection;

  __declspec(property(get = get_flexGrow, put = set_flexGrow)) ::UnityEngine::UIElements::StyleFloat flexGrow;

  __declspec(property(get = get_flexShrink, put = set_flexShrink)) ::UnityEngine::UIElements::StyleFloat flexShrink;

  __declspec(property(get = get_flexWrap, put = set_flexWrap)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap> flexWrap;

  __declspec(property(get = get_fontSize, put = set_fontSize)) ::UnityEngine::UIElements::StyleLength fontSize;

  __declspec(property(get = get_height, put = set_height)) ::UnityEngine::UIElements::StyleLength height;

  __declspec(property(get = get_justifyContent, put = set_justifyContent)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify> justifyContent;

  __declspec(property(get = get_left, put = set_left)) ::UnityEngine::UIElements::StyleLength left;

  __declspec(property(get = get_letterSpacing, put = set_letterSpacing)) ::UnityEngine::UIElements::StyleLength letterSpacing;

  __declspec(property(get = get_marginBottom, put = set_marginBottom)) ::UnityEngine::UIElements::StyleLength marginBottom;

  __declspec(property(get = get_marginLeft, put = set_marginLeft)) ::UnityEngine::UIElements::StyleLength marginLeft;

  __declspec(property(get = get_marginRight, put = set_marginRight)) ::UnityEngine::UIElements::StyleLength marginRight;

  __declspec(property(get = get_marginTop, put = set_marginTop)) ::UnityEngine::UIElements::StyleLength marginTop;

  __declspec(property(get = get_maxHeight, put = set_maxHeight)) ::UnityEngine::UIElements::StyleLength maxHeight;

  __declspec(property(get = get_maxWidth, put = set_maxWidth)) ::UnityEngine::UIElements::StyleLength maxWidth;

  __declspec(property(get = get_minHeight, put = set_minHeight)) ::UnityEngine::UIElements::StyleLength minHeight;

  __declspec(property(get = get_minWidth, put = set_minWidth)) ::UnityEngine::UIElements::StyleLength minWidth;

  __declspec(property(get = get_opacity, put = set_opacity)) ::UnityEngine::UIElements::StyleFloat opacity;

  __declspec(property(get = get_overflow, put = set_overflow)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow> overflow;

  __declspec(property(get = get_paddingBottom, put = set_paddingBottom)) ::UnityEngine::UIElements::StyleLength paddingBottom;

  __declspec(property(get = get_paddingLeft, put = set_paddingLeft)) ::UnityEngine::UIElements::StyleLength paddingLeft;

  __declspec(property(get = get_paddingRight, put = set_paddingRight)) ::UnityEngine::UIElements::StyleLength paddingRight;

  __declspec(property(get = get_paddingTop, put = set_paddingTop)) ::UnityEngine::UIElements::StyleLength paddingTop;

  __declspec(property(get = get_position, put = set_position)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position> position;

  __declspec(property(get = get_right, put = set_right)) ::UnityEngine::UIElements::StyleLength right;

  __declspec(property(get = get_rotate, put = set_rotate)) ::UnityEngine::UIElements::StyleRotate rotate;

  __declspec(property(get = get_scale, put = set_scale)) ::UnityEngine::UIElements::StyleScale scale;

  __declspec(property(get = get_textOverflow, put = set_textOverflow)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow> textOverflow;

  __declspec(property(get = get_textShadow, put = set_textShadow)) ::UnityEngine::UIElements::StyleTextShadow textShadow;

  __declspec(property(get = get_top, put = set_top)) ::UnityEngine::UIElements::StyleLength top;

  __declspec(property(get = get_transformOrigin, put = set_transformOrigin)) ::UnityEngine::UIElements::StyleTransformOrigin transformOrigin;

  __declspec(property(get = get_transitionDelay, put = set_transitionDelay)) ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> transitionDelay;

  __declspec(property(get = get_transitionDuration, put = set_transitionDuration)) ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> transitionDuration;

  __declspec(property(get = get_transitionProperty, put = set_transitionProperty)) ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName> transitionProperty;

  __declspec(property(get = get_transitionTimingFunction, put = set_transitionTimingFunction)) ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction>
      transitionTimingFunction;

  __declspec(property(get = get_translate, put = set_translate)) ::UnityEngine::UIElements::StyleTranslate translate;

  __declspec(property(get = get_unityBackgroundImageTintColor, put = set_unityBackgroundImageTintColor)) ::UnityEngine::UIElements::StyleColor unityBackgroundImageTintColor;

  __declspec(property(get = get_unityEditorTextRenderingMode, put = set_unityEditorTextRenderingMode)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode>
      unityEditorTextRenderingMode;

  __declspec(property(get = get_unityFont, put = set_unityFont)) ::UnityEngine::UIElements::StyleFont unityFont;

  __declspec(property(get = get_unityFontDefinition, put = set_unityFontDefinition)) ::UnityEngine::UIElements::StyleFontDefinition unityFontDefinition;

  __declspec(property(get = get_unityFontStyleAndWeight, put = set_unityFontStyleAndWeight)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle> unityFontStyleAndWeight;

  __declspec(property(get = get_unityOverflowClipBox, put = set_unityOverflowClipBox)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox> unityOverflowClipBox;

  __declspec(property(get = get_unityParagraphSpacing, put = set_unityParagraphSpacing)) ::UnityEngine::UIElements::StyleLength unityParagraphSpacing;

  __declspec(property(get = get_unitySliceBottom, put = set_unitySliceBottom)) ::UnityEngine::UIElements::StyleInt unitySliceBottom;

  __declspec(property(get = get_unitySliceLeft, put = set_unitySliceLeft)) ::UnityEngine::UIElements::StyleInt unitySliceLeft;

  __declspec(property(get = get_unitySliceRight, put = set_unitySliceRight)) ::UnityEngine::UIElements::StyleInt unitySliceRight;

  __declspec(property(get = get_unitySliceScale, put = set_unitySliceScale)) ::UnityEngine::UIElements::StyleFloat unitySliceScale;

  __declspec(property(get = get_unitySliceTop, put = set_unitySliceTop)) ::UnityEngine::UIElements::StyleInt unitySliceTop;

  __declspec(property(get = get_unityTextAlign, put = set_unityTextAlign)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor> unityTextAlign;

  __declspec(property(get = get_unityTextGenerator, put = set_unityTextGenerator)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType> unityTextGenerator;

  __declspec(property(get = get_unityTextOutlineColor, put = set_unityTextOutlineColor)) ::UnityEngine::UIElements::StyleColor unityTextOutlineColor;

  __declspec(property(get = get_unityTextOutlineWidth, put = set_unityTextOutlineWidth)) ::UnityEngine::UIElements::StyleFloat unityTextOutlineWidth;

  __declspec(property(get = get_unityTextOverflowPosition, put = set_unityTextOverflowPosition)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition>
      unityTextOverflowPosition;

  __declspec(property(get = get_visibility, put = set_visibility)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> visibility;

  __declspec(property(get = get_whiteSpace, put = set_whiteSpace)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace> whiteSpace;

  __declspec(property(get = get_width, put = set_width)) ::UnityEngine::UIElements::StyleLength width;

  __declspec(property(get = get_wordSpacing, put = set_wordSpacing)) ::UnityEngine::UIElements::StyleLength wordSpacing;

  /// @brief Method get_alignContent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> get_alignContent();

  /// @brief Method get_alignItems, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> get_alignItems();

  /// @brief Method get_alignSelf, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> get_alignSelf();

  /// @brief Method get_backgroundColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleColor get_backgroundColor();

  /// @brief Method get_backgroundImage, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleBackground get_backgroundImage();

  /// @brief Method get_backgroundPositionX, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleBackgroundPosition get_backgroundPositionX();

  /// @brief Method get_backgroundPositionY, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleBackgroundPosition get_backgroundPositionY();

  /// @brief Method get_backgroundRepeat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleBackgroundRepeat get_backgroundRepeat();

  /// @brief Method get_backgroundSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleBackgroundSize get_backgroundSize();

  /// @brief Method get_borderBottomColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleColor get_borderBottomColor();

  /// @brief Method get_borderBottomLeftRadius, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_borderBottomLeftRadius();

  /// @brief Method get_borderBottomRightRadius, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_borderBottomRightRadius();

  /// @brief Method get_borderBottomWidth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat get_borderBottomWidth();

  /// @brief Method get_borderLeftColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleColor get_borderLeftColor();

  /// @brief Method get_borderLeftWidth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat get_borderLeftWidth();

  /// @brief Method get_borderRightColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleColor get_borderRightColor();

  /// @brief Method get_borderRightWidth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat get_borderRightWidth();

  /// @brief Method get_borderTopColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleColor get_borderTopColor();

  /// @brief Method get_borderTopLeftRadius, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_borderTopLeftRadius();

  /// @brief Method get_borderTopRightRadius, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_borderTopRightRadius();

  /// @brief Method get_borderTopWidth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat get_borderTopWidth();

  /// @brief Method get_bottom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_bottom();

  /// @brief Method get_color, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleColor get_color();

  /// @brief Method get_cursor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleCursor get_cursor();

  /// @brief Method get_display, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> get_display();

  /// @brief Method get_flexBasis, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_flexBasis();

  /// @brief Method get_flexDirection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection> get_flexDirection();

  /// @brief Method get_flexGrow, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat get_flexGrow();

  /// @brief Method get_flexShrink, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat get_flexShrink();

  /// @brief Method get_flexWrap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap> get_flexWrap();

  /// @brief Method get_fontSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_fontSize();

  /// @brief Method get_height, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_height();

  /// @brief Method get_justifyContent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify> get_justifyContent();

  /// @brief Method get_left, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_left();

  /// @brief Method get_letterSpacing, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_letterSpacing();

  /// @brief Method get_marginBottom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_marginBottom();

  /// @brief Method get_marginLeft, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_marginLeft();

  /// @brief Method get_marginRight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_marginRight();

  /// @brief Method get_marginTop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_marginTop();

  /// @brief Method get_maxHeight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_maxHeight();

  /// @brief Method get_maxWidth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_maxWidth();

  /// @brief Method get_minHeight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_minHeight();

  /// @brief Method get_minWidth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_minWidth();

  /// @brief Method get_opacity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat get_opacity();

  /// @brief Method get_overflow, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow> get_overflow();

  /// @brief Method get_paddingBottom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_paddingBottom();

  /// @brief Method get_paddingLeft, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_paddingLeft();

  /// @brief Method get_paddingRight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_paddingRight();

  /// @brief Method get_paddingTop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_paddingTop();

  /// @brief Method get_position, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position> get_position();

  /// @brief Method get_right, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_right();

  /// @brief Method get_rotate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleRotate get_rotate();

  /// @brief Method get_scale, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleScale get_scale();

  /// @brief Method get_textOverflow, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow> get_textOverflow();

  /// @brief Method get_textShadow, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleTextShadow get_textShadow();

  /// @brief Method get_top, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_top();

  /// @brief Method get_transformOrigin, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleTransformOrigin get_transformOrigin();

  /// @brief Method get_transitionDelay, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> get_transitionDelay();

  /// @brief Method get_transitionDuration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> get_transitionDuration();

  /// @brief Method get_transitionProperty, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName> get_transitionProperty();

  /// @brief Method get_transitionTimingFunction, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction> get_transitionTimingFunction();

  /// @brief Method get_translate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleTranslate get_translate();

  /// @brief Method get_unityBackgroundImageTintColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleColor get_unityBackgroundImageTintColor();

  /// @brief Method get_unityEditorTextRenderingMode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode> get_unityEditorTextRenderingMode();

  /// @brief Method get_unityFont, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFont get_unityFont();

  /// @brief Method get_unityFontDefinition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFontDefinition get_unityFontDefinition();

  /// @brief Method get_unityFontStyleAndWeight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle> get_unityFontStyleAndWeight();

  /// @brief Method get_unityOverflowClipBox, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox> get_unityOverflowClipBox();

  /// @brief Method get_unityParagraphSpacing, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_unityParagraphSpacing();

  /// @brief Method get_unitySliceBottom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleInt get_unitySliceBottom();

  /// @brief Method get_unitySliceLeft, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleInt get_unitySliceLeft();

  /// @brief Method get_unitySliceRight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleInt get_unitySliceRight();

  /// @brief Method get_unitySliceScale, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat get_unitySliceScale();

  /// @brief Method get_unitySliceTop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleInt get_unitySliceTop();

  /// @brief Method get_unityTextAlign, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor> get_unityTextAlign();

  /// @brief Method get_unityTextGenerator, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType> get_unityTextGenerator();

  /// @brief Method get_unityTextOutlineColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleColor get_unityTextOutlineColor();

  /// @brief Method get_unityTextOutlineWidth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat get_unityTextOutlineWidth();

  /// @brief Method get_unityTextOverflowPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition> get_unityTextOverflowPosition();

  /// @brief Method get_visibility, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> get_visibility();

  /// @brief Method get_whiteSpace, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace> get_whiteSpace();

  /// @brief Method get_width, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_width();

  /// @brief Method get_wordSpacing, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength get_wordSpacing();

  /// @brief Method set_alignContent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_alignContent(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> value);

  /// @brief Method set_alignItems, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_alignItems(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> value);

  /// @brief Method set_alignSelf, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_alignSelf(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> value);

  /// @brief Method set_backgroundColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_backgroundColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method set_backgroundImage, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_backgroundImage(::UnityEngine::UIElements::StyleBackground value);

  /// @brief Method set_backgroundPositionX, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_backgroundPositionX(::UnityEngine::UIElements::StyleBackgroundPosition value);

  /// @brief Method set_backgroundPositionY, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_backgroundPositionY(::UnityEngine::UIElements::StyleBackgroundPosition value);

  /// @brief Method set_backgroundRepeat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_backgroundRepeat(::UnityEngine::UIElements::StyleBackgroundRepeat value);

  /// @brief Method set_backgroundSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_backgroundSize(::UnityEngine::UIElements::StyleBackgroundSize value);

  /// @brief Method set_borderBottomColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_borderBottomColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method set_borderBottomLeftRadius, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_borderBottomLeftRadius(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_borderBottomRightRadius, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_borderBottomRightRadius(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_borderBottomWidth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_borderBottomWidth(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method set_borderLeftColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_borderLeftColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method set_borderLeftWidth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_borderLeftWidth(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method set_borderRightColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_borderRightColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method set_borderRightWidth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_borderRightWidth(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method set_borderTopColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_borderTopColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method set_borderTopLeftRadius, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_borderTopLeftRadius(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_borderTopRightRadius, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_borderTopRightRadius(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_borderTopWidth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_borderTopWidth(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method set_bottom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_bottom(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_color, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_color(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method set_cursor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_cursor(::UnityEngine::UIElements::StyleCursor value);

  /// @brief Method set_display, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_display(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> value);

  /// @brief Method set_flexBasis, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_flexBasis(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_flexDirection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_flexDirection(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection> value);

  /// @brief Method set_flexGrow, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_flexGrow(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method set_flexShrink, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_flexShrink(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method set_flexWrap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_flexWrap(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap> value);

  /// @brief Method set_fontSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_fontSize(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_height, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_height(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_justifyContent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_justifyContent(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify> value);

  /// @brief Method set_left, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_left(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_letterSpacing, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_letterSpacing(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_marginBottom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_marginBottom(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_marginLeft, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_marginLeft(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_marginRight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_marginRight(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_marginTop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_marginTop(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_maxHeight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_maxHeight(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_maxWidth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_maxWidth(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_minHeight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_minHeight(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_minWidth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_minWidth(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_opacity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_opacity(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method set_overflow, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_overflow(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow> value);

  /// @brief Method set_paddingBottom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_paddingBottom(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_paddingLeft, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_paddingLeft(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_paddingRight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_paddingRight(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_paddingTop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_paddingTop(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_position, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_position(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position> value);

  /// @brief Method set_right, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_right(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_rotate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_rotate(::UnityEngine::UIElements::StyleRotate value);

  /// @brief Method set_scale, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_scale(::UnityEngine::UIElements::StyleScale value);

  /// @brief Method set_textOverflow, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_textOverflow(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow> value);

  /// @brief Method set_textShadow, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_textShadow(::UnityEngine::UIElements::StyleTextShadow value);

  /// @brief Method set_top, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_top(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_transformOrigin, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_transformOrigin(::UnityEngine::UIElements::StyleTransformOrigin value);

  /// @brief Method set_transitionDelay, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_transitionDelay(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> value);

  /// @brief Method set_transitionDuration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_transitionDuration(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> value);

  /// @brief Method set_transitionProperty, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_transitionProperty(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName> value);

  /// @brief Method set_transitionTimingFunction, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_transitionTimingFunction(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction> value);

  /// @brief Method set_translate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_translate(::UnityEngine::UIElements::StyleTranslate value);

  /// @brief Method set_unityBackgroundImageTintColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_unityBackgroundImageTintColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method set_unityEditorTextRenderingMode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_unityEditorTextRenderingMode(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode> value);

  /// @brief Method set_unityFont, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_unityFont(::UnityEngine::UIElements::StyleFont value);

  /// @brief Method set_unityFontDefinition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_unityFontDefinition(::UnityEngine::UIElements::StyleFontDefinition value);

  /// @brief Method set_unityFontStyleAndWeight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_unityFontStyleAndWeight(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle> value);

  /// @brief Method set_unityOverflowClipBox, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_unityOverflowClipBox(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox> value);

  /// @brief Method set_unityParagraphSpacing, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_unityParagraphSpacing(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_unitySliceBottom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_unitySliceBottom(::UnityEngine::UIElements::StyleInt value);

  /// @brief Method set_unitySliceLeft, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_unitySliceLeft(::UnityEngine::UIElements::StyleInt value);

  /// @brief Method set_unitySliceRight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_unitySliceRight(::UnityEngine::UIElements::StyleInt value);

  /// @brief Method set_unitySliceScale, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_unitySliceScale(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method set_unitySliceTop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_unitySliceTop(::UnityEngine::UIElements::StyleInt value);

  /// @brief Method set_unityTextAlign, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_unityTextAlign(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor> value);

  /// @brief Method set_unityTextGenerator, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_unityTextGenerator(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType> value);

  /// @brief Method set_unityTextOutlineColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_unityTextOutlineColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method set_unityTextOutlineWidth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_unityTextOutlineWidth(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method set_unityTextOverflowPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_unityTextOverflowPosition(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition> value);

  /// @brief Method set_visibility, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_visibility(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> value);

  /// @brief Method set_whiteSpace, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_whiteSpace(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace> value);

  /// @brief Method set_width, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_width(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_wordSpacing, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_wordSpacing(::UnityEngine::UIElements::StyleLength value);

  // Ctor Parameters [CppParam { name: "", ty: "IStyle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStyle(IStyle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4719 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IStyle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IStyle*, "UnityEngine.UIElements", "IStyle");
