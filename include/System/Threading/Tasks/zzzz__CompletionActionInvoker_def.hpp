#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CompletionActionInvoker)
namespace System::Threading {
class IThreadPoolWorkItem;
}
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
// Type: System.Threading.Tasks::CompletionActionInvoker
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2784))
// CS Name: ::System.Threading.Tasks::CompletionActionInvoker*
class CORDL_TYPE CompletionActionInvoker : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_action, offset 0x10, size 0x8
  __declspec(property(get = __get_m_action, put = __set_m_action))::System::Threading::Tasks::ITaskCompletionAction* m_action;

  /// @brief Field m_completingTask, offset 0x18, size 0x8
  __declspec(property(get = __get_m_completingTask, put = __set_m_completingTask))::System::Threading::Tasks::Task* m_completingTask;

  /// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
  constexpr operator ::System::Threading::IThreadPoolWorkItem*() noexcept;

  constexpr ::System::Threading::Tasks::ITaskCompletionAction*& __get_m_action();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::ITaskCompletionAction*> const& __get_m_action() const;

  constexpr void __set_m_action(::System::Threading::Tasks::ITaskCompletionAction* value);

  constexpr ::System::Threading::Tasks::Task*& __get_m_completingTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __get_m_completingTask() const;

  constexpr void __set_m_completingTask(::System::Threading::Tasks::Task* value);

  static inline ::System::Threading::Tasks::CompletionActionInvoker* New_ctor(::System::Threading::Tasks::ITaskCompletionAction* action, ::System::Threading::Tasks::Task* completingTask);

  /// @brief Method .ctor addr 0x24cdae8 size 0x2c virtual false final false
  inline void _ctor(::System::Threading::Tasks::ITaskCompletionAction* action, ::System::Threading::Tasks::Task* completingTask);

  /// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem addr 0x24d11e4 size 0xa8 virtual true final true
  inline void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();

  /// @brief Method MarkAborted addr 0x24d128c size 0x4 virtual true final true
  inline void MarkAborted(::System::Threading::ThreadAbortException* e);

  // Ctor Parameters [CppParam { name: "", ty: "CompletionActionInvoker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompletionActionInvoker(CompletionActionInvoker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompletionActionInvoker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompletionActionInvoker(CompletionActionInvoker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompletionActionInvoker();

public:
  /// @brief Field m_action, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::ITaskCompletionAction* ___m_action;

  /// @brief Field m_completingTask, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___m_completingTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::CompletionActionInvoker, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Tasks::CompletionActionInvoker, ___m_action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::CompletionActionInvoker, ___m_completingTask) == 0x18, "Offset mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::CompletionActionInvoker);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::CompletionActionInvoker*, "System.Threading.Tasks", "CompletionActionInvoker");
