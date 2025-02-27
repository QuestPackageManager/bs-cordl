#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskSchedulerAwaitTaskContinuation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__AwaitTaskContinuation_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskSchedulerAwaitTaskContinuation)
namespace System::Threading::Tasks {
class TaskSchedulerAwaitTaskContinuation___c;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskSchedulerAwaitTaskContinuation;
}
namespace System::Threading::Tasks {
class TaskSchedulerAwaitTaskContinuation___c;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation);
MARK_REF_PTR_T(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c);
// Dependencies System.Object
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation/<>c
class CORDL_TYPE TaskSchedulerAwaitTaskContinuation___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Action_1<::System::Object*>* __9__2_0;

  static inline ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c* New_ctor();

  /// @brief Method <Run>b__2_0, addr 0x3e77b60, size 0xf0, virtual false, abstract: false, final false
  inline void _Run_b__2_0(::System::Object* state);

  /// @brief Method .ctor, addr 0x3e77b58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c* getStaticF___9();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0();

  static inline void setStaticF___9(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c* value);

  static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskSchedulerAwaitTaskContinuation___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskSchedulerAwaitTaskContinuation___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskSchedulerAwaitTaskContinuation___c(TaskSchedulerAwaitTaskContinuation___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskSchedulerAwaitTaskContinuation___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskSchedulerAwaitTaskContinuation___c(TaskSchedulerAwaitTaskContinuation___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2808 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Dependencies System.Threading.Tasks.AwaitTaskContinuation
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation
class CORDL_TYPE TaskSchedulerAwaitTaskContinuation : public ::System::Threading::Tasks::AwaitTaskContinuation {
public:
  // Declarations
  using __c = ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c;

  /// @brief Field m_scheduler, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_scheduler, put = __cordl_internal_set_m_scheduler)) ::System::Threading::Tasks::TaskScheduler* m_scheduler;

  static inline ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation* New_ctor(::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Action* action, bool flowExecutionContext);

  /// @brief Method Run, addr 0x3e77724, size 0x23c, virtual true, abstract: false, final true
  inline void Run(::System::Threading::Tasks::Task* ignored, bool canInlineContinuationTask);

  constexpr ::System::Threading::Tasks::TaskScheduler* const& __cordl_internal_get_m_scheduler() const;

  constexpr ::System::Threading::Tasks::TaskScheduler*& __cordl_internal_get_m_scheduler();

  constexpr void __cordl_internal_set_m_scheduler(::System::Threading::Tasks::TaskScheduler* value);

  /// @brief Method .ctor, addr 0x3e72308, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Action* action, bool flowExecutionContext);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskSchedulerAwaitTaskContinuation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskSchedulerAwaitTaskContinuation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskSchedulerAwaitTaskContinuation(TaskSchedulerAwaitTaskContinuation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskSchedulerAwaitTaskContinuation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskSchedulerAwaitTaskContinuation(TaskSchedulerAwaitTaskContinuation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2809 };

  /// @brief Field m_scheduler, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskScheduler* ___m_scheduler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation, ___m_scheduler) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation, 0x28>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation*, "System.Threading.Tasks", "TaskSchedulerAwaitTaskContinuation");
NEED_NO_BOX(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c*, "System.Threading.Tasks", "TaskSchedulerAwaitTaskContinuation/<>c");
