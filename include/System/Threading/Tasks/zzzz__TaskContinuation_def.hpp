#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskContinuation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskContinuation)
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskContinuation;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskContinuation);
// Dependencies System.Object
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.TaskContinuation
class CORDL_TYPE TaskContinuation : public ::System::Object {
public:
  // Declarations
  /// @brief Method InlineIfPossibleOrElseQueue, addr 0x3e6949c, size 0x140, virtual false, abstract: false, final false
  static inline void InlineIfPossibleOrElseQueue(::System::Threading::Tasks::Task* task, bool needsProtection);

  static inline ::System::Threading::Tasks::TaskContinuation* New_ctor();

  /// @brief Method Run, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Run(::System::Threading::Tasks::Task* completedTask, bool bCanInlineContinuationTask);

  /// @brief Method .ctor, addr 0x3e695dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskContinuation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskContinuation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskContinuation(TaskContinuation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskContinuation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskContinuation(TaskContinuation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2804 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskContinuation, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskContinuation*, "System.Threading.Tasks", "TaskContinuation");
