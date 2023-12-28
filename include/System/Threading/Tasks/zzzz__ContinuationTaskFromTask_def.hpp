#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
CORDL_MODULE_EXPORT(ContinuationTaskFromTask)
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System {
class Delegate;
}
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
namespace System::Threading::Tasks {
class Task;
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
// Type: System.Threading.Tasks::ContinuationTaskFromTask
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2798))
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromTask*
class CORDL_TYPE ContinuationTaskFromTask : public ::System::Threading::Tasks::Task {
public:
  // Declarations
  /// @brief Field m_antecedent, offset 0x50, size 0x8
  __declspec(property(get = __get_m_antecedent, put = __set_m_antecedent))::System::Threading::Tasks::Task* m_antecedent;

  constexpr ::System::Threading::Tasks::Task*& __get_m_antecedent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __get_m_antecedent() const;

  constexpr void __set_m_antecedent(::System::Threading::Tasks::Task* value);

  static inline ::System::Threading::Tasks::ContinuationTaskFromTask* New_ctor(::System::Threading::Tasks::Task* antecedent, ::System::Delegate* action, ::System::Object* state,
                                                                               ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                               ::System::Threading::Tasks::InternalTaskOptions internalOptions);

  /// @brief Method .ctor addr 0x2628018 size 0xb4 virtual false final false
  inline void _ctor(::System::Threading::Tasks::Task* antecedent, ::System::Delegate* action, ::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                    ::System::Threading::Tasks::InternalTaskOptions internalOptions);

  /// @brief Method InnerInvoke addr 0x262b3f0 size 0xd0 virtual true final false
  inline void InnerInvoke();

  // Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromTask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContinuationTaskFromTask(ContinuationTaskFromTask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromTask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContinuationTaskFromTask(ContinuationTaskFromTask const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContinuationTaskFromTask();

public:
  /// @brief Field m_antecedent, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___m_antecedent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::ContinuationTaskFromTask, 0x58>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::ContinuationTaskFromTask);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::ContinuationTaskFromTask*, "System.Threading.Tasks", "ContinuationTaskFromTask");
