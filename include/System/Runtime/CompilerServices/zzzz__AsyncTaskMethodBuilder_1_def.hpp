#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncMethodBuilderCore_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
namespace System::Runtime::CompilerServices {
struct AsyncMethodBuilderCore;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1);
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// cpp template
template <typename TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3402))
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncTaskMethodBuilder_1 {
public:
  // Declarations
  /// @brief Field s_defaultResultTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_defaultResultTask, put = setStaticF_s_defaultResultTask))::System::Threading::Tasks::Task_1<TResult>* s_defaultResultTask;

  __declspec(property(get = get_Task))::System::Threading::Tasks::Task_1<TResult>* Task;

  static inline void setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<TResult>* value);

  static inline ::System::Threading::Tasks::Task_1<TResult>* getStaticF_s_defaultResultTask();

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> Create();

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TStateMachine> inline void Start(ByRef<TStateMachine> stateMachine);

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Method AwaitUnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TAwaiter, typename TStateMachine> inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine);

  /// @brief Method get_Task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<TResult>* get_Task();

  /// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetResult(TResult result);

  /// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetResult(::System::Threading::Tasks::Task_1<TResult>* completedTask);

  /// @brief Method SetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetException(::System::Exception* exception);

  /// @brief Method GetTaskForResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<TResult>* GetTaskForResult(TResult result);

  // Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty:
  // "::System::Threading::Tasks::Task_1<TResult>*", modifiers: "", def_value: None }]
  constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<TResult>* m_task) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncTaskMethodBuilder_1();

  /// @brief Field m_coreState, offset: 0x0, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState;

  /// @brief Field m_task, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<TResult>* m_task;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1, "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder`1");
