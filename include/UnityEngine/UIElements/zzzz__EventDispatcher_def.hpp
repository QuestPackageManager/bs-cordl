#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventDispatcher)
namespace UnityEngine::UIElements {
class IPanel;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::UIElements {
struct DispatchMode;
}
namespace UnityEngine::UIElements {
class IEventDispatchingStrategy;
}
namespace UnityEngine::UIElements {
struct __EventDispatcher__EventRecord;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace UnityEngine::UIElements {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::UIElements {
class ClickDetector;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class PointerDispatchState;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
struct __EventDispatcher__DispatchContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace UnityEngine::UIElements {
struct __EventDispatcher__DispatchContext;
}
namespace UnityEngine::UIElements {
struct __EventDispatcher__EventRecord;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventDispatcher);
MARK_VAL_T(::UnityEngine::UIElements::__EventDispatcher__DispatchContext);
MARK_VAL_T(::UnityEngine::UIElements::__EventDispatcher__EventRecord);
// Type: ::EventRecord
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6999))
// CS Name: ::EventDispatcher::EventRecord
struct CORDL_TYPE __EventDispatcher__EventRecord {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m_Event", ty: "::UnityEngine::UIElements::EventBase*", modifiers: "", def_value: None }, CppParam { name: "m_Panel", ty: "::UnityEngine::UIElements::IPanel*",
  // modifiers: "", def_value: None }]
  constexpr __EventDispatcher__EventRecord(::UnityEngine::UIElements::EventBase* m_Event, ::UnityEngine::UIElements::IPanel* m_Panel) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventDispatcher__EventRecord();

  /// @brief Field m_Event, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventBase* m_Event;

  /// @brief Field m_Panel, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::IPanel* m_Panel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__EventDispatcher__EventRecord, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__EventDispatcher__EventRecord, m_Event) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__EventDispatcher__EventRecord, m_Panel) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::DispatchContext
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7000))
// CS Name: ::EventDispatcher::DispatchContext
struct CORDL_TYPE __EventDispatcher__DispatchContext {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m_GateCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Queue", ty:
  // "::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*", modifiers: "", def_value: None }]
  constexpr __EventDispatcher__DispatchContext(uint32_t m_GateCount, ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>* m_Queue) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventDispatcher__DispatchContext();

  /// @brief Field m_GateCount, offset: 0x0, size: 0x4, def value: None
  uint32_t m_GateCount;

  /// @brief Field m_Queue, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>* m_Queue;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__EventDispatcher__DispatchContext, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__EventDispatcher__DispatchContext, m_GateCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__EventDispatcher__DispatchContext, m_Queue) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::EventDispatcher
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 66, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7001))
// CS Name: ::UnityEngine.UIElements::EventDispatcher*
class CORDL_TYPE EventDispatcher : public ::System::Object {
public:
  // Declarations
  using DispatchContext = ::UnityEngine::UIElements::__EventDispatcher__DispatchContext;

  using EventRecord = ::UnityEngine::UIElements::__EventDispatcher__EventRecord;

  /// @brief Field m_ClickDetector, offset 0x10, size 0x8
  __declspec(property(get = __get_m_ClickDetector, put = __set_m_ClickDetector))::UnityEngine::UIElements::ClickDetector* m_ClickDetector;

  /// @brief Field m_DispatchingStrategies, offset 0x18, size 0x8
  __declspec(property(get = __get_m_DispatchingStrategies,
                      put = __set_m_DispatchingStrategies))::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* m_DispatchingStrategies;

  /// @brief Field m_Queue, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Queue, put = __set_m_Queue))::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>* m_Queue;

  /// @brief Field <pointerState>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__pointerState_k__BackingField, put = __set__pointerState_k__BackingField))::UnityEngine::UIElements::PointerDispatchState* _pointerState_k__BackingField;

  /// @brief Field m_GateCount, offset 0x30, size 0x4
  __declspec(property(get = __get_m_GateCount, put = __set_m_GateCount)) uint32_t m_GateCount;

  /// @brief Field m_DispatchContexts, offset 0x38, size 0x8
  __declspec(property(get = __get_m_DispatchContexts,
                      put = __set_m_DispatchContexts))::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>* m_DispatchContexts;

  /// @brief Field m_Immediate, offset 0x40, size 0x1
  __declspec(property(get = __get_m_Immediate, put = __set_m_Immediate)) bool m_Immediate;

  /// @brief Field <processingEvents>k__BackingField, offset 0x41, size 0x1
  __declspec(property(get = __get__processingEvents_k__BackingField, put = __set__processingEvents_k__BackingField)) bool _processingEvents_k__BackingField;

  /// @brief Field k_EventQueuePool, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_k_EventQueuePool,
      put = setStaticF_k_EventQueuePool))::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>* k_EventQueuePool;

  /// @brief Field s_EditorStrategies, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_s_EditorStrategies,
               put = setStaticF_s_EditorStrategies))::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*, ::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*> s_EditorStrategies;

  __declspec(property(get = get_pointerState))::UnityEngine::UIElements::PointerDispatchState* pointerState;

  __declspec(property(get = get_dispatchImmediately)) bool dispatchImmediately;

  __declspec(property(put = set_processingEvents)) bool processingEvents;

  constexpr ::UnityEngine::UIElements::ClickDetector*& __get_m_ClickDetector();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ClickDetector*> const& __get_m_ClickDetector() const;

  constexpr void __set_m_ClickDetector(::UnityEngine::UIElements::ClickDetector* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*& __get_m_DispatchingStrategies();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*> const& __get_m_DispatchingStrategies() const;

  constexpr void __set_m_DispatchingStrategies(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* value);

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*& __get_m_Queue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*> const& __get_m_Queue() const;

  constexpr void __set_m_Queue(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>* value);

  constexpr ::UnityEngine::UIElements::PointerDispatchState*& __get__pointerState_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::PointerDispatchState*> const& __get__pointerState_k__BackingField() const;

  constexpr void __set__pointerState_k__BackingField(::UnityEngine::UIElements::PointerDispatchState* value);

  constexpr uint32_t& __get_m_GateCount();

  constexpr uint32_t const& __get_m_GateCount() const;

  constexpr void __set_m_GateCount(uint32_t value);

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*& __get_m_DispatchContexts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*> const& __get_m_DispatchContexts() const;

  constexpr void __set_m_DispatchContexts(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>* value);

  constexpr bool& __get_m_Immediate();

  constexpr bool const& __get_m_Immediate() const;

  constexpr void __set_m_Immediate(bool value);

  constexpr bool& __get__processingEvents_k__BackingField();

  constexpr bool const& __get__processingEvents_k__BackingField() const;

  constexpr void __set__processingEvents_k__BackingField(bool value);

  static inline void setStaticF_k_EventQueuePool(::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>* value);

  static inline ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>* getStaticF_k_EventQueuePool();

  static inline void setStaticF_s_EditorStrategies(::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*, ::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*> value);

  static inline ::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*, ::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*> getStaticF_s_EditorStrategies();

  /// @brief Method get_pointerState addr 0x2c9c358 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::PointerDispatchState* get_pointerState();

  /// @brief Method CreateForRuntime addr 0x2c9c360 size 0x60 virtual false final false
  static inline ::UnityEngine::UIElements::EventDispatcher* CreateForRuntime(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* strategies);

  static inline ::UnityEngine::UIElements::EventDispatcher* New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* strategies);

  /// @brief Method .ctor addr 0x2c9c3c0 size 0x1ac virtual false final false
  inline void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* strategies);

  /// @brief Method get_dispatchImmediately addr 0x2c9c56c size 0x20 virtual false final false
  inline bool get_dispatchImmediately();

  /// @brief Method set_processingEvents addr 0x2c9c58c size 0xc virtual false final false
  inline void set_processingEvents(bool value);

  /// @brief Method Dispatch addr 0x2c9c598 size 0x164 virtual false final false
  inline void Dispatch(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method CloseGate addr 0x2c9c208 size 0x10 virtual false final false
  inline void CloseGate();

  /// @brief Method OpenGate addr 0x2c9c230 size 0x88 virtual false final false
  inline void OpenGate();

  /// @brief Method ProcessEventQueue addr 0x2c9cacc size 0x3c8 virtual false final false
  inline void ProcessEventQueue();

  /// @brief Method ProcessEvent addr 0x2c9c6fc size 0x3d0 virtual false final false
  inline void ProcessEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method ApplyDispatchingStrategies addr 0x2c9ce94 size 0x330 virtual false final false
  inline void ApplyDispatchingStrategies(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel, bool imguiEventIsInitiallyUsed);

  // Ctor Parameters [CppParam { name: "", ty: "EventDispatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventDispatcher(EventDispatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventDispatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventDispatcher(EventDispatcher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventDispatcher();

public:
  /// @brief Field m_ClickDetector, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::ClickDetector* ___m_ClickDetector;

  /// @brief Field m_DispatchingStrategies, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* ___m_DispatchingStrategies;

  /// @brief Field m_Queue, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>* ___m_Queue;

  /// @brief Field <pointerState>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::PointerDispatchState* ____pointerState_k__BackingField;

  /// @brief Field m_GateCount, offset: 0x30, size: 0x4, def value: None
  uint32_t ___m_GateCount;

  /// @brief Field m_DispatchContexts, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>* ___m_DispatchContexts;

  /// @brief Field m_Immediate, offset: 0x40, size: 0x1, def value: None
  bool ___m_Immediate;

  /// @brief Field <processingEvents>k__BackingField, offset: 0x41, size: 0x1, def value: None
  bool ____processingEvents_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventDispatcher, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher, ___m_ClickDetector) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher, ___m_DispatchingStrategies) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher, ___m_Queue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher, ____pointerState_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher, ___m_GateCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher, ___m_DispatchContexts) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher, ___m_Immediate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcher, ____processingEvents_k__BackingField) == 0x41, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDispatcher*, "UnityEngine.UIElements", "EventDispatcher");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__EventDispatcher__DispatchContext, "UnityEngine.UIElements", "EventDispatcher/DispatchContext");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__EventDispatcher__EventRecord, "UnityEngine.UIElements", "EventDispatcher/EventRecord");
