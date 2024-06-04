#pragma once
// IWYU pragma private; include "System/Threading/Tasks/ThreadPoolTaskScheduler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ThreadPoolTaskScheduler)
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class __ThreadPoolTaskScheduler____c;
}
namespace System::Threading {
class ParameterizedThreadStart;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
class ThreadPoolTaskScheduler;
}
namespace System::Threading::Tasks {
class __ThreadPoolTaskScheduler____c;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::ThreadPoolTaskScheduler);
MARK_REF_PTR_T(::System::Threading::Tasks::__ThreadPoolTaskScheduler____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: ::ThreadPoolTaskScheduler::<>c*
class CORDL_TYPE __ThreadPoolTaskScheduler____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Threading::Tasks::__ThreadPoolTaskScheduler____c* __9;

  static inline ::System::Threading::Tasks::__ThreadPoolTaskScheduler____c* New_ctor();

  /// @brief Method <.cctor>b__10_0, addr 0x29d1ed4, size 0x84, virtual false, abstract: false, final false
  inline void __cctor_b__10_0(::System::Object* s);

  /// @brief Method .ctor, addr 0x29d1ecc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::Tasks::__ThreadPoolTaskScheduler____c* getStaticF___9();

  static inline void setStaticF___9(::System::Threading::Tasks::__ThreadPoolTaskScheduler____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThreadPoolTaskScheduler____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ThreadPoolTaskScheduler____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThreadPoolTaskScheduler____c(__ThreadPoolTaskScheduler____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThreadPoolTaskScheduler____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThreadPoolTaskScheduler____c(__ThreadPoolTaskScheduler____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::__ThreadPoolTaskScheduler____c, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Type: System.Threading.Tasks::ThreadPoolTaskScheduler
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: ::System.Threading.Tasks::ThreadPoolTaskScheduler*
class CORDL_TYPE ThreadPoolTaskScheduler : public ::System::Threading::Tasks::TaskScheduler {
public:
  // Declarations
  using __c = ::System::Threading::Tasks::__ThreadPoolTaskScheduler____c;

  __declspec(property(get = get_RequiresAtomicStartTransition)) bool RequiresAtomicStartTransition;

  /// @brief Field s_longRunningThreadWork, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_longRunningThreadWork, put = setStaticF_s_longRunningThreadWork))::System::Threading::ParameterizedThreadStart* s_longRunningThreadWork;

  static inline ::System::Threading::Tasks::ThreadPoolTaskScheduler* New_ctor();

  /// @brief Method NotifyWorkItemProgress, addr 0x29d1d8c, size 0x10, virtual true, abstract: false, final false
  inline void NotifyWorkItemProgress();

  /// @brief Method QueueTask, addr 0x29d1ad8, size 0x1c8, virtual true, abstract: false, final false
  inline void QueueTask(::System::Threading::Tasks::Task* task);

  /// @brief Method TryDequeue, addr 0x29d1d84, size 0x8, virtual true, abstract: false, final false
  inline bool TryDequeue(::System::Threading::Tasks::Task* task);

  /// @brief Method TryExecuteTaskInline, addr 0x29d1ca0, size 0xe4, virtual true, abstract: false, final false
  inline bool TryExecuteTaskInline(::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued);

  /// @brief Method .ctor, addr 0x29d1a80, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::ParameterizedThreadStart* getStaticF_s_longRunningThreadWork();

  /// @brief Method get_RequiresAtomicStartTransition, addr 0x29d1d9c, size 0x8, virtual true, abstract: false, final false
  inline bool get_RequiresAtomicStartTransition();

  static inline void setStaticF_s_longRunningThreadWork(::System::Threading::ParameterizedThreadStart* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadPoolTaskScheduler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolTaskScheduler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadPoolTaskScheduler(ThreadPoolTaskScheduler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolTaskScheduler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadPoolTaskScheduler(ThreadPoolTaskScheduler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::ThreadPoolTaskScheduler, 0x18>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::ThreadPoolTaskScheduler);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::ThreadPoolTaskScheduler*, "System.Threading.Tasks", "ThreadPoolTaskScheduler");
NEED_NO_BOX(::System::Threading::Tasks::__ThreadPoolTaskScheduler____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::__ThreadPoolTaskScheduler____c*, "System.Threading.Tasks", "ThreadPoolTaskScheduler/<>c");
