#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskFactory)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Threading::Tasks {
struct TaskContinuationOptions;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System::Threading::Tasks {
class TaskFactory_CompleteOnInvokePromise;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
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
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
class TaskFactory;
}
namespace System::Threading::Tasks {
class TaskFactory_CompleteOnInvokePromise;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskFactory);
MARK_REF_PTR_T(::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise);
// Dependencies System.Threading.Tasks.ITaskCompletionAction, System.Threading.Tasks.Task`1<TResult>
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise
class CORDL_TYPE TaskFactory_CompleteOnInvokePromise : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*> {
public:
  // Declarations
  __declspec(property(get = get_InvokeMayRunArbitraryCode)) bool InvokeMayRunArbitraryCode;

  /// @brief Field _tasks, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__tasks, put = __cordl_internal_set__tasks)) ::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* _tasks;

  /// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
  constexpr operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept;

  /// @brief Method Invoke, addr 0x3e6b8e0, size 0x22c, virtual true, abstract: false, final true
  inline void Invoke(::System::Threading::Tasks::Task* completingTask);

  static inline ::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise* New_ctor(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* tasks);

  constexpr ::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* const& __cordl_internal_get__tasks() const;

  constexpr ::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*& __cordl_internal_get__tasks();

  constexpr void __cordl_internal_set__tasks(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* value);

  /// @brief Method .ctor, addr 0x3e6b7cc, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* tasks);

  /// @brief Method get_InvokeMayRunArbitraryCode, addr 0x3e6bb0c, size 0x8, virtual true, abstract: false, final true
  inline bool get_InvokeMayRunArbitraryCode();

  /// @brief Convert to "::System::Threading::Tasks::ITaskCompletionAction"
  constexpr ::System::Threading::Tasks::ITaskCompletionAction* i___System__Threading__Tasks__ITaskCompletionAction() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskFactory_CompleteOnInvokePromise();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskFactory_CompleteOnInvokePromise", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskFactory_CompleteOnInvokePromise(TaskFactory_CompleteOnInvokePromise&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskFactory_CompleteOnInvokePromise", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskFactory_CompleteOnInvokePromise(TaskFactory_CompleteOnInvokePromise const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2812 };

  /// @brief Field _tasks, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* ____tasks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise, ____tasks) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise, 0x60>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Dependencies System.Object, System.Threading.CancellationToken, System.Threading.Tasks.TaskContinuationOptions, System.Threading.Tasks.TaskCreationOptions
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.TaskFactory
class CORDL_TYPE TaskFactory : public ::System::Object {
public:
  // Declarations
  using CompleteOnInvokePromise = ::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise;

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

  /// @brief Method CheckCreationOptions, addr 0x3e6b5f8, size 0x5c, virtual false, abstract: false, final false
  static inline void CheckCreationOptions(::System::Threading::Tasks::TaskCreationOptions creationOptions);

  /// @brief Method CheckFromAsyncOptions, addr 0x3e6b6e4, size 0xe8, virtual false, abstract: false, final false
  static inline void CheckFromAsyncOptions(::System::Threading::Tasks::TaskCreationOptions creationOptions, bool hasBeginMethod);

  /// @brief Method CheckMultiTaskContinuationOptions, addr 0x3e6b4fc, size 0xfc, virtual false, abstract: false, final false
  static inline void CheckMultiTaskContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions continuationOptions);

  /// @brief Method CommonCWAnyLogic, addr 0x3e683dc, size 0x238, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* CommonCWAnyLogic(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* tasks);

  /// @brief Method FromAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TArg1>
  inline ::System::Threading::Tasks::Task* FromAsync(::System::Func_4<TArg1, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                     ::System::Action_1<::System::IAsyncResult*>* endMethod, TArg1 arg1, ::System::Object* state);

  /// @brief Method FromAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TArg1>
  inline ::System::Threading::Tasks::Task* FromAsync(::System::Func_4<TArg1, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                     ::System::Action_1<::System::IAsyncResult*>* endMethod, TArg1 arg1, ::System::Object* state,
                                                     ::System::Threading::Tasks::TaskCreationOptions creationOptions);

  /// @brief Method FromAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TArg1, typename TArg2>
  inline ::System::Threading::Tasks::Task* FromAsync(::System::Func_5<TArg1, TArg2, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                     ::System::Action_1<::System::IAsyncResult*>* endMethod, TArg1 arg1, TArg2 arg2, ::System::Object* state);

  /// @brief Method FromAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TArg1, typename TArg2>
  inline ::System::Threading::Tasks::Task* FromAsync(::System::Func_5<TArg1, TArg2, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                     ::System::Action_1<::System::IAsyncResult*>* endMethod, TArg1 arg1, TArg2 arg2, ::System::Object* state,
                                                     ::System::Threading::Tasks::TaskCreationOptions creationOptions);

  static inline ::System::Threading::Tasks::TaskFactory* New_ctor();

  static inline ::System::Threading::Tasks::TaskFactory* New_ctor(::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                  ::System::Threading::Tasks::TaskContinuationOptions continuationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method StartNew, addr 0x3e6b654, size 0x90, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* StartNew(::System::Action_1<::System::Object*>* action, ::System::Object* state, ::System::Threading::CancellationToken cancellationToken,
                                                    ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method StartNew, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult>
  inline ::System::Threading::Tasks::Task_1<TResult>* StartNew(::System::Func_1<TResult>* function, ::System::Threading::CancellationToken cancellationToken,
                                                               ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method StartNew, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult>
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

  /// @brief Method .ctor, addr 0x3e69028, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e6b4ac, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                    ::System::Threading::Tasks::TaskContinuationOptions continuationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskFactory(TaskFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskFactory(TaskFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2813 };

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
static_assert(offsetof(::System::Threading::Tasks::TaskFactory, ___m_defaultCancellationToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::TaskFactory, ___m_defaultScheduler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::TaskFactory, ___m_defaultCreationOptions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::TaskFactory, ___m_defaultContinuationOptions) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskFactory, 0x28>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskFactory*, "System.Threading.Tasks", "TaskFactory");
NEED_NO_BOX(::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise*, "System.Threading.Tasks", "TaskFactory/CompleteOnInvokePromise");
