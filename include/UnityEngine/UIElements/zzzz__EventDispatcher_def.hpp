#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventDispatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventDispatcher)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace UnityEngine::UIElements {
class ClickDetector;
}
namespace UnityEngine::UIElements {
struct DispatchMode;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
struct EventDispatcher_DispatchContext;
}
namespace UnityEngine::UIElements {
struct EventDispatcher_EventRecord;
}
namespace UnityEngine::UIElements {
class EventDispatcher___c;
}
namespace UnityEngine::UIElements {
class IEventDispatchingStrategy;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::UIElements {
class PointerDispatchState;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace UnityEngine::UIElements {
class EventDispatcher___c;
}
namespace UnityEngine::UIElements {
struct EventDispatcher_DispatchContext;
}
namespace UnityEngine::UIElements {
struct EventDispatcher_EventRecord;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventDispatcher);
MARK_REF_PTR_T(::UnityEngine::UIElements::EventDispatcher___c);
MARK_VAL_T(::UnityEngine::UIElements::EventDispatcher_DispatchContext);
MARK_VAL_T(::UnityEngine::UIElements::EventDispatcher_EventRecord);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.EventDispatcher/EventRecord
struct CORDL_TYPE EventDispatcher_EventRecord {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventDispatcher_EventRecord();

  // Ctor Parameters [CppParam { name: "m_Event", ty: "::UnityEngine::UIElements::EventBase*", modifiers: "", def_value: None }, CppParam { name: "m_Panel", ty: "::UnityEngine::UIElements::IPanel*",
  // modifiers: "", def_value: None }]
  constexpr EventDispatcher_EventRecord(::UnityEngine::UIElements::EventBase* m_Event, ::UnityEngine::UIElements::IPanel* m_Panel) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5779 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Event, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventBase* m_Event;

  /// @brief Field m_Panel, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::IPanel* m_Panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher_EventRecord, m_Event) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher_EventRecord, m_Panel) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventDispatcher_EventRecord, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.EventDispatcher/DispatchContext
struct CORDL_TYPE EventDispatcher_DispatchContext {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventDispatcher_DispatchContext();

  // Ctor Parameters [CppParam { name: "m_GateCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Queue", ty:
  // "::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>*", modifiers: "", def_value: None }]
  constexpr EventDispatcher_DispatchContext(uint32_t m_GateCount, ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>* m_Queue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5780 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_GateCount, offset: 0x0, size: 0x4, def value: None
  uint32_t m_GateCount;

  /// @brief Field m_Queue, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>* m_Queue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher_DispatchContext, m_GateCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher_DispatchContext, m_Queue) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventDispatcher_DispatchContext, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EventDispatcher/<>c
class CORDL_TYPE EventDispatcher___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::EventDispatcher___c* __9;

  static inline ::UnityEngine::UIElements::EventDispatcher___c* New_ctor();

  /// @brief Method <.cctor>b__31_0, addr 0x4a305b4, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>* __cctor_b__31_0();

  /// @brief Method .ctor, addr 0x4a305ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::EventDispatcher___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::EventDispatcher___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventDispatcher___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventDispatcher___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventDispatcher___c(EventDispatcher___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventDispatcher___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventDispatcher___c(EventDispatcher___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5781 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventDispatcher___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EventDispatcher
class CORDL_TYPE EventDispatcher : public ::System::Object {
public:
  // Declarations
  using DispatchContext = ::UnityEngine::UIElements::EventDispatcher_DispatchContext;

  using EventRecord = ::UnityEngine::UIElements::EventDispatcher_EventRecord;

  using __c = ::UnityEngine::UIElements::EventDispatcher___c;

  /// @brief Field <pointerState>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerState_k__BackingField,
                      put = __cordl_internal_set__pointerState_k__BackingField)) ::UnityEngine::UIElements::PointerDispatchState* _pointerState_k__BackingField;

  /// @brief Field <processingEvents>k__BackingField, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__processingEvents_k__BackingField, put = __cordl_internal_set__processingEvents_k__BackingField)) bool _processingEvents_k__BackingField;

  __declspec(property(get = get_dispatchImmediately)) bool dispatchImmediately;

  /// @brief Field k_EventQueuePool, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_k_EventQueuePool,
      put = setStaticF_k_EventQueuePool)) ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>*>* k_EventQueuePool;

  /// @brief Field m_ClickDetector, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClickDetector, put = __cordl_internal_set_m_ClickDetector)) ::UnityEngine::UIElements::ClickDetector* m_ClickDetector;

  /// @brief Field m_DispatchContexts, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DispatchContexts,
                      put = __cordl_internal_set_m_DispatchContexts)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventDispatcher_DispatchContext>* m_DispatchContexts;

  /// @brief Field m_DispatchingStrategies, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DispatchingStrategies,
                      put = __cordl_internal_set_m_DispatchingStrategies)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* m_DispatchingStrategies;

  /// @brief Field m_GateCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GateCount, put = __cordl_internal_set_m_GateCount)) uint32_t m_GateCount;

  /// @brief Field m_Immediate, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Immediate, put = __cordl_internal_set_m_Immediate)) bool m_Immediate;

  /// @brief Field m_Queue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Queue, put = __cordl_internal_set_m_Queue)) ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>* m_Queue;

  __declspec(property(get = get_pointerState)) ::UnityEngine::UIElements::PointerDispatchState* pointerState;

  __declspec(property(put = set_processingEvents)) bool processingEvents;

  /// @brief Field s_EditorStrategies, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_EditorStrategies,
                      put = setStaticF_s_EditorStrategies)) ::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*, ::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>
      s_EditorStrategies;

  /// @brief Method ApplyDispatchingStrategies, addr 0x4a2f9a0, size 0x2f8, virtual false, abstract: false, final false
  inline void ApplyDispatchingStrategies(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel, bool imguiEventIsInitiallyUsed);

  /// @brief Method CloseGate, addr 0x4a2eb28, size 0x10, virtual false, abstract: false, final false
  inline void CloseGate();

  /// @brief Method CreateForRuntime, addr 0x4a2ec80, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventDispatcher* CreateForRuntime(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* strategies);

  /// @brief Method Dispatch, addr 0x4a2eeb4, size 0x160, virtual false, abstract: false, final false
  inline void Dispatch(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  static inline ::UnityEngine::UIElements::EventDispatcher* New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* strategies);

  /// @brief Method OpenGate, addr 0x4a2eb50, size 0x88, virtual false, abstract: false, final false
  inline void OpenGate();

  /// @brief Method ProcessEvent, addr 0x4a2f0b4, size 0x520, virtual false, abstract: false, final false
  inline void ProcessEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method ProcessEventQueue, addr 0x4a2f5d4, size 0x3b4, virtual false, abstract: false, final false
  inline void ProcessEventQueue();

  constexpr ::UnityEngine::UIElements::PointerDispatchState* const& __cordl_internal_get__pointerState_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::PointerDispatchState*& __cordl_internal_get__pointerState_k__BackingField();

  constexpr bool const& __cordl_internal_get__processingEvents_k__BackingField() const;

  constexpr bool& __cordl_internal_get__processingEvents_k__BackingField();

  constexpr ::UnityEngine::UIElements::ClickDetector* const& __cordl_internal_get_m_ClickDetector() const;

  constexpr ::UnityEngine::UIElements::ClickDetector*& __cordl_internal_get_m_ClickDetector();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventDispatcher_DispatchContext>* const& __cordl_internal_get_m_DispatchContexts() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventDispatcher_DispatchContext>*& __cordl_internal_get_m_DispatchContexts();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* const& __cordl_internal_get_m_DispatchingStrategies() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*& __cordl_internal_get_m_DispatchingStrategies();

  constexpr uint32_t const& __cordl_internal_get_m_GateCount() const;

  constexpr uint32_t& __cordl_internal_get_m_GateCount();

  constexpr bool const& __cordl_internal_get_m_Immediate() const;

  constexpr bool& __cordl_internal_get_m_Immediate();

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>* const& __cordl_internal_get_m_Queue() const;

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>*& __cordl_internal_get_m_Queue();

  constexpr void __cordl_internal_set__pointerState_k__BackingField(::UnityEngine::UIElements::PointerDispatchState* value);

  constexpr void __cordl_internal_set__processingEvents_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_ClickDetector(::UnityEngine::UIElements::ClickDetector* value);

  constexpr void __cordl_internal_set_m_DispatchContexts(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventDispatcher_DispatchContext>* value);

  constexpr void __cordl_internal_set_m_DispatchingStrategies(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* value);

  constexpr void __cordl_internal_set_m_GateCount(uint32_t value);

  constexpr void __cordl_internal_set_m_Immediate(bool value);

  constexpr void __cordl_internal_set_m_Queue(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>* value);

  /// @brief Method .ctor, addr 0x4a2ecd8, size 0x1b0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* strategies);

  static inline ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>*>* getStaticF_k_EventQueuePool();

  static inline ::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*, ::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*> getStaticF_s_EditorStrategies();

  /// @brief Method get_dispatchImmediately, addr 0x4a2ee88, size 0x20, virtual false, abstract: false, final false
  inline bool get_dispatchImmediately();

  /// @brief Method get_pointerState, addr 0x4a2ec78, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerDispatchState* get_pointerState();

  static inline void setStaticF_k_EventQueuePool(::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>*>* value);

  static inline void setStaticF_s_EditorStrategies(::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*, ::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*> value);

  /// @brief Method set_processingEvents, addr 0x4a2eea8, size 0xc, virtual false, abstract: false, final false
  inline void set_processingEvents(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventDispatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventDispatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventDispatcher(EventDispatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventDispatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventDispatcher(EventDispatcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5782 };

  /// @brief Field m_ClickDetector, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::ClickDetector* ___m_ClickDetector;

  /// @brief Field m_DispatchingStrategies, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* ___m_DispatchingStrategies;

  /// @brief Field m_Queue, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>* ___m_Queue;

  /// @brief Field <pointerState>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::PointerDispatchState* ____pointerState_k__BackingField;

  /// @brief Field m_GateCount, offset: 0x30, size: 0x4, def value: None
  uint32_t ___m_GateCount;

  /// @brief Field m_DispatchContexts, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventDispatcher_DispatchContext>* ___m_DispatchContexts;

  /// @brief Field m_Immediate, offset: 0x40, size: 0x1, def value: None
  bool ___m_Immediate;

  /// @brief Field <processingEvents>k__BackingField, offset: 0x41, size: 0x1, def value: None
  bool ____processingEvents_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher, ___m_ClickDetector) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher, ___m_DispatchingStrategies) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher, ___m_Queue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher, ____pointerState_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher, ___m_GateCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher, ___m_DispatchContexts) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher, ___m_Immediate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher, ____processingEvents_k__BackingField) == 0x41, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventDispatcher, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDispatcher*, "UnityEngine.UIElements", "EventDispatcher");
NEED_NO_BOX(::UnityEngine::UIElements::EventDispatcher___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDispatcher___c*, "UnityEngine.UIElements", "EventDispatcher/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDispatcher_DispatchContext, "UnityEngine.UIElements", "EventDispatcher/DispatchContext");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDispatcher_EventRecord, "UnityEngine.UIElements", "EventDispatcher/EventRecord");
