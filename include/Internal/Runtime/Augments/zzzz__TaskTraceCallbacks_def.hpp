#pragma once
// IWYU pragma private; include "Internal/Runtime/Augments/TaskTraceCallbacks.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TaskTraceCallbacks)
// Forward declare root types
namespace Internal::Runtime::Augments {
class TaskTraceCallbacks;
}
// Write type traits
MARK_REF_PTR_T(::Internal::Runtime::Augments::TaskTraceCallbacks);
// Dependencies System.Object
namespace Internal::Runtime::Augments {
// Is value type: false
// CS Name: Internal.Runtime.Augments.TaskTraceCallbacks
class CORDL_TYPE TaskTraceCallbacks : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Enabled)) bool Enabled;

  /// @brief Method TaskScheduled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void TaskScheduled(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID, int32_t CreatingTaskID, int32_t TaskCreationOptions);

  /// @brief Method TaskWaitBegin_Asynchronous, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void TaskWaitBegin_Asynchronous(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID);

  /// @brief Method TaskWaitBegin_Synchronous, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void TaskWaitBegin_Synchronous(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID);

  /// @brief Method TaskWaitEnd, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void TaskWaitEnd(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID);

  /// @brief Method get_Enabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_Enabled();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskTraceCallbacks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskTraceCallbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskTraceCallbacks(TaskTraceCallbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskTraceCallbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskTraceCallbacks(TaskTraceCallbacks const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2305 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Runtime::Augments::TaskTraceCallbacks, 0x10>, "Size mismatch!");

} // namespace Internal::Runtime::Augments
NEED_NO_BOX(::Internal::Runtime::Augments::TaskTraceCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Runtime::Augments::TaskTraceCallbacks*, "Internal.Runtime.Augments", "TaskTraceCallbacks");
