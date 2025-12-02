#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTaskBuilder_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRTaskBuilder_1)
namespace GlobalNamespace {
class OVRObjectPool_IPoolObject;
}
namespace GlobalNamespace {
template <typename T, typename TStateMachine> class OVRTaskBuilder_1_PooledStateMachine_1;
}
namespace GlobalNamespace {
template <typename T> class OVRTaskBuilder_1_PooledStateMachine;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class OVRTaskBuilder_1_PooledStateMachine;
}
namespace GlobalNamespace {
template <typename T, typename TStateMachine> class OVRTaskBuilder_1_PooledStateMachine_1;
}
namespace GlobalNamespace {
template <typename T> struct OVRTaskBuilder_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine);
MARK_GEN_REF_PTR_T(::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1);
MARK_GEN_VAL_T(::GlobalNamespace::OVRTaskBuilder_1);
// Dependencies OVRTask`1<TResult>, System.Nullable`1<T>, System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: OVRTaskBuilder`1/PooledStateMachine<T>
class CORDL_TYPE OVRTaskBuilder_1_PooledStateMachine : public ::System::Object {
public:
  // Declarations
  /// @brief Field MoveNext, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_MoveNext, put = __cordl_internal_set_MoveNext)) ::System::Action* MoveNext;

  /// @brief Field Task, offset 0x10, size 0x14
  __declspec(property(get = __cordl_internal_get_Task, put = __cordl_internal_set_Task)) ::System::Nullable_1<::GlobalNamespace::OVRTask_1<T>> Task;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose();

  static inline ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>* New_ctor();

  constexpr ::System::Action* const& __cordl_internal_get_MoveNext() const;

  constexpr ::System::Action*& __cordl_internal_get_MoveNext();

  constexpr ::System::Nullable_1<::GlobalNamespace::OVRTask_1<T>> const& __cordl_internal_get_Task() const;

  constexpr ::System::Nullable_1<::GlobalNamespace::OVRTask_1<T>>& __cordl_internal_get_Task();

  constexpr void __cordl_internal_set_MoveNext(::System::Action* value);

  constexpr void __cordl_internal_set_Task(::System::Nullable_1<::GlobalNamespace::OVRTask_1<T>> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTaskBuilder_1_PooledStateMachine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTaskBuilder_1_PooledStateMachine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTaskBuilder_1_PooledStateMachine(OVRTaskBuilder_1_PooledStateMachine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTaskBuilder_1_PooledStateMachine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTaskBuilder_1_PooledStateMachine(OVRTaskBuilder_1_PooledStateMachine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7839 };

  /// @brief Field Task, offset: 0x10, size: 0x14, def value: None
  ::System::Nullable_1<::GlobalNamespace::OVRTask_1<T>> ___Task;

  /// @brief Field MoveNext, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___MoveNext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies OVRTaskBuilder`1::PooledStateMachine<T>
namespace GlobalNamespace {
// cpp template
template <typename T, typename TStateMachine>
// Is value type: false
// CS Name: OVRTaskBuilder`1/PooledStateMachine`1<T,TStateMachine>
class CORDL_TYPE OVRTaskBuilder_1_PooledStateMachine_1 : public ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T> {
public:
  // Declarations
  /// @brief Field StateMachine, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_StateMachine, put = __cordl_internal_set_StateMachine)) TStateMachine StateMachine;

  /// @brief Convert operator to "::GlobalNamespace::OVRObjectPool_IPoolObject"
  constexpr operator ::GlobalNamespace::OVRObjectPool_IPoolObject*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method ExecuteMoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ExecuteMoveNext();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>* Get();

  static inline ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>* New_ctor();

  /// @brief Method OVRObjectPool.IPoolObject.OnGet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OVRObjectPool_IPoolObject_OnGet();

  /// @brief Method OVRObjectPool.IPoolObject.OnReturn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OVRObjectPool_IPoolObject_OnReturn();

  constexpr TStateMachine const& __cordl_internal_get_StateMachine() const;

  constexpr TStateMachine& __cordl_internal_get_StateMachine();

  constexpr void __cordl_internal_set_StateMachine(TStateMachine value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::OVRObjectPool_IPoolObject"
  constexpr ::GlobalNamespace::OVRObjectPool_IPoolObject* i___GlobalNamespace__OVRObjectPool_IPoolObject() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTaskBuilder_1_PooledStateMachine_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTaskBuilder_1_PooledStateMachine_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTaskBuilder_1_PooledStateMachine_1(OVRTaskBuilder_1_PooledStateMachine_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTaskBuilder_1_PooledStateMachine_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTaskBuilder_1_PooledStateMachine_1(OVRTaskBuilder_1_PooledStateMachine_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7840 };

  /// @brief Field StateMachine, offset: 0x30, size: 0x8, def value: None
  TStateMachine ___StateMachine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies OVRTask`1<TResult>, System.Nullable`1<T>
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OVRTaskBuilder`1<T>
struct CORDL_TYPE OVRTaskBuilder_1 {
public:
  // Declarations
  using PooledStateMachine = ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>;

  template <typename TStateMachine> using PooledStateMachine_1 = ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>;

  __declspec(property(get = get_Task)) ::GlobalNamespace::OVRTask_1<T> Task;

  /// @brief Method AwaitOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TAwaiter, typename TStateMachine> inline void AwaitOnCompleted(::ByRef<TAwaiter> awaiter, ::ByRef<TStateMachine> stateMachine);

  /// @brief Method AwaitUnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TAwaiter, typename TStateMachine> inline void AwaitUnsafeOnCompleted(::ByRef<TAwaiter> awaiter, ::ByRef<TStateMachine> stateMachine);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTaskBuilder_1<T> Create();

  /// @brief Method GetPooledStateMachine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TStateMachine> inline ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>* GetPooledStateMachine();

  /// @brief Method SetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetException(::System::Exception* exception);

  /// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetResult(T result);

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TStateMachine> inline void Start(::ByRef<TStateMachine> stateMachine);

  /// @brief Method get_Task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<T> get_Task();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTaskBuilder_1();

  // Ctor Parameters [CppParam { name: "_pooledStateMachine", ty: "::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>*", modifiers: "", def_value: None }, CppParam { name: "_task", ty:
  // "::System::Nullable_1<::GlobalNamespace::OVRTask_1<T>>", modifiers: "", def_value: None }]
  constexpr OVRTaskBuilder_1(::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>* _pooledStateMachine, ::System::Nullable_1<::GlobalNamespace::OVRTask_1<T>> _task) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7841 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field _pooledStateMachine, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>* _pooledStateMachine;

  /// @brief Field _task, offset: 0x8, size: 0x14, def value: None
  ::System::Nullable_1<::GlobalNamespace::OVRTask_1<T>> _task;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine, "", "OVRTaskBuilder`1/PooledStateMachine");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1, "", "OVRTaskBuilder`1/PooledStateMachine`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRTaskBuilder_1, "", "OVRTaskBuilder`1");
