#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncMethodBuilderCore_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncTaskMethodBuilder_1)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1);
// Dependencies System.Runtime.CompilerServices.AsyncMethodBuilderCore
namespace System::Runtime::CompilerServices {
// cpp template
template <typename TResult>
// Is value type: true
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1 {
public:
  // Declarations
  __declspec(property(get = get_Task)) ::System::Threading::Tasks::Task_1<TResult>* Task;

  /// @brief Field s_defaultResultTask, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_defaultResultTask, put = setStaticF_s_defaultResultTask)) ::System::Threading::Tasks::Task_1<TResult>* s_defaultResultTask;

  /// @brief Method AwaitUnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TAwaiter, typename TStateMachine> inline void AwaitUnsafeOnCompleted(::ByRef<TAwaiter> awaiter, ::ByRef<TStateMachine> stateMachine);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> Create();

  /// @brief Method GetTaskForResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<TResult>* GetTaskForResult(TResult result);

  /// @brief Method SetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetException(::System::Exception* exception);

  /// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetResult(::System::Threading::Tasks::Task_1<TResult>* completedTask);

  /// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetResult(TResult result);

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TStateMachine> inline void Start(::ByRef<TStateMachine> stateMachine);

  static inline ::System::Threading::Tasks::Task_1<TResult>* getStaticF_s_defaultResultTask();

  /// @brief Method get_Task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<TResult>* get_Task();

  static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<TResult>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncTaskMethodBuilder_1();

  // Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty:
  // "::System::Threading::Tasks::Task_1<TResult>*", modifiers: "", def_value: None }]
  constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<TResult>* m_task) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3402 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_coreState, offset: 0x0, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState;

  /// @brief Field m_task, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<TResult>* m_task;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1, "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder`1");
