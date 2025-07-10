#pragma once
// IWYU pragma private; include "System/Threading/Tasks/CompletionActionInvoker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CompletionActionInvoker)
namespace System::Threading::Tasks {
class ITaskCompletionAction;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class ThreadAbortException;
}
// Forward declare root types
namespace System::Threading::Tasks {
class CompletionActionInvoker;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::CompletionActionInvoker);
// Dependencies System.Object, System.Threading.IThreadPoolWorkItem
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.CompletionActionInvoker
class CORDL_TYPE CompletionActionInvoker : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_action, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_action, put = __cordl_internal_set_m_action)) ::System::Threading::Tasks::ITaskCompletionAction* m_action;

  /// @brief Field m_completingTask, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_completingTask, put = __cordl_internal_set_m_completingTask)) ::System::Threading::Tasks::Task* m_completingTask;

  /// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
  constexpr operator ::System::Threading::IThreadPoolWorkItem*() noexcept;

  /// @brief Method MarkAborted, addr 0x3e69374, size 0x4, virtual true, abstract: false, final true
  inline void MarkAborted(::System::Threading::ThreadAbortException* e);

  static inline ::System::Threading::Tasks::CompletionActionInvoker* New_ctor(::System::Threading::Tasks::ITaskCompletionAction* action, ::System::Threading::Tasks::Task* completingTask);

  /// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem, addr 0x3e692cc, size 0xa8, virtual true, abstract: false, final true
  inline void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();

  constexpr ::System::Threading::Tasks::ITaskCompletionAction* const& __cordl_internal_get_m_action() const;

  constexpr ::System::Threading::Tasks::ITaskCompletionAction*& __cordl_internal_get_m_action();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_m_completingTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_m_completingTask();

  constexpr void __cordl_internal_set_m_action(::System::Threading::Tasks::ITaskCompletionAction* value);

  constexpr void __cordl_internal_set_m_completingTask(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x3e65b28, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::ITaskCompletionAction* action, ::System::Threading::Tasks::Task* completingTask);

  /// @brief Convert to "::System::Threading::IThreadPoolWorkItem"
  constexpr ::System::Threading::IThreadPoolWorkItem* i___System__Threading__IThreadPoolWorkItem() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompletionActionInvoker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompletionActionInvoker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompletionActionInvoker(CompletionActionInvoker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompletionActionInvoker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompletionActionInvoker(CompletionActionInvoker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2791 };

  /// @brief Field m_action, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::ITaskCompletionAction* ___m_action;

  /// @brief Field m_completingTask, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___m_completingTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::CompletionActionInvoker, ___m_action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::CompletionActionInvoker, ___m_completingTask) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::CompletionActionInvoker, 0x20>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::CompletionActionInvoker);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::CompletionActionInvoker*, "System.Threading.Tasks", "CompletionActionInvoker");
