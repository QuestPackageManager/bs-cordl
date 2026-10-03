#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__StyleValues_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNode_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__ComputedStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "UnityEngine/UIElements/zzzz__LanguageDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__PickingMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__PseudoStates_def.hpp"
#include "UnityEngine/UIElements/zzzz__RenderHints_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScheduledItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFlags_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElement)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
class Type;
}
namespace Unity::Properties {
struct PropertyPath;
}
namespace UnityEngine::UIElements::Experimental {
class ITransitionAnimations;
}
namespace UnityEngine::UIElements::Experimental {
class IValueAnimationUpdate;
}
namespace UnityEngine::UIElements::Experimental {
struct StyleValues;
}
namespace UnityEngine::UIElements::Experimental {
template <typename T> class ValueAnimation_1;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutMeasureMode;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutNode;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutSize;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyValue;
}
namespace UnityEngine::UIElements::UIR {
class RenderData;
}
namespace UnityEngine::UIElements {
struct Align;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
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
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
struct BindingId;
}
namespace UnityEngine::UIElements {
class Binding;
}
namespace UnityEngine::UIElements {
struct CallbackOptions;
}
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
template <typename T> struct CustomStyleProperty_1;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
struct DispatchMode;
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
class EventBase;
}
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
namespace UnityEngine::UIElements {
struct EventCategory;
}
namespace UnityEngine::UIElements {
struct FilterFunction;
}
namespace UnityEngine::UIElements {
struct FlexDirection;
}
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
namespace UnityEngine::UIElements {
class ICustomStyle;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class IExperimentalFeatures;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class IResolvedStyle;
}
namespace UnityEngine::UIElements {
class IStylePropertyAnimationSystem;
}
namespace UnityEngine::UIElements {
class IStylePropertyAnimations;
}
namespace UnityEngine::UIElements {
class IStyle;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduler;
}
namespace UnityEngine::UIElements {
class InlineStyleAccess;
}
namespace UnityEngine::UIElements {
struct Justify;
}
namespace UnityEngine::UIElements {
struct LanguageDirection;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct MaterialDefinition;
}
namespace UnityEngine::UIElements {
class PathRef;
}
namespace UnityEngine::UIElements {
struct PickingMode;
}
namespace UnityEngine::UIElements {
struct Position;
}
namespace UnityEngine::UIElements {
struct PseudoStates;
}
namespace UnityEngine::UIElements {
struct Ratio;
}
namespace UnityEngine::UIElements {
struct RenderHints;
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
struct SliceType;
}
namespace UnityEngine::UIElements {
struct StyleFloat;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleValueType;
}
namespace UnityEngine::UIElements {
class StyleVariableContext;
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
class TimerEventScheduler;
}
namespace UnityEngine::UIElements {
struct TimerState;
}
namespace UnityEngine::UIElements {
class TooltipEvent;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine::UIElements {
struct UsageHints;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlAssetAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
struct Visibility;
}
namespace UnityEngine::UIElements {
class VisualElementAnimationSystem;
}
namespace UnityEngine::UIElements {
struct VisualElementFlags;
}
namespace UnityEngine::UIElements {
struct VisualElementStyleSheetSet;
}
namespace UnityEngine::UIElements {
class VisualElement_BaseVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class VisualElement_CustomStyleAccess;
}
namespace UnityEngine::UIElements {
struct VisualElement_Hierarchy;
}
namespace UnityEngine::UIElements {
struct VisualElement_MeasureMode;
}
namespace UnityEngine::UIElements {
class VisualElement_SimpleScheduledItem;
}
namespace UnityEngine::UIElements {
class VisualElement_TimerStateScheduledItem;
}
namespace UnityEngine::UIElements {
class VisualElement_TypeData;
}
namespace UnityEngine::UIElements {
class VisualElement_UxmlFactory;
}
namespace UnityEngine::UIElements {
class VisualElement_UxmlTraits;
}
namespace UnityEngine::UIElements {
template <typename ActionType> class VisualElement_VisualElementScheduledItem_1;
}
namespace UnityEngine::UIElements {
class VisualElement___c__DisplayClass562_0;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
namespace UnityEngine::UIElements {
struct WhiteSpace;
}
namespace UnityEngine::UIElements {
struct Wrap;
}
namespace UnityEngine {
struct Bounds;
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
struct Matrix4x4;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct PropertyName;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct TextGeneratorType;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct VisualElement_MeasureMode;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class VisualElement_BaseVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class VisualElement_CustomStyleAccess;
}
namespace UnityEngine::UIElements {
class VisualElement_SimpleScheduledItem;
}
namespace UnityEngine::UIElements {
class VisualElement_TimerStateScheduledItem;
}
namespace UnityEngine::UIElements {
class VisualElement_TypeData;
}
namespace UnityEngine::UIElements {
class VisualElement_UxmlFactory;
}
namespace UnityEngine::UIElements {
class VisualElement_UxmlTraits;
}
namespace UnityEngine::UIElements {
template <typename ActionType> class VisualElement_VisualElementScheduledItem_1;
}
namespace UnityEngine::UIElements {
class VisualElement___c__DisplayClass562_0;
}
namespace UnityEngine::UIElements {
struct VisualElement_Hierarchy;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::VisualElement_MeasureMode);
MARK_REF_T(::UnityEngine::UIElements::VisualElement*);
MARK_REF_T(::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem*);
MARK_REF_T(::UnityEngine::UIElements::VisualElement_CustomStyleAccess*);
MARK_REF_T(::UnityEngine::UIElements::VisualElement_SimpleScheduledItem*);
MARK_REF_T(::UnityEngine::UIElements::VisualElement_TimerStateScheduledItem*);
MARK_REF_T(::UnityEngine::UIElements::VisualElement_TypeData*);
MARK_REF_T(::UnityEngine::UIElements::VisualElement_UxmlFactory*);
MARK_REF_T(::UnityEngine::UIElements::VisualElement_UxmlTraits*);
MARK_GEN_REF_T_PTR(::UnityEngine::UIElements::VisualElement_VisualElementScheduledItem_1);
MARK_REF_T(::UnityEngine::UIElements::VisualElement___c__DisplayClass562_0*);
MARK_VAL_T(::UnityEngine::UIElements::VisualElement_Hierarchy);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualElement_MeasureMode, "UnityEngine.UIElements", "VisualElement/MeasureMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualElement*, "UnityEngine.UIElements", "VisualElement");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem*, "UnityEngine.UIElements", "VisualElement/BaseVisualElementScheduledItem");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualElement_CustomStyleAccess*, "UnityEngine.UIElements", "VisualElement/CustomStyleAccess");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualElement_SimpleScheduledItem*, "UnityEngine.UIElements", "VisualElement/SimpleScheduledItem");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualElement_TimerStateScheduledItem*, "UnityEngine.UIElements", "VisualElement/TimerStateScheduledItem");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualElement_TypeData*, "UnityEngine.UIElements", "VisualElement/TypeData");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualElement_UxmlFactory*, "UnityEngine.UIElements", "VisualElement/UxmlFactory");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualElement_UxmlTraits*, "UnityEngine.UIElements", "VisualElement/UxmlTraits");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::UIElements::VisualElement_VisualElementScheduledItem_1, "UnityEngine.UIElements", "VisualElement/VisualElementScheduledItem`1");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualElement___c__DisplayClass562_0*, "UnityEngine.UIElements", "VisualElement/<>c__DisplayClass562_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualElement_Hierarchy, "UnityEngine.UIElements", "VisualElement/Hierarchy");
// [Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElement/UxmlFactory
class CORDL_TYPE VisualElement_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::VisualElement_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x70e1c50, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_UxmlFactory", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement_UxmlFactory(VisualElement_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_UxmlFactory", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement_UxmlFactory(VisualElement_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4884 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::VisualElement_UxmlFactory) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
// Dependencies UnityEngine.UIElements.UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElement/UxmlTraits
class CORDL_TYPE VisualElement_UxmlTraits : public ::UnityEngine::UIElements::UxmlTraits {
public:
  // Declarations
  /// @brief Field <focusIndex>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__focusIndex_k__BackingField,
                      put = __cordl_internal_set__focusIndex_k__BackingField)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* _focusIndex_k__BackingField;

  /// @brief Field <focusable>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__focusable_k__BackingField,
                      put = __cordl_internal_set__focusable_k__BackingField)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* _focusable_k__BackingField;

  __declspec(property(get = get_focusIndex)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* focusIndex;

  __declspec(property(get = get_focusable)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* focusable;

  /// @brief Field m_Class, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Class, put = __cordl_internal_set_m_Class)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Class;

  /// @brief Field m_ContentContainer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentContainer, put = __cordl_internal_set_m_ContentContainer)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_ContentContainer;

  /// @brief Field m_DataSource, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DataSource,
                      put = __cordl_internal_set_m_DataSource)) ::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::Object>>* m_DataSource;

  /// @brief Field m_DataSourcePath, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DataSourcePath, put = __cordl_internal_set_m_DataSourcePath)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_DataSourcePath;

  /// @brief Field m_EnabledSelf, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EnabledSelf, put = __cordl_internal_set_m_EnabledSelf)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_EnabledSelf;

  /// @brief Field m_Name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Name;

  /// @brief Field m_PickingMode, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PickingMode,
                      put = __cordl_internal_set_m_PickingMode)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::PickingMode>* m_PickingMode;

  /// @brief Field m_Style, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Style, put = __cordl_internal_set_m_Style)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Style;

  /// @brief Field m_TabIndex, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TabIndex, put = __cordl_internal_set_m_TabIndex)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_TabIndex;

  /// @brief Field m_Tooltip, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Tooltip, put = __cordl_internal_set_m_Tooltip)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Tooltip;

  /// @brief Field m_UsageHints, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UsageHints,
                      put = __cordl_internal_set_m_UsageHints)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::UsageHints>* m_UsageHints;

  /// @brief Field m_ViewDataKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ViewDataKey, put = __cordl_internal_set_m_ViewDataKey)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_ViewDataKey;

  /// @brief Method Init, addr 0x70e1cc8, size 0x3d0, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::VisualElement_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& __cordl_internal_get__focusIndex_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get__focusIndex_k__BackingField();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get__focusable_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get__focusable_k__BackingField();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Class() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Class();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_ContentContainer() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_ContentContainer();

  constexpr ::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_DataSource() const;

  constexpr ::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_DataSource();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_DataSourcePath() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_DataSourcePath();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_EnabledSelf() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_EnabledSelf();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Name() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Name();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::PickingMode>* const& __cordl_internal_get_m_PickingMode() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::PickingMode>*& __cordl_internal_get_m_PickingMode();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Style() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Style();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& __cordl_internal_get_m_TabIndex() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_TabIndex();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Tooltip() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Tooltip();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::UsageHints>* const& __cordl_internal_get_m_UsageHints() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::UsageHints>*& __cordl_internal_get_m_UsageHints();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_ViewDataKey() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_ViewDataKey();

  constexpr void __cordl_internal_set__focusIndex_k__BackingField(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set__focusable_k__BackingField(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Class(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ContentContainer(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_DataSource(::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::Object>>* value);

  constexpr void __cordl_internal_set_m_DataSourcePath(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_EnabledSelf(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Name(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_PickingMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::PickingMode>* value);

  constexpr void __cordl_internal_set_m_Style(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_TabIndex(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Tooltip(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_UsageHints(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::UsageHints>* value);

  constexpr void __cordl_internal_set_m_ViewDataKey(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x70e2098, size 0x5a8, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_focusIndex, addr 0x70e1cb8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UxmlIntAttributeDescription* get_focusIndex();

  /// [CompilerGenerated]
  /// @brief Method get_focusable, addr 0x70e1cc0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UxmlBoolAttributeDescription* get_focusable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_UxmlTraits", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement_UxmlTraits(VisualElement_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_UxmlTraits", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement_UxmlTraits(VisualElement_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4885 };

  /// @brief Field m_Name, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Name;

  /// @brief Field m_EnabledSelf, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_EnabledSelf;

  /// @brief Field m_ViewDataKey, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_ViewDataKey;

  /// @brief Field m_PickingMode, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::PickingMode>* ___m_PickingMode;

  /// @brief Field m_Tooltip, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Tooltip;

  /// @brief Field m_UsageHints, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::UsageHints>* ___m_UsageHints;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <focusIndex>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ____focusIndex_k__BackingField;

  /// @brief Field m_TabIndex, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_TabIndex;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <focusable>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ____focusable_k__BackingField;

  /// @brief Field m_Class, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Class;

  /// @brief Field m_ContentContainer, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_ContentContainer;

  /// @brief Field m_Style, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Style;

  /// @brief Field m_DataSource, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::Object>>* ___m_DataSource;

  /// @brief Field m_DataSourcePath, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_DataSourcePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_Name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_EnabledSelf) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_ViewDataKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_PickingMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_Tooltip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_UsageHints) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ____focusIndex_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_TabIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ____focusable_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_Class) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_ContentContainer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_Style) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_DataSource) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_DataSourcePath) == 0x80, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualElement_UxmlTraits) == 0x88, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualElement/MeasureMode
struct CORDL_TYPE VisualElement_MeasureMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VisualElement_MeasureMode_Unwrapped
  enum struct __VisualElement_MeasureMode_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_Exactly = static_cast<int32_t>(0x1),
    __E_AtMost = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VisualElement_MeasureMode_Unwrapped() const noexcept {
    return static_cast<__VisualElement_MeasureMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_MeasureMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr VisualElement_MeasureMode(int32_t value__) noexcept;

  /// @brief Field AtMost value: I32(2)
  static ::UnityEngine::UIElements::VisualElement_MeasureMode const AtMost;

  /// @brief Field Exactly value: I32(1)
  static ::UnityEngine::UIElements::VisualElement_MeasureMode const Exactly;

  /// @brief Field Undefined value: I32(0)
  static ::UnityEngine::UIElements::VisualElement_MeasureMode const Undefined;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4886 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElement_MeasureMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualElement_MeasureMode) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [DefaultMember("Item")]
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualElement/Hierarchy
struct CORDL_TYPE VisualElement_Hierarchy {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::UnityEngine::UIElements::VisualElement* Item[];

  __declspec(property(get = get_childCount)) int32_t childCount;

  __declspec(property(get = get_children)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* children;

  __declspec(property(get = get_parent)) ::UnityEngine::UIElements::VisualElement* parent;

  /// @brief Method Add, addr 0x70e2678, size 0x78, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method BringToFront, addr 0x70e36d8, size 0xdc, virtual false, abstract: false, final false
  inline void BringToFront(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method Children, addr 0x70e3ba4, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualElement*>* Children();

  /// @brief Method Clear, addr 0x70e32a8, size 0x430, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ElementAt, addr 0x70e3ba0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* ElementAt(int32_t index);

  /// @brief Method Equals, addr 0x70e3bd8, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x70e3bbc, size 0x10, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::UIElements::VisualElement_Hierarchy other);

  /// @brief Method GetHashCode, addr 0x70e3c54, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IndexOf, addr 0x70e3b1c, size 0x84, virtual false, abstract: false, final false
  inline int32_t IndexOf(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method Insert, addr 0x70e2748, size 0x384, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method MoveChildElement, addr 0x70e37b4, size 0x138, virtual false, abstract: false, final false
  inline void MoveChildElement(::UnityEngine::UIElements::VisualElement* child, int32_t currentIndex, int32_t nextIndex);

  /// @brief Method PlaceBehind, addr 0x70e39ac, size 0x104, virtual false, abstract: false, final false
  inline void PlaceBehind(::UnityEngine::UIElements::VisualElement* child, ::UnityEngine::UIElements::VisualElement* over);

  /// @brief Method PutChildAtIndex, addr 0x70e2acc, size 0x174, virtual false, abstract: false, final false
  inline void PutChildAtIndex(::UnityEngine::UIElements::VisualElement* child, int32_t index);

  /// @brief Method ReleaseChildList, addr 0x70e31cc, size 0xdc, virtual false, abstract: false, final false
  inline void ReleaseChildList();

  /// @brief Method Remove, addr 0x70e2d24, size 0x110, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method RemoveAt, addr 0x70e2e34, size 0x314, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveChildAtIndex, addr 0x70e3148, size 0x84, virtual false, abstract: false, final false
  inline void RemoveChildAtIndex(int32_t index);

  /// @brief Method SendToBack, addr 0x70e38ec, size 0xc0, virtual false, abstract: false, final false
  inline void SendToBack(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method SetParent, addr 0x70e2c40, size 0xe4, virtual false, abstract: false, final false
  inline void SetParent(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x70e2670, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method get_Item, addr 0x70e3ab0, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_Item(int32_t key);

  /// @brief Method get_childCount, addr 0x70e26f0, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_childCount();

  /// @brief Method get_children, addr 0x70e2658, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* get_children();

  /// @brief Method get_parent, addr 0x70e2640, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_parent();

  /// @brief Method op_Equality, addr 0x70e3bcc, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::VisualElement_Hierarchy x, ::UnityEngine::UIElements::VisualElement_Hierarchy y);

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_Hierarchy();

  // Ctor Parameters [CppParam { name: "m_Owner", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None, comment: None }]
  constexpr VisualElement_Hierarchy(::UnityEngine::UIElements::VisualElement* m_Owner) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4887 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field k_InvalidHierarchyChangeMsg offset 0xffffffff size 0x8
  static constexpr ::ConstString k_InvalidHierarchyChangeMsg{ u"Cannot modify VisualElement hierarchy during layout calculation" };

  /// @brief Field m_Owner, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* m_Owner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElement_Hierarchy, m_Owner) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualElement_Hierarchy) == 0x8, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ScheduledItem
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem
class CORDL_TYPE VisualElement_BaseVisualElementScheduledItem : public ::UnityEngine::UIElements::ScheduledItem {
public:
  // Declarations
  /// @brief Field <element>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__element_k__BackingField, put = __cordl_internal_set__element_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _element_k__BackingField;

  /// @brief Field <isActive>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__isActive_k__BackingField, put = __cordl_internal_set__isActive_k__BackingField)) bool _isActive_k__BackingField;

  /// @brief Field <isDetaching>k__BackingField, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get__isDetaching_k__BackingField, put = __cordl_internal_set__isDetaching_k__BackingField)) bool _isDetaching_k__BackingField;

  __declspec(property(get = get_element, put = set_element)) ::UnityEngine::UIElements::VisualElement* element;

  __declspec(property(get = get_isActive, put = set_isActive)) bool isActive;

  __declspec(property(get = get_isDetaching, put = set_isDetaching)) bool isDetaching;

  __declspec(property(get = get_isScheduled)) bool isScheduled;

  /// @brief Field m_OnAttachToPanelCallback, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnAttachToPanelCallback,
                      put = __cordl_internal_set_m_OnAttachToPanelCallback)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::AttachToPanelEvent*>* m_OnAttachToPanelCallback;

  /// @brief Field m_OnDetachFromPanelCallback, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnDetachFromPanelCallback,
                      put =
                          __cordl_internal_set_m_OnDetachFromPanelCallback)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::DetachFromPanelEvent*>* m_OnDetachFromPanelCallback;

  /// @brief Field scheduler, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_scheduler, put = __cordl_internal_set_scheduler)) ::UnityEngine::UIElements::TimerEventScheduler* scheduler;

  /// @brief Convert operator to "::UnityEngine::UIElements::IVisualElementScheduledItem"
  constexpr operator ::UnityEngine::UIElements::IVisualElementScheduledItem*() noexcept;

  /// @brief Method CanBeActivated, addr 0x70e3fa0, size 0x34, virtual false, abstract: false, final false
  inline bool CanBeActivated();

  /// @brief Method Every, addr 0x70e41b8, size 0xc0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* Every(int64_t intervalMs);

  /// @brief Method ExecuteLater, addr 0x70e42a0, size 0x48, virtual true, abstract: false, final true
  inline void ExecuteLater(int64_t delayMs);

  static inline ::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem* New_ctor(::UnityEngine::UIElements::VisualElement* handler);

  /// @brief Method OnElementAttachToPanelCallback, addr 0x70e4050, size 0x74, virtual false, abstract: false, final false
  inline void OnElementAttachToPanelCallback(::UnityEngine::UIElements::AttachToPanelEvent* evt);

  /// @brief Method OnElementDetachFromPanelCallback, addr 0x70e40c4, size 0x74, virtual false, abstract: false, final false
  inline void OnElementDetachFromPanelCallback(::UnityEngine::UIElements::DetachFromPanelEvent* evt);

  /// @brief Method OnItemUnscheduled, addr 0x70e4278, size 0x18, virtual true, abstract: false, final false
  inline void OnItemUnscheduled();

  /// @brief Method OnPanelActivate, addr 0x70e3fd4, size 0x60, virtual false, abstract: false, final false
  inline void OnPanelActivate();

  /// @brief Method OnPanelDeactivate, addr 0x70e4034, size 0x1c, virtual false, abstract: false, final false
  inline void OnPanelDeactivate();

  /// @brief Method Pause, addr 0x70e4298, size 0x8, virtual true, abstract: false, final true
  inline void Pause();

  /// @brief Method Resume, addr 0x70e4290, size 0x8, virtual true, abstract: false, final true
  inline void Resume();

  /// @brief Method SendActivation, addr 0x70e3f20, size 0x38, virtual false, abstract: false, final false
  inline void SendActivation();

  /// @brief Method SendDeactivation, addr 0x70e3f58, size 0x48, virtual false, abstract: false, final false
  inline void SendDeactivation();

  /// @brief Method SetActive, addr 0x70e3de0, size 0x140, virtual false, abstract: false, final false
  inline void SetActive(bool action);

  /// @brief Method StartingIn, addr 0x70e4138, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* StartingIn(int64_t delayMs);

  /// @brief Method Until, addr 0x70e4140, size 0x78, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* Until(::System::Func_1<bool>* stopCondition);

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__element_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__element_k__BackingField();

  constexpr bool const& __cordl_internal_get__isActive_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isActive_k__BackingField();

  constexpr bool const& __cordl_internal_get__isDetaching_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isDetaching_k__BackingField();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::AttachToPanelEvent*>* const& __cordl_internal_get_m_OnAttachToPanelCallback() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::AttachToPanelEvent*>*& __cordl_internal_get_m_OnAttachToPanelCallback();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::DetachFromPanelEvent*>* const& __cordl_internal_get_m_OnDetachFromPanelCallback() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::DetachFromPanelEvent*>*& __cordl_internal_get_m_OnDetachFromPanelCallback();

  constexpr ::UnityEngine::UIElements::TimerEventScheduler* const& __cordl_internal_get_scheduler() const;

  constexpr ::UnityEngine::UIElements::TimerEventScheduler*& __cordl_internal_get_scheduler();

  constexpr void __cordl_internal_set__element_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set__isActive_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isDetaching_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_OnAttachToPanelCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::AttachToPanelEvent*>* value);

  constexpr void __cordl_internal_set_m_OnDetachFromPanelCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::DetachFromPanelEvent*>* value);

  constexpr void __cordl_internal_set_scheduler(::UnityEngine::UIElements::TimerEventScheduler* value);

  /// @brief Method .ctor, addr 0x70e3cac, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* handler);

  /// [CompilerGenerated]
  /// @brief Method get_element, addr 0x70e3c6c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::VisualElement* get_element();

  /// [CompilerGenerated]
  /// @brief Method get_isActive, addr 0x70e3c8c, size 0x8, virtual true, abstract: false, final true
  inline bool get_isActive();

  /// [CompilerGenerated]
  /// @brief Method get_isDetaching, addr 0x70e3c9c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDetaching();

  /// @brief Method get_isScheduled, addr 0x70e3c7c, size 0x10, virtual false, abstract: false, final false
  inline bool get_isScheduled();

  /// @brief Convert to "::UnityEngine::UIElements::IVisualElementScheduledItem"
  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* i___UnityEngine__UIElements__IVisualElementScheduledItem() noexcept;

  /// [CompilerGenerated]
  /// @brief Method set_element, addr 0x70e3c74, size 0x8, virtual false, abstract: false, final false
  inline void set_element(::UnityEngine::UIElements::VisualElement* value);

  /// [CompilerGenerated]
  /// @brief Method set_isActive, addr 0x70e3c94, size 0x8, virtual false, abstract: false, final false
  inline void set_isActive(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_isDetaching, addr 0x70e3ca4, size 0x8, virtual false, abstract: false, final false
  inline void set_isDetaching(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_BaseVisualElementScheduledItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_BaseVisualElementScheduledItem", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement_BaseVisualElementScheduledItem(VisualElement_BaseVisualElementScheduledItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_BaseVisualElementScheduledItem", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement_BaseVisualElementScheduledItem(VisualElement_BaseVisualElementScheduledItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4888 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <element>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____element_k__BackingField;

  /// @brief Field scheduler, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::TimerEventScheduler* ___scheduler;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <isActive>k__BackingField, offset: 0x48, size: 0x1, def value: None
  bool ____isActive_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <isDetaching>k__BackingField, offset: 0x49, size: 0x1, def value: None
  bool ____isDetaching_k__BackingField;

  /// @brief Field m_OnAttachToPanelCallback, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::AttachToPanelEvent*>* ___m_OnAttachToPanelCallback;

  /// @brief Field m_OnDetachFromPanelCallback, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::DetachFromPanelEvent*>* ___m_OnDetachFromPanelCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem, ____element_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem, ___scheduler) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem, ____isActive_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem, ____isDetaching_k__BackingField) == 0x49, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem, ___m_OnAttachToPanelCallback) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem, ___m_OnDetachFromPanelCallback) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem) == 0x60, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.VisualElement::BaseVisualElementScheduledItem
namespace UnityEngine::UIElements {
// cpp template
template <typename ActionType>
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<ActionType>
class CORDL_TYPE VisualElement_VisualElementScheduledItem_1 : public ::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem {
public:
  // Declarations
  /// @brief Field updateEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_updateEvent, put = __cordl_internal_set_updateEvent)) ActionType updateEvent;

  static inline ::UnityEngine::UIElements::VisualElement_VisualElementScheduledItem_1<ActionType>* New_ctor(::UnityEngine::UIElements::VisualElement* handler, ActionType upEvent);

  constexpr ActionType const& __cordl_internal_get_updateEvent() const;

  constexpr ActionType& __cordl_internal_get_updateEvent();

  constexpr void __cordl_internal_set_updateEvent(ActionType value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* handler, ActionType upEvent);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_VisualElementScheduledItem_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_VisualElementScheduledItem_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement_VisualElementScheduledItem_1(VisualElement_VisualElementScheduledItem_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_VisualElementScheduledItem_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement_VisualElementScheduledItem_1(VisualElement_VisualElementScheduledItem_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4889 };

  /// @brief Field updateEvent, offset: 0x60, size: 0x8, def value: None
  ActionType ___updateEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.VisualElement::VisualElementScheduledItem`1<ActionType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElement/TimerStateScheduledItem
class CORDL_TYPE VisualElement_TimerStateScheduledItem : public ::UnityEngine::UIElements::VisualElement_VisualElementScheduledItem_1<::System::Action_1<::UnityEngine::UIElements::TimerState>*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::VisualElement_TimerStateScheduledItem* New_ctor(::UnityEngine::UIElements::VisualElement* handler,
                                                                                           ::System::Action_1<::UnityEngine::UIElements::TimerState>* updateEvent);

  /// @brief Method PerformTimerUpdate, addr 0x70e4348, size 0x2c, virtual true, abstract: false, final false
  inline void PerformTimerUpdate(::UnityEngine::UIElements::TimerState state);

  /// @brief Method .ctor, addr 0x70e42e8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* handler, ::System::Action_1<::UnityEngine::UIElements::TimerState>* updateEvent);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_TimerStateScheduledItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_TimerStateScheduledItem", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement_TimerStateScheduledItem(VisualElement_TimerStateScheduledItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_TimerStateScheduledItem", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement_TimerStateScheduledItem(VisualElement_TimerStateScheduledItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4890 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::VisualElement_TimerStateScheduledItem) == 0x68, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.VisualElement::VisualElementScheduledItem`1<ActionType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElement/SimpleScheduledItem
class CORDL_TYPE VisualElement_SimpleScheduledItem : public ::UnityEngine::UIElements::VisualElement_VisualElementScheduledItem_1<::System::Action*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::VisualElement_SimpleScheduledItem* New_ctor(::UnityEngine::UIElements::VisualElement* handler, ::System::Action* updateEvent);

  /// @brief Method PerformTimerUpdate, addr 0x70e43d4, size 0x2c, virtual true, abstract: false, final false
  inline void PerformTimerUpdate(::UnityEngine::UIElements::TimerState state);

  /// @brief Method .ctor, addr 0x70e4374, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* handler, ::System::Action* updateEvent);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_SimpleScheduledItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_SimpleScheduledItem", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement_SimpleScheduledItem(VisualElement_SimpleScheduledItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_SimpleScheduledItem", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement_SimpleScheduledItem(VisualElement_SimpleScheduledItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4891 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::VisualElement_SimpleScheduledItem) == 0x68, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElement/CustomStyleAccess
class CORDL_TYPE VisualElement_CustomStyleAccess : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_CustomProperties, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_CustomProperties,
      put = __cordl_internal_set_m_CustomProperties)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* m_CustomProperties;

  /// @brief Field m_DpiScaling, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DpiScaling, put = __cordl_internal_set_m_DpiScaling)) float_t m_DpiScaling;

  /// @brief Convert operator to "::UnityEngine::UIElements::ICustomStyle"
  constexpr operator ::UnityEngine::UIElements::ICustomStyle*() noexcept;

  /// @brief Method LogCustomPropertyWarning, addr 0x70e4708, size 0x110, virtual false, abstract: false, final false
  static inline void LogCustomPropertyWarning(::StringW propertyName, ::UnityEngine::UIElements::StyleValueType valueType, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue customProp);

  static inline ::UnityEngine::UIElements::VisualElement_CustomStyleAccess* New_ctor();

  /// @brief Method SetContext, addr 0x70e4400, size 0xc, virtual false, abstract: false, final false
  inline void SetContext(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* customProperties, float_t dpiScaling);

  /// @brief Method TryGetValue, addr 0x70e4b54, size 0xc0, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::StringW> property, ::by_ref<::StringW> value);

  /// @brief Method TryGetValue, addr 0x70e4620, size 0xe8, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> property, ::by_ref<::UnityEngine::Color> value);

  /// @brief Method TryGetValue, addr 0x70e492c, size 0x114, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Sprite>> property, ::by_ref<::UnityEngine::Sprite*> value);

  /// @brief Method TryGetValue, addr 0x70e4818, size 0x114, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Texture2D>> property, ::by_ref<::UnityEngine::Texture2D*> value);

  /// @brief Method TryGetValue, addr 0x70e4a40, size 0x114, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::UIElements::VectorImage>> property, ::by_ref<::UnityEngine::UIElements::VectorImage*> value);

  /// @brief Method TryGetValue, addr 0x70e440c, size 0xa4, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> property, ::by_ref<float_t> value);

  /// @brief Method TryGetValue, addr 0x70e4558, size 0xc8, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<int32_t> property, ::by_ref<int32_t> value);

  /// @brief Method TryGetValue, addr 0x70e44b0, size 0xa8, virtual false, abstract: false, final false
  inline bool TryGetValue(::StringW propertyName, ::UnityEngine::UIElements::StyleValueType valueType, ::by_ref<::UnityEngine::UIElements::StyleSheets::StylePropertyValue> customProp);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* const& __cordl_internal_get_m_CustomProperties() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*& __cordl_internal_get_m_CustomProperties();

  constexpr float_t const& __cordl_internal_get_m_DpiScaling() const;

  constexpr float_t& __cordl_internal_get_m_DpiScaling();

  constexpr void __cordl_internal_set_m_CustomProperties(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* value);

  constexpr void __cordl_internal_set_m_DpiScaling(float_t value);

  /// @brief Method .ctor, addr 0x70e4c14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::UIElements::ICustomStyle"
  constexpr ::UnityEngine::UIElements::ICustomStyle* i___UnityEngine__UIElements__ICustomStyle() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_CustomStyleAccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_CustomStyleAccess", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement_CustomStyleAccess(VisualElement_CustomStyleAccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_CustomStyleAccess", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement_CustomStyleAccess(VisualElement_CustomStyleAccess const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4892 };

  /// @brief Field m_CustomProperties, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* ___m_CustomProperties;

  /// @brief Field m_DpiScaling, offset: 0x18, size: 0x4, def value: None
  float_t ___m_DpiScaling;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElement_CustomStyleAccess, ___m_CustomProperties) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_CustomStyleAccess, ___m_DpiScaling) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualElement_CustomStyleAccess) == 0x20, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [VisibleToOtherModules(new[] { "UnityEditor.UIToolkitAuthoringModule" })]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElement/TypeData
class CORDL_TYPE VisualElement_TypeData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <type>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__type_k__BackingField, put = __cordl_internal_set__type_k__BackingField)) ::System::Type* _type_k__BackingField;

  __declspec(property(get = get_fullTypeName)) ::StringW fullTypeName;

  /// @brief Field m_FullTypeName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FullTypeName, put = __cordl_internal_set_m_FullTypeName)) ::StringW m_FullTypeName;

  /// @brief Field m_TypeName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TypeName, put = __cordl_internal_set_m_TypeName)) ::StringW m_TypeName;

  __declspec(property(get = get_type)) ::System::Type* type;

  __declspec(property(get = get_typeName)) ::StringW typeName;

  static inline ::UnityEngine::UIElements::VisualElement_TypeData* New_ctor(::System::Type* type);

  constexpr ::System::Type* const& __cordl_internal_get__type_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__type_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get_m_FullTypeName() const;

  constexpr ::StringW& __cordl_internal_get_m_FullTypeName();

  constexpr ::StringW const& __cordl_internal_get_m_TypeName() const;

  constexpr ::StringW& __cordl_internal_get_m_TypeName();

  constexpr void __cordl_internal_set__type_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set_m_FullTypeName(::StringW value);

  constexpr void __cordl_internal_set_m_TypeName(::StringW value);

  /// @brief Method .ctor, addr 0x70e4c20, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_fullTypeName, addr 0x70e4c3c, size 0x40, virtual false, abstract: false, final false
  inline ::StringW get_fullTypeName();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x70e4c18, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_type();

  /// @brief Method get_typeName, addr 0x70e4c7c, size 0x9c, virtual false, abstract: false, final false
  inline ::StringW get_typeName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_TypeData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_TypeData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement_TypeData(VisualElement_TypeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_TypeData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement_TypeData(VisualElement_TypeData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4893 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____type_k__BackingField;

  /// @brief Field m_FullTypeName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_FullTypeName;

  /// @brief Field m_TypeName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_TypeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElement_TypeData, ____type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_TypeData, ___m_FullTypeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_TypeData, ___m_TypeName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualElement_TypeData) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.UIElements.Experimental.StyleValues
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElement/<>c__DisplayClass562_0
class CORDL_TYPE VisualElement___c__DisplayClass562_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::UIElements::VisualElement* __4__this;

  /// @brief Field to, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_to, put = __cordl_internal_set_to)) ::UnityEngine::UIElements::Experimental::StyleValues to;

  static inline ::UnityEngine::UIElements::VisualElement___c__DisplayClass562_0* New_ctor();

  /// @brief Method <UnityEngine.UIElements.Experimental.ITransitionAnimations.Start>b__0, addr 0x70e4d1c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::StyleValues _UnityEngine_UIElements_Experimental_ITransitionAnimations_Start_b__0(::UnityEngine::UIElements::VisualElement* e);

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::UIElements::Experimental::StyleValues const& __cordl_internal_get_to() const;

  constexpr ::UnityEngine::UIElements::Experimental::StyleValues& __cordl_internal_get_to();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_to(::UnityEngine::UIElements::Experimental::StyleValues value);

  /// @brief Method .ctor, addr 0x70e4d18, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement___c__DisplayClass562_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement___c__DisplayClass562_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement___c__DisplayClass562_0(VisualElement___c__DisplayClass562_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement___c__DisplayClass562_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement___c__DisplayClass562_0(VisualElement___c__DisplayClass562_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4894 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* _____4__this;

  /// @brief Field to, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::Experimental::StyleValues ___to;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElement___c__DisplayClass562_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement___c__DisplayClass562_0, ___to) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualElement___c__DisplayClass562_0) == 0x20, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [DefaultMember("Item")]
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.Matrix4x4, UnityEngine.PropertyName, UnityEngine.Rect, UnityEngine.UIElements.BindingId, UnityEngine.UIElements.ComputedStyle,
// UnityEngine.UIElements.Focusable, UnityEngine.UIElements.LanguageDirection, UnityEngine.UIElements.Layout.LayoutNode, UnityEngine.UIElements.PickingMode, UnityEngine.UIElements.PseudoStates,
// UnityEngine.UIElements.RenderHints, UnityEngine.UIElements.VisualElement::Hierarchy, UnityEngine.UIElements.VisualElementFlags
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElement
class CORDL_TYPE VisualElement : public ::UnityEngine::UIElements::Focusable {
public:
  // Declarations
  using BaseVisualElementScheduledItem = ::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem;

  using CustomStyleAccess = ::UnityEngine::UIElements::VisualElement_CustomStyleAccess;

  using Hierarchy = ::UnityEngine::UIElements::VisualElement_Hierarchy;

  using MeasureMode = ::UnityEngine::UIElements::VisualElement_MeasureMode;

  using SimpleScheduledItem = ::UnityEngine::UIElements::VisualElement_SimpleScheduledItem;

  using TimerStateScheduledItem = ::UnityEngine::UIElements::VisualElement_TimerStateScheduledItem;

  using TypeData = ::UnityEngine::UIElements::VisualElement_TypeData;

  using UxmlFactory = ::UnityEngine::UIElements::VisualElement_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::VisualElement_UxmlTraits;

  template <typename ActionType> using VisualElementScheduledItem_1 = ::UnityEngine::UIElements::VisualElement_VisualElementScheduledItem_1<ActionType>;

  using __c__DisplayClass562_0 = ::UnityEngine::UIElements::VisualElement___c__DisplayClass562_0;

  __declspec(property(get = get_Item)) ::UnityEngine::UIElements::VisualElement* Item[];

  __declspec(property(
      get = UnityEngine_UIElements_IExperimentalFeatures_get_animation)) ::UnityEngine::UIElements::Experimental::ITransitionAnimations* UnityEngine_UIElements_IExperimentalFeatures_animation;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_alignContent)) ::UnityEngine::UIElements::Align UnityEngine_UIElements_IResolvedStyle_alignContent;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_alignItems)) ::UnityEngine::UIElements::Align UnityEngine_UIElements_IResolvedStyle_alignItems;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_alignSelf)) ::UnityEngine::UIElements::Align UnityEngine_UIElements_IResolvedStyle_alignSelf;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_aspectRatio)) ::UnityEngine::UIElements::Ratio UnityEngine_UIElements_IResolvedStyle_aspectRatio;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_backgroundColor)) ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_backgroundColor;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_backgroundImage)) ::UnityEngine::UIElements::Background UnityEngine_UIElements_IResolvedStyle_backgroundImage;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_backgroundPositionX)) ::UnityEngine::UIElements::BackgroundPosition UnityEngine_UIElements_IResolvedStyle_backgroundPositionX;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_backgroundPositionY)) ::UnityEngine::UIElements::BackgroundPosition UnityEngine_UIElements_IResolvedStyle_backgroundPositionY;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_backgroundRepeat)) ::UnityEngine::UIElements::BackgroundRepeat UnityEngine_UIElements_IResolvedStyle_backgroundRepeat;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_backgroundSize)) ::UnityEngine::UIElements::BackgroundSize UnityEngine_UIElements_IResolvedStyle_backgroundSize;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderBottomColor)) ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_borderBottomColor;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderBottomLeftRadius)) float_t UnityEngine_UIElements_IResolvedStyle_borderBottomLeftRadius;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderBottomRightRadius)) float_t UnityEngine_UIElements_IResolvedStyle_borderBottomRightRadius;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderBottomWidth)) float_t UnityEngine_UIElements_IResolvedStyle_borderBottomWidth;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderLeftColor)) ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_borderLeftColor;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderLeftWidth)) float_t UnityEngine_UIElements_IResolvedStyle_borderLeftWidth;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderRightColor)) ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_borderRightColor;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderRightWidth)) float_t UnityEngine_UIElements_IResolvedStyle_borderRightWidth;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderTopColor)) ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_borderTopColor;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderTopLeftRadius)) float_t UnityEngine_UIElements_IResolvedStyle_borderTopLeftRadius;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderTopRightRadius)) float_t UnityEngine_UIElements_IResolvedStyle_borderTopRightRadius;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderTopWidth)) float_t UnityEngine_UIElements_IResolvedStyle_borderTopWidth;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_bottom)) float_t UnityEngine_UIElements_IResolvedStyle_bottom;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_color)) ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_color;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_display)) ::UnityEngine::UIElements::DisplayStyle UnityEngine_UIElements_IResolvedStyle_display;

  __declspec(property(
      get = UnityEngine_UIElements_IResolvedStyle_get_filter)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::FilterFunction>* UnityEngine_UIElements_IResolvedStyle_filter;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_flexBasis)) ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_flexBasis;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_flexDirection)) ::UnityEngine::UIElements::FlexDirection UnityEngine_UIElements_IResolvedStyle_flexDirection;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_flexGrow)) float_t UnityEngine_UIElements_IResolvedStyle_flexGrow;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_flexShrink)) float_t UnityEngine_UIElements_IResolvedStyle_flexShrink;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_flexWrap)) ::UnityEngine::UIElements::Wrap UnityEngine_UIElements_IResolvedStyle_flexWrap;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_fontSize)) float_t UnityEngine_UIElements_IResolvedStyle_fontSize;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_height)) float_t UnityEngine_UIElements_IResolvedStyle_height;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_justifyContent)) ::UnityEngine::UIElements::Justify UnityEngine_UIElements_IResolvedStyle_justifyContent;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_left)) float_t UnityEngine_UIElements_IResolvedStyle_left;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_letterSpacing)) float_t UnityEngine_UIElements_IResolvedStyle_letterSpacing;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_marginBottom)) float_t UnityEngine_UIElements_IResolvedStyle_marginBottom;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_marginLeft)) float_t UnityEngine_UIElements_IResolvedStyle_marginLeft;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_marginRight)) float_t UnityEngine_UIElements_IResolvedStyle_marginRight;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_marginTop)) float_t UnityEngine_UIElements_IResolvedStyle_marginTop;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_maxHeight)) ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_maxHeight;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_maxWidth)) ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_maxWidth;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_minHeight)) ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_minHeight;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_minWidth)) ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_minWidth;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_opacity)) float_t UnityEngine_UIElements_IResolvedStyle_opacity;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_paddingBottom)) float_t UnityEngine_UIElements_IResolvedStyle_paddingBottom;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_paddingLeft)) float_t UnityEngine_UIElements_IResolvedStyle_paddingLeft;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_paddingRight)) float_t UnityEngine_UIElements_IResolvedStyle_paddingRight;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_paddingTop)) float_t UnityEngine_UIElements_IResolvedStyle_paddingTop;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_position)) ::UnityEngine::UIElements::Position UnityEngine_UIElements_IResolvedStyle_position;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_right)) float_t UnityEngine_UIElements_IResolvedStyle_right;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_rotate)) ::UnityEngine::UIElements::Rotate UnityEngine_UIElements_IResolvedStyle_rotate;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_scale)) ::UnityEngine::UIElements::Scale UnityEngine_UIElements_IResolvedStyle_scale;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_textOverflow)) ::UnityEngine::UIElements::TextOverflow UnityEngine_UIElements_IResolvedStyle_textOverflow;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_top)) float_t UnityEngine_UIElements_IResolvedStyle_top;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_transformOrigin)) ::UnityEngine::Vector3 UnityEngine_UIElements_IResolvedStyle_transformOrigin;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_transitionDelay)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TimeValue>*
      UnityEngine_UIElements_IResolvedStyle_transitionDelay;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_transitionDuration)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TimeValue>*
      UnityEngine_UIElements_IResolvedStyle_transitionDuration;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_transitionProperty)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>*
      UnityEngine_UIElements_IResolvedStyle_transitionProperty;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_transitionTimingFunction)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::EasingFunction>*
      UnityEngine_UIElements_IResolvedStyle_transitionTimingFunction;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_translate)) ::UnityEngine::Vector3 UnityEngine_UIElements_IResolvedStyle_translate;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unityBackgroundImageTintColor)) ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_unityBackgroundImageTintColor;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unityEditorTextRenderingMode)) ::UnityEngine::UIElements::EditorTextRenderingMode
      UnityEngine_UIElements_IResolvedStyle_unityEditorTextRenderingMode;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unityFont)) ::UnityW<::UnityEngine::Font> UnityEngine_UIElements_IResolvedStyle_unityFont;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unityFontDefinition)) ::UnityEngine::UIElements::FontDefinition UnityEngine_UIElements_IResolvedStyle_unityFontDefinition;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unityFontStyleAndWeight)) ::UnityEngine::FontStyle UnityEngine_UIElements_IResolvedStyle_unityFontStyleAndWeight;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unityMaterial)) ::UnityEngine::UIElements::MaterialDefinition UnityEngine_UIElements_IResolvedStyle_unityMaterial;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unityParagraphSpacing)) float_t UnityEngine_UIElements_IResolvedStyle_unityParagraphSpacing;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unitySliceBottom)) int32_t UnityEngine_UIElements_IResolvedStyle_unitySliceBottom;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unitySliceLeft)) int32_t UnityEngine_UIElements_IResolvedStyle_unitySliceLeft;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unitySliceRight)) int32_t UnityEngine_UIElements_IResolvedStyle_unitySliceRight;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unitySliceScale)) float_t UnityEngine_UIElements_IResolvedStyle_unitySliceScale;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unitySliceTop)) int32_t UnityEngine_UIElements_IResolvedStyle_unitySliceTop;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unitySliceType)) ::UnityEngine::UIElements::SliceType UnityEngine_UIElements_IResolvedStyle_unitySliceType;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unityTextAlign)) ::UnityEngine::TextAnchor UnityEngine_UIElements_IResolvedStyle_unityTextAlign;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unityTextGenerator)) ::UnityEngine::TextGeneratorType UnityEngine_UIElements_IResolvedStyle_unityTextGenerator;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unityTextOutlineColor)) ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_unityTextOutlineColor;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unityTextOutlineWidth)) float_t UnityEngine_UIElements_IResolvedStyle_unityTextOutlineWidth;

  __declspec(property(
      get = UnityEngine_UIElements_IResolvedStyle_get_unityTextOverflowPosition)) ::UnityEngine::UIElements::TextOverflowPosition UnityEngine_UIElements_IResolvedStyle_unityTextOverflowPosition;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_visibility)) ::UnityEngine::UIElements::Visibility UnityEngine_UIElements_IResolvedStyle_visibility;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_whiteSpace)) ::UnityEngine::UIElements::WhiteSpace UnityEngine_UIElements_IResolvedStyle_whiteSpace;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_width)) float_t UnityEngine_UIElements_IResolvedStyle_width;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_wordSpacing)) float_t UnityEngine_UIElements_IResolvedStyle_wordSpacing;

  __declspec(property(get = UnityEngine_UIElements_IStylePropertyAnimations_get_completedAnimationCount,
                      put = UnityEngine_UIElements_IStylePropertyAnimations_set_completedAnimationCount)) int32_t UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount;

  __declspec(property(get = UnityEngine_UIElements_IStylePropertyAnimations_get_runningAnimationCount,
                      put = UnityEngine_UIElements_IStylePropertyAnimations_set_runningAnimationCount)) int32_t UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount;

  /// @brief Field <UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField,
                      put = __cordl_internal_set__UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField)) int32_t
      _UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField,
                      put = __cordl_internal_set__UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField)) int32_t
      _UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField;

  /// @brief Field <cacheAsBitmap>k__BackingField, offset 0x278, size 0x1
  __declspec(property(get = __cordl_internal_get__cacheAsBitmap_k__BackingField, put = __cordl_internal_set__cacheAsBitmap_k__BackingField)) bool _cacheAsBitmap_k__BackingField;

  /// @brief Field <containedPointerIds>k__BackingField, offset 0x15c, size 0x4
  __declspec(property(get = __cordl_internal_get__containedPointerIds_k__BackingField, put = __cordl_internal_set__containedPointerIds_k__BackingField)) int32_t _containedPointerIds_k__BackingField;

  /// @brief Field <dataSourceType>k__BackingField, offset 0x240, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSourceType_k__BackingField, put = __cordl_internal_set__dataSourceType_k__BackingField)) ::System::Type* _dataSourceType_k__BackingField;

  /// @brief Field <elementPanel>k__BackingField, offset 0x298, size 0x8
  __declspec(property(get = __cordl_internal_get__elementPanel_k__BackingField,
                      put = __cordl_internal_set__elementPanel_k__BackingField)) ::UnityEngine::UIElements::BaseVisualElementPanel* _elementPanel_k__BackingField;

  /// @brief Field <generateVisualContent>k__BackingField, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get__generateVisualContent_k__BackingField,
                      put = __cordl_internal_set__generateVisualContent_k__BackingField)) ::System::Action_1<Il2CppObject*>* _generateVisualContent_k__BackingField;

  /// @brief Field <hierarchy>k__BackingField, offset 0x270, size 0x8
  __declspec(property(get = __cordl_internal_get__hierarchy_k__BackingField,
                      put = __cordl_internal_set__hierarchy_k__BackingField)) ::UnityEngine::UIElements::VisualElement_Hierarchy _hierarchy_k__BackingField;

  __declspec(property(get = get_areAncestorsAndSelfDisplayed, put = set_areAncestorsAndSelfDisplayed)) bool areAncestorsAndSelfDisplayed;

  __declspec(property(get = get_boundingBox)) ::UnityEngine::Rect boundingBox;

  __declspec(property(get = get_boundingBoxDirtiedSinceLastLayoutPass, put = set_boundingBoxDirtiedSinceLastLayoutPass)) bool boundingBoxDirtiedSinceLastLayoutPass;

  __declspec(property(get = get_boundingBoxInParentSpace)) ::UnityEngine::Rect boundingBoxInParentSpace;

  __declspec(property(get = get_boundingBoxWithoutNested)) ::UnityEngine::Rect boundingBoxWithoutNested;

  __declspec(property(get = get_canGrabFocus)) bool canGrabFocus;

  /// @brief [CreateProperty(ReadOnly = true)]
  __declspec(property(get = get_childCount)) int32_t childCount;

  /// @brief Field childCountProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_childCountProperty, put = setStaticF_childCountProperty)) ::UnityEngine::UIElements::BindingId childCountProperty;

  __declspec(property(get = get_classList)) ::System::Collections::Generic::List_1<::StringW>* classList;

  __declspec(property(get = get_computedStyle)) ::UnityEngine::UIElements::ComputedStyle computedStyle;

  __declspec(property(get = get_containedPointerIds, put = set_containedPointerIds)) int32_t containedPointerIds;

  __declspec(property(get = get_contentContainer)) ::UnityEngine::UIElements::VisualElement* contentContainer;

  /// @brief [CreateProperty(ReadOnly = true)]
  __declspec(property(get = get_contentRect)) ::UnityEngine::Rect contentRect;

  /// @brief Field contentRectProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_contentRectProperty, put = setStaticF_contentRectProperty)) ::UnityEngine::UIElements::BindingId contentRectProperty;

  /// @brief Field controlid, offset 0x204, size 0x4
  __declspec(property(get = __cordl_internal_get_controlid, put = __cordl_internal_set_controlid)) uint32_t controlid;

  __declspec(property(get = get_customStyle)) ::UnityEngine::UIElements::ICustomStyle* customStyle;

  /// @brief [CreateProperty]
  __declspec(property(get = get_dataSource, put = set_dataSource)) ::System::Object* dataSource;

  /// @brief [CreateProperty]
  __declspec(property(get = get_dataSourcePath, put = set_dataSourcePath)) ::Unity::Properties::PropertyPath dataSourcePath;

  /// @brief Field dataSourcePathProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_dataSourcePathProperty, put = setStaticF_dataSourcePathProperty)) ::UnityEngine::UIElements::BindingId dataSourcePathProperty;

  /// @brief Field dataSourceProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_dataSourceProperty, put = setStaticF_dataSourceProperty)) ::UnityEngine::UIElements::BindingId dataSourceProperty;

  /// @brief Field dependencyPseudoMask, offset 0x154, size 0x4
  __declspec(property(get = __cordl_internal_get_dependencyPseudoMask, put = __cordl_internal_set_dependencyPseudoMask)) ::UnityEngine::UIElements::PseudoStates dependencyPseudoMask;

  __declspec(property(get = get_disableClipping, put = set_disableClipping)) bool disableClipping;

  /// @brief [CreateProperty]
  __declspec(property(get = get_disablePlayModeTint, put = set_disablePlayModeTint)) bool disablePlayModeTint;

  /// @brief Field disablePlayModeTintProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_disablePlayModeTintProperty, put = setStaticF_disablePlayModeTintProperty)) ::UnityEngine::UIElements::BindingId disablePlayModeTintProperty;

  __declspec(property(get = get_disableRendering, put = set_disableRendering)) bool disableRendering;

  /// @brief Field disabledUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_disabledUssClassName, put = setStaticF_disabledUssClassName)) ::StringW disabledUssClassName;

  __declspec(property(get = get_elementPanel, put = set_elementPanel)) ::UnityEngine::UIElements::BaseVisualElementPanel* elementPanel;

  __declspec(property(get = get_enableViewDataPersistence)) bool enableViewDataPersistence;

  /// @brief [CreateProperty(ReadOnly = true)]
  __declspec(property(get = get_enabledInHierarchy)) bool enabledInHierarchy;

  /// @brief Field enabledInHierarchyProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_enabledInHierarchyProperty, put = setStaticF_enabledInHierarchyProperty)) ::UnityEngine::UIElements::BindingId enabledInHierarchyProperty;

  /// @brief [CreateProperty]
  __declspec(property(get = get_enabledSelf, put = set_enabledSelf)) bool enabledSelf;

  /// @brief Field enabledSelfProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_enabledSelfProperty, put = setStaticF_enabledSelfProperty)) ::UnityEngine::UIElements::BindingId enabledSelfProperty;

  __declspec(property(get = get_eventInterestParentCategories)) int32_t eventInterestParentCategories;

  __declspec(property(get = get_experimental)) ::UnityEngine::UIElements::IExperimentalFeatures* experimental;

  __declspec(property(get = get_flags, put = set_flags)) ::UnityEngine::UIElements::VisualElementFlags flags;

  __declspec(property(get = get_focusController)) ::UnityEngine::UIElements::FocusController* focusController;

  __declspec(property(get = get_fullTypeName)) ::StringW fullTypeName;

  __declspec(property(get = get_generateVisualContent, put = set_generateVisualContent)) ::System::Action_1<Il2CppObject*>* generateVisualContent;

  __declspec(property(get = get_has3DRotation)) bool has3DRotation;

  __declspec(property(get = get_has3DTransform)) bool has3DTransform;

  __declspec(property(get = get_has3DTranslation)) bool has3DTranslation;

  __declspec(property(get = get_hasCompletedAnimations)) bool hasCompletedAnimations;

  __declspec(property(get = get_hasDefaultRotationAndScale)) bool hasDefaultRotationAndScale;

  __declspec(property(get = get_hasInlineStyle)) bool hasInlineStyle;

  __declspec(property(get = get_hasOneOrMorePointerCaptures, put = set_hasOneOrMorePointerCaptures)) bool hasOneOrMorePointerCaptures;

  __declspec(property(get = get_hasRunningAnimations)) bool hasRunningAnimations;

  __declspec(property(get = get_hasSize)) bool hasSize;

  __declspec(property(get = get_hierarchy)) ::UnityEngine::UIElements::VisualElement_Hierarchy hierarchy;

  /// @brief Field hierarchyDepth, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_hierarchyDepth, put = __cordl_internal_set_hierarchyDepth)) int32_t hierarchyDepth;

  /// @brief Field imguiContainerDescendantCount, offset 0x208, size 0x4
  __declspec(property(get = __cordl_internal_get_imguiContainerDescendantCount, put = __cordl_internal_set_imguiContainerDescendantCount)) int32_t imguiContainerDescendantCount;

  /// @brief Field inheritedStylesHash, offset 0x200, size 0x4
  __declspec(property(get = __cordl_internal_get_inheritedStylesHash, put = __cordl_internal_set_inheritedStylesHash)) int32_t inheritedStylesHash;

  /// @brief Field inlineStyleAccess, offset 0x2a8, size 0x8
  __declspec(property(get = __cordl_internal_get_inlineStyleAccess, put = __cordl_internal_set_inlineStyleAccess)) ::UnityEngine::UIElements::InlineStyleAccess* inlineStyleAccess;

  /// @brief Field insertionIndex, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_insertionIndex, put = __cordl_internal_set_insertionIndex)) int32_t insertionIndex;

  __declspec(property(get = get_isBoundingBoxDirty, put = set_isBoundingBoxDirty)) bool isBoundingBoxDirty;

  __declspec(property(get = get_isCompositeRoot, put = set_isCompositeRoot)) bool isCompositeRoot;

  __declspec(property(get = get_isDataSourcePathEmpty)) bool isDataSourcePathEmpty;

  __declspec(property(get = get_isEventInterestParentCategoriesDirty, put = set_isEventInterestParentCategoriesDirty)) bool isEventInterestParentCategoriesDirty;

  __declspec(property(get = get_isLayoutManual, put = set_isLayoutManual)) bool isLayoutManual;

  __declspec(property(get = get_isLocalBounds3DDirty, put = set_isLocalBounds3DDirty)) bool isLocalBounds3DDirty;

  __declspec(property(get = get_isLocalBoundsWithoutNested3DDirty, put = set_isLocalBoundsWithoutNested3DDirty)) bool isLocalBoundsWithoutNested3DDirty;

  __declspec(property(get = get_isParentEnabledInHierarchy)) bool isParentEnabledInHierarchy;

  __declspec(property(get = get_isRootVisualContainer)) bool isRootVisualContainer;

  __declspec(property(put = set_isWorldBoundingBoxDirty)) bool isWorldBoundingBoxDirty;

  __declspec(property(get = get_isWorldBoundingBoxOrDependenciesDirty)) bool isWorldBoundingBoxOrDependenciesDirty;

  __declspec(property(get = get_isWorldSpaceRootUIDocument, put = set_isWorldSpaceRootUIDocument)) bool isWorldSpaceRootUIDocument;

  __declspec(property(get = get_isWorldTransformDirty, put = set_isWorldTransformDirty)) bool isWorldTransformDirty;

  __declspec(property(put = set_isWorldTransformInverseDirty)) bool isWorldTransformInverseDirty;

  __declspec(property(get = get_isWorldTransformInverseOrDependenciesDirty)) bool isWorldTransformInverseOrDependenciesDirty;

  /// @brief Field k_GenerateVisualContentMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_GenerateVisualContentMarker, put = setStaticF_k_GenerateVisualContentMarker)) ::Unity::Profiling::ProfilerMarker k_GenerateVisualContentMarker;

  /// @brief [CreateProperty]
  __declspec(property(get = get_languageDirection, put = set_languageDirection)) ::UnityEngine::UIElements::LanguageDirection languageDirection;

  /// @brief Field languageDirectionProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_languageDirectionProperty, put = setStaticF_languageDirectionProperty)) ::UnityEngine::UIElements::BindingId languageDirectionProperty;

  /// @brief Field lastLayout, offset 0x64, size 0x10
  __declspec(property(get = __cordl_internal_get_lastLayout, put = __cordl_internal_set_lastLayout)) ::UnityEngine::Rect lastLayout;

  /// @brief Field lastPseudoPadding, offset 0x74, size 0x10
  __declspec(property(get = __cordl_internal_get_lastPseudoPadding, put = __cordl_internal_set_lastPseudoPadding)) ::UnityEngine::Rect lastPseudoPadding;

  /// @brief [CreateProperty(ReadOnly = true)]
  __declspec(property(get = get_layout, put = set_layout)) ::UnityEngine::Rect layout;

  __declspec(property(get = get_layoutNode)) ::UnityEngine::UIElements::Layout::LayoutNode layoutNode;

  __declspec(property(get = get_layoutPosition)) ::UnityEngine::Vector2 layoutPosition;

  /// @brief Field layoutProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_layoutProperty, put = setStaticF_layoutProperty)) ::UnityEngine::UIElements::BindingId layoutProperty;

  __declspec(property(get = get_layoutSize)) ::UnityEngine::Vector2 layoutSize;

  /// @brief [CreateProperty(ReadOnly = true)]
  __declspec(property(get = get_localBound)) ::UnityEngine::Rect localBound;

  /// @brief Field localBoundProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_localBoundProperty, put = setStaticF_localBoundProperty)) ::UnityEngine::UIElements::BindingId localBoundProperty;

  __declspec(property(get = get_localBounds3D)) ::UnityEngine::Bounds localBounds3D;

  __declspec(property(get = get_localBounds3DWithoutNested3D)) ::UnityEngine::Bounds localBounds3DWithoutNested3D;

  __declspec(property(get = get_localBoundsPicking3D)) ::UnityEngine::Bounds localBoundsPicking3D;

  __declspec(property(get = get_localLanguageDirection, put = set_localLanguageDirection)) ::UnityEngine::UIElements::LanguageDirection localLanguageDirection;

  /// @brief Field m_Bindings, offset 0x238, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Bindings, put = __cordl_internal_set_m_Bindings)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Binding*>* m_Bindings;

  /// @brief Field m_BoundingBox, offset 0xb0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_BoundingBox, put = __cordl_internal_set_m_BoundingBox)) ::UnityEngine::Rect m_BoundingBox;

  /// @brief Field m_BubbleUpEventCallbackCategories, offset 0x250, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BubbleUpEventCallbackCategories, put = __cordl_internal_set_m_BubbleUpEventCallbackCategories)) int32_t m_BubbleUpEventCallbackCategories;

  /// @brief Field m_BubbleUpHandleEventCategories, offset 0x24c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BubbleUpHandleEventCategories, put = __cordl_internal_set_m_BubbleUpHandleEventCategories)) int32_t m_BubbleUpHandleEventCategories;

  /// @brief Field m_CachedEventInterestParentCategories, offset 0x25c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CachedEventInterestParentCategories,
                      put = __cordl_internal_set_m_CachedEventInterestParentCategories)) int32_t m_CachedEventInterestParentCategories;

  /// @brief Field m_CachedNextParentWithEventInterests, offset 0x268, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedNextParentWithEventInterests,
                      put = __cordl_internal_set_m_CachedNextParentWithEventInterests)) ::UnityEngine::UIElements::VisualElement* m_CachedNextParentWithEventInterests;

  /// @brief Field m_Children, offset 0x290, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Children, put = __cordl_internal_set_m_Children)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* m_Children;

  /// @brief Field m_ClassList, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClassList, put = __cordl_internal_set_m_ClassList)) ::System::Collections::Generic::List_1<::StringW>* m_ClassList;

  /// @brief Field m_DataSource, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DataSource, put = __cordl_internal_set_m_DataSource)) ::System::Object* m_DataSource;

  /// @brief Field m_DataSourcePath, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DataSourcePath, put = __cordl_internal_set_m_DataSourcePath)) ::UnityEngine::UIElements::PathRef* m_DataSourcePath;

  /// @brief Field m_EnabledSelf, offset 0x20c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnabledSelf, put = __cordl_internal_set_m_EnabledSelf)) bool m_EnabledSelf;

  /// @brief Field m_EventInterestSelfCategories, offset 0x258, size 0x4
  __declspec(property(get = __cordl_internal_get_m_EventInterestSelfCategories, put = __cordl_internal_set_m_EventInterestSelfCategories)) int32_t m_EventInterestSelfCategories;

  /// @brief Field m_Flags, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags)) ::UnityEngine::UIElements::VisualElementFlags m_Flags;

  /// @brief Field m_LanguageDirection, offset 0x210, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LanguageDirection, put = __cordl_internal_set_m_LanguageDirection)) ::UnityEngine::UIElements::LanguageDirection m_LanguageDirection;

  /// @brief Field m_Layout, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Layout, put = __cordl_internal_set_m_Layout)) ::UnityEngine::Rect m_Layout;

  /// @brief Field m_LayoutNode, offset 0x168, size 0x40
  __declspec(property(get = __cordl_internal_get_m_LayoutNode, put = __cordl_internal_set_m_LayoutNode)) ::UnityEngine::UIElements::Layout::LayoutNode m_LayoutNode;

  /// @brief Field m_LocalLanguageDirection, offset 0x214, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LocalLanguageDirection, put = __cordl_internal_set_m_LocalLanguageDirection)) ::UnityEngine::UIElements::LanguageDirection m_LocalLanguageDirection;

  /// @brief Field m_LogicalParent, offset 0x288, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LogicalParent, put = __cordl_internal_set_m_LogicalParent)) ::UnityEngine::UIElements::VisualElement* m_LogicalParent;

  /// @brief Field m_Name, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name)) ::StringW m_Name;

  /// @brief Field m_NextParentCachedVersion, offset 0x260, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NextParentCachedVersion, put = __cordl_internal_set_m_NextParentCachedVersion)) uint32_t m_NextParentCachedVersion;

  /// @brief Field m_NextParentRequiredVersion, offset 0x264, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NextParentRequiredVersion, put = __cordl_internal_set_m_NextParentRequiredVersion)) uint32_t m_NextParentRequiredVersion;

  /// @brief Field m_PhysicalParent, offset 0x280, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PhysicalParent, put = __cordl_internal_set_m_PhysicalParent)) ::UnityEngine::UIElements::VisualElement* m_PhysicalParent;

  /// @brief Field m_PickingMode, offset 0x160, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PickingMode, put = __cordl_internal_set_m_PickingMode)) ::UnityEngine::UIElements::PickingMode m_PickingMode;

  /// @brief Field m_PropertyBag, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PropertyBag,
                      put = __cordl_internal_set_m_PropertyBag)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::PropertyName, ::System::Object*>* m_PropertyBag;

  /// @brief Field m_PseudoStates, offset 0x158, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PseudoStates, put = __cordl_internal_set_m_PseudoStates)) ::UnityEngine::UIElements::PseudoStates m_PseudoStates;

  /// @brief Field m_RenderHints, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderHints, put = __cordl_internal_set_m_RenderHints)) ::UnityEngine::UIElements::RenderHints m_RenderHints;

  /// @brief Field m_RunningAnimations, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RunningAnimations,
                      put = __cordl_internal_set_m_RunningAnimations)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* m_RunningAnimations;

  /// @brief Field m_Style, offset 0x1a8, size 0x50
  __declspec(property(get = __cordl_internal_get_m_Style, put = __cordl_internal_set_m_Style)) ::UnityEngine::UIElements::ComputedStyle m_Style;

  /// @brief Field m_TrickleDownEventCallbackCategories, offset 0x254, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TrickleDownEventCallbackCategories, put = __cordl_internal_set_m_TrickleDownEventCallbackCategories)) int32_t m_TrickleDownEventCallbackCategories;

  /// @brief Field m_TrickleDownHandleEventCategories, offset 0x248, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TrickleDownHandleEventCategories, put = __cordl_internal_set_m_TrickleDownHandleEventCategories)) int32_t m_TrickleDownHandleEventCategories;

  /// @brief Field m_TypeData, offset 0x2c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TypeData, put = __cordl_internal_set_m_TypeData)) ::UnityEngine::UIElements::VisualElement_TypeData* m_TypeData;

  /// @brief Field m_ViewDataKey, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ViewDataKey, put = __cordl_internal_set_m_ViewDataKey)) ::StringW m_ViewDataKey;

  /// @brief Field m_VisualTreeAssetSource, offset 0x2a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualTreeAssetSource, put = __cordl_internal_set_m_VisualTreeAssetSource)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>
      m_VisualTreeAssetSource;

  /// @brief Field m_WorldBoundingBox, offset 0xc0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_WorldBoundingBox, put = __cordl_internal_set_m_WorldBoundingBox)) ::UnityEngine::Rect m_WorldBoundingBox;

  /// @brief Field m_WorldTransformCache, offset 0xd0, size 0x40
  __declspec(property(get = __cordl_internal_get_m_WorldTransformCache, put = __cordl_internal_set_m_WorldTransformCache)) ::UnityEngine::Matrix4x4 m_WorldTransformCache;

  /// @brief Field m_WorldTransformInverseCache, offset 0x110, size 0x40
  __declspec(property(get = __cordl_internal_get_m_WorldTransformInverseCache, put = __cordl_internal_set_m_WorldTransformInverseCache)) ::UnityEngine::Matrix4x4 m_WorldTransformInverseCache;

  /// @brief [CreateProperty]
  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  /// @brief Field nameProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_nameProperty, put = setStaticF_nameProperty)) ::UnityEngine::UIElements::BindingId nameProperty;

  __declspec(property(get = get_needs3DBounds, put = set_needs3DBounds)) bool needs3DBounds;

  /// @brief Field nestedRenderData, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_nestedRenderData, put = __cordl_internal_set_nestedRenderData)) ::UnityEngine::UIElements::UIR::RenderData* nestedRenderData;

  __declspec(property(get = get_nextParentWithEventInterests)) ::UnityEngine::UIElements::VisualElement* nextParentWithEventInterests;

  __declspec(property(get = get_paddingRect)) ::UnityEngine::Rect paddingRect;

  /// @brief [CreateProperty(ReadOnly = true)]
  __declspec(property(get = get_panel)) ::UnityEngine::UIElements::IPanel* panel;

  /// @brief Field panelProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_panelProperty, put = setStaticF_panelProperty)) ::UnityEngine::UIElements::BindingId panelProperty;

  __declspec(property(get = get_parent)) ::UnityEngine::UIElements::VisualElement* parent;

  /// @brief [CreateProperty]
  __declspec(property(get = get_pickingMode, put = set_pickingMode)) ::UnityEngine::UIElements::PickingMode pickingMode;

  /// @brief Field pickingModeProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_pickingModeProperty, put = setStaticF_pickingModeProperty)) ::UnityEngine::UIElements::BindingId pickingModeProperty;

  __declspec(property(get = get_playModeTintColor)) ::UnityEngine::Color playModeTintColor;

  __declspec(property(get = get_positionWithLayout)) ::UnityEngine::Vector3 positionWithLayout;

  /// @brief [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  __declspec(property(get = get_pseudoStates, put = set_pseudoStates)) ::UnityEngine::UIElements::PseudoStates pseudoStates;

  __declspec(property(get = get_receivesHierarchyGeometryChangedEvents, put = set_receivesHierarchyGeometryChangedEvents)) bool receivesHierarchyGeometryChangedEvents;

  __declspec(property(get = get_rect)) ::UnityEngine::Rect rect;

  /// @brief Field renderData, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_renderData, put = __cordl_internal_set_renderData)) ::UnityEngine::UIElements::UIR::RenderData* renderData;

  __declspec(property(get = get_renderHints, put = set_renderHints)) ::UnityEngine::UIElements::RenderHints renderHints;

  __declspec(property(get = get_requireMeasureFunction, put = set_requireMeasureFunction)) bool requireMeasureFunction;

  /// @brief [CreateProperty]
  __declspec(property(get = get_resolvedStyle)) ::UnityEngine::UIElements::IResolvedStyle* resolvedStyle;

  /// @brief Field resolvedStyleAccess, offset 0x2b0, size 0x8
  __declspec(property(get = __cordl_internal_get_resolvedStyleAccess, put = __cordl_internal_set_resolvedStyleAccess)) ::UnityEngine::UIElements::ResolvedStyleAccess* resolvedStyleAccess;

  /// @brief Field s_CustomStyleAccess, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CustomStyleAccess, put = setStaticF_s_CustomStyleAccess)) ::UnityEngine::UIElements::VisualElement_CustomStyleAccess* s_CustomStyleAccess;

  /// @brief Field s_EmptyClassList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_EmptyClassList, put = setStaticF_s_EmptyClassList)) ::System::Collections::Generic::List_1<::StringW>* s_EmptyClassList;

  /// @brief Field s_EmptyList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_EmptyList, put = setStaticF_s_EmptyList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* s_EmptyList;

  /// @brief Field s_FinalizerCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_FinalizerCount, put = setStaticF_s_FinalizerCount)) int32_t s_FinalizerCount;

  /// @brief Field s_InternalStyleSheetPath, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InternalStyleSheetPath, put = setStaticF_s_InternalStyleSheetPath)) ::System::Text::RegularExpressions::Regex* s_InternalStyleSheetPath;

  /// @brief Field s_NextId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_NextId, put = setStaticF_s_NextId)) uint32_t s_NextId;

  /// @brief Field s_NextParentVersion, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_NextParentVersion, put = setStaticF_s_NextParentVersion)) uint32_t s_NextParentVersion;

  /// @brief Field s_TypeData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TypeData,
                      put = setStaticF_s_TypeData)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::VisualElement_TypeData*>* s_TypeData;

  __declspec(property(get = get_scaledPixelsPerPoint)) float_t scaledPixelsPerPoint;

  /// @brief [Obsolete("scaledPixelsPerPoint_noChecks is deprecated. Use scaledPixelsPerPoint instead.")]
  __declspec(property(get = get_scaledPixelsPerPoint_noChecks)) float_t scaledPixelsPerPoint_noChecks;

  __declspec(property(get = get_schedule)) ::UnityEngine::UIElements::IVisualElementScheduler* schedule;

  /// @brief [CreateProperty]
  __declspec(property(get = get_style)) ::UnityEngine::UIElements::IStyle* style;

  __declspec(property(get = get_styleAnimation)) ::UnityEngine::UIElements::IStylePropertyAnimations* styleAnimation;

  __declspec(property(get = get_styleInitialized, put = set_styleInitialized)) bool styleInitialized;

  /// @brief Field styleSheetList, offset 0x2b8, size 0x8
  __declspec(property(get = __cordl_internal_get_styleSheetList,
                      put = __cordl_internal_set_styleSheetList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* styleSheetList;

  /// @brief [CreateProperty(ReadOnly = true)]
  __declspec(property(get = get_styleSheets)) ::UnityEngine::UIElements::VisualElementStyleSheetSet styleSheets;

  /// @brief Field styleSheetsProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_styleSheetsProperty, put = setStaticF_styleSheetsProperty)) ::UnityEngine::UIElements::BindingId styleSheetsProperty;

  /// @brief [CreateProperty]
  __declspec(property(get = get_tooltip, put = set_tooltip)) ::StringW tooltip;

  /// @brief Field tooltipProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_tooltipProperty, put = setStaticF_tooltipProperty)) ::UnityEngine::UIElements::BindingId tooltipProperty;

  /// @brief Field tooltipPropertyKey, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_tooltipPropertyKey, put = setStaticF_tooltipPropertyKey)) ::UnityEngine::PropertyName tooltipPropertyKey;

  /// @brief Field triggerPseudoMask, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get_triggerPseudoMask, put = __cordl_internal_set_triggerPseudoMask)) ::UnityEngine::UIElements::PseudoStates triggerPseudoMask;

  __declspec(property(get = get_typeData)) ::UnityEngine::UIElements::VisualElement_TypeData* typeData;

  __declspec(property(get = get_typeName)) ::StringW typeName;

  /// @brief [CreateProperty]
  __declspec(property(get = get_usageHints, put = set_usageHints)) ::UnityEngine::UIElements::UsageHints usageHints;

  /// @brief Field usageHintsProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_usageHintsProperty, put = setStaticF_usageHintsProperty)) ::UnityEngine::UIElements::BindingId usageHintsProperty;

  __declspec(property(get = get_useRenderTexture)) bool useRenderTexture;

  /// @brief [CreateProperty]
  __declspec(property(get = get_userData, put = set_userData)) ::System::Object* userData;

  /// @brief Field userDataProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_userDataProperty, put = setStaticF_userDataProperty)) ::UnityEngine::UIElements::BindingId userDataProperty;

  /// @brief Field userDataPropertyKey, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_userDataPropertyKey, put = setStaticF_userDataPropertyKey)) ::UnityEngine::PropertyName userDataPropertyKey;

  /// @brief Field variableContext, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get_variableContext, put = __cordl_internal_set_variableContext)) ::UnityEngine::UIElements::StyleVariableContext* variableContext;

  /// @brief [CreateProperty]
  __declspec(property(get = get_viewDataKey, put = set_viewDataKey)) ::StringW viewDataKey;

  /// @brief Field viewDataKeyProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_viewDataKeyProperty, put = setStaticF_viewDataKeyProperty)) ::UnityEngine::UIElements::BindingId viewDataKeyProperty;

  /// @brief [CreateProperty]
  __declspec(property(get = get_visible, put = set_visible)) bool visible;

  /// @brief Field visibleProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_visibleProperty, put = setStaticF_visibleProperty)) ::UnityEngine::UIElements::BindingId visibleProperty;

  /// @brief [CreateProperty(ReadOnly = true)]
  __declspec(property(get = get_visualTreeAssetSource, put = set_visualTreeAssetSource)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> visualTreeAssetSource;

  /// @brief Field visualTreeAssetSourceProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_visualTreeAssetSourceProperty, put = setStaticF_visualTreeAssetSourceProperty)) ::UnityEngine::UIElements::BindingId visualTreeAssetSourceProperty;

  /// @brief [CreateProperty(ReadOnly = true)]
  __declspec(property(get = get_worldBound)) ::UnityEngine::Rect worldBound;

  /// @brief Field worldBoundProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_worldBoundProperty, put = setStaticF_worldBoundProperty)) ::UnityEngine::UIElements::BindingId worldBoundProperty;

  __declspec(property(get = get_worldBoundingBox)) ::UnityEngine::Rect worldBoundingBox;

  __declspec(property(get = get_worldClip)) ::UnityEngine::Rect worldClip;

  /// @brief [CreateProperty(ReadOnly = true)]
  __declspec(property(get = get_worldTransform)) ::UnityEngine::Matrix4x4 worldTransform;

  __declspec(property(get = get_worldTransformInverse)) ::UnityEngine::Matrix4x4 worldTransformInverse;

  /// @brief Field worldTransformProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_worldTransformProperty, put = setStaticF_worldTransformProperty)) ::UnityEngine::UIElements::BindingId worldTransformProperty;

  __declspec(property(get = get_worldTransformRef)) ::UnityEngine::Matrix4x4 worldTransformRef;

  /// @brief Convert operator to "::UnityEngine::UIElements::Experimental::ITransitionAnimations"
  constexpr operator ::UnityEngine::UIElements::Experimental::ITransitionAnimations*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IExperimentalFeatures"
  constexpr operator ::UnityEngine::UIElements::IExperimentalFeatures*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IResolvedStyle"
  constexpr operator ::UnityEngine::UIElements::IResolvedStyle*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IStylePropertyAnimations"
  constexpr operator ::UnityEngine::UIElements::IStylePropertyAnimations*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IVisualElementScheduler"
  constexpr operator ::UnityEngine::UIElements::IVisualElementScheduler*() noexcept;

  /// @brief Method Add, addr 0x70de328, size 0xb4, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method Add, addr 0x70de3dc, size 0x24, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::UIElements::VisualElement* child, bool ignoreContentContainer);

  /// @brief Method AddEventCallbackCategories, addr 0x70de088, size 0x24, virtual false, abstract: false, final false
  inline void AddEventCallbackCategories(int32_t eventCategories, ::UnityEngine::UIElements::CallbackOptions callbackOptions);

  /// @brief Method AddStyleSheetPath, addr 0x70e03ec, size 0x260, virtual false, abstract: false, final false
  inline void AddStyleSheetPath(::StringW sheetPath);

  /// @brief Method AddToClassList, addr 0x70d9060, size 0x210, virtual false, abstract: false, final false
  inline void AddToClassList(::StringW className);

  /// @brief Method AssignMeasureFunction, addr 0x70d9f50, size 0x2c, virtual false, abstract: false, final false
  inline void AssignMeasureFunction();

  /// @brief Method AssignStyleValues, addr 0x70db090, size 0x1538, virtual false, abstract: false, final false
  static inline void AssignStyleValues(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::Experimental::StyleValues src);

  /// @brief Method AttachDataSource, addr 0x70d8b0c, size 0x18, virtual false, abstract: false, final false
  inline void AttachDataSource();

  /// @brief Method BringToFront, addr 0x70dea44, size 0x38, virtual false, abstract: false, final false
  inline void BringToFront();

  /// @brief Method CalculateConservativeBounds, addr 0x70df664, size 0x34c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds CalculateConservativeBounds(::by_ref<::UnityEngine::Matrix4x4> matrix, ::UnityEngine::Bounds bounds);

  /// @brief Method CalculateConservativeRect, addr 0x70dfb8c, size 0x210, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect CalculateConservativeRect(::by_ref<::UnityEngine::Matrix4x4> matrix, ::UnityEngine::Rect rect);

  /// @brief Method ChangeIMGUIContainerCount, addr 0x70d6c94, size 0x30, virtual false, abstract: false, final false
  inline void ChangeIMGUIContainerCount(int32_t delta);

  /// @brief Method CheckUserKeyArgument, addr 0x70da6fc, size 0x150, virtual false, abstract: false, final false
  static inline void CheckUserKeyArgument(::UnityEngine::PropertyName key);

  /// @brief Method ChildCount, addr 0x70de674, size 0x24, virtual false, abstract: false, final false
  inline int32_t ChildCount(bool ignoreContentContainer);

  /// @brief Method Children, addr 0x70de990, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualElement*>* Children();

  /// @brief Method ClassListContains, addr 0x70da5a4, size 0xb8, virtual false, abstract: false, final false
  inline bool ClassListContains(::StringW cls);

  /// @brief Method Clear, addr 0x70de528, size 0x68, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ClearManualLayout, addr 0x70d3930, size 0x4d0, virtual false, abstract: false, final false
  inline void ClearManualLayout();

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIToolkitAuthoringModule" })]
  /// @brief Method ClearProperty, addr 0x70da96c, size 0xa0, virtual false, abstract: false, final false
  inline bool ClearProperty(::UnityEngine::PropertyName key);

  /// @brief Method ComputeAAAlignedBound, addr 0x70d6348, size 0x148, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect ComputeAAAlignedBound(::UnityEngine::Rect position, ::UnityEngine::Matrix4x4 mat);

  /// @brief Method Contains, addr 0x70d6750, size 0x3c, virtual false, abstract: false, final false
  inline bool Contains(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method ContainsPoint, addr 0x70d9d48, size 0x15c, virtual true, abstract: false, final false
  inline bool ContainsPoint(::UnityEngine::Vector2 localPoint);

  /// @brief Method CreateBindingRequests, addr 0x70d8900, size 0x94, virtual false, abstract: false, final false
  inline void CreateBindingRequests();

  /// @brief Method DetachDataSource, addr 0x70d8994, size 0x28, virtual false, abstract: false, final false
  inline void DetachDataSource();

  /// @brief Method DirtyNextParentWithEventInterests, addr 0x70dde54, size 0x84, virtual false, abstract: false, final false
  inline void DirtyNextParentWithEventInterests();

  /// @brief Method DoMeasure, addr 0x70d9fa8, size 0x10, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t desiredHeight,
                                          ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode);

  /// @brief Method ElementAt, addr 0x70de590, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* ElementAt(int32_t index);

  /// @brief Method ElementAtTreePath, addr 0x70de73c, size 0x158, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* ElementAtTreePath(::System::Collections::Generic::List_1<int32_t>* childIndexes);

  /// @brief Method EnableInClassList, addr 0x70d9270, size 0xc, virtual false, abstract: false, final false
  inline void EnableInClassList(::StringW className, bool enable);

  /// @brief Method EnsureWorldTransformAndClipUpToDate, addr 0x70d62f8, size 0x50, virtual false, abstract: false, final false
  inline void EnsureWorldTransformAndClipUpToDate();

  /// @brief Method Finalize, addr 0x70d70d0, size 0x1c0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FinalizeLayout, addr 0x70da104, size 0x38, virtual false, abstract: false, final false
  inline void FinalizeLayout();

  /// @brief Method FindCommonAncestor, addr 0x70dec28, size 0x11c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* FindCommonAncestor(::UnityEngine::UIElements::VisualElement* other);

  /// @brief Method FindElementInTree, addr 0x70de894, size 0xfc, virtual false, abstract: false, final false
  inline bool FindElementInTree(::UnityEngine::UIElements::VisualElement* element, ::System::Collections::Generic::List_1<int32_t>* outChildIndexes);

  /// @brief Method Focus, addr 0x70d75dc, size 0x54, virtual true, abstract: false, final true
  inline void Focus();

  /// @brief Method GatherAllChildren, addr 0x70d8060, size 0x108, virtual false, abstract: false, final false
  inline void GatherAllChildren(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* elements);

  /// @brief Method GetAnimationSystem, addr 0x70dae50, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElementAnimationSystem* GetAnimationSystem();

  /// @brief Method GetCachedNextParentWithEventInterests, addr 0x70ddf8c, size 0x28, virtual false, abstract: false, final false
  inline bool GetCachedNextParentWithEventInterests(::by_ref<::UnityEngine::UIElements::VisualElement*> nextParent);

  /// @brief Method GetClassesForIteration, addr 0x70da59c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetClassesForIteration();

  /// @brief Method GetFirstAncestorOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::reference_type_constraint<T>)
  inline T GetFirstAncestorOfType();

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
  /// @brief Method GetFirstAncestorWhere, addr 0x70debcc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetFirstAncestorWhere(::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* predicate);

  /// @brief Method GetFirstOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::reference_type_constraint<T>)
  inline T GetFirstOfType();

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method GetFullHierarchicalViewDataKey, addr 0x70d992c, size 0x78, virtual false, abstract: false, final false
  inline ::StringW GetFullHierarchicalViewDataKey();

  /// @brief Method GetFullHierarchicalViewDataKey, addr 0x70d988c, size 0xa0, virtual false, abstract: false, final false
  inline void GetFullHierarchicalViewDataKey(::System::Text::StringBuilder* key);

  /// @brief Method GetNextElementDepthFirst, addr 0x70dedbc, size 0x108, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetNextElementDepthFirst();

  /// @brief Method GetOrCreateViewData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline T GetOrCreateViewData(::System::Object* existing, ::StringW key);

  /// @brief Method GetParentSizeForLengthConversion, addr 0x70d1ce8, size 0x324, virtual false, abstract: false, final false
  inline ::System::Nullable_1<float_t> GetParentSizeForLengthConversion(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t subPropertyIndex);

  /// @brief Method GetPivotedMatrixWithLayout, addr 0x70d5ed8, size 0x1a4, virtual false, abstract: false, final false
  inline void GetPivotedMatrixWithLayout(::by_ref<::UnityEngine::Matrix4x4> result);

  /// @brief Method GetPreviousElementDepthFirst, addr 0x70deec4, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetPreviousElementDepthFirst();

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
  /// @brief Method GetProperty, addr 0x70da65c, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Object* GetProperty(::UnityEngine::PropertyName key);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method GetRootVisualContainer, addr 0x70ded44, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetRootVisualContainer(bool stopAtNearestRoot);

  /// @brief Method GetStylePropertyAnimationSystem, addr 0x70cffb0, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IStylePropertyAnimationSystem* GetStylePropertyAnimationSystem();

  /// @brief Method HasBubbleUpEventCallbacks, addr 0x70de21c, size 0x10, virtual false, abstract: false, final false
  inline bool HasBubbleUpEventCallbacks(int32_t eventCategories);

  /// @brief Method HasBubbleUpEventInterests, addr 0x70de1f4, size 0x18, virtual false, abstract: false, final false
  inline bool HasBubbleUpEventInterests(int32_t eventCategories);

  /// @brief Method HasBubbleUpHandleEvent, addr 0x70de23c, size 0x10, virtual false, abstract: false, final false
  inline bool HasBubbleUpHandleEvent(int32_t eventCategories);

  /// @brief Method HasChangedPanel, addr 0x70d8468, size 0x3bc, virtual false, abstract: false, final false
  inline void HasChangedPanel(::UnityEngine::UIElements::BaseVisualElementPanel* prevPanel);

  /// @brief Method HasParentEventInterests, addr 0x70de1b0, size 0x1c, virtual false, abstract: false, final false
  inline bool HasParentEventInterests(int32_t eventCategories);

  /// @brief Method HasParentEventInterests, addr 0x70de194, size 0x1c, virtual false, abstract: false, final false
  inline bool HasParentEventInterests(::UnityEngine::UIElements::EventCategory eventCategory);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
  /// @brief Method HasProperty, addr 0x70da8c4, size 0xa8, virtual false, abstract: false, final false
  inline bool HasProperty(::UnityEngine::PropertyName key);

  /// @brief Method HasSelfEventInterests, addr 0x70de1cc, size 0x10, virtual false, abstract: false, final false
  inline bool HasSelfEventInterests(int32_t eventCategories);

  /// @brief Method HasSelfEventInterests, addr 0x70d89bc, size 0x10, virtual false, abstract: false, final false
  inline bool HasSelfEventInterests(::UnityEngine::UIElements::EventCategory eventCategory);

  /// @brief Method HasTrickleDownEventCallbacks, addr 0x70de20c, size 0x10, virtual false, abstract: false, final false
  inline bool HasTrickleDownEventCallbacks(int32_t eventCategories);

  /// @brief Method HasTrickleDownEventInterests, addr 0x70de1dc, size 0x18, virtual false, abstract: false, final false
  inline bool HasTrickleDownEventInterests(int32_t eventCategories);

  /// @brief Method HasTrickleDownHandleEvent, addr 0x70de22c, size 0x10, virtual false, abstract: false, final false
  inline bool HasTrickleDownHandleEvent(int32_t eventCategories);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method IncrementVersion, addr 0x70b2adc, size 0x28, virtual false, abstract: false, final false
  inline void IncrementVersion(::UnityEngine::UIElements::VersionChangeType changeType);

  /// @brief Method IndexOf, addr 0x70de698, size 0x80, virtual false, abstract: false, final false
  inline int32_t IndexOf(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method IndexOf, addr 0x70de718, size 0x24, virtual false, abstract: false, final false
  inline int32_t IndexOf(::UnityEngine::UIElements::VisualElement* element, bool ignoreContentContainer);

  /// @brief Method Insert, addr 0x70de400, size 0x8c, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method Insert, addr 0x70de48c, size 0x24, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::UnityEngine::UIElements::VisualElement* element, bool ignoreContentContainer);

  /// @brief Method InvokeGenerateVisualContent, addr 0x70d9684, size 0x208, virtual false, abstract: false, final false
  inline void InvokeGenerateVisualContent(Il2CppObject* mgc);

  /// @brief Method InvokeHierarchyChanged, addr 0x70d8434, size 0x34, virtual false, abstract: false, final false
  inline void InvokeHierarchyChanged(::UnityEngine::UIElements::HierarchyChangeType changeType,
                                     ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>* additionalContext);

  /// @brief Method IsPartOfCapturedChain, addr 0x70d6694, size 0xbc, virtual false, abstract: false, final false
  static inline bool IsPartOfCapturedChain(::UnityEngine::UIElements::VisualElement* self, /* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::IEventHandler*> capturingElement);

  /// @brief Method MarkDirtyRepaint, addr 0x70d9650, size 0x24, virtual false, abstract: false, final false
  inline void MarkDirtyRepaint();

  /// @brief Method MarkRenderHintsClean, addr 0x70d2b34, size 0x10, virtual false, abstract: false, final false
  inline void MarkRenderHintsClean();

  /// @brief Method Max, addr 0x70df480, size 0x1c, virtual false, abstract: false, final false
  static inline float_t Max(float_t a, float_t b, float_t c, float_t d);

  /// @brief Method Measure, addr 0x70d9fb8, size 0x14c, virtual false, abstract: false, final false
  static inline void Measure(::UnityEngine::UIElements::VisualElement* ve, ::by_ref<::UnityEngine::UIElements::Layout::LayoutNode> node, float_t width,
                             ::UnityEngine::UIElements::Layout::LayoutMeasureMode widthMode, float_t height, ::UnityEngine::UIElements::Layout::LayoutMeasureMode heightMode,
                             ::by_ref<::UnityEngine::UIElements::Layout::LayoutSize> result);

  /// @brief Method Min, addr 0x70df464, size 0x1c, virtual false, abstract: false, final false
  static inline float_t Min(float_t a, float_t b, float_t c, float_t d);

  /// @brief Method MultiplyMatrix34, addr 0x70d607c, size 0x1c8, virtual false, abstract: false, final false
  static inline void MultiplyMatrix34(::by_ref<::UnityEngine::Matrix4x4> lhs, ::by_ref<::UnityEngine::Matrix4x4> rhs, ::by_ref<::UnityEngine::Matrix4x4> res);

  /// @brief Method MultiplyMatrix44Point2, addr 0x70dfffc, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MultiplyMatrix44Point2(::by_ref<::UnityEngine::Matrix4x4> lhs, ::UnityEngine::Vector2 point);

  /// @brief Method MultiplyMatrix44Point2ToPoint3, addr 0x70e0020, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 MultiplyMatrix44Point2ToPoint3(::by_ref<::UnityEngine::Matrix4x4> lhs, ::UnityEngine::Vector2 point);

  /// @brief Method MultiplyMatrix44Point3ToPoint2, addr 0x70e0060, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MultiplyMatrix44Point3ToPoint2(::by_ref<::UnityEngine::Matrix4x4> lhs, ::UnityEngine::Vector3 point);

  /// @brief Method MultiplyVector2, addr 0x70e0090, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MultiplyVector2(::by_ref<::UnityEngine::Matrix4x4> lhs, ::UnityEngine::Vector2 vector);

  static inline ::UnityEngine::UIElements::VisualElement* New_ctor();

  /// @brief Method OnChildAdded, addr 0x70deb8c, size 0x4, virtual true, abstract: false, final false
  inline void OnChildAdded(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method OnChildRemoved, addr 0x70deb90, size 0x4, virtual true, abstract: false, final false
  inline void OnChildRemoved(::UnityEngine::UIElements::VisualElement* child);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method OnViewDataReady, addr 0x70d9d44, size 0x4, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method OrderMinMaxBounds, addr 0x70dfeb0, size 0x1c, virtual false, abstract: false, final false
  static inline void OrderMinMaxBounds(::by_ref<::UnityEngine::Bounds> bounds);

  /// @brief Method OrderMinMaxRect, addr 0x70dfd9c, size 0xcc, virtual false, abstract: false, final false
  static inline void OrderMinMaxRect(::by_ref<::UnityEngine::Rect> rect);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method OverwriteFromViewData, addr 0x70d99a4, size 0x324, virtual false, abstract: false, final false
  inline void OverwriteFromViewData(::System::Object* obj, ::StringW key);

  /// @brief Method PlaceBehind, addr 0x70deab4, size 0xd8, virtual false, abstract: false, final false
  inline void PlaceBehind(::UnityEngine::UIElements::VisualElement* sibling);

  /// @brief Method ProcessBindingRequests, addr 0x70d8a40, size 0xcc, virtual false, abstract: false, final false
  inline void ProcessBindingRequests();

  /// @brief Method PropagateCachedNextParentWithEventInterests, addr 0x70de04c, size 0x3c, virtual false, abstract: false, final false
  inline void PropagateCachedNextParentWithEventInterests(::UnityEngine::UIElements::VisualElement* nextParent, ::UnityEngine::UIElements::VisualElement* stopParent);

  /// @brief Method PropagateEnabledToChildren, addr 0x70d9284, size 0xbc, virtual false, abstract: false, final false
  inline void PropagateEnabledToChildren(bool value);

  /// @brief Method ReadCurrentValues, addr 0x70dc5c8, size 0x12cc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::StyleValues ReadCurrentValues(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::Experimental::StyleValues targetValuesToRead);

  /// @brief Method RegisterAnimation, addr 0x70daee8, size 0x120, virtual false, abstract: false, final false
  inline void RegisterAnimation(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate* anim);

  /// @brief Method RegisterRunningAnimations, addr 0x70d89cc, size 0x74, virtual false, abstract: false, final false
  inline void RegisterRunningAnimations();

  /// @brief Method Remove, addr 0x70de4b0, size 0x78, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method RemoveFromClassList, addr 0x70d8f20, size 0x140, virtual false, abstract: false, final false
  inline void RemoveFromClassList(::StringW className);

  /// @brief Method RemoveFromHierarchy, addr 0x70deb94, size 0x38, virtual false, abstract: false, final false
  inline void RemoveFromHierarchy();

  /// @brief Method RemoveMeasureFunction, addr 0x70d9f7c, size 0x2c, virtual false, abstract: false, final false
  inline void RemoveMeasureFunction();

  /// @brief Method ResolveLengthValue, addr 0x70cb808, size 0x180, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat ResolveLengthValue(::UnityEngine::UIElements::Length length, bool isRow);

  /// @brief Method ResolveRotation, addr 0x70df010, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion ResolveRotation();

  /// @brief Method ResolveScale, addr 0x70df108, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ResolveScale();

  /// @brief Method ResolveTransformOrigin, addr 0x70cbc10, size 0x308, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ResolveTransformOrigin();

  /// @brief Method ResolveTranslate, addr 0x70cbf9c, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ResolveTranslate();

  /// @brief Method RetargetElement, addr 0x70defac, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* RetargetElement(::UnityEngine::UIElements::VisualElement* retargetAgainst);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method SaveViewData, addr 0x70d9cc8, size 0x7c, virtual false, abstract: false, final false
  inline void SaveViewData();

  /// @brief Method SendEvent, addr 0x70d8b24, size 0x18, virtual true, abstract: false, final true
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e);

  /// @brief Method SendEvent, addr 0x70d8b3c, size 0x14, virtual true, abstract: false, final true
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method SendToBack, addr 0x70dea7c, size 0x38, virtual false, abstract: false, final false
  inline void SendToBack();

  /// @brief Method SetActivePseudoState, addr 0x70d6554, size 0x10, virtual false, abstract: false, final false
  inline void SetActivePseudoState(bool value);

  /// @brief Method SetAsNextParentWithEventInterests, addr 0x70dded8, size 0xb4, virtual false, abstract: false, final false
  inline void SetAsNextParentWithEventInterests();

  /// @brief Method SetCheckedPseudoState, addr 0x70d6564, size 0x1c, virtual false, abstract: false, final false
  inline void SetCheckedPseudoState(bool value);

  /// @brief Method SetComputedStyle, addr 0x70da1c0, size 0x1cc, virtual false, abstract: false, final false
  inline void SetComputedStyle(::by_ref<::UnityEngine::UIElements::ComputedStyle> newStyle);

  /// @brief Method SetEnabled, addr 0x70d9340, size 0x4, virtual false, abstract: false, final false
  inline void SetEnabled(bool value);

  /// @brief Method SetEnabledFromHierarchyPrivate, addr 0x70d8b50, size 0x3a0, virtual false, abstract: false, final false
  inline bool SetEnabledFromHierarchyPrivate(bool state);

  /// @brief Method SetInlineRule, addr 0x70da13c, size 0x84, virtual false, abstract: false, final false
  inline void SetInlineRule(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleRule* rule);

  /// @brief Method SetPanel, addr 0x70d76d8, size 0x988, virtual false, abstract: false, final false
  inline void SetPanel(::UnityEngine::UIElements::BaseVisualElementPanel* p);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
  /// @brief Method SetProperty, addr 0x70da84c, size 0x78, virtual false, abstract: false, final false
  inline void SetProperty(::UnityEngine::PropertyName key, ::System::Object* value);

  /// @brief Method SetPropertyInternal, addr 0x70d25d8, size 0xf8, virtual false, abstract: false, final false
  inline void SetPropertyInternal(::UnityEngine::PropertyName key, ::System::Object* value);

  /// @brief Method SetTooltip, addr 0x70d7290, size 0x2c4, virtual false, abstract: false, final false
  inline void SetTooltip(::UnityEngine::UIElements::TooltipEvent* e);

  /// @brief Method ShouldClip, addr 0x70d4cd0, size 0x2c, virtual false, abstract: false, final false
  inline bool ShouldClip();

  /// @brief Method Start, addr 0x70dd96c, size 0x190, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*
  Start(::System::Func_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::Experimental::StyleValues>* fromValueGetter, ::UnityEngine::UIElements::Experimental::StyleValues to,
        int32_t durationMs);

  /// @brief Method StartAnimation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* StartAnimation(::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* anim,
                                                                                             ::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>* fromValueGetter, T to, int32_t durationMs,
                                                                                             ::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>* onValueChanged);

  /// @brief Method TimeSinceStartupMs, addr 0x70d7630, size 0xa8, virtual false, abstract: false, final false
  inline int64_t TimeSinceStartupMs();

  /// @brief Method ToString, addr 0x70da38c, size 0x210, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TrackSource, addr 0x70ddbc4, size 0x7c, virtual false, abstract: false, final false
  inline void TrackSource(::System::Object* previous, ::System::Object* current);

  /// @brief Method TransformAlignedBounds, addr 0x70dff64, size 0x98, virtual false, abstract: false, final false
  static inline void TransformAlignedBounds(::by_ref<::UnityEngine::Matrix4x4> matrix, ::by_ref<::UnityEngine::Bounds> bounds);

  /// @brief Method TransformAlignedBoundsToParentSpace, addr 0x70df49c, size 0x1c8, virtual false, abstract: false, final false
  inline void TransformAlignedBoundsToParentSpace(::by_ref<::UnityEngine::Bounds> bounds);

  /// @brief Method TransformAlignedRect, addr 0x70dfecc, size 0x98, virtual false, abstract: false, final false
  static inline void TransformAlignedRect(::by_ref<::UnityEngine::Matrix4x4> matrix, ::by_ref<::UnityEngine::Rect> rect);

  /// @brief Method TransformAlignedRectToParentSpace, addr 0x70df9b0, size 0x1dc, virtual false, abstract: false, final false
  inline void TransformAlignedRectToParentSpace(::by_ref<::UnityEngine::Rect> rect);

  /// @brief Method TranslateMatrix34, addr 0x70e00ac, size 0xf0, virtual false, abstract: false, final false
  static inline void TranslateMatrix34(::by_ref<::UnityEngine::Matrix4x4> lhs, ::UnityEngine::Vector3 rhs, ::by_ref<::UnityEngine::Matrix4x4> res);

  /// @brief Method TranslateMatrix34InPlace, addr 0x70e019c, size 0x5c, virtual false, abstract: false, final false
  static inline void TranslateMatrix34InPlace(::by_ref<::UnityEngine::Matrix4x4> lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method TryConvertBackgroundSizeUnits, addr 0x70d212c, size 0xa0, virtual false, abstract: false, final false
  inline bool TryConvertBackgroundSizeUnits(::by_ref<::UnityEngine::UIElements::BackgroundSize> from, ::by_ref<::UnityEngine::UIElements::BackgroundSize> to);

  /// @brief Method TryConvertLengthUnits, addr 0x70d1a90, size 0x258, virtual false, abstract: false, final false
  inline bool TryConvertLengthUnits(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::by_ref<::UnityEngine::UIElements::Length> from, ::by_ref<::UnityEngine::UIElements::Length> to,
                                    int32_t subPropertyIndex);

  /// @brief Method TryConvertTransformOriginUnits, addr 0x70d200c, size 0x90, virtual false, abstract: false, final false
  inline bool TryConvertTransformOriginUnits(::by_ref<::UnityEngine::UIElements::TransformOrigin> from, ::by_ref<::UnityEngine::UIElements::TransformOrigin> to);

  /// @brief Method TryConvertTranslateUnits, addr 0x70d209c, size 0x90, virtual false, abstract: false, final false
  inline bool TryConvertTranslateUnits(::by_ref<::UnityEngine::UIElements::Translate> from, ::by_ref<::UnityEngine::UIElements::Translate> to);

  /// @brief Method TryGetBinding, addr 0x70dddb4, size 0xa0, virtual false, abstract: false, final false
  inline bool TryGetBinding(::UnityEngine::UIElements::BindingId bindingId, ::by_ref<::UnityEngine::UIElements::Binding*> binding);

  /// @brief Method UnityEngine.UIElements.Experimental.ITransitionAnimations.Start, addr 0x70dd894, size 0xd8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*
  UnityEngine_UIElements_Experimental_ITransitionAnimations_Start(::UnityEngine::UIElements::Experimental::StyleValues to, int32_t durationMs);

  /// @brief Method UnityEngine.UIElements.IExperimentalFeatures.get_animation, addr 0x70de250, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Experimental::ITransitionAnimations* UnityEngine_UIElements_IExperimentalFeatures_get_animation();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_alignContent, addr 0x70cc440, size 0xac, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Align UnityEngine_UIElements_IResolvedStyle_get_alignContent();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_alignItems, addr 0x70cc548, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Align UnityEngine_UIElements_IResolvedStyle_get_alignItems();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_alignSelf, addr 0x70cc5f8, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Align UnityEngine_UIElements_IResolvedStyle_get_alignSelf();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_aspectRatio, addr 0x70cc6a8, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Ratio UnityEngine_UIElements_IResolvedStyle_get_aspectRatio();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_backgroundColor, addr 0x70cc758, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_backgroundColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_backgroundImage, addr 0x70cc808, size 0xd4, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Background UnityEngine_UIElements_IResolvedStyle_get_backgroundImage();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_backgroundPositionX, addr 0x70cc8dc, size 0xb8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::BackgroundPosition UnityEngine_UIElements_IResolvedStyle_get_backgroundPositionX();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_backgroundPositionY, addr 0x70cc994, size 0xb8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::BackgroundPosition UnityEngine_UIElements_IResolvedStyle_get_backgroundPositionY();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_backgroundRepeat, addr 0x70cca4c, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::BackgroundRepeat UnityEngine_UIElements_IResolvedStyle_get_backgroundRepeat();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_backgroundSize, addr 0x70ccafc, size 0xdc, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::BackgroundSize UnityEngine_UIElements_IResolvedStyle_get_backgroundSize();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderBottomColor, addr 0x70ccbd8, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_borderBottomColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderBottomLeftRadius, addr 0x70ccc88, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderBottomLeftRadius();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderBottomRightRadius, addr 0x70ccd38, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderBottomRightRadius();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderBottomWidth, addr 0x70ccde8, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderBottomWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderLeftColor, addr 0x70cce98, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_borderLeftColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderLeftWidth, addr 0x70ccf48, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderLeftWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderRightColor, addr 0x70ccff8, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_borderRightColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderRightWidth, addr 0x70cd0a8, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderRightWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderTopColor, addr 0x70cd158, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_borderTopColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderTopLeftRadius, addr 0x70cd208, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderTopLeftRadius();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderTopRightRadius, addr 0x70cd2b8, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderTopRightRadius();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderTopWidth, addr 0x70cd368, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderTopWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_bottom, addr 0x70cd418, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_bottom();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_color, addr 0x70cd4c8, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_color();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_display, addr 0x70cd578, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::DisplayStyle UnityEngine_UIElements_IResolvedStyle_get_display();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_filter, addr 0x70cd628, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::FilterFunction>* UnityEngine_UIElements_IResolvedStyle_get_filter();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_flexBasis, addr 0x70cd6d8, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_get_flexBasis();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_flexDirection, addr 0x70cd788, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::FlexDirection UnityEngine_UIElements_IResolvedStyle_get_flexDirection();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_flexGrow, addr 0x70cd838, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_flexGrow();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_flexShrink, addr 0x70cd8e8, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_flexShrink();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_flexWrap, addr 0x70cd998, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Wrap UnityEngine_UIElements_IResolvedStyle_get_flexWrap();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_fontSize, addr 0x70cda48, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_fontSize();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_height, addr 0x70cdaf8, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_height();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_justifyContent, addr 0x70cdba8, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Justify UnityEngine_UIElements_IResolvedStyle_get_justifyContent();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_left, addr 0x70cdc58, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_left();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_letterSpacing, addr 0x70cdd08, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_letterSpacing();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_marginBottom, addr 0x70cddb8, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_marginBottom();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_marginLeft, addr 0x70cde68, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_marginLeft();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_marginRight, addr 0x70cdf18, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_marginRight();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_marginTop, addr 0x70cdfc8, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_marginTop();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_maxHeight, addr 0x70ce078, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_get_maxHeight();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_maxWidth, addr 0x70ce128, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_get_maxWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_minHeight, addr 0x70ce1d8, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_get_minHeight();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_minWidth, addr 0x70ce288, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_get_minWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_opacity, addr 0x70ce338, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_opacity();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_paddingBottom, addr 0x70ce3e8, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_paddingBottom();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_paddingLeft, addr 0x70ce498, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_paddingLeft();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_paddingRight, addr 0x70ce548, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_paddingRight();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_paddingTop, addr 0x70ce5f8, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_paddingTop();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_position, addr 0x70ce6a8, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Position UnityEngine_UIElements_IResolvedStyle_get_position();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_right, addr 0x70ce758, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_right();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_rotate, addr 0x70ce808, size 0xd8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Rotate UnityEngine_UIElements_IResolvedStyle_get_rotate();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_scale, addr 0x70ce8e0, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Scale UnityEngine_UIElements_IResolvedStyle_get_scale();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_textOverflow, addr 0x70ce990, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::TextOverflow UnityEngine_UIElements_IResolvedStyle_get_textOverflow();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_top, addr 0x70cea40, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_top();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_transformOrigin, addr 0x70ceaf0, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 UnityEngine_UIElements_IResolvedStyle_get_transformOrigin();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_transitionDelay, addr 0x70ceba0, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TimeValue>* UnityEngine_UIElements_IResolvedStyle_get_transitionDelay();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_transitionDuration, addr 0x70cec50, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TimeValue>* UnityEngine_UIElements_IResolvedStyle_get_transitionDuration();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_transitionProperty, addr 0x70ced00, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>* UnityEngine_UIElements_IResolvedStyle_get_transitionProperty();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_transitionTimingFunction, addr 0x70cedb0, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::EasingFunction>* UnityEngine_UIElements_IResolvedStyle_get_transitionTimingFunction();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_translate, addr 0x70cee60, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 UnityEngine_UIElements_IResolvedStyle_get_translate();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityBackgroundImageTintColor, addr 0x70cef10, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_unityBackgroundImageTintColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityEditorTextRenderingMode, addr 0x70cefc0, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::EditorTextRenderingMode UnityEngine_UIElements_IResolvedStyle_get_unityEditorTextRenderingMode();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityFont, addr 0x70cf070, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Font> UnityEngine_UIElements_IResolvedStyle_get_unityFont();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityFontDefinition, addr 0x70cf120, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::FontDefinition UnityEngine_UIElements_IResolvedStyle_get_unityFontDefinition();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityFontStyleAndWeight, addr 0x70cf1d0, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::FontStyle UnityEngine_UIElements_IResolvedStyle_get_unityFontStyleAndWeight();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityMaterial, addr 0x70cf280, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::MaterialDefinition UnityEngine_UIElements_IResolvedStyle_get_unityMaterial();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityParagraphSpacing, addr 0x70cf330, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_unityParagraphSpacing();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unitySliceBottom, addr 0x70cf3e0, size 0xb0, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_IResolvedStyle_get_unitySliceBottom();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unitySliceLeft, addr 0x70cf490, size 0xb0, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_IResolvedStyle_get_unitySliceLeft();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unitySliceRight, addr 0x70cf540, size 0xb0, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_IResolvedStyle_get_unitySliceRight();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unitySliceScale, addr 0x70cf5f0, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_unitySliceScale();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unitySliceTop, addr 0x70cf6a0, size 0xb0, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_IResolvedStyle_get_unitySliceTop();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unitySliceType, addr 0x70cf750, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::SliceType UnityEngine_UIElements_IResolvedStyle_get_unitySliceType();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityTextAlign, addr 0x70cf800, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::TextAnchor UnityEngine_UIElements_IResolvedStyle_get_unityTextAlign();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityTextGenerator, addr 0x70cf8b0, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::TextGeneratorType UnityEngine_UIElements_IResolvedStyle_get_unityTextGenerator();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityTextOutlineColor, addr 0x70cf960, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_unityTextOutlineColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityTextOutlineWidth, addr 0x70cfa10, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_unityTextOutlineWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityTextOverflowPosition, addr 0x70cfac0, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::TextOverflowPosition UnityEngine_UIElements_IResolvedStyle_get_unityTextOverflowPosition();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_visibility, addr 0x70cfb70, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Visibility UnityEngine_UIElements_IResolvedStyle_get_visibility();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_whiteSpace, addr 0x70cfc20, size 0xb0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::WhiteSpace UnityEngine_UIElements_IResolvedStyle_get_whiteSpace();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_width, addr 0x70cfcd0, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_width();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_wordSpacing, addr 0x70cfd80, size 0xb0, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_wordSpacing();

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.CancelAllAnimations, addr 0x70d17dc, size 0xe4, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_CancelAllAnimations();

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.CancelAnimation, addr 0x70d16fc, size 0xe0, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_CancelAnimation(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.GetAllAnimations, addr 0x70d1994, size 0xfc, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_GetAllAnimations(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* outPropertyIds);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70d14a8, size 0x120, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>* from,
                                                                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>* to, int32_t durationMs, int32_t delayMs,
                                                                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70d0314, size 0x154, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::Color from, ::UnityEngine::Color to, int32_t durationMs,
                                                                    int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70d0800, size 0x120, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::Font* from, ::UnityEngine::Font* to, int32_t durationMs,
                                                                    int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70d0588, size 0x144, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Background from,
                                                                    ::UnityEngine::UIElements::Background to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70d10f0, size 0x134, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::BackgroundPosition from,
                                                                    ::UnityEngine::UIElements::BackgroundPosition to, int32_t durationMs, int32_t delayMs,
                                                                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70d1224, size 0x120, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::BackgroundRepeat from,
                                                                    ::UnityEngine::UIElements::BackgroundRepeat to, int32_t durationMs, int32_t delayMs,
                                                                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70d1344, size 0x164, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::BackgroundSize from,
                                                                    ::UnityEngine::UIElements::BackgroundSize to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70d06cc, size 0x134, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::FontDefinition from,
                                                                    ::UnityEngine::UIElements::FontDefinition to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70d01f4, size 0x120, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Length from,
                                                                    ::UnityEngine::UIElements::Length to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70d15c8, size 0x134, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::MaterialDefinition from,
                                                                    ::UnityEngine::UIElements::MaterialDefinition to, int32_t durationMs, int32_t delayMs,
                                                                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70d0e80, size 0x10c, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Ratio from,
                                                                    ::UnityEngine::UIElements::Ratio to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70d0d1c, size 0x164, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Rotate from,
                                                                    ::UnityEngine::UIElements::Rotate to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70d0a84, size 0x134, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Scale from,
                                                                    ::UnityEngine::UIElements::Scale to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70d0920, size 0x164, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::TextShadow from,
                                                                    ::UnityEngine::UIElements::TextShadow to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70d0f8c, size 0x164, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::TransformOrigin from,
                                                                    ::UnityEngine::UIElements::TransformOrigin to, int32_t durationMs, int32_t delayMs,
                                                                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70d0bb8, size 0x164, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Translate from,
                                                                    ::UnityEngine::UIElements::Translate to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70cffcc, size 0x108, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, float_t from, float_t to, int32_t durationMs, int32_t delayMs,
                                                                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x70d00d4, size 0x120, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t from, int32_t to, int32_t durationMs, int32_t delayMs,
                                                                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.StartEnum, addr 0x70d0468, size 0x120, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_StartEnum(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t from, int32_t to, int32_t durationMs, int32_t delayMs,
                                                                        ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.UpdateAnimation, addr 0x70d18c0, size 0xd4, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_UpdateAnimation(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// [CompilerGenerated]
  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.get_completedAnimationCount, addr 0x70cffa0, size 0x8, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_IStylePropertyAnimations_get_completedAnimationCount();

  /// [CompilerGenerated]
  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.get_runningAnimationCount, addr 0x70cff90, size 0x8, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_IStylePropertyAnimations_get_runningAnimationCount();

  /// [CompilerGenerated]
  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.set_completedAnimationCount, addr 0x70cffa8, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_set_completedAnimationCount(int32_t value);

  /// [CompilerGenerated]
  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.set_runningAnimationCount, addr 0x70cff98, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_set_runningAnimationCount(int32_t value);

  /// @brief Method UnityEngine.UIElements.IVisualElementScheduler.Execute, addr 0x70e01fc, size 0xbc, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* UnityEngine_UIElements_IVisualElementScheduler_Execute(::System::Action_1<::UnityEngine::UIElements::TimerState>* timerUpdateEvent);

  /// @brief Method UnityEngine.UIElements.IVisualElementScheduler.Execute, addr 0x70e02b8, size 0xbc, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* UnityEngine_UIElements_IVisualElementScheduler_Execute(::System::Action* updateEvent);

  /// @brief Method UnregisterAnimation, addr 0x70db008, size 0x88, virtual false, abstract: false, final false
  inline void UnregisterAnimation(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate* anim);

  /// @brief Method UnregisterRunningAnimations, addr 0x70d8824, size 0xdc, virtual false, abstract: false, final false
  inline void UnregisterRunningAnimations();

  /// @brief Method UpdateBoundingBox, addr 0x70d4404, size 0x6d8, virtual false, abstract: false, final false
  inline void UpdateBoundingBox();

  /// @brief Method UpdateBounds3D, addr 0x70d4dcc, size 0x7bc, virtual false, abstract: false, final false
  inline void UpdateBounds3D();

  /// @brief Method UpdateCursorStyle, addr 0x70daa0c, size 0x444, virtual false, abstract: false, final false
  inline void UpdateCursorStyle(int64_t eventType);

  /// @brief Method UpdateEventInterestParentCategories, addr 0x70de0f8, size 0x7c, virtual false, abstract: false, final false
  inline void UpdateEventInterestParentCategories();

  /// @brief Method UpdateEventInterestSelfCategories, addr 0x70d7044, size 0x8c, virtual false, abstract: false, final false
  inline void UpdateEventInterestSelfCategories();

  /// @brief Method UpdateHoverPseudoState, addr 0x70d6590, size 0x104, virtual false, abstract: false, final false
  inline void UpdateHoverPseudoState();

  /// @brief Method UpdateHoverPseudoStateAfterCaptureChange, addr 0x70d678c, size 0x74, virtual false, abstract: false, final false
  inline void UpdateHoverPseudoStateAfterCaptureChange(int32_t pointerId);

  /// @brief Method UpdatePointerCaptureFlag, addr 0x70d6800, size 0xa0, virtual false, abstract: false, final false
  inline void UpdatePointerCaptureFlag();

  /// @brief Method UpdateWorldBoundingBox, addr 0x70d4ba8, size 0xec, virtual false, abstract: false, final false
  inline void UpdateWorldBoundingBox();

  /// @brief Method UpdateWorldTransform, addr 0x70d5ac4, size 0x2dc, virtual false, abstract: false, final false
  inline void UpdateWorldTransform();

  /// @brief Method UpdateWorldTransformInverse, addr 0x70d5dc8, size 0x60, virtual false, abstract: false, final false
  inline void UpdateWorldTransformInverse();

  /// @brief Method WillChangePanel, addr 0x70d8168, size 0x2cc, virtual false, abstract: false, final false
  inline void WillChangePanel(::UnityEngine::UIElements::BaseVisualElementPanel* destinationPanel);

  /// [CompilerGenerated]
  /// @brief Method <CalculateConservativeBounds>g__IsNaN|780_0, addr 0x70dfe68, size 0x48, virtual false, abstract: false, final false
  static inline bool _CalculateConservativeBounds_g__IsNaN_780_0(::UnityEngine::Vector3 v);

  constexpr int32_t const& __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField();

  constexpr bool const& __cordl_internal_get__cacheAsBitmap_k__BackingField() const;

  constexpr bool& __cordl_internal_get__cacheAsBitmap_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__containedPointerIds_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__containedPointerIds_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__dataSourceType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__dataSourceType_k__BackingField();

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& __cordl_internal_get__elementPanel_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __cordl_internal_get__elementPanel_k__BackingField();

  constexpr ::System::Action_1<Il2CppObject*>* const& __cordl_internal_get__generateVisualContent_k__BackingField() const;

  constexpr ::System::Action_1<Il2CppObject*>*& __cordl_internal_get__generateVisualContent_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement_Hierarchy const& __cordl_internal_get__hierarchy_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement_Hierarchy& __cordl_internal_get__hierarchy_k__BackingField();

  constexpr uint32_t const& __cordl_internal_get_controlid() const;

  constexpr uint32_t& __cordl_internal_get_controlid();

  constexpr ::UnityEngine::UIElements::PseudoStates const& __cordl_internal_get_dependencyPseudoMask() const;

  constexpr ::UnityEngine::UIElements::PseudoStates& __cordl_internal_get_dependencyPseudoMask();

  constexpr int32_t const& __cordl_internal_get_hierarchyDepth() const;

  constexpr int32_t& __cordl_internal_get_hierarchyDepth();

  constexpr int32_t const& __cordl_internal_get_imguiContainerDescendantCount() const;

  constexpr int32_t& __cordl_internal_get_imguiContainerDescendantCount();

  constexpr int32_t const& __cordl_internal_get_inheritedStylesHash() const;

  constexpr int32_t& __cordl_internal_get_inheritedStylesHash();

  constexpr ::UnityEngine::UIElements::InlineStyleAccess* const& __cordl_internal_get_inlineStyleAccess() const;

  constexpr ::UnityEngine::UIElements::InlineStyleAccess*& __cordl_internal_get_inlineStyleAccess();

  constexpr int32_t const& __cordl_internal_get_insertionIndex() const;

  constexpr int32_t& __cordl_internal_get_insertionIndex();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_lastLayout() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_lastLayout();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_lastPseudoPadding() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_lastPseudoPadding();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Binding*>* const& __cordl_internal_get_m_Bindings() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Binding*>*& __cordl_internal_get_m_Bindings();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_BoundingBox() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_BoundingBox();

  constexpr int32_t const& __cordl_internal_get_m_BubbleUpEventCallbackCategories() const;

  constexpr int32_t& __cordl_internal_get_m_BubbleUpEventCallbackCategories();

  constexpr int32_t const& __cordl_internal_get_m_BubbleUpHandleEventCategories() const;

  constexpr int32_t& __cordl_internal_get_m_BubbleUpHandleEventCategories();

  constexpr int32_t const& __cordl_internal_get_m_CachedEventInterestParentCategories() const;

  constexpr int32_t& __cordl_internal_get_m_CachedEventInterestParentCategories();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_CachedNextParentWithEventInterests() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CachedNextParentWithEventInterests();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_Children() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_Children();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_ClassList() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_ClassList();

  constexpr ::System::Object* const& __cordl_internal_get_m_DataSource() const;

  constexpr ::System::Object*& __cordl_internal_get_m_DataSource();

  constexpr ::UnityEngine::UIElements::PathRef* const& __cordl_internal_get_m_DataSourcePath() const;

  constexpr ::UnityEngine::UIElements::PathRef*& __cordl_internal_get_m_DataSourcePath();

  constexpr bool const& __cordl_internal_get_m_EnabledSelf() const;

  constexpr bool& __cordl_internal_get_m_EnabledSelf();

  constexpr int32_t const& __cordl_internal_get_m_EventInterestSelfCategories() const;

  constexpr int32_t& __cordl_internal_get_m_EventInterestSelfCategories();

  constexpr ::UnityEngine::UIElements::VisualElementFlags const& __cordl_internal_get_m_Flags() const;

  constexpr ::UnityEngine::UIElements::VisualElementFlags& __cordl_internal_get_m_Flags();

  constexpr ::UnityEngine::UIElements::LanguageDirection const& __cordl_internal_get_m_LanguageDirection() const;

  constexpr ::UnityEngine::UIElements::LanguageDirection& __cordl_internal_get_m_LanguageDirection();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_Layout() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_Layout();

  constexpr ::UnityEngine::UIElements::Layout::LayoutNode const& __cordl_internal_get_m_LayoutNode() const;

  constexpr ::UnityEngine::UIElements::Layout::LayoutNode& __cordl_internal_get_m_LayoutNode();

  constexpr ::UnityEngine::UIElements::LanguageDirection const& __cordl_internal_get_m_LocalLanguageDirection() const;

  constexpr ::UnityEngine::UIElements::LanguageDirection& __cordl_internal_get_m_LocalLanguageDirection();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_LogicalParent() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_LogicalParent();

  constexpr ::StringW const& __cordl_internal_get_m_Name() const;

  constexpr ::StringW& __cordl_internal_get_m_Name();

  constexpr uint32_t const& __cordl_internal_get_m_NextParentCachedVersion() const;

  constexpr uint32_t& __cordl_internal_get_m_NextParentCachedVersion();

  constexpr uint32_t const& __cordl_internal_get_m_NextParentRequiredVersion() const;

  constexpr uint32_t& __cordl_internal_get_m_NextParentRequiredVersion();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_PhysicalParent() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_PhysicalParent();

  constexpr ::UnityEngine::UIElements::PickingMode const& __cordl_internal_get_m_PickingMode() const;

  constexpr ::UnityEngine::UIElements::PickingMode& __cordl_internal_get_m_PickingMode();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::PropertyName, ::System::Object*>* const& __cordl_internal_get_m_PropertyBag() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::PropertyName, ::System::Object*>*& __cordl_internal_get_m_PropertyBag();

  constexpr ::UnityEngine::UIElements::PseudoStates const& __cordl_internal_get_m_PseudoStates() const;

  constexpr ::UnityEngine::UIElements::PseudoStates& __cordl_internal_get_m_PseudoStates();

  constexpr ::UnityEngine::UIElements::RenderHints const& __cordl_internal_get_m_RenderHints() const;

  constexpr ::UnityEngine::UIElements::RenderHints& __cordl_internal_get_m_RenderHints();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* const& __cordl_internal_get_m_RunningAnimations() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*& __cordl_internal_get_m_RunningAnimations();

  constexpr ::UnityEngine::UIElements::ComputedStyle const& __cordl_internal_get_m_Style() const;

  constexpr ::UnityEngine::UIElements::ComputedStyle& __cordl_internal_get_m_Style();

  constexpr int32_t const& __cordl_internal_get_m_TrickleDownEventCallbackCategories() const;

  constexpr int32_t& __cordl_internal_get_m_TrickleDownEventCallbackCategories();

  constexpr int32_t const& __cordl_internal_get_m_TrickleDownHandleEventCategories() const;

  constexpr int32_t& __cordl_internal_get_m_TrickleDownHandleEventCategories();

  constexpr ::UnityEngine::UIElements::VisualElement_TypeData* const& __cordl_internal_get_m_TypeData() const;

  constexpr ::UnityEngine::UIElements::VisualElement_TypeData*& __cordl_internal_get_m_TypeData();

  constexpr ::StringW const& __cordl_internal_get_m_ViewDataKey() const;

  constexpr ::StringW& __cordl_internal_get_m_ViewDataKey();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get_m_VisualTreeAssetSource() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get_m_VisualTreeAssetSource();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_WorldBoundingBox() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_WorldBoundingBox();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_WorldTransformCache() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_WorldTransformCache();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_WorldTransformInverseCache() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_WorldTransformInverseCache();

  constexpr ::UnityEngine::UIElements::UIR::RenderData* const& __cordl_internal_get_nestedRenderData() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderData*& __cordl_internal_get_nestedRenderData();

  constexpr ::UnityEngine::UIElements::UIR::RenderData* const& __cordl_internal_get_renderData() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderData*& __cordl_internal_get_renderData();

  constexpr ::UnityEngine::UIElements::ResolvedStyleAccess* const& __cordl_internal_get_resolvedStyleAccess() const;

  constexpr ::UnityEngine::UIElements::ResolvedStyleAccess*& __cordl_internal_get_resolvedStyleAccess();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* const& __cordl_internal_get_styleSheetList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*& __cordl_internal_get_styleSheetList();

  constexpr ::UnityEngine::UIElements::PseudoStates const& __cordl_internal_get_triggerPseudoMask() const;

  constexpr ::UnityEngine::UIElements::PseudoStates& __cordl_internal_get_triggerPseudoMask();

  constexpr ::UnityEngine::UIElements::StyleVariableContext* const& __cordl_internal_get_variableContext() const;

  constexpr ::UnityEngine::UIElements::StyleVariableContext*& __cordl_internal_get_variableContext();

  constexpr void __cordl_internal_set__UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__cacheAsBitmap_k__BackingField(bool value);

  constexpr void __cordl_internal_set__containedPointerIds_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__dataSourceType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__elementPanel_k__BackingField(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  constexpr void __cordl_internal_set__generateVisualContent_k__BackingField(::System::Action_1<Il2CppObject*>* value);

  constexpr void __cordl_internal_set__hierarchy_k__BackingField(::UnityEngine::UIElements::VisualElement_Hierarchy value);

  constexpr void __cordl_internal_set_controlid(uint32_t value);

  constexpr void __cordl_internal_set_dependencyPseudoMask(::UnityEngine::UIElements::PseudoStates value);

  constexpr void __cordl_internal_set_hierarchyDepth(int32_t value);

  constexpr void __cordl_internal_set_imguiContainerDescendantCount(int32_t value);

  constexpr void __cordl_internal_set_inheritedStylesHash(int32_t value);

  constexpr void __cordl_internal_set_inlineStyleAccess(::UnityEngine::UIElements::InlineStyleAccess* value);

  constexpr void __cordl_internal_set_insertionIndex(int32_t value);

  constexpr void __cordl_internal_set_lastLayout(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_lastPseudoPadding(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_Bindings(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Binding*>* value);

  constexpr void __cordl_internal_set_m_BoundingBox(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_BubbleUpEventCallbackCategories(int32_t value);

  constexpr void __cordl_internal_set_m_BubbleUpHandleEventCategories(int32_t value);

  constexpr void __cordl_internal_set_m_CachedEventInterestParentCategories(int32_t value);

  constexpr void __cordl_internal_set_m_CachedNextParentWithEventInterests(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Children(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_ClassList(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_DataSource(::System::Object* value);

  constexpr void __cordl_internal_set_m_DataSourcePath(::UnityEngine::UIElements::PathRef* value);

  constexpr void __cordl_internal_set_m_EnabledSelf(bool value);

  constexpr void __cordl_internal_set_m_EventInterestSelfCategories(int32_t value);

  constexpr void __cordl_internal_set_m_Flags(::UnityEngine::UIElements::VisualElementFlags value);

  constexpr void __cordl_internal_set_m_LanguageDirection(::UnityEngine::UIElements::LanguageDirection value);

  constexpr void __cordl_internal_set_m_Layout(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_LayoutNode(::UnityEngine::UIElements::Layout::LayoutNode value);

  constexpr void __cordl_internal_set_m_LocalLanguageDirection(::UnityEngine::UIElements::LanguageDirection value);

  constexpr void __cordl_internal_set_m_LogicalParent(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Name(::StringW value);

  constexpr void __cordl_internal_set_m_NextParentCachedVersion(uint32_t value);

  constexpr void __cordl_internal_set_m_NextParentRequiredVersion(uint32_t value);

  constexpr void __cordl_internal_set_m_PhysicalParent(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_PickingMode(::UnityEngine::UIElements::PickingMode value);

  constexpr void __cordl_internal_set_m_PropertyBag(::System::Collections::Generic::Dictionary_2<::UnityEngine::PropertyName, ::System::Object*>* value);

  constexpr void __cordl_internal_set_m_PseudoStates(::UnityEngine::UIElements::PseudoStates value);

  constexpr void __cordl_internal_set_m_RenderHints(::UnityEngine::UIElements::RenderHints value);

  constexpr void __cordl_internal_set_m_RunningAnimations(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* value);

  constexpr void __cordl_internal_set_m_Style(::UnityEngine::UIElements::ComputedStyle value);

  constexpr void __cordl_internal_set_m_TrickleDownEventCallbackCategories(int32_t value);

  constexpr void __cordl_internal_set_m_TrickleDownHandleEventCategories(int32_t value);

  constexpr void __cordl_internal_set_m_TypeData(::UnityEngine::UIElements::VisualElement_TypeData* value);

  constexpr void __cordl_internal_set_m_ViewDataKey(::StringW value);

  constexpr void __cordl_internal_set_m_VisualTreeAssetSource(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  constexpr void __cordl_internal_set_m_WorldBoundingBox(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_WorldTransformCache(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_m_WorldTransformInverseCache(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_nestedRenderData(::UnityEngine::UIElements::UIR::RenderData* value);

  constexpr void __cordl_internal_set_renderData(::UnityEngine::UIElements::UIR::RenderData* value);

  constexpr void __cordl_internal_set_resolvedStyleAccess(::UnityEngine::UIElements::ResolvedStyleAccess* value);

  constexpr void __cordl_internal_set_styleSheetList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* value);

  constexpr void __cordl_internal_set_triggerPseudoMask(::UnityEngine::UIElements::PseudoStates value);

  constexpr void __cordl_internal_set_variableContext(::UnityEngine::UIElements::StyleVariableContext* value);

  /// @brief Method .ctor, addr 0x70d6cc4, size 0x2dc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_childCountProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_contentRectProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_dataSourcePathProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_dataSourceProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_disablePlayModeTintProperty();

  static inline ::StringW getStaticF_disabledUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_enabledInHierarchyProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_enabledSelfProperty();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateVisualContentMarker();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_languageDirectionProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_layoutProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_localBoundProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_nameProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_panelProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_pickingModeProperty();

  static inline ::UnityEngine::UIElements::VisualElement_CustomStyleAccess* getStaticF_s_CustomStyleAccess();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_s_EmptyClassList();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* getStaticF_s_EmptyList();

  static inline int32_t getStaticF_s_FinalizerCount();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_s_InternalStyleSheetPath();

  static inline uint32_t getStaticF_s_NextId();

  static inline uint32_t getStaticF_s_NextParentVersion();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::VisualElement_TypeData*>* getStaticF_s_TypeData();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_styleSheetsProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_tooltipProperty();

  static inline ::UnityEngine::PropertyName getStaticF_tooltipPropertyKey();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_usageHintsProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_userDataProperty();

  static inline ::UnityEngine::PropertyName getStaticF_userDataPropertyKey();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_viewDataKeyProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_visibleProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_visualTreeAssetSourceProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_worldBoundProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_worldTransformProperty();

  /// @brief Method get_Item, addr 0x70de594, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_Item(int32_t key);

  /// @brief Method get_areAncestorsAndSelfDisplayed, addr 0x70d21f8, size 0xc, virtual false, abstract: false, final false
  inline bool get_areAncestorsAndSelfDisplayed();

  /// @brief Method get_boundingBox, addr 0x70d43d0, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_boundingBox();

  /// @brief Method get_boundingBoxDirtiedSinceLastLayoutPass, addr 0x70d64bc, size 0xc, virtual false, abstract: false, final false
  inline bool get_boundingBoxDirtiedSinceLastLayoutPass();

  /// @brief Method get_boundingBoxInParentSpace, addr 0x70d4c94, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_boundingBoxInParentSpace();

  /// @brief Method get_boundingBoxWithoutNested, addr 0x70d4adc, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_boundingBoxWithoutNested();

  /// @brief Method get_canGrabFocus, addr 0x70d26d0, size 0x128, virtual true, abstract: false, final false
  inline bool get_canGrabFocus();

  /// @brief Method get_childCount, addr 0x70de60c, size 0x68, virtual false, abstract: false, final false
  inline int32_t get_childCount();

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method get_classList, addr 0x70d6a1c, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_classList();

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method get_computedStyle, addr 0x70b2b0c, size 0x8, virtual false, abstract: false, final false
  inline ::by_ref<::UnityEngine::UIElements::ComputedStyle> get_computedStyle();

  /// [CompilerGenerated]
  /// @brief Method get_containedPointerIds, addr 0x70d6580, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_containedPointerIds();

  /// @brief Method get_contentContainer, addr 0x70de314, size 0x4, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Method get_contentRect, addr 0x70d3e00, size 0x234, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_contentRect();

  /// @brief Method get_customStyle, addr 0x70e0374, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ICustomStyle* get_customStyle();

  /// @brief Method get_dataSource, addr 0x70ddafc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_dataSource();

  /// @brief Method get_dataSourcePath, addr 0x70ddc40, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Properties::PropertyPath get_dataSourcePath();

  /// @brief Method get_disableClipping, addr 0x70de280, size 0xc, virtual false, abstract: false, final false
  inline bool get_disableClipping();

  /// @brief Method get_disablePlayModeTint, addr 0x70d2988, size 0x8, virtual false, abstract: false, final false
  inline bool get_disablePlayModeTint();

  /// @brief Method get_disableRendering, addr 0x70de2ac, size 0xc, virtual false, abstract: false, final false
  inline bool get_disableRendering();

  /// [CompilerGenerated]
  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method get_elementPanel, addr 0x70de304, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseVisualElementPanel* get_elementPanel();

  /// @brief Method get_enableViewDataPersistence, addr 0x70d2458, size 0xc, virtual false, abstract: false, final false
  inline bool get_enableViewDataPersistence();

  /// @brief Method get_enabledInHierarchy, addr 0x70d28bc, size 0x10, virtual false, abstract: false, final false
  inline bool get_enabledInHierarchy();

  /// @brief Method get_enabledSelf, addr 0x70d927c, size 0x8, virtual false, abstract: false, final false
  inline bool get_enabledSelf();

  /// @brief Method get_eventInterestParentCategories, addr 0x70de0ac, size 0x40, virtual false, abstract: false, final false
  inline int32_t get_eventInterestParentCategories();

  /// @brief Method get_experimental, addr 0x70de24c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IExperimentalFeatures* get_experimental();

  /// @brief Method get_flags, addr 0x70d2288, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElementFlags get_flags();

  /// @brief Method get_focusController, addr 0x70d28cc, size 0xb4, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::FocusController* get_focusController();

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method get_fullTypeName, addr 0x70d6adc, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_fullTypeName();

  /// [CompilerGenerated]
  /// @brief Method get_generateVisualContent, addr 0x70d9674, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<Il2CppObject*>* get_generateVisualContent();

  /// @brief Method get_has3DRotation, addr 0x70df350, size 0x114, virtual false, abstract: false, final false
  inline bool get_has3DRotation();

  /// @brief Method get_has3DTransform, addr 0x70df2d8, size 0x48, virtual false, abstract: false, final false
  inline bool get_has3DTransform();

  /// @brief Method get_has3DTranslation, addr 0x70df320, size 0x30, virtual false, abstract: false, final false
  inline bool get_has3DTranslation();

  /// @brief Method get_hasCompletedAnimations, addr 0x70cfee0, size 0xb0, virtual false, abstract: false, final false
  inline bool get_hasCompletedAnimations();

  /// @brief Method get_hasDefaultRotationAndScale, addr 0x70df1c0, size 0x118, virtual false, abstract: false, final false
  inline bool get_hasDefaultRotationAndScale();

  /// @brief Method get_hasInlineStyle, addr 0x70d6c64, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasInlineStyle();

  /// @brief Method get_hasOneOrMorePointerCaptures, addr 0x70d225c, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasOneOrMorePointerCaptures();

  /// @brief Method get_hasRunningAnimations, addr 0x70cfe30, size 0xb0, virtual false, abstract: false, final false
  inline bool get_hasRunningAnimations();

  /// @brief Method get_hasSize, addr 0x70d2dfc, size 0xb0, virtual false, abstract: false, final false
  inline bool get_hasSize();

  /// [CompilerGenerated]
  /// @brief Method get_hierarchy, addr 0x70de254, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement_Hierarchy get_hierarchy();

  /// @brief Method get_isBoundingBoxDirty, addr 0x70d4370, size 0xc, virtual false, abstract: false, final false
  inline bool get_isBoundingBoxDirty();

  /// @brief Method get_isCompositeRoot, addr 0x70d21cc, size 0xc, virtual false, abstract: false, final false
  inline bool get_isCompositeRoot();

  /// @brief Method get_isDataSourcePathEmpty, addr 0x70ddd94, size 0x20, virtual false, abstract: false, final false
  inline bool get_isDataSourcePathEmpty();

  /// @brief Method get_isEventInterestParentCategoriesDirty, addr 0x70de0ec, size 0xc, virtual false, abstract: false, final false
  inline bool get_isEventInterestParentCategoriesDirty();

  /// @brief Method get_isLayoutManual, addr 0x70d2eac, size 0xc, virtual false, abstract: false, final false
  inline bool get_isLayoutManual();

  /// @brief Method get_isLocalBounds3DDirty, addr 0x70d4318, size 0xc, virtual false, abstract: false, final false
  inline bool get_isLocalBounds3DDirty();

  /// @brief Method get_isLocalBoundsWithoutNested3DDirty, addr 0x70d4344, size 0xc, virtual false, abstract: false, final false
  inline bool get_isLocalBoundsWithoutNested3DDirty();

  /// @brief Method get_isParentEnabledInHierarchy, addr 0x70d8ef0, size 0x30, virtual false, abstract: false, final false
  inline bool get_isParentEnabledInHierarchy();

  /// @brief Method get_isRootVisualContainer, addr 0x70de25c, size 0x20, virtual false, abstract: false, final false
  inline bool get_isRootVisualContainer();

  /// @brief Method get_isWorldBoundingBoxOrDependenciesDirty, addr 0x70d43bc, size 0x14, virtual false, abstract: false, final false
  inline bool get_isWorldBoundingBoxOrDependenciesDirty();

  /// @brief Method get_isWorldSpaceRootUIDocument, addr 0x70d5a10, size 0xc, virtual false, abstract: false, final false
  inline bool get_isWorldSpaceRootUIDocument();

  /// @brief Method get_isWorldTransformDirty, addr 0x70d5a3c, size 0xc, virtual false, abstract: false, final false
  inline bool get_isWorldTransformDirty();

  /// @brief Method get_isWorldTransformInverseOrDependenciesDirty, addr 0x70d5a78, size 0x10, virtual false, abstract: false, final false
  inline bool get_isWorldTransformInverseOrDependenciesDirty();

  /// @brief Method get_languageDirection, addr 0x70d9344, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::LanguageDirection get_languageDirection();

  /// @brief Method get_layout, addr 0x70d3044, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_layout();

  /// @brief Method get_layoutNode, addr 0x70b2b04, size 0x8, virtual false, abstract: false, final false
  inline ::by_ref<::UnityEngine::UIElements::Layout::LayoutNode> get_layoutNode();

  /// @brief Method get_layoutPosition, addr 0x70d599c, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_layoutPosition();

  /// @brief Method get_layoutSize, addr 0x70d5928, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_layoutSize();

  /// @brief Method get_localBound, addr 0x70d580c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_localBound();

  /// @brief Method get_localBounds3D, addr 0x70d4d20, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_localBounds3D();

  /// @brief Method get_localBounds3DWithoutNested3D, addr 0x70d5634, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_localBounds3DWithoutNested3D();

  /// @brief Method get_localBoundsPicking3D, addr 0x70d5588, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_localBoundsPicking3D();

  /// @brief Method get_localLanguageDirection, addr 0x70d94e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::LanguageDirection get_localLanguageDirection();

  /// @brief Method get_name, addr 0x70d695c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_needs3DBounds, addr 0x70d42ec, size 0xc, virtual false, abstract: false, final false
  inline bool get_needs3DBounds();

  /// @brief Method get_nextParentWithEventInterests, addr 0x70ddfb4, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_nextParentWithEventInterests();

  /// @brief Method get_paddingRect, addr 0x70d4034, size 0x2b8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_paddingRect();

  /// @brief Method get_panel, addr 0x70d2980, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IPanel* get_panel();

  /// @brief Method get_parent, addr 0x70d27f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_parent();

  /// @brief Method get_pickingMode, addr 0x70d68a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PickingMode get_pickingMode();

  /// @brief Method get_playModeTintColor, addr 0x70d2994, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_playModeTintColor();

  /// @brief Method get_positionWithLayout, addr 0x70d5e28, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_positionWithLayout();

  /// @brief Method get_pseudoStates, addr 0x70d64e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PseudoStates get_pseudoStates();

  /// @brief Method get_receivesHierarchyGeometryChangedEvents, addr 0x70d6490, size 0xc, virtual false, abstract: false, final false
  inline bool get_receivesHierarchyGeometryChangedEvents();

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method get_rect, addr 0x70d58ac, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rect();

  /// @brief Method get_renderHints, addr 0x70d29f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::RenderHints get_renderHints();

  /// @brief Method get_requireMeasureFunction, addr 0x70d9ea4, size 0xc, virtual false, abstract: false, final false
  inline bool get_requireMeasureFunction();

  /// @brief Method get_resolvedStyle, addr 0x70cc4ec, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IResolvedStyle* get_resolvedStyle();

  /// @brief Method get_scaledPixelsPerPoint, addr 0x70d2ed8, size 0xdc, virtual false, abstract: false, final false
  inline float_t get_scaledPixelsPerPoint();

  /// @brief Method get_scaledPixelsPerPoint_noChecks, addr 0x70d2fb4, size 0x90, virtual false, abstract: false, final false
  inline float_t get_scaledPixelsPerPoint_noChecks();

  /// @brief Method get_schedule, addr 0x70e01f8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualElementScheduler* get_schedule();

  /// @brief Method get_style, addr 0x70b8e70, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IStyle* get_style();

  /// @brief Method get_styleAnimation, addr 0x70baaa8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IStylePropertyAnimations* get_styleAnimation();

  /// @brief Method get_styleInitialized, addr 0x70baa9c, size 0xc, virtual false, abstract: false, final false
  inline bool get_styleInitialized();

  /// @brief Method get_styleSheets, addr 0x70de27c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElementStyleSheetSet get_styleSheets();

  /// @brief Method get_tooltip, addr 0x70d7554, size 0x88, virtual false, abstract: false, final false
  inline ::StringW get_tooltip();

  /// @brief Method get_typeData, addr 0x70d6af8, size 0x150, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement_TypeData* get_typeData();

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
  /// @brief Method get_typeName, addr 0x70d6c48, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_typeName();

  /// @brief Method get_usageHints, addr 0x70d29e0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UsageHints get_usageHints();

  /// @brief Method get_useRenderTexture, addr 0x70d2b44, size 0x2b8, virtual false, abstract: false, final false
  inline bool get_useRenderTexture();

  /// @brief Method get_userData, addr 0x70d2464, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Object* get_userData();

  /// @brief Method get_viewDataKey, addr 0x70d238c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_viewDataKey();

  /// @brief Method get_visible, addr 0x70d2800, size 0xbc, virtual false, abstract: false, final false
  inline bool get_visible();

  /// @brief Method get_visualTreeAssetSource, addr 0x70de318, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> get_visualTreeAssetSource();

  /// @brief Method get_worldBound, addr 0x70d56e0, size 0x12c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_worldBound();

  /// @brief Method get_worldBoundingBox, addr 0x70d4b6c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_worldBoundingBox();

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method get_worldClip, addr 0x70d6244, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_worldClip();

  /// @brief Method get_worldTransform, addr 0x70d5a88, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldTransform();

  /// @brief Method get_worldTransformInverse, addr 0x70d5da0, size 0x28, virtual false, abstract: false, final false
  inline ::by_ref<::UnityEngine::Matrix4x4> get_worldTransformInverse();

  /// @brief Method get_worldTransformRef, addr 0x70d4cfc, size 0x24, virtual false, abstract: false, final false
  inline ::by_ref<::UnityEngine::Matrix4x4> get_worldTransformRef();

  /// @brief Convert to "::UnityEngine::UIElements::Experimental::ITransitionAnimations"
  constexpr ::UnityEngine::UIElements::Experimental::ITransitionAnimations* i___UnityEngine__UIElements__Experimental__ITransitionAnimations() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IExperimentalFeatures"
  constexpr ::UnityEngine::UIElements::IExperimentalFeatures* i___UnityEngine__UIElements__IExperimentalFeatures() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IResolvedStyle"
  constexpr ::UnityEngine::UIElements::IResolvedStyle* i___UnityEngine__UIElements__IResolvedStyle() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IStylePropertyAnimations"
  constexpr ::UnityEngine::UIElements::IStylePropertyAnimations* i___UnityEngine__UIElements__IStylePropertyAnimations() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IVisualElementScheduler"
  constexpr ::UnityEngine::UIElements::IVisualElementScheduler* i___UnityEngine__UIElements__IVisualElementScheduler() noexcept;

  static inline void setStaticF_childCountProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_contentRectProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_dataSourcePathProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_dataSourceProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_disablePlayModeTintProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_disabledUssClassName(::StringW value);

  static inline void setStaticF_enabledInHierarchyProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_enabledSelfProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_k_GenerateVisualContentMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_languageDirectionProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_layoutProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_localBoundProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_nameProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_panelProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_pickingModeProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_s_CustomStyleAccess(::UnityEngine::UIElements::VisualElement_CustomStyleAccess* value);

  static inline void setStaticF_s_EmptyClassList(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF_s_EmptyList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  static inline void setStaticF_s_FinalizerCount(int32_t value);

  static inline void setStaticF_s_InternalStyleSheetPath(::System::Text::RegularExpressions::Regex* value);

  static inline void setStaticF_s_NextId(uint32_t value);

  static inline void setStaticF_s_NextParentVersion(uint32_t value);

  static inline void setStaticF_s_TypeData(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::VisualElement_TypeData*>* value);

  static inline void setStaticF_styleSheetsProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_tooltipProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_tooltipPropertyKey(::UnityEngine::PropertyName value);

  static inline void setStaticF_usageHintsProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_userDataProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_userDataPropertyKey(::UnityEngine::PropertyName value);

  static inline void setStaticF_viewDataKeyProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_visibleProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_visualTreeAssetSourceProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_worldBoundProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_worldTransformProperty(::UnityEngine::UIElements::BindingId value);

  /// @brief Method set_areAncestorsAndSelfDisplayed, addr 0x70d2204, size 0x58, virtual false, abstract: false, final false
  inline void set_areAncestorsAndSelfDisplayed(bool value);

  /// @brief Method set_boundingBoxDirtiedSinceLastLayoutPass, addr 0x70d64c8, size 0x20, virtual false, abstract: false, final false
  inline void set_boundingBoxDirtiedSinceLastLayoutPass(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_containedPointerIds, addr 0x70d6588, size 0x8, virtual false, abstract: false, final false
  inline void set_containedPointerIds(int32_t value);

  /// @brief Method set_dataSource, addr 0x70ddb04, size 0xc0, virtual false, abstract: false, final false
  inline void set_dataSource(::System::Object* value);

  /// @brief Method set_dataSourcePath, addr 0x70ddc64, size 0x130, virtual false, abstract: false, final false
  inline void set_dataSourcePath(::Unity::Properties::PropertyPath value);

  /// @brief Method set_disableClipping, addr 0x70de28c, size 0x20, virtual false, abstract: false, final false
  inline void set_disableClipping(bool value);

  /// @brief Method set_disablePlayModeTint, addr 0x70d2990, size 0x4, virtual false, abstract: false, final false
  inline void set_disablePlayModeTint(bool value);

  /// @brief Method set_disableRendering, addr 0x70de2b8, size 0x4c, virtual false, abstract: false, final false
  inline void set_disableRendering(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_elementPanel, addr 0x70de30c, size 0x8, virtual false, abstract: false, final false
  inline void set_elementPanel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  /// @brief Method set_enabledSelf, addr 0x70d6fa0, size 0xa4, virtual false, abstract: false, final false
  inline void set_enabledSelf(bool value);

  /// @brief Method set_flags, addr 0x70d22bc, size 0xd0, virtual false, abstract: false, final false
  inline void set_flags(::UnityEngine::UIElements::VisualElementFlags value);

  /// [CompilerGenerated]
  /// @brief Method set_generateVisualContent, addr 0x70d967c, size 0x8, virtual false, abstract: false, final false
  inline void set_generateVisualContent(::System::Action_1<Il2CppObject*>* value);

  /// @brief Method set_hasOneOrMorePointerCaptures, addr 0x70d2268, size 0x20, virtual false, abstract: false, final false
  inline void set_hasOneOrMorePointerCaptures(bool value);

  /// @brief Method set_isBoundingBoxDirty, addr 0x70d437c, size 0x20, virtual false, abstract: false, final false
  inline void set_isBoundingBoxDirty(bool value);

  /// @brief Method set_isCompositeRoot, addr 0x70d21d8, size 0x20, virtual false, abstract: false, final false
  inline void set_isCompositeRoot(bool value);

  /// @brief Method set_isEventInterestParentCategoriesDirty, addr 0x70de174, size 0x20, virtual false, abstract: false, final false
  inline void set_isEventInterestParentCategoriesDirty(bool value);

  /// @brief Method set_isLayoutManual, addr 0x70d2eb8, size 0x20, virtual false, abstract: false, final false
  inline void set_isLayoutManual(bool value);

  /// @brief Method set_isLocalBounds3DDirty, addr 0x70d4324, size 0x20, virtual false, abstract: false, final false
  inline void set_isLocalBounds3DDirty(bool value);

  /// @brief Method set_isLocalBoundsWithoutNested3DDirty, addr 0x70d4350, size 0x20, virtual false, abstract: false, final false
  inline void set_isLocalBoundsWithoutNested3DDirty(bool value);

  /// @brief Method set_isWorldBoundingBoxDirty, addr 0x70d439c, size 0x20, virtual false, abstract: false, final false
  inline void set_isWorldBoundingBoxDirty(bool value);

  /// @brief Method set_isWorldSpaceRootUIDocument, addr 0x70d5a1c, size 0x20, virtual false, abstract: false, final false
  inline void set_isWorldSpaceRootUIDocument(bool value);

  /// @brief Method set_isWorldTransformDirty, addr 0x70d5a48, size 0x10, virtual false, abstract: false, final false
  inline void set_isWorldTransformDirty(bool value);

  /// @brief Method set_isWorldTransformInverseDirty, addr 0x70d5a58, size 0x20, virtual false, abstract: false, final false
  inline void set_isWorldTransformInverseDirty(bool value);

  /// @brief Method set_languageDirection, addr 0x70d934c, size 0xa0, virtual false, abstract: false, final false
  inline void set_languageDirection(::UnityEngine::UIElements::LanguageDirection value);

  /// @brief Method set_layout, addr 0x70d30c4, size 0x86c, virtual false, abstract: false, final false
  inline void set_layout(::UnityEngine::Rect value);

  /// @brief Method set_localLanguageDirection, addr 0x70d93ec, size 0xfc, virtual false, abstract: false, final false
  inline void set_localLanguageDirection(::UnityEngine::UIElements::LanguageDirection value);

  /// @brief Method set_name, addr 0x70d6964, size 0xb8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_needs3DBounds, addr 0x70d42f8, size 0x20, virtual false, abstract: false, final false
  inline void set_needs3DBounds(bool value);

  /// @brief Method set_pickingMode, addr 0x70d68a8, size 0xb4, virtual false, abstract: false, final false
  inline void set_pickingMode(::UnityEngine::UIElements::PickingMode value);

  /// @brief Method set_pseudoStates, addr 0x70d64f0, size 0x64, virtual false, abstract: false, final false
  inline void set_pseudoStates(::UnityEngine::UIElements::PseudoStates value);

  /// @brief Method set_receivesHierarchyGeometryChangedEvents, addr 0x70d649c, size 0x20, virtual false, abstract: false, final false
  inline void set_receivesHierarchyGeometryChangedEvents(bool value);

  /// @brief Method set_renderHints, addr 0x70d2aec, size 0x48, virtual false, abstract: false, final false
  inline void set_renderHints(::UnityEngine::UIElements::RenderHints value);

  /// @brief Method set_requireMeasureFunction, addr 0x70d9eb0, size 0xa0, virtual false, abstract: false, final false
  inline void set_requireMeasureFunction(bool value);

  /// @brief Method set_styleInitialized, addr 0x70d6c74, size 0x20, virtual false, abstract: false, final false
  inline void set_styleInitialized(bool value);

  /// @brief Method set_tooltip, addr 0x70e064c, size 0x194, virtual false, abstract: false, final false
  inline void set_tooltip(::StringW value);

  /// @brief Method set_usageHints, addr 0x70d2a00, size 0xec, virtual false, abstract: false, final false
  inline void set_usageHints(::UnityEngine::UIElements::UsageHints value);

  /// @brief Method set_userData, addr 0x70d250c, size 0xcc, virtual false, abstract: false, final false
  inline void set_userData(::System::Object* value);

  /// @brief Method set_viewDataKey, addr 0x70d2394, size 0xc4, virtual false, abstract: false, final false
  inline void set_viewDataKey(::StringW value);

  /// @brief Method set_visible, addr 0x70d94f0, size 0x160, virtual false, abstract: false, final false
  inline void set_visible(bool value);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method set_visualTreeAssetSource, addr 0x70de320, size 0x8, virtual false, abstract: false, final false
  inline void set_visualTreeAssetSource(::UnityEngine::UIElements::VisualTreeAsset* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement(VisualElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement(VisualElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4895 };

  /// @brief Field k_LinkedTemplateAssetOwnerPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_LinkedTemplateAssetOwnerPropertyName{ u"--unity-linked-template-asset-owner" };

  /// @brief Field k_RootVisualContainerName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_RootVisualContainerName{ u"rootVisualContainer" };

  /// @brief Field k_VisualElementAssetPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_VisualElementAssetPropertyName{ u"--unity-visual-element-asset-property" };

  /// @brief Field worldBoundingBoxDirtyDependencies value: I32(25)
  static ::UnityEngine::UIElements::VisualElementFlags const worldBoundingBoxDirtyDependencies;

  /// @brief Field worldTransformInverseDirtyDependencies value: I32(3)
  static ::UnityEngine::UIElements::VisualElementFlags const worldTransformInverseDirtyDependencies;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t ____UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField;

  /// @brief Field m_Name, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_Name;

  /// @brief Field m_ClassList, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_ClassList;

  /// @brief Field m_PropertyBag, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::PropertyName, ::System::Object*>* ___m_PropertyBag;

  /// @brief Field m_Flags, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::UIElements::VisualElementFlags ___m_Flags;

  /// @brief Field m_ViewDataKey, offset: 0x58, size: 0x8, def value: None
  ::StringW ___m_ViewDataKey;

  /// @brief Field m_RenderHints, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::UIElements::RenderHints ___m_RenderHints;

  /// @brief Field lastLayout, offset: 0x64, size: 0x10, def value: None
  ::UnityEngine::Rect ___lastLayout;

  /// @brief Field lastPseudoPadding, offset: 0x74, size: 0x10, def value: None
  ::UnityEngine::Rect ___lastPseudoPadding;

  /// @brief Field renderData, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderData* ___renderData;

  /// @brief Field nestedRenderData, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderData* ___nestedRenderData;

  /// @brief Field hierarchyDepth, offset: 0x98, size: 0x4, def value: None
  int32_t ___hierarchyDepth;

  /// @brief Field insertionIndex, offset: 0x9c, size: 0x4, def value: None
  int32_t ___insertionIndex;

  /// @brief Field m_Layout, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_Layout;

  /// @brief Field m_BoundingBox, offset: 0xb0, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_BoundingBox;

  /// @brief Field m_WorldBoundingBox, offset: 0xc0, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_WorldBoundingBox;

  /// @brief Field m_WorldTransformCache, offset: 0xd0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_WorldTransformCache;

  /// @brief Field m_WorldTransformInverseCache, offset: 0x110, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_WorldTransformInverseCache;

  /// @brief Field triggerPseudoMask, offset: 0x150, size: 0x4, def value: None
  ::UnityEngine::UIElements::PseudoStates ___triggerPseudoMask;

  /// @brief Field dependencyPseudoMask, offset: 0x154, size: 0x4, def value: None
  ::UnityEngine::UIElements::PseudoStates ___dependencyPseudoMask;

  /// @brief Field m_PseudoStates, offset: 0x158, size: 0x4, def value: None
  ::UnityEngine::UIElements::PseudoStates ___m_PseudoStates;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <containedPointerIds>k__BackingField, offset: 0x15c, size: 0x4, def value: None
  int32_t ____containedPointerIds_k__BackingField;

  /// @brief Field m_PickingMode, offset: 0x160, size: 0x4, def value: None
  ::UnityEngine::UIElements::PickingMode ___m_PickingMode;

  /// @brief Field m_LayoutNode, offset: 0x168, size: 0x40, def value: None
  ::UnityEngine::UIElements::Layout::LayoutNode ___m_LayoutNode;

  /// @brief Field m_Style, offset: 0x1a8, size: 0x50, def value: None
  ::UnityEngine::UIElements::ComputedStyle ___m_Style;

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Field variableContext, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleVariableContext* ___variableContext;

  /// @brief Field inheritedStylesHash, offset: 0x200, size: 0x4, def value: None
  int32_t ___inheritedStylesHash;

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIToolkitAuthoringModule" })]
  /// @brief Field controlid, offset: 0x204, size: 0x4, def value: None
  uint32_t ___controlid;

  /// @brief Field imguiContainerDescendantCount, offset: 0x208, size: 0x4, def value: None
  int32_t ___imguiContainerDescendantCount;

  /// @brief Field m_EnabledSelf, offset: 0x20c, size: 0x1, def value: None
  bool ___m_EnabledSelf;

  /// @brief Field m_LanguageDirection, offset: 0x210, size: 0x4, def value: None
  ::UnityEngine::UIElements::LanguageDirection ___m_LanguageDirection;

  /// @brief Field m_LocalLanguageDirection, offset: 0x214, size: 0x4, def value: None
  ::UnityEngine::UIElements::LanguageDirection ___m_LocalLanguageDirection;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <generateVisualContent>k__BackingField, offset: 0x218, size: 0x8, def value: None
  ::System::Action_1<Il2CppObject*>* ____generateVisualContent_k__BackingField;

  /// @brief Field m_RunningAnimations, offset: 0x220, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* ___m_RunningAnimations;

  /// @brief Field m_DataSource, offset: 0x228, size: 0x8, def value: None
  ::System::Object* ___m_DataSource;

  /// @brief Field m_DataSourcePath, offset: 0x230, size: 0x8, def value: None
  ::UnityEngine::UIElements::PathRef* ___m_DataSourcePath;

  /// @brief Field m_Bindings, offset: 0x238, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Binding*>* ___m_Bindings;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <dataSourceType>k__BackingField, offset: 0x240, size: 0x8, def value: None
  ::System::Type* ____dataSourceType_k__BackingField;

  /// @brief Field m_TrickleDownHandleEventCategories, offset: 0x248, size: 0x4, def value: None
  int32_t ___m_TrickleDownHandleEventCategories;

  /// @brief Field m_BubbleUpHandleEventCategories, offset: 0x24c, size: 0x4, def value: None
  int32_t ___m_BubbleUpHandleEventCategories;

  /// @brief Field m_BubbleUpEventCallbackCategories, offset: 0x250, size: 0x4, def value: None
  int32_t ___m_BubbleUpEventCallbackCategories;

  /// @brief Field m_TrickleDownEventCallbackCategories, offset: 0x254, size: 0x4, def value: None
  int32_t ___m_TrickleDownEventCallbackCategories;

  /// @brief Field m_EventInterestSelfCategories, offset: 0x258, size: 0x4, def value: None
  int32_t ___m_EventInterestSelfCategories;

  /// @brief Field m_CachedEventInterestParentCategories, offset: 0x25c, size: 0x4, def value: None
  int32_t ___m_CachedEventInterestParentCategories;

  /// @brief Field m_NextParentCachedVersion, offset: 0x260, size: 0x4, def value: None
  uint32_t ___m_NextParentCachedVersion;

  /// @brief Field m_NextParentRequiredVersion, offset: 0x264, size: 0x4, def value: None
  uint32_t ___m_NextParentRequiredVersion;

  /// @brief Field m_CachedNextParentWithEventInterests, offset: 0x268, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CachedNextParentWithEventInterests;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <hierarchy>k__BackingField, offset: 0x270, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement_Hierarchy ____hierarchy_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <cacheAsBitmap>k__BackingField, offset: 0x278, size: 0x1, def value: None
  bool ____cacheAsBitmap_k__BackingField;

  /// @brief Field m_PhysicalParent, offset: 0x280, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_PhysicalParent;

  /// @brief Field m_LogicalParent, offset: 0x288, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_LogicalParent;

  /// @brief Field m_Children, offset: 0x290, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* ___m_Children;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <elementPanel>k__BackingField, offset: 0x298, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ____elementPanel_k__BackingField;

  /// @brief Field m_VisualTreeAssetSource, offset: 0x2a0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ___m_VisualTreeAssetSource;

  /// @brief Field inlineStyleAccess, offset: 0x2a8, size: 0x8, def value: None
  ::UnityEngine::UIElements::InlineStyleAccess* ___inlineStyleAccess;

  /// @brief Field resolvedStyleAccess, offset: 0x2b0, size: 0x8, def value: None
  ::UnityEngine::UIElements::ResolvedStyleAccess* ___resolvedStyleAccess;

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Field styleSheetList, offset: 0x2b8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* ___styleSheetList;

  /// @brief Field m_TypeData, offset: 0x2c0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement_TypeData* ___m_TypeData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_Name) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_ClassList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_PropertyBag) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_Flags) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_ViewDataKey) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_RenderHints) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___lastLayout) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___lastPseudoPadding) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___renderData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___nestedRenderData) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___hierarchyDepth) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___insertionIndex) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_Layout) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_BoundingBox) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_WorldBoundingBox) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_WorldTransformCache) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_WorldTransformInverseCache) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___triggerPseudoMask) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___dependencyPseudoMask) == 0x154, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_PseudoStates) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____containedPointerIds_k__BackingField) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_PickingMode) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_LayoutNode) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_Style) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___variableContext) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___inheritedStylesHash) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___controlid) == 0x204, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___imguiContainerDescendantCount) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_EnabledSelf) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_LanguageDirection) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_LocalLanguageDirection) == 0x214, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____generateVisualContent_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_RunningAnimations) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_DataSource) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_DataSourcePath) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_Bindings) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____dataSourceType_k__BackingField) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_TrickleDownHandleEventCategories) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_BubbleUpHandleEventCategories) == 0x24c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_BubbleUpEventCallbackCategories) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_TrickleDownEventCallbackCategories) == 0x254, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_EventInterestSelfCategories) == 0x258, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_CachedEventInterestParentCategories) == 0x25c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_NextParentCachedVersion) == 0x260, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_NextParentRequiredVersion) == 0x264, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_CachedNextParentWithEventInterests) == 0x268, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____hierarchy_k__BackingField) == 0x270, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____cacheAsBitmap_k__BackingField) == 0x278, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_PhysicalParent) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_LogicalParent) == 0x288, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_Children) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____elementPanel_k__BackingField) == 0x298, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_VisualTreeAssetSource) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___inlineStyleAccess) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___resolvedStyleAccess) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___styleSheetList) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_TypeData) == 0x2c0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualElement) == 0x2c8, "Size mismatch!");

} // namespace UnityEngine::UIElements
