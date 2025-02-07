#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskScheduler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TaskScheduler)
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class ConditionalWeakTable_2;
}
namespace System::Threading::Tasks {
class TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class UnobservedTaskExceptionEventArgs;
}
namespace System::Threading {
class Lock;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading::Tasks {
class TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskScheduler);
MARK_REF_PTR_T(::System::Threading::Tasks::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView);
// Dependencies System.Object
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.TaskScheduler/SystemThreadingTasks_TaskSchedulerDebugView
class CORDL_TYPE TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView(TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView(TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2814 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Dependencies System.Object
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.TaskScheduler
class CORDL_TYPE TaskScheduler : public ::System::Object {
public:
  // Declarations
  using SystemThreadingTasks_TaskSchedulerDebugView = ::System::Threading::Tasks::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView;

  __declspec(property(get = get_Id)) int32_t Id;

  __declspec(property(get = get_RequiresAtomicStartTransition)) bool RequiresAtomicStartTransition;

  /// @brief Field _unobservedTaskException, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__unobservedTaskException,
                      put = setStaticF__unobservedTaskException)) ::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>* _unobservedTaskException;

  /// @brief Field _unobservedTaskExceptionLockObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__unobservedTaskExceptionLockObject, put = setStaticF__unobservedTaskExceptionLockObject)) ::System::Threading::Lock* _unobservedTaskExceptionLockObject;

  /// @brief Field m_taskSchedulerId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_taskSchedulerId, put = __cordl_internal_set_m_taskSchedulerId)) int32_t m_taskSchedulerId;

  /// @brief Field s_activeTaskSchedulers, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_s_activeTaskSchedulers,
      put = setStaticF_s_activeTaskSchedulers)) ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::System::Object*>* s_activeTaskSchedulers;

  /// @brief Field s_defaultTaskScheduler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_defaultTaskScheduler, put = setStaticF_s_defaultTaskScheduler)) ::System::Threading::Tasks::TaskScheduler* s_defaultTaskScheduler;

  /// @brief Field s_taskSchedulerIdCounter, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_taskSchedulerIdCounter, put = setStaticF_s_taskSchedulerIdCounter)) int32_t s_taskSchedulerIdCounter;

  static inline ::System::Threading::Tasks::TaskScheduler* New_ctor();

  /// @brief Method NotifyWorkItemProgress, addr 0x3e701a8, size 0x4, virtual true, abstract: false, final false
  inline void NotifyWorkItemProgress();

  /// @brief Method PublishUnobservedTaskException, addr 0x3e6f378, size 0x134, virtual false, abstract: false, final false
  static inline void PublishUnobservedTaskException(::System::Object* sender, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* ueea);

  /// @brief Method QueueTask, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void QueueTask(::System::Threading::Tasks::Task* task);

  /// @brief Method TryDequeue, addr 0x3e701a0, size 0x8, virtual true, abstract: false, final false
  inline bool TryDequeue(::System::Threading::Tasks::Task* task);

  /// @brief Method TryExecuteTaskInline, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryExecuteTaskInline(::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued);

  /// @brief Method TryRunInline, addr 0x3e69d20, size 0x1f4, virtual false, abstract: false, final false
  inline bool TryRunInline(::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued);

  constexpr int32_t const& __cordl_internal_get_m_taskSchedulerId() const;

  constexpr int32_t& __cordl_internal_get_m_taskSchedulerId();

  constexpr void __cordl_internal_set_m_taskSchedulerId(int32_t value);

  /// @brief Method .ctor, addr 0x3e701b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>* getStaticF__unobservedTaskException();

  static inline ::System::Threading::Lock* getStaticF__unobservedTaskExceptionLockObject();

  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::System::Object*>* getStaticF_s_activeTaskSchedulers();

  static inline ::System::Threading::Tasks::TaskScheduler* getStaticF_s_defaultTaskScheduler();

  static inline int32_t getStaticF_s_taskSchedulerIdCounter();

  /// @brief Method get_Current, addr 0x3e6a688, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::TaskScheduler* get_Current();

  /// @brief Method get_Default, addr 0x3e701bc, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::TaskScheduler* get_Default();

  /// @brief Method get_Id, addr 0x3e69f14, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_Id();

  /// @brief Method get_InternalCurrent, addr 0x3e69360, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::TaskScheduler* get_InternalCurrent();

  /// @brief Method get_RequiresAtomicStartTransition, addr 0x3e701ac, size 0x8, virtual true, abstract: false, final false
  inline bool get_RequiresAtomicStartTransition();

  static inline void setStaticF__unobservedTaskException(::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>* value);

  static inline void setStaticF__unobservedTaskExceptionLockObject(::System::Threading::Lock* value);

  static inline void setStaticF_s_activeTaskSchedulers(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::System::Object*>* value);

  static inline void setStaticF_s_defaultTaskScheduler(::System::Threading::Tasks::TaskScheduler* value);

  static inline void setStaticF_s_taskSchedulerIdCounter(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskScheduler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskScheduler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskScheduler(TaskScheduler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskScheduler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskScheduler(TaskScheduler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2815 };

  /// @brief Field m_taskSchedulerId, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_taskSchedulerId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::TaskScheduler, ___m_taskSchedulerId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskScheduler, 0x18>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskScheduler);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskScheduler*, "System.Threading.Tasks", "TaskScheduler");
NEED_NO_BOX(::System::Threading::Tasks::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView*, "System.Threading.Tasks", "TaskScheduler/SystemThreadingTasks_TaskSchedulerDebugView");
