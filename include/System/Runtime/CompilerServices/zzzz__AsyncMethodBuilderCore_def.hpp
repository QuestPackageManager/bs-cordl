#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/AsyncMethodBuilderCore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncMethodBuilderCore)
namespace System::Runtime::CompilerServices {
class AsyncMethodBuilderCore_ContinuationWrapper;
}
namespace System::Runtime::CompilerServices {
class AsyncMethodBuilderCore_MoveNextRunner;
}
namespace System::Runtime::CompilerServices {
class AsyncMethodBuilderCore___c;
}
namespace System::Runtime::CompilerServices {
class AsyncMethodBuilderCore___c__DisplayClass5_0;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System::Threading {
class WaitCallback;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class AsyncMethodBuilderCore_ContinuationWrapper;
}
namespace System::Runtime::CompilerServices {
class AsyncMethodBuilderCore_MoveNextRunner;
}
namespace System::Runtime::CompilerServices {
class AsyncMethodBuilderCore___c;
}
namespace System::Runtime::CompilerServices {
class AsyncMethodBuilderCore___c__DisplayClass5_0;
}
namespace System::Runtime::CompilerServices {
struct AsyncMethodBuilderCore;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::AsyncMethodBuilderCore_ContinuationWrapper);
MARK_REF_PTR_T(::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner);
MARK_REF_PTR_T(::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c);
MARK_REF_PTR_T(::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c__DisplayClass5_0);
MARK_VAL_T(::System::Runtime::CompilerServices::AsyncMethodBuilderCore);
// Dependencies System.Object
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner
class CORDL_TYPE AsyncMethodBuilderCore_MoveNextRunner : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_context, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_context, put = __cordl_internal_set_m_context)) ::System::Threading::ExecutionContext* m_context;

  /// @brief Field m_stateMachine, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_stateMachine, put = __cordl_internal_set_m_stateMachine)) ::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine;

  /// @brief Field s_invokeMoveNext, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_invokeMoveNext, put = setStaticF_s_invokeMoveNext)) ::System::Threading::ContextCallback* s_invokeMoveNext;

  /// @brief Method InvokeMoveNext, addr 0x3d1ad54, size 0xe0, virtual false, abstract: false, final false
  static inline void InvokeMoveNext(::System::Object* stateMachine);

  static inline ::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner* New_ctor(::System::Threading::ExecutionContext* context,
                                                                                                     ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Method Run, addr 0x3d1ab54, size 0x200, virtual false, abstract: false, final false
  inline void Run();

  constexpr ::System::Threading::ExecutionContext* const& __cordl_internal_get_m_context() const;

  constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get_m_context();

  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* const& __cordl_internal_get_m_stateMachine() const;

  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*& __cordl_internal_get_m_stateMachine();

  constexpr void __cordl_internal_set_m_context(::System::Threading::ExecutionContext* value);

  constexpr void __cordl_internal_set_m_stateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* value);

  /// @brief Method .ctor, addr 0x3d1a730, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::ExecutionContext* context, ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  static inline ::System::Threading::ContextCallback* getStaticF_s_invokeMoveNext();

  static inline void setStaticF_s_invokeMoveNext(::System::Threading::ContextCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncMethodBuilderCore_MoveNextRunner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncMethodBuilderCore_MoveNextRunner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncMethodBuilderCore_MoveNextRunner(AsyncMethodBuilderCore_MoveNextRunner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncMethodBuilderCore_MoveNextRunner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncMethodBuilderCore_MoveNextRunner(AsyncMethodBuilderCore_MoveNextRunner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3404 };

  /// @brief Field m_context, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* ___m_context;

  /// @brief Field m_stateMachine, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::IAsyncStateMachine* ___m_stateMachine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner, ___m_context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner, ___m_stateMachine) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner, 0x20>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
// Dependencies System.Object
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper
class CORDL_TYPE AsyncMethodBuilderCore_ContinuationWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_continuation, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_continuation, put = __cordl_internal_set_m_continuation)) ::System::Action* m_continuation;

  /// @brief Field m_innerTask, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_innerTask, put = __cordl_internal_set_m_innerTask)) ::System::Threading::Tasks::Task* m_innerTask;

  /// @brief Field m_invokeAction, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_invokeAction, put = __cordl_internal_set_m_invokeAction)) ::System::Action* m_invokeAction;

  /// @brief Method Invoke, addr 0x3d1ae34, size 0x24, virtual false, abstract: false, final false
  inline void Invoke();

  static inline ::System::Runtime::CompilerServices::AsyncMethodBuilderCore_ContinuationWrapper* New_ctor(::System::Action* continuation, ::System::Action* invokeAction,
                                                                                                          ::System::Threading::Tasks::Task* innerTask);

  constexpr ::System::Action* const& __cordl_internal_get_m_continuation() const;

  constexpr ::System::Action*& __cordl_internal_get_m_continuation();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_m_innerTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_m_innerTask();

  constexpr ::System::Action* const& __cordl_internal_get_m_invokeAction() const;

  constexpr ::System::Action*& __cordl_internal_get_m_invokeAction();

  constexpr void __cordl_internal_set_m_continuation(::System::Action* value);

  constexpr void __cordl_internal_set_m_innerTask(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set_m_invokeAction(::System::Action* value);

  /// @brief Method .ctor, addr 0x3d1aa74, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Action* continuation, ::System::Action* invokeAction, ::System::Threading::Tasks::Task* innerTask);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncMethodBuilderCore_ContinuationWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncMethodBuilderCore_ContinuationWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncMethodBuilderCore_ContinuationWrapper(AsyncMethodBuilderCore_ContinuationWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncMethodBuilderCore_ContinuationWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncMethodBuilderCore_ContinuationWrapper(AsyncMethodBuilderCore_ContinuationWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3405 };

  /// @brief Field m_continuation, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___m_continuation;

  /// @brief Field m_invokeAction, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___m_invokeAction;

  /// @brief Field m_innerTask, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___m_innerTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::AsyncMethodBuilderCore_ContinuationWrapper, ___m_continuation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::AsyncMethodBuilderCore_ContinuationWrapper, ___m_invokeAction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::AsyncMethodBuilderCore_ContinuationWrapper, ___m_innerTask) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncMethodBuilderCore_ContinuationWrapper, 0x28>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
// Dependencies System.Object
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass5_0
class CORDL_TYPE AsyncMethodBuilderCore___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field continuation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_continuation, put = __cordl_internal_set_continuation)) ::System::Action* continuation;

  /// @brief Field innerTask, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_innerTask, put = __cordl_internal_set_innerTask)) ::System::Threading::Tasks::Task* innerTask;

  static inline ::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c__DisplayClass5_0* New_ctor();

  /// @brief Method <OutputAsyncCausalityEvents>b__0, addr 0x3d1ae58, size 0x5c, virtual false, abstract: false, final false
  inline void _OutputAsyncCausalityEvents_b__0();

  constexpr ::System::Action* const& __cordl_internal_get_continuation() const;

  constexpr ::System::Action*& __cordl_internal_get_continuation();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_innerTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_innerTask();

  constexpr void __cordl_internal_set_continuation(::System::Action* value);

  constexpr void __cordl_internal_set_innerTask(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x3d1a818, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncMethodBuilderCore___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncMethodBuilderCore___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncMethodBuilderCore___c__DisplayClass5_0(AsyncMethodBuilderCore___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncMethodBuilderCore___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncMethodBuilderCore___c__DisplayClass5_0(AsyncMethodBuilderCore___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3406 };

  /// @brief Field innerTask, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___innerTask;

  /// @brief Field continuation, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___continuation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c__DisplayClass5_0, ___innerTask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c__DisplayClass5_0, ___continuation) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c__DisplayClass5_0, 0x20>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
// Dependencies System.Object
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c
class CORDL_TYPE AsyncMethodBuilderCore___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Threading::SendOrPostCallback* __9__7_0;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_1, put = setStaticF___9__7_1)) ::System::Threading::WaitCallback* __9__7_1;

  static inline ::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c* New_ctor();

  /// @brief Method <ThrowAsync>b__7_0, addr 0x3d1af18, size 0x54, virtual false, abstract: false, final false
  inline void _ThrowAsync_b__7_0(::System::Object* state);

  /// @brief Method <ThrowAsync>b__7_1, addr 0x3d1af6c, size 0x54, virtual false, abstract: false, final false
  inline void _ThrowAsync_b__7_1(::System::Object* state);

  /// @brief Method .ctor, addr 0x3d1af10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c* getStaticF___9();

  static inline ::System::Threading::SendOrPostCallback* getStaticF___9__7_0();

  static inline ::System::Threading::WaitCallback* getStaticF___9__7_1();

  static inline void setStaticF___9(::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c* value);

  static inline void setStaticF___9__7_0(::System::Threading::SendOrPostCallback* value);

  static inline void setStaticF___9__7_1(::System::Threading::WaitCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncMethodBuilderCore___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncMethodBuilderCore___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncMethodBuilderCore___c(AsyncMethodBuilderCore___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncMethodBuilderCore___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncMethodBuilderCore___c(AsyncMethodBuilderCore___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3407 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
// Dependencies
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct CORDL_TYPE AsyncMethodBuilderCore {
public:
  // Declarations
  using ContinuationWrapper = ::System::Runtime::CompilerServices::AsyncMethodBuilderCore_ContinuationWrapper;

  using MoveNextRunner = ::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner;

  using __c = ::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c;

  using __c__DisplayClass5_0 = ::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c__DisplayClass5_0;

  /// @brief Method CreateContinuationWrapper, addr 0x3d1a820, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Action* CreateContinuationWrapper(::System::Action* continuation, ::System::Action* invokeAction, ::System::Threading::Tasks::Task* innerTask);

  /// @brief Method GetCompletionAction, addr 0x3d1a578, size 0x1b8, virtual false, abstract: false, final false
  inline ::System::Action* GetCompletionAction(::System::Threading::Tasks::Task* taskForTracing,
                                               ::ByRef<::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner*> runnerToInitialize);

  /// @brief Method OutputAsyncCausalityEvents, addr 0x3d1a75c, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Action* OutputAsyncCausalityEvents(::System::Threading::Tasks::Task* innerTask, ::System::Action* continuation);

  /// @brief Method PostBoxInitialization, addr 0x3d1a8dc, size 0x198, virtual false, abstract: false, final false
  inline void PostBoxInitialization(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine, ::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner* runner,
                                    ::System::Threading::Tasks::Task* builtTask);

  /// @brief Method SetStateMachine, addr 0x3d19d34, size 0xbc, virtual false, abstract: false, final false
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Method ThrowAsync, addr 0x3d1a084, size 0x2d8, virtual false, abstract: false, final false
  static inline void ThrowAsync(::System::Exception* exception, ::System::Threading::SynchronizationContext* targetContext);

  /// @brief Method TryGetContinuationTask, addr 0x3d1aac0, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* TryGetContinuationTask(::System::Action* action);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncMethodBuilderCore();

  // Ctor Parameters [CppParam { name: "m_stateMachine", ty: "::System::Runtime::CompilerServices::IAsyncStateMachine*", modifiers: "", def_value: None }, CppParam { name: "m_defaultContextAction",
  // ty: "::System::Action*", modifiers: "", def_value: None }]
  constexpr AsyncMethodBuilderCore(::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine, ::System::Action* m_defaultContextAction) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3408 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_stateMachine, offset: 0x0, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine;

  /// @brief Field m_defaultContextAction, offset: 0x8, size: 0x8, def value: None
  ::System::Action* m_defaultContextAction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::AsyncMethodBuilderCore, m_stateMachine) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::AsyncMethodBuilderCore, m_defaultContextAction) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncMethodBuilderCore, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::AsyncMethodBuilderCore_ContinuationWrapper);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncMethodBuilderCore_ContinuationWrapper*, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/ContinuationWrapper");
NEED_NO_BOX(::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner*, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/MoveNextRunner");
NEED_NO_BOX(::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c*, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/<>c");
NEED_NO_BOX(::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c__DisplayClass5_0*, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/<>c__DisplayClass5_0");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncMethodBuilderCore, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore");
