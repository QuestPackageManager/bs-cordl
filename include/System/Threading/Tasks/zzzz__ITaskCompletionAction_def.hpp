#pragma once
// IWYU pragma private; include "System/Threading/Tasks/ITaskCompletionAction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITaskCompletionAction)
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Threading::Tasks {
class ITaskCompletionAction;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::ITaskCompletionAction);
// Type: System.Threading.Tasks::ITaskCompletionAction
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: ::System.Threading.Tasks::ITaskCompletionAction*
class CORDL_TYPE ITaskCompletionAction {
public:
  // Declarations
  __declspec(property(get = get_InvokeMayRunArbitraryCode)) bool InvokeMayRunArbitraryCode;

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Invoke(::System::Threading::Tasks::Task* completingTask);

  /// @brief Method get_InvokeMayRunArbitraryCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_InvokeMayRunArbitraryCode();

  // Ctor Parameters [CppParam { name: "", ty: "ITaskCompletionAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITaskCompletionAction(ITaskCompletionAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITaskCompletionAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITaskCompletionAction(ITaskCompletionAction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::ITaskCompletionAction);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::ITaskCompletionAction*, "System.Threading.Tasks", "ITaskCompletionAction");
