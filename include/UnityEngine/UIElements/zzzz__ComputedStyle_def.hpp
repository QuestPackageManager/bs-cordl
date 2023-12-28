#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__InheritedData_def.hpp"
#include "UnityEngine/UIElements/zzzz__LayoutData_def.hpp"
#include "UnityEngine/UIElements/zzzz__RareData_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleDataRef_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransformData_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransitionData_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualData_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputedStyle)
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValueManaged;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
struct ComputedTransitionProperty;
}
namespace UnityEngine::UIElements {
struct VisualData;
}
namespace UnityEngine::UIElements {
struct Wrap;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct EasingFunction;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct OverflowClipBox;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct RareData;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements {
struct LayoutData;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValue;
}
namespace UnityEngine::UIElements {
struct Cursor;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct TextOverflow;
}
namespace UnityEngine::UIElements {
struct TransformData;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyValue;
}
namespace UnityEngine::UIElements {
struct TransitionData;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct OverflowInternal;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine::UIElements {
struct WhiteSpace;
}
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyReader;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
template <typename T> struct StyleDataRef_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
struct StyleTranslate;
}
namespace UnityEngine::UIElements {
struct Position;
}
namespace UnityEngine::UIElements {
struct InheritedData;
}
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements {
struct Visibility;
}
namespace UnityEngine::UIElements {
struct Justify;
}
namespace UnityEngine::UIElements {
struct FlexDirection;
}
namespace UnityEngine::Yoga {
class YogaNode;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
namespace UnityEngine::UIElements {
struct Align;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ComputedStyle);
// Type: UnityEngine.UIElements::ComputedStyle
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7315), inst: 3344 }), TypeDefinitionIndex(TypeDefinitionIndex(7358)),
// TypeDefinitionIndex(TypeDefinitionIndex(7360)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7315), inst: 3371 }), TypeDefinitionIndex(TypeDefinitionIndex(7361)),
// TypeDefinitionIndex(TypeDefinitionIndex(7357)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7315), inst: 3298 }), TypeDefinitionIndex(TypeDefinitionIndex(7356)),
// TypeDefinitionIndex(TypeDefinitionIndex(7315)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7315), inst: 3310 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(7315), inst: 3382 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7315), inst: 3370 }), TypeDefinitionIndex(TypeDefinitionIndex(7359))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(7296)) CS Name: ::UnityEngine.UIElements::ComputedStyle
struct CORDL_TYPE ComputedStyle {
public:
  // Declarations
  __declspec(property(get = get_customPropertiesCount)) int32_t customPropertiesCount;

  __declspec(property(get = get_hasTransition)) bool hasTransition;

  __declspec(property(get = get_alignContent))::UnityEngine::UIElements::Align alignContent;

  __declspec(property(get = get_alignItems))::UnityEngine::UIElements::Align alignItems;

  __declspec(property(get = get_alignSelf))::UnityEngine::UIElements::Align alignSelf;

  __declspec(property(get = get_backgroundColor))::UnityEngine::Color backgroundColor;

  __declspec(property(get = get_backgroundImage))::UnityEngine::UIElements::Background backgroundImage;

  __declspec(property(get = get_borderBottomColor))::UnityEngine::Color borderBottomColor;

  __declspec(property(get = get_borderBottomLeftRadius))::UnityEngine::UIElements::Length borderBottomLeftRadius;

  __declspec(property(get = get_borderBottomRightRadius))::UnityEngine::UIElements::Length borderBottomRightRadius;

  __declspec(property(get = get_borderBottomWidth)) float_t borderBottomWidth;

  __declspec(property(get = get_borderLeftColor))::UnityEngine::Color borderLeftColor;

  __declspec(property(get = get_borderLeftWidth)) float_t borderLeftWidth;

  __declspec(property(get = get_borderRightColor))::UnityEngine::Color borderRightColor;

  __declspec(property(get = get_borderRightWidth)) float_t borderRightWidth;

  __declspec(property(get = get_borderTopColor))::UnityEngine::Color borderTopColor;

  __declspec(property(get = get_borderTopLeftRadius))::UnityEngine::UIElements::Length borderTopLeftRadius;

  __declspec(property(get = get_borderTopRightRadius))::UnityEngine::UIElements::Length borderTopRightRadius;

  __declspec(property(get = get_borderTopWidth)) float_t borderTopWidth;

  __declspec(property(get = get_bottom))::UnityEngine::UIElements::Length bottom;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  __declspec(property(get = get_cursor))::UnityEngine::UIElements::Cursor cursor;

  __declspec(property(get = get_display))::UnityEngine::UIElements::DisplayStyle display;

  __declspec(property(get = get_flexBasis))::UnityEngine::UIElements::Length flexBasis;

  __declspec(property(get = get_flexDirection))::UnityEngine::UIElements::FlexDirection flexDirection;

  __declspec(property(get = get_flexGrow)) float_t flexGrow;

  __declspec(property(get = get_flexShrink)) float_t flexShrink;

  __declspec(property(get = get_flexWrap))::UnityEngine::UIElements::Wrap flexWrap;

  __declspec(property(get = get_fontSize))::UnityEngine::UIElements::Length fontSize;

  __declspec(property(get = get_height))::UnityEngine::UIElements::Length height;

  __declspec(property(get = get_justifyContent))::UnityEngine::UIElements::Justify justifyContent;

  __declspec(property(get = get_left))::UnityEngine::UIElements::Length left;

  __declspec(property(get = get_letterSpacing))::UnityEngine::UIElements::Length letterSpacing;

  __declspec(property(get = get_marginBottom))::UnityEngine::UIElements::Length marginBottom;

  __declspec(property(get = get_marginLeft))::UnityEngine::UIElements::Length marginLeft;

  __declspec(property(get = get_marginRight))::UnityEngine::UIElements::Length marginRight;

  __declspec(property(get = get_marginTop))::UnityEngine::UIElements::Length marginTop;

  __declspec(property(get = get_maxHeight))::UnityEngine::UIElements::Length maxHeight;

  __declspec(property(get = get_maxWidth))::UnityEngine::UIElements::Length maxWidth;

  __declspec(property(get = get_minHeight))::UnityEngine::UIElements::Length minHeight;

  __declspec(property(get = get_minWidth))::UnityEngine::UIElements::Length minWidth;

  __declspec(property(get = get_opacity)) float_t opacity;

  __declspec(property(get = get_overflow))::UnityEngine::UIElements::OverflowInternal overflow;

  __declspec(property(get = get_paddingBottom))::UnityEngine::UIElements::Length paddingBottom;

  __declspec(property(get = get_paddingLeft))::UnityEngine::UIElements::Length paddingLeft;

  __declspec(property(get = get_paddingRight))::UnityEngine::UIElements::Length paddingRight;

  __declspec(property(get = get_paddingTop))::UnityEngine::UIElements::Length paddingTop;

  __declspec(property(get = get_position))::UnityEngine::UIElements::Position position;

  __declspec(property(get = get_right))::UnityEngine::UIElements::Length right;

  __declspec(property(get = get_rotate))::UnityEngine::UIElements::Rotate rotate;

  __declspec(property(get = get_scale))::UnityEngine::UIElements::Scale scale;

  __declspec(property(get = get_textOverflow))::UnityEngine::UIElements::TextOverflow textOverflow;

  __declspec(property(get = get_textShadow))::UnityEngine::UIElements::TextShadow textShadow;

  __declspec(property(get = get_top))::UnityEngine::UIElements::Length top;

  __declspec(property(get = get_transformOrigin))::UnityEngine::UIElements::TransformOrigin transformOrigin;

  __declspec(property(get = get_transitionDelay))::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* transitionDelay;

  __declspec(property(get = get_transitionDuration))::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* transitionDuration;

  __declspec(property(get = get_transitionProperty))::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* transitionProperty;

  __declspec(property(get = get_transitionTimingFunction))::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* transitionTimingFunction;

  __declspec(property(get = get_translate))::UnityEngine::UIElements::Translate translate;

  __declspec(property(get = get_unityBackgroundImageTintColor))::UnityEngine::Color unityBackgroundImageTintColor;

  __declspec(property(get = get_unityBackgroundScaleMode))::UnityEngine::ScaleMode unityBackgroundScaleMode;

  __declspec(property(get = get_unityFont))::UnityEngine::Font* unityFont;

  __declspec(property(get = get_unityFontDefinition))::UnityEngine::UIElements::FontDefinition unityFontDefinition;

  __declspec(property(get = get_unityFontStyleAndWeight))::UnityEngine::FontStyle unityFontStyleAndWeight;

  __declspec(property(get = get_unityOverflowClipBox))::UnityEngine::UIElements::OverflowClipBox unityOverflowClipBox;

  __declspec(property(get = get_unityParagraphSpacing))::UnityEngine::UIElements::Length unityParagraphSpacing;

  __declspec(property(get = get_unitySliceBottom)) int32_t unitySliceBottom;

  __declspec(property(get = get_unitySliceLeft)) int32_t unitySliceLeft;

  __declspec(property(get = get_unitySliceRight)) int32_t unitySliceRight;

  __declspec(property(get = get_unitySliceTop)) int32_t unitySliceTop;

  __declspec(property(get = get_unityTextAlign))::UnityEngine::TextAnchor unityTextAlign;

  __declspec(property(get = get_unityTextOutlineColor))::UnityEngine::Color unityTextOutlineColor;

  __declspec(property(get = get_unityTextOutlineWidth)) float_t unityTextOutlineWidth;

  __declspec(property(get = get_unityTextOverflowPosition))::UnityEngine::UIElements::TextOverflowPosition unityTextOverflowPosition;

  __declspec(property(get = get_visibility))::UnityEngine::UIElements::Visibility visibility;

  __declspec(property(get = get_whiteSpace))::UnityEngine::UIElements::WhiteSpace whiteSpace;

  __declspec(property(get = get_width))::UnityEngine::UIElements::Length width;

  __declspec(property(get = get_wordSpacing))::UnityEngine::UIElements::Length wordSpacing;

  /// @brief Method get_customPropertiesCount addr 0x2e54f98 size 0x58 virtual false final false
  inline int32_t get_customPropertiesCount();

  /// @brief Method get_hasTransition addr 0x2e54ff0 size 0x20 virtual false final false
  inline bool get_hasTransition();

  /// @brief Method FinalizeApply addr 0x2e55010 size 0x100 virtual false final false
  inline void FinalizeApply(ByRef<::UnityEngine::UIElements::ComputedStyle> parentStyle);

  /// @brief Method SyncWithLayout addr 0x2e55160 size 0x3e4 virtual false final false
  inline void SyncWithLayout(::UnityEngine::Yoga::YogaNode* targetNode);

  /// @brief Method ApplyGlobalKeyword addr 0x2e55fe4 size 0xa0 virtual false final false
  inline bool ApplyGlobalKeyword(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader, ByRef<::UnityEngine::UIElements::ComputedStyle> parentStyle);

  /// @brief Method ApplyGlobalKeyword addr 0x2e560ec size 0x24 virtual false final false
  inline bool ApplyGlobalKeyword(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleKeyword keyword,
                                 ByRef<::UnityEngine::UIElements::ComputedStyle> parentStyle);

  /// @brief Method RemoveCustomStyleProperty addr 0x2e577e8 size 0xac virtual false final false
  inline void RemoveCustomStyleProperty(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader);

  /// @brief Method ApplyCustomStyleProperty addr 0x2e57894 size 0xf0 virtual false final false
  inline void ApplyCustomStyleProperty(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader);

  /// @brief Method ApplyAllPropertyInitial addr 0x2e57984 size 0x60 virtual false final false
  inline void ApplyAllPropertyInitial();

  /// @brief Method ResetComputedTransitions addr 0x2e57b24 size 0x8 virtual false final false
  inline void ResetComputedTransitions();

  /// @brief Method CompareChanges addr 0x2e57b2c size 0x2e8 virtual false final false
  static inline ::UnityEngine::UIElements::VersionChangeType CompareChanges(ByRef<::UnityEngine::UIElements::ComputedStyle> x, ByRef<::UnityEngine::UIElements::ComputedStyle> y);

  /// @brief Method StartAnimationInlineTranslate addr 0x2e58130 size 0x218 virtual false final false
  static inline bool StartAnimationInlineTranslate(::UnityEngine::UIElements::VisualElement* element, ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle,
                                                   ::UnityEngine::UIElements::StyleTranslate translate, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method get_alignContent addr 0x2e55e54 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Align get_alignContent();

  /// @brief Method get_alignItems addr 0x2e55ea4 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Align get_alignItems();

  /// @brief Method get_alignSelf addr 0x2e55c74 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Align get_alignSelf();

  /// @brief Method get_backgroundColor addr 0x2e58348 size 0x54 virtual false final false
  inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method get_backgroundImage addr 0x2e5839c size 0x60 virtual false final false
  inline ::UnityEngine::UIElements::Background get_backgroundImage();

  /// @brief Method get_borderBottomColor addr 0x2e583fc size 0x54 virtual false final false
  inline ::UnityEngine::Color get_borderBottomColor();

  /// @brief Method get_borderBottomLeftRadius addr 0x2e57e14 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_borderBottomLeftRadius();

  /// @brief Method get_borderBottomRightRadius addr 0x2e57e64 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_borderBottomRightRadius();

  /// @brief Method get_borderBottomWidth addr 0x2e55ae4 size 0x50 virtual false final false
  inline float_t get_borderBottomWidth();

  /// @brief Method get_borderLeftColor addr 0x2e58450 size 0x54 virtual false final false
  inline ::UnityEngine::Color get_borderLeftColor();

  /// @brief Method get_borderLeftWidth addr 0x2e559f4 size 0x50 virtual false final false
  inline float_t get_borderLeftWidth();

  /// @brief Method get_borderRightColor addr 0x2e584a4 size 0x54 virtual false final false
  inline ::UnityEngine::Color get_borderRightColor();

  /// @brief Method get_borderRightWidth addr 0x2e55a94 size 0x50 virtual false final false
  inline float_t get_borderRightWidth();

  /// @brief Method get_borderTopColor addr 0x2e584f8 size 0x54 virtual false final false
  inline ::UnityEngine::Color get_borderTopColor();

  /// @brief Method get_borderTopLeftRadius addr 0x2e57eb4 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_borderTopLeftRadius();

  /// @brief Method get_borderTopRightRadius addr 0x2e57f04 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_borderTopRightRadius();

  /// @brief Method get_borderTopWidth addr 0x2e55a44 size 0x50 virtual false final false
  inline float_t get_borderTopWidth();

  /// @brief Method get_bottom addr 0x2e55724 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_bottom();

  /// @brief Method get_color addr 0x2e5854c size 0x54 virtual false final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_cursor addr 0x2e585a0 size 0x68 virtual false final false
  inline ::UnityEngine::UIElements::Cursor get_cursor();

  /// @brief Method get_display addr 0x2e55f94 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::DisplayStyle get_display();

  /// @brief Method get_flexBasis addr 0x2e555e4 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_flexBasis();

  /// @brief Method get_flexDirection addr 0x2e55e04 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::FlexDirection get_flexDirection();

  /// @brief Method get_flexGrow addr 0x2e55544 size 0x50 virtual false final false
  inline float_t get_flexGrow();

  /// @brief Method get_flexShrink addr 0x2e55594 size 0x50 virtual false final false
  inline float_t get_flexShrink();

  /// @brief Method get_flexWrap addr 0x2e55f44 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Wrap get_flexWrap();

  /// @brief Method get_fontSize addr 0x2e55110 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_fontSize();

  /// @brief Method get_height addr 0x2e55b84 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_height();

  /// @brief Method get_justifyContent addr 0x2e55ef4 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Justify get_justifyContent();

  /// @brief Method get_left addr 0x2e55634 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_left();

  /// @brief Method get_letterSpacing addr 0x2e58608 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_letterSpacing();

  /// @brief Method get_marginBottom addr 0x2e55864 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_marginBottom();

  /// @brief Method get_marginLeft addr 0x2e55774 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_marginLeft();

  /// @brief Method get_marginRight addr 0x2e55814 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_marginRight();

  /// @brief Method get_marginTop addr 0x2e557c4 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_marginTop();

  /// @brief Method get_maxHeight addr 0x2e55d14 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_maxHeight();

  /// @brief Method get_maxWidth addr 0x2e55cc4 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_maxWidth();

  /// @brief Method get_minHeight addr 0x2e55db4 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_minHeight();

  /// @brief Method get_minWidth addr 0x2e55d64 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_minWidth();

  /// @brief Method get_opacity addr 0x2e57f54 size 0x50 virtual false final false
  inline float_t get_opacity();

  /// @brief Method get_overflow addr 0x2e55c24 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::OverflowInternal get_overflow();

  /// @brief Method get_paddingBottom addr 0x2e559a4 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_paddingBottom();

  /// @brief Method get_paddingLeft addr 0x2e558b4 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_paddingLeft();

  /// @brief Method get_paddingRight addr 0x2e55954 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_paddingRight();

  /// @brief Method get_paddingTop addr 0x2e55904 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_paddingTop();

  /// @brief Method get_position addr 0x2e55bd4 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Position get_position();

  /// @brief Method get_right addr 0x2e556d4 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_right();

  /// @brief Method get_rotate addr 0x2e580c8 size 0x68 virtual false final false
  inline ::UnityEngine::UIElements::Rotate get_rotate();

  /// @brief Method get_scale addr 0x2e58074 size 0x54 virtual false final false
  inline ::UnityEngine::UIElements::Scale get_scale();

  /// @brief Method get_textOverflow addr 0x2e58658 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::TextOverflow get_textOverflow();

  /// @brief Method get_textShadow addr 0x2e586a8 size 0x68 virtual false final false
  inline ::UnityEngine::UIElements::TextShadow get_textShadow();

  /// @brief Method get_top addr 0x2e55684 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_top();

  /// @brief Method get_transformOrigin addr 0x2e57fa4 size 0x68 virtual false final false
  inline ::UnityEngine::UIElements::TransformOrigin get_transformOrigin();

  /// @brief Method get_transitionDelay addr 0x2e58710 size 0x50 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* get_transitionDelay();

  /// @brief Method get_transitionDuration addr 0x2e58760 size 0x50 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* get_transitionDuration();

  /// @brief Method get_transitionProperty addr 0x2e587b0 size 0x50 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* get_transitionProperty();

  /// @brief Method get_transitionTimingFunction addr 0x2e58800 size 0x50 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* get_transitionTimingFunction();

  /// @brief Method get_translate addr 0x2e5800c size 0x68 virtual false final false
  inline ::UnityEngine::UIElements::Translate get_translate();

  /// @brief Method get_unityBackgroundImageTintColor addr 0x2e58850 size 0x54 virtual false final false
  inline ::UnityEngine::Color get_unityBackgroundImageTintColor();

  /// @brief Method get_unityBackgroundScaleMode addr 0x2e588a4 size 0x50 virtual false final false
  inline ::UnityEngine::ScaleMode get_unityBackgroundScaleMode();

  /// @brief Method get_unityFont addr 0x2e588f4 size 0x50 virtual false final false
  inline ::UnityEngine::Font* get_unityFont();

  /// @brief Method get_unityFontDefinition addr 0x2e58944 size 0x54 virtual false final false
  inline ::UnityEngine::UIElements::FontDefinition get_unityFontDefinition();

  /// @brief Method get_unityFontStyleAndWeight addr 0x2e58998 size 0x50 virtual false final false
  inline ::UnityEngine::FontStyle get_unityFontStyleAndWeight();

  /// @brief Method get_unityOverflowClipBox addr 0x2e589e8 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::OverflowClipBox get_unityOverflowClipBox();

  /// @brief Method get_unityParagraphSpacing addr 0x2e58a38 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_unityParagraphSpacing();

  /// @brief Method get_unitySliceBottom addr 0x2e58a88 size 0x50 virtual false final false
  inline int32_t get_unitySliceBottom();

  /// @brief Method get_unitySliceLeft addr 0x2e58ad8 size 0x50 virtual false final false
  inline int32_t get_unitySliceLeft();

  /// @brief Method get_unitySliceRight addr 0x2e58b28 size 0x50 virtual false final false
  inline int32_t get_unitySliceRight();

  /// @brief Method get_unitySliceTop addr 0x2e58b78 size 0x50 virtual false final false
  inline int32_t get_unitySliceTop();

  /// @brief Method get_unityTextAlign addr 0x2e58bc8 size 0x50 virtual false final false
  inline ::UnityEngine::TextAnchor get_unityTextAlign();

  /// @brief Method get_unityTextOutlineColor addr 0x2e58c18 size 0x54 virtual false final false
  inline ::UnityEngine::Color get_unityTextOutlineColor();

  /// @brief Method get_unityTextOutlineWidth addr 0x2e58c6c size 0x50 virtual false final false
  inline float_t get_unityTextOutlineWidth();

  /// @brief Method get_unityTextOverflowPosition addr 0x2e58cbc size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::TextOverflowPosition get_unityTextOverflowPosition();

  /// @brief Method get_visibility addr 0x2e58d0c size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Visibility get_visibility();

  /// @brief Method get_whiteSpace addr 0x2e58d5c size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::WhiteSpace get_whiteSpace();

  /// @brief Method get_width addr 0x2e55b34 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_width();

  /// @brief Method get_wordSpacing addr 0x2e58dac size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::Length get_wordSpacing();

  /// @brief Method Create addr 0x2e58dfc size 0x170 virtual false final false
  static inline ::UnityEngine::UIElements::ComputedStyle Create(ByRef<::UnityEngine::UIElements::ComputedStyle> parentStyle);

  /// @brief Method CreateInitial addr 0x2e58f6c size 0x138 virtual false final false
  static inline ::UnityEngine::UIElements::ComputedStyle CreateInitial();

  /// @brief Method Acquire addr 0x2e590a4 size 0x118 virtual false final false
  inline ::UnityEngine::UIElements::ComputedStyle Acquire();

  /// @brief Method Release addr 0x2e591bc size 0x100 virtual false final false
  inline void Release();

  /// @brief Method CopyFrom addr 0x2e579e4 size 0x140 virtual false final false
  inline void CopyFrom(ByRef<::UnityEngine::UIElements::ComputedStyle> other);

  /// @brief Method ApplyProperties addr 0x2e592bc size 0x11e4 virtual false final false
  inline void ApplyProperties(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader, ByRef<::UnityEngine::UIElements::ComputedStyle> parentStyle);

  /// @brief Method ApplyStyleValue addr 0x2e5a4a0 size 0xb84 virtual false final false
  inline void ApplyStyleValue(::UnityEngine::UIElements::StyleSheets::StyleValue sv, ByRef<::UnityEngine::UIElements::ComputedStyle> parentStyle);

  /// @brief Method ApplyStyleValueManaged addr 0x2e5b024 size 0x3a8 virtual false final false
  inline void ApplyStyleValueManaged(::UnityEngine::UIElements::StyleSheets::StyleValueManaged sv, ByRef<::UnityEngine::UIElements::ComputedStyle> parentStyle);

  /// @brief Method ApplyStyleCursor addr 0x2e5b3cc size 0x68 virtual false final false
  inline void ApplyStyleCursor(::UnityEngine::UIElements::Cursor cursor);

  /// @brief Method ApplyStyleTextShadow addr 0x2e5b434 size 0x70 virtual false final false
  inline void ApplyStyleTextShadow(::UnityEngine::UIElements::TextShadow st);

  /// @brief Method ApplyFromComputedStyle addr 0x2e5b4a4 size 0xec0 virtual false final false
  inline void ApplyFromComputedStyle(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ByRef<::UnityEngine::UIElements::ComputedStyle> other);

  /// @brief Method ApplyPropertyAnimation addr 0x2e5c364 size 0x720 virtual false final false
  inline void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Length newValue);

  /// @brief Method ApplyPropertyAnimation addr 0x2e5ca84 size 0x2d0 virtual false final false
  inline void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id, float_t newValue);

  /// @brief Method ApplyPropertyAnimation addr 0x2e5cd54 size 0x514 virtual false final false
  inline void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t newValue);

  /// @brief Method ApplyPropertyAnimation addr 0x2e5d268 size 0x294 virtual false final false
  inline void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::Color newValue);

  /// @brief Method ApplyPropertyAnimation addr 0x2e5d4fc size 0x140 virtual false final false
  inline void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Background newValue);

  /// @brief Method ApplyPropertyAnimation addr 0x2e5d63c size 0x13c virtual false final false
  inline void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::Font* newValue);

  /// @brief Method ApplyPropertyAnimation addr 0x2e5d778 size 0x148 virtual false final false
  inline void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::FontDefinition newValue);

  /// @brief Method ApplyPropertyAnimation addr 0x2e5d8c0 size 0x150 virtual false final false
  inline void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::TextShadow newValue);

  /// @brief Method ApplyPropertyAnimation addr 0x2e5da10 size 0x148 virtual false final false
  inline void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Translate newValue);

  /// @brief Method ApplyPropertyAnimation addr 0x2e5db58 size 0x148 virtual false final false
  inline void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::TransformOrigin newValue);

  /// @brief Method ApplyPropertyAnimation addr 0x2e5dca0 size 0x140 virtual false final false
  inline void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Rotate newValue);

  /// @brief Method ApplyPropertyAnimation addr 0x2e5dde0 size 0x148 virtual false final false
  inline void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Scale newValue);

  /// @brief Method StartAnimation addr 0x2e5df28 size 0x4444 virtual false final false
  static inline bool StartAnimation(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                    ByRef<::UnityEngine::UIElements::ComputedStyle> oldStyle, ByRef<::UnityEngine::UIElements::ComputedStyle> newStyle, int32_t durationMs, int32_t delayMs,
                                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartAnimationAllProperty addr 0x2e6236c size 0x3a6c virtual false final false
  static inline bool StartAnimationAllProperty(::UnityEngine::UIElements::VisualElement* element, ByRef<::UnityEngine::UIElements::ComputedStyle> oldStyle,
                                               ByRef<::UnityEngine::UIElements::ComputedStyle> newStyle, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartAnimationInline addr 0x2e65dd8 size 0x36f8 virtual false final false
  static inline bool StartAnimationInline(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                          ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle, ::UnityEngine::UIElements::StyleSheets::StyleValue sv, int32_t durationMs, int32_t delayMs,
                                          ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method ApplyStyleTransformOrigin addr 0x2e694d0 size 0x68 virtual false final false
  inline void ApplyStyleTransformOrigin(::UnityEngine::UIElements::TransformOrigin st);

  /// @brief Method ApplyStyleTranslate addr 0x2e69538 size 0x68 virtual false final false
  inline void ApplyStyleTranslate(::UnityEngine::UIElements::Translate translateValue);

  /// @brief Method ApplyStyleRotate addr 0x2e695a0 size 0x68 virtual false final false
  inline void ApplyStyleRotate(::UnityEngine::UIElements::Rotate rotateValue);

  /// @brief Method ApplyStyleScale addr 0x2e69608 size 0x60 virtual false final false
  inline void ApplyStyleScale(::UnityEngine::UIElements::Scale scaleValue);

  /// @brief Method ApplyInitialValue addr 0x2e56084 size 0x3c virtual false final false
  inline void ApplyInitialValue(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader);

  /// @brief Method ApplyInitialValue addr 0x2e56110 size 0x16d8 virtual false final false
  inline void ApplyInitialValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method ApplyUnsetValue addr 0x2e560c0 size 0x2c virtual false final false
  inline void ApplyUnsetValue(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader, ByRef<::UnityEngine::UIElements::ComputedStyle> parentStyle);

  /// @brief Method ApplyUnsetValue addr 0x2e69668 size 0x26c virtual false final false
  inline void ApplyUnsetValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ByRef<::UnityEngine::UIElements::ComputedStyle> parentStyle);

  // Ctor Parameters [CppParam { name: "inheritedData", ty: "::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData>", modifiers: "", def_value: None }, CppParam { name:
  // "layoutData", ty: "::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData>", modifiers: "", def_value: None }, CppParam { name: "rareData", ty:
  // "::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData>", modifiers: "", def_value: None }, CppParam { name: "transformData", ty:
  // "::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData>", modifiers: "", def_value: None }, CppParam { name: "transitionData", ty:
  // "::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData>", modifiers: "", def_value: None }, CppParam { name: "visualData", ty:
  // "::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData>", modifiers: "", def_value: None }, CppParam { name: "yogaNode", ty: "::UnityEngine::Yoga::YogaNode*", modifiers:
  // "", def_value: None }, CppParam { name: "customProperties", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*", modifiers:
  // "", def_value: None }, CppParam { name: "matchingRulesHash", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "dpiScaling", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "computedTransitions", ty: "::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty,::Array<::UnityEngine::UIElements::ComputedTransitionProperty>*>", modifiers: "",
  // def_value: None }]
  constexpr ComputedStyle(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData> inheritedData,
                          ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData> layoutData,
                          ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData> rareData,
                          ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData> transformData,
                          ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData> transitionData,
                          ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData> visualData, ::UnityEngine::Yoga::YogaNode* yogaNode,
                          ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* customProperties, int64_t matchingRulesHash,
                          float_t dpiScaling,
                          ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty, ::Array<::UnityEngine::UIElements::ComputedTransitionProperty>*> computedTransitions) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputedStyle();

  /// @brief Field inheritedData, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData> inheritedData;

  /// @brief Field layoutData, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData> layoutData;

  /// @brief Field rareData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData> rareData;

  /// @brief Field transformData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData> transformData;

  /// @brief Field transitionData, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData> transitionData;

  /// @brief Field visualData, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData> visualData;

  /// @brief Field yogaNode, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Yoga::YogaNode* yogaNode;

  /// @brief Field customProperties, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* customProperties;

  /// @brief Field matchingRulesHash, offset: 0x40, size: 0x8, def value: None
  int64_t matchingRulesHash;

  /// @brief Field dpiScaling, offset: 0x48, size: 0x4, def value: None
  float_t dpiScaling;

  /// @brief Field computedTransitions, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty, ::Array<::UnityEngine::UIElements::ComputedTransitionProperty>*> computedTransitions;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ComputedStyle, 0x58>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ComputedStyle, "UnityEngine.UIElements", "ComputedStyle");
