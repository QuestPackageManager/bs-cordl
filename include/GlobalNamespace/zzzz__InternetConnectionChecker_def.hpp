#pragma once
// IWYU pragma private; include "GlobalNamespace/InternetConnectionChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternetConnectionChecker)
namespace GlobalNamespace {
struct InternetConnectionChecker__IsConnectedToInternetAsync_d__0;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class InternetConnectionChecker;
}
namespace GlobalNamespace {
struct InternetConnectionChecker__IsConnectedToInternetAsync_d__0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InternetConnectionChecker);
MARK_VAL_T(::GlobalNamespace::InternetConnectionChecker__IsConnectedToInternetAsync_d__0);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: InternetConnectionChecker/<IsConnectedToInternetAsync>d__0
struct CORDL_TYPE InternetConnectionChecker__IsConnectedToInternetAsync_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3c22ac8, size 0x29c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3c22d64, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InternetConnectionChecker__IsConnectedToInternetAsync_d__0();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr InternetConnectionChecker__IsConnectedToInternetAsync_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18596 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InternetConnectionChecker__IsConnectedToInternetAsync_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InternetConnectionChecker__IsConnectedToInternetAsync_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InternetConnectionChecker__IsConnectedToInternetAsync_d__0, __u__1) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InternetConnectionChecker__IsConnectedToInternetAsync_d__0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: InternetConnectionChecker
class CORDL_TYPE InternetConnectionChecker : public ::System::Object {
public:
  // Declarations
  using _IsConnectedToInternetAsync_d__0 = ::GlobalNamespace::InternetConnectionChecker__IsConnectedToInternetAsync_d__0;

  /// @brief Method IsConnectedToInternetAsync, addr 0x3c229dc, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<bool>* IsConnectedToInternetAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::InternetConnectionChecker* New_ctor();

  /// @brief Method .ctor, addr 0x3c22ac0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternetConnectionChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternetConnectionChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternetConnectionChecker(InternetConnectionChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternetConnectionChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternetConnectionChecker(InternetConnectionChecker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18597 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InternetConnectionChecker, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InternetConnectionChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InternetConnectionChecker*, "", "InternetConnectionChecker");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InternetConnectionChecker__IsConnectedToInternetAsync_d__0, "", "InternetConnectionChecker/<IsConnectedToInternetAsync>d__0");
