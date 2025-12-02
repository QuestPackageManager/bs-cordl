#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ResolvedStyleAccess.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ResolvedStyleAccess)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::UIElements {
struct Align;
}
namespace UnityEngine::UIElements {
struct BackgroundPosition;
}
namespace UnityEngine::UIElements {
struct BackgroundRepeat;
}
namespace UnityEngine::UIElements {
struct BackgroundSize;
}
namespace UnityEngine::UIElements {
struct Background;
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
struct FontDefinition;
}
namespace UnityEngine::UIElements {
class IResolvedStyle;
}
namespace UnityEngine::UIElements {
struct Justify;
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
struct StyleFloat;
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
struct TimeValue;
}
namespace UnityEngine::UIElements {
struct Visibility;
}
namespace UnityEngine::UIElements {
class VisualElement;
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
struct TextAnchor;
}
namespace UnityEngine {
struct TextGeneratorType;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ResolvedStyleAccess;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ResolvedStyleAccess);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccess
class CORDL_TYPE ResolvedStyleAccess : public ::System::Object {
public:
  // Declarations
  /// @brief Field <ve>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ve_k__BackingField, put = __cordl_internal_set__ve_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _ve_k__BackingField;

  __declspec(property(get = get_alignContent)) ::UnityEngine::UIElements::Align alignContent;

  __declspec(property(get = get_alignItems)) ::UnityEngine::UIElements::Align alignItems;

  __declspec(property(get = get_alignSelf)) ::UnityEngine::UIElements::Align alignSelf;

  __declspec(property(get = get_backgroundColor)) ::UnityEngine::Color backgroundColor;

  __declspec(property(get = get_backgroundImage)) ::UnityEngine::UIElements::Background backgroundImage;

  __declspec(property(get = get_backgroundPositionX)) ::UnityEngine::UIElements::BackgroundPosition backgroundPositionX;

  __declspec(property(get = get_backgroundPositionY)) ::UnityEngine::UIElements::BackgroundPosition backgroundPositionY;

  __declspec(property(get = get_backgroundRepeat)) ::UnityEngine::UIElements::BackgroundRepeat backgroundRepeat;

  __declspec(property(get = get_backgroundSize)) ::UnityEngine::UIElements::BackgroundSize backgroundSize;

  __declspec(property(get = get_borderBottomColor)) ::UnityEngine::Color borderBottomColor;

  __declspec(property(get = get_borderBottomLeftRadius)) float_t borderBottomLeftRadius;

  __declspec(property(get = get_borderBottomRightRadius)) float_t borderBottomRightRadius;

  __declspec(property(get = get_borderBottomWidth)) float_t borderBottomWidth;

  __declspec(property(get = get_borderLeftColor)) ::UnityEngine::Color borderLeftColor;

  __declspec(property(get = get_borderLeftWidth)) float_t borderLeftWidth;

  __declspec(property(get = get_borderRightColor)) ::UnityEngine::Color borderRightColor;

  __declspec(property(get = get_borderRightWidth)) float_t borderRightWidth;

  __declspec(property(get = get_borderTopColor)) ::UnityEngine::Color borderTopColor;

  __declspec(property(get = get_borderTopLeftRadius)) float_t borderTopLeftRadius;

  __declspec(property(get = get_borderTopRightRadius)) float_t borderTopRightRadius;

  __declspec(property(get = get_borderTopWidth)) float_t borderTopWidth;

  __declspec(property(get = get_bottom)) float_t bottom;

  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_display)) ::UnityEngine::UIElements::DisplayStyle display;

  __declspec(property(get = get_flexBasis)) ::UnityEngine::UIElements::StyleFloat flexBasis;

  __declspec(property(get = get_flexDirection)) ::UnityEngine::UIElements::FlexDirection flexDirection;

  __declspec(property(get = get_flexGrow)) float_t flexGrow;

  __declspec(property(get = get_flexShrink)) float_t flexShrink;

  __declspec(property(get = get_flexWrap)) ::UnityEngine::UIElements::Wrap flexWrap;

  __declspec(property(get = get_fontSize)) float_t fontSize;

  __declspec(property(get = get_height)) float_t height;

  __declspec(property(get = get_justifyContent)) ::UnityEngine::UIElements::Justify justifyContent;

  __declspec(property(get = get_left)) float_t left;

  __declspec(property(get = get_letterSpacing)) float_t letterSpacing;

  __declspec(property(get = get_marginBottom)) float_t marginBottom;

  __declspec(property(get = get_marginLeft)) float_t marginLeft;

  __declspec(property(get = get_marginRight)) float_t marginRight;

  __declspec(property(get = get_marginTop)) float_t marginTop;

  __declspec(property(get = get_maxHeight)) ::UnityEngine::UIElements::StyleFloat maxHeight;

  __declspec(property(get = get_maxWidth)) ::UnityEngine::UIElements::StyleFloat maxWidth;

  __declspec(property(get = get_minHeight)) ::UnityEngine::UIElements::StyleFloat minHeight;

  __declspec(property(get = get_minWidth)) ::UnityEngine::UIElements::StyleFloat minWidth;

  __declspec(property(get = get_opacity)) float_t opacity;

  __declspec(property(get = get_paddingBottom)) float_t paddingBottom;

  __declspec(property(get = get_paddingLeft)) float_t paddingLeft;

  __declspec(property(get = get_paddingRight)) float_t paddingRight;

  __declspec(property(get = get_paddingTop)) float_t paddingTop;

  __declspec(property(get = get_position)) ::UnityEngine::UIElements::Position position;

  __declspec(property(get = get_right)) float_t right;

  __declspec(property(get = get_rotate)) ::UnityEngine::UIElements::Rotate rotate;

  __declspec(property(get = get_scale)) ::UnityEngine::UIElements::Scale scale;

  __declspec(property(get = get_textOverflow)) ::UnityEngine::UIElements::TextOverflow textOverflow;

  __declspec(property(get = get_top)) float_t top;

  __declspec(property(get = get_transformOrigin)) ::UnityEngine::Vector3 transformOrigin;

  __declspec(property(get = get_transitionDelay)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TimeValue>* transitionDelay;

  __declspec(property(get = get_transitionDuration)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TimeValue>* transitionDuration;

  __declspec(property(get = get_transitionProperty)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>* transitionProperty;

  __declspec(property(get = get_transitionTimingFunction)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::EasingFunction>* transitionTimingFunction;

  __declspec(property(get = get_translate)) ::UnityEngine::Vector3 translate;

  __declspec(property(get = get_unityBackgroundImageTintColor)) ::UnityEngine::Color unityBackgroundImageTintColor;

  __declspec(property(get = get_unityEditorTextRenderingMode)) ::UnityEngine::UIElements::EditorTextRenderingMode unityEditorTextRenderingMode;

  __declspec(property(get = get_unityFont)) ::UnityW<::UnityEngine::Font> unityFont;

  __declspec(property(get = get_unityFontDefinition)) ::UnityEngine::UIElements::FontDefinition unityFontDefinition;

  __declspec(property(get = get_unityFontStyleAndWeight)) ::UnityEngine::FontStyle unityFontStyleAndWeight;

  __declspec(property(get = get_unityParagraphSpacing)) float_t unityParagraphSpacing;

  __declspec(property(get = get_unitySliceBottom)) int32_t unitySliceBottom;

  __declspec(property(get = get_unitySliceLeft)) int32_t unitySliceLeft;

  __declspec(property(get = get_unitySliceRight)) int32_t unitySliceRight;

  __declspec(property(get = get_unitySliceScale)) float_t unitySliceScale;

  __declspec(property(get = get_unitySliceTop)) int32_t unitySliceTop;

  __declspec(property(get = get_unityTextAlign)) ::UnityEngine::TextAnchor unityTextAlign;

  __declspec(property(get = get_unityTextGenerator)) ::UnityEngine::TextGeneratorType unityTextGenerator;

  __declspec(property(get = get_unityTextOutlineColor)) ::UnityEngine::Color unityTextOutlineColor;

  __declspec(property(get = get_unityTextOutlineWidth)) float_t unityTextOutlineWidth;

  __declspec(property(get = get_unityTextOverflowPosition)) ::UnityEngine::UIElements::TextOverflowPosition unityTextOverflowPosition;

  __declspec(property(get = get_ve)) ::UnityEngine::UIElements::VisualElement* ve;

  __declspec(property(get = get_visibility)) ::UnityEngine::UIElements::Visibility visibility;

  __declspec(property(get = get_whiteSpace)) ::UnityEngine::UIElements::WhiteSpace whiteSpace;

  __declspec(property(get = get_width)) float_t width;

  __declspec(property(get = get_wordSpacing)) float_t wordSpacing;

  /// @brief Convert operator to "::UnityEngine::UIElements::IResolvedStyle"
  constexpr operator ::UnityEngine::UIElements::IResolvedStyle*() noexcept;

  static inline ::UnityEngine::UIElements::ResolvedStyleAccess* New_ctor(::UnityEngine::UIElements::VisualElement* ve);

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__ve_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__ve_k__BackingField();

  constexpr void __cordl_internal_set__ve_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x6a37bc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method get_alignContent, addr 0x6a369ac, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Align get_alignContent();

  /// @brief Method get_alignItems, addr 0x6a369d0, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Align get_alignItems();

  /// @brief Method get_alignSelf, addr 0x6a369ec, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Align get_alignSelf();

  /// @brief Method get_backgroundColor, addr 0x6a36a08, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method get_backgroundImage, addr 0x6a36a24, size 0x3c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Background get_backgroundImage();

  /// @brief Method get_backgroundPositionX, addr 0x6a36a60, size 0x28, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::BackgroundPosition get_backgroundPositionX();

  /// @brief Method get_backgroundPositionY, addr 0x6a36a88, size 0x28, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::BackgroundPosition get_backgroundPositionY();

  /// @brief Method get_backgroundRepeat, addr 0x6a36ab0, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::BackgroundRepeat get_backgroundRepeat();

  /// @brief Method get_backgroundSize, addr 0x6a36acc, size 0x44, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::BackgroundSize get_backgroundSize();

  /// @brief Method get_borderBottomColor, addr 0x6a36b10, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::Color get_borderBottomColor();

  /// @brief Method get_borderBottomLeftRadius, addr 0x6a36b2c, size 0x28, virtual true, abstract: false, final true
  inline float_t get_borderBottomLeftRadius();

  /// @brief Method get_borderBottomRightRadius, addr 0x6a36b54, size 0x28, virtual true, abstract: false, final true
  inline float_t get_borderBottomRightRadius();

  /// @brief Method get_borderBottomWidth, addr 0x6a36b7c, size 0x24, virtual true, abstract: false, final true
  inline float_t get_borderBottomWidth();

  /// @brief Method get_borderLeftColor, addr 0x6a36ba8, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::Color get_borderLeftColor();

  /// @brief Method get_borderLeftWidth, addr 0x6a36bc4, size 0x50, virtual true, abstract: false, final true
  inline float_t get_borderLeftWidth();

  /// @brief Method get_borderRightColor, addr 0x6a36c14, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::Color get_borderRightColor();

  /// @brief Method get_borderRightWidth, addr 0x6a36c30, size 0x50, virtual true, abstract: false, final true
  inline float_t get_borderRightWidth();

  /// @brief Method get_borderTopColor, addr 0x6a36c80, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::Color get_borderTopColor();

  /// @brief Method get_borderTopLeftRadius, addr 0x6a36c9c, size 0x28, virtual true, abstract: false, final true
  inline float_t get_borderTopLeftRadius();

  /// @brief Method get_borderTopRightRadius, addr 0x6a36cc4, size 0x28, virtual true, abstract: false, final true
  inline float_t get_borderTopRightRadius();

  /// @brief Method get_borderTopWidth, addr 0x6a36cec, size 0x24, virtual true, abstract: false, final true
  inline float_t get_borderTopWidth();

  /// @brief Method get_bottom, addr 0x6a36d10, size 0x24, virtual true, abstract: false, final true
  inline float_t get_bottom();

  /// @brief Method get_color, addr 0x6a36d34, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_display, addr 0x6a36d50, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::DisplayStyle get_display();

  /// @brief Method get_flexBasis, addr 0x6a36d6c, size 0x24, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleFloat get_flexBasis();

  /// @brief Method get_flexDirection, addr 0x6a36d90, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::FlexDirection get_flexDirection();

  /// @brief Method get_flexGrow, addr 0x6a36dac, size 0x1c, virtual true, abstract: false, final true
  inline float_t get_flexGrow();

  /// @brief Method get_flexShrink, addr 0x6a36dc8, size 0x1c, virtual true, abstract: false, final true
  inline float_t get_flexShrink();

  /// @brief Method get_flexWrap, addr 0x6a36de4, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Wrap get_flexWrap();

  /// @brief Method get_fontSize, addr 0x6a36e00, size 0x28, virtual true, abstract: false, final true
  inline float_t get_fontSize();

  /// @brief Method get_height, addr 0x6a36e28, size 0x24, virtual true, abstract: false, final true
  inline float_t get_height();

  /// @brief Method get_justifyContent, addr 0x6a36e4c, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Justify get_justifyContent();

  /// @brief Method get_left, addr 0x6a36e68, size 0x24, virtual true, abstract: false, final true
  inline float_t get_left();

  /// @brief Method get_letterSpacing, addr 0x6a36e8c, size 0x28, virtual true, abstract: false, final true
  inline float_t get_letterSpacing();

  /// @brief Method get_marginBottom, addr 0x6a36eb4, size 0x24, virtual true, abstract: false, final true
  inline float_t get_marginBottom();

  /// @brief Method get_marginLeft, addr 0x6a36ed8, size 0x50, virtual true, abstract: false, final true
  inline float_t get_marginLeft();

  /// @brief Method get_marginRight, addr 0x6a36f28, size 0x50, virtual true, abstract: false, final true
  inline float_t get_marginRight();

  /// @brief Method get_marginTop, addr 0x6a36f78, size 0x24, virtual true, abstract: false, final true
  inline float_t get_marginTop();

  /// @brief Method get_maxHeight, addr 0x6a36f9c, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleFloat get_maxHeight();

  /// @brief Method get_maxWidth, addr 0x6a3714c, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleFloat get_maxWidth();

  /// @brief Method get_minHeight, addr 0x6a3717c, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleFloat get_minHeight();

  /// @brief Method get_minWidth, addr 0x6a371ac, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleFloat get_minWidth();

  /// @brief Method get_opacity, addr 0x6a371dc, size 0x1c, virtual true, abstract: false, final true
  inline float_t get_opacity();

  /// @brief Method get_paddingBottom, addr 0x6a371f8, size 0x24, virtual true, abstract: false, final true
  inline float_t get_paddingBottom();

  /// @brief Method get_paddingLeft, addr 0x6a3721c, size 0x50, virtual true, abstract: false, final true
  inline float_t get_paddingLeft();

  /// @brief Method get_paddingRight, addr 0x6a3726c, size 0x50, virtual true, abstract: false, final true
  inline float_t get_paddingRight();

  /// @brief Method get_paddingTop, addr 0x6a372bc, size 0x24, virtual true, abstract: false, final true
  inline float_t get_paddingTop();

  /// @brief Method get_position, addr 0x6a372e0, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Position get_position();

  /// @brief Method get_right, addr 0x6a372fc, size 0x24, virtual true, abstract: false, final true
  inline float_t get_right();

  /// @brief Method get_rotate, addr 0x6a37320, size 0x44, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Rotate get_rotate();

  /// @brief Method get_scale, addr 0x6a37364, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Scale get_scale();

  /// @brief Method get_textOverflow, addr 0x6a37380, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::TextOverflow get_textOverflow();

  /// @brief Method get_top, addr 0x6a3739c, size 0x24, virtual true, abstract: false, final true
  inline float_t get_top();

  /// @brief Method get_transformOrigin, addr 0x6a373c0, size 0x14, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 get_transformOrigin();

  /// @brief Method get_transitionDelay, addr 0x6a376dc, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TimeValue>* get_transitionDelay();

  /// @brief Method get_transitionDuration, addr 0x6a376f8, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TimeValue>* get_transitionDuration();

  /// @brief Method get_transitionProperty, addr 0x6a37714, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>* get_transitionProperty();

  /// @brief Method get_transitionTimingFunction, addr 0x6a37730, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::EasingFunction>* get_transitionTimingFunction();

  /// @brief Method get_translate, addr 0x6a3774c, size 0x14, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 get_translate();

  /// @brief Method get_unityBackgroundImageTintColor, addr 0x6a3796c, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::Color get_unityBackgroundImageTintColor();

  /// @brief Method get_unityEditorTextRenderingMode, addr 0x6a37988, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::EditorTextRenderingMode get_unityEditorTextRenderingMode();

  /// @brief Method get_unityFont, addr 0x6a379a4, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Font> get_unityFont();

  /// @brief Method get_unityFontDefinition, addr 0x6a379c0, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::FontDefinition get_unityFontDefinition();

  /// @brief Method get_unityFontStyleAndWeight, addr 0x6a379dc, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::FontStyle get_unityFontStyleAndWeight();

  /// @brief Method get_unityParagraphSpacing, addr 0x6a379f8, size 0x28, virtual true, abstract: false, final true
  inline float_t get_unityParagraphSpacing();

  /// @brief Method get_unitySliceBottom, addr 0x6a37a20, size 0x1c, virtual true, abstract: false, final true
  inline int32_t get_unitySliceBottom();

  /// @brief Method get_unitySliceLeft, addr 0x6a37a3c, size 0x1c, virtual true, abstract: false, final true
  inline int32_t get_unitySliceLeft();

  /// @brief Method get_unitySliceRight, addr 0x6a37a58, size 0x1c, virtual true, abstract: false, final true
  inline int32_t get_unitySliceRight();

  /// @brief Method get_unitySliceScale, addr 0x6a37a74, size 0x1c, virtual true, abstract: false, final true
  inline float_t get_unitySliceScale();

  /// @brief Method get_unitySliceTop, addr 0x6a37a90, size 0x1c, virtual true, abstract: false, final true
  inline int32_t get_unitySliceTop();

  /// @brief Method get_unityTextAlign, addr 0x6a37aac, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::TextAnchor get_unityTextAlign();

  /// @brief Method get_unityTextGenerator, addr 0x6a37ac8, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::TextGeneratorType get_unityTextGenerator();

  /// @brief Method get_unityTextOutlineColor, addr 0x6a37ae4, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::Color get_unityTextOutlineColor();

  /// @brief Method get_unityTextOutlineWidth, addr 0x6a37b00, size 0x1c, virtual true, abstract: false, final true
  inline float_t get_unityTextOutlineWidth();

  /// @brief Method get_unityTextOverflowPosition, addr 0x6a37b1c, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::TextOverflowPosition get_unityTextOverflowPosition();

  /// @brief Method get_ve, addr 0x6a37bbc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_ve();

  /// @brief Method get_visibility, addr 0x6a37b38, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Visibility get_visibility();

  /// @brief Method get_whiteSpace, addr 0x6a37b54, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::WhiteSpace get_whiteSpace();

  /// @brief Method get_width, addr 0x6a37b70, size 0x24, virtual true, abstract: false, final true
  inline float_t get_width();

  /// @brief Method get_wordSpacing, addr 0x6a37b94, size 0x28, virtual true, abstract: false, final true
  inline float_t get_wordSpacing();

  /// @brief Convert to "::UnityEngine::UIElements::IResolvedStyle"
  constexpr ::UnityEngine::UIElements::IResolvedStyle* i___UnityEngine__UIElements__IResolvedStyle() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccess(ResolvedStyleAccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccess(ResolvedStyleAccess const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4831 };

  /// @brief Field <ve>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____ve_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ResolvedStyleAccess, ____ve_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ResolvedStyleAccess, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ResolvedStyleAccess);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ResolvedStyleAccess*, "UnityEngine.UIElements", "ResolvedStyleAccess");
