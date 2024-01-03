#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPhase_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventBase)
namespace UnityEngine::UIElements {
struct PropagationPhase;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Event;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
struct __EventBase__EventPropagation;
}
namespace UnityEngine::UIElements {
struct __EventBase__LifeCycleStatus;
}
namespace UnityEngine::UIElements {
class PropagationPaths;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __EventBase__EventPropagation;
}
namespace UnityEngine::UIElements {
struct __EventBase__LifeCycleStatus;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__EventBase__EventPropagation);
MARK_VAL_T(::UnityEngine::UIElements::__EventBase__LifeCycleStatus);
MARK_REF_PTR_T(::UnityEngine::UIElements::EventBase);
// Type: ::EventPropagation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7177))
// CS Name: ::EventBase::EventPropagation
struct CORDL_TYPE __EventBase__EventPropagation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EventBase__EventPropagation_Unwrapped
  enum struct ____EventBase__EventPropagation_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Bubbles = static_cast<int32_t>(0x1),
    __E_TricklesDown = static_cast<int32_t>(0x2),
    __E_Cancellable = static_cast<int32_t>(0x4),
    __E_SkipDisabledElements = static_cast<int32_t>(0x8),
    __E_IgnoreCompositeRoots = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EventBase__EventPropagation_Unwrapped() const noexcept {
    return static_cast<____EventBase__EventPropagation_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EventBase__EventPropagation(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventBase__EventPropagation();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__EventBase__EventPropagation const None;

  /// @brief Field Bubbles value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__EventBase__EventPropagation const Bubbles;

  /// @brief Field TricklesDown value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__EventBase__EventPropagation const TricklesDown;

  /// @brief Field Cancellable value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::__EventBase__EventPropagation const Cancellable;

  /// @brief Field SkipDisabledElements value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::__EventBase__EventPropagation const SkipDisabledElements;

  /// @brief Field IgnoreCompositeRoots value: static_cast<int32_t>(0x10)
  static ::UnityEngine::UIElements::__EventBase__EventPropagation const IgnoreCompositeRoots;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__EventBase__EventPropagation, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__EventBase__EventPropagation, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::LifeCycleStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7178))
// CS Name: ::EventBase::LifeCycleStatus
struct CORDL_TYPE __EventBase__LifeCycleStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EventBase__LifeCycleStatus_Unwrapped
  enum struct ____EventBase__LifeCycleStatus_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PropagationStopped = static_cast<int32_t>(0x1),
    __E_ImmediatePropagationStopped = static_cast<int32_t>(0x2),
    __E_DefaultPrevented = static_cast<int32_t>(0x4),
    __E_Dispatching = static_cast<int32_t>(0x8),
    __E_Pooled = static_cast<int32_t>(0x10),
    __E_IMGUIEventIsValid = static_cast<int32_t>(0x20),
    __E_StopDispatch = static_cast<int32_t>(0x40),
    __E_PropagateToIMGUI = static_cast<int32_t>(0x80),
    __E_Dispatched = static_cast<int32_t>(0x200),
    __E_Processed = static_cast<int32_t>(0x400),
    __E_ProcessedByFocusController = static_cast<int32_t>(0x800),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EventBase__LifeCycleStatus_Unwrapped() const noexcept {
    return static_cast<____EventBase__LifeCycleStatus_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EventBase__LifeCycleStatus(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventBase__LifeCycleStatus();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__EventBase__LifeCycleStatus const None;

  /// @brief Field PropagationStopped value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__EventBase__LifeCycleStatus const PropagationStopped;

  /// @brief Field ImmediatePropagationStopped value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__EventBase__LifeCycleStatus const ImmediatePropagationStopped;

  /// @brief Field DefaultPrevented value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::__EventBase__LifeCycleStatus const DefaultPrevented;

  /// @brief Field Dispatching value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::__EventBase__LifeCycleStatus const Dispatching;

  /// @brief Field Pooled value: static_cast<int32_t>(0x10)
  static ::UnityEngine::UIElements::__EventBase__LifeCycleStatus const Pooled;

  /// @brief Field IMGUIEventIsValid value: static_cast<int32_t>(0x20)
  static ::UnityEngine::UIElements::__EventBase__LifeCycleStatus const IMGUIEventIsValid;

  /// @brief Field StopDispatch value: static_cast<int32_t>(0x40)
  static ::UnityEngine::UIElements::__EventBase__LifeCycleStatus const StopDispatch;

  /// @brief Field PropagateToIMGUI value: static_cast<int32_t>(0x80)
  static ::UnityEngine::UIElements::__EventBase__LifeCycleStatus const PropagateToIMGUI;

  /// @brief Field Dispatched value: static_cast<int32_t>(0x200)
  static ::UnityEngine::UIElements::__EventBase__LifeCycleStatus const Dispatched;

  /// @brief Field Processed value: static_cast<int32_t>(0x400)
  static ::UnityEngine::UIElements::__EventBase__LifeCycleStatus const Processed;

  /// @brief Field ProcessedByFocusController value: static_cast<int32_t>(0x800)
  static ::UnityEngine::UIElements::__EventBase__LifeCycleStatus const ProcessedByFocusController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__EventBase__LifeCycleStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__EventBase__LifeCycleStatus, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::EventBase
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7178)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(7177)),
// TypeDefinitionIndex(TypeDefinitionIndex(7256)), TypeDefinitionIndex(TypeDefinitionIndex(10243))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7179)) CS Name: ::UnityEngine.UIElements::EventBase*
class CORDL_TYPE EventBase : public ::System::Object {
public:
  // Declarations
  using LifeCycleStatus = ::UnityEngine::UIElements::__EventBase__LifeCycleStatus;

  using EventPropagation = ::UnityEngine::UIElements::__EventBase__EventPropagation;

  /// @brief Field <timestamp>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__timestamp_k__BackingField, put = __set__timestamp_k__BackingField)) int64_t _timestamp_k__BackingField;

  /// @brief Field <eventId>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__eventId_k__BackingField, put = __set__eventId_k__BackingField)) uint64_t _eventId_k__BackingField;

  /// @brief Field <triggerEventId>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__triggerEventId_k__BackingField, put = __set__triggerEventId_k__BackingField)) uint64_t _triggerEventId_k__BackingField;

  /// @brief Field <propagation>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __get__propagation_k__BackingField, put = __set__propagation_k__BackingField))::UnityEngine::UIElements::__EventBase__EventPropagation _propagation_k__BackingField;

  /// @brief Field m_Path, offset 0x30, size 0x8
  __declspec(property(get = __get_m_Path, put = __set_m_Path))::UnityEngine::UIElements::PropagationPaths* m_Path;

  /// @brief Field <lifeCycleStatus>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __get__lifeCycleStatus_k__BackingField,
                      put = __set__lifeCycleStatus_k__BackingField))::UnityEngine::UIElements::__EventBase__LifeCycleStatus _lifeCycleStatus_k__BackingField;

  /// @brief Field <leafTarget>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __get__leafTarget_k__BackingField, put = __set__leafTarget_k__BackingField))::UnityEngine::UIElements::IEventHandler* _leafTarget_k__BackingField;

  /// @brief Field m_Target, offset 0x48, size 0x8
  __declspec(property(get = __get_m_Target, put = __set_m_Target))::UnityEngine::UIElements::IEventHandler* m_Target;

  /// @brief Field <skipElements>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __get__skipElements_k__BackingField,
                      put = __set__skipElements_k__BackingField))::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventHandler*>* _skipElements_k__BackingField;

  /// @brief Field <propagationPhase>k__BackingField, offset 0x58, size 0x4
  __declspec(property(get = __get__propagationPhase_k__BackingField, put = __set__propagationPhase_k__BackingField))::UnityEngine::UIElements::PropagationPhase _propagationPhase_k__BackingField;

  /// @brief Field m_CurrentTarget, offset 0x60, size 0x8
  __declspec(property(get = __get_m_CurrentTarget, put = __set_m_CurrentTarget))::UnityEngine::UIElements::IEventHandler* m_CurrentTarget;

  /// @brief Field m_ImguiEvent, offset 0x68, size 0x8
  __declspec(property(get = __get_m_ImguiEvent, put = __set_m_ImguiEvent))::UnityEngine::Event* m_ImguiEvent;

  /// @brief Field <originalMousePosition>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __get__originalMousePosition_k__BackingField, put = __set__originalMousePosition_k__BackingField))::UnityEngine::Vector2 _originalMousePosition_k__BackingField;

  /// @brief Field s_LastTypeId, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_LastTypeId, put = setStaticF_s_LastTypeId)) int64_t s_LastTypeId;

  /// @brief Field s_NextEventId, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_NextEventId, put = setStaticF_s_NextEventId)) uint64_t s_NextEventId;

  __declspec(property(get = get_eventTypeId)) int64_t eventTypeId;

  __declspec(property(get = get_timestamp, put = set_timestamp)) int64_t timestamp;

  __declspec(property(get = get_eventId, put = set_eventId)) uint64_t eventId;

  __declspec(property(put = set_triggerEventId)) uint64_t triggerEventId;

  __declspec(property(get = get_propagation, put = set_propagation))::UnityEngine::UIElements::__EventBase__EventPropagation propagation;

  __declspec(property(get = get_path, put = set_path))::UnityEngine::UIElements::PropagationPaths* path;

  __declspec(property(get = get_lifeCycleStatus, put = set_lifeCycleStatus))::UnityEngine::UIElements::__EventBase__LifeCycleStatus lifeCycleStatus;

  __declspec(property(get = get_bubbles)) bool bubbles;

  __declspec(property(get = get_tricklesDown)) bool tricklesDown;

  __declspec(property(get = get_skipDisabledElements, put = set_skipDisabledElements)) bool skipDisabledElements;

  __declspec(property(get = get_ignoreCompositeRoots, put = set_ignoreCompositeRoots)) bool ignoreCompositeRoots;

  __declspec(property(get = get_leafTarget, put = set_leafTarget))::UnityEngine::UIElements::IEventHandler* leafTarget;

  __declspec(property(get = get_target, put = set_target))::UnityEngine::UIElements::IEventHandler* target;

  __declspec(property(get = get_skipElements))::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventHandler*>* skipElements;

  __declspec(property(get = get_isPropagationStopped, put = set_isPropagationStopped)) bool isPropagationStopped;

  __declspec(property(get = get_isImmediatePropagationStopped, put = set_isImmediatePropagationStopped)) bool isImmediatePropagationStopped;

  __declspec(property(get = get_isDefaultPrevented, put = set_isDefaultPrevented)) bool isDefaultPrevented;

  __declspec(property(get = get_propagationPhase, put = set_propagationPhase))::UnityEngine::UIElements::PropagationPhase propagationPhase;

  __declspec(property(get = get_currentTarget, put = set_currentTarget))::UnityEngine::UIElements::IEventHandler* currentTarget;

  __declspec(property(get = get_dispatch, put = set_dispatch)) bool dispatch;

  __declspec(property(get = get_dispatched, put = set_dispatched)) bool dispatched;

  __declspec(property(get = get_processed, put = set_processed)) bool processed;

  __declspec(property(get = get_processedByFocusController, put = set_processedByFocusController)) bool processedByFocusController;

  __declspec(property(get = get_stopDispatch, put = set_stopDispatch)) bool stopDispatch;

  __declspec(property(get = get_propagateToIMGUI, put = set_propagateToIMGUI)) bool propagateToIMGUI;

  __declspec(property(get = get_imguiEventIsValid, put = set_imguiEventIsValid)) bool imguiEventIsValid;

  __declspec(property(get = get_imguiEvent, put = set_imguiEvent))::UnityEngine::Event* imguiEvent;

  __declspec(property(get = get_originalMousePosition, put = set_originalMousePosition))::UnityEngine::Vector2 originalMousePosition;

  __declspec(property(get = get_pooled, put = set_pooled)) bool pooled;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int64_t& __get__timestamp_k__BackingField();

  constexpr int64_t const& __get__timestamp_k__BackingField() const;

  constexpr void __set__timestamp_k__BackingField(int64_t value);

  constexpr uint64_t& __get__eventId_k__BackingField();

  constexpr uint64_t const& __get__eventId_k__BackingField() const;

  constexpr void __set__eventId_k__BackingField(uint64_t value);

  constexpr uint64_t& __get__triggerEventId_k__BackingField();

  constexpr uint64_t const& __get__triggerEventId_k__BackingField() const;

  constexpr void __set__triggerEventId_k__BackingField(uint64_t value);

  constexpr ::UnityEngine::UIElements::__EventBase__EventPropagation& __get__propagation_k__BackingField();

  constexpr ::UnityEngine::UIElements::__EventBase__EventPropagation const& __get__propagation_k__BackingField() const;

  constexpr void __set__propagation_k__BackingField(::UnityEngine::UIElements::__EventBase__EventPropagation value);

  constexpr ::UnityEngine::UIElements::PropagationPaths*& __get_m_Path();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::PropagationPaths*> const& __get_m_Path() const;

  constexpr void __set_m_Path(::UnityEngine::UIElements::PropagationPaths* value);

  constexpr ::UnityEngine::UIElements::__EventBase__LifeCycleStatus& __get__lifeCycleStatus_k__BackingField();

  constexpr ::UnityEngine::UIElements::__EventBase__LifeCycleStatus const& __get__lifeCycleStatus_k__BackingField() const;

  constexpr void __set__lifeCycleStatus_k__BackingField(::UnityEngine::UIElements::__EventBase__LifeCycleStatus value);

  constexpr ::UnityEngine::UIElements::IEventHandler*& __get__leafTarget_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IEventHandler*> const& __get__leafTarget_k__BackingField() const;

  constexpr void __set__leafTarget_k__BackingField(::UnityEngine::UIElements::IEventHandler* value);

  constexpr ::UnityEngine::UIElements::IEventHandler*& __get_m_Target();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IEventHandler*> const& __get_m_Target() const;

  constexpr void __set_m_Target(::UnityEngine::UIElements::IEventHandler* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventHandler*>*& __get__skipElements_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventHandler*>*> const& __get__skipElements_k__BackingField() const;

  constexpr void __set__skipElements_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventHandler*>* value);

  constexpr ::UnityEngine::UIElements::PropagationPhase& __get__propagationPhase_k__BackingField();

  constexpr ::UnityEngine::UIElements::PropagationPhase const& __get__propagationPhase_k__BackingField() const;

  constexpr void __set__propagationPhase_k__BackingField(::UnityEngine::UIElements::PropagationPhase value);

  constexpr ::UnityEngine::UIElements::IEventHandler*& __get_m_CurrentTarget();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IEventHandler*> const& __get_m_CurrentTarget() const;

  constexpr void __set_m_CurrentTarget(::UnityEngine::UIElements::IEventHandler* value);

  constexpr ::UnityEngine::Event*& __get_m_ImguiEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Event*> const& __get_m_ImguiEvent() const;

  constexpr void __set_m_ImguiEvent(::UnityEngine::Event* value);

  constexpr ::UnityEngine::Vector2& __get__originalMousePosition_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __get__originalMousePosition_k__BackingField() const;

  constexpr void __set__originalMousePosition_k__BackingField(::UnityEngine::Vector2 value);

  static inline void setStaticF_s_LastTypeId(int64_t value);

  static inline int64_t getStaticF_s_LastTypeId();

  static inline void setStaticF_s_NextEventId(uint64_t value);

  static inline uint64_t getStaticF_s_NextEventId();

  /// @brief Method RegisterEventType, addr 0x2e4d948, size 0x50, virtual false, abstract: false, final false
  static inline int64_t RegisterEventType();

  /// @brief Method get_eventTypeId, addr 0x2e4d998, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_eventTypeId();

  /// @brief Method get_timestamp, addr 0x2e4d9a0, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_timestamp();

  /// @brief Method set_timestamp, addr 0x2e4d9a8, size 0x8, virtual false, abstract: false, final false
  inline void set_timestamp(int64_t value);

  /// @brief Method get_eventId, addr 0x2e4d9b0, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_eventId();

  /// @brief Method set_eventId, addr 0x2e4d9b8, size 0x8, virtual false, abstract: false, final false
  inline void set_eventId(uint64_t value);

  /// @brief Method set_triggerEventId, addr 0x2e4d9c0, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerEventId(uint64_t value);

  /// @brief Method SetTriggerEventId, addr 0x2e4d9c8, size 0x8, virtual false, abstract: false, final false
  inline void SetTriggerEventId(uint64_t id);

  /// @brief Method get_propagation, addr 0x2e4d9d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__EventBase__EventPropagation get_propagation();

  /// @brief Method set_propagation, addr 0x2e4d9d8, size 0x8, virtual false, abstract: false, final false
  inline void set_propagation(::UnityEngine::UIElements::__EventBase__EventPropagation value);

  /// @brief Method get_path, addr 0x2e4d9e0, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PropagationPaths* get_path();

  /// @brief Method set_path, addr 0x2e4dad8, size 0x64, virtual false, abstract: false, final false
  inline void set_path(::UnityEngine::UIElements::PropagationPaths* value);

  /// @brief Method get_lifeCycleStatus, addr 0x2e4db3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__EventBase__LifeCycleStatus get_lifeCycleStatus();

  /// @brief Method set_lifeCycleStatus, addr 0x2e4db44, size 0x8, virtual false, abstract: false, final false
  inline void set_lifeCycleStatus(::UnityEngine::UIElements::__EventBase__LifeCycleStatus value);

  /// @brief Method PreDispatch, addr 0x2e4db4c, size 0x4, virtual true, abstract: false, final false
  inline void PreDispatch();

  /// @brief Method PreDispatch, addr 0x2e4db50, size 0xc, virtual true, abstract: false, final false
  inline void PreDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method PostDispatch, addr 0x2e4db5c, size 0x4, virtual true, abstract: false, final false
  inline void PostDispatch();

  /// @brief Method PostDispatch, addr 0x2e4db60, size 0x28, virtual true, abstract: false, final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method get_bubbles, addr 0x2e4dacc, size 0xc, virtual false, abstract: false, final false
  inline bool get_bubbles();

  /// @brief Method get_tricklesDown, addr 0x2e4dac0, size 0xc, virtual false, abstract: false, final false
  inline bool get_tricklesDown();

  /// @brief Method get_skipDisabledElements, addr 0x2e4b9b0, size 0xc, virtual false, abstract: false, final false
  inline bool get_skipDisabledElements();

  /// @brief Method set_skipDisabledElements, addr 0x2e4ad38, size 0x1c, virtual false, abstract: false, final false
  inline void set_skipDisabledElements(bool value);

  /// @brief Method get_ignoreCompositeRoots, addr 0x2e4cb60, size 0xc, virtual false, abstract: false, final false
  inline bool get_ignoreCompositeRoots();

  /// @brief Method set_ignoreCompositeRoots, addr 0x2e4d0e8, size 0x1c, virtual false, abstract: false, final false
  inline void set_ignoreCompositeRoots(bool value);

  /// @brief Method get_leafTarget, addr 0x2e4dba4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IEventHandler* get_leafTarget();

  /// @brief Method set_leafTarget, addr 0x2e4dbac, size 0x8, virtual false, abstract: false, final false
  inline void set_leafTarget(::UnityEngine::UIElements::IEventHandler* value);

  /// @brief Method get_target, addr 0x2e4518c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IEventHandler* get_target();

  /// @brief Method set_target, addr 0x2e4ad20, size 0x18, virtual false, abstract: false, final false
  inline void set_target(::UnityEngine::UIElements::IEventHandler* value);

  /// @brief Method get_skipElements, addr 0x2e4dbb4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventHandler*>* get_skipElements();

  /// @brief Method Skip, addr 0x2e4bd3c, size 0x58, virtual false, abstract: false, final false
  inline bool Skip(::UnityEngine::UIElements::IEventHandler* h);

  /// @brief Method get_isPropagationStopped, addr 0x2e4c4e0, size 0xc, virtual false, abstract: false, final false
  inline bool get_isPropagationStopped();

  /// @brief Method set_isPropagationStopped, addr 0x2e4dbbc, size 0x1c, virtual false, abstract: false, final false
  inline void set_isPropagationStopped(bool value);

  /// @brief Method StopPropagation, addr 0x2e42888, size 0x10, virtual false, abstract: false, final false
  inline void StopPropagation();

  /// @brief Method get_isImmediatePropagationStopped, addr 0x2e4b9a4, size 0xc, virtual false, abstract: false, final false
  inline bool get_isImmediatePropagationStopped();

  /// @brief Method set_isImmediatePropagationStopped, addr 0x2e4dbd8, size 0x1c, virtual false, abstract: false, final false
  inline void set_isImmediatePropagationStopped(bool value);

  /// @brief Method StopImmediatePropagation, addr 0x2e4dbf4, size 0x10, virtual false, abstract: false, final false
  inline void StopImmediatePropagation();

  /// @brief Method get_isDefaultPrevented, addr 0x2e4dc04, size 0xc, virtual false, abstract: false, final false
  inline bool get_isDefaultPrevented();

  /// @brief Method set_isDefaultPrevented, addr 0x2e4dc10, size 0x1c, virtual false, abstract: false, final false
  inline void set_isDefaultPrevented(bool value);

  /// @brief Method PreventDefault, addr 0x2e42898, size 0x18, virtual false, abstract: false, final false
  inline void PreventDefault();

  /// @brief Method get_propagationPhase, addr 0x2e4dc2c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PropagationPhase get_propagationPhase();

  /// @brief Method set_propagationPhase, addr 0x2e4dc34, size 0x8, virtual false, abstract: false, final false
  inline void set_propagationPhase(::UnityEngine::UIElements::PropagationPhase value);

  /// @brief Method get_currentTarget, addr 0x2e4dc3c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IEventHandler* get_currentTarget();

  /// @brief Method set_currentTarget, addr 0x2e4dc44, size 0xe4, virtual true, abstract: false, final false
  inline void set_currentTarget(::UnityEngine::UIElements::IEventHandler* value);

  /// @brief Method get_dispatch, addr 0x2e4dd28, size 0xc, virtual false, abstract: false, final false
  inline bool get_dispatch();

  /// @brief Method set_dispatch, addr 0x2e4ad00, size 0x20, virtual false, abstract: false, final false
  inline void set_dispatch(bool value);

  /// @brief Method MarkReceivedByDispatcher, addr 0x2e4dd50, size 0x88, virtual false, abstract: false, final false
  inline void MarkReceivedByDispatcher();

  /// @brief Method get_dispatched, addr 0x2e4ddd8, size 0xc, virtual false, abstract: false, final false
  inline bool get_dispatched();

  /// @brief Method set_dispatched, addr 0x2e4dd34, size 0x1c, virtual false, abstract: false, final false
  inline void set_dispatched(bool value);

  /// @brief Method get_processed, addr 0x2e4dde4, size 0xc, virtual false, abstract: false, final false
  inline bool get_processed();

  /// @brief Method set_processed, addr 0x2e4db88, size 0x1c, virtual false, abstract: false, final false
  inline void set_processed(bool value);

  /// @brief Method get_processedByFocusController, addr 0x2e4ddf0, size 0xc, virtual false, abstract: false, final false
  inline bool get_processedByFocusController();

  /// @brief Method set_processedByFocusController, addr 0x2e4ddfc, size 0x1c, virtual false, abstract: false, final false
  inline void set_processedByFocusController(bool value);

  /// @brief Method get_stopDispatch, addr 0x2e4de18, size 0xc, virtual false, abstract: false, final false
  inline bool get_stopDispatch();

  /// @brief Method set_stopDispatch, addr 0x2e4ad54, size 0x1c, virtual false, abstract: false, final false
  inline void set_stopDispatch(bool value);

  /// @brief Method get_propagateToIMGUI, addr 0x2e4cfd4, size 0xc, virtual false, abstract: false, final false
  inline bool get_propagateToIMGUI();

  /// @brief Method set_propagateToIMGUI, addr 0x2e4ad70, size 0x1c, virtual false, abstract: false, final false
  inline void set_propagateToIMGUI(bool value);

  /// @brief Method get_imguiEventIsValid, addr 0x2e4de24, size 0xc, virtual false, abstract: false, final false
  inline bool get_imguiEventIsValid();

  /// @brief Method set_imguiEventIsValid, addr 0x2e4de30, size 0x1c, virtual false, abstract: false, final false
  inline void set_imguiEventIsValid(bool value);

  /// @brief Method get_imguiEvent, addr 0x2e4d234, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Event* get_imguiEvent();

  /// @brief Method set_imguiEvent, addr 0x2e49afc, size 0xb4, virtual false, abstract: false, final false
  inline void set_imguiEvent(::UnityEngine::Event* value);

  /// @brief Method get_originalMousePosition, addr 0x2e4de4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_originalMousePosition();

  /// @brief Method set_originalMousePosition, addr 0x2e4de54, size 0x8, virtual false, abstract: false, final false
  inline void set_originalMousePosition(::UnityEngine::Vector2 value);

  /// @brief Method Init, addr 0x2e4de5c, size 0x4, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x2e4de60, size 0x140, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::EventBase* New_ctor();

  /// @brief Method .ctor, addr 0x2e4dfbc, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pooled, addr 0x2e4e044, size 0xc, virtual false, abstract: false, final false
  inline bool get_pooled();

  /// @brief Method set_pooled, addr 0x2e4dfa0, size 0x1c, virtual false, abstract: false, final false
  inline void set_pooled(bool value);

  /// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Acquire();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "EventBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBase(EventBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBase(EventBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBase();

public:
  /// @brief Field <timestamp>k__BackingField, offset: 0x10, size: 0x8, def value: None
  int64_t ____timestamp_k__BackingField;

  /// @brief Field <eventId>k__BackingField, offset: 0x18, size: 0x8, def value: None
  uint64_t ____eventId_k__BackingField;

  /// @brief Field <triggerEventId>k__BackingField, offset: 0x20, size: 0x8, def value: None
  uint64_t ____triggerEventId_k__BackingField;

  /// @brief Field <propagation>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::UIElements::__EventBase__EventPropagation ____propagation_k__BackingField;

  /// @brief Field m_Path, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::PropagationPaths* ___m_Path;

  /// @brief Field <lifeCycleStatus>k__BackingField, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::UIElements::__EventBase__LifeCycleStatus ____lifeCycleStatus_k__BackingField;

  /// @brief Field <leafTarget>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::IEventHandler* ____leafTarget_k__BackingField;

  /// @brief Field m_Target, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::IEventHandler* ___m_Target;

  /// @brief Field <skipElements>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventHandler*>* ____skipElements_k__BackingField;

  /// @brief Field <propagationPhase>k__BackingField, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::UIElements::PropagationPhase ____propagationPhase_k__BackingField;

  /// @brief Field m_CurrentTarget, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::IEventHandler* ___m_CurrentTarget;

  /// @brief Field m_ImguiEvent, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Event* ___m_ImguiEvent;

  /// @brief Field <originalMousePosition>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____originalMousePosition_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventBase, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____timestamp_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____eventId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____triggerEventId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____propagation_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ___m_Path) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____lifeCycleStatus_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____leafTarget_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ___m_Target) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____skipElements_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____propagationPhase_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ___m_CurrentTarget) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ___m_ImguiEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____originalMousePosition_k__BackingField) == 0x70, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__EventBase__EventPropagation, "UnityEngine.UIElements", "EventBase/EventPropagation");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__EventBase__LifeCycleStatus, "UnityEngine.UIElements", "EventBase/LifeCycleStatus");
NEED_NO_BOX(::UnityEngine::UIElements::EventBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventBase*, "UnityEngine.UIElements", "EventBase");
