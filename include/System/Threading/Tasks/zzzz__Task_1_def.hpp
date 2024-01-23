#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Task_1)
namespace GlobalNamespace {
template <typename TResult> class __Task_1__TaskWhenAnyCast____c;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct ConfiguredTaskAwaitable_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
namespace System::Threading::Tasks {
struct TaskContinuationOptions;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskFactory_1;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template <typename TResult> class __Task_1__TaskWhenAnyCast;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Delegate;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TResult> class __Task_1__TaskWhenAnyCast____c;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class __Task_1__TaskWhenAnyCast;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__Task_1__TaskWhenAnyCast____c);
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::Task_1);
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::__Task_1__TaskWhenAnyCast);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TResult>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2771))
// CS Name: ::Task`1::TaskWhenAnyCast::<>c<TResult>*
class CORDL_TYPE __Task_1__TaskWhenAnyCast____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>* __9;

  static inline void setStaticF___9(::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>* value);

  static inline ::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>* getStaticF___9();

  static inline ::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <.cctor>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<TResult>* __cctor_b__1_0(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* completed);

  // Ctor Parameters [CppParam { name: "", ty: "__Task_1__TaskWhenAnyCast____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Task_1__TaskWhenAnyCast____c(__Task_1__TaskWhenAnyCast____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Task_1__TaskWhenAnyCast____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Task_1__TaskWhenAnyCast____c(__Task_1__TaskWhenAnyCast____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Task_1__TaskWhenAnyCast____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::TaskWhenAnyCast
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// cpp template
template <typename TResult>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2772))
// CS Name: ::Task`1::TaskWhenAnyCast<TResult>*
class CORDL_TYPE __Task_1__TaskWhenAnyCast : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>;

  /// @brief Field Value, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Value,
                             put = setStaticF_Value))::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>* Value;

  static inline void setStaticF_Value(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>* value);

  static inline ::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>* getStaticF_Value();

  // Ctor Parameters [CppParam { name: "", ty: "__Task_1__TaskWhenAnyCast", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Task_1__TaskWhenAnyCast(__Task_1__TaskWhenAnyCast&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Task_1__TaskWhenAnyCast", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Task_1__TaskWhenAnyCast(__Task_1__TaskWhenAnyCast const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Task_1__TaskWhenAnyCast();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
// SizeInfo { instance_size: 88, native_size: 88, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// cpp template
template <typename TResult>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2787))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2773))
// CS Name: ::System.Threading.Tasks::Task`1<TResult>*
class CORDL_TYPE Task_1 : public ::System::Threading::Tasks::Task {
public:
  // Declarations
  using TaskWhenAnyCast = ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<TResult>;

  /// @brief Field m_result, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_result, put = __cordl_internal_set_m_result)) TResult m_result;

  /// @brief Field s_defaultFactory, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_defaultFactory, put = setStaticF_s_defaultFactory))::System::Threading::Tasks::TaskFactory_1<TResult>* s_defaultFactory;

  __declspec(property(get = get_Result)) TResult Result;

  __declspec(property(get = get_ResultOnSuccess)) TResult ResultOnSuccess;

  constexpr TResult& __cordl_internal_get_m_result();

  constexpr TResult const& __cordl_internal_get_m_result() const;

  constexpr void __cordl_internal_set_m_result(TResult value);

  static inline void setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<TResult>* value);

  static inline ::System::Threading::Tasks::TaskFactory_1<TResult>* getStaticF_s_defaultFactory();

  static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions options);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions options);

  static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(TResult result);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TResult result);

  static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(bool canceled, TResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                      ::System::Threading::CancellationToken ct);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(bool canceled, TResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct);

  static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(::System::Func_2<::System::Object*, TResult>* function, ::System::Object* state,
                                                                      ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_2<::System::Object*, TResult>* function, ::System::Object* state, ::System::Threading::CancellationToken cancellationToken,
                    ::System::Threading::Tasks::TaskCreationOptions creationOptions);

  static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(::System::Func_1<TResult>* valueSelector, ::System::Threading::Tasks::Task* parent,
                                                                      ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                      ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<TResult>* valueSelector, ::System::Threading::Tasks::Task* parent, ::System::Threading::CancellationToken cancellationToken,
                    ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions,
                    ::System::Threading::Tasks::TaskScheduler* scheduler);

  static inline ::System::Threading::Tasks::Task_1<TResult>* New_ctor(::System::Delegate* valueSelector, ::System::Object* state, ::System::Threading::Tasks::Task* parent,
                                                                      ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                      ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Delegate* valueSelector, ::System::Object* state, ::System::Threading::Tasks::Task* parent, ::System::Threading::CancellationToken cancellationToken,
                    ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions,
                    ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method StartNew, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<TResult>* StartNew(::System::Threading::Tasks::Task* parent, ::System::Func_1<TResult>* function,
                                                                      ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                      ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method StartNew, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<TResult>* StartNew(::System::Threading::Tasks::Task* parent, ::System::Func_2<::System::Object*, TResult>* function, ::System::Object* state,
                                                                      ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                      ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method TrySetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TrySetResult(TResult result);

  /// @brief Method DangerousSetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void DangerousSetResult(TResult result);

  /// @brief Method get_Result, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TResult get_Result();

  /// @brief Method get_ResultOnSuccess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TResult get_ResultOnSuccess();

  /// @brief Method GetResultCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TResult GetResultCore(bool waitCompletionNotification);

  /// @brief Method get_Factory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::TaskFactory_1<TResult>* get_Factory();

  /// @brief Method InnerInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InnerInvoke();

  /// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::TaskAwaiter_1<TResult> GetAwaiter();

  /// @brief Method ConfigureAwait, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult> ConfigureAwait(bool continueOnCapturedContext);

  /// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>* continuationAction, ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>* continuationAction, ::System::Threading::Tasks::TaskScheduler* scheduler,
                                                        ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions);

  /// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TNewResult> inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>* continuationFunction);

  /// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TNewResult>
  inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>* continuationFunction,
                                                                      ::System::Threading::Tasks::TaskContinuationOptions continuationOptions);

  /// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TNewResult>
  inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>* continuationFunction,
                                                                      ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions,
                                                                      ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TNewResult>
  inline ::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>* continuationFunction,
                                                                      ::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Threading::CancellationToken cancellationToken,
                                                                      ::System::Threading::Tasks::TaskContinuationOptions continuationOptions);

  // Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Task_1(Task_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Task_1(Task_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Task_1();

public:
  /// @brief Field m_result, offset: 0x50, size: 0x8, def value: None
  TResult ___m_result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__Task_1__TaskWhenAnyCast____c, "System.Threading.Tasks", "Task`1/TaskWhenAnyCast/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::Task_1, "System.Threading.Tasks", "Task`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::__Task_1__TaskWhenAnyCast, "System.Threading.Tasks", "Task`1/TaskWhenAnyCast");
