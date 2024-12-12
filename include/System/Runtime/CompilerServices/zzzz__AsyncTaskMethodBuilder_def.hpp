#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncTaskMethodBuilder)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Threading.Tasks.VoidTaskResult
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct CORDL_TYPE AsyncTaskMethodBuilder {
public:
  // Declarations
  __declspec(property(get = get_Task)) ::System::Threading::Tasks::Task* Task;

  /// @brief Field s_cachedCompleted, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_cachedCompleted, put = setStaticF_s_cachedCompleted)) ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* s_cachedCompleted;

  /// @brief Method AwaitUnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TAwaiter, typename TStateMachine> inline void AwaitUnsafeOnCompleted(::ByRef<TAwaiter> awaiter, ::ByRef<TStateMachine> stateMachine);

  /// @brief Method Create, addr 0x3d18ba4, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder Create();

  /// @brief Method SetException, addr 0x3d16c6c, size 0x7c, virtual false, abstract: false, final false
  inline void SetException(::System::Exception* exception);

  /// @brief Method SetResult, addr 0x3d16b64, size 0xa4, virtual false, abstract: false, final false
  inline void SetResult();

  /// @brief Method SetStateMachine, addr 0x3d16a78, size 0x7c, virtual false, abstract: false, final false
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TStateMachine> inline void Start(::ByRef<TStateMachine> stateMachine);

  static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* getStaticF_s_cachedCompleted();

  /// @brief Method get_Task, addr 0x3d16d78, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* get_Task();

  static inline void setStaticF_s_cachedCompleted(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncTaskMethodBuilder();

  // Ctor Parameters [CppParam { name: "m_builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult>", modifiers: "", def_value: None }]
  constexpr AsyncTaskMethodBuilder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult> m_builder) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3401 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_builder, offset: 0x0, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult> m_builder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, m_builder) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x18>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder");
