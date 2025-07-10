#pragma once
// IWYU pragma private; include "System/Threading/Tasks/ContinuationTaskFromTask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
CORDL_MODULE_EXPORT(ContinuationTaskFromTask)
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Delegate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
class ContinuationTaskFromTask;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::ContinuationTaskFromTask);
// Dependencies System.Threading.Tasks.Task
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.ContinuationTaskFromTask
class CORDL_TYPE ContinuationTaskFromTask : public ::System::Threading::Tasks::Task {
public:
  // Declarations
  /// @brief Field m_antecedent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_antecedent, put = __cordl_internal_set_m_antecedent)) ::System::Threading::Tasks::Task* m_antecedent;

  /// @brief Method InnerInvoke, addr 0x3e693cc, size 0xd0, virtual true, abstract: false, final false
  inline void InnerInvoke();

  static inline ::System::Threading::Tasks::ContinuationTaskFromTask* New_ctor(::System::Threading::Tasks::Task* antecedent, ::System::Delegate* action, ::System::Object* state,
                                                                               ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                               ::System::Threading::Tasks::InternalTaskOptions internalOptions);

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_m_antecedent() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_m_antecedent();

  constexpr void __cordl_internal_set_m_antecedent(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x3e65f30, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task* antecedent, ::System::Delegate* action, ::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                    ::System::Threading::Tasks::InternalTaskOptions internalOptions);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContinuationTaskFromTask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromTask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContinuationTaskFromTask(ContinuationTaskFromTask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromTask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContinuationTaskFromTask(ContinuationTaskFromTask const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2801 };

  /// @brief Field m_antecedent, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___m_antecedent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::ContinuationTaskFromTask, ___m_antecedent) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::ContinuationTaskFromTask, 0x58>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::ContinuationTaskFromTask);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::ContinuationTaskFromTask*, "System.Threading.Tasks", "ContinuationTaskFromTask");
