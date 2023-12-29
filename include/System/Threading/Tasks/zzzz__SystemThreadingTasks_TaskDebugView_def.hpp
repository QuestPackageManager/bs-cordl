#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SystemThreadingTasks_TaskDebugView)
// Forward declare root types
namespace System::Threading::Tasks {
class SystemThreadingTasks_TaskDebugView;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::SystemThreadingTasks_TaskDebugView);
// Type: System.Threading.Tasks::SystemThreadingTasks_TaskDebugView
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2785))
// CS Name: ::System.Threading.Tasks::SystemThreadingTasks_TaskDebugView*
class CORDL_TYPE SystemThreadingTasks_TaskDebugView : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "SystemThreadingTasks_TaskDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemThreadingTasks_TaskDebugView(SystemThreadingTasks_TaskDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemThreadingTasks_TaskDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemThreadingTasks_TaskDebugView(SystemThreadingTasks_TaskDebugView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemThreadingTasks_TaskDebugView();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::SystemThreadingTasks_TaskDebugView, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::SystemThreadingTasks_TaskDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::SystemThreadingTasks_TaskDebugView*, "System.Threading.Tasks", "SystemThreadingTasks_TaskDebugView");
