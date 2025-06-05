#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__ITransitionAnimations_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__StyleValues_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainVEData_def.hpp"
#include "UnityEngine/UIElements/zzzz__ComputedStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICustomStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__IExperimentalFeatures_def.hpp"
#include "UnityEngine/UIElements/zzzz__IResolvedStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStylePropertyAnimations_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITransform_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementPanelActivatable_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduler_def.hpp"
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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
template <typename TKey, typename TValue> struct KeyValuePair_2;
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
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyValue;
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
struct ComputedStyle;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
template <typename T> struct CustomStyleProperty_1;
}
namespace UnityEngine::UIElements {
struct DispatchMode;
}
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
struct EventCategory;
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
class ITransform;
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
struct LanguageDirection;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine::UIElements {
struct PickingMode;
}
namespace UnityEngine::UIElements {
struct PseudoStates;
}
namespace UnityEngine::UIElements {
struct RenderHints;
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
struct TextShadow;
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
class VisualElementPanelActivator;
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
struct VisualElement_RenderTargetMode;
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
class VisualElement___c__DisplayClass492_0;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
namespace UnityEngine::Yoga {
struct YogaMeasureMode;
}
namespace UnityEngine::Yoga {
class YogaNode;
}
namespace UnityEngine::Yoga {
struct YogaSize;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
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
struct VisualElement_RenderTargetMode;
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
class VisualElement___c__DisplayClass492_0;
}
namespace UnityEngine::UIElements {
struct VisualElement_Hierarchy;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::VisualElement_MeasureMode);
MARK_VAL_T(::UnityEngine::UIElements::VisualElement_RenderTargetMode);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElement);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElement_CustomStyleAccess);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElement_SimpleScheduledItem);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElement_TimerStateScheduledItem);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElement_TypeData);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElement_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElement_UxmlTraits);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::VisualElement_VisualElementScheduledItem_1);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElement___c__DisplayClass492_0);
MARK_VAL_T(::UnityEngine::UIElements::VisualElement_Hierarchy);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElement/UxmlFactory
class CORDL_TYPE VisualElement_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::VisualElement_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4a7f5f4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement_UxmlFactory(VisualElement_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement_UxmlFactory(VisualElement_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6069 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElement_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElement/UxmlTraits
class CORDL_TYPE VisualElement_UxmlTraits : public ::UnityEngine::UIElements::UxmlTraits {
public:
  // Declarations
  /// @brief Field <focusIndex>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__focusIndex_k__BackingField,
                      put = __cordl_internal_set__focusIndex_k__BackingField)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* _focusIndex_k__BackingField;

  /// @brief Field <focusable>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__focusable_k__BackingField,
                      put = __cordl_internal_set__focusable_k__BackingField)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* _focusable_k__BackingField;

  __declspec(property(get = get_focusIndex)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* focusIndex;

  __declspec(property(get = get_focusable)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* focusable;

  /// @brief Field m_Class, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Class, put = __cordl_internal_set_m_Class)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Class;

  /// @brief Field m_ContentContainer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentContainer, put = __cordl_internal_set_m_ContentContainer)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_ContentContainer;

  /// @brief Field m_Name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Name;

  /// @brief Field m_PickingMode, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PickingMode,
                      put = __cordl_internal_set_m_PickingMode)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::PickingMode>* m_PickingMode;

  /// @brief Field m_Style, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Style, put = __cordl_internal_set_m_Style)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Style;

  /// @brief Field m_TabIndex, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TabIndex, put = __cordl_internal_set_m_TabIndex)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_TabIndex;

  /// @brief Field m_Tooltip, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Tooltip, put = __cordl_internal_set_m_Tooltip)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Tooltip;

  /// @brief Field m_UsageHints, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UsageHints,
                      put = __cordl_internal_set_m_UsageHints)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::UsageHints>* m_UsageHints;

  /// @brief Field m_ViewDataKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ViewDataKey, put = __cordl_internal_set_m_ViewDataKey)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_ViewDataKey;

  /// @brief Method Init, addr 0x4a7f64c, size 0x294, virtual true, abstract: false, final false
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

  constexpr void __cordl_internal_set_m_Name(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_PickingMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::PickingMode>* value);

  constexpr void __cordl_internal_set_m_Style(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_TabIndex(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Tooltip(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_UsageHints(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::UsageHints>* value);

  constexpr void __cordl_internal_set_m_ViewDataKey(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4a7f8e0, size 0x44c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_focusIndex, addr 0x4a7f63c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UxmlIntAttributeDescription* get_focusIndex();

  /// @brief Method get_focusable, addr 0x4a7f644, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UxmlBoolAttributeDescription* get_focusable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement_UxmlTraits(VisualElement_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement_UxmlTraits(VisualElement_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6070 };

  /// @brief Field m_Name, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Name;

  /// @brief Field m_ViewDataKey, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_ViewDataKey;

  /// @brief Field m_PickingMode, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::PickingMode>* ___m_PickingMode;

  /// @brief Field m_Tooltip, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Tooltip;

  /// @brief Field m_UsageHints, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::UsageHints>* ___m_UsageHints;

  /// @brief Field <focusIndex>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ____focusIndex_k__BackingField;

  /// @brief Field m_TabIndex, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_TabIndex;

  /// @brief Field <focusable>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ____focusable_k__BackingField;

  /// @brief Field m_Class, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Class;

  /// @brief Field m_ContentContainer, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_ContentContainer;

  /// @brief Field m_Style, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Style;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_Name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_ViewDataKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_PickingMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_Tooltip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_UsageHints) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ____focusIndex_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_TabIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ____focusable_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_Class) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_ContentContainer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_UxmlTraits, ___m_Style) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElement_UxmlTraits, 0x70>, "Size mismatch!");

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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VisualElement_MeasureMode(int32_t value__) noexcept;

  /// @brief Field AtMost value: I32(2)
  static ::UnityEngine::UIElements::VisualElement_MeasureMode const AtMost;

  /// @brief Field Exactly value: I32(1)
  static ::UnityEngine::UIElements::VisualElement_MeasureMode const Exactly;

  /// @brief Field Undefined value: I32(0)
  static ::UnityEngine::UIElements::VisualElement_MeasureMode const Undefined;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6071 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElement_MeasureMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElement_MeasureMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualElement/RenderTargetMode
struct CORDL_TYPE VisualElement_RenderTargetMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VisualElement_RenderTargetMode_Unwrapped
  enum struct __VisualElement_RenderTargetMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_NoColorConversion = static_cast<int32_t>(0x1),
    __E_LinearToGamma = static_cast<int32_t>(0x2),
    __E_GammaToLinear = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VisualElement_RenderTargetMode_Unwrapped() const noexcept {
    return static_cast<__VisualElement_RenderTargetMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_RenderTargetMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VisualElement_RenderTargetMode(int32_t value__) noexcept;

  /// @brief Field GammaToLinear value: I32(3)
  static ::UnityEngine::UIElements::VisualElement_RenderTargetMode const GammaToLinear;

  /// @brief Field LinearToGamma value: I32(2)
  static ::UnityEngine::UIElements::VisualElement_RenderTargetMode const LinearToGamma;

  /// @brief Field NoColorConversion value: I32(1)
  static ::UnityEngine::UIElements::VisualElement_RenderTargetMode const NoColorConversion;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::VisualElement_RenderTargetMode const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6072 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElement_RenderTargetMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElement_RenderTargetMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
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

  /// @brief Method Add, addr 0x4a7fd6c, size 0x78, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method BringToFront, addr 0x4a80a30, size 0xb4, virtual false, abstract: false, final false
  inline void BringToFront(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method Children, addr 0x4a80df8, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualElement*>* Children();

  /// @brief Method Clear, addr 0x4a80714, size 0x31c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ElementAt, addr 0x4a80df4, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* ElementAt(int32_t index);

  /// @brief Method Equals, addr 0x4a80e30, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a80e14, size 0x10, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::UIElements::VisualElement_Hierarchy other);

  /// @brief Method GetHashCode, addr 0x4a80ea8, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IndexOf, addr 0x4a80d94, size 0x60, virtual false, abstract: false, final false
  inline int32_t IndexOf(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method Insert, addr 0x4a7fe34, size 0x2f0, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method MoveChildElement, addr 0x4a80ae4, size 0xe0, virtual false, abstract: false, final false
  inline void MoveChildElement(::UnityEngine::UIElements::VisualElement* child, int32_t currentIndex, int32_t nextIndex);

  /// @brief Method PlaceBehind, addr 0x4a80c5c, size 0xd8, virtual false, abstract: false, final false
  inline void PlaceBehind(::UnityEngine::UIElements::VisualElement* child, ::UnityEngine::UIElements::VisualElement* over);

  /// @brief Method PutChildAtIndex, addr 0x4a80124, size 0x13c, virtual false, abstract: false, final false
  inline void PutChildAtIndex(::UnityEngine::UIElements::VisualElement* child, int32_t index);

  /// @brief Method ReleaseChildList, addr 0x4a80634, size 0xe0, virtual false, abstract: false, final false
  inline void ReleaseChildList();

  /// @brief Method Remove, addr 0x4a802b4, size 0xec, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method RemoveAt, addr 0x4a803a0, size 0x218, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveChildAtIndex, addr 0x4a805b8, size 0x7c, virtual false, abstract: false, final false
  inline void RemoveChildAtIndex(int32_t index);

  /// @brief Method SendToBack, addr 0x4a80bc4, size 0x98, virtual false, abstract: false, final false
  inline void SendToBack(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method SetParent, addr 0x4a80260, size 0x54, virtual false, abstract: false, final false
  inline void SetParent(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x4a7fd64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method get_Item, addr 0x4a80d34, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_Item(int32_t key);

  /// @brief Method get_childCount, addr 0x4a7fde4, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_childCount();

  /// @brief Method get_children, addr 0x4a7fd48, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* get_children();

  /// @brief Method get_parent, addr 0x4a7fd2c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_parent();

  /// @brief Method op_Equality, addr 0x4a80e24, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::VisualElement_Hierarchy x, ::UnityEngine::UIElements::VisualElement_Hierarchy y);

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_Hierarchy();

  // Ctor Parameters [CppParam { name: "m_Owner", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }]
  constexpr VisualElement_Hierarchy(::UnityEngine::UIElements::VisualElement* m_Owner) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6073 };

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

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElement_Hierarchy, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.IVisualElementPanelActivatable, UnityEngine.UIElements.IVisualElementScheduledItem, UnityEngine.UIElements.ScheduledItem
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem
class CORDL_TYPE VisualElement_BaseVisualElementScheduledItem : public ::UnityEngine::UIElements::ScheduledItem {
public:
  // Declarations
  /// @brief Field <element>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__element_k__BackingField, put = __cordl_internal_set__element_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _element_k__BackingField;

  __declspec(property(get = get_element, put = set_element)) ::UnityEngine::UIElements::VisualElement* element;

  /// @brief Field isScheduled, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_isScheduled, put = __cordl_internal_set_isScheduled)) bool isScheduled;

  /// @brief Field m_Activator, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Activator, put = __cordl_internal_set_m_Activator)) ::UnityEngine::UIElements::VisualElementPanelActivator* m_Activator;

  /// @brief Convert operator to "::UnityEngine::UIElements::IVisualElementPanelActivatable"
  constexpr operator ::UnityEngine::UIElements::IVisualElementPanelActivatable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IVisualElementScheduledItem"
  constexpr operator ::UnityEngine::UIElements::IVisualElementScheduledItem*() noexcept;

  /// @brief Method CanBeActivated, addr 0x4a812a4, size 0x3c, virtual true, abstract: false, final true
  inline bool CanBeActivated();

  /// @brief Method Every, addr 0x4a80f78, size 0xa4, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* Every(int64_t intervalMs);

  /// @brief Method ExecuteLater, addr 0x4a8109c, size 0x3c, virtual true, abstract: false, final true
  inline void ExecuteLater(int64_t delayMs);

  static inline ::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem* New_ctor(::UnityEngine::UIElements::VisualElement* handler);

  /// @brief Method OnItemUnscheduled, addr 0x4a8101c, size 0x40, virtual true, abstract: false, final false
  inline void OnItemUnscheduled();

  /// @brief Method OnPanelActivate, addr 0x4a810d8, size 0xf0, virtual true, abstract: false, final true
  inline void OnPanelActivate();

  /// @brief Method OnPanelDeactivate, addr 0x4a811c8, size 0xdc, virtual true, abstract: false, final true
  inline void OnPanelDeactivate();

  /// @brief Method Pause, addr 0x4a8107c, size 0x20, virtual true, abstract: false, final true
  inline void Pause();

  /// @brief Method Resume, addr 0x4a8105c, size 0x20, virtual true, abstract: false, final true
  inline void Resume();

  /// @brief Method StartingIn, addr 0x4a80f70, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* StartingIn(int64_t delayMs);

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__element_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__element_k__BackingField();

  constexpr bool const& __cordl_internal_get_isScheduled() const;

  constexpr bool& __cordl_internal_get_isScheduled();

  constexpr ::UnityEngine::UIElements::VisualElementPanelActivator* const& __cordl_internal_get_m_Activator() const;

  constexpr ::UnityEngine::UIElements::VisualElementPanelActivator*& __cordl_internal_get_m_Activator();

  constexpr void __cordl_internal_set__element_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_isScheduled(bool value);

  constexpr void __cordl_internal_set_m_Activator(::UnityEngine::UIElements::VisualElementPanelActivator* value);

  /// @brief Method .ctor, addr 0x4a80ed0, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* handler);

  /// @brief Method get_element, addr 0x4a80ec0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::VisualElement* get_element();

  /// @brief Convert to "::UnityEngine::UIElements::IVisualElementPanelActivatable"
  constexpr ::UnityEngine::UIElements::IVisualElementPanelActivatable* i___UnityEngine__UIElements__IVisualElementPanelActivatable() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IVisualElementScheduledItem"
  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* i___UnityEngine__UIElements__IVisualElementScheduledItem() noexcept;

  /// @brief Method set_element, addr 0x4a80ec8, size 0x8, virtual false, abstract: false, final false
  inline void set_element(::UnityEngine::UIElements::VisualElement* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_BaseVisualElementScheduledItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_BaseVisualElementScheduledItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement_BaseVisualElementScheduledItem(VisualElement_BaseVisualElementScheduledItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_BaseVisualElementScheduledItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement_BaseVisualElementScheduledItem(VisualElement_BaseVisualElementScheduledItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6074 };

  /// @brief Field <element>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____element_k__BackingField;

  /// @brief Field isScheduled, offset: 0x40, size: 0x1, def value: None
  bool ___isScheduled;

  /// @brief Field m_Activator, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElementPanelActivator* ___m_Activator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem, ____element_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem, ___isScheduled) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem, ___m_Activator) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem, 0x50>, "Size mismatch!");

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
  /// @brief Field updateEvent, offset 0x50, size 0x8
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
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_VisualElementScheduledItem_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement_VisualElementScheduledItem_1(VisualElement_VisualElementScheduledItem_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_VisualElementScheduledItem_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement_VisualElementScheduledItem_1(VisualElement_VisualElementScheduledItem_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6075 };

  /// @brief Field updateEvent, offset: 0x50, size: 0x8, def value: None
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

  /// @brief Method PerformTimerUpdate, addr 0x4a81340, size 0x34, virtual true, abstract: false, final false
  inline void PerformTimerUpdate(::UnityEngine::UIElements::TimerState state);

  /// @brief Method .ctor, addr 0x4a812e0, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* handler, ::System::Action_1<::UnityEngine::UIElements::TimerState>* updateEvent);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_TimerStateScheduledItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_TimerStateScheduledItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement_TimerStateScheduledItem(VisualElement_TimerStateScheduledItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_TimerStateScheduledItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement_TimerStateScheduledItem(VisualElement_TimerStateScheduledItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6076 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElement_TimerStateScheduledItem, 0x58>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.VisualElement::VisualElementScheduledItem`1<ActionType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElement/SimpleScheduledItem
class CORDL_TYPE VisualElement_SimpleScheduledItem : public ::UnityEngine::UIElements::VisualElement_VisualElementScheduledItem_1<::System::Action*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::VisualElement_SimpleScheduledItem* New_ctor(::UnityEngine::UIElements::VisualElement* handler, ::System::Action* updateEvent);

  /// @brief Method PerformTimerUpdate, addr 0x4a813d4, size 0x34, virtual true, abstract: false, final false
  inline void PerformTimerUpdate(::UnityEngine::UIElements::TimerState state);

  /// @brief Method .ctor, addr 0x4a81374, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* handler, ::System::Action* updateEvent);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_SimpleScheduledItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_SimpleScheduledItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement_SimpleScheduledItem(VisualElement_SimpleScheduledItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_SimpleScheduledItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement_SimpleScheduledItem(VisualElement_SimpleScheduledItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6077 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElement_SimpleScheduledItem, 0x58>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.UIElements.ICustomStyle
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

  /// @brief Method LogCustomPropertyWarning, addr 0x4a81868, size 0xec, virtual false, abstract: false, final false
  static inline void LogCustomPropertyWarning(::StringW propertyName, ::UnityEngine::UIElements::StyleValueType valueType, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue customProp);

  static inline ::UnityEngine::UIElements::VisualElement_CustomStyleAccess* New_ctor();

  /// @brief Method SetContext, addr 0x4a81408, size 0xc, virtual false, abstract: false, final false
  inline void SetContext(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* customProperties, float_t dpiScaling);

  /// @brief Method TryGetValue, addr 0x4a81c6c, size 0xc4, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::StringW> property, ::ByRef<::StringW> value);

  /// @brief Method TryGetValue, addr 0x4a816c4, size 0x134, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> property, ::ByRef<::UnityEngine::Color> value);

  /// @brief Method TryGetValue, addr 0x4a81a5c, size 0x108, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Sprite>> property, ::ByRef<::UnityEngine::Sprite*> value);

  /// @brief Method TryGetValue, addr 0x4a81954, size 0x108, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Texture2D>> property, ::ByRef<::UnityEngine::Texture2D*> value);

  /// @brief Method TryGetValue, addr 0x4a81b64, size 0x108, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::UIElements::VectorImage>> property, ::ByRef<::UnityEngine::UIElements::VectorImage*> value);

  /// @brief Method TryGetValue, addr 0x4a81414, size 0x98, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> property, ::ByRef<float_t> value);

  /// @brief Method TryGetValue, addr 0x4a81608, size 0xbc, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<int32_t> property, ::ByRef<int32_t> value);

  /// @brief Method TryGetValue, addr 0x4a814ac, size 0x9c, virtual false, abstract: false, final false
  inline bool TryGetValue(::StringW propertyName, ::UnityEngine::UIElements::StyleValueType valueType, ::ByRef<::UnityEngine::UIElements::StyleSheets::StylePropertyValue> customProp);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* const& __cordl_internal_get_m_CustomProperties() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*& __cordl_internal_get_m_CustomProperties();

  constexpr float_t const& __cordl_internal_get_m_DpiScaling() const;

  constexpr float_t& __cordl_internal_get_m_DpiScaling();

  constexpr void __cordl_internal_set_m_CustomProperties(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* value);

  constexpr void __cordl_internal_set_m_DpiScaling(float_t value);

  /// @brief Method .ctor, addr 0x4a81d30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::UIElements::ICustomStyle"
  constexpr ::UnityEngine::UIElements::ICustomStyle* i___UnityEngine__UIElements__ICustomStyle() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_CustomStyleAccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_CustomStyleAccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement_CustomStyleAccess(VisualElement_CustomStyleAccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_CustomStyleAccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement_CustomStyleAccess(VisualElement_CustomStyleAccess const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6078 };

  /// @brief Field m_CustomProperties, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* ___m_CustomProperties;

  /// @brief Field m_DpiScaling, offset: 0x18, size: 0x4, def value: None
  float_t ___m_DpiScaling;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElement_CustomStyleAccess, ___m_CustomProperties) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_CustomStyleAccess, ___m_DpiScaling) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElement_CustomStyleAccess, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
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

  /// @brief Field m_TypeNamespace, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TypeNamespace, put = __cordl_internal_set_m_TypeNamespace)) ::StringW m_TypeNamespace;

  __declspec(property(get = get_type)) ::System::Type* type;

  __declspec(property(get = get_typeName)) ::StringW typeName;

  __declspec(property(get = get_typeNamespace)) ::StringW typeNamespace;

  static inline ::UnityEngine::UIElements::VisualElement_TypeData* New_ctor(::System::Type* type);

  constexpr ::System::Type* const& __cordl_internal_get__type_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__type_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get_m_FullTypeName() const;

  constexpr ::StringW& __cordl_internal_get_m_FullTypeName();

  constexpr ::StringW const& __cordl_internal_get_m_TypeName() const;

  constexpr ::StringW& __cordl_internal_get_m_TypeName();

  constexpr ::StringW const& __cordl_internal_get_m_TypeNamespace() const;

  constexpr ::StringW& __cordl_internal_get_m_TypeNamespace();

  constexpr void __cordl_internal_set__type_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set_m_FullTypeName(::StringW value);

  constexpr void __cordl_internal_set_m_TypeName(::StringW value);

  constexpr void __cordl_internal_set_m_TypeNamespace(::StringW value);

  /// @brief Method .ctor, addr 0x4a81d40, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_fullTypeName, addr 0x4a81db0, size 0x48, virtual false, abstract: false, final false
  inline ::StringW get_fullTypeName();

  /// @brief Method get_type, addr 0x4a81d38, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_type();

  /// @brief Method get_typeName, addr 0x4a81df8, size 0x98, virtual false, abstract: false, final false
  inline ::StringW get_typeName();

  /// @brief Method get_typeNamespace, addr 0x4a81e90, size 0x48, virtual false, abstract: false, final false
  inline ::StringW get_typeNamespace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement_TypeData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_TypeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement_TypeData(VisualElement_TypeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement_TypeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement_TypeData(VisualElement_TypeData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6079 };

  /// @brief Field <type>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____type_k__BackingField;

  /// @brief Field m_FullTypeName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_FullTypeName;

  /// @brief Field m_TypeName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_TypeName;

  /// @brief Field m_TypeNamespace, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_TypeNamespace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElement_TypeData, ____type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_TypeData, ___m_FullTypeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_TypeData, ___m_TypeName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement_TypeData, ___m_TypeNamespace) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElement_TypeData, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.UIElements.Experimental.StyleValues
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElement/<>c__DisplayClass492_0
class CORDL_TYPE VisualElement___c__DisplayClass492_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::UIElements::VisualElement* __4__this;

  /// @brief Field to, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_to, put = __cordl_internal_set_to)) ::UnityEngine::UIElements::Experimental::StyleValues to;

  static inline ::UnityEngine::UIElements::VisualElement___c__DisplayClass492_0* New_ctor();

  /// @brief Method <UnityEngine.UIElements.Experimental.ITransitionAnimations.Start>b__0, addr 0x4a81ee0, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::StyleValues _UnityEngine_UIElements_Experimental_ITransitionAnimations_Start_b__0(::UnityEngine::UIElements::VisualElement* e);

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::UIElements::Experimental::StyleValues const& __cordl_internal_get_to() const;

  constexpr ::UnityEngine::UIElements::Experimental::StyleValues& __cordl_internal_get_to();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_to(::UnityEngine::UIElements::Experimental::StyleValues value);

  /// @brief Method .ctor, addr 0x4a81ed8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement___c__DisplayClass492_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement___c__DisplayClass492_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement___c__DisplayClass492_0(VisualElement___c__DisplayClass492_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement___c__DisplayClass492_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement___c__DisplayClass492_0(VisualElement___c__DisplayClass492_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6080 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* _____4__this;

  /// @brief Field to, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::Experimental::StyleValues ___to;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElement___c__DisplayClass492_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement___c__DisplayClass492_0, ___to) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElement___c__DisplayClass492_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.Matrix4x4, UnityEngine.PropertyName, UnityEngine.Rect, UnityEngine.UIElements.ComputedStyle,
// UnityEngine.UIElements.Experimental.ITransitionAnimations, UnityEngine.UIElements.Focusable, UnityEngine.UIElements.IExperimentalFeatures, UnityEngine.UIElements.IResolvedStyle,
// UnityEngine.UIElements.IStylePropertyAnimations, UnityEngine.UIElements.ITransform, UnityEngine.UIElements.IVisualElementScheduler, UnityEngine.UIElements.LanguageDirection,
// UnityEngine.UIElements.PickingMode, UnityEngine.UIElements.PseudoStates, UnityEngine.UIElements.RenderHints, UnityEngine.UIElements.UIR.RenderChainVEData,
// UnityEngine.UIElements.VisualElement::Hierarchy, UnityEngine.UIElements.VisualElement::RenderTargetMode, UnityEngine.UIElements.VisualElementFlags
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

  using RenderTargetMode = ::UnityEngine::UIElements::VisualElement_RenderTargetMode;

  using SimpleScheduledItem = ::UnityEngine::UIElements::VisualElement_SimpleScheduledItem;

  using TimerStateScheduledItem = ::UnityEngine::UIElements::VisualElement_TimerStateScheduledItem;

  using TypeData = ::UnityEngine::UIElements::VisualElement_TypeData;

  using UxmlFactory = ::UnityEngine::UIElements::VisualElement_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::VisualElement_UxmlTraits;

  template <typename ActionType> using VisualElementScheduledItem_1 = ::UnityEngine::UIElements::VisualElement_VisualElementScheduledItem_1<ActionType>;

  using __c__DisplayClass492_0 = ::UnityEngine::UIElements::VisualElement___c__DisplayClass492_0;

  __declspec(property(get = get_Item)) ::UnityEngine::UIElements::VisualElement* Item[];

  __declspec(property(
      get = UnityEngine_UIElements_IExperimentalFeatures_get_animation)) ::UnityEngine::UIElements::Experimental::ITransitionAnimations* UnityEngine_UIElements_IExperimentalFeatures_animation;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_backgroundColor)) ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_backgroundColor;

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

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_flexDirection)) ::UnityEngine::UIElements::FlexDirection UnityEngine_UIElements_IResolvedStyle_flexDirection;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_flexGrow)) float_t UnityEngine_UIElements_IResolvedStyle_flexGrow;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_flexShrink)) float_t UnityEngine_UIElements_IResolvedStyle_flexShrink;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_height)) float_t UnityEngine_UIElements_IResolvedStyle_height;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_left)) float_t UnityEngine_UIElements_IResolvedStyle_left;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_marginBottom)) float_t UnityEngine_UIElements_IResolvedStyle_marginBottom;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_marginLeft)) float_t UnityEngine_UIElements_IResolvedStyle_marginLeft;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_marginRight)) float_t UnityEngine_UIElements_IResolvedStyle_marginRight;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_marginTop)) float_t UnityEngine_UIElements_IResolvedStyle_marginTop;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_minHeight)) ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_minHeight;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_minWidth)) ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_minWidth;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_opacity)) float_t UnityEngine_UIElements_IResolvedStyle_opacity;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_paddingBottom)) float_t UnityEngine_UIElements_IResolvedStyle_paddingBottom;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_paddingLeft)) float_t UnityEngine_UIElements_IResolvedStyle_paddingLeft;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_paddingRight)) float_t UnityEngine_UIElements_IResolvedStyle_paddingRight;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_paddingTop)) float_t UnityEngine_UIElements_IResolvedStyle_paddingTop;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_right)) float_t UnityEngine_UIElements_IResolvedStyle_right;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_scale)) ::UnityEngine::UIElements::Scale UnityEngine_UIElements_IResolvedStyle_scale;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_top)) float_t UnityEngine_UIElements_IResolvedStyle_top;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_transformOrigin)) ::UnityEngine::Vector3 UnityEngine_UIElements_IResolvedStyle_transformOrigin;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_translate)) ::UnityEngine::Vector3 UnityEngine_UIElements_IResolvedStyle_translate;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unityBackgroundImageTintColor)) ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_unityBackgroundImageTintColor;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unitySliceLeft)) int32_t UnityEngine_UIElements_IResolvedStyle_unitySliceLeft;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unitySliceRight)) int32_t UnityEngine_UIElements_IResolvedStyle_unitySliceRight;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unitySliceScale)) float_t UnityEngine_UIElements_IResolvedStyle_unitySliceScale;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unityTextOutlineColor)) ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_unityTextOutlineColor;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unityTextOutlineWidth)) float_t UnityEngine_UIElements_IResolvedStyle_unityTextOutlineWidth;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_visibility)) ::UnityEngine::UIElements::Visibility UnityEngine_UIElements_IResolvedStyle_visibility;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_width)) float_t UnityEngine_UIElements_IResolvedStyle_width;

  __declspec(property(get = UnityEngine_UIElements_IStylePropertyAnimations_get_completedAnimationCount,
                      put = UnityEngine_UIElements_IStylePropertyAnimations_set_completedAnimationCount)) int32_t UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount;

  __declspec(property(get = UnityEngine_UIElements_IStylePropertyAnimations_get_runningAnimationCount,
                      put = UnityEngine_UIElements_IStylePropertyAnimations_set_runningAnimationCount)) int32_t UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount;

  __declspec(property(get = UnityEngine_UIElements_ITransform_get_position, put = UnityEngine_UIElements_ITransform_set_position)) ::UnityEngine::Vector3 UnityEngine_UIElements_ITransform_position;

  __declspec(property(get = UnityEngine_UIElements_ITransform_get_scale)) ::UnityEngine::Vector3 UnityEngine_UIElements_ITransform_scale;

  /// @brief Field <UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField,
                      put = __cordl_internal_set__UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField)) int32_t
      _UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField,
                      put = __cordl_internal_set__UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField)) int32_t
      _UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField;

  /// @brief Field <cacheAsBitmap>k__BackingField, offset 0x381, size 0x1
  __declspec(property(get = __cordl_internal_get__cacheAsBitmap_k__BackingField, put = __cordl_internal_set__cacheAsBitmap_k__BackingField)) bool _cacheAsBitmap_k__BackingField;

  /// @brief Field <containedPointerIds>k__BackingField, offset 0x2b0, size 0x4
  __declspec(property(get = __cordl_internal_get__containedPointerIds_k__BackingField, put = __cordl_internal_set__containedPointerIds_k__BackingField)) int32_t _containedPointerIds_k__BackingField;

  /// @brief Field <elementPanel>k__BackingField, offset 0x3a0, size 0x8
  __declspec(property(get = __cordl_internal_get__elementPanel_k__BackingField,
                      put = __cordl_internal_set__elementPanel_k__BackingField)) ::UnityEngine::UIElements::BaseVisualElementPanel* _elementPanel_k__BackingField;

  /// @brief Field <enabledSelf>k__BackingField, offset 0x32c, size 0x1
  __declspec(property(get = __cordl_internal_get__enabledSelf_k__BackingField, put = __cordl_internal_set__enabledSelf_k__BackingField)) bool _enabledSelf_k__BackingField;

  /// @brief Field <generateVisualContent>k__BackingField, offset 0x338, size 0x8
  __declspec(property(get = __cordl_internal_get__generateVisualContent_k__BackingField,
                      put = __cordl_internal_set__generateVisualContent_k__BackingField)) ::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>* _generateVisualContent_k__BackingField;

  /// @brief Field <hierarchy>k__BackingField, offset 0x378, size 0x8
  __declspec(property(get = __cordl_internal_get__hierarchy_k__BackingField,
                      put = __cordl_internal_set__hierarchy_k__BackingField)) ::UnityEngine::UIElements::VisualElement_Hierarchy _hierarchy_k__BackingField;

  /// @brief Field <isRootVisualContainer>k__BackingField, offset 0x380, size 0x1
  __declspec(property(get = __cordl_internal_get__isRootVisualContainer_k__BackingField,
                      put = __cordl_internal_set__isRootVisualContainer_k__BackingField)) bool _isRootVisualContainer_k__BackingField;

  /// @brief Field <yogaNode>k__BackingField, offset 0x2b8, size 0x8
  __declspec(property(get = __cordl_internal_get__yogaNode_k__BackingField, put = __cordl_internal_set__yogaNode_k__BackingField)) ::UnityEngine::Yoga::YogaNode* _yogaNode_k__BackingField;

  __declspec(property(get = get_boundingBox)) ::UnityEngine::Rect boundingBox;

  __declspec(property(get = get_boundingBoxInParentSpace)) ::UnityEngine::Rect boundingBoxInParentSpace;

  __declspec(property(get = get_canGrabFocus)) bool canGrabFocus;

  __declspec(property(get = get_childCount)) int32_t childCount;

  __declspec(property(get = get_classList)) ::System::Collections::Generic::List_1<::StringW>* classList;

  __declspec(property(get = get_computedStyle)) ::UnityEngine::UIElements::ComputedStyle computedStyle;

  __declspec(property(get = get_containedPointerIds, put = set_containedPointerIds)) int32_t containedPointerIds;

  __declspec(property(get = get_contentContainer)) ::UnityEngine::UIElements::VisualElement* contentContainer;

  __declspec(property(get = get_contentRect)) ::UnityEngine::Rect contentRect;

  /// @brief Field controlid, offset 0x324, size 0x4
  __declspec(property(get = __cordl_internal_get_controlid, put = __cordl_internal_set_controlid)) uint32_t controlid;

  __declspec(property(get = get_customStyle)) ::UnityEngine::UIElements::ICustomStyle* customStyle;

  __declspec(property(get = get_defaultMaterial)) ::UnityW<::UnityEngine::Material> defaultMaterial;

  /// @brief Field dependencyPseudoMask, offset 0x2a8, size 0x4
  __declspec(property(get = __cordl_internal_get_dependencyPseudoMask, put = __cordl_internal_set_dependencyPseudoMask)) ::UnityEngine::UIElements::PseudoStates dependencyPseudoMask;

  __declspec(property(get = get_disableClipping, put = set_disableClipping)) bool disableClipping;

  /// @brief Field disabledUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_disabledUssClassName, put = setStaticF_disabledUssClassName)) ::StringW disabledUssClassName;

  __declspec(property(get = get_elementPanel, put = set_elementPanel)) ::UnityEngine::UIElements::BaseVisualElementPanel* elementPanel;

  __declspec(property(get = get_enableViewDataPersistence, put = set_enableViewDataPersistence)) bool enableViewDataPersistence;

  __declspec(property(get = get_enabledInHierarchy)) bool enabledInHierarchy;

  __declspec(property(get = get_enabledSelf, put = set_enabledSelf)) bool enabledSelf;

  __declspec(property(get = get_eventCallbackCategories, put = set_eventCallbackCategories)) int32_t eventCallbackCategories;

  __declspec(property(get = get_eventCallbackParentCategories)) int32_t eventCallbackParentCategories;

  __declspec(property(get = get_experimental)) ::UnityEngine::UIElements::IExperimentalFeatures* experimental;

  __declspec(property(get = get_focusController)) ::UnityEngine::UIElements::FocusController* focusController;

  __declspec(property(get = get_fullTypeName)) ::StringW fullTypeName;

  __declspec(property(get = get_generateVisualContent, put = set_generateVisualContent)) ::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>* generateVisualContent;

  __declspec(property(get = get_hasCompletedAnimations)) bool hasCompletedAnimations;

  __declspec(property(get = get_hasDefaultRotationAndScale)) bool hasDefaultRotationAndScale;

  __declspec(property(get = get_hasInlineStyle)) bool hasInlineStyle;

  __declspec(property(get = get_hasRunningAnimations)) bool hasRunningAnimations;

  __declspec(property(get = get_hierarchy, put = set_hierarchy)) ::UnityEngine::UIElements::VisualElement_Hierarchy hierarchy;

  /// @brief Field imguiContainerDescendantCount, offset 0x328, size 0x4
  __declspec(property(get = __cordl_internal_get_imguiContainerDescendantCount, put = __cordl_internal_set_imguiContainerDescendantCount)) int32_t imguiContainerDescendantCount;

  /// @brief Field inheritedStylesHash, offset 0x320, size 0x4
  __declspec(property(get = __cordl_internal_get_inheritedStylesHash, put = __cordl_internal_set_inheritedStylesHash)) int32_t inheritedStylesHash;

  /// @brief Field inlineStyleAccess, offset 0x3b0, size 0x8
  __declspec(property(get = __cordl_internal_get_inlineStyleAccess, put = __cordl_internal_set_inlineStyleAccess)) ::UnityEngine::UIElements::InlineStyleAccess* inlineStyleAccess;

  __declspec(property(get = get_isBoundingBoxDirty, put = set_isBoundingBoxDirty)) bool isBoundingBoxDirty;

  __declspec(property(get = get_isCompositeRoot, put = set_isCompositeRoot)) bool isCompositeRoot;

  __declspec(property(get = get_isEventCallbackParentCategoriesDirty, put = set_isEventCallbackParentCategoriesDirty)) bool isEventCallbackParentCategoriesDirty;

  __declspec(property(get = get_isHierarchyDisplayed, put = set_isHierarchyDisplayed)) bool isHierarchyDisplayed;

  __declspec(property(get = get_isLayoutManual, put = set_isLayoutManual)) bool isLayoutManual;

  __declspec(property(get = get_isParentEnabledInHierarchy)) bool isParentEnabledInHierarchy;

  __declspec(property(get = get_isRootVisualContainer, put = set_isRootVisualContainer)) bool isRootVisualContainer;

  __declspec(property(put = set_isWorldBoundingBoxDirty)) bool isWorldBoundingBoxDirty;

  __declspec(property(get = get_isWorldBoundingBoxOrDependenciesDirty)) bool isWorldBoundingBoxOrDependenciesDirty;

  __declspec(property(get = get_isWorldClipDirty, put = set_isWorldClipDirty)) bool isWorldClipDirty;

  __declspec(property(get = get_isWorldTransformDirty, put = set_isWorldTransformDirty)) bool isWorldTransformDirty;

  __declspec(property(put = set_isWorldTransformInverseDirty)) bool isWorldTransformInverseDirty;

  __declspec(property(get = get_isWorldTransformInverseOrDependenciesDirty)) bool isWorldTransformInverseOrDependenciesDirty;

  /// @brief Field k_GenerateVisualContentMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_GenerateVisualContentMarker, put = setStaticF_k_GenerateVisualContentMarker)) ::Unity::Profiling::ProfilerMarker k_GenerateVisualContentMarker;

  __declspec(property(get = get_languageDirection)) ::UnityEngine::UIElements::LanguageDirection languageDirection;

  /// @brief Field lastLayout, offset 0x64, size 0x10
  __declspec(property(get = __cordl_internal_get_lastLayout, put = __cordl_internal_set_lastLayout)) ::UnityEngine::Rect lastLayout;

  /// @brief Field lastPseudoPadding, offset 0x74, size 0x10
  __declspec(property(get = __cordl_internal_get_lastPseudoPadding, put = __cordl_internal_set_lastPseudoPadding)) ::UnityEngine::Rect lastPseudoPadding;

  __declspec(property(get = get_layout, put = set_layout)) ::UnityEngine::Rect layout;

  __declspec(property(get = get_localBound)) ::UnityEngine::Rect localBound;

  __declspec(property(get = get_localLanguageDirection, put = set_localLanguageDirection)) ::UnityEngine::UIElements::LanguageDirection localLanguageDirection;

  /// @brief Field m_BoundingBox, offset 0x1e0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_BoundingBox, put = __cordl_internal_set_m_BoundingBox)) ::UnityEngine::Rect m_BoundingBox;

  /// @brief Field m_CachedEventCallbackParentCategories, offset 0x36c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CachedEventCallbackParentCategories,
                      put = __cordl_internal_set_m_CachedEventCallbackParentCategories)) int32_t m_CachedEventCallbackParentCategories;

  /// @brief Field m_CachedNextParentWithEventCallback, offset 0x360, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedNextParentWithEventCallback,
                      put = __cordl_internal_set_m_CachedNextParentWithEventCallback)) ::UnityEngine::UIElements::VisualElement* m_CachedNextParentWithEventCallback;

  /// @brief Field m_Children, offset 0x398, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Children, put = __cordl_internal_set_m_Children)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* m_Children;

  /// @brief Field m_ClassList, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClassList, put = __cordl_internal_set_m_ClassList)) ::System::Collections::Generic::List_1<::StringW>* m_ClassList;

  /// @brief Field m_DefaultActionAtTargetEventCategories, offset 0x374, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultActionAtTargetEventCategories,
                      put = __cordl_internal_set_m_DefaultActionAtTargetEventCategories)) int32_t m_DefaultActionAtTargetEventCategories;

  /// @brief Field m_DefaultActionEventCategories, offset 0x370, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultActionEventCategories, put = __cordl_internal_set_m_DefaultActionEventCategories)) int32_t m_DefaultActionEventCategories;

  /// @brief Field m_EventCallbackCategories, offset 0x368, size 0x4
  __declspec(property(get = __cordl_internal_get_m_EventCallbackCategories, put = __cordl_internal_set_m_EventCallbackCategories)) int32_t m_EventCallbackCategories;

  /// @brief Field m_Flags, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags)) ::UnityEngine::UIElements::VisualElementFlags m_Flags;

  /// @brief Field m_LanguageDirection, offset 0x330, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LanguageDirection, put = __cordl_internal_set_m_LanguageDirection)) ::UnityEngine::UIElements::LanguageDirection m_LanguageDirection;

  /// @brief Field m_Layout, offset 0x1d0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Layout, put = __cordl_internal_set_m_Layout)) ::UnityEngine::Rect m_Layout;

  /// @brief Field m_LocalLanguageDirection, offset 0x334, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LocalLanguageDirection, put = __cordl_internal_set_m_LocalLanguageDirection)) ::UnityEngine::UIElements::LanguageDirection m_LocalLanguageDirection;

  /// @brief Field m_LogicalParent, offset 0x390, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LogicalParent, put = __cordl_internal_set_m_LogicalParent)) ::UnityEngine::UIElements::VisualElement* m_LogicalParent;

  /// @brief Field m_Name, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name)) ::StringW m_Name;

  /// @brief Field m_NextParentCachedVersion, offset 0x358, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NextParentCachedVersion, put = __cordl_internal_set_m_NextParentCachedVersion)) uint32_t m_NextParentCachedVersion;

  /// @brief Field m_NextParentRequiredVersion, offset 0x35c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NextParentRequiredVersion, put = __cordl_internal_set_m_NextParentRequiredVersion)) uint32_t m_NextParentRequiredVersion;

  /// @brief Field m_PhysicalParent, offset 0x388, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PhysicalParent, put = __cordl_internal_set_m_PhysicalParent)) ::UnityEngine::UIElements::VisualElement* m_PhysicalParent;

  /// @brief Field m_PickingMode, offset 0x2b4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PickingMode, put = __cordl_internal_set_m_PickingMode)) ::UnityEngine::UIElements::PickingMode m_PickingMode;

  /// @brief Field m_PropertyBag, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_PropertyBag,
      put = __cordl_internal_set_m_PropertyBag)) ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName, ::System::Object*>>* m_PropertyBag;

  /// @brief Field m_PseudoStates, offset 0x2ac, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PseudoStates, put = __cordl_internal_set_m_PseudoStates)) ::UnityEngine::UIElements::PseudoStates m_PseudoStates;

  /// @brief Field m_RenderHints, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderHints, put = __cordl_internal_set_m_RenderHints)) ::UnityEngine::UIElements::RenderHints m_RenderHints;

  /// @brief Field m_RunningAnimations, offset 0x350, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RunningAnimations,
                      put = __cordl_internal_set_m_RunningAnimations)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* m_RunningAnimations;

  /// @brief Field m_Style, offset 0x2c0, size 0x58
  __declspec(property(get = __cordl_internal_get_m_Style, put = __cordl_internal_set_m_Style)) ::UnityEngine::UIElements::ComputedStyle m_Style;

  /// @brief Field m_SubRenderTargetMode, offset 0x340, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SubRenderTargetMode,
                      put = __cordl_internal_set_m_SubRenderTargetMode)) ::UnityEngine::UIElements::VisualElement_RenderTargetMode m_SubRenderTargetMode;

  /// @brief Field m_TypeData, offset 0x3c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TypeData, put = __cordl_internal_set_m_TypeData)) ::UnityEngine::UIElements::VisualElement_TypeData* m_TypeData;

  /// @brief Field m_ViewDataKey, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ViewDataKey, put = __cordl_internal_set_m_ViewDataKey)) ::StringW m_ViewDataKey;

  /// @brief Field m_VisualTreeAssetSource, offset 0x3a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualTreeAssetSource, put = __cordl_internal_set_m_VisualTreeAssetSource)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>
      m_VisualTreeAssetSource;

  /// @brief Field m_WorldBoundingBox, offset 0x1f0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_WorldBoundingBox, put = __cordl_internal_set_m_WorldBoundingBox)) ::UnityEngine::Rect m_WorldBoundingBox;

  /// @brief Field m_WorldClip, offset 0x280, size 0x10
  __declspec(property(get = __cordl_internal_get_m_WorldClip, put = __cordl_internal_set_m_WorldClip)) ::UnityEngine::Rect m_WorldClip;

  /// @brief Field m_WorldClipIsInfinite, offset 0x2a0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_WorldClipIsInfinite, put = __cordl_internal_set_m_WorldClipIsInfinite)) bool m_WorldClipIsInfinite;

  /// @brief Field m_WorldClipMinusGroup, offset 0x290, size 0x10
  __declspec(property(get = __cordl_internal_get_m_WorldClipMinusGroup, put = __cordl_internal_set_m_WorldClipMinusGroup)) ::UnityEngine::Rect m_WorldClipMinusGroup;

  /// @brief Field m_WorldTransformCache, offset 0x200, size 0x40
  __declspec(property(get = __cordl_internal_get_m_WorldTransformCache, put = __cordl_internal_set_m_WorldTransformCache)) ::UnityEngine::Matrix4x4 m_WorldTransformCache;

  /// @brief Field m_WorldTransformInverseCache, offset 0x240, size 0x40
  __declspec(property(get = __cordl_internal_get_m_WorldTransformInverseCache, put = __cordl_internal_set_m_WorldTransformInverseCache)) ::UnityEngine::Matrix4x4 m_WorldTransformInverseCache;

  /// @brief Field m_defaultMaterial, offset 0x348, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultMaterial, put = __cordl_internal_set_m_defaultMaterial)) ::UnityW<::UnityEngine::Material> m_defaultMaterial;

  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  __declspec(property(get = get_nextParentWithEventCallback)) ::UnityEngine::UIElements::VisualElement* nextParentWithEventCallback;

  __declspec(property(get = get_paddingRect)) ::UnityEngine::Rect paddingRect;

  __declspec(property(get = get_panel)) ::UnityEngine::UIElements::IPanel* panel;

  __declspec(property(get = get_parent)) ::UnityEngine::UIElements::VisualElement* parent;

  __declspec(property(get = get_pickingMode, put = set_pickingMode)) ::UnityEngine::UIElements::PickingMode pickingMode;

  __declspec(property(get = get_positionWithLayout)) ::UnityEngine::Vector3 positionWithLayout;

  __declspec(property(get = get_pseudoStates, put = set_pseudoStates)) ::UnityEngine::UIElements::PseudoStates pseudoStates;

  __declspec(property(get = get_rect)) ::UnityEngine::Rect rect;

  /// @brief Field renderChainData, offset 0x88, size 0x148
  __declspec(property(get = __cordl_internal_get_renderChainData, put = __cordl_internal_set_renderChainData)) ::UnityEngine::UIElements::UIR::RenderChainVEData renderChainData;

  __declspec(property(get = get_renderHints, put = set_renderHints)) ::UnityEngine::UIElements::RenderHints renderHints;

  __declspec(property(get = get_requireMeasureFunction, put = set_requireMeasureFunction)) bool requireMeasureFunction;

  __declspec(property(get = get_resolvedStyle)) ::UnityEngine::UIElements::IResolvedStyle* resolvedStyle;

  /// @brief Field s_CustomStyleAccess, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CustomStyleAccess, put = setStaticF_s_CustomStyleAccess)) ::UnityEngine::UIElements::VisualElement_CustomStyleAccess* s_CustomStyleAccess;

  /// @brief Field s_EmptyClassList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_EmptyClassList, put = setStaticF_s_EmptyClassList)) ::System::Collections::Generic::List_1<::StringW>* s_EmptyClassList;

  /// @brief Field s_EmptyList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_EmptyList, put = setStaticF_s_EmptyList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* s_EmptyList;

  /// @brief Field s_InfiniteRect, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_InfiniteRect, put = setStaticF_s_InfiniteRect)) ::UnityEngine::Rect s_InfiniteRect;

  /// @brief Field s_InternalStyleSheetPath, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InternalStyleSheetPath, put = setStaticF_s_InternalStyleSheetPath)) ::System::Text::RegularExpressions::Regex* s_InternalStyleSheetPath;

  /// @brief Field s_NextId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_NextId, put = setStaticF_s_NextId)) uint32_t s_NextId;

  /// @brief Field s_NextParentVersion, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_NextParentVersion, put = setStaticF_s_NextParentVersion)) uint32_t s_NextParentVersion;

  /// @brief Field s_TypeData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TypeData,
                      put = setStaticF_s_TypeData)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::VisualElement_TypeData*>* s_TypeData;

  /// @brief Field s_runtimeMaterial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_runtimeMaterial, put = setStaticF_s_runtimeMaterial)) ::UnityW<::UnityEngine::Material> s_runtimeMaterial;

  __declspec(property(get = get_scaledPixelsPerPoint)) float_t scaledPixelsPerPoint;

  __declspec(property(get = get_schedule)) ::UnityEngine::UIElements::IVisualElementScheduler* schedule;

  __declspec(property(get = get_style)) ::UnityEngine::UIElements::IStyle* style;

  __declspec(property(get = get_styleAnimation)) ::UnityEngine::UIElements::IStylePropertyAnimations* styleAnimation;

  __declspec(property(get = get_styleInitialized, put = set_styleInitialized)) bool styleInitialized;

  /// @brief Field styleSheetList, offset 0x3b8, size 0x8
  __declspec(property(get = __cordl_internal_get_styleSheetList,
                      put = __cordl_internal_set_styleSheetList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* styleSheetList;

  __declspec(property(get = get_styleSheets)) ::UnityEngine::UIElements::VisualElementStyleSheetSet styleSheets;

  __declspec(property(get = get_subRenderTargetMode)) ::UnityEngine::UIElements::VisualElement_RenderTargetMode subRenderTargetMode;

  __declspec(property(get = get_tooltip, put = set_tooltip)) ::StringW tooltip;

  /// @brief Field tooltipPropertyKey, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_tooltipPropertyKey, put = setStaticF_tooltipPropertyKey)) ::UnityEngine::PropertyName tooltipPropertyKey;

  __declspec(property(get = get_transform)) ::UnityEngine::UIElements::ITransform* transform;

  /// @brief Field triggerPseudoMask, offset 0x2a4, size 0x4
  __declspec(property(get = __cordl_internal_get_triggerPseudoMask, put = __cordl_internal_set_triggerPseudoMask)) ::UnityEngine::UIElements::PseudoStates triggerPseudoMask;

  __declspec(property(get = get_typeData)) ::UnityEngine::UIElements::VisualElement_TypeData* typeData;

  __declspec(property(get = get_typeName)) ::StringW typeName;

  __declspec(property(get = get_usageHints, put = set_usageHints)) ::UnityEngine::UIElements::UsageHints usageHints;

  __declspec(property(get = get_userData, put = set_userData)) ::System::Object* userData;

  /// @brief Field userDataPropertyKey, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_userDataPropertyKey, put = setStaticF_userDataPropertyKey)) ::UnityEngine::PropertyName userDataPropertyKey;

  /// @brief Field variableContext, offset 0x318, size 0x8
  __declspec(property(get = __cordl_internal_get_variableContext, put = __cordl_internal_set_variableContext)) ::UnityEngine::UIElements::StyleVariableContext* variableContext;

  __declspec(property(get = get_viewDataKey, put = set_viewDataKey)) ::StringW viewDataKey;

  __declspec(property(get = get_visible, put = set_visible)) bool visible;

  __declspec(property(put = set_visualTreeAssetSource)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> visualTreeAssetSource;

  __declspec(property(get = get_worldBound)) ::UnityEngine::Rect worldBound;

  __declspec(property(get = get_worldBoundingBox)) ::UnityEngine::Rect worldBoundingBox;

  __declspec(property(get = get_worldClip)) ::UnityEngine::Rect worldClip;

  __declspec(property(get = get_worldClipIsInfinite)) bool worldClipIsInfinite;

  __declspec(property(get = get_worldClipMinusGroup)) ::UnityEngine::Rect worldClipMinusGroup;

  __declspec(property(get = get_worldTransform)) ::UnityEngine::Matrix4x4 worldTransform;

  __declspec(property(get = get_worldTransformInverse)) ::UnityEngine::Matrix4x4 worldTransformInverse;

  __declspec(property(get = get_worldTransformRef)) ::UnityEngine::Matrix4x4 worldTransformRef;

  __declspec(property(get = get_yogaNode, put = set_yogaNode)) ::UnityEngine::Yoga::YogaNode* yogaNode;

  /// @brief Convert operator to "::UnityEngine::UIElements::Experimental::ITransitionAnimations"
  constexpr operator ::UnityEngine::UIElements::Experimental::ITransitionAnimations*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IExperimentalFeatures"
  constexpr operator ::UnityEngine::UIElements::IExperimentalFeatures*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IResolvedStyle"
  constexpr operator ::UnityEngine::UIElements::IResolvedStyle*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IStylePropertyAnimations"
  constexpr operator ::UnityEngine::UIElements::IStylePropertyAnimations*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::ITransform"
  constexpr operator ::UnityEngine::UIElements::ITransform*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IVisualElementScheduler"
  constexpr operator ::UnityEngine::UIElements::IVisualElementScheduler*() noexcept;

  /// @brief Method Add, addr 0x4a7d538, size 0xb0, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method AddStyleSheetPath, addr 0x4a7ed84, size 0x234, virtual false, abstract: false, final false
  inline void AddStyleSheetPath(::StringW sheetPath);

  /// @brief Method AddToClassList, addr 0x4a790c0, size 0x210, virtual false, abstract: false, final false
  inline void AddToClassList(::StringW className);

  /// @brief Method AssignMeasureFunction, addr 0x4a79dc8, size 0x90, virtual false, abstract: false, final false
  inline void AssignMeasureFunction();

  /// @brief Method AssignStyleValues, addr 0x4a7a960, size 0x15f4, virtual false, abstract: false, final false
  static inline void AssignStyleValues(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::Experimental::StyleValues src);

  /// @brief Method BringToFront, addr 0x4a7dba8, size 0x64, virtual false, abstract: false, final false
  inline void BringToFront();

  /// @brief Method CalculateConservativeRect, addr 0x4a7e6e8, size 0x22c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect CalculateConservativeRect(::ByRef<::UnityEngine::Matrix4x4> matrix, ::UnityEngine::Rect rect);

  /// @brief Method ChangeIMGUIContainerCount, addr 0x4a76988, size 0x40, virtual false, abstract: false, final false
  inline void ChangeIMGUIContainerCount(int32_t delta);

  /// @brief Method CheckUserKeyArgument, addr 0x4a7a4e8, size 0x15c, virtual false, abstract: false, final false
  static inline void CheckUserKeyArgument(::UnityEngine::PropertyName key);

  /// @brief Method Children, addr 0x4a7daf4, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualElement*>* Children();

  /// @brief Method ClassListContains, addr 0x4a7a3bc, size 0xac, virtual false, abstract: false, final false
  inline bool ClassListContains(::StringW cls);

  /// @brief Method Clear, addr 0x4a7d678, size 0x68, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ClearManualLayout, addr 0x4a741f0, size 0x5c4, virtual false, abstract: false, final false
  inline void ClearManualLayout();

  /// @brief Method CombineClipRects, addr 0x4a7627c, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect CombineClipRects(::UnityEngine::Rect rect, ::UnityEngine::Rect parentRect);

  /// @brief Method ComputeAAAlignedBound, addr 0x4a762c4, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect ComputeAAAlignedBound(::UnityEngine::Rect position, ::UnityEngine::Matrix4x4 mat);

  /// @brief Method Contains, addr 0x4a76610, size 0x70, virtual false, abstract: false, final false
  inline bool Contains(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method ContainsPoint, addr 0x4a79cf4, size 0x54, virtual true, abstract: false, final false
  inline bool ContainsPoint(::UnityEngine::Vector2 localPoint);

  /// @brief Method DirtyNextParentWithEventCallback, addr 0x4a7d0a0, size 0x80, virtual false, abstract: false, final false
  inline void DirtyNextParentWithEventCallback();

  /// @brief Method DoMeasure, addr 0x4a79e78, size 0x10, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t desiredHeight,
                                          ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode);

  /// @brief Method ElementAt, addr 0x4a7d6e0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* ElementAt(int32_t index);

  /// @brief Method ElementAtTreePath, addr 0x4a7d844, size 0x1b0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* ElementAtTreePath(::System::Collections::Generic::List_1<int32_t>* childIndexes);

  /// @brief Method EnableInClassList, addr 0x4a792d0, size 0xc, virtual false, abstract: false, final false
  inline void EnableInClassList(::StringW className, bool enable);

  /// @brief Method EnsureWorldTransformAndClipUpToDate, addr 0x4a75ca0, size 0x3c, virtual false, abstract: false, final false
  inline void EnsureWorldTransformAndClipUpToDate();

  /// @brief Method ExecuteDefaultAction, addr 0x4a76ca8, size 0x720, virtual true, abstract: false, final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method FinalizeLayout, addr 0x4a79fb0, size 0x4c, virtual false, abstract: false, final false
  inline void FinalizeLayout();

  /// @brief Method FindCommonAncestor, addr 0x4a7de70, size 0x184, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* FindCommonAncestor(::UnityEngine::UIElements::VisualElement* other);

  /// @brief Method FindElementInTree, addr 0x4a7d9f4, size 0x100, virtual false, abstract: false, final false
  inline bool FindElementInTree(::UnityEngine::UIElements::VisualElement* element, ::System::Collections::Generic::List_1<int32_t>* outChildIndexes);

  /// @brief Method Focus, addr 0x4a77980, size 0x84, virtual true, abstract: false, final true
  inline void Focus();

  /// @brief Method GatherAllChildren, addr 0x4a783f0, size 0xd8, virtual false, abstract: false, final false
  inline void GatherAllChildren(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* elements);

  /// @brief Method GetAnimationSystem, addr 0x4a7a74c, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElementAnimationSystem* GetAnimationSystem();

  /// @brief Method GetCachedNextParentWithEventCallback, addr 0x4a7d120, size 0x28, virtual false, abstract: false, final false
  inline bool GetCachedNextParentWithEventCallback(::ByRef<::UnityEngine::UIElements::VisualElement*> nextParent);

  /// @brief Method GetClassesForIteration, addr 0x4a7a3b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetClassesForIteration();

  /// @brief Method GetFirstAncestorOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetFirstAncestorOfType();

  /// @brief Method GetFirstAncestorWhere, addr 0x4a7ddfc, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetFirstAncestorWhere(::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* predicate);

  /// @brief Method GetFirstOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetFirstOfType();

  /// @brief Method GetFullHierarchicalViewDataKey, addr 0x4a79838, size 0x74, virtual false, abstract: false, final false
  inline ::StringW GetFullHierarchicalViewDataKey();

  /// @brief Method GetFullHierarchicalViewDataKey, addr 0x4a797a4, size 0x94, virtual false, abstract: false, final false
  inline void GetFullHierarchicalViewDataKey(::System::Text::StringBuilder* key);

  /// @brief Method GetNextElementDepthFirst, addr 0x4a7e0f8, size 0xf0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetNextElementDepthFirst();

  /// @brief Method GetOrCreateTypeData, addr 0x4a7f0dc, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement_TypeData* GetOrCreateTypeData(::System::Type* t);

  /// @brief Method GetOrCreateViewData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetOrCreateViewData(::System::Object* existing, ::StringW key);

  /// @brief Method GetParentSizeForLengthConversion, addr 0x4a726cc, size 0x3c8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<float_t> GetParentSizeForLengthConversion(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t subPropertyIndex);

  /// @brief Method GetPivotedMatrixWithLayout, addr 0x4a7558c, size 0x188, virtual false, abstract: false, final false
  inline void GetPivotedMatrixWithLayout(::ByRef<::UnityEngine::Matrix4x4> result);

  /// @brief Method GetPreviousElementDepthFirst, addr 0x4a7e1e8, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetPreviousElementDepthFirst();

  /// @brief Method GetProperty, addr 0x4a7a468, size 0x80, virtual false, abstract: false, final false
  inline ::System::Object* GetProperty(::UnityEngine::PropertyName key);

  /// @brief Method GetRoot, addr 0x4a7dff4, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetRoot();

  /// @brief Method GetRootVisualContainer, addr 0x4a7e0b4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetRootVisualContainer();

  /// @brief Method GetStylePropertyAnimationSystem, addr 0x4a70c20, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IStylePropertyAnimationSystem* GetStylePropertyAnimationSystem();

  /// @brief Method GetTooltipRect, addr 0x4a778e8, size 0x4, virtual true, abstract: false, final false
  inline ::UnityEngine::Rect GetTooltipRect();

  /// @brief Method HasChangedPanel, addr 0x4a78708, size 0x314, virtual false, abstract: false, final false
  inline void HasChangedPanel(::UnityEngine::UIElements::BaseVisualElementPanel* prevPanel);

  /// @brief Method HasDefaultAction, addr 0x4a7d4a4, size 0x10, virtual false, abstract: false, final false
  inline bool HasDefaultAction(::UnityEngine::UIElements::EventCategory eventCategory);

  /// @brief Method HasEventCallbacks, addr 0x4a7d41c, size 0x10, virtual false, abstract: false, final false
  inline bool HasEventCallbacks(::UnityEngine::UIElements::EventCategory eventCategory);

  /// @brief Method HasEventCallbacksOrDefaultActionAtTarget, addr 0x4a7d48c, size 0x18, virtual false, abstract: false, final false
  inline bool HasEventCallbacksOrDefaultActionAtTarget(::UnityEngine::UIElements::EventCategory eventCategory);

  /// @brief Method HasEventCallbacksOrDefaultActions, addr 0x4a78aec, size 0x20, virtual false, abstract: false, final false
  inline bool HasEventCallbacksOrDefaultActions(::UnityEngine::UIElements::EventCategory eventCategory);

  /// @brief Method HasParentEventCallbacksOrDefaultActionAtTarget, addr 0x4a7d460, size 0x2c, virtual false, abstract: false, final false
  inline bool HasParentEventCallbacksOrDefaultActionAtTarget(::UnityEngine::UIElements::EventCategory eventCategory);

  /// @brief Method HasParentEventCallbacksOrDefaultActions, addr 0x4a7d42c, size 0x34, virtual false, abstract: false, final false
  inline bool HasParentEventCallbacksOrDefaultActions(::UnityEngine::UIElements::EventCategory eventCategory);

  /// @brief Method HasProperty, addr 0x4a7a6bc, size 0x80, virtual false, abstract: false, final false
  inline bool HasProperty(::UnityEngine::PropertyName key);

  /// @brief Method IncrementVersion, addr 0x4a6c498, size 0x28, virtual false, abstract: false, final false
  inline void IncrementVersion(::UnityEngine::UIElements::VersionChangeType changeType);

  /// @brief Method IndexOf, addr 0x4a7d7c4, size 0x80, virtual false, abstract: false, final false
  inline int32_t IndexOf(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method Insert, addr 0x4a7d5e8, size 0x90, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method InvokeGenerateVisualContent, addr 0x4a795b8, size 0x1ec, virtual false, abstract: false, final false
  inline void InvokeGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext* mgc);

  /// @brief Method InvokeHierarchyChanged, addr 0x4a78ba4, size 0x20, virtual false, abstract: false, final false
  inline void InvokeHierarchyChanged(::UnityEngine::UIElements::HierarchyChangeType changeType);

  /// @brief Method IsPartOfCapturedChain, addr 0x4a7656c, size 0xa4, virtual false, abstract: false, final false
  static inline bool IsPartOfCapturedChain(::UnityEngine::UIElements::VisualElement* self, ::ByRef<::UnityEngine::UIElements::IEventHandler*> capturingElement);

  /// @brief Method IsViewDataPersitenceSupportedOnChildren, addr 0x4a79c38, size 0x7c, virtual false, abstract: false, final false
  inline bool IsViewDataPersitenceSupportedOnChildren(bool existingState);

  /// @brief Method MarkDirtyRepaint, addr 0x4a79584, size 0x24, virtual false, abstract: false, final false
  inline void MarkDirtyRepaint();

  /// @brief Method MarkRenderHintsClean, addr 0x4a735fc, size 0x10, virtual false, abstract: false, final false
  inline void MarkRenderHintsClean();

  /// @brief Method Max, addr 0x4a7e55c, size 0x1c, virtual false, abstract: false, final false
  static inline float_t Max(float_t a, float_t b, float_t c, float_t d);

  /// @brief Method Measure, addr 0x4a79e88, size 0x128, virtual false, abstract: false, final false
  inline ::UnityEngine::Yoga::YogaSize Measure(::UnityEngine::Yoga::YogaNode* node, float_t width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, float_t height,
                                               ::UnityEngine::Yoga::YogaMeasureMode heightMode);

  /// @brief Method Min, addr 0x4a7e540, size 0x1c, virtual false, abstract: false, final false
  static inline float_t Min(float_t a, float_t b, float_t c, float_t d);

  /// @brief Method MultiplyMatrix34, addr 0x4a75714, size 0x1d8, virtual false, abstract: false, final false
  static inline void MultiplyMatrix34(::ByRef<::UnityEngine::Matrix4x4> lhs, ::ByRef<::UnityEngine::Matrix4x4> rhs, ::ByRef<::UnityEngine::Matrix4x4> res);

  /// @brief Method MultiplyMatrix44Point2, addr 0x4a7e9ec, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MultiplyMatrix44Point2(::ByRef<::UnityEngine::Matrix4x4> lhs, ::UnityEngine::Vector2 point);

  /// @brief Method MultiplyVector2, addr 0x4a7ea10, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MultiplyVector2(::ByRef<::UnityEngine::Matrix4x4> lhs, ::UnityEngine::Vector2 vector);

  static inline ::UnityEngine::UIElements::VisualElement* New_ctor();

  /// @brief Method OnViewDataReady, addr 0x4a79cf0, size 0x4, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method OnViewDataReady, addr 0x4a79cb4, size 0x3c, virtual false, abstract: false, final false
  inline void OnViewDataReady(bool enablePersistence);

  /// @brief Method OrderMinMaxRect, addr 0x4a7e914, size 0x44, virtual false, abstract: false, final false
  static inline void OrderMinMaxRect(::ByRef<::UnityEngine::Rect> rect);

  /// @brief Method OverwriteFromViewData, addr 0x4a798ac, size 0x310, virtual false, abstract: false, final false
  inline void OverwriteFromViewData(::System::Object* obj, ::StringW key);

  /// @brief Method PlaceBehind, addr 0x4a7dc70, size 0x128, virtual false, abstract: false, final false
  inline void PlaceBehind(::UnityEngine::UIElements::VisualElement* sibling);

  /// @brief Method PropagateCachedNextParentWithEventCallback, addr 0x4a7d210, size 0x5c, virtual false, abstract: false, final false
  inline void PropagateCachedNextParentWithEventCallback(::UnityEngine::UIElements::VisualElement* nextParent, ::UnityEngine::UIElements::VisualElement* stopParent);

  /// @brief Method PropagateEnabledToChildren, addr 0x4a792f0, size 0xb0, virtual false, abstract: false, final false
  inline void PropagateEnabledToChildren(bool value);

  /// @brief Method ReadCurrentValues, addr 0x4a7bf54, size 0xeec, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::StyleValues ReadCurrentValues(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::Experimental::StyleValues targetValuesToRead);

  /// @brief Method RegisterAnimation, addr 0x4a7a7e0, size 0x108, virtual false, abstract: false, final false
  inline void RegisterAnimation(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate* anim);

  /// @brief Method RegisterRunningAnimations, addr 0x4a78b0c, size 0x6c, virtual false, abstract: false, final false
  inline void RegisterRunningAnimations();

  /// @brief Method RemoveFromClassList, addr 0x4a78fa4, size 0x11c, virtual false, abstract: false, final false
  inline void RemoveFromClassList(::StringW className);

  /// @brief Method RemoveFromHierarchy, addr 0x4a7dd98, size 0x64, virtual false, abstract: false, final false
  inline void RemoveFromHierarchy();

  /// @brief Method RemoveMeasureFunction, addr 0x4a79e58, size 0x20, virtual false, abstract: false, final false
  inline void RemoveMeasureFunction();

  /// @brief Method ResolveLengthValue, addr 0x4a702ac, size 0x19c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat ResolveLengthValue(::UnityEngine::UIElements::Length length, bool isRow);

  /// @brief Method ResolveRotation, addr 0x4a7e330, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion ResolveRotation();

  /// @brief Method ResolveScale, addr 0x4a7e3e0, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ResolveScale();

  /// @brief Method ResolveTransformOrigin, addr 0x4a70534, size 0x304, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ResolveTransformOrigin();

  /// @brief Method ResolveTranslate, addr 0x4a7083c, size 0x1fc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ResolveTranslate();

  /// @brief Method RetargetElement, addr 0x4a7e2cc, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* RetargetElement(::UnityEngine::UIElements::VisualElement* retargetAgainst);

  /// @brief Method SaveViewData, addr 0x4a79bbc, size 0x7c, virtual false, abstract: false, final false
  inline void SaveViewData();

  /// @brief Method SendEvent, addr 0x4a78b78, size 0x18, virtual true, abstract: false, final true
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e);

  /// @brief Method SendEvent, addr 0x4a78b90, size 0x14, virtual true, abstract: false, final true
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method SendToBack, addr 0x4a7dc0c, size 0x64, virtual false, abstract: false, final false
  inline void SendToBack();

  /// @brief Method SetAsNextParentWithEventCallback, addr 0x4a72ce8, size 0xb0, virtual false, abstract: false, final false
  inline void SetAsNextParentWithEventCallback();

  /// @brief Method SetComputedStyle, addr 0x4a7a07c, size 0x1cc, virtual false, abstract: false, final false
  inline void SetComputedStyle(::ByRef<::UnityEngine::UIElements::ComputedStyle> newStyle);

  /// @brief Method SetEnabled, addr 0x4a76c84, size 0x24, virtual false, abstract: false, final false
  inline void SetEnabled(bool value);

  /// @brief Method SetEnabledFromHierarchyPrivate, addr 0x4a78bc4, size 0x380, virtual false, abstract: false, final false
  inline bool SetEnabledFromHierarchyPrivate(bool state);

  /// @brief Method SetInlineRule, addr 0x4a79ffc, size 0x80, virtual false, abstract: false, final false
  inline void SetInlineRule(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleRule* rule);

  /// @brief Method SetPanel, addr 0x4a77a04, size 0x9ec, virtual false, abstract: false, final false
  inline void SetPanel(::UnityEngine::UIElements::BaseVisualElementPanel* p);

  /// @brief Method SetProperty, addr 0x4a7a644, size 0x78, virtual false, abstract: false, final false
  inline void SetProperty(::UnityEngine::PropertyName key, ::System::Object* value);

  /// @brief Method SetPropertyInternal, addr 0x4a73050, size 0x240, virtual false, abstract: false, final false
  inline void SetPropertyInternal(::UnityEngine::PropertyName key, ::System::Object* value);

  /// @brief Method SetTooltip, addr 0x4a7780c, size 0xdc, virtual false, abstract: false, final false
  inline void SetTooltip(::UnityEngine::UIElements::TooltipEvent* e);

  /// @brief Method ShouldClip, addr 0x4a75010, size 0x2c, virtual false, abstract: false, final false
  inline bool ShouldClip();

  /// @brief Method Start, addr 0x4a7cf20, size 0x180, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*
  Start(::System::Func_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::Experimental::StyleValues>* fromValueGetter, ::UnityEngine::UIElements::Experimental::StyleValues to,
        int32_t durationMs);

  /// @brief Method StartAnimation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* StartAnimation(::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* anim,
                                                                                             ::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>* fromValueGetter, T to, int32_t durationMs,
                                                                                             ::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>* onValueChanged);

  /// @brief Method SubstractBorderPadding, addr 0x4a75cdc, size 0x5a0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect SubstractBorderPadding(::UnityEngine::Rect worldRect);

  /// @brief Method ToString, addr 0x4a7a248, size 0x16c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TransformAlignedRect, addr 0x4a7e958, size 0x94, virtual false, abstract: false, final false
  static inline void TransformAlignedRect(::ByRef<::UnityEngine::Matrix4x4> matrix, ::ByRef<::UnityEngine::Rect> rect);

  /// @brief Method TransformAlignedRectToParentSpace, addr 0x4a7e578, size 0x170, virtual false, abstract: false, final false
  inline void TransformAlignedRectToParentSpace(::ByRef<::UnityEngine::Rect> rect);

  /// @brief Method TranslateMatrix34, addr 0x4a7ea2c, size 0xec, virtual false, abstract: false, final false
  static inline void TranslateMatrix34(::ByRef<::UnityEngine::Matrix4x4> lhs, ::UnityEngine::Vector3 rhs, ::ByRef<::UnityEngine::Matrix4x4> res);

  /// @brief Method TranslateMatrix34InPlace, addr 0x4a7eb18, size 0x5c, virtual false, abstract: false, final false
  static inline void TranslateMatrix34InPlace(::ByRef<::UnityEngine::Matrix4x4> lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method TryConvertBackgroundSizeUnits, addr 0x4a72bc4, size 0xdc, virtual false, abstract: false, final false
  inline bool TryConvertBackgroundSizeUnits(::ByRef<::UnityEngine::UIElements::BackgroundSize> from, ::ByRef<::UnityEngine::UIElements::BackgroundSize> to);

  /// @brief Method TryConvertLengthUnits, addr 0x4a72414, size 0x2b8, virtual false, abstract: false, final false
  inline bool TryConvertLengthUnits(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::ByRef<::UnityEngine::UIElements::Length> from, ::ByRef<::UnityEngine::UIElements::Length> to,
                                    int32_t subPropertyIndex);

  /// @brief Method TryConvertTransformOriginUnits, addr 0x4a72a94, size 0x98, virtual false, abstract: false, final false
  inline bool TryConvertTransformOriginUnits(::ByRef<::UnityEngine::UIElements::TransformOrigin> from, ::ByRef<::UnityEngine::UIElements::TransformOrigin> to);

  /// @brief Method TryConvertTranslateUnits, addr 0x4a72b2c, size 0x98, virtual false, abstract: false, final false
  inline bool TryConvertTranslateUnits(::ByRef<::UnityEngine::UIElements::Translate> from, ::ByRef<::UnityEngine::UIElements::Translate> to);

  /// @brief Method TryGetPropertyInternal, addr 0x4a72ef8, size 0xe8, virtual false, abstract: false, final false
  inline bool TryGetPropertyInternal(::UnityEngine::PropertyName key, ::ByRef<::System::Object*> value);

  /// @brief Method UnityEngine.UIElements.Experimental.ITransitionAnimations.Start, addr 0x4a7ce40, size 0xe0, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*
  UnityEngine_UIElements_Experimental_ITransitionAnimations_Start(::UnityEngine::UIElements::Experimental::StyleValues to, int32_t durationMs);

  /// @brief Method UnityEngine.UIElements.IExperimentalFeatures.get_animation, addr 0x4a7d4b8, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Experimental::ITransitionAnimations* UnityEngine_UIElements_IExperimentalFeatures_get_animation();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_backgroundColor, addr 0x4a70068, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_backgroundColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderBottomColor, addr 0x4a70074, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_borderBottomColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderBottomLeftRadius, addr 0x4a70080, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderBottomLeftRadius();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderBottomRightRadius, addr 0x4a7009c, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderBottomRightRadius();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderBottomWidth, addr 0x4a700b8, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderBottomWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderLeftColor, addr 0x4a700d4, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_borderLeftColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderLeftWidth, addr 0x4a700e0, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderLeftWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderRightColor, addr 0x4a700fc, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_borderRightColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderRightWidth, addr 0x4a70108, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderRightWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderTopColor, addr 0x4a70124, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_borderTopColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderTopLeftRadius, addr 0x4a70130, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderTopLeftRadius();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderTopRightRadius, addr 0x4a7014c, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderTopRightRadius();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderTopWidth, addr 0x4a70168, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderTopWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_bottom, addr 0x4a70184, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_bottom();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_color, addr 0x4a701a0, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_color();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_display, addr 0x4a701ac, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::DisplayStyle UnityEngine_UIElements_IResolvedStyle_get_display();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_flexDirection, addr 0x4a701b8, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::FlexDirection UnityEngine_UIElements_IResolvedStyle_get_flexDirection();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_flexGrow, addr 0x4a701c4, size 0xc, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_flexGrow();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_flexShrink, addr 0x4a701d0, size 0xc, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_flexShrink();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_height, addr 0x4a701dc, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_height();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_left, addr 0x4a701f8, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_left();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_marginBottom, addr 0x4a70214, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_marginBottom();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_marginLeft, addr 0x4a70230, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_marginLeft();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_marginRight, addr 0x4a7024c, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_marginRight();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_marginTop, addr 0x4a70268, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_marginTop();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_minHeight, addr 0x4a70284, size 0x28, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_get_minHeight();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_minWidth, addr 0x4a70448, size 0x28, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_get_minWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_opacity, addr 0x4a70470, size 0xc, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_opacity();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_paddingBottom, addr 0x4a7047c, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_paddingBottom();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_paddingLeft, addr 0x4a70498, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_paddingLeft();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_paddingRight, addr 0x4a704b4, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_paddingRight();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_paddingTop, addr 0x4a704d0, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_paddingTop();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_right, addr 0x4a704ec, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_right();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_scale, addr 0x4a70508, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Scale UnityEngine_UIElements_IResolvedStyle_get_scale();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_top, addr 0x4a70514, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_top();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_transformOrigin, addr 0x4a70530, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 UnityEngine_UIElements_IResolvedStyle_get_transformOrigin();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_translate, addr 0x4a70838, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 UnityEngine_UIElements_IResolvedStyle_get_translate();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityBackgroundImageTintColor, addr 0x4a70a38, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_unityBackgroundImageTintColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unitySliceLeft, addr 0x4a70a44, size 0xc, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_IResolvedStyle_get_unitySliceLeft();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unitySliceRight, addr 0x4a70a50, size 0xc, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_IResolvedStyle_get_unitySliceRight();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unitySliceScale, addr 0x4a70a5c, size 0xc, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_unitySliceScale();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityTextOutlineColor, addr 0x4a70a68, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_unityTextOutlineColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityTextOutlineWidth, addr 0x4a70a74, size 0xc, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_unityTextOutlineWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_visibility, addr 0x4a70a80, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Visibility UnityEngine_UIElements_IResolvedStyle_get_visibility();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_width, addr 0x4a70a8c, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_width();

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.CancelAllAnimations, addr 0x4a72180, size 0xe0, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_CancelAllAnimations();

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.CancelAnimation, addr 0x4a720b0, size 0xd0, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_CancelAnimation(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.GetAllAnimations, addr 0x4a72328, size 0xec, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_GetAllAnimations(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* outPropertyIds);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x4a70f78, size 0x150, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::Color from, ::UnityEngine::Color to, int32_t durationMs,
                                                                    int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x4a7146c, size 0x11c, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::Font* from, ::UnityEngine::Font* to, int32_t durationMs,
                                                                    int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x4a711e4, size 0x158, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Background from,
                                                                    ::UnityEngine::UIElements::Background to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x4a71cdc, size 0x130, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::BackgroundPosition from,
                                                                    ::UnityEngine::UIElements::BackgroundPosition to, int32_t durationMs, int32_t delayMs,
                                                                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x4a71e0c, size 0x11c, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::BackgroundRepeat from,
                                                                    ::UnityEngine::UIElements::BackgroundRepeat to, int32_t durationMs, int32_t delayMs,
                                                                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x4a71f28, size 0x188, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::BackgroundSize from,
                                                                    ::UnityEngine::UIElements::BackgroundSize to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x4a7133c, size 0x130, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::FontDefinition from,
                                                                    ::UnityEngine::UIElements::FontDefinition to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x4a70e5c, size 0x11c, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Length from,
                                                                    ::UnityEngine::UIElements::Length to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x4a719cc, size 0x188, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Rotate from,
                                                                    ::UnityEngine::UIElements::Rotate to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x4a71714, size 0x130, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Scale from,
                                                                    ::UnityEngine::UIElements::Scale to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x4a71588, size 0x18c, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::TextShadow from,
                                                                    ::UnityEngine::UIElements::TextShadow to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x4a71b54, size 0x188, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::TransformOrigin from,
                                                                    ::UnityEngine::UIElements::TransformOrigin to, int32_t durationMs, int32_t delayMs,
                                                                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x4a71844, size 0x188, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Translate from,
                                                                    ::UnityEngine::UIElements::Translate to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x4a70c3c, size 0x104, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, float_t from, float_t to, int32_t durationMs, int32_t delayMs,
                                                                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x4a70d40, size 0x11c, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t from, int32_t to, int32_t durationMs, int32_t delayMs,
                                                                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.StartEnum, addr 0x4a710c8, size 0x11c, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_StartEnum(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t from, int32_t to, int32_t durationMs, int32_t delayMs,
                                                                        ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.UpdateAnimation, addr 0x4a72260, size 0xc8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_UpdateAnimation(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.get_completedAnimationCount, addr 0x4a70c10, size 0x8, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_IStylePropertyAnimations_get_completedAnimationCount();

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.get_runningAnimationCount, addr 0x4a70c00, size 0x8, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_IStylePropertyAnimations_get_runningAnimationCount();

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.set_completedAnimationCount, addr 0x4a70c18, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_set_completedAnimationCount(int32_t value);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.set_runningAnimationCount, addr 0x4a70c08, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_set_runningAnimationCount(int32_t value);

  /// @brief Method UnityEngine.UIElements.ITransform.get_position, addr 0x4a73610, size 0xa0, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 UnityEngine_UIElements_ITransform_get_position();

  /// @brief Method UnityEngine.UIElements.ITransform.get_scale, addr 0x4a7381c, size 0xb4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 UnityEngine_UIElements_ITransform_get_scale();

  /// @brief Method UnityEngine.UIElements.ITransform.set_position, addr 0x4a736b0, size 0x16c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITransform_set_position(::UnityEngine::Vector3 value);

  /// @brief Method UnityEngine.UIElements.IVisualElementScheduler.Execute, addr 0x4a7eb78, size 0xb4, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* UnityEngine_UIElements_IVisualElementScheduler_Execute(::System::Action_1<::UnityEngine::UIElements::TimerState>* timerUpdateEvent);

  /// @brief Method UnityEngine.UIElements.IVisualElementScheduler.Execute, addr 0x4a7ec2c, size 0xb4, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* UnityEngine_UIElements_IVisualElementScheduler_Execute(::System::Action* updateEvent);

  /// @brief Method UnregisterAnimation, addr 0x4a7a8e8, size 0x78, virtual false, abstract: false, final false
  inline void UnregisterAnimation(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate* anim);

  /// @brief Method UnregisterRunningAnimations, addr 0x4a78a1c, size 0xd0, virtual false, abstract: false, final false
  inline void UnregisterRunningAnimations();

  /// @brief Method UpdateBoundingBox, addr 0x4a74c90, size 0x210, virtual false, abstract: false, final false
  inline void UpdateBoundingBox();

  /// @brief Method UpdateCallbackParentCategories, addr 0x4a7d334, size 0xb8, virtual false, abstract: false, final false
  inline void UpdateCallbackParentCategories();

  /// @brief Method UpdateCursorStyle, addr 0x4a773c8, size 0x444, virtual false, abstract: false, final false
  inline void UpdateCursorStyle(int64_t eventType);

  /// @brief Method UpdateHoverPseudoState, addr 0x4a76474, size 0xf8, virtual false, abstract: false, final false
  inline void UpdateHoverPseudoState();

  /// @brief Method UpdateWorldBoundingBox, addr 0x4a74ee4, size 0xf0, virtual false, abstract: false, final false
  inline void UpdateWorldBoundingBox();

  /// @brief Method UpdateWorldClip, addr 0x4a75964, size 0x2d0, virtual false, abstract: false, final false
  inline void UpdateWorldClip();

  /// @brief Method UpdateWorldTransform, addr 0x4a75200, size 0x2c8, virtual false, abstract: false, final false
  inline void UpdateWorldTransform();

  /// @brief Method UpdateWorldTransformInverse, addr 0x4a754f0, size 0x54, virtual false, abstract: false, final false
  inline void UpdateWorldTransformInverse();

  /// @brief Method WillChangePanel, addr 0x4a784c8, size 0x240, virtual false, abstract: false, final false
  inline void WillChangePanel(::UnityEngine::UIElements::BaseVisualElementPanel* destinationPanel);

  /// @brief Method <AssignMeasureFunction>b__432_0, addr 0x4a7f480, size 0x174, virtual false, abstract: false, final false
  inline ::UnityEngine::Yoga::YogaSize _AssignMeasureFunction_b__432_0(::UnityEngine::Yoga::YogaNode* node, float_t f, ::UnityEngine::Yoga::YogaMeasureMode mode, float_t f1,
                                                                       ::UnityEngine::Yoga::YogaMeasureMode heightMode);

  constexpr int32_t const& __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField();

  constexpr bool const& __cordl_internal_get__cacheAsBitmap_k__BackingField() const;

  constexpr bool& __cordl_internal_get__cacheAsBitmap_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__containedPointerIds_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__containedPointerIds_k__BackingField();

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& __cordl_internal_get__elementPanel_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __cordl_internal_get__elementPanel_k__BackingField();

  constexpr bool const& __cordl_internal_get__enabledSelf_k__BackingField() const;

  constexpr bool& __cordl_internal_get__enabledSelf_k__BackingField();

  constexpr ::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>* const& __cordl_internal_get__generateVisualContent_k__BackingField() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>*& __cordl_internal_get__generateVisualContent_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement_Hierarchy const& __cordl_internal_get__hierarchy_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement_Hierarchy& __cordl_internal_get__hierarchy_k__BackingField();

  constexpr bool const& __cordl_internal_get__isRootVisualContainer_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isRootVisualContainer_k__BackingField();

  constexpr ::UnityEngine::Yoga::YogaNode* const& __cordl_internal_get__yogaNode_k__BackingField() const;

  constexpr ::UnityEngine::Yoga::YogaNode*& __cordl_internal_get__yogaNode_k__BackingField();

  constexpr uint32_t const& __cordl_internal_get_controlid() const;

  constexpr uint32_t& __cordl_internal_get_controlid();

  constexpr ::UnityEngine::UIElements::PseudoStates const& __cordl_internal_get_dependencyPseudoMask() const;

  constexpr ::UnityEngine::UIElements::PseudoStates& __cordl_internal_get_dependencyPseudoMask();

  constexpr int32_t const& __cordl_internal_get_imguiContainerDescendantCount() const;

  constexpr int32_t& __cordl_internal_get_imguiContainerDescendantCount();

  constexpr int32_t const& __cordl_internal_get_inheritedStylesHash() const;

  constexpr int32_t& __cordl_internal_get_inheritedStylesHash();

  constexpr ::UnityEngine::UIElements::InlineStyleAccess* const& __cordl_internal_get_inlineStyleAccess() const;

  constexpr ::UnityEngine::UIElements::InlineStyleAccess*& __cordl_internal_get_inlineStyleAccess();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_lastLayout() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_lastLayout();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_lastPseudoPadding() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_lastPseudoPadding();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_BoundingBox() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_BoundingBox();

  constexpr int32_t const& __cordl_internal_get_m_CachedEventCallbackParentCategories() const;

  constexpr int32_t& __cordl_internal_get_m_CachedEventCallbackParentCategories();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_CachedNextParentWithEventCallback() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CachedNextParentWithEventCallback();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_Children() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_Children();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_ClassList() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_ClassList();

  constexpr int32_t const& __cordl_internal_get_m_DefaultActionAtTargetEventCategories() const;

  constexpr int32_t& __cordl_internal_get_m_DefaultActionAtTargetEventCategories();

  constexpr int32_t const& __cordl_internal_get_m_DefaultActionEventCategories() const;

  constexpr int32_t& __cordl_internal_get_m_DefaultActionEventCategories();

  constexpr int32_t const& __cordl_internal_get_m_EventCallbackCategories() const;

  constexpr int32_t& __cordl_internal_get_m_EventCallbackCategories();

  constexpr ::UnityEngine::UIElements::VisualElementFlags const& __cordl_internal_get_m_Flags() const;

  constexpr ::UnityEngine::UIElements::VisualElementFlags& __cordl_internal_get_m_Flags();

  constexpr ::UnityEngine::UIElements::LanguageDirection const& __cordl_internal_get_m_LanguageDirection() const;

  constexpr ::UnityEngine::UIElements::LanguageDirection& __cordl_internal_get_m_LanguageDirection();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_Layout() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_Layout();

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

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName, ::System::Object*>>* const& __cordl_internal_get_m_PropertyBag() const;

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName, ::System::Object*>>*& __cordl_internal_get_m_PropertyBag();

  constexpr ::UnityEngine::UIElements::PseudoStates const& __cordl_internal_get_m_PseudoStates() const;

  constexpr ::UnityEngine::UIElements::PseudoStates& __cordl_internal_get_m_PseudoStates();

  constexpr ::UnityEngine::UIElements::RenderHints const& __cordl_internal_get_m_RenderHints() const;

  constexpr ::UnityEngine::UIElements::RenderHints& __cordl_internal_get_m_RenderHints();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* const& __cordl_internal_get_m_RunningAnimations() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*& __cordl_internal_get_m_RunningAnimations();

  constexpr ::UnityEngine::UIElements::ComputedStyle const& __cordl_internal_get_m_Style() const;

  constexpr ::UnityEngine::UIElements::ComputedStyle& __cordl_internal_get_m_Style();

  constexpr ::UnityEngine::UIElements::VisualElement_RenderTargetMode const& __cordl_internal_get_m_SubRenderTargetMode() const;

  constexpr ::UnityEngine::UIElements::VisualElement_RenderTargetMode& __cordl_internal_get_m_SubRenderTargetMode();

  constexpr ::UnityEngine::UIElements::VisualElement_TypeData* const& __cordl_internal_get_m_TypeData() const;

  constexpr ::UnityEngine::UIElements::VisualElement_TypeData*& __cordl_internal_get_m_TypeData();

  constexpr ::StringW const& __cordl_internal_get_m_ViewDataKey() const;

  constexpr ::StringW& __cordl_internal_get_m_ViewDataKey();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get_m_VisualTreeAssetSource() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get_m_VisualTreeAssetSource();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_WorldBoundingBox() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_WorldBoundingBox();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_WorldClip() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_WorldClip();

  constexpr bool const& __cordl_internal_get_m_WorldClipIsInfinite() const;

  constexpr bool& __cordl_internal_get_m_WorldClipIsInfinite();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_WorldClipMinusGroup() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_WorldClipMinusGroup();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_WorldTransformCache() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_WorldTransformCache();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_WorldTransformInverseCache() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_WorldTransformInverseCache();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_defaultMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_defaultMaterial();

  constexpr ::UnityEngine::UIElements::UIR::RenderChainVEData const& __cordl_internal_get_renderChainData() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChainVEData& __cordl_internal_get_renderChainData();

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

  constexpr void __cordl_internal_set__elementPanel_k__BackingField(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  constexpr void __cordl_internal_set__enabledSelf_k__BackingField(bool value);

  constexpr void __cordl_internal_set__generateVisualContent_k__BackingField(::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>* value);

  constexpr void __cordl_internal_set__hierarchy_k__BackingField(::UnityEngine::UIElements::VisualElement_Hierarchy value);

  constexpr void __cordl_internal_set__isRootVisualContainer_k__BackingField(bool value);

  constexpr void __cordl_internal_set__yogaNode_k__BackingField(::UnityEngine::Yoga::YogaNode* value);

  constexpr void __cordl_internal_set_controlid(uint32_t value);

  constexpr void __cordl_internal_set_dependencyPseudoMask(::UnityEngine::UIElements::PseudoStates value);

  constexpr void __cordl_internal_set_imguiContainerDescendantCount(int32_t value);

  constexpr void __cordl_internal_set_inheritedStylesHash(int32_t value);

  constexpr void __cordl_internal_set_inlineStyleAccess(::UnityEngine::UIElements::InlineStyleAccess* value);

  constexpr void __cordl_internal_set_lastLayout(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_lastPseudoPadding(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_BoundingBox(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_CachedEventCallbackParentCategories(int32_t value);

  constexpr void __cordl_internal_set_m_CachedNextParentWithEventCallback(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Children(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_ClassList(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_DefaultActionAtTargetEventCategories(int32_t value);

  constexpr void __cordl_internal_set_m_DefaultActionEventCategories(int32_t value);

  constexpr void __cordl_internal_set_m_EventCallbackCategories(int32_t value);

  constexpr void __cordl_internal_set_m_Flags(::UnityEngine::UIElements::VisualElementFlags value);

  constexpr void __cordl_internal_set_m_LanguageDirection(::UnityEngine::UIElements::LanguageDirection value);

  constexpr void __cordl_internal_set_m_Layout(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_LocalLanguageDirection(::UnityEngine::UIElements::LanguageDirection value);

  constexpr void __cordl_internal_set_m_LogicalParent(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Name(::StringW value);

  constexpr void __cordl_internal_set_m_NextParentCachedVersion(uint32_t value);

  constexpr void __cordl_internal_set_m_NextParentRequiredVersion(uint32_t value);

  constexpr void __cordl_internal_set_m_PhysicalParent(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_PickingMode(::UnityEngine::UIElements::PickingMode value);

  constexpr void __cordl_internal_set_m_PropertyBag(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName, ::System::Object*>>* value);

  constexpr void __cordl_internal_set_m_PseudoStates(::UnityEngine::UIElements::PseudoStates value);

  constexpr void __cordl_internal_set_m_RenderHints(::UnityEngine::UIElements::RenderHints value);

  constexpr void __cordl_internal_set_m_RunningAnimations(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* value);

  constexpr void __cordl_internal_set_m_Style(::UnityEngine::UIElements::ComputedStyle value);

  constexpr void __cordl_internal_set_m_SubRenderTargetMode(::UnityEngine::UIElements::VisualElement_RenderTargetMode value);

  constexpr void __cordl_internal_set_m_TypeData(::UnityEngine::UIElements::VisualElement_TypeData* value);

  constexpr void __cordl_internal_set_m_ViewDataKey(::StringW value);

  constexpr void __cordl_internal_set_m_VisualTreeAssetSource(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  constexpr void __cordl_internal_set_m_WorldBoundingBox(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_WorldClip(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_WorldClipIsInfinite(bool value);

  constexpr void __cordl_internal_set_m_WorldClipMinusGroup(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_WorldTransformCache(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_m_WorldTransformInverseCache(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_m_defaultMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_renderChainData(::UnityEngine::UIElements::UIR::RenderChainVEData value);

  constexpr void __cordl_internal_set_styleSheetList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* value);

  constexpr void __cordl_internal_set_triggerPseudoMask(::UnityEngine::UIElements::PseudoStates value);

  constexpr void __cordl_internal_set_variableContext(::UnityEngine::UIElements::StyleVariableContext* value);

  /// @brief Method .ctor, addr 0x4a769c8, size 0x2bc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_disabledUssClassName();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateVisualContentMarker();

  static inline ::UnityEngine::UIElements::VisualElement_CustomStyleAccess* getStaticF_s_CustomStyleAccess();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_s_EmptyClassList();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* getStaticF_s_EmptyList();

  static inline ::UnityEngine::Rect getStaticF_s_InfiniteRect();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_s_InternalStyleSheetPath();

  static inline uint32_t getStaticF_s_NextId();

  static inline uint32_t getStaticF_s_NextParentVersion();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::VisualElement_TypeData*>* getStaticF_s_TypeData();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_runtimeMaterial();

  static inline ::UnityEngine::PropertyName getStaticF_tooltipPropertyKey();

  static inline ::UnityEngine::PropertyName getStaticF_userDataPropertyKey();

  /// @brief Method get_Item, addr 0x4a7d6e4, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_Item(int32_t key);

  /// @brief Method get_boundingBox, addr 0x4a74c54, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_boundingBox();

  /// @brief Method get_boundingBoxInParentSpace, addr 0x4a74fd4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_boundingBoxInParentSpace();

  /// @brief Method get_canGrabFocus, addr 0x4a73290, size 0x118, virtual true, abstract: false, final false
  inline bool get_canGrabFocus();

  /// @brief Method get_childCount, addr 0x4a7d75c, size 0x68, virtual false, abstract: false, final false
  inline int32_t get_childCount();

  /// @brief Method get_classList, addr 0x4a76720, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_classList();

  /// @brief Method get_computedStyle, addr 0x4a68394, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::UIElements::ComputedStyle> get_computedStyle();

  /// @brief Method get_containedPointerIds, addr 0x4a76464, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_containedPointerIds();

  /// @brief Method get_contentContainer, addr 0x4a7d52c, size 0x4, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Method get_contentRect, addr 0x4a747b4, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_contentRect();

  /// @brief Method get_customStyle, addr 0x4a7ece0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ICustomStyle* get_customStyle();

  /// @brief Method get_defaultMaterial, addr 0x4a7a744, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultMaterial();

  /// @brief Method get_disableClipping, addr 0x4a7d4e0, size 0xc, virtual false, abstract: false, final false
  inline bool get_disableClipping();

  /// @brief Method get_elementPanel, addr 0x4a7d51c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseVisualElementPanel* get_elementPanel();

  /// @brief Method get_enableViewDataPersistence, addr 0x4a72e44, size 0xc, virtual false, abstract: false, final false
  inline bool get_enableViewDataPersistence();

  /// @brief Method get_enabledInHierarchy, addr 0x4a7345c, size 0x10, virtual false, abstract: false, final false
  inline bool get_enabledInHierarchy();

  /// @brief Method get_enabledSelf, addr 0x4a792dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_enabledSelf();

  /// @brief Method get_eventCallbackCategories, addr 0x4a7d26c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_eventCallbackCategories();

  /// @brief Method get_eventCallbackParentCategories, addr 0x4a7d2e8, size 0x40, virtual false, abstract: false, final false
  inline int32_t get_eventCallbackParentCategories();

  /// @brief Method get_experimental, addr 0x4a7d4b4, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IExperimentalFeatures* get_experimental();

  /// @brief Method get_focusController, addr 0x4a7346c, size 0xb0, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::FocusController* get_focusController();

  /// @brief Method get_fullTypeName, addr 0x4a767d4, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_fullTypeName();

  /// @brief Method get_generateVisualContent, addr 0x4a795a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>* get_generateVisualContent();

  /// @brief Method get_hasCompletedAnimations, addr 0x4a70b54, size 0xac, virtual false, abstract: false, final false
  inline bool get_hasCompletedAnimations();

  /// @brief Method get_hasDefaultRotationAndScale, addr 0x4a7e474, size 0xcc, virtual false, abstract: false, final false
  inline bool get_hasDefaultRotationAndScale();

  /// @brief Method get_hasInlineStyle, addr 0x4a76948, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasInlineStyle();

  /// @brief Method get_hasRunningAnimations, addr 0x4a70aa8, size 0xac, virtual false, abstract: false, final false
  inline bool get_hasRunningAnimations();

  /// @brief Method get_hierarchy, addr 0x4a7d4bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement_Hierarchy get_hierarchy();

  /// @brief Method get_isBoundingBoxDirty, addr 0x4a74bd4, size 0xc, virtual false, abstract: false, final false
  inline bool get_isBoundingBoxDirty();

  /// @brief Method get_isCompositeRoot, addr 0x4a72ca0, size 0xc, virtual false, abstract: false, final false
  inline bool get_isCompositeRoot();

  /// @brief Method get_isEventCallbackParentCategoriesDirty, addr 0x4a7d328, size 0xc, virtual false, abstract: false, final false
  inline bool get_isEventCallbackParentCategoriesDirty();

  /// @brief Method get_isHierarchyDisplayed, addr 0x4a72d98, size 0xc, virtual false, abstract: false, final false
  inline bool get_isHierarchyDisplayed();

  /// @brief Method get_isLayoutManual, addr 0x4a738d0, size 0xc, virtual false, abstract: false, final false
  inline bool get_isLayoutManual();

  /// @brief Method get_isParentEnabledInHierarchy, addr 0x4a78f44, size 0x60, virtual false, abstract: false, final false
  inline bool get_isParentEnabledInHierarchy();

  /// @brief Method get_isRootVisualContainer, addr 0x4a7d4cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_isRootVisualContainer();

  /// @brief Method get_isWorldBoundingBoxOrDependenciesDirty, addr 0x4a74c40, size 0x14, virtual false, abstract: false, final false
  inline bool get_isWorldBoundingBoxOrDependenciesDirty();

  /// @brief Method get_isWorldClipDirty, addr 0x4a758ec, size 0xc, virtual false, abstract: false, final false
  inline bool get_isWorldClipDirty();

  /// @brief Method get_isWorldTransformDirty, addr 0x4a75158, size 0xc, virtual false, abstract: false, final false
  inline bool get_isWorldTransformDirty();

  /// @brief Method get_isWorldTransformInverseOrDependenciesDirty, addr 0x4a751b4, size 0x10, virtual false, abstract: false, final false
  inline bool get_isWorldTransformInverseOrDependenciesDirty();

  /// @brief Method get_languageDirection, addr 0x4a793a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::LanguageDirection get_languageDirection();

  /// @brief Method get_layout, addr 0x4a73978, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_layout();

  /// @brief Method get_localBound, addr 0x4a7511c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_localBound();

  /// @brief Method get_localLanguageDirection, addr 0x4a793a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::LanguageDirection get_localLanguageDirection();

  /// @brief Method get_name, addr 0x4a766c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_nextParentWithEventCallback, addr 0x4a7d148, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_nextParentWithEventCallback();

  /// @brief Method get_paddingRect, addr 0x4a749b8, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_paddingRect();

  /// @brief Method get_panel, addr 0x4a7351c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IPanel* get_panel();

  /// @brief Method get_parent, addr 0x4a733a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_parent();

  /// @brief Method get_pickingMode, addr 0x4a76680, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PickingMode get_pickingMode();

  /// @brief Method get_positionWithLayout, addr 0x4a75544, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_positionWithLayout();

  /// @brief Method get_pseudoStates, addr 0x4a763d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PseudoStates get_pseudoStates();

  /// @brief Method get_rect, addr 0x4a74bbc, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rect();

  /// @brief Method get_renderHints, addr 0x4a73544, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::RenderHints get_renderHints();

  /// @brief Method get_requireMeasureFunction, addr 0x4a79d48, size 0xc, virtual false, abstract: false, final false
  inline bool get_requireMeasureFunction();

  /// @brief Method get_resolvedStyle, addr 0x4a68308, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IResolvedStyle* get_resolvedStyle();

  /// @brief Method get_scaledPixelsPerPoint, addr 0x4a7390c, size 0x6c, virtual false, abstract: false, final false
  inline float_t get_scaledPixelsPerPoint();

  /// @brief Method get_schedule, addr 0x4a7eb74, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualElementScheduler* get_schedule();

  /// @brief Method get_style, addr 0x4a6f33c, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IStyle* get_style();

  /// @brief Method get_styleAnimation, addr 0x4a6fe24, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IStylePropertyAnimations* get_styleAnimation();

  /// @brief Method get_styleInitialized, addr 0x4a6fe18, size 0xc, virtual false, abstract: false, final false
  inline bool get_styleInitialized();

  /// @brief Method get_styleSheets, addr 0x4a7ed60, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElementStyleSheetSet get_styleSheets();

  /// @brief Method get_subRenderTargetMode, addr 0x4a7a73c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement_RenderTargetMode get_subRenderTargetMode();

  /// @brief Method get_tooltip, addr 0x4a778ec, size 0x94, virtual false, abstract: false, final false
  inline ::StringW get_tooltip();

  /// @brief Method get_transform, addr 0x4a7360c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ITransform* get_transform();

  /// @brief Method get_typeData, addr 0x4a767f0, size 0x12c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement_TypeData* get_typeData();

  /// @brief Method get_typeName, addr 0x4a7691c, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_typeName();

  /// @brief Method get_usageHints, addr 0x4a73524, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UsageHints get_usageHints();

  /// @brief Method get_userData, addr 0x4a72e80, size 0x78, virtual false, abstract: false, final false
  inline ::System::Object* get_userData();

  /// @brief Method get_viewDataKey, addr 0x4a72dd4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_viewDataKey();

  /// @brief Method get_visible, addr 0x4a733b0, size 0xac, virtual false, abstract: false, final false
  inline bool get_visible();

  /// @brief Method get_worldBound, addr 0x4a75060, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_worldBound();

  /// @brief Method get_worldBoundingBox, addr 0x4a74ea0, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_worldBoundingBox();

  /// @brief Method get_worldClip, addr 0x4a75928, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_worldClip();

  /// @brief Method get_worldClipIsInfinite, addr 0x4a75c70, size 0x30, virtual false, abstract: false, final false
  inline bool get_worldClipIsInfinite();

  /// @brief Method get_worldClipMinusGroup, addr 0x4a75c34, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_worldClipMinusGroup();

  /// @brief Method get_worldTransform, addr 0x4a751c4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldTransform();

  /// @brief Method get_worldTransformInverse, addr 0x4a754c8, size 0x28, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Matrix4x4> get_worldTransformInverse();

  /// @brief Method get_worldTransformRef, addr 0x4a7503c, size 0x24, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Matrix4x4> get_worldTransformRef();

  /// @brief Method get_yogaNode, addr 0x4a76938, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Yoga::YogaNode* get_yogaNode();

  /// @brief Convert to "::UnityEngine::UIElements::Experimental::ITransitionAnimations"
  constexpr ::UnityEngine::UIElements::Experimental::ITransitionAnimations* i___UnityEngine__UIElements__Experimental__ITransitionAnimations() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IExperimentalFeatures"
  constexpr ::UnityEngine::UIElements::IExperimentalFeatures* i___UnityEngine__UIElements__IExperimentalFeatures() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IResolvedStyle"
  constexpr ::UnityEngine::UIElements::IResolvedStyle* i___UnityEngine__UIElements__IResolvedStyle() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IStylePropertyAnimations"
  constexpr ::UnityEngine::UIElements::IStylePropertyAnimations* i___UnityEngine__UIElements__IStylePropertyAnimations() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::ITransform"
  constexpr ::UnityEngine::UIElements::ITransform* i___UnityEngine__UIElements__ITransform() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IVisualElementScheduler"
  constexpr ::UnityEngine::UIElements::IVisualElementScheduler* i___UnityEngine__UIElements__IVisualElementScheduler() noexcept;

  static inline void setStaticF_disabledUssClassName(::StringW value);

  static inline void setStaticF_k_GenerateVisualContentMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_CustomStyleAccess(::UnityEngine::UIElements::VisualElement_CustomStyleAccess* value);

  static inline void setStaticF_s_EmptyClassList(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF_s_EmptyList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  static inline void setStaticF_s_InfiniteRect(::UnityEngine::Rect value);

  static inline void setStaticF_s_InternalStyleSheetPath(::System::Text::RegularExpressions::Regex* value);

  static inline void setStaticF_s_NextId(uint32_t value);

  static inline void setStaticF_s_NextParentVersion(uint32_t value);

  static inline void setStaticF_s_TypeData(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::VisualElement_TypeData*>* value);

  static inline void setStaticF_s_runtimeMaterial(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_tooltipPropertyKey(::UnityEngine::PropertyName value);

  static inline void setStaticF_userDataPropertyKey(::UnityEngine::PropertyName value);

  /// @brief Method set_containedPointerIds, addr 0x4a7646c, size 0x8, virtual false, abstract: false, final false
  inline void set_containedPointerIds(int32_t value);

  /// @brief Method set_disableClipping, addr 0x4a7d4ec, size 0x30, virtual false, abstract: false, final false
  inline void set_disableClipping(bool value);

  /// @brief Method set_elementPanel, addr 0x4a7d524, size 0x8, virtual false, abstract: false, final false
  inline void set_elementPanel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  /// @brief Method set_enableViewDataPersistence, addr 0x4a72e50, size 0x30, virtual false, abstract: false, final false
  inline void set_enableViewDataPersistence(bool value);

  /// @brief Method set_enabledSelf, addr 0x4a792e4, size 0xc, virtual false, abstract: false, final false
  inline void set_enabledSelf(bool value);

  /// @brief Method set_eventCallbackCategories, addr 0x4a7d274, size 0x74, virtual false, abstract: false, final false
  inline void set_eventCallbackCategories(int32_t value);

  /// @brief Method set_generateVisualContent, addr 0x4a795b0, size 0x8, virtual false, abstract: false, final false
  inline void set_generateVisualContent(::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>* value);

  /// @brief Method set_hierarchy, addr 0x4a7d4c4, size 0x8, virtual false, abstract: false, final false
  inline void set_hierarchy(::UnityEngine::UIElements::VisualElement_Hierarchy value);

  /// @brief Method set_isBoundingBoxDirty, addr 0x4a74be0, size 0x30, virtual false, abstract: false, final false
  inline void set_isBoundingBoxDirty(bool value);

  /// @brief Method set_isCompositeRoot, addr 0x4a72cac, size 0x3c, virtual false, abstract: false, final false
  inline void set_isCompositeRoot(bool value);

  /// @brief Method set_isEventCallbackParentCategoriesDirty, addr 0x4a7d3ec, size 0x30, virtual false, abstract: false, final false
  inline void set_isEventCallbackParentCategoriesDirty(bool value);

  /// @brief Method set_isHierarchyDisplayed, addr 0x4a72da4, size 0x30, virtual false, abstract: false, final false
  inline void set_isHierarchyDisplayed(bool value);

  /// @brief Method set_isLayoutManual, addr 0x4a738dc, size 0x30, virtual false, abstract: false, final false
  inline void set_isLayoutManual(bool value);

  /// @brief Method set_isRootVisualContainer, addr 0x4a7d4d4, size 0xc, virtual false, abstract: false, final false
  inline void set_isRootVisualContainer(bool value);

  /// @brief Method set_isWorldBoundingBoxDirty, addr 0x4a74c10, size 0x30, virtual false, abstract: false, final false
  inline void set_isWorldBoundingBoxDirty(bool value);

  /// @brief Method set_isWorldClipDirty, addr 0x4a758f8, size 0x30, virtual false, abstract: false, final false
  inline void set_isWorldClipDirty(bool value);

  /// @brief Method set_isWorldTransformDirty, addr 0x4a75164, size 0x20, virtual false, abstract: false, final false
  inline void set_isWorldTransformDirty(bool value);

  /// @brief Method set_isWorldTransformInverseDirty, addr 0x4a75184, size 0x30, virtual false, abstract: false, final false
  inline void set_isWorldTransformInverseDirty(bool value);

  /// @brief Method set_layout, addr 0x4a73a10, size 0x7e0, virtual false, abstract: false, final false
  inline void set_layout(::UnityEngine::Rect value);

  /// @brief Method set_localLanguageDirection, addr 0x4a793b0, size 0xf0, virtual false, abstract: false, final false
  inline void set_localLanguageDirection(::UnityEngine::UIElements::LanguageDirection value);

  /// @brief Method set_name, addr 0x4a766c8, size 0x58, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_pickingMode, addr 0x4a76688, size 0x38, virtual false, abstract: false, final false
  inline void set_pickingMode(::UnityEngine::UIElements::PickingMode value);

  /// @brief Method set_pseudoStates, addr 0x4a763e0, size 0x84, virtual false, abstract: false, final false
  inline void set_pseudoStates(::UnityEngine::UIElements::PseudoStates value);

  /// @brief Method set_renderHints, addr 0x4a735b0, size 0x4c, virtual false, abstract: false, final false
  inline void set_renderHints(::UnityEngine::UIElements::RenderHints value);

  /// @brief Method set_requireMeasureFunction, addr 0x4a79d54, size 0x74, virtual false, abstract: false, final false
  inline void set_requireMeasureFunction(bool value);

  /// @brief Method set_styleInitialized, addr 0x4a76958, size 0x30, virtual false, abstract: false, final false
  inline void set_styleInitialized(bool value);

  /// @brief Method set_tooltip, addr 0x4a7efb8, size 0x124, virtual false, abstract: false, final false
  inline void set_tooltip(::StringW value);

  /// @brief Method set_usageHints, addr 0x4a7354c, size 0x64, virtual false, abstract: false, final false
  inline void set_usageHints(::UnityEngine::UIElements::UsageHints value);

  /// @brief Method set_userData, addr 0x4a72fe0, size 0x70, virtual false, abstract: false, final false
  inline void set_userData(::System::Object* value);

  /// @brief Method set_viewDataKey, addr 0x4a72ddc, size 0x68, virtual false, abstract: false, final false
  inline void set_viewDataKey(::StringW value);

  /// @brief Method set_visible, addr 0x4a794a0, size 0xe4, virtual false, abstract: false, final false
  inline void set_visible(bool value);

  /// @brief Method set_visualTreeAssetSource, addr 0x4a7d530, size 0x8, virtual false, abstract: false, final false
  inline void set_visualTreeAssetSource(::UnityEngine::UIElements::VisualTreeAsset* value);

  /// @brief Method set_yogaNode, addr 0x4a76940, size 0x8, virtual false, abstract: false, final false
  inline void set_yogaNode(::UnityEngine::Yoga::YogaNode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement(VisualElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement(VisualElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6081 };

  /// @brief Field k_RootVisualContainerName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_RootVisualContainerName{ u"rootVisualContainer" };

  /// @brief Field worldBoundingBoxDirtyDependencies value: I32(25)
  static ::UnityEngine::UIElements::VisualElementFlags const worldBoundingBoxDirtyDependencies;

  /// @brief Field worldTransformInverseDirtyDependencies value: I32(3)
  static ::UnityEngine::UIElements::VisualElementFlags const worldTransformInverseDirtyDependencies;

  /// @brief Field <UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t ____UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField;

  /// @brief Field m_Name, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_Name;

  /// @brief Field m_ClassList, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_ClassList;

  /// @brief Field m_PropertyBag, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName, ::System::Object*>>* ___m_PropertyBag;

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

  /// @brief Field renderChainData, offset: 0x88, size: 0x148, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainVEData ___renderChainData;

  /// @brief Field m_Layout, offset: 0x1d0, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_Layout;

  /// @brief Field m_BoundingBox, offset: 0x1e0, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_BoundingBox;

  /// @brief Field m_WorldBoundingBox, offset: 0x1f0, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_WorldBoundingBox;

  /// @brief Field m_WorldTransformCache, offset: 0x200, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_WorldTransformCache;

  /// @brief Field m_WorldTransformInverseCache, offset: 0x240, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_WorldTransformInverseCache;

  /// @brief Field m_WorldClip, offset: 0x280, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_WorldClip;

  /// @brief Field m_WorldClipMinusGroup, offset: 0x290, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_WorldClipMinusGroup;

  /// @brief Field m_WorldClipIsInfinite, offset: 0x2a0, size: 0x1, def value: None
  bool ___m_WorldClipIsInfinite;

  /// @brief Field triggerPseudoMask, offset: 0x2a4, size: 0x4, def value: None
  ::UnityEngine::UIElements::PseudoStates ___triggerPseudoMask;

  /// @brief Field dependencyPseudoMask, offset: 0x2a8, size: 0x4, def value: None
  ::UnityEngine::UIElements::PseudoStates ___dependencyPseudoMask;

  /// @brief Field m_PseudoStates, offset: 0x2ac, size: 0x4, def value: None
  ::UnityEngine::UIElements::PseudoStates ___m_PseudoStates;

  /// @brief Field <containedPointerIds>k__BackingField, offset: 0x2b0, size: 0x4, def value: None
  int32_t ____containedPointerIds_k__BackingField;

  /// @brief Field m_PickingMode, offset: 0x2b4, size: 0x4, def value: None
  ::UnityEngine::UIElements::PickingMode ___m_PickingMode;

  /// @brief Field <yogaNode>k__BackingField, offset: 0x2b8, size: 0x8, def value: None
  ::UnityEngine::Yoga::YogaNode* ____yogaNode_k__BackingField;

  /// @brief Field m_Style, offset: 0x2c0, size: 0x58, def value: None
  ::UnityEngine::UIElements::ComputedStyle ___m_Style;

  /// @brief Field variableContext, offset: 0x318, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleVariableContext* ___variableContext;

  /// @brief Field inheritedStylesHash, offset: 0x320, size: 0x4, def value: None
  int32_t ___inheritedStylesHash;

  /// @brief Field controlid, offset: 0x324, size: 0x4, def value: None
  uint32_t ___controlid;

  /// @brief Field imguiContainerDescendantCount, offset: 0x328, size: 0x4, def value: None
  int32_t ___imguiContainerDescendantCount;

  /// @brief Field <enabledSelf>k__BackingField, offset: 0x32c, size: 0x1, def value: None
  bool ____enabledSelf_k__BackingField;

  /// @brief Field m_LanguageDirection, offset: 0x330, size: 0x4, def value: None
  ::UnityEngine::UIElements::LanguageDirection ___m_LanguageDirection;

  /// @brief Field m_LocalLanguageDirection, offset: 0x334, size: 0x4, def value: None
  ::UnityEngine::UIElements::LanguageDirection ___m_LocalLanguageDirection;

  /// @brief Field <generateVisualContent>k__BackingField, offset: 0x338, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>* ____generateVisualContent_k__BackingField;

  /// @brief Field m_SubRenderTargetMode, offset: 0x340, size: 0x4, def value: None
  ::UnityEngine::UIElements::VisualElement_RenderTargetMode ___m_SubRenderTargetMode;

  /// @brief Field m_defaultMaterial, offset: 0x348, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_defaultMaterial;

  /// @brief Field m_RunningAnimations, offset: 0x350, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* ___m_RunningAnimations;

  /// @brief Field m_NextParentCachedVersion, offset: 0x358, size: 0x4, def value: None
  uint32_t ___m_NextParentCachedVersion;

  /// @brief Field m_NextParentRequiredVersion, offset: 0x35c, size: 0x4, def value: None
  uint32_t ___m_NextParentRequiredVersion;

  /// @brief Field m_CachedNextParentWithEventCallback, offset: 0x360, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CachedNextParentWithEventCallback;

  /// @brief Field m_EventCallbackCategories, offset: 0x368, size: 0x4, def value: None
  int32_t ___m_EventCallbackCategories;

  /// @brief Field m_CachedEventCallbackParentCategories, offset: 0x36c, size: 0x4, def value: None
  int32_t ___m_CachedEventCallbackParentCategories;

  /// @brief Field m_DefaultActionEventCategories, offset: 0x370, size: 0x4, def value: None
  int32_t ___m_DefaultActionEventCategories;

  /// @brief Field m_DefaultActionAtTargetEventCategories, offset: 0x374, size: 0x4, def value: None
  int32_t ___m_DefaultActionAtTargetEventCategories;

  /// @brief Field <hierarchy>k__BackingField, offset: 0x378, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement_Hierarchy ____hierarchy_k__BackingField;

  /// @brief Field <isRootVisualContainer>k__BackingField, offset: 0x380, size: 0x1, def value: None
  bool ____isRootVisualContainer_k__BackingField;

  /// @brief Field <cacheAsBitmap>k__BackingField, offset: 0x381, size: 0x1, def value: None
  bool ____cacheAsBitmap_k__BackingField;

  /// @brief Field m_PhysicalParent, offset: 0x388, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_PhysicalParent;

  /// @brief Field m_LogicalParent, offset: 0x390, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_LogicalParent;

  /// @brief Field m_Children, offset: 0x398, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* ___m_Children;

  /// @brief Field <elementPanel>k__BackingField, offset: 0x3a0, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ____elementPanel_k__BackingField;

  /// @brief Field m_VisualTreeAssetSource, offset: 0x3a8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ___m_VisualTreeAssetSource;

  /// @brief Field inlineStyleAccess, offset: 0x3b0, size: 0x8, def value: None
  ::UnityEngine::UIElements::InlineStyleAccess* ___inlineStyleAccess;

  /// @brief Field styleSheetList, offset: 0x3b8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* ___styleSheetList;

  /// @brief Field m_TypeData, offset: 0x3c0, size: 0x8, def value: None
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

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___renderChainData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_Layout) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_BoundingBox) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_WorldBoundingBox) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_WorldTransformCache) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_WorldTransformInverseCache) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_WorldClip) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_WorldClipMinusGroup) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_WorldClipIsInfinite) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___triggerPseudoMask) == 0x2a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___dependencyPseudoMask) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_PseudoStates) == 0x2ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____containedPointerIds_k__BackingField) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_PickingMode) == 0x2b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____yogaNode_k__BackingField) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_Style) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___variableContext) == 0x318, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___inheritedStylesHash) == 0x320, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___controlid) == 0x324, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___imguiContainerDescendantCount) == 0x328, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____enabledSelf_k__BackingField) == 0x32c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_LanguageDirection) == 0x330, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_LocalLanguageDirection) == 0x334, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____generateVisualContent_k__BackingField) == 0x338, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_SubRenderTargetMode) == 0x340, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_defaultMaterial) == 0x348, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_RunningAnimations) == 0x350, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_NextParentCachedVersion) == 0x358, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_NextParentRequiredVersion) == 0x35c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_CachedNextParentWithEventCallback) == 0x360, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_EventCallbackCategories) == 0x368, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_CachedEventCallbackParentCategories) == 0x36c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_DefaultActionEventCategories) == 0x370, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_DefaultActionAtTargetEventCategories) == 0x374, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____hierarchy_k__BackingField) == 0x378, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____isRootVisualContainer_k__BackingField) == 0x380, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____cacheAsBitmap_k__BackingField) == 0x381, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_PhysicalParent) == 0x388, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_LogicalParent) == 0x390, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_Children) == 0x398, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____elementPanel_k__BackingField) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_VisualTreeAssetSource) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___inlineStyleAccess) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___styleSheetList) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_TypeData) == 0x3c0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElement, 0x3c8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElement_MeasureMode, "UnityEngine.UIElements", "VisualElement/MeasureMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElement_RenderTargetMode, "UnityEngine.UIElements", "VisualElement/RenderTargetMode");
NEED_NO_BOX(::UnityEngine::UIElements::VisualElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElement*, "UnityEngine.UIElements", "VisualElement");
NEED_NO_BOX(::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElement_BaseVisualElementScheduledItem*, "UnityEngine.UIElements", "VisualElement/BaseVisualElementScheduledItem");
NEED_NO_BOX(::UnityEngine::UIElements::VisualElement_CustomStyleAccess);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElement_CustomStyleAccess*, "UnityEngine.UIElements", "VisualElement/CustomStyleAccess");
NEED_NO_BOX(::UnityEngine::UIElements::VisualElement_SimpleScheduledItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElement_SimpleScheduledItem*, "UnityEngine.UIElements", "VisualElement/SimpleScheduledItem");
NEED_NO_BOX(::UnityEngine::UIElements::VisualElement_TimerStateScheduledItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElement_TimerStateScheduledItem*, "UnityEngine.UIElements", "VisualElement/TimerStateScheduledItem");
NEED_NO_BOX(::UnityEngine::UIElements::VisualElement_TypeData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElement_TypeData*, "UnityEngine.UIElements", "VisualElement/TypeData");
NEED_NO_BOX(::UnityEngine::UIElements::VisualElement_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElement_UxmlFactory*, "UnityEngine.UIElements", "VisualElement/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::VisualElement_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElement_UxmlTraits*, "UnityEngine.UIElements", "VisualElement/UxmlTraits");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::VisualElement_VisualElementScheduledItem_1, "UnityEngine.UIElements", "VisualElement/VisualElementScheduledItem`1");
NEED_NO_BOX(::UnityEngine::UIElements::VisualElement___c__DisplayClass492_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElement___c__DisplayClass492_0*, "UnityEngine.UIElements", "VisualElement/<>c__DisplayClass492_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElement_Hierarchy, "UnityEngine.UIElements", "VisualElement/Hierarchy");
