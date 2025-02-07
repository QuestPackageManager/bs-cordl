#pragma once
// IWYU pragma private; include "System/Threading/Tasks/AwaitTaskContinuation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__TaskContinuation_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
CORDL_MODULE_EXPORT(AwaitTaskContinuation)
namespace System::Threading::Tasks {
class TaskScheduler;
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
class ThreadAbortException;
}
namespace System {
template <typename T> class Action_1;
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
namespace System::Threading::Tasks {
class AwaitTaskContinuation;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::AwaitTaskContinuation);
// Dependencies System.Threading.IThreadPoolWorkItem, System.Threading.Tasks.TaskContinuation
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.AwaitTaskContinuation
class CORDL_TYPE AwaitTaskContinuation : public ::System::Threading::Tasks::TaskContinuation {
public:
  // Declarations
  /// @brief Field m_action, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_action, put = __cordl_internal_set_m_action)) ::System::Action* m_action;

  /// @brief Field m_capturedContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_capturedContext, put = __cordl_internal_set_m_capturedContext)) ::System::Threading::ExecutionContext* m_capturedContext;

  /// @brief Field s_invokeActionCallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_invokeActionCallback, put = setStaticF_s_invokeActionCallback)) ::System::Threading::ContextCallback* s_invokeActionCallback;

  /// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
  constexpr operator ::System::Threading::IThreadPoolWorkItem*() noexcept;

  /// @brief Method CreateTask, addr 0x3e6eb70, size 0x88, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CreateTask(::System::Action_1<::System::Object*>* action, ::System::Object* state, ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method GetInvokeActionCallback, addr 0x3e6f068, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Threading::ContextCallback* GetInvokeActionCallback();

  /// @brief Method InvokeAction, addr 0x3e6effc, size 0x6c, virtual false, abstract: false, final false
  static inline void InvokeAction(::System::Object* state);

  /// @brief Method MarkAborted, addr 0x3e6f108, size 0x4, virtual true, abstract: false, final true
  inline void MarkAborted(::System::Threading::ThreadAbortException* e);

  static inline ::System::Threading::Tasks::AwaitTaskContinuation* New_ctor(::System::Action* action, bool flowExecutionContext);

  /// @brief Method Run, addr 0x3e6ea5c, size 0x114, virtual true, abstract: false, final false
  inline void Run(::System::Threading::Tasks::Task* ignored, bool canInlineContinuationTask);

  /// @brief Method RunCallback, addr 0x3e6e3c4, size 0x174, virtual false, abstract: false, final false
  inline void RunCallback(::System::Threading::ContextCallback* callback, ::System::Object* state, ::ByRef<::System::Threading::Tasks::Task*> currentTask);

  /// @brief Method RunOrScheduleAction, addr 0x3e6a438, size 0x15c, virtual false, abstract: false, final false
  static inline void RunOrScheduleAction(::System::Action* action, bool allowInlining, ::ByRef<::System::Threading::Tasks::Task*> currentTask);

  /// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem, addr 0x3e6eed8, size 0x124, virtual true, abstract: false, final true
  inline void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();

  /// @brief Method ThrowAsyncIfNecessary, addr 0x3e6ed4c, size 0x58, virtual false, abstract: false, final false
  static inline void ThrowAsyncIfNecessary(::System::Exception* exc);

  /// @brief Method UnsafeScheduleAction, addr 0x3e694c8, size 0x84, virtual false, abstract: false, final false
  static inline void UnsafeScheduleAction(::System::Action* action);

  constexpr ::System::Action* const& __cordl_internal_get_m_action() const;

  constexpr ::System::Action*& __cordl_internal_get_m_action();

  constexpr ::System::Threading::ExecutionContext* const& __cordl_internal_get_m_capturedContext() const;

  constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get_m_capturedContext();

  constexpr void __cordl_internal_set_m_action(::System::Action* value);

  constexpr void __cordl_internal_set_m_capturedContext(::System::Threading::ExecutionContext* value);

  /// @brief Method .ctor, addr 0x3e6e1e0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Action* action, bool flowExecutionContext);

  static inline ::System::Threading::ContextCallback* getStaticF_s_invokeActionCallback();

  /// @brief Method get_IsValidLocationForInlining, addr 0x3e6eda4, size 0x134, virtual false, abstract: false, final false
  static inline bool get_IsValidLocationForInlining();

  /// @brief Convert to "::System::Threading::IThreadPoolWorkItem"
  constexpr ::System::Threading::IThreadPoolWorkItem* i___System__Threading__IThreadPoolWorkItem() noexcept;

  static inline void setStaticF_s_invokeActionCallback(::System::Threading::ContextCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AwaitTaskContinuation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AwaitTaskContinuation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AwaitTaskContinuation(AwaitTaskContinuation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AwaitTaskContinuation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AwaitTaskContinuation(AwaitTaskContinuation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2810 };

  /// @brief Field m_capturedContext, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* ___m_capturedContext;

  /// @brief Field m_action, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___m_action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::AwaitTaskContinuation, ___m_capturedContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::AwaitTaskContinuation, ___m_action) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::AwaitTaskContinuation, 0x20>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::AwaitTaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::AwaitTaskContinuation*, "System.Threading.Tasks", "AwaitTaskContinuation");
