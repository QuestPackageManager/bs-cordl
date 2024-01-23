#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AsyncCachedLoader_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncCachedLoader_2)
namespace GlobalNamespace {
template <typename K, typename V> class HMCache_2;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> struct __AsyncCachedLoader_2__ScheduledTask;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> struct __AsyncCachedLoader_2___LoadAllAsync_d__8;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> struct __AsyncCachedLoader_2___LoadAsync_d__7;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
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
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TKey, typename TValue> class AsyncCachedLoader_2;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> struct __AsyncCachedLoader_2__ScheduledTask;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> struct __AsyncCachedLoader_2___LoadAllAsync_d__8;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> struct __AsyncCachedLoader_2___LoadAsync_d__7;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::AsyncCachedLoader_2);
MARK_GEN_VAL_T(::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask);
MARK_GEN_VAL_T(::GlobalNamespace::__AsyncCachedLoader_2___LoadAllAsync_d__8);
MARK_GEN_VAL_T(::GlobalNamespace::__AsyncCachedLoader_2___LoadAsync_d__7);
// Type: ::ScheduledTask
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2677))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5906))
// CS Name: ::AsyncCachedLoader`2::ScheduledTask<TKey,TValue>
struct CORDL_TYPE __AsyncCachedLoader_2__ScheduledTask {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TKey keyId, ::System::Threading::Tasks::TaskCompletionSource_1<TValue>* taskCompletionSource, ::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "keyId", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "taskCompletionSource", ty:
  // "::System::Threading::Tasks::TaskCompletionSource_1<TValue>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }]
  constexpr __AsyncCachedLoader_2__ScheduledTask(TKey keyId, ::System::Threading::Tasks::TaskCompletionSource_1<TValue>* taskCompletionSource,
                                                 ::System::Threading::CancellationToken cancellationToken) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncCachedLoader_2__ScheduledTask();

  /// @brief Field keyId, offset: 0x0, size: 0x8, def value: None
  TKey keyId;

  /// @brief Field taskCompletionSource, offset: 0x8, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<TValue>* taskCompletionSource;

  /// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<LoadAsync>d__7
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3402)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 864 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 864 })] Self:
// TypeDefinitionIndex(TypeDefinitionIndex(5907)) CS Name: ::AsyncCachedLoader`2::<LoadAsync>d__7<TKey,TValue>
struct CORDL_TYPE __AsyncCachedLoader_2___LoadAsync_d__7 {
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
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue>", modifiers: "", def_value: None }, CppParam { name: "keyId", ty: "TKey", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>", modifiers: "", def_value: None }]
  constexpr __AsyncCachedLoader_2___LoadAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue> __t__builder, TKey keyId,
                                                   ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>* __4__this,
                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncCachedLoader_2___LoadAsync_d__7();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue> __t__builder;

  /// @brief Field keyId, offset: 0x20, size: 0x8, def value: None
  TKey keyId;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>* __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<LoadAllAsync>d__8
// SizeInfo { instance_size: 80, native_size: 96, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(5906)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 5056 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5906), inst: 84 })] Self:
// TypeDefinitionIndex(TypeDefinitionIndex(5908)) CS Name: ::AsyncCachedLoader`2::<LoadAllAsync>d__8<TKey,TValue>
struct CORDL_TYPE __AsyncCachedLoader_2___LoadAllAsync_d__8 {
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
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>*",
  // modifiers: "", def_value: None }, CppParam { name: "_scheduledTask_5__2", ty: "::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>", modifiers: "", def_value: None }]
  constexpr __AsyncCachedLoader_2___LoadAllAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                      ::GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>* __4__this,
                                                      ::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey, TValue> _scheduledTask_5__2,
                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncCachedLoader_2___LoadAllAsync_d__8();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>* __4__this;

  /// @brief Field <scheduledTask>5__2, offset: 0x30, size: 0x18, def value: None
  ::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey, TValue> _scheduledTask_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::AsyncCachedLoader`2
// SizeInfo { instance_size: 48, native_size: 41, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5909))
// CS Name: ::AsyncCachedLoader`2<TKey,TValue>*
class CORDL_TYPE AsyncCachedLoader_2 : public ::System::Object {
public:
  // Declarations
  using _LoadAllAsync_d__8 = ::GlobalNamespace::__AsyncCachedLoader_2___LoadAllAsync_d__8<TKey, TValue>;

  using _LoadAsync_d__7 = ::GlobalNamespace::__AsyncCachedLoader_2___LoadAsync_d__7<TKey, TValue>;

  using ScheduledTask = ::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey, TValue>;

  /// @brief Field _scheduledTaskList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__scheduledTaskList,
                      put = __cordl_internal_set__scheduledTaskList))::System::Collections::Generic::List_1<::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey, TValue>>* _scheduledTaskList;

  /// @brief Field _cache, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__cache, put = __cordl_internal_set__cache))::GlobalNamespace::HMCache_2<TKey, TValue>* _cache;

  /// @brief Field _resultValueFunc, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__resultValueFunc,
                      put = __cordl_internal_set__resultValueFunc))::System::Func_3<TKey, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<TValue>*>* _resultValueFunc;

  /// @brief Field _isLoading, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isLoading, put = __cordl_internal_set__isLoading)) bool _isLoading;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey, TValue>>*& __cordl_internal_get__scheduledTaskList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey, TValue>>*> const&
  __cordl_internal_get__scheduledTaskList() const;

  constexpr void __cordl_internal_set__scheduledTaskList(::System::Collections::Generic::List_1<::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey, TValue>>* value);

  constexpr ::GlobalNamespace::HMCache_2<TKey, TValue>*& __cordl_internal_get__cache();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HMCache_2<TKey, TValue>*> const& __cordl_internal_get__cache() const;

  constexpr void __cordl_internal_set__cache(::GlobalNamespace::HMCache_2<TKey, TValue>* value);

  constexpr ::System::Func_3<TKey, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<TValue>*>*& __cordl_internal_get__resultValueFunc();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<TKey, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<TValue>*>*> const&
  __cordl_internal_get__resultValueFunc() const;

  constexpr void __cordl_internal_set__resultValueFunc(::System::Func_3<TKey, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<TValue>*>* value);

  constexpr bool& __cordl_internal_get__isLoading();

  constexpr bool const& __cordl_internal_get__isLoading() const;

  constexpr void __cordl_internal_set__isLoading(bool value);

  /// @brief Method ClearCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ClearCache();

  static inline ::GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>*
  New_ctor(int32_t maxNumberCachedElements, ::System::Func_3<TKey, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<TValue>*>* resultValueFunc);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxNumberCachedElements, ::System::Func_3<TKey, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<TValue>*>* resultValueFunc);

  /// @brief Method LoadAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<TValue>* LoadAsync(TKey keyId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadAllAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LoadAllAsync();

  // Ctor Parameters [CppParam { name: "", ty: "AsyncCachedLoader_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncCachedLoader_2(AsyncCachedLoader_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncCachedLoader_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncCachedLoader_2(AsyncCachedLoader_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncCachedLoader_2();

public:
  /// @brief Field _scheduledTaskList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey, TValue>>* ____scheduledTaskList;

  /// @brief Field _cache, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::HMCache_2<TKey, TValue>* ____cache;

  /// @brief Field _resultValueFunc, offset: 0x20, size: 0x8, def value: None
  ::System::Func_3<TKey, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<TValue>*>* ____resultValueFunc;

  /// @brief Field _isLoading, offset: 0x28, size: 0x1, def value: None
  bool ____isLoading;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::AsyncCachedLoader_2, "", "AsyncCachedLoader`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask, "", "AsyncCachedLoader`2/ScheduledTask");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__AsyncCachedLoader_2___LoadAllAsync_d__8, "", "AsyncCachedLoader`2/<LoadAllAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__AsyncCachedLoader_2___LoadAsync_d__7, "", "AsyncCachedLoader`2/<LoadAsync>d__7");
