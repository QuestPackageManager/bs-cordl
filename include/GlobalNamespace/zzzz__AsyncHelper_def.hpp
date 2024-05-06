#pragma once
// IWYU pragma private; include "GlobalNamespace/AsyncHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncHelper)
namespace GlobalNamespace {
struct __AsyncHelper___AnyTaskTrueNonAlloc_d__2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AsyncHelper;
}
namespace GlobalNamespace {
struct __AsyncHelper___AnyTaskTrueNonAlloc_d__2;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AsyncHelper);
MARK_VAL_T(::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2);
// Type: ::<AnyTaskTrueNonAlloc>d__2
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AsyncHelper::<AnyTaskTrueNonAlloc>d__2
struct CORDL_TYPE __AsyncHelper___AnyTaskTrueNonAlloc_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1072e74, size 0x2a8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x107311c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncHelper___AnyTaskTrueNonAlloc_d__2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "tasks", ty:
  // "::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<bool>*>", modifiers: "", def_value: None }]
  constexpr __AsyncHelper___AnyTaskTrueNonAlloc_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                     ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>* tasks,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<bool>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field tasks, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>* tasks;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<bool>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2, tasks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AsyncHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AsyncHelper*
class CORDL_TYPE AsyncHelper : public ::System::Object {
public:
  // Declarations
  using _AnyTaskTrueNonAlloc_d__2 = ::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2;

  /// @brief Method AnyTaskTrueNonAlloc, addr 0x1072d7c, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<bool>* AnyTaskTrueNonAlloc(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>* tasks);

  /// @brief Method RunSync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T RunSync(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* asyncTask);

  /// @brief Method RunSync, addr 0x1072cf4, size 0x88, virtual false, abstract: false, final false
  static inline void RunSync(::System::Func_1<::System::Threading::Tasks::Task*>* asyncTask);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncHelper(AsyncHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncHelper(AsyncHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AsyncHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AsyncHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AsyncHelper*, "", "AsyncHelper");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2, "", "AsyncHelper/<AnyTaskTrueNonAlloc>d__2");
