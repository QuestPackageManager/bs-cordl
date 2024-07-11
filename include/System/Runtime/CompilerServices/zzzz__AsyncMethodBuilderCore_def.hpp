#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/AsyncMethodBuilderCore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncMethodBuilderCore)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
class __AsyncMethodBuilderCore__ContinuationWrapper;
}
namespace System::Runtime::CompilerServices {
class __AsyncMethodBuilderCore__MoveNextRunner;
}
namespace System::Runtime::CompilerServices {
class __AsyncMethodBuilderCore____c;
}
namespace System::Runtime::CompilerServices {
class __AsyncMethodBuilderCore____c__DisplayClass5_0;
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
class __AsyncMethodBuilderCore__ContinuationWrapper;
}
namespace System::Runtime::CompilerServices {
class __AsyncMethodBuilderCore__MoveNextRunner;
}
namespace System::Runtime::CompilerServices {
class __AsyncMethodBuilderCore____c;
}
namespace System::Runtime::CompilerServices {
class __AsyncMethodBuilderCore____c__DisplayClass5_0;
}
namespace System::Runtime::CompilerServices {
struct AsyncMethodBuilderCore;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper);
MARK_REF_PTR_T(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner);
MARK_REF_PTR_T(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c);
MARK_REF_PTR_T(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0);
MARK_VAL_T(::System::Runtime::CompilerServices::AsyncMethodBuilderCore);
// Type: ::MoveNextRunner
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::AsyncMethodBuilderCore::MoveNextRunner*
class CORDL_TYPE __AsyncMethodBuilderCore__MoveNextRunner : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_context, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_context, put = __cordl_internal_set_m_context))::System::Threading::ExecutionContext* m_context;

  /// @brief Field m_stateMachine, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_stateMachine, put = __cordl_internal_set_m_stateMachine))::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine;

  /// @brief Field s_invokeMoveNext, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_invokeMoveNext, put = setStaticF_s_invokeMoveNext))::System::Threading::ContextCallback* s_invokeMoveNext;

  /// @brief Method InvokeMoveNext, addr 0x288c388, size 0xe0, virtual false, abstract: false, final false
  static inline void InvokeMoveNext(::System::Object* stateMachine);

  static inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner* New_ctor(::System::Threading::ExecutionContext* context,
                                                                                                        ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Method Run, addr 0x288c17c, size 0x20c, virtual false, abstract: false, final false
  inline void Run();

  constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get_m_context();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> const& __cordl_internal_get_m_context() const;

  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*& __cordl_internal_get_m_stateMachine();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::CompilerServices::IAsyncStateMachine*> const& __cordl_internal_get_m_stateMachine() const;

  constexpr void __cordl_internal_set_m_context(::System::Threading::ExecutionContext* value);

  constexpr void __cordl_internal_set_m_stateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* value);

  /// @brief Method .ctor, addr 0x288bd48, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::ExecutionContext* context, ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  static inline ::System::Threading::ContextCallback* getStaticF_s_invokeMoveNext();

  static inline void setStaticF_s_invokeMoveNext(::System::Threading::ContextCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncMethodBuilderCore__MoveNextRunner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncMethodBuilderCore__MoveNextRunner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncMethodBuilderCore__MoveNextRunner(__AsyncMethodBuilderCore__MoveNextRunner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncMethodBuilderCore__MoveNextRunner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncMethodBuilderCore__MoveNextRunner(__AsyncMethodBuilderCore__MoveNextRunner const&) = delete;

  /// @brief Field m_context, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* ___m_context;

  /// @brief Field m_stateMachine, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::IAsyncStateMachine* ___m_stateMachine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner, ___m_context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner, ___m_stateMachine) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
// Type: ::ContinuationWrapper
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::AsyncMethodBuilderCore::ContinuationWrapper*
class CORDL_TYPE __AsyncMethodBuilderCore__ContinuationWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_continuation, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_continuation, put = __cordl_internal_set_m_continuation))::System::Action* m_continuation;

  /// @brief Field m_innerTask, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_innerTask, put = __cordl_internal_set_m_innerTask))::System::Threading::Tasks::Task* m_innerTask;

  /// @brief Field m_invokeAction, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_invokeAction, put = __cordl_internal_set_m_invokeAction))::System::Action* m_invokeAction;

  /// @brief Method Invoke, addr 0x288c468, size 0x24, virtual false, abstract: false, final false
  inline void Invoke();

  static inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper* New_ctor(::System::Action* continuation, ::System::Action* invokeAction,
                                                                                                             ::System::Threading::Tasks::Task* innerTask);

  constexpr ::System::Action*& __cordl_internal_get_m_continuation();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_m_continuation() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_m_innerTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get_m_innerTask() const;

  constexpr ::System::Action*& __cordl_internal_get_m_invokeAction();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_m_invokeAction() const;

  constexpr void __cordl_internal_set_m_continuation(::System::Action* value);

  constexpr void __cordl_internal_set_m_innerTask(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set_m_invokeAction(::System::Action* value);

  /// @brief Method .ctor, addr 0x288c09c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Action* continuation, ::System::Action* invokeAction, ::System::Threading::Tasks::Task* innerTask);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncMethodBuilderCore__ContinuationWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncMethodBuilderCore__ContinuationWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncMethodBuilderCore__ContinuationWrapper(__AsyncMethodBuilderCore__ContinuationWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncMethodBuilderCore__ContinuationWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncMethodBuilderCore__ContinuationWrapper(__AsyncMethodBuilderCore__ContinuationWrapper const&) = delete;

  /// @brief Field m_continuation, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___m_continuation;

  /// @brief Field m_invokeAction, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___m_invokeAction;

  /// @brief Field m_innerTask, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___m_innerTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper, ___m_continuation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper, ___m_invokeAction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper, ___m_innerTask) == 0x20, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::AsyncMethodBuilderCore::<>c__DisplayClass5_0*
class CORDL_TYPE __AsyncMethodBuilderCore____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field continuation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_continuation, put = __cordl_internal_set_continuation))::System::Action* continuation;

  /// @brief Field innerTask, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_innerTask, put = __cordl_internal_set_innerTask))::System::Threading::Tasks::Task* innerTask;

  static inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0* New_ctor();

  /// @brief Method <OutputAsyncCausalityEvents>b__0, addr 0x288c48c, size 0x5c, virtual false, abstract: false, final false
  inline void _OutputAsyncCausalityEvents_b__0();

  constexpr ::System::Action*& __cordl_internal_get_continuation();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_continuation() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_innerTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get_innerTask() const;

  constexpr void __cordl_internal_set_continuation(::System::Action* value);

  constexpr void __cordl_internal_set_innerTask(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x288be34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncMethodBuilderCore____c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncMethodBuilderCore____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncMethodBuilderCore____c__DisplayClass5_0(__AsyncMethodBuilderCore____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncMethodBuilderCore____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncMethodBuilderCore____c__DisplayClass5_0(__AsyncMethodBuilderCore____c__DisplayClass5_0 const&) = delete;

  /// @brief Field innerTask, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___innerTask;

  /// @brief Field continuation, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___continuation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0, ___innerTask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0, ___continuation) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::AsyncMethodBuilderCore::<>c*
class CORDL_TYPE __AsyncMethodBuilderCore____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0))::System::Threading::SendOrPostCallback* __9__7_0;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_1, put = setStaticF___9__7_1))::System::Threading::WaitCallback* __9__7_1;

  static inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c* New_ctor();

  /// @brief Method <ThrowAsync>b__7_0, addr 0x288c554, size 0x54, virtual false, abstract: false, final false
  inline void _ThrowAsync_b__7_0(::System::Object* state);

  /// @brief Method <ThrowAsync>b__7_1, addr 0x288c5a8, size 0x54, virtual false, abstract: false, final false
  inline void _ThrowAsync_b__7_1(::System::Object* state);

  /// @brief Method .ctor, addr 0x288c54c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c* getStaticF___9();

  static inline ::System::Threading::SendOrPostCallback* getStaticF___9__7_0();

  static inline ::System::Threading::WaitCallback* getStaticF___9__7_1();

  static inline void setStaticF___9(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c* value);

  static inline void setStaticF___9__7_0(::System::Threading::SendOrPostCallback* value);

  static inline void setStaticF___9__7_1(::System::Threading::WaitCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncMethodBuilderCore____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncMethodBuilderCore____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncMethodBuilderCore____c(__AsyncMethodBuilderCore____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncMethodBuilderCore____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncMethodBuilderCore____c(__AsyncMethodBuilderCore____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncMethodBuilderCore
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: ::System.Runtime.CompilerServices::AsyncMethodBuilderCore
struct CORDL_TYPE AsyncMethodBuilderCore {
public:
  // Declarations
  using ContinuationWrapper = ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper;

  using MoveNextRunner = ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner;

  using __c = ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c;

  using __c__DisplayClass5_0 = ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0;

  /// @brief Method CreateContinuationWrapper, addr 0x288be3c, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Action* CreateContinuationWrapper(::System::Action* continuation, ::System::Action* invokeAction, ::System::Threading::Tasks::Task* innerTask);

  /// @brief Method GetCompletionAction, addr 0x288bb7c, size 0x1cc, virtual false, abstract: false, final false
  inline ::System::Action* GetCompletionAction(::System::Threading::Tasks::Task* taskForTracing,
                                               ByRef<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*> runnerToInitialize);

  /// @brief Method OutputAsyncCausalityEvents, addr 0x288bd74, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Action* OutputAsyncCausalityEvents(::System::Threading::Tasks::Task* innerTask, ::System::Action* continuation);

  /// @brief Method PostBoxInitialization, addr 0x288befc, size 0x1a0, virtual false, abstract: false, final false
  inline void PostBoxInitialization(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine, ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner* runner,
                                    ::System::Threading::Tasks::Task* builtTask);

  /// @brief Method SetStateMachine, addr 0x288b30c, size 0xc8, virtual false, abstract: false, final false
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Method ThrowAsync, addr 0x288b674, size 0x2ec, virtual false, abstract: false, final false
  static inline void ThrowAsync(::System::Exception* exception, ::System::Threading::SynchronizationContext* targetContext);

  /// @brief Method TryGetContinuationTask, addr 0x288c0e8, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* TryGetContinuationTask(::System::Action* action);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncMethodBuilderCore();

  // Ctor Parameters [CppParam { name: "m_stateMachine", ty: "::System::Runtime::CompilerServices::IAsyncStateMachine*", modifiers: "", def_value: None }, CppParam { name: "m_defaultContextAction",
  // ty: "::System::Action*", modifiers: "", def_value: None }]
  constexpr AsyncMethodBuilderCore(::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine, ::System::Action* m_defaultContextAction) noexcept;

  /// @brief Field m_stateMachine, offset: 0x0, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine;

  /// @brief Field m_defaultContextAction, offset: 0x8, size: 0x8, def value: None
  ::System::Action* m_defaultContextAction;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncMethodBuilderCore, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::AsyncMethodBuilderCore, m_stateMachine) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::AsyncMethodBuilderCore, m_defaultContextAction) == 0x8, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper*, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/ContinuationWrapper");
NEED_NO_BOX(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/MoveNextRunner");
NEED_NO_BOX(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/<>c");
NEED_NO_BOX(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0*, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/<>c__DisplayClass5_0");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncMethodBuilderCore, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore");
