#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__AwaitTaskContinuation_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskSchedulerAwaitTaskContinuation)
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class __TaskSchedulerAwaitTaskContinuation____c;
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
class __TaskSchedulerAwaitTaskContinuation____c;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation);
MARK_REF_PTR_T(::System::Threading::Tasks::__TaskSchedulerAwaitTaskContinuation____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: ::TaskSchedulerAwaitTaskContinuation::<>c*
class CORDL_TYPE __TaskSchedulerAwaitTaskContinuation____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Threading::Tasks::__TaskSchedulerAwaitTaskContinuation____c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0))::System::Action_1<::System::Object*>* __9__2_0;

  static inline ::System::Threading::Tasks::__TaskSchedulerAwaitTaskContinuation____c* New_ctor();

  /// @brief Method <Run>b__2_0, addr 0x2720b50, size 0xf0, virtual false, abstract: false, final false
  inline void _Run_b__2_0(::System::Object* state);

  /// @brief Method .ctor, addr 0x2720b48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::Tasks::__TaskSchedulerAwaitTaskContinuation____c* getStaticF___9();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0();

  static inline void setStaticF___9(::System::Threading::Tasks::__TaskSchedulerAwaitTaskContinuation____c* value);

  static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TaskSchedulerAwaitTaskContinuation____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TaskSchedulerAwaitTaskContinuation____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TaskSchedulerAwaitTaskContinuation____c(__TaskSchedulerAwaitTaskContinuation____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TaskSchedulerAwaitTaskContinuation____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TaskSchedulerAwaitTaskContinuation____c(__TaskSchedulerAwaitTaskContinuation____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::__TaskSchedulerAwaitTaskContinuation____c, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Type: System.Threading.Tasks::TaskSchedulerAwaitTaskContinuation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: ::System.Threading.Tasks::TaskSchedulerAwaitTaskContinuation*
class CORDL_TYPE TaskSchedulerAwaitTaskContinuation : public ::System::Threading::Tasks::AwaitTaskContinuation {
public:
  // Declarations
  using __c = ::System::Threading::Tasks::__TaskSchedulerAwaitTaskContinuation____c;

  /// @brief Field m_scheduler, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_scheduler, put = __cordl_internal_set_m_scheduler))::System::Threading::Tasks::TaskScheduler* m_scheduler;

  static inline ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation* New_ctor(::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Action* action, bool flowExecutionContext);

  /// @brief Method Run, addr 0x27206f4, size 0x244, virtual true, abstract: false, final true
  inline void Run(::System::Threading::Tasks::Task* ignored, bool canInlineContinuationTask);

  constexpr ::System::Threading::Tasks::TaskScheduler*& __cordl_internal_get_m_scheduler();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> const& __cordl_internal_get_m_scheduler() const;

  constexpr void __cordl_internal_set_m_scheduler(::System::Threading::Tasks::TaskScheduler* value);

  /// @brief Method .ctor, addr 0x271b1dc, size 0x30, virtual false, abstract: false, final false
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

  /// @brief Field m_scheduler, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskScheduler* ___m_scheduler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation, ___m_scheduler) == 0x20, "Offset mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation*, "System.Threading.Tasks", "TaskSchedulerAwaitTaskContinuation");
NEED_NO_BOX(::System::Threading::Tasks::__TaskSchedulerAwaitTaskContinuation____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::__TaskSchedulerAwaitTaskContinuation____c*, "System.Threading.Tasks", "TaskSchedulerAwaitTaskContinuation/<>c");
