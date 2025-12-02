#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TaskAwaiter)
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class TaskAwaiter___c__DisplayClass11_0;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class TaskAwaiter___c__DisplayClass11_0;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0);
MARK_VAL_T(::System::Runtime::CompilerServices::TaskAwaiter);
// Dependencies System.Object
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.TaskAwaiter/<>c__DisplayClass11_0
class CORDL_TYPE TaskAwaiter___c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field continuation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_continuation, put = __cordl_internal_set_continuation)) ::System::Action* continuation;

  /// @brief Field task, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_task, put = __cordl_internal_set_task)) ::System::Threading::Tasks::Task* task;

  static inline ::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0* New_ctor();

  /// @brief Method <OutputWaitEtwEvents>b__0, addr 0x595ac44, size 0x1b8, virtual false, abstract: false, final false
  inline void _OutputWaitEtwEvents_b__0();

  constexpr ::System::Action* const& __cordl_internal_get_continuation() const;

  constexpr ::System::Action*& __cordl_internal_get_continuation();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_task() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_task();

  constexpr void __cordl_internal_set_continuation(::System::Action* value);

  constexpr void __cordl_internal_set_task(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x595ac40, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskAwaiter___c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskAwaiter___c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskAwaiter___c__DisplayClass11_0(TaskAwaiter___c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskAwaiter___c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskAwaiter___c__DisplayClass11_0(TaskAwaiter___c__DisplayClass11_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3407 };

  /// @brief Field task, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___task;

  /// @brief Field continuation, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___continuation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0, ___task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0, ___continuation) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0, 0x20>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
// Dependencies
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: System.Runtime.CompilerServices.TaskAwaiter
struct CORDL_TYPE TaskAwaiter {
public:
  // Declarations
  using __c__DisplayClass11_0 = ::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*();

  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*();

  /// @brief Method GetResult, addr 0x595a818, size 0x8, virtual false, abstract: false, final false
  inline void GetResult();

  /// @brief Method HandleNonSuccessAndDebuggerNotification, addr 0x595a850, size 0x6c, virtual false, abstract: false, final false
  static inline void HandleNonSuccessAndDebuggerNotification(::System::Threading::Tasks::Task* task);

  /// @brief Method OnCompleted, addr 0x595a400, size 0x10, virtual true, abstract: false, final true
  inline void OnCompleted(::System::Action* continuation);

  /// @brief Method OnCompletedInternal, addr 0x595a768, size 0xb0, virtual false, abstract: false, final false
  static inline void OnCompletedInternal(::System::Threading::Tasks::Task* task, ::System::Action* continuation, bool continueOnCapturedContext, bool flowExecutionContext);

  /// @brief Method OutputWaitEtwEvents, addr 0x595a9f8, size 0x248, virtual false, abstract: false, final false
  static inline ::System::Action* OutputWaitEtwEvents(::System::Threading::Tasks::Task* task, ::System::Action* continuation);

  /// @brief Method ThrowForNonSuccess, addr 0x595a8bc, size 0x13c, virtual false, abstract: false, final false
  static inline void ThrowForNonSuccess(::System::Threading::Tasks::Task* task);

  /// @brief Method UnsafeOnCompleted, addr 0x595a5a4, size 0x10, virtual true, abstract: false, final true
  inline void UnsafeOnCompleted(::System::Action* continuation);

  /// @brief Method ValidateEnd, addr 0x595a820, size 0x30, virtual false, abstract: false, final false
  static inline void ValidateEnd(::System::Threading::Tasks::Task* task);

  /// @brief Method .ctor, addr 0x595a748, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task* task);

  /// @brief Method get_IsCompleted, addr 0x595a750, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion();

  /// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskAwaiter();

  // Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }]
  constexpr TaskAwaiter(::System::Threading::Tasks::Task* m_task) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3408 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_task, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* m_task;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::TaskAwaiter, m_task) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::TaskAwaiter, 0x8>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0*, "System.Runtime.CompilerServices", "TaskAwaiter/<>c__DisplayClass11_0");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::TaskAwaiter, "System.Runtime.CompilerServices", "TaskAwaiter");
