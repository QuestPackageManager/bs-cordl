#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncHelper)
namespace System {
template <typename TResult> class Func_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
template <typename T> class __AsyncHelper____c__DisplayClass0_0_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class __AsyncHelper____c__DisplayClass1_0;
}
namespace GlobalNamespace {
struct __AsyncHelper___AnyTaskTrueNonAlloc_d__2;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
template <typename T> struct __AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d;
}
namespace GlobalNamespace {
struct __AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d;
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
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
// Forward declare root types
namespace GlobalNamespace {
class AsyncHelper;
}
namespace GlobalNamespace {
template <typename T> class __AsyncHelper____c__DisplayClass0_0_1;
}
namespace GlobalNamespace {
class __AsyncHelper____c__DisplayClass1_0;
}
namespace GlobalNamespace {
struct __AsyncHelper___AnyTaskTrueNonAlloc_d__2;
}
namespace GlobalNamespace {
template <typename T> struct __AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d;
}
namespace GlobalNamespace {
struct __AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AsyncHelper);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1);
MARK_REF_PTR_T(::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0);
MARK_VAL_T(::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2);
MARK_GEN_VAL_T(::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d);
MARK_VAL_T(::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d);
// Type: ::<<RunSync>b__0>d
// SizeInfo { instance_size: 48, native_size: 64, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 1
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(15814)) CS Name: ::AsyncHelper::<>c__DisplayClass0_0`1::<<RunSync>b__0>d<T>
struct CORDL_TYPE __AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: None }]
  constexpr __AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                    ::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>* __4__this,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass0_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15815))
// CS Name: ::AsyncHelper::<>c__DisplayClass0_0`1<T>*
class CORDL_TYPE __AsyncHelper____c__DisplayClass0_0_1 : public ::System::Object {
public:
  // Declarations
  using __RunSync_b__0_d = ::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d<T>;

  /// @brief Field asyncTask, offset 0x10, size 0x8
  __declspec(property(get = __get_asyncTask, put = __set_asyncTask))::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* asyncTask;

  /// @brief Field result, offset 0x18, size 0x8
  __declspec(property(get = __get_result, put = __set_result)) T result;

  constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*& __get_asyncTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*> const& __get_asyncTask() const;

  constexpr void __set_asyncTask(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* value);

  constexpr T& __get_result();

  constexpr T const& __get_result() const;

  constexpr void __set_result(T value);

  static inline ::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <RunSync>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Threading::Tasks::Task* _RunSync_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncHelper____c__DisplayClass0_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncHelper____c__DisplayClass0_0_1(__AsyncHelper____c__DisplayClass0_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncHelper____c__DisplayClass0_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncHelper____c__DisplayClass0_0_1(__AsyncHelper____c__DisplayClass0_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncHelper____c__DisplayClass0_0_1();

public:
  /// @brief Field asyncTask, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* ___asyncTask;

  /// @brief Field result, offset: 0x18, size: 0x8, def value: None
  T ___result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<<RunSync>b__0>d
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(3393))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15816))
// CS Name: ::AsyncHelper::<>c__DisplayClass1_0::<<RunSync>b__0>d
struct CORDL_TYPE __AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xe24eb4 size 0x194 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xe25048 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                  ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15817))
// CS Name: ::AsyncHelper::<>c__DisplayClass1_0*
class CORDL_TYPE __AsyncHelper____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  using __RunSync_b__0_d = ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d;

  /// @brief Field asyncTask, offset 0x10, size 0x8
  __declspec(property(get = __get_asyncTask, put = __set_asyncTask))::System::Func_1<::System::Threading::Tasks::Task*>* asyncTask;

  constexpr ::System::Func_1<::System::Threading::Tasks::Task*>*& __get_asyncTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Threading::Tasks::Task*>*> const& __get_asyncTask() const;

  constexpr void __set_asyncTask(::System::Func_1<::System::Threading::Tasks::Task*>* value);

  static inline ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0* New_ctor();

  /// @brief Method .ctor addr 0xe24cec size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <RunSync>b__0 addr 0xe24dec size 0xc8 virtual false final false
  inline ::System::Threading::Tasks::Task* _RunSync_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncHelper____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncHelper____c__DisplayClass1_0(__AsyncHelper____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncHelper____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncHelper____c__DisplayClass1_0(__AsyncHelper____c__DisplayClass1_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncHelper____c__DisplayClass1_0();

public:
  /// @brief Field asyncTask, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<::System::Threading::Tasks::Task*>* ___asyncTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<AnyTaskTrueNonAlloc>d__2
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 4099 }), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(2773), inst: 105 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(3402)),
// TypeDefinitionIndex(TypeDefinitionIndex(2773))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15818)) CS Name: ::AsyncHelper::<AnyTaskTrueNonAlloc>d__2
struct CORDL_TYPE __AsyncHelper___AnyTaskTrueNonAlloc_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xe25054 size 0x2a8 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xe252fc size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "tasks", ty:
  // "::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<bool>*>", modifiers: "", def_value: None }]
  constexpr __AsyncHelper___AnyTaskTrueNonAlloc_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                     ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>* tasks,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<bool>*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncHelper___AnyTaskTrueNonAlloc_d__2();

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

} // namespace GlobalNamespace
// Type: ::AsyncHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15819))
// CS Name: ::AsyncHelper*
class CORDL_TYPE AsyncHelper : public ::System::Object {
public:
  // Declarations
  using _AnyTaskTrueNonAlloc_d__2 = ::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2;

  using __c__DisplayClass1_0 = ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0;

  template <typename T> using __c__DisplayClass0_0_1 = ::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>;

  /// @brief Method RunSync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T RunSync(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* asyncTask);

  /// @brief Method RunSync addr 0xe24bec size 0x100 virtual false final false
  static inline void RunSync(::System::Func_1<::System::Threading::Tasks::Task*>* asyncTask);

  /// @brief Method AnyTaskTrueNonAlloc addr 0xe24cf4 size 0xf8 virtual false final false
  static inline ::System::Threading::Tasks::Task_1<bool>* AnyTaskTrueNonAlloc(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>* tasks);

  // Ctor Parameters [CppParam { name: "", ty: "AsyncHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncHelper(AsyncHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncHelper(AsyncHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AsyncHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AsyncHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AsyncHelper*, "", "AsyncHelper");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1, "", "AsyncHelper/<>c__DisplayClass0_0`1");
NEED_NO_BOX(::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0*, "", "AsyncHelper/<>c__DisplayClass1_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2, "", "AsyncHelper/<AnyTaskTrueNonAlloc>d__2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d, "", "AsyncHelper/<>c__DisplayClass0_0`1/<<RunSync>b__0>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d, "", "AsyncHelper/<>c__DisplayClass1_0/<<RunSync>b__0>d");
