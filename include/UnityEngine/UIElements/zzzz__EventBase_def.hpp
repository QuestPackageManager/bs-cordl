#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPhase_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventBase)
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
struct EventBase_EventPropagation;
}
namespace UnityEngine::UIElements {
struct EventBase_LifeCycleStatus;
}
namespace UnityEngine::UIElements {
struct EventCategory;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
struct PropagationPhase;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct EventBase_EventPropagation;
}
namespace UnityEngine::UIElements {
struct EventBase_LifeCycleStatus;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::EventBase_EventPropagation);
MARK_VAL_T(::UnityEngine::UIElements::EventBase_LifeCycleStatus);
MARK_REF_PTR_T(::UnityEngine::UIElements::EventBase);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.EventBase/EventPropagation
struct CORDL_TYPE EventBase_EventPropagation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventBase_EventPropagation_Unwrapped
  enum struct __EventBase_EventPropagation_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Bubbles = static_cast<int32_t>(0x1),
    __E_TricklesDown = static_cast<int32_t>(0x2),
    __E_SkipDisabledElements = static_cast<int32_t>(0x4),
    __E_BubblesOrTricklesDown = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventBase_EventPropagation_Unwrapped() const noexcept {
    return static_cast<__EventBase_EventPropagation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBase_EventPropagation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventBase_EventPropagation(int32_t value__) noexcept;

  /// @brief Field Bubbles value: I32(1)
  static ::UnityEngine::UIElements::EventBase_EventPropagation const Bubbles;

  /// @brief Field BubblesOrTricklesDown value: I32(3)
  static ::UnityEngine::UIElements::EventBase_EventPropagation const BubblesOrTricklesDown;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::EventBase_EventPropagation const None;

  /// @brief Field SkipDisabledElements value: I32(4)
  static ::UnityEngine::UIElements::EventBase_EventPropagation const SkipDisabledElements;

  /// @brief Field TricklesDown value: I32(2)
  static ::UnityEngine::UIElements::EventBase_EventPropagation const TricklesDown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4446 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventBase_EventPropagation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventBase_EventPropagation, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.EventBase/LifeCycleStatus
struct CORDL_TYPE EventBase_LifeCycleStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventBase_LifeCycleStatus_Unwrapped
  enum struct __EventBase_LifeCycleStatus_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PropagationStopped = static_cast<int32_t>(0x1),
    __E_ImmediatePropagationStopped = static_cast<int32_t>(0x2),
    __E_Dispatching = static_cast<int32_t>(0x4),
    __E_Pooled = static_cast<int32_t>(0x8),
    __E_IMGUIEventIsValid = static_cast<int32_t>(0x10),
    __E_PropagateToIMGUI = static_cast<int32_t>(0x20),
    __E_Dispatched = static_cast<int32_t>(0x40),
    __E_Processed = static_cast<int32_t>(0x80),
    __E_ProcessedByFocusController = static_cast<int32_t>(0x100),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventBase_LifeCycleStatus_Unwrapped() const noexcept {
    return static_cast<__EventBase_LifeCycleStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBase_LifeCycleStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventBase_LifeCycleStatus(int32_t value__) noexcept;

  /// @brief Field Dispatched value: I32(64)
  static ::UnityEngine::UIElements::EventBase_LifeCycleStatus const Dispatched;

  /// @brief Field Dispatching value: I32(4)
  static ::UnityEngine::UIElements::EventBase_LifeCycleStatus const Dispatching;

  /// @brief Field IMGUIEventIsValid value: I32(16)
  static ::UnityEngine::UIElements::EventBase_LifeCycleStatus const IMGUIEventIsValid;

  /// @brief Field ImmediatePropagationStopped value: I32(2)
  static ::UnityEngine::UIElements::EventBase_LifeCycleStatus const ImmediatePropagationStopped;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::EventBase_LifeCycleStatus const None;

  /// @brief Field Pooled value: I32(8)
  static ::UnityEngine::UIElements::EventBase_LifeCycleStatus const Pooled;

  /// @brief Field Processed value: I32(128)
  static ::UnityEngine::UIElements::EventBase_LifeCycleStatus const Processed;

  /// @brief Field ProcessedByFocusController value: I32(256)
  static ::UnityEngine::UIElements::EventBase_LifeCycleStatus const ProcessedByFocusController;

  /// @brief Field PropagateToIMGUI value: I32(32)
  static ::UnityEngine::UIElements::EventBase_LifeCycleStatus const PropagateToIMGUI;

  /// @brief Field PropagationStopped value: I32(1)
  static ::UnityEngine::UIElements::EventBase_LifeCycleStatus const PropagationStopped;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4447 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventBase_LifeCycleStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventBase_LifeCycleStatus, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.UIElements.EventBase::EventPropagation, UnityEngine.UIElements.EventBase::LifeCycleStatus, UnityEngine.UIElements.PropagationPhase, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EventBase
class CORDL_TYPE EventBase : public ::System::Object {
public:
  // Declarations
  using EventPropagation = ::UnityEngine::UIElements::EventBase_EventPropagation;

  using LifeCycleStatus = ::UnityEngine::UIElements::EventBase_LifeCycleStatus;

  /// @brief Field <elementTarget>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__elementTarget_k__BackingField,
                      put = __cordl_internal_set__elementTarget_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _elementTarget_k__BackingField;

  /// @brief Field <eventCategories>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__eventCategories_k__BackingField, put = __cordl_internal_set__eventCategories_k__BackingField)) int32_t _eventCategories_k__BackingField;

  /// @brief Field <eventId>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__eventId_k__BackingField, put = __cordl_internal_set__eventId_k__BackingField)) uint64_t _eventId_k__BackingField;

  /// @brief Field <lifeCycleStatus>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__lifeCycleStatus_k__BackingField,
                      put = __cordl_internal_set__lifeCycleStatus_k__BackingField)) ::UnityEngine::UIElements::EventBase_LifeCycleStatus _lifeCycleStatus_k__BackingField;

  /// @brief Field <originalMousePosition>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__originalMousePosition_k__BackingField,
                      put = __cordl_internal_set__originalMousePosition_k__BackingField)) ::UnityEngine::Vector2 _originalMousePosition_k__BackingField;

  /// @brief Field <propagationPhase>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__propagationPhase_k__BackingField,
                      put = __cordl_internal_set__propagationPhase_k__BackingField)) ::UnityEngine::UIElements::PropagationPhase _propagationPhase_k__BackingField;

  /// @brief Field <propagation>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__propagation_k__BackingField,
                      put = __cordl_internal_set__propagation_k__BackingField)) ::UnityEngine::UIElements::EventBase_EventPropagation _propagation_k__BackingField;

  /// @brief Field <timestamp>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__timestamp_k__BackingField, put = __cordl_internal_set__timestamp_k__BackingField)) int64_t _timestamp_k__BackingField;

  /// @brief Field <triggerEventId>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__triggerEventId_k__BackingField, put = __cordl_internal_set__triggerEventId_k__BackingField)) uint64_t _triggerEventId_k__BackingField;

  __declspec(property(get = get_bubbles, put = set_bubbles)) bool bubbles;

  __declspec(property(get = get_bubblesOrTricklesDown)) bool bubblesOrTricklesDown;

  __declspec(property(get = get_currentTarget, put = set_currentTarget)) ::UnityEngine::UIElements::IEventHandler* currentTarget;

  __declspec(property(get = get_dispatch, put = set_dispatch)) bool dispatch;

  __declspec(property(get = get_dispatched, put = set_dispatched)) bool dispatched;

  __declspec(property(get = get_elementTarget, put = set_elementTarget)) ::UnityEngine::UIElements::VisualElement* elementTarget;

  __declspec(property(get = get_eventCategories)) int32_t eventCategories;

  __declspec(property(get = get_eventId, put = set_eventId)) uint64_t eventId;

  __declspec(property(get = get_eventTypeId)) int64_t eventTypeId;

  __declspec(property(get = get_imguiEvent, put = set_imguiEvent)) ::UnityEngine::Event* imguiEvent;

  __declspec(property(get = get_imguiEventIsValid, put = set_imguiEventIsValid)) bool imguiEventIsValid;

  __declspec(property(get = get_isImmediatePropagationStopped, put = set_isImmediatePropagationStopped)) bool isImmediatePropagationStopped;

  __declspec(property(get = get_isPropagationStopped, put = set_isPropagationStopped)) bool isPropagationStopped;

  __declspec(property(get = get_lifeCycleStatus, put = set_lifeCycleStatus)) ::UnityEngine::UIElements::EventBase_LifeCycleStatus lifeCycleStatus;

  /// @brief Field m_CurrentTarget, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentTarget, put = __cordl_internal_set_m_CurrentTarget)) ::UnityEngine::UIElements::IEventHandler* m_CurrentTarget;

  /// @brief Field m_ImguiEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ImguiEvent, put = __cordl_internal_set_m_ImguiEvent)) ::UnityEngine::Event* m_ImguiEvent;

  __declspec(property(get = get_originalMousePosition, put = set_originalMousePosition)) ::UnityEngine::Vector2 originalMousePosition;

  __declspec(property(get = get_pooled, put = set_pooled)) bool pooled;

  __declspec(property(get = get_processed, put = set_processed)) bool processed;

  __declspec(property(get = get_processedByFocusController, put = set_processedByFocusController)) bool processedByFocusController;

  __declspec(property(get = get_propagateToIMGUI, put = set_propagateToIMGUI)) bool propagateToIMGUI;

  __declspec(property(get = get_propagation, put = set_propagation)) ::UnityEngine::UIElements::EventBase_EventPropagation propagation;

  __declspec(property(put = set_propagationPhase)) ::UnityEngine::UIElements::PropagationPhase propagationPhase;

  /// @brief Field s_LastTypeId, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_LastTypeId, put = setStaticF_s_LastTypeId)) int64_t s_LastTypeId;

  /// @brief Field s_NextEventId, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_NextEventId, put = setStaticF_s_NextEventId)) uint64_t s_NextEventId;

  __declspec(property(get = get_skipDisabledElements, put = set_skipDisabledElements)) bool skipDisabledElements;

  __declspec(property(get = get_target, put = set_target)) ::UnityEngine::UIElements::IEventHandler* target;

  __declspec(property(get = get_timestamp, put = set_timestamp)) int64_t timestamp;

  __declspec(property(get = get_tricklesDown, put = set_tricklesDown)) bool tricklesDown;

  __declspec(property(put = set_triggerEventId)) uint64_t triggerEventId;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Acquire, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Acquire();

  /// @brief Method Dispatch, addr 0x6bccb80, size 0x4, virtual true, abstract: false, final false
  inline void Dispatch(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method Dispose, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method Init, addr 0x6bcd01c, size 0x4, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x6bcd020, size 0xf4, virtual false, abstract: false, final false
  inline void LocalInit();

  /// @brief Method MarkReceivedByDispatcher, addr 0x6bc970c, size 0x90, virtual false, abstract: false, final false
  inline void MarkReceivedByDispatcher();

  static inline ::UnityEngine::UIElements::EventBase* New_ctor();

  static inline ::UnityEngine::UIElements::EventBase* New_ctor(::UnityEngine::UIElements::EventCategory category);

  /// @brief Method PostDispatch, addr 0x6bccb34, size 0x4, virtual true, abstract: false, final false
  inline void PostDispatch();

  /// @brief Method PostDispatch, addr 0x6bccb38, size 0x28, virtual true, abstract: false, final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method PreDispatch, addr 0x6bccb30, size 0x4, virtual true, abstract: false, final false
  inline void PreDispatch();

  /// @brief Method PreDispatch, addr 0x6bca5a0, size 0xc, virtual true, abstract: false, final false
  inline void PreDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method RegisterEventType, addr 0x6bcca7c, size 0x54, virtual false, abstract: false, final false
  static inline int64_t RegisterEventType();

  /// @brief Method SetTriggerEventId, addr 0x6bccb08, size 0x8, virtual false, abstract: false, final false
  inline void SetTriggerEventId(uint64_t id);

  /// @brief Method StopImmediatePropagation, addr 0x6bccd2c, size 0x10, virtual false, abstract: false, final false
  inline void StopImmediatePropagation();

  /// @brief Method StopPropagation, addr 0x6bcccf0, size 0x10, virtual false, abstract: false, final false
  inline void StopPropagation();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__elementTarget_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__elementTarget_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__eventCategories_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__eventCategories_k__BackingField();

  constexpr uint64_t const& __cordl_internal_get__eventId_k__BackingField() const;

  constexpr uint64_t& __cordl_internal_get__eventId_k__BackingField();

  constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus const& __cordl_internal_get__lifeCycleStatus_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus& __cordl_internal_get__lifeCycleStatus_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__originalMousePosition_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__originalMousePosition_k__BackingField();

  constexpr ::UnityEngine::UIElements::PropagationPhase const& __cordl_internal_get__propagationPhase_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::PropagationPhase& __cordl_internal_get__propagationPhase_k__BackingField();

  constexpr ::UnityEngine::UIElements::EventBase_EventPropagation const& __cordl_internal_get__propagation_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::EventBase_EventPropagation& __cordl_internal_get__propagation_k__BackingField();

  constexpr int64_t const& __cordl_internal_get__timestamp_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__timestamp_k__BackingField();

  constexpr uint64_t const& __cordl_internal_get__triggerEventId_k__BackingField() const;

  constexpr uint64_t& __cordl_internal_get__triggerEventId_k__BackingField();

  constexpr ::UnityEngine::UIElements::IEventHandler* const& __cordl_internal_get_m_CurrentTarget() const;

  constexpr ::UnityEngine::UIElements::IEventHandler*& __cordl_internal_get_m_CurrentTarget();

  constexpr ::UnityEngine::Event* const& __cordl_internal_get_m_ImguiEvent() const;

  constexpr ::UnityEngine::Event*& __cordl_internal_get_m_ImguiEvent();

  constexpr void __cordl_internal_set__elementTarget_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set__eventCategories_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__eventId_k__BackingField(uint64_t value);

  constexpr void __cordl_internal_set__lifeCycleStatus_k__BackingField(::UnityEngine::UIElements::EventBase_LifeCycleStatus value);

  constexpr void __cordl_internal_set__originalMousePosition_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__propagationPhase_k__BackingField(::UnityEngine::UIElements::PropagationPhase value);

  constexpr void __cordl_internal_set__propagation_k__BackingField(::UnityEngine::UIElements::EventBase_EventPropagation value);

  constexpr void __cordl_internal_set__timestamp_k__BackingField(int64_t value);

  constexpr void __cordl_internal_set__triggerEventId_k__BackingField(uint64_t value);

  constexpr void __cordl_internal_set_m_CurrentTarget(::UnityEngine::UIElements::IEventHandler* value);

  constexpr void __cordl_internal_set_m_ImguiEvent(::UnityEngine::Event* value);

  /// @brief Method .ctor, addr 0x6bcd134, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6bcd144, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::EventCategory category);

  static inline int64_t getStaticF_s_LastTypeId();

  static inline uint64_t getStaticF_s_NextEventId();

  /// @brief Method get_bubbles, addr 0x6bccbb8, size 0xc, virtual false, abstract: false, final false
  inline bool get_bubbles();

  /// @brief Method get_bubblesOrTricklesDown, addr 0x6bccc2c, size 0x10, virtual false, abstract: false, final false
  inline bool get_bubblesOrTricklesDown();

  /// @brief Method get_currentTarget, addr 0x6bccd44, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IEventHandler* get_currentTarget();

  /// @brief Method get_dispatch, addr 0x6bcce44, size 0xc, virtual false, abstract: false, final false
  inline bool get_dispatch();

  /// @brief Method get_dispatched, addr 0x6bcce90, size 0xc, virtual false, abstract: false, final false
  inline bool get_dispatched();

  /// @brief Method get_elementTarget, addr 0x6bccc3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_elementTarget();

  /// @brief Method get_eventCategories, addr 0x6bccad8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_eventCategories();

  /// @brief Method get_eventId, addr 0x6bccaf0, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_eventId();

  /// @brief Method get_eventTypeId, addr 0x6bccad0, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_eventTypeId();

  /// @brief Method get_imguiEvent, addr 0x6bc979c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Event* get_imguiEvent();

  /// @brief Method get_imguiEventIsValid, addr 0x6bccf00, size 0xc, virtual false, abstract: false, final false
  inline bool get_imguiEventIsValid();

  /// @brief Method get_isImmediatePropagationStopped, addr 0x6bccd00, size 0xc, virtual false, abstract: false, final false
  inline bool get_isImmediatePropagationStopped();

  /// @brief Method get_isPropagationStopped, addr 0x6bca260, size 0xc, virtual false, abstract: false, final false
  inline bool get_isPropagationStopped();

  /// @brief Method get_lifeCycleStatus, addr 0x6bccb20, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase_LifeCycleStatus get_lifeCycleStatus();

  /// @brief Method get_originalMousePosition, addr 0x6bcd00c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_originalMousePosition();

  /// @brief Method get_pooled, addr 0x6bcd158, size 0xc, virtual false, abstract: false, final false
  inline bool get_pooled();

  /// @brief Method get_processed, addr 0x6bcce9c, size 0xc, virtual false, abstract: false, final false
  inline bool get_processed();

  /// @brief Method get_processedByFocusController, addr 0x6bccea8, size 0xc, virtual false, abstract: false, final false
  inline bool get_processedByFocusController();

  /// @brief Method get_propagateToIMGUI, addr 0x6bcced4, size 0xc, virtual false, abstract: false, final false
  inline bool get_propagateToIMGUI();

  /// @brief Method get_propagation, addr 0x6bccb10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase_EventPropagation get_propagation();

  /// @brief Method get_skipDisabledElements, addr 0x6bccc00, size 0xc, virtual false, abstract: false, final false
  inline bool get_skipDisabledElements();

  /// @brief Method get_target, addr 0x6bccc4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IEventHandler* get_target();

  /// @brief Method get_timestamp, addr 0x6bccae0, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_timestamp();

  /// @brief Method get_tricklesDown, addr 0x6bccbd4, size 0xc, virtual false, abstract: false, final false
  inline bool get_tricklesDown();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_LastTypeId(int64_t value);

  static inline void setStaticF_s_NextEventId(uint64_t value);

  /// @brief Method set_bubbles, addr 0x6bccbc4, size 0x10, virtual false, abstract: false, final false
  inline void set_bubbles(bool value);

  /// @brief Method set_currentTarget, addr 0x6bccd4c, size 0xf8, virtual true, abstract: false, final false
  inline void set_currentTarget(::UnityEngine::UIElements::IEventHandler* value);

  /// @brief Method set_dispatch, addr 0x6bcce50, size 0x20, virtual false, abstract: false, final false
  inline void set_dispatch(bool value);

  /// @brief Method set_dispatched, addr 0x6bcce70, size 0x20, virtual false, abstract: false, final false
  inline void set_dispatched(bool value);

  /// @brief Method set_elementTarget, addr 0x6bccc44, size 0x8, virtual false, abstract: false, final false
  inline void set_elementTarget(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method set_eventId, addr 0x6bccaf8, size 0x8, virtual false, abstract: false, final false
  inline void set_eventId(uint64_t value);

  /// @brief Method set_imguiEvent, addr 0x6bccf2c, size 0xe0, virtual false, abstract: false, final false
  inline void set_imguiEvent(::UnityEngine::Event* value);

  /// @brief Method set_imguiEventIsValid, addr 0x6bccf0c, size 0x20, virtual false, abstract: false, final false
  inline void set_imguiEventIsValid(bool value);

  /// @brief Method set_isImmediatePropagationStopped, addr 0x6bccd0c, size 0x20, virtual false, abstract: false, final false
  inline void set_isImmediatePropagationStopped(bool value);

  /// @brief Method set_isPropagationStopped, addr 0x6bccce0, size 0x10, virtual false, abstract: false, final false
  inline void set_isPropagationStopped(bool value);

  /// @brief Method set_lifeCycleStatus, addr 0x6bccb28, size 0x8, virtual false, abstract: false, final false
  inline void set_lifeCycleStatus(::UnityEngine::UIElements::EventBase_LifeCycleStatus value);

  /// @brief Method set_originalMousePosition, addr 0x6bcd014, size 0x8, virtual false, abstract: false, final false
  inline void set_originalMousePosition(::UnityEngine::Vector2 value);

  /// @brief Method set_pooled, addr 0x6bcd114, size 0x20, virtual false, abstract: false, final false
  inline void set_pooled(bool value);

  /// @brief Method set_processed, addr 0x6bccb60, size 0x20, virtual false, abstract: false, final false
  inline void set_processed(bool value);

  /// @brief Method set_processedByFocusController, addr 0x6bcceb4, size 0x20, virtual false, abstract: false, final false
  inline void set_processedByFocusController(bool value);

  /// @brief Method set_propagateToIMGUI, addr 0x6bccee0, size 0x20, virtual false, abstract: false, final false
  inline void set_propagateToIMGUI(bool value);

  /// @brief Method set_propagation, addr 0x6bccb18, size 0x8, virtual false, abstract: false, final false
  inline void set_propagation(::UnityEngine::UIElements::EventBase_EventPropagation value);

  /// @brief Method set_propagationPhase, addr 0x6bccd3c, size 0x8, virtual false, abstract: false, final false
  inline void set_propagationPhase(::UnityEngine::UIElements::PropagationPhase value);

  /// @brief Method set_skipDisabledElements, addr 0x6bccc0c, size 0x20, virtual false, abstract: false, final false
  inline void set_skipDisabledElements(bool value);

  /// @brief Method set_target, addr 0x6bccc54, size 0x8c, virtual false, abstract: false, final false
  inline void set_target(::UnityEngine::UIElements::IEventHandler* value);

  /// @brief Method set_timestamp, addr 0x6bccae8, size 0x8, virtual false, abstract: false, final false
  inline void set_timestamp(int64_t value);

  /// @brief Method set_tricklesDown, addr 0x6bccbe0, size 0x20, virtual false, abstract: false, final false
  inline void set_tricklesDown(bool value);

  /// @brief Method set_triggerEventId, addr 0x6bccb00, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerEventId(uint64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBase(EventBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBase(EventBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4448 };

  /// @brief Field <eventCategories>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____eventCategories_k__BackingField;

  /// @brief Field <timestamp>k__BackingField, offset: 0x18, size: 0x8, def value: None
  int64_t ____timestamp_k__BackingField;

  /// @brief Field <eventId>k__BackingField, offset: 0x20, size: 0x8, def value: None
  uint64_t ____eventId_k__BackingField;

  /// @brief Field <triggerEventId>k__BackingField, offset: 0x28, size: 0x8, def value: None
  uint64_t ____triggerEventId_k__BackingField;

  /// @brief Field <propagation>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::UIElements::EventBase_EventPropagation ____propagation_k__BackingField;

  /// @brief Field <lifeCycleStatus>k__BackingField, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::UIElements::EventBase_LifeCycleStatus ____lifeCycleStatus_k__BackingField;

  /// @brief Field <elementTarget>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____elementTarget_k__BackingField;

  /// @brief Field <propagationPhase>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::UIElements::PropagationPhase ____propagationPhase_k__BackingField;

  /// @brief Field m_CurrentTarget, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::IEventHandler* ___m_CurrentTarget;

  /// @brief Field m_ImguiEvent, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Event* ___m_ImguiEvent;

  /// @brief Field <originalMousePosition>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____originalMousePosition_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____eventCategories_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____timestamp_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____eventId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____triggerEventId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____propagation_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____lifeCycleStatus_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____elementTarget_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____propagationPhase_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ___m_CurrentTarget) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ___m_ImguiEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____originalMousePosition_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventBase, 0x60>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventBase_EventPropagation, "UnityEngine.UIElements", "EventBase/EventPropagation");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventBase_LifeCycleStatus, "UnityEngine.UIElements", "EventBase/LifeCycleStatus");
NEED_NO_BOX(::UnityEngine::UIElements::EventBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventBase*, "UnityEngine.UIElements", "EventBase");
