#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncMethodBuilderCore_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncVoidMethodBuilder)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder);
// Dependencies System.Runtime.CompilerServices.AsyncMethodBuilderCore
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct CORDL_TYPE AsyncVoidMethodBuilder {
public:
  // Declarations
  __declspec(property(get = get_Task)) ::System::Threading::Tasks::Task* Task;

  /// @brief Method AwaitOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TAwaiter, typename TStateMachine> inline void AwaitOnCompleted(::ByRef<TAwaiter> awaiter, ::ByRef<TStateMachine> stateMachine);

  /// @brief Method AwaitUnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TAwaiter, typename TStateMachine> inline void AwaitUnsafeOnCompleted(::ByRef<TAwaiter> awaiter, ::ByRef<TStateMachine> stateMachine);

  /// @brief Method Create, addr 0x3d19984, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Create();

  /// @brief Method NotifySynchronizationContextOfCompletion, addr 0x3d19b48, size 0xa4, virtual false, abstract: false, final false
  inline void NotifySynchronizationContextOfCompletion();

  /// @brief Method SetException, addr 0x3d19bec, size 0x130, virtual false, abstract: false, final false
  inline void SetException(::System::Exception* exception);

  /// @brief Method SetResult, addr 0x3d19a88, size 0x5c, virtual false, abstract: false, final false
  inline void SetResult();

  /// @brief Method SetStateMachine, addr 0x3d199c4, size 0x8, virtual false, abstract: false, final false
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TStateMachine> inline void Start(::ByRef<TStateMachine> stateMachine);

  /// @brief Method get_Task, addr 0x3d19ae4, size 0x64, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* get_Task();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncVoidMethodBuilder();

  // Ctor Parameters [CppParam { name: "m_synchronizationContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: None }, CppParam { name: "m_coreState", ty:
  // "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None
  // }]
  constexpr AsyncVoidMethodBuilder(::System::Threading::SynchronizationContext* m_synchronizationContext, ::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState,
                                   ::System::Threading::Tasks::Task* m_task) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3400 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_synchronizationContext, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::SynchronizationContext* m_synchronizationContext;

  /// @brief Field m_coreState, offset: 0x8, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState;

  /// @brief Field m_task, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* m_task;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, m_synchronizationContext) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, m_coreState) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, m_task) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x20>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, "System.Runtime.CompilerServices", "AsyncVoidMethodBuilder");
