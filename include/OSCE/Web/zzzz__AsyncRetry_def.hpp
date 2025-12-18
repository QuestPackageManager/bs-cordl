#pragma once
// IWYU pragma private; include "OSCE/Web/AsyncRetry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncRetry)
namespace OSCE::Web {
template <typename TException> struct AsyncRetry__RetryOn_d__0_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace OSCE::Web {
class AsyncRetry;
}
namespace OSCE::Web {
template <typename TException> struct AsyncRetry__RetryOn_d__0_1;
}
// Write type traits
MARK_REF_PTR_T(::OSCE::Web::AsyncRetry);
MARK_GEN_VAL_T(::OSCE::Web::AsyncRetry__RetryOn_d__0_1);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace OSCE::Web {
// cpp template
template <typename TException>
// Is value type: true
// CS Name: OSCE.Web.AsyncRetry/<RetryOn>d__0`1<TException>
struct CORDL_TYPE AsyncRetry__RetryOn_d__0_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncRetry__RetryOn_d__0_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "function", ty:
  // "::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*", modifiers: "", def_value: None }, CppParam { name: "cancelToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "maxTries", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentTry_5__2", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "_exponentialBackoff_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr AsyncRetry__RetryOn_d__0_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                       ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* function, ::System::Threading::CancellationToken cancelToken,
                                       int32_t maxTries, int32_t _currentTry_5__2, int32_t _exponentialBackoff_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21693 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field function, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* function;

  /// @brief Field cancelToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancelToken;

  /// @brief Field maxTries, offset: 0x30, size: 0x4, def value: None
  int32_t maxTries;

  /// @brief Field <currentTry>5__2, offset: 0x34, size: 0x4, def value: None
  int32_t _currentTry_5__2;

  /// @brief Field <exponentialBackoff>5__3, offset: 0x38, size: 0x4, def value: None
  int32_t _exponentialBackoff_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace OSCE::Web
// Dependencies System.Object
namespace OSCE::Web {
// Is value type: false
// CS Name: OSCE.Web.AsyncRetry
class CORDL_TYPE AsyncRetry : public ::System::Object {
public:
  // Declarations
  template <typename TException> using _RetryOn_d__0_1 = ::OSCE::Web::AsyncRetry__RetryOn_d__0_1<TException>;

  /// @brief Method RetryOn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TException>
  static inline ::System::Threading::Tasks::Task* RetryOn(int32_t maxTries, ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* function,
                                                          ::System::Threading::CancellationToken cancelToken);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncRetry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncRetry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncRetry(AsyncRetry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncRetry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncRetry(AsyncRetry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21694 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OSCE::Web::AsyncRetry, 0x10>, "Size mismatch!");

} // namespace OSCE::Web
NEED_NO_BOX(::OSCE::Web::AsyncRetry);
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Web::AsyncRetry*, "OSCE.Web", "AsyncRetry");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::OSCE::Web::AsyncRetry__RetryOn_d__0_1, "OSCE.Web", "AsyncRetry/<RetryOn>d__0`1");
