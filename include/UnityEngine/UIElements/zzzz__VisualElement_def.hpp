#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__StyleValues_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainVEData_def.hpp"
#include "UnityEngine/UIElements/zzzz__ComputedStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "UnityEngine/UIElements/zzzz__PickingMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__PseudoStates_def.hpp"
#include "UnityEngine/UIElements/zzzz__RenderHints_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScheduledItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimerState_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFlags_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElement)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
class Object;
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
class IVisualElementPanelActivatable;
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
class VisualTreeAsset;
}
namespace UnityEngine::UIElements {
struct WhiteSpace;
}
namespace UnityEngine::UIElements {
class __VisualElement__BaseVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class __VisualElement__CustomStyleAccess;
}
namespace UnityEngine::UIElements {
struct __VisualElement__Hierarchy;
}
namespace UnityEngine::UIElements {
struct __VisualElement__MeasureMode;
}
namespace UnityEngine::UIElements {
struct __VisualElement__RenderTargetMode;
}
namespace UnityEngine::UIElements {
class __VisualElement__SimpleScheduledItem;
}
namespace UnityEngine::UIElements {
class __VisualElement__TimerStateScheduledItem;
}
namespace UnityEngine::UIElements {
class __VisualElement__TypeData;
}
namespace UnityEngine::UIElements {
class __VisualElement__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __VisualElement__UxmlTraits;
}
namespace UnityEngine::UIElements {
template <typename ActionType> class __VisualElement__VisualElementScheduledItem_1;
}
namespace UnityEngine::UIElements {
class __VisualElement____c__DisplayClass435_0;
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
struct __VisualElement__MeasureMode;
}
namespace UnityEngine::UIElements {
struct __VisualElement__RenderTargetMode;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __VisualElement__BaseVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class __VisualElement__CustomStyleAccess;
}
namespace UnityEngine::UIElements {
class __VisualElement__SimpleScheduledItem;
}
namespace UnityEngine::UIElements {
class __VisualElement__TimerStateScheduledItem;
}
namespace UnityEngine::UIElements {
class __VisualElement__TypeData;
}
namespace UnityEngine::UIElements {
class __VisualElement__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __VisualElement__UxmlTraits;
}
namespace UnityEngine::UIElements {
template <typename ActionType> class __VisualElement__VisualElementScheduledItem_1;
}
namespace UnityEngine::UIElements {
class __VisualElement____c__DisplayClass435_0;
}
namespace UnityEngine::UIElements {
struct __VisualElement__Hierarchy;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__VisualElement__MeasureMode);
MARK_VAL_T(::UnityEngine::UIElements::__VisualElement__RenderTargetMode);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElement);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualElement__BaseVisualElementScheduledItem);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualElement__CustomStyleAccess);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualElement__SimpleScheduledItem);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualElement__TimerStateScheduledItem);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualElement__TypeData);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualElement__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualElement__UxmlTraits);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__VisualElement__VisualElementScheduledItem_1);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualElement____c__DisplayClass435_0);
MARK_VAL_T(::UnityEngine::UIElements::__VisualElement__Hierarchy);
// Type: ::BaseVisualElementScheduledItem
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6201))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5991))
// CS Name: ::VisualElement::BaseVisualElementScheduledItem*
class CORDL_TYPE __VisualElement__BaseVisualElementScheduledItem : public ::UnityEngine::UIElements::ScheduledItem {
public:
  // Declarations
  /// @brief Field <element>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__element_k__BackingField, put = __cordl_internal_set__element_k__BackingField))::UnityEngine::UIElements::VisualElement* _element_k__BackingField;

  /// @brief Field isScheduled, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_isScheduled, put = __cordl_internal_set_isScheduled)) bool isScheduled;

  /// @brief Field m_Activator, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Activator, put = __cordl_internal_set_m_Activator))::UnityEngine::UIElements::VisualElementPanelActivator* m_Activator;

  __declspec(property(get = get_element, put = set_element))::UnityEngine::UIElements::VisualElement* element;

  /// @brief Convert operator to "::UnityEngine::UIElements::IVisualElementScheduledItem"
  constexpr operator ::UnityEngine::UIElements::IVisualElementScheduledItem*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IVisualElementScheduledItem"
  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* i___UnityEngine__UIElements__IVisualElementScheduledItem() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IVisualElementPanelActivatable"
  constexpr operator ::UnityEngine::UIElements::IVisualElementPanelActivatable*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IVisualElementPanelActivatable"
  constexpr ::UnityEngine::UIElements::IVisualElementPanelActivatable* i___UnityEngine__UIElements__IVisualElementPanelActivatable() noexcept;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__element_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get__element_k__BackingField() const;

  constexpr void __cordl_internal_set__element_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr bool& __cordl_internal_get_isScheduled();

  constexpr bool const& __cordl_internal_get_isScheduled() const;

  constexpr void __cordl_internal_set_isScheduled(bool value);

  constexpr ::UnityEngine::UIElements::VisualElementPanelActivator*& __cordl_internal_get_m_Activator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElementPanelActivator*> const& __cordl_internal_get_m_Activator() const;

  constexpr void __cordl_internal_set_m_Activator(::UnityEngine::UIElements::VisualElementPanelActivator* value);

  /// @brief Method get_element, addr 0x2dce720, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::VisualElement* get_element();

  /// @brief Method set_element, addr 0x2dce728, size 0x8, virtual false, abstract: false, final false
  inline void set_element(::UnityEngine::UIElements::VisualElement* value);

  static inline ::UnityEngine::UIElements::__VisualElement__BaseVisualElementScheduledItem* New_ctor(::UnityEngine::UIElements::VisualElement* handler);

  /// @brief Method .ctor, addr 0x2dce730, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* handler);

  /// @brief Method StartingIn, addr 0x2dce800, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* StartingIn(int64_t delayMs);

  /// @brief Method Every, addr 0x2dce808, size 0xa4, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* Every(int64_t intervalMs);

  /// @brief Method OnItemUnscheduled, addr 0x2dce8ac, size 0x3c, virtual true, abstract: false, final false
  inline void OnItemUnscheduled();

  /// @brief Method Resume, addr 0x2dbfe50, size 0x1c, virtual true, abstract: false, final true
  inline void Resume();

  /// @brief Method Pause, addr 0x2dcec24, size 0x1c, virtual true, abstract: false, final true
  inline void Pause();

  /// @brief Method ExecuteLater, addr 0x2dcec40, size 0x3c, virtual true, abstract: false, final true
  inline void ExecuteLater(int64_t delayMs);

  /// @brief Method OnPanelActivate, addr 0x2dcec7c, size 0xf0, virtual true, abstract: false, final true
  inline void OnPanelActivate();

  /// @brief Method OnPanelDeactivate, addr 0x2dced6c, size 0xdc, virtual true, abstract: false, final true
  inline void OnPanelDeactivate();

  /// @brief Method CanBeActivated, addr 0x2dcee48, size 0x3c, virtual true, abstract: false, final true
  inline bool CanBeActivated();

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement__BaseVisualElementScheduledItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualElement__BaseVisualElementScheduledItem(__VisualElement__BaseVisualElementScheduledItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement__BaseVisualElementScheduledItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualElement__BaseVisualElementScheduledItem(__VisualElement__BaseVisualElementScheduledItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualElement__BaseVisualElementScheduledItem();

public:
  /// @brief Field <element>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____element_k__BackingField;

  /// @brief Field isScheduled, offset: 0x40, size: 0x1, def value: None
  bool ___isScheduled;

  /// @brief Field m_Activator, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElementPanelActivator* ___m_Activator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualElement__BaseVisualElementScheduledItem, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__BaseVisualElementScheduledItem, ____element_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__BaseVisualElementScheduledItem, ___isScheduled) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__BaseVisualElementScheduledItem, ___m_Activator) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::VisualElementScheduledItem`1
// SizeInfo { instance_size: 88, native_size: 88, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename ActionType>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5991))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5992))
// CS Name: ::VisualElement::VisualElementScheduledItem`1<ActionType>*
class CORDL_TYPE __VisualElement__VisualElementScheduledItem_1 : public ::UnityEngine::UIElements::__VisualElement__BaseVisualElementScheduledItem {
public:
  // Declarations
  /// @brief Field updateEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_updateEvent, put = __cordl_internal_set_updateEvent)) ActionType updateEvent;

  constexpr ActionType& __cordl_internal_get_updateEvent();

  constexpr ActionType const& __cordl_internal_get_updateEvent() const;

  constexpr void __cordl_internal_set_updateEvent(ActionType value);

  static inline ::UnityEngine::UIElements::__VisualElement__VisualElementScheduledItem_1<ActionType>* New_ctor(::UnityEngine::UIElements::VisualElement* handler, ActionType upEvent);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* handler, ActionType upEvent);

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement__VisualElementScheduledItem_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualElement__VisualElementScheduledItem_1(__VisualElement__VisualElementScheduledItem_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement__VisualElementScheduledItem_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualElement__VisualElementScheduledItem_1(__VisualElement__VisualElementScheduledItem_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualElement__VisualElementScheduledItem_1();

public:
  /// @brief Field updateEvent, offset: 0x50, size: 0x8, def value: None
  ActionType ___updateEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: ::TimerStateScheduledItem
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2323)), TypeDefinitionIndex(TypeDefinitionIndex(5992)), TypeDefinitionIndex(TypeDefinitionIndex(6198)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2323), inst: 405 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5992), inst: 5333 })] Self:
// TypeDefinitionIndex(TypeDefinitionIndex(5993)) CS Name: ::VisualElement::TimerStateScheduledItem*
class CORDL_TYPE __VisualElement__TimerStateScheduledItem
    : public ::UnityEngine::UIElements::__VisualElement__VisualElementScheduledItem_1<::System::Action_1<::UnityEngine::UIElements::TimerState>*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__VisualElement__TimerStateScheduledItem* New_ctor(::UnityEngine::UIElements::VisualElement* handler,
                                                                                              ::System::Action_1<::UnityEngine::UIElements::TimerState>* updateEvent);

  /// @brief Method .ctor, addr 0x2dbfdf0, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* handler, ::System::Action_1<::UnityEngine::UIElements::TimerState>* updateEvent);

  /// @brief Method PerformTimerUpdate, addr 0x2dcee84, size 0x34, virtual true, abstract: false, final false
  inline void PerformTimerUpdate(::UnityEngine::UIElements::TimerState state);

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement__TimerStateScheduledItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualElement__TimerStateScheduledItem(__VisualElement__TimerStateScheduledItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement__TimerStateScheduledItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualElement__TimerStateScheduledItem(__VisualElement__TimerStateScheduledItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualElement__TimerStateScheduledItem();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualElement__TimerStateScheduledItem, 0x58>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::SimpleScheduledItem
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2322)), TypeDefinitionIndex(TypeDefinitionIndex(5992)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5992), inst: 999
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(5994)) CS Name: ::VisualElement::SimpleScheduledItem*
class CORDL_TYPE __VisualElement__SimpleScheduledItem : public ::UnityEngine::UIElements::__VisualElement__VisualElementScheduledItem_1<::System::Action*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__VisualElement__SimpleScheduledItem* New_ctor(::UnityEngine::UIElements::VisualElement* handler, ::System::Action* updateEvent);

  /// @brief Method .ctor, addr 0x2dbff18, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* handler, ::System::Action* updateEvent);

  /// @brief Method PerformTimerUpdate, addr 0x2dceeb8, size 0x34, virtual true, abstract: false, final false
  inline void PerformTimerUpdate(::UnityEngine::UIElements::TimerState state);

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement__SimpleScheduledItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualElement__SimpleScheduledItem(__VisualElement__SimpleScheduledItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement__SimpleScheduledItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualElement__SimpleScheduledItem(__VisualElement__SimpleScheduledItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualElement__SimpleScheduledItem();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualElement__SimpleScheduledItem, 0x58>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6254))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5996))
// CS Name: ::VisualElement::UxmlTraits*
class CORDL_TYPE __VisualElement__UxmlTraits : public ::UnityEngine::UIElements::UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Name;

  /// @brief Field m_ViewDataKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ViewDataKey, put = __cordl_internal_set_m_ViewDataKey))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_ViewDataKey;

  /// @brief Field m_PickingMode, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PickingMode,
                      put = __cordl_internal_set_m_PickingMode))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::PickingMode>* m_PickingMode;

  /// @brief Field m_Tooltip, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Tooltip, put = __cordl_internal_set_m_Tooltip))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Tooltip;

  /// @brief Field m_UsageHints, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UsageHints,
                      put = __cordl_internal_set_m_UsageHints))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::UsageHints>* m_UsageHints;

  /// @brief Field <focusIndex>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__focusIndex_k__BackingField,
                      put = __cordl_internal_set__focusIndex_k__BackingField))::UnityEngine::UIElements::UxmlIntAttributeDescription* _focusIndex_k__BackingField;

  /// @brief Field m_TabIndex, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TabIndex, put = __cordl_internal_set_m_TabIndex))::UnityEngine::UIElements::UxmlIntAttributeDescription* m_TabIndex;

  /// @brief Field <focusable>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__focusable_k__BackingField,
                      put = __cordl_internal_set__focusable_k__BackingField))::UnityEngine::UIElements::UxmlBoolAttributeDescription* _focusable_k__BackingField;

  /// @brief Field m_Class, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Class, put = __cordl_internal_set_m_Class))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Class;

  /// @brief Field m_ContentContainer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentContainer, put = __cordl_internal_set_m_ContentContainer))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_ContentContainer;

  /// @brief Field m_Style, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Style, put = __cordl_internal_set_m_Style))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Style;

  __declspec(property(get = get_focusIndex))::UnityEngine::UIElements::UxmlIntAttributeDescription* focusIndex;

  __declspec(property(get = get_focusable))::UnityEngine::UIElements::UxmlBoolAttributeDescription* focusable;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Name();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_Name() const;

  constexpr void __cordl_internal_set_m_Name(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_ViewDataKey();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_ViewDataKey() const;

  constexpr void __cordl_internal_set_m_ViewDataKey(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::PickingMode>*& __cordl_internal_get_m_PickingMode();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::PickingMode>*> const& __cordl_internal_get_m_PickingMode() const;

  constexpr void __cordl_internal_set_m_PickingMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::PickingMode>* value);

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Tooltip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_Tooltip() const;

  constexpr void __cordl_internal_set_m_Tooltip(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::UsageHints>*& __cordl_internal_get_m_UsageHints();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::UsageHints>*> const& __cordl_internal_get_m_UsageHints() const;

  constexpr void __cordl_internal_set_m_UsageHints(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::UsageHints>* value);

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get__focusIndex_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get__focusIndex_k__BackingField() const;

  constexpr void __cordl_internal_set__focusIndex_k__BackingField(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_TabIndex();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_TabIndex() const;

  constexpr void __cordl_internal_set_m_TabIndex(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get__focusable_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get__focusable_k__BackingField() const;

  constexpr void __cordl_internal_set__focusable_k__BackingField(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Class();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_Class() const;

  constexpr void __cordl_internal_set_m_Class(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_ContentContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_ContentContainer() const;

  constexpr void __cordl_internal_set_m_ContentContainer(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Style();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_Style() const;

  constexpr void __cordl_internal_set_m_Style(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method get_focusIndex, addr 0x2dcef34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UxmlIntAttributeDescription* get_focusIndex();

  /// @brief Method get_focusable, addr 0x2dcef3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UxmlBoolAttributeDescription* get_focusable();

  /// @brief Method Init, addr 0x2dcef44, size 0x288, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__VisualElement__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x2dcf1cc, size 0x4d0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualElement__UxmlTraits(__VisualElement__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualElement__UxmlTraits(__VisualElement__UxmlTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualElement__UxmlTraits();

public:
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualElement__UxmlTraits, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__UxmlTraits, ___m_Name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__UxmlTraits, ___m_ViewDataKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__UxmlTraits, ___m_PickingMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__UxmlTraits, ___m_Tooltip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__UxmlTraits, ___m_UsageHints) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__UxmlTraits, ____focusIndex_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__UxmlTraits, ___m_TabIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__UxmlTraits, ____focusable_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__UxmlTraits, ___m_Class) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__UxmlTraits, ___m_ContentContainer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__UxmlTraits, ___m_Style) == 0x68, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::RenderTargetMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5998))
// CS Name: ::VisualElement::RenderTargetMode
struct CORDL_TYPE __VisualElement__RenderTargetMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____VisualElement__RenderTargetMode_Unwrapped
  enum struct ____VisualElement__RenderTargetMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_NoColorConversion = static_cast<int32_t>(0x1),
    __E_LinearToGamma = static_cast<int32_t>(0x2),
    __E_GammaToLinear = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____VisualElement__RenderTargetMode_Unwrapped() const noexcept {
    return static_cast<____VisualElement__RenderTargetMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __VisualElement__RenderTargetMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualElement__RenderTargetMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__VisualElement__RenderTargetMode const None;

  /// @brief Field NoColorConversion value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__VisualElement__RenderTargetMode const NoColorConversion;

  /// @brief Field LinearToGamma value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__VisualElement__RenderTargetMode const LinearToGamma;

  /// @brief Field GammaToLinear value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::__VisualElement__RenderTargetMode const GammaToLinear;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualElement__RenderTargetMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__RenderTargetMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::Hierarchy
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6000))
// CS Name: ::VisualElement::Hierarchy
struct CORDL_TYPE __VisualElement__Hierarchy {
public:
  // Declarations
  __declspec(property(get = get_parent))::UnityEngine::UIElements::VisualElement* parent;

  __declspec(property(get = get_childCount)) int32_t childCount;

  __declspec(property(get = get_Item))::UnityEngine::UIElements::VisualElement* Item[];

  /// @brief Method get_parent, addr 0x2dc31b4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_parent();

  /// @brief Method .ctor, addr 0x2dc66b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method Add, addr 0x2dc9d6c, size 0x7c, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method Insert, addr 0x2dc9e74, size 0x31c, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method Remove, addr 0x2dcade8, size 0xf4, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method RemoveAt, addr 0x2dcf80c, size 0x244, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method Clear, addr 0x2dca1f4, size 0x344, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method BringToFront, addr 0x2dcaa68, size 0xb4, virtual false, abstract: false, final false
  inline void BringToFront(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method SendToBack, addr 0x2dcab54, size 0x98, virtual false, abstract: false, final false
  inline void SendToBack(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method PlaceBehind, addr 0x2dcacd8, size 0xd8, virtual false, abstract: false, final false
  inline void PlaceBehind(::UnityEngine::UIElements::VisualElement* child, ::UnityEngine::UIElements::VisualElement* over);

  /// @brief Method MoveChildElement, addr 0x2dcfbac, size 0x114, virtual false, abstract: false, final false
  inline void MoveChildElement(::UnityEngine::UIElements::VisualElement* child, int32_t currentIndex, int32_t nextIndex);

  /// @brief Method get_childCount, addr 0x2dca674, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_childCount();

  /// @brief Method get_Item, addr 0x2dca5b0, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_Item(int32_t key);

  /// @brief Method IndexOf, addr 0x2dca740, size 0x60, virtual false, abstract: false, final false
  inline int32_t IndexOf(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method ElementAt, addr 0x2dcfcc0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* ElementAt(int32_t index);

  /// @brief Method SetParent, addr 0x2dcf7e4, size 0x28, virtual false, abstract: false, final false
  inline void SetParent(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method PutChildAtIndex, addr 0x2dcf6a4, size 0x140, virtual false, abstract: false, final false
  inline void PutChildAtIndex(::UnityEngine::UIElements::VisualElement* child, int32_t index);

  /// @brief Method RemoveChildAtIndex, addr 0x2dcfa50, size 0x7c, virtual false, abstract: false, final false
  inline void RemoveChildAtIndex(int32_t index);

  /// @brief Method ReleaseChildList, addr 0x2dcfacc, size 0xe0, virtual false, abstract: false, final false
  inline void ReleaseChildList();

  /// @brief Method Equals, addr 0x2dcfcc4, size 0x10, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::UIElements::__VisualElement__Hierarchy other);

  /// @brief Method Equals, addr 0x2dcfce0, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2dcfd58, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality, addr 0x2dcfcd4, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::__VisualElement__Hierarchy x, ::UnityEngine::UIElements::__VisualElement__Hierarchy y);

  // Ctor Parameters [CppParam { name: "m_Owner", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }]
  constexpr __VisualElement__Hierarchy(::UnityEngine::UIElements::VisualElement* m_Owner) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualElement__Hierarchy();

  /// @brief Field m_Owner, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* m_Owner;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field k_InvalidHierarchyChangeMsg offset 0xffffffff size 0x8
  static constexpr ::ConstString k_InvalidHierarchyChangeMsg{ u"Cannot modify VisualElement hierarchy during layout calculation" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualElement__Hierarchy, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__Hierarchy, m_Owner) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::VisualElement
// SizeInfo { instance_size: 944, native_size: -1, calculated_instance_size: 944, calculated_native_size: 944, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5998)), TypeDefinitionIndex(TypeDefinitionIndex(6000)), TypeDefinitionIndex(TypeDefinitionIndex(6080)),
// TypeDefinitionIndex(TypeDefinitionIndex(6081)), TypeDefinitionIndex(TypeDefinitionIndex(6082)), TypeDefinitionIndex(TypeDefinitionIndex(6124)), TypeDefinitionIndex(TypeDefinitionIndex(6139)),
// TypeDefinitionIndex(TypeDefinitionIndex(6555)), TypeDefinitionIndex(TypeDefinitionIndex(6655)), TypeDefinitionIndex(TypeDefinitionIndex(8695)), TypeDefinitionIndex(TypeDefinitionIndex(8903)),
// TypeDefinitionIndex(TypeDefinitionIndex(8909)), TypeDefinitionIndex(TypeDefinitionIndex(8989))] Self: TypeDefinitionIndex(TypeDefinitionIndex(6003)) CS Name:
// ::UnityEngine.UIElements::VisualElement*
class CORDL_TYPE VisualElement : public ::UnityEngine::UIElements::Focusable {
public:
  // Declarations
  using __c__DisplayClass435_0 = ::UnityEngine::UIElements::__VisualElement____c__DisplayClass435_0;

  using CustomStyleAccess = ::UnityEngine::UIElements::__VisualElement__CustomStyleAccess;

  using Hierarchy = ::UnityEngine::UIElements::__VisualElement__Hierarchy;

  using TypeData = ::UnityEngine::UIElements::__VisualElement__TypeData;

  using RenderTargetMode = ::UnityEngine::UIElements::__VisualElement__RenderTargetMode;

  using MeasureMode = ::UnityEngine::UIElements::__VisualElement__MeasureMode;

  using UxmlTraits = ::UnityEngine::UIElements::__VisualElement__UxmlTraits;

  using UxmlFactory = ::UnityEngine::UIElements::__VisualElement__UxmlFactory;

  using SimpleScheduledItem = ::UnityEngine::UIElements::__VisualElement__SimpleScheduledItem;

  using TimerStateScheduledItem = ::UnityEngine::UIElements::__VisualElement__TimerStateScheduledItem;

  template <typename ActionType> using VisualElementScheduledItem_1 = ::UnityEngine::UIElements::__VisualElement__VisualElementScheduledItem_1<ActionType>;

  using BaseVisualElementScheduledItem = ::UnityEngine::UIElements::__VisualElement__BaseVisualElementScheduledItem;

  /// @brief Field <UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField,
                      put = __cordl_internal_set__UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField)) int32_t
      _UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField,
                      put = __cordl_internal_set__UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField)) int32_t
      _UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField;

  /// @brief Field m_Name, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name))::StringW m_Name;

  /// @brief Field m_ClassList, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClassList, put = __cordl_internal_set_m_ClassList))::System::Collections::Generic::List_1<::StringW>* m_ClassList;

  /// @brief Field m_PropertyBag, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_PropertyBag,
      put = __cordl_internal_set_m_PropertyBag))::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName, ::System::Object*>>* m_PropertyBag;

  /// @brief Field m_Flags, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags))::UnityEngine::UIElements::VisualElementFlags m_Flags;

  /// @brief Field m_ViewDataKey, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ViewDataKey, put = __cordl_internal_set_m_ViewDataKey))::StringW m_ViewDataKey;

  /// @brief Field m_RenderHints, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderHints, put = __cordl_internal_set_m_RenderHints))::UnityEngine::UIElements::RenderHints m_RenderHints;

  /// @brief Field lastLayout, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get_lastLayout, put = __cordl_internal_set_lastLayout))::UnityEngine::Rect lastLayout;

  /// @brief Field lastPseudoPadding, offset 0x6c, size 0x10
  __declspec(property(get = __cordl_internal_get_lastPseudoPadding, put = __cordl_internal_set_lastPseudoPadding))::UnityEngine::Rect lastPseudoPadding;

  /// @brief Field renderChainData, offset 0x80, size 0x158
  __declspec(property(get = __cordl_internal_get_renderChainData, put = __cordl_internal_set_renderChainData))::UnityEngine::UIElements::UIR::RenderChainVEData renderChainData;

  /// @brief Field m_Layout, offset 0x1d8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Layout, put = __cordl_internal_set_m_Layout))::UnityEngine::Rect m_Layout;

  /// @brief Field m_BoundingBox, offset 0x1e8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_BoundingBox, put = __cordl_internal_set_m_BoundingBox))::UnityEngine::Rect m_BoundingBox;

  /// @brief Field m_WorldBoundingBox, offset 0x1f8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_WorldBoundingBox, put = __cordl_internal_set_m_WorldBoundingBox))::UnityEngine::Rect m_WorldBoundingBox;

  /// @brief Field m_WorldTransformCache, offset 0x208, size 0x40
  __declspec(property(get = __cordl_internal_get_m_WorldTransformCache, put = __cordl_internal_set_m_WorldTransformCache))::UnityEngine::Matrix4x4 m_WorldTransformCache;

  /// @brief Field m_WorldTransformInverseCache, offset 0x248, size 0x40
  __declspec(property(get = __cordl_internal_get_m_WorldTransformInverseCache, put = __cordl_internal_set_m_WorldTransformInverseCache))::UnityEngine::Matrix4x4 m_WorldTransformInverseCache;

  /// @brief Field m_WorldClip, offset 0x288, size 0x10
  __declspec(property(get = __cordl_internal_get_m_WorldClip, put = __cordl_internal_set_m_WorldClip))::UnityEngine::Rect m_WorldClip;

  /// @brief Field m_WorldClipMinusGroup, offset 0x298, size 0x10
  __declspec(property(get = __cordl_internal_get_m_WorldClipMinusGroup, put = __cordl_internal_set_m_WorldClipMinusGroup))::UnityEngine::Rect m_WorldClipMinusGroup;

  /// @brief Field m_WorldClipIsInfinite, offset 0x2a8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_WorldClipIsInfinite, put = __cordl_internal_set_m_WorldClipIsInfinite)) bool m_WorldClipIsInfinite;

  /// @brief Field triggerPseudoMask, offset 0x2ac, size 0x4
  __declspec(property(get = __cordl_internal_get_triggerPseudoMask, put = __cordl_internal_set_triggerPseudoMask))::UnityEngine::UIElements::PseudoStates triggerPseudoMask;

  /// @brief Field dependencyPseudoMask, offset 0x2b0, size 0x4
  __declspec(property(get = __cordl_internal_get_dependencyPseudoMask, put = __cordl_internal_set_dependencyPseudoMask))::UnityEngine::UIElements::PseudoStates dependencyPseudoMask;

  /// @brief Field m_PseudoStates, offset 0x2b4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PseudoStates, put = __cordl_internal_set_m_PseudoStates))::UnityEngine::UIElements::PseudoStates m_PseudoStates;

  /// @brief Field <containedPointerIds>k__BackingField, offset 0x2b8, size 0x4
  __declspec(property(get = __cordl_internal_get__containedPointerIds_k__BackingField, put = __cordl_internal_set__containedPointerIds_k__BackingField)) int32_t _containedPointerIds_k__BackingField;

  /// @brief Field <pickingMode>k__BackingField, offset 0x2bc, size 0x4
  __declspec(property(get = __cordl_internal_get__pickingMode_k__BackingField,
                      put = __cordl_internal_set__pickingMode_k__BackingField))::UnityEngine::UIElements::PickingMode _pickingMode_k__BackingField;

  /// @brief Field <yogaNode>k__BackingField, offset 0x2c0, size 0x8
  __declspec(property(get = __cordl_internal_get__yogaNode_k__BackingField, put = __cordl_internal_set__yogaNode_k__BackingField))::UnityEngine::Yoga::YogaNode* _yogaNode_k__BackingField;

  /// @brief Field m_Style, offset 0x2c8, size 0x58
  __declspec(property(get = __cordl_internal_get_m_Style, put = __cordl_internal_set_m_Style))::UnityEngine::UIElements::ComputedStyle m_Style;

  /// @brief Field variableContext, offset 0x320, size 0x8
  __declspec(property(get = __cordl_internal_get_variableContext, put = __cordl_internal_set_variableContext))::UnityEngine::UIElements::StyleVariableContext* variableContext;

  /// @brief Field inheritedStylesHash, offset 0x328, size 0x4
  __declspec(property(get = __cordl_internal_get_inheritedStylesHash, put = __cordl_internal_set_inheritedStylesHash)) int32_t inheritedStylesHash;

  /// @brief Field controlid, offset 0x32c, size 0x4
  __declspec(property(get = __cordl_internal_get_controlid, put = __cordl_internal_set_controlid)) uint32_t controlid;

  /// @brief Field imguiContainerDescendantCount, offset 0x330, size 0x4
  __declspec(property(get = __cordl_internal_get_imguiContainerDescendantCount, put = __cordl_internal_set_imguiContainerDescendantCount)) int32_t imguiContainerDescendantCount;

  /// @brief Field <enabledSelf>k__BackingField, offset 0x334, size 0x1
  __declspec(property(get = __cordl_internal_get__enabledSelf_k__BackingField, put = __cordl_internal_set__enabledSelf_k__BackingField)) bool _enabledSelf_k__BackingField;

  /// @brief Field <generateVisualContent>k__BackingField, offset 0x338, size 0x8
  __declspec(property(get = __cordl_internal_get__generateVisualContent_k__BackingField,
                      put = __cordl_internal_set__generateVisualContent_k__BackingField))::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>* _generateVisualContent_k__BackingField;

  /// @brief Field k_GenerateVisualContentMarker, offset 0x340, size 0x8
  __declspec(property(get = __cordl_internal_get_k_GenerateVisualContentMarker,
                      put = __cordl_internal_set_k_GenerateVisualContentMarker))::Unity::Profiling::ProfilerMarker k_GenerateVisualContentMarker;

  /// @brief Field m_SubRenderTargetMode, offset 0x348, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SubRenderTargetMode,
                      put = __cordl_internal_set_m_SubRenderTargetMode))::UnityEngine::UIElements::__VisualElement__RenderTargetMode m_SubRenderTargetMode;

  /// @brief Field m_defaultMaterial, offset 0x350, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultMaterial, put = __cordl_internal_set_m_defaultMaterial))::UnityW<::UnityEngine::Material> m_defaultMaterial;

  /// @brief Field m_TypeData, offset 0x358, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TypeData, put = __cordl_internal_set_m_TypeData))::UnityEngine::UIElements::__VisualElement__TypeData* m_TypeData;

  /// @brief Field <hierarchy>k__BackingField, offset 0x360, size 0x8
  __declspec(property(get = __cordl_internal_get__hierarchy_k__BackingField,
                      put = __cordl_internal_set__hierarchy_k__BackingField))::UnityEngine::UIElements::__VisualElement__Hierarchy _hierarchy_k__BackingField;

  /// @brief Field <isRootVisualContainer>k__BackingField, offset 0x368, size 0x1
  __declspec(property(get = __cordl_internal_get__isRootVisualContainer_k__BackingField,
                      put = __cordl_internal_set__isRootVisualContainer_k__BackingField)) bool _isRootVisualContainer_k__BackingField;

  /// @brief Field <cacheAsBitmap>k__BackingField, offset 0x369, size 0x1
  __declspec(property(get = __cordl_internal_get__cacheAsBitmap_k__BackingField, put = __cordl_internal_set__cacheAsBitmap_k__BackingField)) bool _cacheAsBitmap_k__BackingField;

  /// @brief Field m_PhysicalParent, offset 0x370, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PhysicalParent, put = __cordl_internal_set_m_PhysicalParent))::UnityEngine::UIElements::VisualElement* m_PhysicalParent;

  /// @brief Field m_LogicalParent, offset 0x378, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LogicalParent, put = __cordl_internal_set_m_LogicalParent))::UnityEngine::UIElements::VisualElement* m_LogicalParent;

  /// @brief Field m_Children, offset 0x380, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Children, put = __cordl_internal_set_m_Children))::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* m_Children;

  /// @brief Field <elementPanel>k__BackingField, offset 0x388, size 0x8
  __declspec(property(get = __cordl_internal_get__elementPanel_k__BackingField,
                      put = __cordl_internal_set__elementPanel_k__BackingField))::UnityEngine::UIElements::BaseVisualElementPanel* _elementPanel_k__BackingField;

  /// @brief Field m_VisualTreeAssetSource, offset 0x390, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualTreeAssetSource,
                      put = __cordl_internal_set_m_VisualTreeAssetSource))::UnityW<::UnityEngine::UIElements::VisualTreeAsset> m_VisualTreeAssetSource;

  /// @brief Field inlineStyleAccess, offset 0x398, size 0x8
  __declspec(property(get = __cordl_internal_get_inlineStyleAccess, put = __cordl_internal_set_inlineStyleAccess))::UnityEngine::UIElements::InlineStyleAccess* inlineStyleAccess;

  /// @brief Field styleSheetList, offset 0x3a0, size 0x8
  __declspec(property(get = __cordl_internal_get_styleSheetList,
                      put = __cordl_internal_set_styleSheetList))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* styleSheetList;

  /// @brief Field m_RunningAnimations, offset 0x3a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RunningAnimations,
                      put = __cordl_internal_set_m_RunningAnimations))::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* m_RunningAnimations;

  /// @brief Field tooltipPropertyKey, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_tooltipPropertyKey, put = setStaticF_tooltipPropertyKey))::UnityEngine::PropertyName tooltipPropertyKey;

  /// @brief Field s_NextId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_NextId, put = setStaticF_s_NextId)) uint32_t s_NextId;

  /// @brief Field s_EmptyClassList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EmptyClassList, put = setStaticF_s_EmptyClassList))::System::Collections::Generic::List_1<::StringW>* s_EmptyClassList;

  /// @brief Field userDataPropertyKey, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_userDataPropertyKey, put = setStaticF_userDataPropertyKey))::UnityEngine::PropertyName userDataPropertyKey;

  /// @brief Field disabledUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_disabledUssClassName, put = setStaticF_disabledUssClassName))::StringW disabledUssClassName;

  /// @brief Field s_InfiniteRect, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_InfiniteRect, put = setStaticF_s_InfiniteRect))::UnityEngine::Rect s_InfiniteRect;

  /// @brief Field s_runtimeMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_runtimeMaterial, put = setStaticF_s_runtimeMaterial))::UnityW<::UnityEngine::Material> s_runtimeMaterial;

  /// @brief Field s_TypeData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TypeData,
                             put = setStaticF_s_TypeData))::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::__VisualElement__TypeData*>* s_TypeData;

  /// @brief Field s_EmptyList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EmptyList, put = setStaticF_s_EmptyList))::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* s_EmptyList;

  /// @brief Field s_CustomStyleAccess, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CustomStyleAccess, put = setStaticF_s_CustomStyleAccess))::UnityEngine::UIElements::__VisualElement__CustomStyleAccess* s_CustomStyleAccess;

  /// @brief Field s_InternalStyleSheetPath, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InternalStyleSheetPath, put = setStaticF_s_InternalStyleSheetPath))::System::Text::RegularExpressions::Regex* s_InternalStyleSheetPath;

  __declspec(property(get = get_tooltip, put = set_tooltip))::StringW tooltip;

  __declspec(property(get = get_schedule))::UnityEngine::UIElements::IVisualElementScheduler* schedule;

  __declspec(property(get = get_hasRunningAnimations)) bool hasRunningAnimations;

  __declspec(property(get = get_hasCompletedAnimations)) bool hasCompletedAnimations;

  __declspec(property(get = UnityEngine_UIElements_IStylePropertyAnimations_get_runningAnimationCount,
                      put = UnityEngine_UIElements_IStylePropertyAnimations_set_runningAnimationCount)) int32_t UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount;

  __declspec(property(get = UnityEngine_UIElements_IStylePropertyAnimations_get_completedAnimationCount,
                      put = UnityEngine_UIElements_IStylePropertyAnimations_set_completedAnimationCount)) int32_t UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount;

  __declspec(property(get = get_styleAnimation))::UnityEngine::UIElements::IStylePropertyAnimations* styleAnimation;

  __declspec(property(get = get_positionWithLayout))::UnityEngine::Vector3 positionWithLayout;

  __declspec(property(get = get_hasDefaultRotationAndScale)) bool hasDefaultRotationAndScale;

  __declspec(property(get = get_isCompositeRoot, put = set_isCompositeRoot)) bool isCompositeRoot;

  __declspec(property(get = get_isHierarchyDisplayed, put = set_isHierarchyDisplayed)) bool isHierarchyDisplayed;

  __declspec(property(get = get_viewDataKey, put = set_viewDataKey))::StringW viewDataKey;

  __declspec(property(get = get_enableViewDataPersistence, put = set_enableViewDataPersistence)) bool enableViewDataPersistence;

  __declspec(property(get = get_userData, put = set_userData))::System::Object* userData;

  __declspec(property(get = get_canGrabFocus)) bool canGrabFocus;

  __declspec(property(get = get_focusController))::UnityEngine::UIElements::FocusController* focusController;

  __declspec(property(get = get_usageHints, put = set_usageHints))::UnityEngine::UIElements::UsageHints usageHints;

  __declspec(property(get = get_renderHints, put = set_renderHints))::UnityEngine::UIElements::RenderHints renderHints;

  __declspec(property(get = get_transform))::UnityEngine::UIElements::ITransform* transform;

  __declspec(property(get = UnityEngine_UIElements_ITransform_get_position, put = UnityEngine_UIElements_ITransform_set_position))::UnityEngine::Vector3 UnityEngine_UIElements_ITransform_position;

  __declspec(property(get = UnityEngine_UIElements_ITransform_get_scale))::UnityEngine::Vector3 UnityEngine_UIElements_ITransform_scale;

  __declspec(property(get = get_isLayoutManual, put = set_isLayoutManual)) bool isLayoutManual;

  __declspec(property(get = get_scaledPixelsPerPoint)) float_t scaledPixelsPerPoint;

  __declspec(property(get = get_layout, put = set_layout))::UnityEngine::Rect layout;

  __declspec(property(get = get_contentRect))::UnityEngine::Rect contentRect;

  __declspec(property(get = get_paddingRect))::UnityEngine::Rect paddingRect;

  __declspec(property(get = get_isBoundingBoxDirty, put = set_isBoundingBoxDirty)) bool isBoundingBoxDirty;

  __declspec(property(get = get_isWorldBoundingBoxDirty, put = set_isWorldBoundingBoxDirty)) bool isWorldBoundingBoxDirty;

  __declspec(property(get = get_boundingBox))::UnityEngine::Rect boundingBox;

  __declspec(property(get = get_worldBoundingBox))::UnityEngine::Rect worldBoundingBox;

  __declspec(property(get = get_boundingBoxInParentSpace))::UnityEngine::Rect boundingBoxInParentSpace;

  __declspec(property(get = get_worldBound))::UnityEngine::Rect worldBound;

  __declspec(property(get = get_localBound))::UnityEngine::Rect localBound;

  __declspec(property(get = get_rect))::UnityEngine::Rect rect;

  __declspec(property(get = get_isWorldTransformDirty, put = set_isWorldTransformDirty)) bool isWorldTransformDirty;

  __declspec(property(get = get_isWorldTransformInverseDirty, put = set_isWorldTransformInverseDirty)) bool isWorldTransformInverseDirty;

  __declspec(property(get = get_worldTransform))::UnityEngine::Matrix4x4 worldTransform;

  __declspec(property(get = get_worldTransformRef))::UnityEngine::Matrix4x4 worldTransformRef;

  __declspec(property(get = get_worldTransformInverse))::UnityEngine::Matrix4x4 worldTransformInverse;

  __declspec(property(get = get_isWorldClipDirty, put = set_isWorldClipDirty)) bool isWorldClipDirty;

  __declspec(property(get = get_worldClip))::UnityEngine::Rect worldClip;

  __declspec(property(get = get_worldClipMinusGroup))::UnityEngine::Rect worldClipMinusGroup;

  __declspec(property(get = get_worldClipIsInfinite)) bool worldClipIsInfinite;

  __declspec(property(get = get_pseudoStates, put = set_pseudoStates))::UnityEngine::UIElements::PseudoStates pseudoStates;

  __declspec(property(get = get_containedPointerIds, put = set_containedPointerIds)) int32_t containedPointerIds;

  __declspec(property(get = get_pickingMode, put = set_pickingMode))::UnityEngine::UIElements::PickingMode pickingMode;

  __declspec(property(get = get_name, put = set_name))::StringW name;

  __declspec(property(get = get_fullTypeName))::StringW fullTypeName;

  __declspec(property(get = get_typeName))::StringW typeName;

  __declspec(property(get = get_yogaNode, put = set_yogaNode))::UnityEngine::Yoga::YogaNode* yogaNode;

  __declspec(property(get = get_computedStyle))::UnityEngine::UIElements::ComputedStyle computedStyle;

  __declspec(property(get = get_hasInlineStyle)) bool hasInlineStyle;

  __declspec(property(get = get_styleInitialized, put = set_styleInitialized)) bool styleInitialized;

  __declspec(property(get = get_isParentEnabledInHierarchy)) bool isParentEnabledInHierarchy;

  __declspec(property(get = get_enabledInHierarchy)) bool enabledInHierarchy;

  __declspec(property(get = get_enabledSelf, put = set_enabledSelf)) bool enabledSelf;

  __declspec(property(get = get_visible, put = set_visible)) bool visible;

  __declspec(property(get = get_generateVisualContent, put = set_generateVisualContent))::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>* generateVisualContent;

  __declspec(property(get = get_requireMeasureFunction, put = set_requireMeasureFunction)) bool requireMeasureFunction;

  __declspec(property(get = get_subRenderTargetMode))::UnityEngine::UIElements::__VisualElement__RenderTargetMode subRenderTargetMode;

  __declspec(property(get = get_defaultMaterial))::UnityW<::UnityEngine::Material> defaultMaterial;

  __declspec(property(get = get_typeData))::UnityEngine::UIElements::__VisualElement__TypeData* typeData;

  __declspec(property(get = get_experimental))::UnityEngine::UIElements::IExperimentalFeatures* experimental;

  __declspec(
      property(get = UnityEngine_UIElements_IExperimentalFeatures_get_animation))::UnityEngine::UIElements::Experimental::ITransitionAnimations* UnityEngine_UIElements_IExperimentalFeatures_animation;

  __declspec(property(get = get_hierarchy, put = set_hierarchy))::UnityEngine::UIElements::__VisualElement__Hierarchy hierarchy;

  __declspec(property(get = get_isRootVisualContainer, put = set_isRootVisualContainer)) bool isRootVisualContainer;

  __declspec(property(get = get_disableClipping, put = set_disableClipping)) bool disableClipping;

  __declspec(property(get = get_parent))::UnityEngine::UIElements::VisualElement* parent;

  __declspec(property(get = get_elementPanel, put = set_elementPanel))::UnityEngine::UIElements::BaseVisualElementPanel* elementPanel;

  __declspec(property(get = get_panel))::UnityEngine::UIElements::IPanel* panel;

  __declspec(property(get = get_contentContainer))::UnityEngine::UIElements::VisualElement* contentContainer;

  __declspec(property(put = set_visualTreeAssetSource))::UnityW<::UnityEngine::UIElements::VisualTreeAsset> visualTreeAssetSource;

  __declspec(property(get = get_Item))::UnityEngine::UIElements::VisualElement* Item[];

  __declspec(property(get = get_childCount)) int32_t childCount;

  __declspec(property(get = get_style))::UnityEngine::UIElements::IStyle* style;

  __declspec(property(get = get_customStyle))::UnityEngine::UIElements::ICustomStyle* customStyle;

  __declspec(property(get = get_styleSheets))::UnityEngine::UIElements::VisualElementStyleSheetSet styleSheets;

  __declspec(property(get = get_resolvedStyle))::UnityEngine::UIElements::IResolvedStyle* resolvedStyle;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_backgroundColor))::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_backgroundColor;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderBottomColor))::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_borderBottomColor;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderBottomLeftRadius)) float_t UnityEngine_UIElements_IResolvedStyle_borderBottomLeftRadius;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderBottomRightRadius)) float_t UnityEngine_UIElements_IResolvedStyle_borderBottomRightRadius;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderBottomWidth)) float_t UnityEngine_UIElements_IResolvedStyle_borderBottomWidth;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderLeftColor))::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_borderLeftColor;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderLeftWidth)) float_t UnityEngine_UIElements_IResolvedStyle_borderLeftWidth;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderRightColor))::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_borderRightColor;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderRightWidth)) float_t UnityEngine_UIElements_IResolvedStyle_borderRightWidth;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderTopColor))::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_borderTopColor;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderTopLeftRadius)) float_t UnityEngine_UIElements_IResolvedStyle_borderTopLeftRadius;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderTopRightRadius)) float_t UnityEngine_UIElements_IResolvedStyle_borderTopRightRadius;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_borderTopWidth)) float_t UnityEngine_UIElements_IResolvedStyle_borderTopWidth;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_bottom)) float_t UnityEngine_UIElements_IResolvedStyle_bottom;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_color))::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_color;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_display))::UnityEngine::UIElements::DisplayStyle UnityEngine_UIElements_IResolvedStyle_display;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_flexGrow)) float_t UnityEngine_UIElements_IResolvedStyle_flexGrow;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_flexShrink)) float_t UnityEngine_UIElements_IResolvedStyle_flexShrink;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_height)) float_t UnityEngine_UIElements_IResolvedStyle_height;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_left)) float_t UnityEngine_UIElements_IResolvedStyle_left;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_marginBottom)) float_t UnityEngine_UIElements_IResolvedStyle_marginBottom;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_marginLeft)) float_t UnityEngine_UIElements_IResolvedStyle_marginLeft;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_marginRight)) float_t UnityEngine_UIElements_IResolvedStyle_marginRight;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_marginTop)) float_t UnityEngine_UIElements_IResolvedStyle_marginTop;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_minHeight))::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_minHeight;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_minWidth))::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_minWidth;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_opacity)) float_t UnityEngine_UIElements_IResolvedStyle_opacity;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_paddingBottom)) float_t UnityEngine_UIElements_IResolvedStyle_paddingBottom;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_paddingLeft)) float_t UnityEngine_UIElements_IResolvedStyle_paddingLeft;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_paddingRight)) float_t UnityEngine_UIElements_IResolvedStyle_paddingRight;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_paddingTop)) float_t UnityEngine_UIElements_IResolvedStyle_paddingTop;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_right)) float_t UnityEngine_UIElements_IResolvedStyle_right;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_scale))::UnityEngine::UIElements::Scale UnityEngine_UIElements_IResolvedStyle_scale;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_top)) float_t UnityEngine_UIElements_IResolvedStyle_top;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_transformOrigin))::UnityEngine::Vector3 UnityEngine_UIElements_IResolvedStyle_transformOrigin;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_translate))::UnityEngine::Vector3 UnityEngine_UIElements_IResolvedStyle_translate;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unityBackgroundImageTintColor))::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_unityBackgroundImageTintColor;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unitySliceLeft)) int32_t UnityEngine_UIElements_IResolvedStyle_unitySliceLeft;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unitySliceRight)) int32_t UnityEngine_UIElements_IResolvedStyle_unitySliceRight;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unityTextOutlineColor))::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_unityTextOutlineColor;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_unityTextOutlineWidth)) float_t UnityEngine_UIElements_IResolvedStyle_unityTextOutlineWidth;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_visibility))::UnityEngine::UIElements::Visibility UnityEngine_UIElements_IResolvedStyle_visibility;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_whiteSpace))::UnityEngine::UIElements::WhiteSpace UnityEngine_UIElements_IResolvedStyle_whiteSpace;

  __declspec(property(get = UnityEngine_UIElements_IResolvedStyle_get_width)) float_t UnityEngine_UIElements_IResolvedStyle_width;

  /// @brief Convert operator to "::UnityEngine::UIElements::IVisualElementScheduler"
  constexpr operator ::UnityEngine::UIElements::IVisualElementScheduler*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IVisualElementScheduler"
  constexpr ::UnityEngine::UIElements::IVisualElementScheduler* i___UnityEngine__UIElements__IVisualElementScheduler() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IStylePropertyAnimations"
  constexpr operator ::UnityEngine::UIElements::IStylePropertyAnimations*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IStylePropertyAnimations"
  constexpr ::UnityEngine::UIElements::IStylePropertyAnimations* i___UnityEngine__UIElements__IStylePropertyAnimations() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::ITransform"
  constexpr operator ::UnityEngine::UIElements::ITransform*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::ITransform"
  constexpr ::UnityEngine::UIElements::ITransform* i___UnityEngine__UIElements__ITransform() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IExperimentalFeatures"
  constexpr operator ::UnityEngine::UIElements::IExperimentalFeatures*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IExperimentalFeatures"
  constexpr ::UnityEngine::UIElements::IExperimentalFeatures* i___UnityEngine__UIElements__IExperimentalFeatures() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::Experimental::ITransitionAnimations"
  constexpr operator ::UnityEngine::UIElements::Experimental::ITransitionAnimations*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::Experimental::ITransitionAnimations"
  constexpr ::UnityEngine::UIElements::Experimental::ITransitionAnimations* i___UnityEngine__UIElements__Experimental__ITransitionAnimations() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IResolvedStyle"
  constexpr operator ::UnityEngine::UIElements::IResolvedStyle*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IResolvedStyle"
  constexpr ::UnityEngine::UIElements::IResolvedStyle* i___UnityEngine__UIElements__IResolvedStyle() noexcept;

  constexpr int32_t& __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField() const;

  constexpr void __cordl_internal_set__UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField(int32_t value);

  constexpr int32_t& __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField() const;

  constexpr void __cordl_internal_set__UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField(int32_t value);

  constexpr ::StringW& __cordl_internal_get_m_Name();

  constexpr ::StringW const& __cordl_internal_get_m_Name() const;

  constexpr void __cordl_internal_set_m_Name(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_ClassList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_m_ClassList() const;

  constexpr void __cordl_internal_set_m_ClassList(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName, ::System::Object*>>*& __cordl_internal_get_m_PropertyBag();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName, ::System::Object*>>*> const&
  __cordl_internal_get_m_PropertyBag() const;

  constexpr void __cordl_internal_set_m_PropertyBag(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName, ::System::Object*>>* value);

  constexpr ::UnityEngine::UIElements::VisualElementFlags& __cordl_internal_get_m_Flags();

  constexpr ::UnityEngine::UIElements::VisualElementFlags const& __cordl_internal_get_m_Flags() const;

  constexpr void __cordl_internal_set_m_Flags(::UnityEngine::UIElements::VisualElementFlags value);

  constexpr ::StringW& __cordl_internal_get_m_ViewDataKey();

  constexpr ::StringW const& __cordl_internal_get_m_ViewDataKey() const;

  constexpr void __cordl_internal_set_m_ViewDataKey(::StringW value);

  constexpr ::UnityEngine::UIElements::RenderHints& __cordl_internal_get_m_RenderHints();

  constexpr ::UnityEngine::UIElements::RenderHints const& __cordl_internal_get_m_RenderHints() const;

  constexpr void __cordl_internal_set_m_RenderHints(::UnityEngine::UIElements::RenderHints value);

  constexpr ::UnityEngine::Rect& __cordl_internal_get_lastLayout();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_lastLayout() const;

  constexpr void __cordl_internal_set_lastLayout(::UnityEngine::Rect value);

  constexpr ::UnityEngine::Rect& __cordl_internal_get_lastPseudoPadding();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_lastPseudoPadding() const;

  constexpr void __cordl_internal_set_lastPseudoPadding(::UnityEngine::Rect value);

  constexpr ::UnityEngine::UIElements::UIR::RenderChainVEData& __cordl_internal_get_renderChainData();

  constexpr ::UnityEngine::UIElements::UIR::RenderChainVEData const& __cordl_internal_get_renderChainData() const;

  constexpr void __cordl_internal_set_renderChainData(::UnityEngine::UIElements::UIR::RenderChainVEData value);

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_Layout();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_Layout() const;

  constexpr void __cordl_internal_set_m_Layout(::UnityEngine::Rect value);

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_BoundingBox();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_BoundingBox() const;

  constexpr void __cordl_internal_set_m_BoundingBox(::UnityEngine::Rect value);

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_WorldBoundingBox();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_WorldBoundingBox() const;

  constexpr void __cordl_internal_set_m_WorldBoundingBox(::UnityEngine::Rect value);

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_WorldTransformCache();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_WorldTransformCache() const;

  constexpr void __cordl_internal_set_m_WorldTransformCache(::UnityEngine::Matrix4x4 value);

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_WorldTransformInverseCache();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_WorldTransformInverseCache() const;

  constexpr void __cordl_internal_set_m_WorldTransformInverseCache(::UnityEngine::Matrix4x4 value);

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_WorldClip();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_WorldClip() const;

  constexpr void __cordl_internal_set_m_WorldClip(::UnityEngine::Rect value);

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_WorldClipMinusGroup();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_WorldClipMinusGroup() const;

  constexpr void __cordl_internal_set_m_WorldClipMinusGroup(::UnityEngine::Rect value);

  constexpr bool& __cordl_internal_get_m_WorldClipIsInfinite();

  constexpr bool const& __cordl_internal_get_m_WorldClipIsInfinite() const;

  constexpr void __cordl_internal_set_m_WorldClipIsInfinite(bool value);

  constexpr ::UnityEngine::UIElements::PseudoStates& __cordl_internal_get_triggerPseudoMask();

  constexpr ::UnityEngine::UIElements::PseudoStates const& __cordl_internal_get_triggerPseudoMask() const;

  constexpr void __cordl_internal_set_triggerPseudoMask(::UnityEngine::UIElements::PseudoStates value);

  constexpr ::UnityEngine::UIElements::PseudoStates& __cordl_internal_get_dependencyPseudoMask();

  constexpr ::UnityEngine::UIElements::PseudoStates const& __cordl_internal_get_dependencyPseudoMask() const;

  constexpr void __cordl_internal_set_dependencyPseudoMask(::UnityEngine::UIElements::PseudoStates value);

  constexpr ::UnityEngine::UIElements::PseudoStates& __cordl_internal_get_m_PseudoStates();

  constexpr ::UnityEngine::UIElements::PseudoStates const& __cordl_internal_get_m_PseudoStates() const;

  constexpr void __cordl_internal_set_m_PseudoStates(::UnityEngine::UIElements::PseudoStates value);

  constexpr int32_t& __cordl_internal_get__containedPointerIds_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__containedPointerIds_k__BackingField() const;

  constexpr void __cordl_internal_set__containedPointerIds_k__BackingField(int32_t value);

  constexpr ::UnityEngine::UIElements::PickingMode& __cordl_internal_get__pickingMode_k__BackingField();

  constexpr ::UnityEngine::UIElements::PickingMode const& __cordl_internal_get__pickingMode_k__BackingField() const;

  constexpr void __cordl_internal_set__pickingMode_k__BackingField(::UnityEngine::UIElements::PickingMode value);

  constexpr ::UnityEngine::Yoga::YogaNode*& __cordl_internal_get__yogaNode_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Yoga::YogaNode*> const& __cordl_internal_get__yogaNode_k__BackingField() const;

  constexpr void __cordl_internal_set__yogaNode_k__BackingField(::UnityEngine::Yoga::YogaNode* value);

  constexpr ::UnityEngine::UIElements::ComputedStyle& __cordl_internal_get_m_Style();

  constexpr ::UnityEngine::UIElements::ComputedStyle const& __cordl_internal_get_m_Style() const;

  constexpr void __cordl_internal_set_m_Style(::UnityEngine::UIElements::ComputedStyle value);

  constexpr ::UnityEngine::UIElements::StyleVariableContext*& __cordl_internal_get_variableContext();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleVariableContext*> const& __cordl_internal_get_variableContext() const;

  constexpr void __cordl_internal_set_variableContext(::UnityEngine::UIElements::StyleVariableContext* value);

  constexpr int32_t& __cordl_internal_get_inheritedStylesHash();

  constexpr int32_t const& __cordl_internal_get_inheritedStylesHash() const;

  constexpr void __cordl_internal_set_inheritedStylesHash(int32_t value);

  constexpr uint32_t& __cordl_internal_get_controlid();

  constexpr uint32_t const& __cordl_internal_get_controlid() const;

  constexpr void __cordl_internal_set_controlid(uint32_t value);

  constexpr int32_t& __cordl_internal_get_imguiContainerDescendantCount();

  constexpr int32_t const& __cordl_internal_get_imguiContainerDescendantCount() const;

  constexpr void __cordl_internal_set_imguiContainerDescendantCount(int32_t value);

  constexpr bool& __cordl_internal_get__enabledSelf_k__BackingField();

  constexpr bool const& __cordl_internal_get__enabledSelf_k__BackingField() const;

  constexpr void __cordl_internal_set__enabledSelf_k__BackingField(bool value);

  constexpr ::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>*& __cordl_internal_get__generateVisualContent_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>*> const& __cordl_internal_get__generateVisualContent_k__BackingField() const;

  constexpr void __cordl_internal_set__generateVisualContent_k__BackingField(::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>* value);

  constexpr ::Unity::Profiling::ProfilerMarker& __cordl_internal_get_k_GenerateVisualContentMarker();

  constexpr ::Unity::Profiling::ProfilerMarker const& __cordl_internal_get_k_GenerateVisualContentMarker() const;

  constexpr void __cordl_internal_set_k_GenerateVisualContentMarker(::Unity::Profiling::ProfilerMarker value);

  constexpr ::UnityEngine::UIElements::__VisualElement__RenderTargetMode& __cordl_internal_get_m_SubRenderTargetMode();

  constexpr ::UnityEngine::UIElements::__VisualElement__RenderTargetMode const& __cordl_internal_get_m_SubRenderTargetMode() const;

  constexpr void __cordl_internal_set_m_SubRenderTargetMode(::UnityEngine::UIElements::__VisualElement__RenderTargetMode value);

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_defaultMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_defaultMaterial() const;

  constexpr void __cordl_internal_set_m_defaultMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr ::UnityEngine::UIElements::__VisualElement__TypeData*& __cordl_internal_get_m_TypeData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__VisualElement__TypeData*> const& __cordl_internal_get_m_TypeData() const;

  constexpr void __cordl_internal_set_m_TypeData(::UnityEngine::UIElements::__VisualElement__TypeData* value);

  constexpr ::UnityEngine::UIElements::__VisualElement__Hierarchy& __cordl_internal_get__hierarchy_k__BackingField();

  constexpr ::UnityEngine::UIElements::__VisualElement__Hierarchy const& __cordl_internal_get__hierarchy_k__BackingField() const;

  constexpr void __cordl_internal_set__hierarchy_k__BackingField(::UnityEngine::UIElements::__VisualElement__Hierarchy value);

  constexpr bool& __cordl_internal_get__isRootVisualContainer_k__BackingField();

  constexpr bool const& __cordl_internal_get__isRootVisualContainer_k__BackingField() const;

  constexpr void __cordl_internal_set__isRootVisualContainer_k__BackingField(bool value);

  constexpr bool& __cordl_internal_get__cacheAsBitmap_k__BackingField();

  constexpr bool const& __cordl_internal_get__cacheAsBitmap_k__BackingField() const;

  constexpr void __cordl_internal_set__cacheAsBitmap_k__BackingField(bool value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_PhysicalParent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_PhysicalParent() const;

  constexpr void __cordl_internal_set_m_PhysicalParent(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_LogicalParent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_LogicalParent() const;

  constexpr void __cordl_internal_set_m_LogicalParent(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_Children();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*> const& __cordl_internal_get_m_Children() const;

  constexpr void __cordl_internal_set_m_Children(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __cordl_internal_get__elementPanel_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVisualElementPanel*> const& __cordl_internal_get__elementPanel_k__BackingField() const;

  constexpr void __cordl_internal_set__elementPanel_k__BackingField(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get_m_VisualTreeAssetSource();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get_m_VisualTreeAssetSource() const;

  constexpr void __cordl_internal_set_m_VisualTreeAssetSource(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  constexpr ::UnityEngine::UIElements::InlineStyleAccess*& __cordl_internal_get_inlineStyleAccess();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::InlineStyleAccess*> const& __cordl_internal_get_inlineStyleAccess() const;

  constexpr void __cordl_internal_set_inlineStyleAccess(::UnityEngine::UIElements::InlineStyleAccess* value);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*& __cordl_internal_get_styleSheetList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*> const& __cordl_internal_get_styleSheetList() const;

  constexpr void __cordl_internal_set_styleSheetList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*& __cordl_internal_get_m_RunningAnimations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*> const&
  __cordl_internal_get_m_RunningAnimations() const;

  constexpr void __cordl_internal_set_m_RunningAnimations(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* value);

  static inline void setStaticF_tooltipPropertyKey(::UnityEngine::PropertyName value);

  static inline ::UnityEngine::PropertyName getStaticF_tooltipPropertyKey();

  static inline void setStaticF_s_NextId(uint32_t value);

  static inline uint32_t getStaticF_s_NextId();

  static inline void setStaticF_s_EmptyClassList(::System::Collections::Generic::List_1<::StringW>* value);

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_s_EmptyClassList();

  static inline void setStaticF_userDataPropertyKey(::UnityEngine::PropertyName value);

  static inline ::UnityEngine::PropertyName getStaticF_userDataPropertyKey();

  static inline void setStaticF_disabledUssClassName(::StringW value);

  static inline ::StringW getStaticF_disabledUssClassName();

  static inline void setStaticF_s_InfiniteRect(::UnityEngine::Rect value);

  static inline ::UnityEngine::Rect getStaticF_s_InfiniteRect();

  static inline void setStaticF_s_runtimeMaterial(::UnityW<::UnityEngine::Material> value);

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_runtimeMaterial();

  static inline void setStaticF_s_TypeData(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::__VisualElement__TypeData*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::__VisualElement__TypeData*>* getStaticF_s_TypeData();

  static inline void setStaticF_s_EmptyList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* getStaticF_s_EmptyList();

  static inline void setStaticF_s_CustomStyleAccess(::UnityEngine::UIElements::__VisualElement__CustomStyleAccess* value);

  static inline ::UnityEngine::UIElements::__VisualElement__CustomStyleAccess* getStaticF_s_CustomStyleAccess();

  static inline void setStaticF_s_InternalStyleSheetPath(::System::Text::RegularExpressions::Regex* value);

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_s_InternalStyleSheetPath();

  /// @brief Method get_tooltip, addr 0x2dbfa28, size 0x94, virtual false, abstract: false, final false
  inline ::StringW get_tooltip();

  /// @brief Method set_tooltip, addr 0x2dbfb3c, size 0x10c, virtual false, abstract: false, final false
  inline void set_tooltip(::StringW value);

  /// @brief Method get_schedule, addr 0x2dbfd40, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualElementScheduler* get_schedule();

  /// @brief Method UnityEngine.UIElements.IVisualElementScheduler.Execute, addr 0x2dbfd44, size 0xac, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* UnityEngine_UIElements_IVisualElementScheduler_Execute(::System::Action_1<::UnityEngine::UIElements::TimerState>* timerUpdateEvent);

  /// @brief Method UnityEngine.UIElements.IVisualElementScheduler.Execute, addr 0x2dbfe6c, size 0xac, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* UnityEngine_UIElements_IVisualElementScheduler_Execute(::System::Action* updateEvent);

  /// @brief Method get_hasRunningAnimations, addr 0x2dbff78, size 0xac, virtual false, abstract: false, final false
  inline bool get_hasRunningAnimations();

  /// @brief Method get_hasCompletedAnimations, addr 0x2dc0028, size 0xac, virtual false, abstract: false, final false
  inline bool get_hasCompletedAnimations();

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.get_runningAnimationCount, addr 0x2dc00d4, size 0x8, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_IStylePropertyAnimations_get_runningAnimationCount();

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.set_runningAnimationCount, addr 0x2dc00dc, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_set_runningAnimationCount(int32_t value);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.get_completedAnimationCount, addr 0x2dc00e4, size 0x8, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_IStylePropertyAnimations_get_completedAnimationCount();

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.set_completedAnimationCount, addr 0x2dc00ec, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_set_completedAnimationCount(int32_t value);

  /// @brief Method GetStylePropertyAnimationSystem, addr 0x2dc00f4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IStylePropertyAnimationSystem* GetStylePropertyAnimationSystem();

  /// @brief Method get_styleAnimation, addr 0x2dc0024, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IStylePropertyAnimations* get_styleAnimation();

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x2dc0110, size 0x104, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, float_t from, float_t to, int32_t durationMs, int32_t delayMs,
                                                                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x2dc0214, size 0x11c, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t from, int32_t to, int32_t durationMs, int32_t delayMs,
                                                                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x2dc0330, size 0x138, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Length from,
                                                                    ::UnityEngine::UIElements::Length to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x2dc0560, size 0x150, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::Color from, ::UnityEngine::Color to, int32_t durationMs,
                                                                    int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.StartEnum, addr 0x2dc06b0, size 0x11c, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_StartEnum(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t from, int32_t to, int32_t durationMs, int32_t delayMs,
                                                                        ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x2dc07cc, size 0x158, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Background from,
                                                                    ::UnityEngine::UIElements::Background to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x2dc0924, size 0x130, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::FontDefinition from,
                                                                    ::UnityEngine::UIElements::FontDefinition to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x2dc0a54, size 0x11c, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::Font* from, ::UnityEngine::Font* to, int32_t durationMs,
                                                                    int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x2dc0b70, size 0x18c, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::TextShadow from,
                                                                    ::UnityEngine::UIElements::TextShadow to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x2dc0cfc, size 0x130, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Scale from,
                                                                    ::UnityEngine::UIElements::Scale to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x2dc0e2c, size 0x1b0, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Translate from,
                                                                    ::UnityEngine::UIElements::Translate to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x2dc1008, size 0x188, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Rotate from,
                                                                    ::UnityEngine::UIElements::Rotate to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.Start, addr 0x2dc1190, size 0x1b0, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IStylePropertyAnimations_Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::TransformOrigin from,
                                                                    ::UnityEngine::UIElements::TransformOrigin to, int32_t durationMs, int32_t delayMs,
                                                                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.CancelAnimation, addr 0x2dc136c, size 0xd0, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_CancelAnimation(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.CancelAllAnimations, addr 0x2dc143c, size 0xe0, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_CancelAllAnimations();

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.UpdateAnimation, addr 0x2dc151c, size 0xc8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_UpdateAnimation(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method UnityEngine.UIElements.IStylePropertyAnimations.GetAllAnimations, addr 0x2dc15e4, size 0xec, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStylePropertyAnimations_GetAllAnimations(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* outPropertyIds);

  /// @brief Method TryConvertLengthUnits, addr 0x2dc0468, size 0xf8, virtual false, abstract: false, final false
  inline bool TryConvertLengthUnits(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ByRef<::UnityEngine::UIElements::Length> from, ByRef<::UnityEngine::UIElements::Length> to);

  /// @brief Method TryConvertTransformOriginUnits, addr 0x2dc1340, size 0x2c, virtual false, abstract: false, final false
  inline bool TryConvertTransformOriginUnits(ByRef<::UnityEngine::UIElements::TransformOrigin> from, ByRef<::UnityEngine::UIElements::TransformOrigin> to);

  /// @brief Method TryConvertTranslateUnits, addr 0x2dc0fdc, size 0x2c, virtual false, abstract: false, final false
  inline bool TryConvertTranslateUnits(ByRef<::UnityEngine::UIElements::Translate> from, ByRef<::UnityEngine::UIElements::Translate> to);

  /// @brief Method get_positionWithLayout, addr 0x2dc16d0, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_positionWithLayout();

  /// @brief Method GetPivotedMatrixWithLayout, addr 0x2dc1a10, size 0x1d0, virtual false, abstract: false, final false
  inline void GetPivotedMatrixWithLayout(ByRef<::UnityEngine::Matrix4x4> result);

  /// @brief Method get_hasDefaultRotationAndScale, addr 0x2dc2010, size 0xd0, virtual false, abstract: false, final false
  inline bool get_hasDefaultRotationAndScale();

  /// @brief Method Min, addr 0x2dc20e8, size 0x1c, virtual false, abstract: false, final false
  static inline float_t Min(float_t a, float_t b, float_t c, float_t d);

  /// @brief Method Max, addr 0x2dc2104, size 0x1c, virtual false, abstract: false, final false
  static inline float_t Max(float_t a, float_t b, float_t c, float_t d);

  /// @brief Method TransformAlignedRectToParentSpace, addr 0x2dc2120, size 0x184, virtual false, abstract: false, final false
  inline void TransformAlignedRectToParentSpace(ByRef<::UnityEngine::Rect> rect);

  /// @brief Method CalculateConservativeRect, addr 0x2dc22a4, size 0x3d4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect CalculateConservativeRect(ByRef<::UnityEngine::Matrix4x4> matrix, ::UnityEngine::Rect rect);

  /// @brief Method TransformAlignedRect, addr 0x2dc274c, size 0x94, virtual false, abstract: false, final false
  static inline void TransformAlignedRect(ByRef<::UnityEngine::Matrix4x4> matrix, ByRef<::UnityEngine::Rect> rect);

  /// @brief Method OrderMinMaxRect, addr 0x2dc2678, size 0xd4, virtual false, abstract: false, final false
  static inline void OrderMinMaxRect(ByRef<::UnityEngine::Rect> rect);

  /// @brief Method MultiplyMatrix44Point2, addr 0x2dc27e0, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MultiplyMatrix44Point2(ByRef<::UnityEngine::Matrix4x4> lhs, ::UnityEngine::Vector2 point);

  /// @brief Method MultiplyVector2, addr 0x2dc2804, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MultiplyVector2(ByRef<::UnityEngine::Matrix4x4> lhs, ::UnityEngine::Vector2 vector);

  /// @brief Method MultiplyMatrix34, addr 0x2dc2820, size 0x1d8, virtual false, abstract: false, final false
  static inline void MultiplyMatrix34(ByRef<::UnityEngine::Matrix4x4> lhs, ByRef<::UnityEngine::Matrix4x4> rhs, ByRef<::UnityEngine::Matrix4x4> res);

  /// @brief Method TranslateMatrix34, addr 0x2dc29f8, size 0xec, virtual false, abstract: false, final false
  static inline void TranslateMatrix34(ByRef<::UnityEngine::Matrix4x4> lhs, ::UnityEngine::Vector3 rhs, ByRef<::UnityEngine::Matrix4x4> res);

  /// @brief Method TranslateMatrix34InPlace, addr 0x2dc2ae4, size 0x5c, virtual false, abstract: false, final false
  static inline void TranslateMatrix34InPlace(ByRef<::UnityEngine::Matrix4x4> lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method get_isCompositeRoot, addr 0x2dc2b40, size 0xc, virtual false, abstract: false, final false
  inline bool get_isCompositeRoot();

  /// @brief Method set_isCompositeRoot, addr 0x2dc2b4c, size 0x2c, virtual false, abstract: false, final false
  inline void set_isCompositeRoot(bool value);

  /// @brief Method get_isHierarchyDisplayed, addr 0x2dc2b78, size 0xc, virtual false, abstract: false, final false
  inline bool get_isHierarchyDisplayed();

  /// @brief Method set_isHierarchyDisplayed, addr 0x2dc2b84, size 0x2c, virtual false, abstract: false, final false
  inline void set_isHierarchyDisplayed(bool value);

  /// @brief Method get_viewDataKey, addr 0x2dc2bb0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_viewDataKey();

  /// @brief Method set_viewDataKey, addr 0x2dc2bb8, size 0x68, virtual false, abstract: false, final false
  inline void set_viewDataKey(::StringW value);

  /// @brief Method get_enableViewDataPersistence, addr 0x2dc2c48, size 0xc, virtual false, abstract: false, final false
  inline bool get_enableViewDataPersistence();

  /// @brief Method set_enableViewDataPersistence, addr 0x2dc2c54, size 0x2c, virtual false, abstract: false, final false
  inline void set_enableViewDataPersistence(bool value);

  /// @brief Method get_userData, addr 0x2dc2c80, size 0x78, virtual false, abstract: false, final false
  inline ::System::Object* get_userData();

  /// @brief Method set_userData, addr 0x2dc2de0, size 0x70, virtual false, abstract: false, final false
  inline void set_userData(::System::Object* value);

  /// @brief Method get_canGrabFocus, addr 0x2dc30a4, size 0x110, virtual true, abstract: false, final false
  inline bool get_canGrabFocus();

  /// @brief Method get_focusController, addr 0x2dc3298, size 0xb0, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::FocusController* get_focusController();

  /// @brief Method get_usageHints, addr 0x2dc3350, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UsageHints get_usageHints();

  /// @brief Method set_usageHints, addr 0x2dc337c, size 0x84, virtual false, abstract: false, final false
  inline void set_usageHints(::UnityEngine::UIElements::UsageHints value);

  /// @brief Method get_renderHints, addr 0x2dc3374, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::RenderHints get_renderHints();

  /// @brief Method set_renderHints, addr 0x2dc3400, size 0x4c, virtual false, abstract: false, final false
  inline void set_renderHints(::UnityEngine::UIElements::RenderHints value);

  /// @brief Method MarkRenderHintsClean, addr 0x2dc344c, size 0x10, virtual false, abstract: false, final false
  inline void MarkRenderHintsClean();

  /// @brief Method get_transform, addr 0x2dc345c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ITransform* get_transform();

  /// @brief Method UnityEngine.UIElements.ITransform.get_position, addr 0x2dc3460, size 0xa0, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 UnityEngine_UIElements_ITransform_get_position();

  /// @brief Method UnityEngine.UIElements.ITransform.set_position, addr 0x2dc3500, size 0x16c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITransform_set_position(::UnityEngine::Vector3 value);

  /// @brief Method UnityEngine.UIElements.ITransform.get_scale, addr 0x2dc36dc, size 0xb4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 UnityEngine_UIElements_ITransform_get_scale();

  /// @brief Method get_isLayoutManual, addr 0x2dc3790, size 0xc, virtual false, abstract: false, final false
  inline bool get_isLayoutManual();

  /// @brief Method set_isLayoutManual, addr 0x2dc379c, size 0x2c, virtual false, abstract: false, final false
  inline void set_isLayoutManual(bool value);

  /// @brief Method get_scaledPixelsPerPoint, addr 0x2dc37c8, size 0x14, virtual false, abstract: false, final false
  inline float_t get_scaledPixelsPerPoint();

  /// @brief Method get_layout, addr 0x2dc1968, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_layout();

  /// @brief Method set_layout, addr 0x2dc37dc, size 0x8d0, virtual false, abstract: false, final false
  inline void set_layout(::UnityEngine::Rect value);

  /// @brief Method get_contentRect, addr 0x2dc40ac, size 0x214, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_contentRect();

  /// @brief Method get_paddingRect, addr 0x2dc42c0, size 0x214, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_paddingRect();

  /// @brief Method get_isBoundingBoxDirty, addr 0x2dc4540, size 0xc, virtual false, abstract: false, final false
  inline bool get_isBoundingBoxDirty();

  /// @brief Method set_isBoundingBoxDirty, addr 0x2dc454c, size 0x2c, virtual false, abstract: false, final false
  inline void set_isBoundingBoxDirty(bool value);

  /// @brief Method get_isWorldBoundingBoxDirty, addr 0x2dc4578, size 0xc, virtual false, abstract: false, final false
  inline bool get_isWorldBoundingBoxDirty();

  /// @brief Method set_isWorldBoundingBoxDirty, addr 0x2dc4584, size 0x2c, virtual false, abstract: false, final false
  inline void set_isWorldBoundingBoxDirty(bool value);

  /// @brief Method get_boundingBox, addr 0x2dc45b0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_boundingBox();

  /// @brief Method get_worldBoundingBox, addr 0x2dc4998, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_worldBoundingBox();

  /// @brief Method get_boundingBoxInParentSpace, addr 0x2dc4ad4, size 0x194, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_boundingBoxInParentSpace();

  /// @brief Method UpdateBoundingBox, addr 0x2dc45ec, size 0x3ac, virtual false, abstract: false, final false
  inline void UpdateBoundingBox();

  /// @brief Method UpdateWorldBoundingBox, addr 0x2dc49d8, size 0xfc, virtual false, abstract: false, final false
  inline void UpdateWorldBoundingBox();

  /// @brief Method get_worldBound, addr 0x2dc4cb8, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_worldBound();

  /// @brief Method get_localBound, addr 0x2dc4d88, size 0x194, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_localBound();

  /// @brief Method get_rect, addr 0x2dc44d4, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rect();

  /// @brief Method get_isWorldTransformDirty, addr 0x2dc4f1c, size 0xc, virtual false, abstract: false, final false
  inline bool get_isWorldTransformDirty();

  /// @brief Method set_isWorldTransformDirty, addr 0x2dc4f28, size 0x2c, virtual false, abstract: false, final false
  inline void set_isWorldTransformDirty(bool value);

  /// @brief Method get_isWorldTransformInverseDirty, addr 0x2dc4f54, size 0xc, virtual false, abstract: false, final false
  inline bool get_isWorldTransformInverseDirty();

  /// @brief Method set_isWorldTransformInverseDirty, addr 0x2dc4f60, size 0x2c, virtual false, abstract: false, final false
  inline void set_isWorldTransformInverseDirty(bool value);

  /// @brief Method get_worldTransform, addr 0x2dc4f8c, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldTransform();

  /// @brief Method get_worldTransformRef, addr 0x2dc4c94, size 0x24, virtual false, abstract: false, final false
  inline ByRef<::UnityEngine::Matrix4x4> get_worldTransformRef();

  /// @brief Method get_worldTransformInverse, addr 0x2dc5270, size 0x28, virtual false, abstract: false, final false
  inline ByRef<::UnityEngine::Matrix4x4> get_worldTransformInverse();

  /// @brief Method UpdateWorldTransform, addr 0x2dc4fcc, size 0x2a4, virtual false, abstract: false, final false
  inline void UpdateWorldTransform();

  /// @brief Method UpdateWorldTransformInverse, addr 0x2dc5298, size 0x58, virtual false, abstract: false, final false
  inline void UpdateWorldTransformInverse();

  /// @brief Method get_isWorldClipDirty, addr 0x2dc52f0, size 0xc, virtual false, abstract: false, final false
  inline bool get_isWorldClipDirty();

  /// @brief Method set_isWorldClipDirty, addr 0x2dc52fc, size 0x2c, virtual false, abstract: false, final false
  inline void set_isWorldClipDirty(bool value);

  /// @brief Method get_worldClip, addr 0x2dc5328, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_worldClip();

  /// @brief Method get_worldClipMinusGroup, addr 0x2dc55e4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_worldClipMinusGroup();

  /// @brief Method get_worldClipIsInfinite, addr 0x2dc5620, size 0x30, virtual false, abstract: false, final false
  inline bool get_worldClipIsInfinite();

  /// @brief Method EnsureWorldTransformAndClipUpToDate, addr 0x2dc5650, size 0x3c, virtual false, abstract: false, final false
  inline void EnsureWorldTransformAndClipUpToDate();

  /// @brief Method UpdateWorldClip, addr 0x2dc5364, size 0x280, virtual false, abstract: false, final false
  inline void UpdateWorldClip();

  /// @brief Method CombineClipRects, addr 0x2dc5cc8, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect CombineClipRects(::UnityEngine::Rect rect, ::UnityEngine::Rect parentRect);

  /// @brief Method SubstractBorderPadding, addr 0x2dc568c, size 0x63c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect SubstractBorderPadding(::UnityEngine::Rect worldRect);

  /// @brief Method ComputeAAAlignedBound, addr 0x2dc5dc0, size 0x1d0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect ComputeAAAlignedBound(::UnityEngine::Rect position, ::UnityEngine::Matrix4x4 mat);

  /// @brief Method get_pseudoStates, addr 0x2dc5f90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PseudoStates get_pseudoStates();

  /// @brief Method set_pseudoStates, addr 0x2dc5f98, size 0x84, virtual false, abstract: false, final false
  inline void set_pseudoStates(::UnityEngine::UIElements::PseudoStates value);

  /// @brief Method get_containedPointerIds, addr 0x2dc601c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_containedPointerIds();

  /// @brief Method set_containedPointerIds, addr 0x2dc6024, size 0x8, virtual false, abstract: false, final false
  inline void set_containedPointerIds(int32_t value);

  /// @brief Method UpdateHoverPseudoState, addr 0x2dc602c, size 0xcc, virtual false, abstract: false, final false
  inline void UpdateHoverPseudoState();

  /// @brief Method get_pickingMode, addr 0x2dc60f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PickingMode get_pickingMode();

  /// @brief Method set_pickingMode, addr 0x2dc6100, size 0x8, virtual false, abstract: false, final false
  inline void set_pickingMode(::UnityEngine::UIElements::PickingMode value);

  /// @brief Method get_name, addr 0x2dc6108, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method set_name, addr 0x2dc6110, size 0x58, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method get_fullTypeName, addr 0x2dc6168, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_fullTypeName();

  /// @brief Method get_typeName, addr 0x2dc62f4, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_typeName();

  /// @brief Method get_yogaNode, addr 0x2dc63a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Yoga::YogaNode* get_yogaNode();

  /// @brief Method set_yogaNode, addr 0x2dc63ac, size 0x8, virtual false, abstract: false, final false
  inline void set_yogaNode(::UnityEngine::Yoga::YogaNode* value);

  /// @brief Method get_computedStyle, addr 0x2dc20e0, size 0x8, virtual false, abstract: false, final false
  inline ByRef<::UnityEngine::UIElements::ComputedStyle> get_computedStyle();

  /// @brief Method get_hasInlineStyle, addr 0x2dc63b4, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasInlineStyle();

  /// @brief Method get_styleInitialized, addr 0x2dc63c4, size 0xc, virtual false, abstract: false, final false
  inline bool get_styleInitialized();

  /// @brief Method set_styleInitialized, addr 0x2dc63d0, size 0x2c, virtual false, abstract: false, final false
  inline void set_styleInitialized(bool value);

  /// @brief Method ChangeIMGUIContainerCount, addr 0x2dc63fc, size 0x30, virtual false, abstract: false, final false
  inline void ChangeIMGUIContainerCount(int32_t delta);

  static inline ::UnityEngine::UIElements::VisualElement* New_ctor();

  /// @brief Method .ctor, addr 0x2dc642c, size 0x28c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method ExecuteDefaultAction, addr 0x2dc66e4, size 0x6a8, virtual true, abstract: false, final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method GetTooltipRect, addr 0x2dc70f0, size 0x4, virtual true, abstract: false, final false
  inline ::UnityEngine::Rect GetTooltipRect();

  /// @brief Method SetTooltip, addr 0x2dc7014, size 0xdc, virtual false, abstract: false, final false
  inline void SetTooltip(::UnityEngine::UIElements::TooltipEvent* e);

  /// @brief Method Focus, addr 0x2dc70f4, size 0x54, virtual true, abstract: false, final true
  inline void Focus();

  /// @brief Method SetPanel, addr 0x2dc7148, size 0x994, virtual false, abstract: false, final false
  inline void SetPanel(::UnityEngine::UIElements::BaseVisualElementPanel* p);

  /// @brief Method WillChangePanel, addr 0x2dc7bb4, size 0x1dc, virtual false, abstract: false, final false
  inline void WillChangePanel(::UnityEngine::UIElements::BaseVisualElementPanel* destinationPanel);

  /// @brief Method HasChangedPanel, addr 0x2dc7d90, size 0x2bc, virtual false, abstract: false, final false
  inline void HasChangedPanel(::UnityEngine::UIElements::BaseVisualElementPanel* prevPanel);

  /// @brief Method SendEvent, addr 0x2dc8188, size 0x18, virtual true, abstract: false, final true
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e);

  /// @brief Method SendEvent, addr 0x2dc81a0, size 0x14, virtual true, abstract: false, final true
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method IncrementVersion, addr 0x2dc2c20, size 0x28, virtual false, abstract: false, final false
  inline void IncrementVersion(::UnityEngine::UIElements::VersionChangeType changeType);

  /// @brief Method InvokeHierarchyChanged, addr 0x2dc81b4, size 0x20, virtual false, abstract: false, final false
  inline void InvokeHierarchyChanged(::UnityEngine::UIElements::HierarchyChangeType changeType);

  /// @brief Method SetEnabledFromHierarchyPrivate, addr 0x2dc81d4, size 0x37c, virtual false, abstract: false, final false
  inline bool SetEnabledFromHierarchyPrivate(bool state);

  /// @brief Method get_isParentEnabledInHierarchy, addr 0x2dc8550, size 0x34, virtual false, abstract: false, final false
  inline bool get_isParentEnabledInHierarchy();

  /// @brief Method get_enabledInHierarchy, addr 0x2dc3288, size 0x10, virtual false, abstract: false, final false
  inline bool get_enabledInHierarchy();

  /// @brief Method get_enabledSelf, addr 0x2dc88c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_enabledSelf();

  /// @brief Method set_enabledSelf, addr 0x2dc88c8, size 0xc, virtual false, abstract: false, final false
  inline void set_enabledSelf(bool value);

  /// @brief Method SetEnabled, addr 0x2dc66c0, size 0x24, virtual false, abstract: false, final false
  inline void SetEnabled(bool value);

  /// @brief Method PropagateEnabledToChildren, addr 0x2dc88d4, size 0xb0, virtual false, abstract: false, final false
  inline void PropagateEnabledToChildren(bool value);

  /// @brief Method get_visible, addr 0x2dc31d8, size 0xac, virtual false, abstract: false, final false
  inline bool get_visible();

  /// @brief Method set_visible, addr 0x2dc8984, size 0xe4, virtual false, abstract: false, final false
  inline void set_visible(bool value);

  /// @brief Method MarkDirtyRepaint, addr 0x2dc8a68, size 0x24, virtual false, abstract: false, final false
  inline void MarkDirtyRepaint();

  /// @brief Method get_generateVisualContent, addr 0x2dc8a8c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>* get_generateVisualContent();

  /// @brief Method set_generateVisualContent, addr 0x2dc8a94, size 0x8, virtual false, abstract: false, final false
  inline void set_generateVisualContent(::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>* value);

  /// @brief Method InvokeGenerateVisualContent, addr 0x2dc8a9c, size 0x234, virtual false, abstract: false, final false
  inline void InvokeGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext* mgc);

  /// @brief Method GetFullHierarchicalViewDataKey, addr 0x2dc8cd0, size 0x94, virtual false, abstract: false, final false
  inline void GetFullHierarchicalViewDataKey(::System::Text::StringBuilder* key);

  /// @brief Method GetFullHierarchicalViewDataKey, addr 0x2dc8d64, size 0x74, virtual false, abstract: false, final false
  inline ::StringW GetFullHierarchicalViewDataKey();

  /// @brief Method OverwriteFromViewData, addr 0x2dc8dd8, size 0x320, virtual false, abstract: false, final false
  inline void OverwriteFromViewData(::System::Object* obj, ::StringW key);

  /// @brief Method SaveViewData, addr 0x2dc90f8, size 0x7c, virtual false, abstract: false, final false
  inline void SaveViewData();

  /// @brief Method IsViewDataPersitenceSupportedOnChildren, addr 0x2dc9174, size 0x74, virtual false, abstract: false, final false
  inline bool IsViewDataPersitenceSupportedOnChildren(bool existingState);

  /// @brief Method OnViewDataReady, addr 0x2dc91e8, size 0x38, virtual false, abstract: false, final false
  inline void OnViewDataReady(bool enablePersistence);

  /// @brief Method OnViewDataReady, addr 0x2dc9220, size 0x4, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method ContainsPoint, addr 0x2dc9224, size 0x48, virtual true, abstract: false, final false
  inline bool ContainsPoint(::UnityEngine::Vector2 localPoint);

  /// @brief Method get_requireMeasureFunction, addr 0x2dc926c, size 0xc, virtual false, abstract: false, final false
  inline bool get_requireMeasureFunction();

  /// @brief Method set_requireMeasureFunction, addr 0x2dc9278, size 0x70, virtual false, abstract: false, final false
  inline void set_requireMeasureFunction(bool value);

  /// @brief Method AssignMeasureFunction, addr 0x2dc92e8, size 0x8c, virtual false, abstract: false, final false
  inline void AssignMeasureFunction();

  /// @brief Method RemoveMeasureFunction, addr 0x2dc9374, size 0x20, virtual false, abstract: false, final false
  inline void RemoveMeasureFunction();

  /// @brief Method DoMeasure, addr 0x2dc9394, size 0x10, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::__VisualElement__MeasureMode widthMode, float_t desiredHeight,
                                          ::UnityEngine::UIElements::__VisualElement__MeasureMode heightMode);

  /// @brief Method Measure, addr 0x2dc93a4, size 0x128, virtual false, abstract: false, final false
  inline ::UnityEngine::Yoga::YogaSize Measure(::UnityEngine::Yoga::YogaNode* node, float_t width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, float_t height,
                                               ::UnityEngine::Yoga::YogaMeasureMode heightMode);

  /// @brief Method FinalizeLayout, addr 0x2dc94cc, size 0x4c, virtual false, abstract: false, final false
  inline void FinalizeLayout();

  /// @brief Method SetInlineRule, addr 0x2dc9518, size 0x90, virtual false, abstract: false, final false
  inline void SetInlineRule(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleRule* rule);

  /// @brief Method SetComputedStyle, addr 0x2dc95a8, size 0x1cc, virtual false, abstract: false, final false
  inline void SetComputedStyle(ByRef<::UnityEngine::UIElements::ComputedStyle> newStyle);

  /// @brief Method ToString, addr 0x2dc9774, size 0x234, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method GetClassesForIteration, addr 0x2dc99a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetClassesForIteration();

  /// @brief Method AddToClassList, addr 0x2dc86ac, size 0x208, virtual false, abstract: false, final false
  inline void AddToClassList(::StringW className);

  /// @brief Method RemoveFromClassList, addr 0x2dc8584, size 0x128, virtual false, abstract: false, final false
  inline void RemoveFromClassList(::StringW className);

  /// @brief Method EnableInClassList, addr 0x2dc88b4, size 0xc, virtual false, abstract: false, final false
  inline void EnableInClassList(::StringW className, bool enable);

  /// @brief Method ClassListContains, addr 0x2dc99b0, size 0xa8, virtual false, abstract: false, final false
  inline bool ClassListContains(::StringW cls);

  /// @brief Method GetProperty, addr 0x2dbfabc, size 0x80, virtual false, abstract: false, final false
  inline ::System::Object* GetProperty(::UnityEngine::PropertyName key);

  /// @brief Method SetProperty, addr 0x2dbfcc8, size 0x78, virtual false, abstract: false, final false
  inline void SetProperty(::UnityEngine::PropertyName key, ::System::Object* value);

  /// @brief Method HasProperty, addr 0x2dbfc48, size 0x80, virtual false, abstract: false, final false
  inline bool HasProperty(::UnityEngine::PropertyName key);

  /// @brief Method TryGetPropertyInternal, addr 0x2dc2cf8, size 0xe8, virtual false, abstract: false, final false
  inline bool TryGetPropertyInternal(::UnityEngine::PropertyName key, ByRef<::System::Object*> value);

  /// @brief Method CheckUserKeyArgument, addr 0x2dc9a58, size 0x168, virtual false, abstract: false, final false
  static inline void CheckUserKeyArgument(::UnityEngine::PropertyName key);

  /// @brief Method SetPropertyInternal, addr 0x2dc2e50, size 0x254, virtual false, abstract: false, final false
  inline void SetPropertyInternal(::UnityEngine::PropertyName key, ::System::Object* value);

  /// @brief Method UpdateCursorStyle, addr 0x2dc6d8c, size 0x288, virtual false, abstract: false, final false
  inline void UpdateCursorStyle(int64_t eventType);

  /// @brief Method get_subRenderTargetMode, addr 0x2dc9bc0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__VisualElement__RenderTargetMode get_subRenderTargetMode();

  /// @brief Method get_defaultMaterial, addr 0x2dc9bc8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultMaterial();

  /// @brief Method get_typeData, addr 0x2dc6180, size 0x12c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__VisualElement__TypeData* get_typeData();

  /// @brief Method get_experimental, addr 0x2dc9c3c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IExperimentalFeatures* get_experimental();

  /// @brief Method UnityEngine.UIElements.IExperimentalFeatures.get_animation, addr 0x2dc9c40, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Experimental::ITransitionAnimations* UnityEngine_UIElements_IExperimentalFeatures_get_animation();

  /// @brief Method get_hierarchy, addr 0x2dc9c44, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__VisualElement__Hierarchy get_hierarchy();

  /// @brief Method set_hierarchy, addr 0x2dc9c4c, size 0x8, virtual false, abstract: false, final false
  inline void set_hierarchy(::UnityEngine::UIElements::__VisualElement__Hierarchy value);

  /// @brief Method get_isRootVisualContainer, addr 0x2dc9c54, size 0x8, virtual false, abstract: false, final false
  inline bool get_isRootVisualContainer();

  /// @brief Method set_isRootVisualContainer, addr 0x2dc9c5c, size 0xc, virtual false, abstract: false, final false
  inline void set_isRootVisualContainer(bool value);

  /// @brief Method get_disableClipping, addr 0x2dc9c68, size 0xc, virtual false, abstract: false, final false
  inline bool get_disableClipping();

  /// @brief Method set_disableClipping, addr 0x2dc9c74, size 0x2c, virtual false, abstract: false, final false
  inline void set_disableClipping(bool value);

  /// @brief Method ShouldClip, addr 0x2dc4c68, size 0x2c, virtual false, abstract: false, final false
  inline bool ShouldClip();

  /// @brief Method get_parent, addr 0x2dc31d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_parent();

  /// @brief Method get_elementPanel, addr 0x2dc9ca0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseVisualElementPanel* get_elementPanel();

  /// @brief Method set_elementPanel, addr 0x2dc9ca8, size 0x8, virtual false, abstract: false, final false
  inline void set_elementPanel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  /// @brief Method get_panel, addr 0x2dc3348, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IPanel* get_panel();

  /// @brief Method get_contentContainer, addr 0x2dc9cb0, size 0x4, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Method set_visualTreeAssetSource, addr 0x2dc9cb4, size 0x8, virtual false, abstract: false, final false
  inline void set_visualTreeAssetSource(::UnityEngine::UIElements::VisualTreeAsset* value);

  /// @brief Method Add, addr 0x2dc9cbc, size 0xb0, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method Insert, addr 0x2dc9de8, size 0x8c, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method Clear, addr 0x2dca190, size 0x64, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ElementAt, addr 0x2dca538, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* ElementAt(int32_t index);

  /// @brief Method get_Item, addr 0x2dca53c, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_Item(int32_t key);

  /// @brief Method get_childCount, addr 0x2dca610, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_childCount();

  /// @brief Method IndexOf, addr 0x2dca6c4, size 0x7c, virtual false, abstract: false, final false
  inline int32_t IndexOf(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method ElementAtTreePath, addr 0x2dca7a0, size 0x1a8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* ElementAtTreePath(::System::Collections::Generic::List_1<int32_t>* childIndexes);

  /// @brief Method FindElementInTree, addr 0x2dca948, size 0xe8, virtual false, abstract: false, final false
  inline bool FindElementInTree(::UnityEngine::UIElements::VisualElement* element, ::System::Collections::Generic::List_1<int32_t>* outChildIndexes);

  /// @brief Method BringToFront, addr 0x2dcaa30, size 0x38, virtual false, abstract: false, final false
  inline void BringToFront();

  /// @brief Method SendToBack, addr 0x2dcab1c, size 0x38, virtual false, abstract: false, final false
  inline void SendToBack();

  /// @brief Method PlaceBehind, addr 0x2dcabec, size 0xec, virtual false, abstract: false, final false
  inline void PlaceBehind(::UnityEngine::UIElements::VisualElement* sibling);

  /// @brief Method RemoveFromHierarchy, addr 0x2dcadb0, size 0x38, virtual false, abstract: false, final false
  inline void RemoveFromHierarchy();

  /// @brief Method Contains, addr 0x2dcaedc, size 0x34, virtual false, abstract: false, final false
  inline bool Contains(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method GatherAllChildren, addr 0x2dc7adc, size 0xd8, virtual false, abstract: false, final false
  inline void GatherAllChildren(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* elements);

  /// @brief Method FindCommonAncestor, addr 0x2dcaf10, size 0x118, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* FindCommonAncestor(::UnityEngine::UIElements::VisualElement* other);

  /// @brief Method GetRoot, addr 0x2dcb028, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetRoot();

  /// @brief Method GetRootVisualContainer, addr 0x2dcb0e8, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetRootVisualContainer();

  /// @brief Method GetNextElementDepthFirst, addr 0x2dcb120, size 0xf0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetNextElementDepthFirst();

  /// @brief Method GetPreviousElementDepthFirst, addr 0x2dcb210, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetPreviousElementDepthFirst();

  /// @brief Method RetargetElement, addr 0x2dcb2f8, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* RetargetElement(::UnityEngine::UIElements::VisualElement* retargetAgainst);

  /// @brief Method get_style, addr 0x2dc366c, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IStyle* get_style();

  /// @brief Method get_customStyle, addr 0x2dcb35c, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ICustomStyle* get_customStyle();

  /// @brief Method get_styleSheets, addr 0x2dcb3dc, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElementStyleSheetSet get_styleSheets();

  /// @brief Method AddStyleSheetPath, addr 0x2dcb400, size 0x234, virtual false, abstract: false, final false
  inline void AddStyleSheetPath(::StringW sheetPath);

  /// @brief Method ResolveLengthValue, addr 0x2dcb634, size 0x190, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat ResolveLengthValue(::UnityEngine::UIElements::Length length, bool isRow);

  /// @brief Method ResolveTranslate, addr 0x2dc1734, size 0x234, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ResolveTranslate();

  /// @brief Method ResolveTransformOrigin, addr 0x2dc1be0, size 0x3c0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ResolveTransformOrigin();

  /// @brief Method ResolveRotation, addr 0x2dc1fa0, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion ResolveRotation();

  /// @brief Method ResolveScale, addr 0x2dc1fe8, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ResolveScale();

  /// @brief Method GetAnimationSystem, addr 0x2dcb7c4, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElementAnimationSystem* GetAnimationSystem();

  /// @brief Method RegisterAnimation, addr 0x2dcb858, size 0x10c, virtual false, abstract: false, final false
  inline void RegisterAnimation(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate* anim);

  /// @brief Method UnregisterAnimation, addr 0x2dcb964, size 0x78, virtual false, abstract: false, final false
  inline void UnregisterAnimation(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate* anim);

  /// @brief Method UnregisterRunningAnimations, addr 0x2dc804c, size 0xd0, virtual false, abstract: false, final false
  inline void UnregisterRunningAnimations();

  /// @brief Method RegisterRunningAnimations, addr 0x2dc811c, size 0x6c, virtual false, abstract: false, final false
  inline void RegisterRunningAnimations();

  /// @brief Method StartAnimation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* StartAnimation(::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* anim,
                                                                                             ::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>* fromValueGetter, T to, int32_t durationMs,
                                                                                             ::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>* onValueChanged);

  /// @brief Method AssignStyleValues, addr 0x2dcb9dc, size 0x15e0, virtual false, abstract: false, final false
  static inline void AssignStyleValues(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::Experimental::StyleValues src);

  /// @brief Method ReadCurrentValues, addr 0x2dccfbc, size 0xee4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::StyleValues ReadCurrentValues(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::Experimental::StyleValues targetValuesToRead);

  /// @brief Method UnityEngine.UIElements.Experimental.ITransitionAnimations.Start, addr 0x2dcdea0, size 0xc8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*
  UnityEngine_UIElements_Experimental_ITransitionAnimations_Start(::UnityEngine::UIElements::Experimental::StyleValues to, int32_t durationMs);

  /// @brief Method Start, addr 0x2dcdf70, size 0x184, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*
  Start(::System::Func_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::Experimental::StyleValues>* fromValueGetter, ::UnityEngine::UIElements::Experimental::StyleValues to,
        int32_t durationMs);

  /// @brief Method get_resolvedStyle, addr 0x2dc3284, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IResolvedStyle* get_resolvedStyle();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_backgroundColor, addr 0x2dce0f4, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_backgroundColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderBottomColor, addr 0x2dce100, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_borderBottomColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderBottomLeftRadius, addr 0x2dce10c, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderBottomLeftRadius();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderBottomRightRadius, addr 0x2dce128, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderBottomRightRadius();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderBottomWidth, addr 0x2dce144, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderBottomWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderLeftColor, addr 0x2dce160, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_borderLeftColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderLeftWidth, addr 0x2dce16c, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderLeftWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderRightColor, addr 0x2dce188, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_borderRightColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderRightWidth, addr 0x2dce194, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderRightWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderTopColor, addr 0x2dce1b0, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_borderTopColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderTopLeftRadius, addr 0x2dce1bc, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderTopLeftRadius();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderTopRightRadius, addr 0x2dce1d8, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderTopRightRadius();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_borderTopWidth, addr 0x2dce1f4, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_borderTopWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_bottom, addr 0x2dce210, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_bottom();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_color, addr 0x2dce22c, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_color();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_display, addr 0x2dce238, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::DisplayStyle UnityEngine_UIElements_IResolvedStyle_get_display();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_flexGrow, addr 0x2dce244, size 0xc, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_flexGrow();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_flexShrink, addr 0x2dce250, size 0xc, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_flexShrink();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_height, addr 0x2dce25c, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_height();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_left, addr 0x2dce278, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_left();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_marginBottom, addr 0x2dce294, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_marginBottom();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_marginLeft, addr 0x2dce2b0, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_marginLeft();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_marginRight, addr 0x2dce2cc, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_marginRight();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_marginTop, addr 0x2dce2e8, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_marginTop();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_minHeight, addr 0x2dce304, size 0x28, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_get_minHeight();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_minWidth, addr 0x2dce32c, size 0x28, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IResolvedStyle_get_minWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_opacity, addr 0x2dce354, size 0xc, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_opacity();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_paddingBottom, addr 0x2dce360, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_paddingBottom();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_paddingLeft, addr 0x2dce37c, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_paddingLeft();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_paddingRight, addr 0x2dce398, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_paddingRight();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_paddingTop, addr 0x2dce3b4, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_paddingTop();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_right, addr 0x2dce3d0, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_right();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_scale, addr 0x2dce3ec, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Scale UnityEngine_UIElements_IResolvedStyle_get_scale();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_top, addr 0x2dce3f8, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_top();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_transformOrigin, addr 0x2dce414, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 UnityEngine_UIElements_IResolvedStyle_get_transformOrigin();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_translate, addr 0x2dce418, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 UnityEngine_UIElements_IResolvedStyle_get_translate();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityBackgroundImageTintColor, addr 0x2dce41c, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_unityBackgroundImageTintColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unitySliceLeft, addr 0x2dce428, size 0xc, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_IResolvedStyle_get_unitySliceLeft();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unitySliceRight, addr 0x2dce434, size 0xc, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_IResolvedStyle_get_unitySliceRight();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityTextOutlineColor, addr 0x2dce440, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_IResolvedStyle_get_unityTextOutlineColor();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_unityTextOutlineWidth, addr 0x2dce44c, size 0xc, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_unityTextOutlineWidth();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_visibility, addr 0x2dce458, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Visibility UnityEngine_UIElements_IResolvedStyle_get_visibility();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_whiteSpace, addr 0x2dce464, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::WhiteSpace UnityEngine_UIElements_IResolvedStyle_get_whiteSpace();

  /// @brief Method UnityEngine.UIElements.IResolvedStyle.get_width, addr 0x2dce470, size 0x1c, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_IResolvedStyle_get_width();

  /// @brief Method <AssignMeasureFunction>b__281_0, addr 0x2dce71c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Yoga::YogaSize _AssignMeasureFunction_b__281_0(::UnityEngine::Yoga::YogaNode* node, float_t f, ::UnityEngine::Yoga::YogaMeasureMode mode, float_t f1,
                                                                       ::UnityEngine::Yoga::YogaMeasureMode heightMode);

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElement(VisualElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElement(VisualElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElement();

public:
  /// @brief Field <UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField;

  /// @brief Field m_Name, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_Name;

  /// @brief Field m_ClassList, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_ClassList;

  /// @brief Field m_PropertyBag, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::PropertyName, ::System::Object*>>* ___m_PropertyBag;

  /// @brief Field m_Flags, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::UIElements::VisualElementFlags ___m_Flags;

  /// @brief Field m_ViewDataKey, offset: 0x50, size: 0x8, def value: None
  ::StringW ___m_ViewDataKey;

  /// @brief Field m_RenderHints, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::UIElements::RenderHints ___m_RenderHints;

  /// @brief Field lastLayout, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Rect ___lastLayout;

  /// @brief Field lastPseudoPadding, offset: 0x6c, size: 0x10, def value: None
  ::UnityEngine::Rect ___lastPseudoPadding;

  /// @brief Field renderChainData, offset: 0x80, size: 0x158, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainVEData ___renderChainData;

  /// @brief Field m_Layout, offset: 0x1d8, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_Layout;

  /// @brief Field m_BoundingBox, offset: 0x1e8, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_BoundingBox;

  /// @brief Field m_WorldBoundingBox, offset: 0x1f8, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_WorldBoundingBox;

  /// @brief Field m_WorldTransformCache, offset: 0x208, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_WorldTransformCache;

  /// @brief Field m_WorldTransformInverseCache, offset: 0x248, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_WorldTransformInverseCache;

  /// @brief Field m_WorldClip, offset: 0x288, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_WorldClip;

  /// @brief Field m_WorldClipMinusGroup, offset: 0x298, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_WorldClipMinusGroup;

  /// @brief Field m_WorldClipIsInfinite, offset: 0x2a8, size: 0x1, def value: None
  bool ___m_WorldClipIsInfinite;

  /// @brief Field triggerPseudoMask, offset: 0x2ac, size: 0x4, def value: None
  ::UnityEngine::UIElements::PseudoStates ___triggerPseudoMask;

  /// @brief Field dependencyPseudoMask, offset: 0x2b0, size: 0x4, def value: None
  ::UnityEngine::UIElements::PseudoStates ___dependencyPseudoMask;

  /// @brief Field m_PseudoStates, offset: 0x2b4, size: 0x4, def value: None
  ::UnityEngine::UIElements::PseudoStates ___m_PseudoStates;

  /// @brief Field <containedPointerIds>k__BackingField, offset: 0x2b8, size: 0x4, def value: None
  int32_t ____containedPointerIds_k__BackingField;

  /// @brief Field <pickingMode>k__BackingField, offset: 0x2bc, size: 0x4, def value: None
  ::UnityEngine::UIElements::PickingMode ____pickingMode_k__BackingField;

  /// @brief Field <yogaNode>k__BackingField, offset: 0x2c0, size: 0x8, def value: None
  ::UnityEngine::Yoga::YogaNode* ____yogaNode_k__BackingField;

  /// @brief Field m_Style, offset: 0x2c8, size: 0x58, def value: None
  ::UnityEngine::UIElements::ComputedStyle ___m_Style;

  /// @brief Field variableContext, offset: 0x320, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleVariableContext* ___variableContext;

  /// @brief Field inheritedStylesHash, offset: 0x328, size: 0x4, def value: None
  int32_t ___inheritedStylesHash;

  /// @brief Field controlid, offset: 0x32c, size: 0x4, def value: None
  uint32_t ___controlid;

  /// @brief Field imguiContainerDescendantCount, offset: 0x330, size: 0x4, def value: None
  int32_t ___imguiContainerDescendantCount;

  /// @brief Field <enabledSelf>k__BackingField, offset: 0x334, size: 0x1, def value: None
  bool ____enabledSelf_k__BackingField;

  /// @brief Field <generateVisualContent>k__BackingField, offset: 0x338, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>* ____generateVisualContent_k__BackingField;

  /// @brief Field k_GenerateVisualContentMarker, offset: 0x340, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerMarker ___k_GenerateVisualContentMarker;

  /// @brief Field m_SubRenderTargetMode, offset: 0x348, size: 0x4, def value: None
  ::UnityEngine::UIElements::__VisualElement__RenderTargetMode ___m_SubRenderTargetMode;

  /// @brief Field m_defaultMaterial, offset: 0x350, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_defaultMaterial;

  /// @brief Field m_TypeData, offset: 0x358, size: 0x8, def value: None
  ::UnityEngine::UIElements::__VisualElement__TypeData* ___m_TypeData;

  /// @brief Field <hierarchy>k__BackingField, offset: 0x360, size: 0x8, def value: None
  ::UnityEngine::UIElements::__VisualElement__Hierarchy ____hierarchy_k__BackingField;

  /// @brief Field <isRootVisualContainer>k__BackingField, offset: 0x368, size: 0x1, def value: None
  bool ____isRootVisualContainer_k__BackingField;

  /// @brief Field <cacheAsBitmap>k__BackingField, offset: 0x369, size: 0x1, def value: None
  bool ____cacheAsBitmap_k__BackingField;

  /// @brief Field m_PhysicalParent, offset: 0x370, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_PhysicalParent;

  /// @brief Field m_LogicalParent, offset: 0x378, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_LogicalParent;

  /// @brief Field m_Children, offset: 0x380, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* ___m_Children;

  /// @brief Field <elementPanel>k__BackingField, offset: 0x388, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ____elementPanel_k__BackingField;

  /// @brief Field m_VisualTreeAssetSource, offset: 0x390, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ___m_VisualTreeAssetSource;

  /// @brief Field inlineStyleAccess, offset: 0x398, size: 0x8, def value: None
  ::UnityEngine::UIElements::InlineStyleAccess* ___inlineStyleAccess;

  /// @brief Field styleSheetList, offset: 0x3a0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* ___styleSheetList;

  /// @brief Field m_RunningAnimations, offset: 0x3a8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* ___m_RunningAnimations;

  /// @brief Field k_RootVisualContainerName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_RootVisualContainerName{ u"rootVisualContainer" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElement, 0x3b0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____UnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCount_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_Name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_ClassList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_PropertyBag) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_Flags) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_ViewDataKey) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_RenderHints) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___lastLayout) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___lastPseudoPadding) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___renderChainData) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_Layout) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_BoundingBox) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_WorldBoundingBox) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_WorldTransformCache) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_WorldTransformInverseCache) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_WorldClip) == 0x288, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_WorldClipMinusGroup) == 0x298, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_WorldClipIsInfinite) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___triggerPseudoMask) == 0x2ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___dependencyPseudoMask) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_PseudoStates) == 0x2b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____containedPointerIds_k__BackingField) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____pickingMode_k__BackingField) == 0x2bc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____yogaNode_k__BackingField) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_Style) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___variableContext) == 0x320, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___inheritedStylesHash) == 0x328, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___controlid) == 0x32c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___imguiContainerDescendantCount) == 0x330, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____enabledSelf_k__BackingField) == 0x334, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____generateVisualContent_k__BackingField) == 0x338, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___k_GenerateVisualContentMarker) == 0x340, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_SubRenderTargetMode) == 0x348, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_defaultMaterial) == 0x350, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_TypeData) == 0x358, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____hierarchy_k__BackingField) == 0x360, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____isRootVisualContainer_k__BackingField) == 0x368, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____cacheAsBitmap_k__BackingField) == 0x369, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_PhysicalParent) == 0x370, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_LogicalParent) == 0x378, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_Children) == 0x380, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ____elementPanel_k__BackingField) == 0x388, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_VisualTreeAssetSource) == 0x390, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___inlineStyleAccess) == 0x398, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___styleSheetList) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElement, ___m_RunningAnimations) == 0x3a8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5996)), TypeDefinitionIndex(TypeDefinitionIndex(6003)), TypeDefinitionIndex(TypeDefinitionIndex(6256)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6256), inst: 5268 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(5995)) CS Name: ::VisualElement::UxmlFactory*
class CORDL_TYPE __VisualElement__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::__VisualElement__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__VisualElement__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x2dceeec, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualElement__UxmlFactory(__VisualElement__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualElement__UxmlFactory(__VisualElement__UxmlFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualElement__UxmlFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualElement__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::MeasureMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5997))
// CS Name: ::VisualElement::MeasureMode
struct CORDL_TYPE __VisualElement__MeasureMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____VisualElement__MeasureMode_Unwrapped
  enum struct ____VisualElement__MeasureMode_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_Exactly = static_cast<int32_t>(0x1),
    __E_AtMost = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____VisualElement__MeasureMode_Unwrapped() const noexcept {
    return static_cast<____VisualElement__MeasureMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __VisualElement__MeasureMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualElement__MeasureMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Undefined value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__VisualElement__MeasureMode const Undefined;

  /// @brief Field Exactly value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__VisualElement__MeasureMode const Exactly;

  /// @brief Field AtMost value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__VisualElement__MeasureMode const AtMost;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualElement__MeasureMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__MeasureMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::TypeData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5999))
// CS Name: ::VisualElement::TypeData*
class CORDL_TYPE __VisualElement__TypeData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <type>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__type_k__BackingField, put = __cordl_internal_set__type_k__BackingField))::System::Type* _type_k__BackingField;

  /// @brief Field m_FullTypeName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FullTypeName, put = __cordl_internal_set_m_FullTypeName))::StringW m_FullTypeName;

  /// @brief Field m_TypeName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TypeName, put = __cordl_internal_set_m_TypeName))::StringW m_TypeName;

  __declspec(property(get = get_type))::System::Type* type;

  __declspec(property(get = get_fullTypeName))::StringW fullTypeName;

  __declspec(property(get = get_typeName))::StringW typeName;

  constexpr ::System::Type*& __cordl_internal_get__type_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__type_k__BackingField() const;

  constexpr void __cordl_internal_set__type_k__BackingField(::System::Type* value);

  constexpr ::StringW& __cordl_internal_get_m_FullTypeName();

  constexpr ::StringW const& __cordl_internal_get_m_FullTypeName() const;

  constexpr void __cordl_internal_set_m_FullTypeName(::StringW value);

  constexpr ::StringW& __cordl_internal_get_m_TypeName();

  constexpr ::StringW const& __cordl_internal_get_m_TypeName() const;

  constexpr void __cordl_internal_set_m_TypeName(::StringW value);

  /// @brief Method get_type, addr 0x2dcf69c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_type();

  static inline ::UnityEngine::UIElements::__VisualElement__TypeData* New_ctor(::System::Type* type);

  /// @brief Method .ctor, addr 0x2dc9bd0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_fullTypeName, addr 0x2dc62ac, size 0x48, virtual false, abstract: false, final false
  inline ::StringW get_fullTypeName();

  /// @brief Method get_typeName, addr 0x2dc630c, size 0x98, virtual false, abstract: false, final false
  inline ::StringW get_typeName();

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement__TypeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualElement__TypeData(__VisualElement__TypeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement__TypeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualElement__TypeData(__VisualElement__TypeData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualElement__TypeData();

public:
  /// @brief Field <type>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____type_k__BackingField;

  /// @brief Field m_FullTypeName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_FullTypeName;

  /// @brief Field m_TypeName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_TypeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualElement__TypeData, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__TypeData, ____type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__TypeData, ___m_FullTypeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__TypeData, ___m_TypeName) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::CustomStyleAccess
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6001))
// CS Name: ::VisualElement::CustomStyleAccess*
class CORDL_TYPE __VisualElement__CustomStyleAccess : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_CustomProperties, offset 0x10, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_CustomProperties,
               put = __cordl_internal_set_m_CustomProperties))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* m_CustomProperties;

  /// @brief Field m_DpiScaling, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DpiScaling, put = __cordl_internal_set_m_DpiScaling)) float_t m_DpiScaling;

  /// @brief Convert operator to "::UnityEngine::UIElements::ICustomStyle"
  constexpr operator ::UnityEngine::UIElements::ICustomStyle*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::ICustomStyle"
  constexpr ::UnityEngine::UIElements::ICustomStyle* i___UnityEngine__UIElements__ICustomStyle() noexcept;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*& __cordl_internal_get_m_CustomProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*> const&
  __cordl_internal_get_m_CustomProperties() const;

  constexpr void __cordl_internal_set_m_CustomProperties(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* value);

  constexpr float_t& __cordl_internal_get_m_DpiScaling();

  constexpr float_t const& __cordl_internal_get_m_DpiScaling() const;

  constexpr void __cordl_internal_set_m_DpiScaling(float_t value);

  /// @brief Method SetContext, addr 0x2dcb3d0, size 0xc, virtual false, abstract: false, final false
  inline void SetContext(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* customProperties, float_t dpiScaling);

  /// @brief Method TryGetValue, addr 0x2dcfd70, size 0x9c, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> property, ByRef<float_t> value);

  /// @brief Method TryGetValue, addr 0x2dcfec4, size 0xc0, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<int32_t> property, ByRef<int32_t> value);

  /// @brief Method TryGetValue, addr 0x2dcff84, size 0x14c, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> property, ByRef<::UnityEngine::Color> value);

  /// @brief Method TryGetValue, addr 0x2dd01d4, size 0x100, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Texture2D>> property, ByRef<::UnityEngine::Texture2D*> value);

  /// @brief Method TryGetValue, addr 0x2dd02d4, size 0x100, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Sprite>> property, ByRef<::UnityEngine::Sprite*> value);

  /// @brief Method TryGetValue, addr 0x2dd03d4, size 0x100, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::UIElements::VectorImage>> property, ByRef<::UnityEngine::UIElements::VectorImage*> value);

  /// @brief Method TryGetValue, addr 0x2dd04d4, size 0xc4, virtual true, abstract: false, final true
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::StringW> property, ByRef<::StringW> value);

  /// @brief Method TryGetValue, addr 0x2dcfe0c, size 0xb8, virtual false, abstract: false, final false
  inline bool TryGetValue(::StringW propertyName, ::UnityEngine::UIElements::StyleValueType valueType, ByRef<::UnityEngine::UIElements::StyleSheets::StylePropertyValue> customProp);

  /// @brief Method LogCustomPropertyWarning, addr 0x2dd00d0, size 0x104, virtual false, abstract: false, final false
  static inline void LogCustomPropertyWarning(::StringW propertyName, ::UnityEngine::UIElements::StyleValueType valueType, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue customProp);

  static inline ::UnityEngine::UIElements::__VisualElement__CustomStyleAccess* New_ctor();

  /// @brief Method .ctor, addr 0x2dce714, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement__CustomStyleAccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualElement__CustomStyleAccess(__VisualElement__CustomStyleAccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement__CustomStyleAccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualElement__CustomStyleAccess(__VisualElement__CustomStyleAccess const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualElement__CustomStyleAccess();

public:
  /// @brief Field m_CustomProperties, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* ___m_CustomProperties;

  /// @brief Field m_DpiScaling, offset: 0x18, size: 0x4, def value: None
  float_t ___m_DpiScaling;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualElement__CustomStyleAccess, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__CustomStyleAccess, ___m_CustomProperties) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement__CustomStyleAccess, ___m_DpiScaling) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<>c__DisplayClass435_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6713))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6002))
// CS Name: ::VisualElement::<>c__DisplayClass435_0*
class CORDL_TYPE __VisualElement____c__DisplayClass435_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::UIElements::VisualElement* __4__this;

  /// @brief Field to, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_to, put = __cordl_internal_set_to))::UnityEngine::UIElements::Experimental::StyleValues to;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::Experimental::StyleValues& __cordl_internal_get_to();

  constexpr ::UnityEngine::UIElements::Experimental::StyleValues const& __cordl_internal_get_to() const;

  constexpr void __cordl_internal_set_to(::UnityEngine::UIElements::Experimental::StyleValues value);

  static inline ::UnityEngine::UIElements::__VisualElement____c__DisplayClass435_0* New_ctor();

  /// @brief Method .ctor, addr 0x2dcdf68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <UnityEngine.UIElements.Experimental.ITransitionAnimations.Start>b__0, addr 0x2dd0598, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::StyleValues _UnityEngine_UIElements_Experimental_ITransitionAnimations_Start_b__0(::UnityEngine::UIElements::VisualElement* e);

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement____c__DisplayClass435_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualElement____c__DisplayClass435_0(__VisualElement____c__DisplayClass435_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElement____c__DisplayClass435_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualElement____c__DisplayClass435_0(__VisualElement____c__DisplayClass435_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualElement____c__DisplayClass435_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* _____4__this;

  /// @brief Field to, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::Experimental::StyleValues ___to;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualElement____c__DisplayClass435_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement____c__DisplayClass435_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualElement____c__DisplayClass435_0, ___to) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualElement__MeasureMode, "UnityEngine.UIElements", "VisualElement/MeasureMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualElement__RenderTargetMode, "UnityEngine.UIElements", "VisualElement/RenderTargetMode");
NEED_NO_BOX(::UnityEngine::UIElements::VisualElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElement*, "UnityEngine.UIElements", "VisualElement");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualElement__BaseVisualElementScheduledItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualElement__BaseVisualElementScheduledItem*, "UnityEngine.UIElements", "VisualElement/BaseVisualElementScheduledItem");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualElement__CustomStyleAccess);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualElement__CustomStyleAccess*, "UnityEngine.UIElements", "VisualElement/CustomStyleAccess");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualElement__SimpleScheduledItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualElement__SimpleScheduledItem*, "UnityEngine.UIElements", "VisualElement/SimpleScheduledItem");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualElement__TimerStateScheduledItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualElement__TimerStateScheduledItem*, "UnityEngine.UIElements", "VisualElement/TimerStateScheduledItem");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualElement__TypeData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualElement__TypeData*, "UnityEngine.UIElements", "VisualElement/TypeData");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualElement__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualElement__UxmlFactory*, "UnityEngine.UIElements", "VisualElement/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualElement__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualElement__UxmlTraits*, "UnityEngine.UIElements", "VisualElement/UxmlTraits");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__VisualElement__VisualElementScheduledItem_1, "UnityEngine.UIElements", "VisualElement/VisualElementScheduledItem`1");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualElement____c__DisplayClass435_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualElement____c__DisplayClass435_0*, "UnityEngine.UIElements", "VisualElement/<>c__DisplayClass435_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualElement__Hierarchy, "UnityEngine.UIElements", "VisualElement/Hierarchy");
