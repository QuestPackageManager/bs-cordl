#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskFactory_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskFactory_1)
namespace System::Threading::Tasks {
struct TaskContinuationOptions;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System::Threading::Tasks {
template <typename TResult, typename TInstance> class TaskFactory_1_FromAsyncTrimPromise_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskFactory_1___c__DisplayClass35_0;
}
namespace System::Threading::Tasks {
template <typename TResult, typename TArg1> class TaskFactory_1___c__DisplayClass38_0_1;
}
namespace System::Threading::Tasks {
template <typename TResult, typename TArg1, typename TArg2> class TaskFactory_1___c__DisplayClass41_0_2;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename TResult> class Func_5;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
template <typename TResult> class TaskFactory_1;
}
namespace System::Threading::Tasks {
template <typename TResult, typename TInstance> class TaskFactory_1_FromAsyncTrimPromise_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskFactory_1___c__DisplayClass35_0;
}
namespace System::Threading::Tasks {
template <typename TResult, typename TArg1> class TaskFactory_1___c__DisplayClass38_0_1;
}
namespace System::Threading::Tasks {
template <typename TResult, typename TArg1, typename TArg2> class TaskFactory_1___c__DisplayClass41_0_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::TaskFactory_1);
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1);
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0);
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1);
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2);
// Dependencies System.Threading.Tasks.Task`1<TResult>
namespace System::Threading::Tasks {
// cpp template
template <typename TResult, typename TInstance>
// Is value type: false
// CS Name: System.Threading.Tasks.TaskFactory`1/FromAsyncTrimPromise`1<TResult,TInstance>
class CORDL_TYPE TaskFactory_1_FromAsyncTrimPromise_1 : public ::System::Threading::Tasks::Task_1<TResult> {
public:
  // Declarations
  /// @brief Field m_endMethod, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_endMethod, put = __cordl_internal_set_m_endMethod)) ::System::Func_3<TInstance, ::System::IAsyncResult*, TResult>* m_endMethod;

  /// @brief Field m_thisRef, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_thisRef, put = __cordl_internal_set_m_thisRef)) TInstance m_thisRef;

  /// @brief Field s_completeFromAsyncResult, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_completeFromAsyncResult, put = setStaticF_s_completeFromAsyncResult)) ::System::AsyncCallback* s_completeFromAsyncResult;

  /// @brief Method Complete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Complete(TInstance thisRef, ::System::Func_3<TInstance, ::System::IAsyncResult*, TResult>* endMethod, ::System::IAsyncResult* asyncResult, bool requiresSynchronization);

  /// @brief Method CompleteFromAsyncResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void CompleteFromAsyncResult(::System::IAsyncResult* asyncResult);

  static inline ::System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult, TInstance>* New_ctor(TInstance thisRef,
                                                                                                               ::System::Func_3<TInstance, ::System::IAsyncResult*, TResult>* endMethod);

  constexpr ::System::Func_3<TInstance, ::System::IAsyncResult*, TResult>* const& __cordl_internal_get_m_endMethod() const;

  constexpr ::System::Func_3<TInstance, ::System::IAsyncResult*, TResult>*& __cordl_internal_get_m_endMethod();

  constexpr TInstance const& __cordl_internal_get_m_thisRef() const;

  constexpr TInstance& __cordl_internal_get_m_thisRef();

  constexpr void __cordl_internal_set_m_endMethod(::System::Func_3<TInstance, ::System::IAsyncResult*, TResult>* value);

  constexpr void __cordl_internal_set_m_thisRef(TInstance value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TInstance thisRef, ::System::Func_3<TInstance, ::System::IAsyncResult*, TResult>* endMethod);

  static inline ::System::AsyncCallback* getStaticF_s_completeFromAsyncResult();

  static inline void setStaticF_s_completeFromAsyncResult(::System::AsyncCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskFactory_1_FromAsyncTrimPromise_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1_FromAsyncTrimPromise_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskFactory_1_FromAsyncTrimPromise_1(TaskFactory_1_FromAsyncTrimPromise_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1_FromAsyncTrimPromise_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskFactory_1_FromAsyncTrimPromise_1(TaskFactory_1_FromAsyncTrimPromise_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2778 };

  /// @brief Field m_thisRef, offset: 0x58, size: 0x8, def value: None
  TInstance ___m_thisRef;

  /// @brief Field m_endMethod, offset: 0x60, size: 0x8, def value: None
  ::System::Func_3<TInstance, ::System::IAsyncResult*, TResult>* ___m_endMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
// Dependencies System.Object
namespace System::Threading::Tasks {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_0<TResult>
class CORDL_TYPE TaskFactory_1___c__DisplayClass35_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field endAction, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_endAction, put = __cordl_internal_set_endAction)) ::System::Action_1<::System::IAsyncResult*>* endAction;

  /// @brief Field endFunction, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_endFunction, put = __cordl_internal_set_endFunction)) ::System::Func_2<::System::IAsyncResult*, TResult>* endFunction;

  /// @brief Field promise, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_promise, put = __cordl_internal_set_promise)) ::System::Threading::Tasks::Task_1<TResult>* promise;

  static inline ::System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>* New_ctor();

  /// @brief Method <FromAsyncImpl>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromAsyncImpl_b__0(::System::IAsyncResult* iar);

  constexpr ::System::Action_1<::System::IAsyncResult*>* const& __cordl_internal_get_endAction() const;

  constexpr ::System::Action_1<::System::IAsyncResult*>*& __cordl_internal_get_endAction();

  constexpr ::System::Func_2<::System::IAsyncResult*, TResult>* const& __cordl_internal_get_endFunction() const;

  constexpr ::System::Func_2<::System::IAsyncResult*, TResult>*& __cordl_internal_get_endFunction();

  constexpr ::System::Threading::Tasks::Task_1<TResult>* const& __cordl_internal_get_promise() const;

  constexpr ::System::Threading::Tasks::Task_1<TResult>*& __cordl_internal_get_promise();

  constexpr void __cordl_internal_set_endAction(::System::Action_1<::System::IAsyncResult*>* value);

  constexpr void __cordl_internal_set_endFunction(::System::Func_2<::System::IAsyncResult*, TResult>* value);

  constexpr void __cordl_internal_set_promise(::System::Threading::Tasks::Task_1<TResult>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskFactory_1___c__DisplayClass35_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1___c__DisplayClass35_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskFactory_1___c__DisplayClass35_0(TaskFactory_1___c__DisplayClass35_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1___c__DisplayClass35_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskFactory_1___c__DisplayClass35_0(TaskFactory_1___c__DisplayClass35_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2779 };

  /// @brief Field endFunction, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::System::IAsyncResult*, TResult>* ___endFunction;

  /// @brief Field endAction, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::System::IAsyncResult*>* ___endAction;

  /// @brief Field promise, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<TResult>* ___promise;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
// Dependencies System.Object
namespace System::Threading::Tasks {
// cpp template
template <typename TResult, typename TArg1>
// Is value type: false
// CS Name: System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass38_0`1<TResult,TArg1>
class CORDL_TYPE TaskFactory_1___c__DisplayClass38_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field endAction, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_endAction, put = __cordl_internal_set_endAction)) ::System::Action_1<::System::IAsyncResult*>* endAction;

  /// @brief Field endFunction, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_endFunction, put = __cordl_internal_set_endFunction)) ::System::Func_2<::System::IAsyncResult*, TResult>* endFunction;

  /// @brief Field promise, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_promise, put = __cordl_internal_set_promise)) ::System::Threading::Tasks::Task_1<TResult>* promise;

  static inline ::System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult, TArg1>* New_ctor();

  /// @brief Method <FromAsyncImpl>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromAsyncImpl_b__0(::System::IAsyncResult* iar);

  constexpr ::System::Action_1<::System::IAsyncResult*>* const& __cordl_internal_get_endAction() const;

  constexpr ::System::Action_1<::System::IAsyncResult*>*& __cordl_internal_get_endAction();

  constexpr ::System::Func_2<::System::IAsyncResult*, TResult>* const& __cordl_internal_get_endFunction() const;

  constexpr ::System::Func_2<::System::IAsyncResult*, TResult>*& __cordl_internal_get_endFunction();

  constexpr ::System::Threading::Tasks::Task_1<TResult>* const& __cordl_internal_get_promise() const;

  constexpr ::System::Threading::Tasks::Task_1<TResult>*& __cordl_internal_get_promise();

  constexpr void __cordl_internal_set_endAction(::System::Action_1<::System::IAsyncResult*>* value);

  constexpr void __cordl_internal_set_endFunction(::System::Func_2<::System::IAsyncResult*, TResult>* value);

  constexpr void __cordl_internal_set_promise(::System::Threading::Tasks::Task_1<TResult>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskFactory_1___c__DisplayClass38_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1___c__DisplayClass38_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskFactory_1___c__DisplayClass38_0_1(TaskFactory_1___c__DisplayClass38_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1___c__DisplayClass38_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskFactory_1___c__DisplayClass38_0_1(TaskFactory_1___c__DisplayClass38_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2780 };

  /// @brief Field endFunction, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::System::IAsyncResult*, TResult>* ___endFunction;

  /// @brief Field endAction, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::System::IAsyncResult*>* ___endAction;

  /// @brief Field promise, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<TResult>* ___promise;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
// Dependencies System.Object
namespace System::Threading::Tasks {
// cpp template
template <typename TResult, typename TArg1, typename TArg2>
// Is value type: false
// CS Name: System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass41_0`2<TResult,TArg1,TArg2>
class CORDL_TYPE TaskFactory_1___c__DisplayClass41_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field endAction, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_endAction, put = __cordl_internal_set_endAction)) ::System::Action_1<::System::IAsyncResult*>* endAction;

  /// @brief Field endFunction, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_endFunction, put = __cordl_internal_set_endFunction)) ::System::Func_2<::System::IAsyncResult*, TResult>* endFunction;

  /// @brief Field promise, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_promise, put = __cordl_internal_set_promise)) ::System::Threading::Tasks::Task_1<TResult>* promise;

  static inline ::System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult, TArg1, TArg2>* New_ctor();

  /// @brief Method <FromAsyncImpl>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromAsyncImpl_b__0(::System::IAsyncResult* iar);

  constexpr ::System::Action_1<::System::IAsyncResult*>* const& __cordl_internal_get_endAction() const;

  constexpr ::System::Action_1<::System::IAsyncResult*>*& __cordl_internal_get_endAction();

  constexpr ::System::Func_2<::System::IAsyncResult*, TResult>* const& __cordl_internal_get_endFunction() const;

  constexpr ::System::Func_2<::System::IAsyncResult*, TResult>*& __cordl_internal_get_endFunction();

  constexpr ::System::Threading::Tasks::Task_1<TResult>* const& __cordl_internal_get_promise() const;

  constexpr ::System::Threading::Tasks::Task_1<TResult>*& __cordl_internal_get_promise();

  constexpr void __cordl_internal_set_endAction(::System::Action_1<::System::IAsyncResult*>* value);

  constexpr void __cordl_internal_set_endFunction(::System::Func_2<::System::IAsyncResult*, TResult>* value);

  constexpr void __cordl_internal_set_promise(::System::Threading::Tasks::Task_1<TResult>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskFactory_1___c__DisplayClass41_0_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1___c__DisplayClass41_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskFactory_1___c__DisplayClass41_0_2(TaskFactory_1___c__DisplayClass41_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1___c__DisplayClass41_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskFactory_1___c__DisplayClass41_0_2(TaskFactory_1___c__DisplayClass41_0_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2781 };

  /// @brief Field endFunction, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::System::IAsyncResult*, TResult>* ___endFunction;

  /// @brief Field endAction, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::System::IAsyncResult*>* ___endAction;

  /// @brief Field promise, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<TResult>* ___promise;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
// Dependencies System.Object, System.Threading.CancellationToken, System.Threading.Tasks.TaskContinuationOptions, System.Threading.Tasks.TaskCreationOptions
namespace System::Threading::Tasks {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: System.Threading.Tasks.TaskFactory`1<TResult>
class CORDL_TYPE TaskFactory_1 : public ::System::Object {
public:
  // Declarations
  template <typename TInstance> using FromAsyncTrimPromise_1 = ::System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1<TResult, TInstance>;

  using __c__DisplayClass35_0 = ::System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>;

  template <typename TArg1> using __c__DisplayClass38_0_1 = ::System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult, TArg1>;

  template <typename TArg1, typename TArg2> using __c__DisplayClass41_0_2 = ::System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult, TArg1, TArg2>;

  /// @brief Field m_defaultCancellationToken, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultCancellationToken, put = __cordl_internal_set_m_defaultCancellationToken)) ::System::Threading::CancellationToken m_defaultCancellationToken;

  /// @brief Field m_defaultContinuationOptions, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_defaultContinuationOptions,
                      put = __cordl_internal_set_m_defaultContinuationOptions)) ::System::Threading::Tasks::TaskContinuationOptions m_defaultContinuationOptions;

  /// @brief Field m_defaultCreationOptions, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_defaultCreationOptions,
                      put = __cordl_internal_set_m_defaultCreationOptions)) ::System::Threading::Tasks::TaskCreationOptions m_defaultCreationOptions;

  /// @brief Field m_defaultScheduler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultScheduler, put = __cordl_internal_set_m_defaultScheduler)) ::System::Threading::Tasks::TaskScheduler* m_defaultScheduler;

  /// @brief Method FromAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<TResult>* FromAsync(::System::Func_3<::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                                ::System::Func_2<::System::IAsyncResult*, TResult>* endMethod, ::System::Object* state);

  /// @brief Method FromAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TArg1>
  inline ::System::Threading::Tasks::Task_1<TResult>* FromAsync(::System::Func_4<TArg1, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                                ::System::Func_2<::System::IAsyncResult*, TResult>* endMethod, TArg1 arg1, ::System::Object* state);

  /// @brief Method FromAsyncCoreLogic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void FromAsyncCoreLogic(::System::IAsyncResult* iar, ::System::Func_2<::System::IAsyncResult*, TResult>* endFunction, ::System::Action_1<::System::IAsyncResult*>* endAction,
                                        ::System::Threading::Tasks::Task_1<TResult>* promise, bool requiresSynchronization);

  /// @brief Method FromAsyncImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<TResult>* FromAsyncImpl(::System::Func_3<::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                                           ::System::Func_2<::System::IAsyncResult*, TResult>* endFunction, ::System::Action_1<::System::IAsyncResult*>* endAction,
                                                                           ::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions);

  /// @brief Method FromAsyncImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TArg1>
  static inline ::System::Threading::Tasks::Task_1<TResult>* FromAsyncImpl(::System::Func_4<TArg1, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                                           ::System::Func_2<::System::IAsyncResult*, TResult>* endFunction, ::System::Action_1<::System::IAsyncResult*>* endAction,
                                                                           TArg1 arg1, ::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions);

  /// @brief Method FromAsyncImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TArg1, typename TArg2>
  static inline ::System::Threading::Tasks::Task_1<TResult>* FromAsyncImpl(::System::Func_5<TArg1, TArg2, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                                           ::System::Func_2<::System::IAsyncResult*, TResult>* endFunction, ::System::Action_1<::System::IAsyncResult*>* endAction,
                                                                           TArg1 arg1, TArg2 arg2, ::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions);

  /// @brief Method FromAsyncTrim, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstance, typename TArgs>
  static inline ::System::Threading::Tasks::Task_1<TResult>* FromAsyncTrim(TInstance thisRef, TArgs args,
                                                                           ::System::Func_5<TInstance, TArgs, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                                           ::System::Func_3<TInstance, ::System::IAsyncResult*, TResult>* endMethod);

  static inline ::System::Threading::Tasks::TaskFactory_1<TResult>* New_ctor();

  static inline ::System::Threading::Tasks::TaskFactory_1<TResult>* New_ctor(::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                             ::System::Threading::Tasks::TaskContinuationOptions continuationOptions,
                                                                             ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method StartNew, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<TResult>* StartNew(::System::Func_2<::System::Object*, TResult>* function, ::System::Object* state,
                                                               ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                               ::System::Threading::Tasks::TaskScheduler* scheduler);

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_m_defaultCancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_m_defaultCancellationToken();

  constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __cordl_internal_get_m_defaultContinuationOptions() const;

  constexpr ::System::Threading::Tasks::TaskContinuationOptions& __cordl_internal_get_m_defaultContinuationOptions();

  constexpr ::System::Threading::Tasks::TaskCreationOptions const& __cordl_internal_get_m_defaultCreationOptions() const;

  constexpr ::System::Threading::Tasks::TaskCreationOptions& __cordl_internal_get_m_defaultCreationOptions();

  constexpr ::System::Threading::Tasks::TaskScheduler* const& __cordl_internal_get_m_defaultScheduler() const;

  constexpr ::System::Threading::Tasks::TaskScheduler*& __cordl_internal_get_m_defaultScheduler();

  constexpr void __cordl_internal_set_m_defaultCancellationToken(::System::Threading::CancellationToken value);

  constexpr void __cordl_internal_set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions value);

  constexpr void __cordl_internal_set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions value);

  constexpr void __cordl_internal_set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                    ::System::Threading::Tasks::TaskContinuationOptions continuationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskFactory_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskFactory_1(TaskFactory_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskFactory_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskFactory_1(TaskFactory_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2782 };

  /// @brief Field m_defaultCancellationToken, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___m_defaultCancellationToken;

  /// @brief Field m_defaultScheduler, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskScheduler* ___m_defaultScheduler;

  /// @brief Field m_defaultCreationOptions, offset: 0x20, size: 0x4, def value: None
  ::System::Threading::Tasks::TaskCreationOptions ___m_defaultCreationOptions;

  /// @brief Field m_defaultContinuationOptions, offset: 0x24, size: 0x4, def value: None
  ::System::Threading::Tasks::TaskContinuationOptions ___m_defaultContinuationOptions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::TaskFactory_1, "System.Threading.Tasks", "TaskFactory`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::TaskFactory_1_FromAsyncTrimPromise_1, "System.Threading.Tasks", "TaskFactory`1/FromAsyncTrimPromise`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0, "System.Threading.Tasks", "TaskFactory`1/<>c__DisplayClass35_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1, "System.Threading.Tasks", "TaskFactory`1/<>c__DisplayClass38_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2, "System.Threading.Tasks", "TaskFactory`1/<>c__DisplayClass41_0`2");
