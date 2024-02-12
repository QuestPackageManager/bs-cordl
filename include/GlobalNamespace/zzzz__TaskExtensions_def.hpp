#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TaskExtensions)
namespace GlobalNamespace {
template <typename T> struct __TaskExtensions___WaitForTask_d__1_1;
}
namespace GlobalNamespace {
template <typename T> class __TaskExtensions____c__DisplayClass0_0_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class TaskExtensions;
}
namespace GlobalNamespace {
template <typename T> class __TaskExtensions____c__DisplayClass0_0_1;
}
namespace GlobalNamespace {
template <typename T> struct __TaskExtensions___WaitForTask_d__1_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TaskExtensions);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1);
MARK_GEN_VAL_T(::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1);
// Type: ::<>c__DisplayClass0_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2677))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12887))
// CS Name: ::TaskExtensions::<>c__DisplayClass0_0`1<T>*
class CORDL_TYPE __TaskExtensions____c__DisplayClass0_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tcs, put = __cordl_internal_set_tcs))::System::Threading::Tasks::TaskCompletionSource_1<T>* tcs;

  /// @brief Field cancellationToken, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cancellationToken, put = __cordl_internal_set_cancellationToken))::System::Threading::CancellationToken cancellationToken;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& __cordl_internal_get_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<T>*> const& __cordl_internal_get_tcs() const;

  constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<T>* value);

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken();

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

  constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value);

  static inline ::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <WithCancellation>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _WithCancellation_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__TaskExtensions____c__DisplayClass0_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TaskExtensions____c__DisplayClass0_0_1(__TaskExtensions____c__DisplayClass0_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TaskExtensions____c__DisplayClass0_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TaskExtensions____c__DisplayClass0_0_1(__TaskExtensions____c__DisplayClass0_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TaskExtensions____c__DisplayClass0_0_1();

public:
  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<T>* ___tcs;

  /// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<WaitForTask>d__1`1
// SizeInfo { instance_size: 72, native_size: 88, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3396)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 108
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(12888)) CS Name: ::TaskExtensions::<WaitForTask>d__1`1<T>
struct CORDL_TYPE __TaskExtensions___WaitForTask_d__1_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "tcs", ty: "::System::Threading::Tasks::TaskCompletionSource_1<T>*", modifiers:
  // "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty:
  // "::System::Threading::Tasks::TaskCompletionSource_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "",
  // def_value: None }]
  constexpr __TaskExtensions___WaitForTask_d__1_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                  ::System::Threading::Tasks::TaskCompletionSource_1<T>* tcs, ::System::Threading::Tasks::Task_1<T>* task,
                                                  ::System::Threading::Tasks::TaskCompletionSource_1<T>* __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TaskExtensions___WaitForTask_d__1_1();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field tcs, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<T>* tcs;

  /// @brief Field task, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<T>* task;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<T>* __7__wrap1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::TaskExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12889))
// CS Name: ::TaskExtensions*
class CORDL_TYPE TaskExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using _WaitForTask_d__1_1 = ::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>;

  template <typename T> using __c__DisplayClass0_0_1 = ::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>;

  /// @brief Method WithCancellation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Threading::Tasks::Task_1<T>* WithCancellation(::System::Threading::Tasks::Task_1<T>* task, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WaitForTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void WaitForTask(::System::Threading::Tasks::Task_1<T>* task, ::System::Threading::Tasks::TaskCompletionSource_1<T>* tcs);

  // Ctor Parameters [CppParam { name: "", ty: "TaskExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskExtensions(TaskExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskExtensions(TaskExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TaskExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TaskExtensions*, "", "TaskExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1, "", "TaskExtensions/<>c__DisplayClass0_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1, "", "TaskExtensions/<WaitForTask>d__1`1");
