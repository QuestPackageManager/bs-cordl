#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ResolvedStyleAccessPropertyBag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__PropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__Align_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__DisplayStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__EasingFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__EditorTextRenderingMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__FlexDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__Justify_def.hpp"
#include "UnityEngine/UIElements/zzzz__Position_def.hpp"
#include "UnityEngine/UIElements/zzzz__Rotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleFloat_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflowPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflow_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__Visibility_def.hpp"
#include "UnityEngine/UIElements/zzzz__WhiteSpace_def.hpp"
#include "UnityEngine/UIElements/zzzz__Wrap_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__TextGeneratorType_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ResolvedStyleAccessPropertyBag)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Properties {
template <typename TContainer> class INamedProperties_1;
}
namespace Unity::Properties {
template <typename TContainer> class IProperty_1;
}
namespace Unity::Properties {
template <typename TContainer> struct PropertyCollection_1;
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
struct Justify;
}
namespace UnityEngine::UIElements {
struct Position;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_AlignContentProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_AlignItemsProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_AlignSelfProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BackgroundColorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BackgroundImageProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BackgroundPositionXProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BackgroundPositionYProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BackgroundRepeatProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BackgroundSizeProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderBottomColorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderBottomLeftRadiusProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderBottomRightRadiusProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderBottomWidthProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderLeftColorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderLeftWidthProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderRightColorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderRightWidthProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderTopColorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderTopLeftRadiusProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderTopRightRadiusProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderTopWidthProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BottomProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ColorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_DisplayProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_FlexBasisProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_FlexDirectionProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_FlexGrowProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_FlexShrinkProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_FlexWrapProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_FontSizeProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_HeightProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_JustifyContentProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_LeftProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_LetterSpacingProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_MarginBottomProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_MarginLeftProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_MarginRightProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_MarginTopProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_MaxHeightProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_MaxWidthProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_MinHeightProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_MinWidthProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_OpacityProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_PaddingBottomProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_PaddingLeftProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_PaddingRightProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_PaddingTopProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_PositionProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedBackgroundPositionProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedBackgroundProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedBackgroundRepeatProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedBackgroundSizeProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedColorProperty;
}
namespace UnityEngine::UIElements {
template <typename TValue> class ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedFloatProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedFontDefinitionProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedFontProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedIntProperty;
}
namespace UnityEngine::UIElements {
template <typename T> class ResolvedStyleAccessPropertyBag_ResolvedListProperty_1;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedRotateProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedScaleProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty;
}
namespace UnityEngine::UIElements {
template <typename TValue> class ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedVector3Property;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_RightProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_RotateProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ScaleProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_TextOverflowProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_TopProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_TransformOriginProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_TransitionDelayProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_TransitionDurationProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_TransitionPropertyProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_TransitionTimingFunctionProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_TranslateProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityFontDefinitionProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityFontProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityFontStyleAndWeightProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityParagraphSpacingProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnitySliceBottomProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnitySliceLeftProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnitySliceRightProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnitySliceScaleProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnitySliceTopProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityTextAlignProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityTextGeneratorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityTextOutlineColorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityTextOutlineWidthProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityTextOverflowPositionProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_VisibilityProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_WhiteSpaceProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_WidthProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_WordSpacingProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccess;
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
class ResolvedStyleAccessPropertyBag;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_AlignContentProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_AlignItemsProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_AlignSelfProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BackgroundColorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BackgroundImageProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BackgroundPositionXProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BackgroundPositionYProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BackgroundRepeatProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BackgroundSizeProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderBottomColorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderBottomLeftRadiusProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderBottomRightRadiusProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderBottomWidthProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderLeftColorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderLeftWidthProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderRightColorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderRightWidthProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderTopColorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderTopLeftRadiusProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderTopRightRadiusProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BorderTopWidthProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_BottomProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ColorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_DisplayProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_FlexBasisProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_FlexDirectionProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_FlexGrowProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_FlexShrinkProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_FlexWrapProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_FontSizeProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_HeightProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_JustifyContentProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_LeftProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_LetterSpacingProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_MarginBottomProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_MarginLeftProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_MarginRightProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_MarginTopProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_MaxHeightProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_MaxWidthProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_MinHeightProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_MinWidthProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_OpacityProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_PaddingBottomProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_PaddingLeftProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_PaddingRightProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_PaddingTopProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_PositionProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedBackgroundPositionProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedBackgroundProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedBackgroundRepeatProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedBackgroundSizeProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedColorProperty;
}
namespace UnityEngine::UIElements {
template <typename TValue> class ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedFloatProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedFontDefinitionProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedFontProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedIntProperty;
}
namespace UnityEngine::UIElements {
template <typename T> class ResolvedStyleAccessPropertyBag_ResolvedListProperty_1;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedRotateProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedScaleProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty;
}
namespace UnityEngine::UIElements {
template <typename TValue> class ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ResolvedVector3Property;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_RightProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_RotateProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_ScaleProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_TextOverflowProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_TopProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_TransformOriginProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_TransitionDelayProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_TransitionDurationProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_TransitionPropertyProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_TransitionTimingFunctionProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_TranslateProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityFontDefinitionProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityFontProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityFontStyleAndWeightProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityParagraphSpacingProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnitySliceBottomProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnitySliceLeftProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnitySliceRightProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnitySliceScaleProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnitySliceTopProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityTextAlignProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityTextGeneratorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityTextOutlineColorProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityTextOutlineWidthProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_UnityTextOverflowPositionProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_VisibilityProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_WhiteSpaceProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_WidthProperty;
}
namespace UnityEngine::UIElements {
class ResolvedStyleAccessPropertyBag_WordSpacingProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_AlignContentProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_AlignItemsProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_AlignSelfProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundColorProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundImageProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundPositionXProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundPositionYProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundRepeatProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundSizeProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomColorProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomLeftRadiusProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomRightRadiusProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomWidthProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderLeftColorProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderLeftWidthProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderRightColorProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderRightWidthProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopColorProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopLeftRadiusProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopRightRadiusProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopWidthProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BottomProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ColorProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_DisplayProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexBasisProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexDirectionProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexGrowProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexShrinkProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexWrapProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FontSizeProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_HeightProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_JustifyContentProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_LeftProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_LetterSpacingProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginBottomProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginLeftProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginRightProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginTopProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MaxHeightProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MaxWidthProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MinHeightProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MinWidthProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_OpacityProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingBottomProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingLeftProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingRightProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingTopProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PositionProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundPositionProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundRepeatProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundSizeProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedColorProperty*);
MARK_GEN_REF_T_PTR(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFontDefinitionProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFontProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedIntProperty*);
MARK_GEN_REF_T_PTR(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedListProperty_1);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedRotateProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedScaleProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty*);
MARK_GEN_REF_T_PTR(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedVector3Property*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_RightProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_RotateProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ScaleProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TextOverflowProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TopProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransformOriginProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionDelayProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionDurationProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionPropertyProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionTimingFunctionProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TranslateProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityFontDefinitionProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityFontProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityFontStyleAndWeightProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityParagraphSpacingProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceBottomProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceLeftProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceRightProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceScaleProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceTopProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextAlignProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextGeneratorProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextOutlineColorProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextOutlineWidthProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextOverflowPositionProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_VisibilityProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_WhiteSpaceProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_WidthProperty*);
MARK_REF_T(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_WordSpacingProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_AlignContentProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/AlignContentProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_AlignItemsProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/AlignItemsProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_AlignSelfProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/AlignSelfProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundColorProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/BackgroundColorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundImageProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/BackgroundImageProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundPositionXProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/BackgroundPositionXProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundPositionYProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/BackgroundPositionYProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundRepeatProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/BackgroundRepeatProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundSizeProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/BackgroundSizeProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomColorProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/BorderBottomColorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomLeftRadiusProperty*, "UnityEngine.UIElements",
                    "ResolvedStyleAccessPropertyBag/BorderBottomLeftRadiusProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomRightRadiusProperty*, "UnityEngine.UIElements",
                    "ResolvedStyleAccessPropertyBag/BorderBottomRightRadiusProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomWidthProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/BorderBottomWidthProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderLeftColorProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/BorderLeftColorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderLeftWidthProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/BorderLeftWidthProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderRightColorProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/BorderRightColorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderRightWidthProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/BorderRightWidthProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopColorProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/BorderTopColorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopLeftRadiusProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/BorderTopLeftRadiusProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopRightRadiusProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/BorderTopRightRadiusProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopWidthProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/BorderTopWidthProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BottomProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/BottomProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ColorProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/ColorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_DisplayProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/DisplayProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexBasisProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/FlexBasisProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexDirectionProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/FlexDirectionProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexGrowProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/FlexGrowProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexShrinkProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/FlexShrinkProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexWrapProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/FlexWrapProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FontSizeProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/FontSizeProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_HeightProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/HeightProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_JustifyContentProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/JustifyContentProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_LeftProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/LeftProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_LetterSpacingProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/LetterSpacingProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginBottomProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/MarginBottomProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginLeftProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/MarginLeftProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginRightProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/MarginRightProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginTopProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/MarginTopProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MaxHeightProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/MaxHeightProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MaxWidthProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/MaxWidthProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MinHeightProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/MinHeightProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MinWidthProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/MinWidthProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_OpacityProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/OpacityProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingBottomProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/PaddingBottomProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingLeftProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/PaddingLeftProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingRightProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/PaddingRightProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingTopProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/PaddingTopProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PositionProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/PositionProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundPositionProperty*, "UnityEngine.UIElements",
                    "ResolvedStyleAccessPropertyBag/ResolvedBackgroundPositionProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/ResolvedBackgroundProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundRepeatProperty*, "UnityEngine.UIElements",
                    "ResolvedStyleAccessPropertyBag/ResolvedBackgroundRepeatProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundSizeProperty*, "UnityEngine.UIElements",
                    "ResolvedStyleAccessPropertyBag/ResolvedBackgroundSizeProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedColorProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/ResolvedColorProperty");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/ResolvedEnumProperty`1");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/ResolvedFloatProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFontDefinitionProperty*, "UnityEngine.UIElements",
                    "ResolvedStyleAccessPropertyBag/ResolvedFontDefinitionProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFontProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/ResolvedFontProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedIntProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/ResolvedIntProperty");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedListProperty_1, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/ResolvedListProperty`1");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedRotateProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/ResolvedRotateProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedScaleProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/ResolvedScaleProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/ResolvedStyleFloatProperty");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/ResolvedStyleProperty`1");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedVector3Property*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/ResolvedVector3Property");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_RightProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/RightProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_RotateProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/RotateProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ScaleProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/ScaleProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TextOverflowProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/TextOverflowProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TopProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/TopProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransformOriginProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/TransformOriginProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionDelayProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/TransitionDelayProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionDurationProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/TransitionDurationProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionPropertyProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/TransitionPropertyProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionTimingFunctionProperty*, "UnityEngine.UIElements",
                    "ResolvedStyleAccessPropertyBag/TransitionTimingFunctionProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TranslateProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/TranslateProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty*, "UnityEngine.UIElements",
                    "ResolvedStyleAccessPropertyBag/UnityBackgroundImageTintColorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty*, "UnityEngine.UIElements",
                    "ResolvedStyleAccessPropertyBag/UnityEditorTextRenderingModeProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityFontDefinitionProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/UnityFontDefinitionProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityFontProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/UnityFontProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityFontStyleAndWeightProperty*, "UnityEngine.UIElements",
                    "ResolvedStyleAccessPropertyBag/UnityFontStyleAndWeightProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityParagraphSpacingProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/UnityParagraphSpacingProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceBottomProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/UnitySliceBottomProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceLeftProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/UnitySliceLeftProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceRightProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/UnitySliceRightProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceScaleProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/UnitySliceScaleProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceTopProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/UnitySliceTopProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextAlignProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/UnityTextAlignProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextGeneratorProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/UnityTextGeneratorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextOutlineColorProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/UnityTextOutlineColorProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextOutlineWidthProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/UnityTextOutlineWidthProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextOverflowPositionProperty*, "UnityEngine.UIElements",
                    "ResolvedStyleAccessPropertyBag/UnityTextOverflowPositionProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_VisibilityProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/VisibilityProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_WhiteSpaceProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/WhiteSpaceProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_WidthProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/WidthProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_WordSpacingProperty*, "UnityEngine.UIElements", "ResolvedStyleAccessPropertyBag/WordSpacingProperty");
// Dependencies Unity.Properties.Property`2<TContainer, TValue>
namespace UnityEngine::UIElements {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ResolvedStyleProperty`1<TValue>
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1 : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::ResolvedStyleAccess*, TValue> {
public:
  // Declarations
  __declspec(property(get = get_ussName)) ::StringW ussName;

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<TValue>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ussName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1(ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1(ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4924 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleProperty`1<TValue>
namespace UnityEngine::UIElements {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ResolvedEnumProperty`1<TValue>
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1 : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<TValue> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<TValue>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1(ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1(ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4925 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Align, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/AlignContentProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_AlignContentProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<::UnityEngine::UIElements::Align> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c86bb8, size 0xa4, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Align GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_AlignContentProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c86c5c, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::Align value);

  /// @brief Method .ctor, addr 0x6c85770, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c86bb0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c86b28, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c86b6c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_AlignContentProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_AlignContentProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_AlignContentProperty(ResolvedStyleAccessPropertyBag_AlignContentProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_AlignContentProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_AlignContentProperty(ResolvedStyleAccessPropertyBag_AlignContentProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4845 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_AlignContentProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Align, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/AlignItemsProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_AlignItemsProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<::UnityEngine::UIElements::Align> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c86d24, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Align GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_AlignItemsProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c86dcc, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::Align value);

  /// @brief Method .ctor, addr 0x6c857ac, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c86d1c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c86c94, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c86cd8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_AlignItemsProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_AlignItemsProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_AlignItemsProperty(ResolvedStyleAccessPropertyBag_AlignItemsProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_AlignItemsProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_AlignItemsProperty(ResolvedStyleAccessPropertyBag_AlignItemsProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4846 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_AlignItemsProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Align, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/AlignSelfProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_AlignSelfProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<::UnityEngine::UIElements::Align> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c86e94, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Align GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_AlignSelfProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c86f3c, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::Align value);

  /// @brief Method .ctor, addr 0x6c857e8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c86e8c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c86e04, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c86e48, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_AlignSelfProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_AlignSelfProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_AlignSelfProperty(ResolvedStyleAccessPropertyBag_AlignSelfProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_AlignSelfProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_AlignSelfProperty(ResolvedStyleAccessPropertyBag_AlignSelfProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4847 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_AlignSelfProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.Color, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ResolvedColorProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ResolvedColorProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<::UnityEngine::Color> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedColorProperty* New_ctor();

  /// @brief Method .ctor, addr 0x6c870e4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ResolvedColorProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedColorProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ResolvedColorProperty(ResolvedStyleAccessPropertyBag_ResolvedColorProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedColorProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ResolvedColorProperty(ResolvedStyleAccessPropertyBag_ResolvedColorProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4926 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedColorProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedColorProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BackgroundColorProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BackgroundColorProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedColorProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c87004, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::Color GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundColorProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c870ac, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x6c85824, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c86ffc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c86f74, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c86fb8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BackgroundColorProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BackgroundColorProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BackgroundColorProperty(ResolvedStyleAccessPropertyBag_BackgroundColorProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BackgroundColorProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BackgroundColorProperty(ResolvedStyleAccessPropertyBag_BackgroundColorProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4848 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundColorProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Background, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ResolvedBackgroundProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ResolvedBackgroundProperty
    : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<::UnityEngine::UIElements::Background> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundProperty* New_ctor();

  /// @brief Method .ctor, addr 0x6c872b4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ResolvedBackgroundProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedBackgroundProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ResolvedBackgroundProperty(ResolvedStyleAccessPropertyBag_ResolvedBackgroundProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedBackgroundProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ResolvedBackgroundProperty(ResolvedStyleAccessPropertyBag_ResolvedBackgroundProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4927 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedBackgroundProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BackgroundImageProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BackgroundImageProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c871b0, size 0xcc, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Background GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundImageProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8727c, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::Background value);

  /// @brief Method .ctor, addr 0x6c85860, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c871a8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c87120, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c87164, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BackgroundImageProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BackgroundImageProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BackgroundImageProperty(ResolvedStyleAccessPropertyBag_BackgroundImageProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BackgroundImageProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BackgroundImageProperty(ResolvedStyleAccessPropertyBag_BackgroundImageProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4849 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundImageProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BackgroundPosition, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ResolvedBackgroundPositionProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ResolvedBackgroundPositionProperty
    : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<::UnityEngine::UIElements::BackgroundPosition> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundPositionProperty* New_ctor();

  /// @brief Method .ctor, addr 0x6c87468, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ResolvedBackgroundPositionProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedBackgroundPositionProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ResolvedBackgroundPositionProperty(ResolvedStyleAccessPropertyBag_ResolvedBackgroundPositionProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedBackgroundPositionProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ResolvedBackgroundPositionProperty(ResolvedStyleAccessPropertyBag_ResolvedBackgroundPositionProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4937 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundPositionProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedBackgroundPositionProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BackgroundPositionXProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BackgroundPositionXProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundPositionProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c87380, size 0xb0, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::BackgroundPosition GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundPositionXProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c87430, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::BackgroundPosition value);

  /// @brief Method .ctor, addr 0x6c8589c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c87378, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c872f0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c87334, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BackgroundPositionXProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BackgroundPositionXProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BackgroundPositionXProperty(ResolvedStyleAccessPropertyBag_BackgroundPositionXProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BackgroundPositionXProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BackgroundPositionXProperty(ResolvedStyleAccessPropertyBag_BackgroundPositionXProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4850 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundPositionXProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedBackgroundPositionProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BackgroundPositionYProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BackgroundPositionYProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundPositionProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c87534, size 0xb0, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::BackgroundPosition GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundPositionYProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c875e4, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::BackgroundPosition value);

  /// @brief Method .ctor, addr 0x6c858d8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8752c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c874a4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c874e8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BackgroundPositionYProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BackgroundPositionYProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BackgroundPositionYProperty(ResolvedStyleAccessPropertyBag_BackgroundPositionYProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BackgroundPositionYProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BackgroundPositionYProperty(ResolvedStyleAccessPropertyBag_BackgroundPositionYProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4851 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundPositionYProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BackgroundRepeat, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ResolvedBackgroundRepeatProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ResolvedBackgroundRepeatProperty
    : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<::UnityEngine::UIElements::BackgroundRepeat> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundRepeatProperty* New_ctor();

  /// @brief Method .ctor, addr 0x6c8778c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ResolvedBackgroundRepeatProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedBackgroundRepeatProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ResolvedBackgroundRepeatProperty(ResolvedStyleAccessPropertyBag_ResolvedBackgroundRepeatProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedBackgroundRepeatProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ResolvedBackgroundRepeatProperty(ResolvedStyleAccessPropertyBag_ResolvedBackgroundRepeatProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4938 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundRepeatProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedBackgroundRepeatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BackgroundRepeatProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BackgroundRepeatProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundRepeatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c876ac, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::BackgroundRepeat GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundRepeatProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c87754, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::BackgroundRepeat value);

  /// @brief Method .ctor, addr 0x6c85914, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c876a4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8761c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c87660, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BackgroundRepeatProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BackgroundRepeatProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BackgroundRepeatProperty(ResolvedStyleAccessPropertyBag_BackgroundRepeatProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BackgroundRepeatProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BackgroundRepeatProperty(ResolvedStyleAccessPropertyBag_BackgroundRepeatProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4852 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundRepeatProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BackgroundSize, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ResolvedBackgroundSizeProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ResolvedBackgroundSizeProperty
    : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<::UnityEngine::UIElements::BackgroundSize> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundSizeProperty* New_ctor();

  /// @brief Method .ctor, addr 0x6c87964, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ResolvedBackgroundSizeProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedBackgroundSizeProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ResolvedBackgroundSizeProperty(ResolvedStyleAccessPropertyBag_ResolvedBackgroundSizeProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedBackgroundSizeProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ResolvedBackgroundSizeProperty(ResolvedStyleAccessPropertyBag_ResolvedBackgroundSizeProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4939 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundSizeProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedBackgroundSizeProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BackgroundSizeProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BackgroundSizeProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundSizeProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c87858, size 0xd4, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::BackgroundSize GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundSizeProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8792c, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::BackgroundSize value);

  /// @brief Method .ctor, addr 0x6c85950, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c87850, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c877c8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8780c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BackgroundSizeProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BackgroundSizeProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BackgroundSizeProperty(ResolvedStyleAccessPropertyBag_BackgroundSizeProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BackgroundSizeProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BackgroundSizeProperty(ResolvedStyleAccessPropertyBag_BackgroundSizeProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4853 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundSizeProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedColorProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BorderBottomColorProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BorderBottomColorProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedColorProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c87a30, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::Color GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomColorProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c87ad8, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x6c8598c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c87a28, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c879a0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c879e4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BorderBottomColorProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderBottomColorProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BorderBottomColorProperty(ResolvedStyleAccessPropertyBag_BorderBottomColorProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderBottomColorProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BorderBottomColorProperty(ResolvedStyleAccessPropertyBag_BorderBottomColorProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4854 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomColorProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ResolvedFloatProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ResolvedFloatProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<float_t> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty* New_ctor();

  /// @brief Method .ctor, addr 0x6c87c80, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ResolvedFloatProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedFloatProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ResolvedFloatProperty(ResolvedStyleAccessPropertyBag_ResolvedFloatProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedFloatProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ResolvedFloatProperty(ResolvedStyleAccessPropertyBag_ResolvedFloatProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4928 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BorderBottomLeftRadiusProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BorderBottomLeftRadiusProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c87ba0, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomLeftRadiusProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c87c48, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c859c8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c87b98, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c87b10, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c87b54, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BorderBottomLeftRadiusProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderBottomLeftRadiusProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BorderBottomLeftRadiusProperty(ResolvedStyleAccessPropertyBag_BorderBottomLeftRadiusProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderBottomLeftRadiusProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BorderBottomLeftRadiusProperty(ResolvedStyleAccessPropertyBag_BorderBottomLeftRadiusProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4855 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomLeftRadiusProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BorderBottomRightRadiusProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BorderBottomRightRadiusProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c87d4c, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomRightRadiusProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c87df4, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c85a04, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c87d44, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c87cbc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c87d00, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BorderBottomRightRadiusProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderBottomRightRadiusProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BorderBottomRightRadiusProperty(ResolvedStyleAccessPropertyBag_BorderBottomRightRadiusProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderBottomRightRadiusProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BorderBottomRightRadiusProperty(ResolvedStyleAccessPropertyBag_BorderBottomRightRadiusProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4856 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomRightRadiusProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BorderBottomWidthProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BorderBottomWidthProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c87ebc, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomWidthProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c87f64, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c85a40, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c87eb4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c87e2c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c87e70, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BorderBottomWidthProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderBottomWidthProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BorderBottomWidthProperty(ResolvedStyleAccessPropertyBag_BorderBottomWidthProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderBottomWidthProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BorderBottomWidthProperty(ResolvedStyleAccessPropertyBag_BorderBottomWidthProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4857 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomWidthProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedColorProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BorderLeftColorProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BorderLeftColorProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedColorProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8802c, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::Color GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderLeftColorProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c880d4, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x6c85a7c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c88024, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c87f9c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c87fe0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BorderLeftColorProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderLeftColorProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BorderLeftColorProperty(ResolvedStyleAccessPropertyBag_BorderLeftColorProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderLeftColorProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BorderLeftColorProperty(ResolvedStyleAccessPropertyBag_BorderLeftColorProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4858 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderLeftColorProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BorderLeftWidthProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BorderLeftWidthProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8819c, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderLeftWidthProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c88244, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c85ab8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c88194, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8810c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c88150, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BorderLeftWidthProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderLeftWidthProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BorderLeftWidthProperty(ResolvedStyleAccessPropertyBag_BorderLeftWidthProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderLeftWidthProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BorderLeftWidthProperty(ResolvedStyleAccessPropertyBag_BorderLeftWidthProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4859 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderLeftWidthProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedColorProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BorderRightColorProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BorderRightColorProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedColorProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8830c, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::Color GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderRightColorProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c883b4, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x6c85af4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c88304, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8827c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c882c0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BorderRightColorProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderRightColorProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BorderRightColorProperty(ResolvedStyleAccessPropertyBag_BorderRightColorProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderRightColorProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BorderRightColorProperty(ResolvedStyleAccessPropertyBag_BorderRightColorProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4860 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderRightColorProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BorderRightWidthProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BorderRightWidthProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8847c, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderRightWidthProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c88524, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c85b30, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c88474, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c883ec, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c88430, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BorderRightWidthProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderRightWidthProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BorderRightWidthProperty(ResolvedStyleAccessPropertyBag_BorderRightWidthProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderRightWidthProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BorderRightWidthProperty(ResolvedStyleAccessPropertyBag_BorderRightWidthProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4861 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderRightWidthProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedColorProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BorderTopColorProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BorderTopColorProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedColorProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c885ec, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::Color GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopColorProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c88694, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x6c85b6c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c885e4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8855c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c885a0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BorderTopColorProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderTopColorProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BorderTopColorProperty(ResolvedStyleAccessPropertyBag_BorderTopColorProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderTopColorProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BorderTopColorProperty(ResolvedStyleAccessPropertyBag_BorderTopColorProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4862 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopColorProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BorderTopLeftRadiusProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BorderTopLeftRadiusProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8875c, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopLeftRadiusProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c88804, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c85ba8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c88754, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c886cc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c88710, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BorderTopLeftRadiusProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderTopLeftRadiusProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BorderTopLeftRadiusProperty(ResolvedStyleAccessPropertyBag_BorderTopLeftRadiusProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderTopLeftRadiusProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BorderTopLeftRadiusProperty(ResolvedStyleAccessPropertyBag_BorderTopLeftRadiusProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4863 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopLeftRadiusProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BorderTopRightRadiusProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BorderTopRightRadiusProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c888cc, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopRightRadiusProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c88974, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c85be4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c888c4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8883c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c88880, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BorderTopRightRadiusProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderTopRightRadiusProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BorderTopRightRadiusProperty(ResolvedStyleAccessPropertyBag_BorderTopRightRadiusProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderTopRightRadiusProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BorderTopRightRadiusProperty(ResolvedStyleAccessPropertyBag_BorderTopRightRadiusProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4864 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopRightRadiusProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BorderTopWidthProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BorderTopWidthProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c88a3c, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopWidthProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c88ae4, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c85c20, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c88a34, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c889ac, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c889f0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BorderTopWidthProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderTopWidthProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BorderTopWidthProperty(ResolvedStyleAccessPropertyBag_BorderTopWidthProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BorderTopWidthProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BorderTopWidthProperty(ResolvedStyleAccessPropertyBag_BorderTopWidthProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4865 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopWidthProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/BottomProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_BottomProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c88bac, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BottomProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c88c54, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c85c5c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c88ba4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c88b1c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c88b60, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_BottomProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BottomProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_BottomProperty(ResolvedStyleAccessPropertyBag_BottomProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_BottomProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_BottomProperty(ResolvedStyleAccessPropertyBag_BottomProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4866 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BottomProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedColorProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ColorProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ColorProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedColorProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c88d1c, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::Color GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ColorProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c88dc4, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x6c85c98, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c88d14, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c88c8c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c88cd0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ColorProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ColorProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ColorProperty(ResolvedStyleAccessPropertyBag_ColorProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ColorProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ColorProperty(ResolvedStyleAccessPropertyBag_ColorProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4867 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ColorProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.DisplayStyle, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/DisplayProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_DisplayProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<::UnityEngine::UIElements::DisplayStyle> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c88e8c, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::DisplayStyle GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_DisplayProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c88f34, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::DisplayStyle value);

  /// @brief Method .ctor, addr 0x6c85cd4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c88e84, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c88dfc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c88e40, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_DisplayProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_DisplayProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_DisplayProperty(ResolvedStyleAccessPropertyBag_DisplayProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_DisplayProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_DisplayProperty(ResolvedStyleAccessPropertyBag_DisplayProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4868 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_DisplayProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleProperty`1<TValue>, UnityEngine.UIElements.StyleFloat
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ResolvedStyleFloatProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty
    : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<::UnityEngine::UIElements::StyleFloat> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty* New_ctor();

  /// @brief Method .ctor, addr 0x6c890dc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty(ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty(ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4929 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/FlexBasisProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_FlexBasisProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c88ffc, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexBasisProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c890a4, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method .ctor, addr 0x6c85d10, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c88ff4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c88f6c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c88fb0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_FlexBasisProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_FlexBasisProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_FlexBasisProperty(ResolvedStyleAccessPropertyBag_FlexBasisProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_FlexBasisProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_FlexBasisProperty(ResolvedStyleAccessPropertyBag_FlexBasisProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4869 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexBasisProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.FlexDirection, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/FlexDirectionProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_FlexDirectionProperty
    : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<::UnityEngine::UIElements::FlexDirection> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c891a8, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::FlexDirection GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexDirectionProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c89250, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::FlexDirection value);

  /// @brief Method .ctor, addr 0x6c85d4c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c891a0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c89118, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8915c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_FlexDirectionProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_FlexDirectionProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_FlexDirectionProperty(ResolvedStyleAccessPropertyBag_FlexDirectionProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_FlexDirectionProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_FlexDirectionProperty(ResolvedStyleAccessPropertyBag_FlexDirectionProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4870 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexDirectionProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/FlexGrowProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_FlexGrowProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c89318, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexGrowProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c893c0, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c85d88, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c89310, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c89288, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c892cc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_FlexGrowProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_FlexGrowProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_FlexGrowProperty(ResolvedStyleAccessPropertyBag_FlexGrowProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_FlexGrowProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_FlexGrowProperty(ResolvedStyleAccessPropertyBag_FlexGrowProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4871 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexGrowProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/FlexShrinkProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_FlexShrinkProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c89488, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexShrinkProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c89530, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c85dc4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c89480, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c893f8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8943c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_FlexShrinkProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_FlexShrinkProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_FlexShrinkProperty(ResolvedStyleAccessPropertyBag_FlexShrinkProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_FlexShrinkProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_FlexShrinkProperty(ResolvedStyleAccessPropertyBag_FlexShrinkProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4872 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexShrinkProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedEnumProperty`1<TValue>, UnityEngine.UIElements.Wrap
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/FlexWrapProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_FlexWrapProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<::UnityEngine::UIElements::Wrap> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c895f8, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Wrap GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexWrapProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c896a0, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::Wrap value);

  /// @brief Method .ctor, addr 0x6c85e00, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c895f0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c89568, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c895ac, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_FlexWrapProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_FlexWrapProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_FlexWrapProperty(ResolvedStyleAccessPropertyBag_FlexWrapProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_FlexWrapProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_FlexWrapProperty(ResolvedStyleAccessPropertyBag_FlexWrapProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4873 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexWrapProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/FontSizeProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_FontSizeProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c89768, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FontSizeProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c89810, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c85e3c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c89760, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c896d8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8971c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_FontSizeProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_FontSizeProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_FontSizeProperty(ResolvedStyleAccessPropertyBag_FontSizeProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_FontSizeProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_FontSizeProperty(ResolvedStyleAccessPropertyBag_FontSizeProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4874 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FontSizeProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/HeightProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_HeightProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c898d8, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_HeightProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c89980, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c85e78, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c898d0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c89848, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8988c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_HeightProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_HeightProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_HeightProperty(ResolvedStyleAccessPropertyBag_HeightProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_HeightProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_HeightProperty(ResolvedStyleAccessPropertyBag_HeightProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4875 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_HeightProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Justify, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/JustifyContentProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_JustifyContentProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<::UnityEngine::UIElements::Justify> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c89a48, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Justify GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_JustifyContentProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c89af0, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::Justify value);

  /// @brief Method .ctor, addr 0x6c85eb4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c89a40, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c899b8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c899fc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_JustifyContentProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_JustifyContentProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_JustifyContentProperty(ResolvedStyleAccessPropertyBag_JustifyContentProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_JustifyContentProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_JustifyContentProperty(ResolvedStyleAccessPropertyBag_JustifyContentProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4876 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_JustifyContentProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/LeftProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_LeftProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c89bb8, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_LeftProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c89c60, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c85ef0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c89bb0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c89b28, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c89b6c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_LeftProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_LeftProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_LeftProperty(ResolvedStyleAccessPropertyBag_LeftProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_LeftProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_LeftProperty(ResolvedStyleAccessPropertyBag_LeftProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4877 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_LeftProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/LetterSpacingProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_LetterSpacingProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c89d28, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_LetterSpacingProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c89dd0, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c85f2c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c89d20, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c89c98, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c89cdc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_LetterSpacingProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_LetterSpacingProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_LetterSpacingProperty(ResolvedStyleAccessPropertyBag_LetterSpacingProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_LetterSpacingProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_LetterSpacingProperty(ResolvedStyleAccessPropertyBag_LetterSpacingProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4878 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_LetterSpacingProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/MarginBottomProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_MarginBottomProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c89e98, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginBottomProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c89f40, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c85f68, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c89e90, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c89e08, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c89e4c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_MarginBottomProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_MarginBottomProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_MarginBottomProperty(ResolvedStyleAccessPropertyBag_MarginBottomProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_MarginBottomProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_MarginBottomProperty(ResolvedStyleAccessPropertyBag_MarginBottomProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4879 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginBottomProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/MarginLeftProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_MarginLeftProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8a008, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginLeftProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8a0b0, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c85fa4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8a000, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c89f78, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c89fbc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_MarginLeftProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_MarginLeftProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_MarginLeftProperty(ResolvedStyleAccessPropertyBag_MarginLeftProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_MarginLeftProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_MarginLeftProperty(ResolvedStyleAccessPropertyBag_MarginLeftProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4880 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginLeftProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/MarginRightProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_MarginRightProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8a178, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginRightProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8a220, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c85fe0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8a170, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8a0e8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8a12c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_MarginRightProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_MarginRightProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_MarginRightProperty(ResolvedStyleAccessPropertyBag_MarginRightProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_MarginRightProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_MarginRightProperty(ResolvedStyleAccessPropertyBag_MarginRightProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4881 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginRightProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/MarginTopProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_MarginTopProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8a2e8, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginTopProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8a390, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c8601c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8a2e0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8a258, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8a29c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_MarginTopProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_MarginTopProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_MarginTopProperty(ResolvedStyleAccessPropertyBag_MarginTopProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_MarginTopProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_MarginTopProperty(ResolvedStyleAccessPropertyBag_MarginTopProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4882 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginTopProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/MaxHeightProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_MaxHeightProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8a458, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MaxHeightProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8a500, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method .ctor, addr 0x6c86058, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8a450, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8a3c8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8a40c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_MaxHeightProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_MaxHeightProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_MaxHeightProperty(ResolvedStyleAccessPropertyBag_MaxHeightProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_MaxHeightProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_MaxHeightProperty(ResolvedStyleAccessPropertyBag_MaxHeightProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4883 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MaxHeightProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/MaxWidthProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_MaxWidthProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8a5c8, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MaxWidthProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8a670, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method .ctor, addr 0x6c86094, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8a5c0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8a538, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8a57c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_MaxWidthProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_MaxWidthProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_MaxWidthProperty(ResolvedStyleAccessPropertyBag_MaxWidthProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_MaxWidthProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_MaxWidthProperty(ResolvedStyleAccessPropertyBag_MaxWidthProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4884 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MaxWidthProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/MinHeightProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_MinHeightProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8a738, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MinHeightProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8a7e0, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method .ctor, addr 0x6c860d0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8a730, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8a6a8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8a6ec, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_MinHeightProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_MinHeightProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_MinHeightProperty(ResolvedStyleAccessPropertyBag_MinHeightProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_MinHeightProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_MinHeightProperty(ResolvedStyleAccessPropertyBag_MinHeightProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4885 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MinHeightProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/MinWidthProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_MinWidthProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8a8a8, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MinWidthProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8a950, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method .ctor, addr 0x6c8610c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8a8a0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8a818, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8a85c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_MinWidthProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_MinWidthProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_MinWidthProperty(ResolvedStyleAccessPropertyBag_MinWidthProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_MinWidthProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_MinWidthProperty(ResolvedStyleAccessPropertyBag_MinWidthProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4886 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MinWidthProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/OpacityProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_OpacityProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8aa18, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_OpacityProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8aac0, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c86148, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8aa10, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8a988, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8a9cc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_OpacityProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_OpacityProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_OpacityProperty(ResolvedStyleAccessPropertyBag_OpacityProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_OpacityProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_OpacityProperty(ResolvedStyleAccessPropertyBag_OpacityProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4887 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_OpacityProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/PaddingBottomProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_PaddingBottomProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8ab88, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingBottomProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8ac30, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c86184, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8ab80, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8aaf8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8ab3c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_PaddingBottomProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_PaddingBottomProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_PaddingBottomProperty(ResolvedStyleAccessPropertyBag_PaddingBottomProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_PaddingBottomProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_PaddingBottomProperty(ResolvedStyleAccessPropertyBag_PaddingBottomProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4888 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingBottomProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/PaddingLeftProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_PaddingLeftProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8acf8, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingLeftProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8ada0, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c861c0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8acf0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8ac68, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8acac, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_PaddingLeftProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_PaddingLeftProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_PaddingLeftProperty(ResolvedStyleAccessPropertyBag_PaddingLeftProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_PaddingLeftProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_PaddingLeftProperty(ResolvedStyleAccessPropertyBag_PaddingLeftProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4889 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingLeftProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/PaddingRightProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_PaddingRightProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8ae68, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingRightProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8af10, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c861fc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8ae60, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8add8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8ae1c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_PaddingRightProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_PaddingRightProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_PaddingRightProperty(ResolvedStyleAccessPropertyBag_PaddingRightProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_PaddingRightProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_PaddingRightProperty(ResolvedStyleAccessPropertyBag_PaddingRightProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4890 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingRightProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/PaddingTopProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_PaddingTopProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8afd8, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingTopProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8b080, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c86238, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8afd0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8af48, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8af8c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_PaddingTopProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_PaddingTopProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_PaddingTopProperty(ResolvedStyleAccessPropertyBag_PaddingTopProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_PaddingTopProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_PaddingTopProperty(ResolvedStyleAccessPropertyBag_PaddingTopProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4891 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingTopProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Position, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/PositionProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_PositionProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<::UnityEngine::UIElements::Position> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8b148, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Position GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PositionProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8b1f0, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::Position value);

  /// @brief Method .ctor, addr 0x6c86274, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8b140, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8b0b8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8b0fc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_PositionProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_PositionProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_PositionProperty(ResolvedStyleAccessPropertyBag_PositionProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_PositionProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_PositionProperty(ResolvedStyleAccessPropertyBag_PositionProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4892 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PositionProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/RightProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_RightProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8b2b8, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_RightProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8b360, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c862b0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8b2b0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8b228, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8b26c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_RightProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_RightProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_RightProperty(ResolvedStyleAccessPropertyBag_RightProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_RightProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_RightProperty(ResolvedStyleAccessPropertyBag_RightProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4893 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_RightProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleProperty`1<TValue>, UnityEngine.UIElements.Rotate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ResolvedRotateProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ResolvedRotateProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<::UnityEngine::UIElements::Rotate> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedRotateProperty* New_ctor();

  /// @brief Method .ctor, addr 0x6c8b530, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ResolvedRotateProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedRotateProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ResolvedRotateProperty(ResolvedStyleAccessPropertyBag_ResolvedRotateProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedRotateProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ResolvedRotateProperty(ResolvedStyleAccessPropertyBag_ResolvedRotateProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4934 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedRotateProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedRotateProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/RotateProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_RotateProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedRotateProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8b428, size 0xd0, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Rotate GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_RotateProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8b4f8, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::Rotate value);

  /// @brief Method .ctor, addr 0x6c862ec, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8b420, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8b398, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8b3dc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_RotateProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_RotateProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_RotateProperty(ResolvedStyleAccessPropertyBag_RotateProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_RotateProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_RotateProperty(ResolvedStyleAccessPropertyBag_RotateProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4894 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_RotateProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleProperty`1<TValue>, UnityEngine.UIElements.Scale
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ResolvedScaleProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ResolvedScaleProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<::UnityEngine::UIElements::Scale> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedScaleProperty* New_ctor();

  /// @brief Method .ctor, addr 0x6c8b6dc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ResolvedScaleProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedScaleProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ResolvedScaleProperty(ResolvedStyleAccessPropertyBag_ResolvedScaleProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedScaleProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ResolvedScaleProperty(ResolvedStyleAccessPropertyBag_ResolvedScaleProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4935 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedScaleProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedScaleProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ScaleProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ScaleProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedScaleProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8b5fc, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Scale GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ScaleProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8b6a4, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::Scale value);

  /// @brief Method .ctor, addr 0x6c86328, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8b5f4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8b56c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8b5b0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ScaleProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ScaleProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ScaleProperty(ResolvedStyleAccessPropertyBag_ScaleProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ScaleProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ScaleProperty(ResolvedStyleAccessPropertyBag_ScaleProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4895 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ScaleProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedEnumProperty`1<TValue>, UnityEngine.UIElements.TextOverflow
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/TextOverflowProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_TextOverflowProperty
    : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<::UnityEngine::UIElements::TextOverflow> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8b7a8, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::TextOverflow GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TextOverflowProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8b850, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::TextOverflow value);

  /// @brief Method .ctor, addr 0x6c86364, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8b7a0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8b718, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8b75c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_TextOverflowProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_TextOverflowProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_TextOverflowProperty(ResolvedStyleAccessPropertyBag_TextOverflowProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_TextOverflowProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_TextOverflowProperty(ResolvedStyleAccessPropertyBag_TextOverflowProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4896 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TextOverflowProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/TopProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_TopProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8b918, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TopProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8b9c0, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c863a0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8b910, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8b888, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8b8cc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_TopProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_TopProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_TopProperty(ResolvedStyleAccessPropertyBag_TopProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_TopProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_TopProperty(ResolvedStyleAccessPropertyBag_TopProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4897 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TopProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleProperty`1<TValue>, UnityEngine.Vector3
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ResolvedVector3Property
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ResolvedVector3Property : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<::UnityEngine::Vector3> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedVector3Property* New_ctor();

  /// @brief Method .ctor, addr 0x6c8bb68, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ResolvedVector3Property();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedVector3Property", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ResolvedVector3Property(ResolvedStyleAccessPropertyBag_ResolvedVector3Property&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedVector3Property", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ResolvedVector3Property(ResolvedStyleAccessPropertyBag_ResolvedVector3Property const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4936 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedVector3Property) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedVector3Property
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/TransformOriginProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_TransformOriginProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedVector3Property {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8ba88, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransformOriginProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8bb30, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x6c863dc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8ba80, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8b9f8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8ba3c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_TransformOriginProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_TransformOriginProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_TransformOriginProperty(ResolvedStyleAccessPropertyBag_TransformOriginProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_TransformOriginProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_TransformOriginProperty(ResolvedStyleAccessPropertyBag_TransformOriginProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4898 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransformOriginProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleProperty`1<TValue>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ResolvedListProperty`1<T>
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ResolvedListProperty_1
    : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<::System::Collections::Generic::IEnumerable_1<T>*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedListProperty_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ResolvedListProperty_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedListProperty_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ResolvedListProperty_1(ResolvedStyleAccessPropertyBag_ResolvedListProperty_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedListProperty_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ResolvedListProperty_1(ResolvedStyleAccessPropertyBag_ResolvedListProperty_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4930 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedListProperty`1<T>, UnityEngine.UIElements.TimeValue
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/TransitionDelayProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_TransitionDelayProperty
    : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedListProperty_1<::UnityEngine::UIElements::TimeValue> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8bc34, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TimeValue>* GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionDelayProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8bcdc, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TimeValue>* value);

  /// @brief Method .ctor, addr 0x6c86418, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8bc2c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8bba4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8bbe8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_TransitionDelayProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_TransitionDelayProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_TransitionDelayProperty(ResolvedStyleAccessPropertyBag_TransitionDelayProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_TransitionDelayProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_TransitionDelayProperty(ResolvedStyleAccessPropertyBag_TransitionDelayProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4899 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionDelayProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedListProperty`1<T>, UnityEngine.UIElements.TimeValue
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/TransitionDurationProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_TransitionDurationProperty
    : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedListProperty_1<::UnityEngine::UIElements::TimeValue> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8bda4, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TimeValue>* GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionDurationProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8be4c, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TimeValue>* value);

  /// @brief Method .ctor, addr 0x6c86454, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8bd9c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8bd14, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8bd58, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_TransitionDurationProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_TransitionDurationProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_TransitionDurationProperty(ResolvedStyleAccessPropertyBag_TransitionDurationProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_TransitionDurationProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_TransitionDurationProperty(ResolvedStyleAccessPropertyBag_TransitionDurationProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4900 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionDurationProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedListProperty`1<T>, UnityEngine.UIElements.StylePropertyName
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/TransitionPropertyProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_TransitionPropertyProperty
    : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedListProperty_1<::UnityEngine::UIElements::StylePropertyName> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8bf14, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>* GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionPropertyProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8bfbc, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>* value);

  /// @brief Method .ctor, addr 0x6c86490, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8bf0c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8be84, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8bec8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_TransitionPropertyProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_TransitionPropertyProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_TransitionPropertyProperty(ResolvedStyleAccessPropertyBag_TransitionPropertyProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_TransitionPropertyProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_TransitionPropertyProperty(ResolvedStyleAccessPropertyBag_TransitionPropertyProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4901 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionPropertyProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.EasingFunction, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedListProperty`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/TransitionTimingFunctionProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_TransitionTimingFunctionProperty
    : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedListProperty_1<::UnityEngine::UIElements::EasingFunction> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8c084, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::EasingFunction>* GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionTimingFunctionProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8c12c, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::EasingFunction>* value);

  /// @brief Method .ctor, addr 0x6c864cc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8c07c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8bff4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8c038, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_TransitionTimingFunctionProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_TransitionTimingFunctionProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_TransitionTimingFunctionProperty(ResolvedStyleAccessPropertyBag_TransitionTimingFunctionProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_TransitionTimingFunctionProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_TransitionTimingFunctionProperty(ResolvedStyleAccessPropertyBag_TransitionTimingFunctionProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4902 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionTimingFunctionProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedVector3Property
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/TranslateProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_TranslateProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedVector3Property {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8c1f4, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TranslateProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8c29c, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x6c86508, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8c1ec, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8c164, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8c1a8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_TranslateProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_TranslateProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_TranslateProperty(ResolvedStyleAccessPropertyBag_TranslateProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_TranslateProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_TranslateProperty(ResolvedStyleAccessPropertyBag_TranslateProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4903 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TranslateProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedColorProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/UnityBackgroundImageTintColorProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedColorProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8c364, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::Color GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8c40c, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x6c86544, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8c35c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8c2d4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8c318, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty(ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty(ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4904 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.EditorTextRenderingMode, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/UnityEditorTextRenderingModeProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty
    : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<::UnityEngine::UIElements::EditorTextRenderingMode> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8c4d4, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::EditorTextRenderingMode GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8c57c, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::EditorTextRenderingMode value);

  /// @brief Method .ctor, addr 0x6c86580, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8c4cc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8c444, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8c488, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty(ResolvedStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty(ResolvedStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4905 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ResolvedFontProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ResolvedFontProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<::UnityW<::UnityEngine::Font>> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFontProperty* New_ctor();

  /// @brief Method .ctor, addr 0x6c8c724, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ResolvedFontProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedFontProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ResolvedFontProperty(ResolvedStyleAccessPropertyBag_ResolvedFontProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedFontProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ResolvedFontProperty(ResolvedStyleAccessPropertyBag_ResolvedFontProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4931 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFontProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFontProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/UnityFontProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_UnityFontProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFontProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8c644, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Font> GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityFontProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8c6ec, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::Font* value);

  /// @brief Method .ctor, addr 0x6c865bc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8c63c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8c5b4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8c5f8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_UnityFontProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityFontProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_UnityFontProperty(ResolvedStyleAccessPropertyBag_UnityFontProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityFontProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_UnityFontProperty(ResolvedStyleAccessPropertyBag_UnityFontProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4906 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityFontProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.FontDefinition, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ResolvedFontDefinitionProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ResolvedFontDefinitionProperty
    : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<::UnityEngine::UIElements::FontDefinition> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFontDefinitionProperty* New_ctor();

  /// @brief Method .ctor, addr 0x6c8c8d0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ResolvedFontDefinitionProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedFontDefinitionProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ResolvedFontDefinitionProperty(ResolvedStyleAccessPropertyBag_ResolvedFontDefinitionProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedFontDefinitionProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ResolvedFontDefinitionProperty(ResolvedStyleAccessPropertyBag_ResolvedFontDefinitionProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4932 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFontDefinitionProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFontDefinitionProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/UnityFontDefinitionProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_UnityFontDefinitionProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFontDefinitionProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8c7f0, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::FontDefinition GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityFontDefinitionProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8c898, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::FontDefinition value);

  /// @brief Method .ctor, addr 0x6c865f8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8c7e8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8c760, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8c7a4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_UnityFontDefinitionProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityFontDefinitionProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_UnityFontDefinitionProperty(ResolvedStyleAccessPropertyBag_UnityFontDefinitionProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityFontDefinitionProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_UnityFontDefinitionProperty(ResolvedStyleAccessPropertyBag_UnityFontDefinitionProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4907 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityFontDefinitionProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.FontStyle, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/UnityFontStyleAndWeightProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_UnityFontStyleAndWeightProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<::UnityEngine::FontStyle> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8c99c, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::FontStyle GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityFontStyleAndWeightProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8ca44, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::FontStyle value);

  /// @brief Method .ctor, addr 0x6c86634, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8c994, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8c90c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8c950, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_UnityFontStyleAndWeightProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityFontStyleAndWeightProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_UnityFontStyleAndWeightProperty(ResolvedStyleAccessPropertyBag_UnityFontStyleAndWeightProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityFontStyleAndWeightProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_UnityFontStyleAndWeightProperty(ResolvedStyleAccessPropertyBag_UnityFontStyleAndWeightProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4908 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityFontStyleAndWeightProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/UnityParagraphSpacingProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_UnityParagraphSpacingProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8cb0c, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityParagraphSpacingProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8cbb4, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c86670, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8cb04, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8ca7c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8cac0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_UnityParagraphSpacingProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityParagraphSpacingProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_UnityParagraphSpacingProperty(ResolvedStyleAccessPropertyBag_UnityParagraphSpacingProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityParagraphSpacingProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_UnityParagraphSpacingProperty(ResolvedStyleAccessPropertyBag_UnityParagraphSpacingProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4909 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityParagraphSpacingProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedStyleProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/ResolvedIntProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_ResolvedIntProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<int32_t> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedIntProperty* New_ctor();

  /// @brief Method .ctor, addr 0x6c8cd5c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_ResolvedIntProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedIntProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_ResolvedIntProperty(ResolvedStyleAccessPropertyBag_ResolvedIntProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_ResolvedIntProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_ResolvedIntProperty(ResolvedStyleAccessPropertyBag_ResolvedIntProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4933 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedIntProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedIntProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/UnitySliceBottomProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_UnitySliceBottomProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedIntProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8cc7c, size 0xa8, virtual true, abstract: false, final false
  inline int32_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceBottomProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8cd24, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, int32_t value);

  /// @brief Method .ctor, addr 0x6c866ac, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8cc74, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8cbec, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8cc30, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_UnitySliceBottomProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnitySliceBottomProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_UnitySliceBottomProperty(ResolvedStyleAccessPropertyBag_UnitySliceBottomProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnitySliceBottomProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_UnitySliceBottomProperty(ResolvedStyleAccessPropertyBag_UnitySliceBottomProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4910 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceBottomProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedIntProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/UnitySliceLeftProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_UnitySliceLeftProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedIntProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8ce28, size 0xa8, virtual true, abstract: false, final false
  inline int32_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceLeftProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8ced0, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, int32_t value);

  /// @brief Method .ctor, addr 0x6c866e8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8ce20, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8cd98, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8cddc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_UnitySliceLeftProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnitySliceLeftProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_UnitySliceLeftProperty(ResolvedStyleAccessPropertyBag_UnitySliceLeftProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnitySliceLeftProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_UnitySliceLeftProperty(ResolvedStyleAccessPropertyBag_UnitySliceLeftProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4911 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceLeftProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedIntProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/UnitySliceRightProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_UnitySliceRightProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedIntProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8cf98, size 0xa8, virtual true, abstract: false, final false
  inline int32_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceRightProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8d040, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, int32_t value);

  /// @brief Method .ctor, addr 0x6c86724, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8cf90, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8cf08, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8cf4c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_UnitySliceRightProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnitySliceRightProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_UnitySliceRightProperty(ResolvedStyleAccessPropertyBag_UnitySliceRightProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnitySliceRightProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_UnitySliceRightProperty(ResolvedStyleAccessPropertyBag_UnitySliceRightProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4912 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceRightProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/UnitySliceScaleProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_UnitySliceScaleProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8d108, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceScaleProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8d1b0, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c86760, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8d100, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8d078, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8d0bc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_UnitySliceScaleProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnitySliceScaleProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_UnitySliceScaleProperty(ResolvedStyleAccessPropertyBag_UnitySliceScaleProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnitySliceScaleProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_UnitySliceScaleProperty(ResolvedStyleAccessPropertyBag_UnitySliceScaleProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4913 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceScaleProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedIntProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/UnitySliceTopProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_UnitySliceTopProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedIntProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8d278, size 0xa8, virtual true, abstract: false, final false
  inline int32_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceTopProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8d320, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, int32_t value);

  /// @brief Method .ctor, addr 0x6c8679c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8d270, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8d1e8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8d22c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_UnitySliceTopProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnitySliceTopProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_UnitySliceTopProperty(ResolvedStyleAccessPropertyBag_UnitySliceTopProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnitySliceTopProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_UnitySliceTopProperty(ResolvedStyleAccessPropertyBag_UnitySliceTopProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4914 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceTopProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.TextAnchor, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/UnityTextAlignProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_UnityTextAlignProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<::UnityEngine::TextAnchor> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8d3e8, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::TextAnchor GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextAlignProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8d490, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::TextAnchor value);

  /// @brief Method .ctor, addr 0x6c867d8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8d3e0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8d358, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8d39c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_UnityTextAlignProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityTextAlignProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_UnityTextAlignProperty(ResolvedStyleAccessPropertyBag_UnityTextAlignProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityTextAlignProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_UnityTextAlignProperty(ResolvedStyleAccessPropertyBag_UnityTextAlignProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4915 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextAlignProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.TextGeneratorType, UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedEnumProperty`1<TValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/UnityTextGeneratorProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_UnityTextGeneratorProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<::UnityEngine::TextGeneratorType> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8d558, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::TextGeneratorType GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextGeneratorProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8d600, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::TextGeneratorType value);

  /// @brief Method .ctor, addr 0x6c86814, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8d550, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8d4c8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8d50c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_UnityTextGeneratorProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityTextGeneratorProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_UnityTextGeneratorProperty(ResolvedStyleAccessPropertyBag_UnityTextGeneratorProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityTextGeneratorProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_UnityTextGeneratorProperty(ResolvedStyleAccessPropertyBag_UnityTextGeneratorProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4916 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextGeneratorProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedColorProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/UnityTextOutlineColorProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_UnityTextOutlineColorProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedColorProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8d6c8, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::Color GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextOutlineColorProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8d770, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x6c86850, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8d6c0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8d638, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8d67c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_UnityTextOutlineColorProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityTextOutlineColorProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_UnityTextOutlineColorProperty(ResolvedStyleAccessPropertyBag_UnityTextOutlineColorProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityTextOutlineColorProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_UnityTextOutlineColorProperty(ResolvedStyleAccessPropertyBag_UnityTextOutlineColorProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4917 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextOutlineColorProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/UnityTextOutlineWidthProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_UnityTextOutlineWidthProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8d838, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextOutlineWidthProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8d8e0, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c8688c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8d830, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8d7a8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8d7ec, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_UnityTextOutlineWidthProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityTextOutlineWidthProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_UnityTextOutlineWidthProperty(ResolvedStyleAccessPropertyBag_UnityTextOutlineWidthProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityTextOutlineWidthProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_UnityTextOutlineWidthProperty(ResolvedStyleAccessPropertyBag_UnityTextOutlineWidthProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4918 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextOutlineWidthProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedEnumProperty`1<TValue>, UnityEngine.UIElements.TextOverflowPosition
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/UnityTextOverflowPositionProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_UnityTextOverflowPositionProperty
    : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<::UnityEngine::UIElements::TextOverflowPosition> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8d9a8, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::TextOverflowPosition GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextOverflowPositionProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8da50, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::TextOverflowPosition value);

  /// @brief Method .ctor, addr 0x6c868c8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8d9a0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8d918, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8d95c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_UnityTextOverflowPositionProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityTextOverflowPositionProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_UnityTextOverflowPositionProperty(ResolvedStyleAccessPropertyBag_UnityTextOverflowPositionProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_UnityTextOverflowPositionProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_UnityTextOverflowPositionProperty(ResolvedStyleAccessPropertyBag_UnityTextOverflowPositionProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4919 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextOverflowPositionProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedEnumProperty`1<TValue>, UnityEngine.UIElements.Visibility
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/VisibilityProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_VisibilityProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<::UnityEngine::UIElements::Visibility> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8db18, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Visibility GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_VisibilityProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8dbc0, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::Visibility value);

  /// @brief Method .ctor, addr 0x6c86904, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8db10, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8da88, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8dacc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_VisibilityProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_VisibilityProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_VisibilityProperty(ResolvedStyleAccessPropertyBag_VisibilityProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_VisibilityProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_VisibilityProperty(ResolvedStyleAccessPropertyBag_VisibilityProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4920 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_VisibilityProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedEnumProperty`1<TValue>, UnityEngine.UIElements.WhiteSpace
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/WhiteSpaceProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_WhiteSpaceProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<::UnityEngine::UIElements::WhiteSpace> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8dc88, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::WhiteSpace GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_WhiteSpaceProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8dd30, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::UnityEngine::UIElements::WhiteSpace value);

  /// @brief Method .ctor, addr 0x6c86940, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8dc80, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8dbf8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8dc3c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_WhiteSpaceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_WhiteSpaceProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_WhiteSpaceProperty(ResolvedStyleAccessPropertyBag_WhiteSpaceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_WhiteSpaceProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_WhiteSpaceProperty(ResolvedStyleAccessPropertyBag_WhiteSpaceProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4921 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_WhiteSpaceProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/WidthProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_WidthProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8ddf8, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_WidthProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8dea0, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c8697c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8ddf0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8dd68, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8ddac, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_WidthProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_WidthProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_WidthProperty(ResolvedStyleAccessPropertyBag_WidthProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_WidthProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_WidthProperty(ResolvedStyleAccessPropertyBag_WidthProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4922 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_WidthProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ResolvedStyleAccessPropertyBag::ResolvedFloatProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag/WordSpacingProperty
class CORDL_TYPE ResolvedStyleAccessPropertyBag_WordSpacingProperty : public ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ussName)) ::StringW ussName;

  /// @brief Method GetValue, addr 0x6c8df68, size 0xa8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_WordSpacingProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c8e010, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, float_t value);

  /// @brief Method .ctor, addr 0x6c869b8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c8df60, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c8ded8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ussName, addr 0x6c8df1c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ussName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag_WordSpacingProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_WordSpacingProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag_WordSpacingProperty(ResolvedStyleAccessPropertyBag_WordSpacingProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag_WordSpacingProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag_WordSpacingProperty(ResolvedStyleAccessPropertyBag_WordSpacingProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4923 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_WordSpacingProperty) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.PropertyBag`1<TContainer>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag
class CORDL_TYPE ResolvedStyleAccessPropertyBag : public ::Unity::Properties::PropertyBag_1<::UnityEngine::UIElements::ResolvedStyleAccess*> {
public:
  // Declarations
  using AlignContentProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_AlignContentProperty;

  using AlignItemsProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_AlignItemsProperty;

  using AlignSelfProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_AlignSelfProperty;

  using BackgroundColorProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundColorProperty;

  using BackgroundImageProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundImageProperty;

  using BackgroundPositionXProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundPositionXProperty;

  using BackgroundPositionYProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundPositionYProperty;

  using BackgroundRepeatProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundRepeatProperty;

  using BackgroundSizeProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BackgroundSizeProperty;

  using BorderBottomColorProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomColorProperty;

  using BorderBottomLeftRadiusProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomLeftRadiusProperty;

  using BorderBottomRightRadiusProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomRightRadiusProperty;

  using BorderBottomWidthProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderBottomWidthProperty;

  using BorderLeftColorProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderLeftColorProperty;

  using BorderLeftWidthProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderLeftWidthProperty;

  using BorderRightColorProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderRightColorProperty;

  using BorderRightWidthProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderRightWidthProperty;

  using BorderTopColorProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopColorProperty;

  using BorderTopLeftRadiusProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopLeftRadiusProperty;

  using BorderTopRightRadiusProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopRightRadiusProperty;

  using BorderTopWidthProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BorderTopWidthProperty;

  using BottomProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_BottomProperty;

  using ColorProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ColorProperty;

  using DisplayProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_DisplayProperty;

  using FlexBasisProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexBasisProperty;

  using FlexDirectionProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexDirectionProperty;

  using FlexGrowProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexGrowProperty;

  using FlexShrinkProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexShrinkProperty;

  using FlexWrapProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FlexWrapProperty;

  using FontSizeProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_FontSizeProperty;

  using HeightProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_HeightProperty;

  using JustifyContentProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_JustifyContentProperty;

  using LeftProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_LeftProperty;

  using LetterSpacingProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_LetterSpacingProperty;

  using MarginBottomProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginBottomProperty;

  using MarginLeftProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginLeftProperty;

  using MarginRightProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginRightProperty;

  using MarginTopProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MarginTopProperty;

  using MaxHeightProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MaxHeightProperty;

  using MaxWidthProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MaxWidthProperty;

  using MinHeightProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MinHeightProperty;

  using MinWidthProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_MinWidthProperty;

  using OpacityProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_OpacityProperty;

  using PaddingBottomProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingBottomProperty;

  using PaddingLeftProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingLeftProperty;

  using PaddingRightProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingRightProperty;

  using PaddingTopProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PaddingTopProperty;

  using PositionProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_PositionProperty;

  using ResolvedBackgroundPositionProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundPositionProperty;

  using ResolvedBackgroundProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundProperty;

  using ResolvedBackgroundRepeatProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundRepeatProperty;

  using ResolvedBackgroundSizeProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedBackgroundSizeProperty;

  using ResolvedColorProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedColorProperty;

  template <typename TValue> using ResolvedEnumProperty_1 = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedEnumProperty_1<TValue>;

  using ResolvedFloatProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFloatProperty;

  using ResolvedFontDefinitionProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFontDefinitionProperty;

  using ResolvedFontProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedFontProperty;

  using ResolvedIntProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedIntProperty;

  template <typename T> using ResolvedListProperty_1 = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedListProperty_1<T>;

  using ResolvedRotateProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedRotateProperty;

  using ResolvedScaleProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedScaleProperty;

  using ResolvedStyleFloatProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleFloatProperty;

  template <typename TValue> using ResolvedStyleProperty_1 = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<TValue>;

  using ResolvedVector3Property = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedVector3Property;

  using RightProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_RightProperty;

  using RotateProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_RotateProperty;

  using ScaleProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ScaleProperty;

  using TextOverflowProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TextOverflowProperty;

  using TopProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TopProperty;

  using TransformOriginProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransformOriginProperty;

  using TransitionDelayProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionDelayProperty;

  using TransitionDurationProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionDurationProperty;

  using TransitionPropertyProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionPropertyProperty;

  using TransitionTimingFunctionProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TransitionTimingFunctionProperty;

  using TranslateProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_TranslateProperty;

  using UnityBackgroundImageTintColorProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty;

  using UnityEditorTextRenderingModeProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty;

  using UnityFontDefinitionProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityFontDefinitionProperty;

  using UnityFontProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityFontProperty;

  using UnityFontStyleAndWeightProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityFontStyleAndWeightProperty;

  using UnityParagraphSpacingProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityParagraphSpacingProperty;

  using UnitySliceBottomProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceBottomProperty;

  using UnitySliceLeftProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceLeftProperty;

  using UnitySliceRightProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceRightProperty;

  using UnitySliceScaleProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceScaleProperty;

  using UnitySliceTopProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnitySliceTopProperty;

  using UnityTextAlignProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextAlignProperty;

  using UnityTextGeneratorProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextGeneratorProperty;

  using UnityTextOutlineColorProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextOutlineColorProperty;

  using UnityTextOutlineWidthProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextOutlineWidthProperty;

  using UnityTextOverflowPositionProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_UnityTextOverflowPositionProperty;

  using VisibilityProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_VisibilityProperty;

  using WhiteSpaceProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_WhiteSpaceProperty;

  using WidthProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_WidthProperty;

  using WordSpacingProperty = ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_WordSpacingProperty;

  /// @brief Field m_PropertiesHash, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PropertiesHash, put = __cordl_internal_set_m_PropertiesHash)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::Unity::Properties::IProperty_1<::UnityEngine::UIElements::ResolvedStyleAccess*>*>* m_PropertiesHash;

  /// @brief Field m_PropertiesList, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_PropertiesList,
      put = __cordl_internal_set_m_PropertiesList)) ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<::UnityEngine::UIElements::ResolvedStyleAccess*>*>* m_PropertiesList;

  /// @brief Convert operator to "::Unity::Properties::INamedProperties_1<::UnityEngine::UIElements::ResolvedStyleAccess*>"
  constexpr operator ::Unity::Properties::INamedProperties_1<::UnityEngine::UIElements::ResolvedStyleAccess*>*() noexcept;

  /// @brief Method AddProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline void AddProperty(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag_ResolvedStyleProperty_1<TValue>* property);

  /// @brief Method GetProperties, addr 0x6c869f4, size 0x64, virtual true, abstract: false, final false
  inline ::Unity::Properties::PropertyCollection_1<::UnityEngine::UIElements::ResolvedStyleAccess*> GetProperties();

  /// @brief Method GetProperties, addr 0x6c86a58, size 0x64, virtual true, abstract: false, final false
  inline ::Unity::Properties::PropertyCollection_1<::UnityEngine::UIElements::ResolvedStyleAccess*> GetProperties(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container);

  static inline ::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag* New_ctor();

  /// @brief Method TryGetProperty, addr 0x6c86abc, size 0x6c, virtual true, abstract: false, final true
  inline bool TryGetProperty(::by_ref<::UnityEngine::UIElements::ResolvedStyleAccess*> container, ::StringW name,
                             ::by_ref<::Unity::Properties::IProperty_1<::UnityEngine::UIElements::ResolvedStyleAccess*>*> property);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Unity::Properties::IProperty_1<::UnityEngine::UIElements::ResolvedStyleAccess*>*>* const&
  __cordl_internal_get_m_PropertiesHash() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Unity::Properties::IProperty_1<::UnityEngine::UIElements::ResolvedStyleAccess*>*>*& __cordl_internal_get_m_PropertiesHash();

  constexpr ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<::UnityEngine::UIElements::ResolvedStyleAccess*>*>* const& __cordl_internal_get_m_PropertiesList() const;

  constexpr ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<::UnityEngine::UIElements::ResolvedStyleAccess*>*>*& __cordl_internal_get_m_PropertiesList();

  constexpr void
  __cordl_internal_set_m_PropertiesHash(::System::Collections::Generic::Dictionary_2<::StringW, ::Unity::Properties::IProperty_1<::UnityEngine::UIElements::ResolvedStyleAccess*>*>* value);

  constexpr void __cordl_internal_set_m_PropertiesList(::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<::UnityEngine::UIElements::ResolvedStyleAccess*>*>* value);

  /// @brief Method .ctor, addr 0x6c837c4, size 0x1fac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Properties::INamedProperties_1<::UnityEngine::UIElements::ResolvedStyleAccess*>"
  constexpr ::Unity::Properties::INamedProperties_1<::UnityEngine::UIElements::ResolvedStyleAccess*>*
  i___Unity__Properties__INamedProperties_1___UnityEngine__UIElements__ResolvedStyleAccess__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolvedStyleAccessPropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolvedStyleAccessPropertyBag(ResolvedStyleAccessPropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolvedStyleAccessPropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolvedStyleAccessPropertyBag(ResolvedStyleAccessPropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4940 };

  /// @brief Field m_PropertiesList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<::UnityEngine::UIElements::ResolvedStyleAccess*>*>* ___m_PropertiesList;

  /// @brief Field m_PropertiesHash, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Unity::Properties::IProperty_1<::UnityEngine::UIElements::ResolvedStyleAccess*>*>* ___m_PropertiesHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag, ___m_PropertiesList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag, ___m_PropertiesHash) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::ResolvedStyleAccessPropertyBag) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
