#pragma once
// IWYU pragma private; include "Internal/Threading/Tasks/Tracing/TaskTrace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TaskTrace)
namespace Internal::Runtime::Augments {
class TaskTraceCallbacks;
}
// Forward declare root types
namespace Internal::Threading::Tasks::Tracing {
class TaskTrace;
}
// Write type traits
MARK_REF_PTR_T(::Internal::Threading::Tasks::Tracing::TaskTrace);
// Dependencies System.Object
namespace Internal::Threading::Tasks::Tracing {
// Is value type: false
// CS Name: Internal.Threading.Tasks.Tracing.TaskTrace
class CORDL_TYPE TaskTrace : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_callbacks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_callbacks, put = setStaticF_s_callbacks)) ::Internal::Runtime::Augments::TaskTraceCallbacks* s_callbacks;

  /// @brief Method TaskScheduled, addr 0x3c6efa4, size 0xa0, virtual false, abstract: false, final false
  static inline void TaskScheduled(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID, int32_t CreatingTaskID, int32_t TaskCreationOptions);

  /// @brief Method TaskWaitBegin_Asynchronous, addr 0x3c6ee18, size 0x84, virtual false, abstract: false, final false
  static inline void TaskWaitBegin_Asynchronous(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID);

  /// @brief Method TaskWaitBegin_Synchronous, addr 0x3c6ee9c, size 0x84, virtual false, abstract: false, final false
  static inline void TaskWaitBegin_Synchronous(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID);

  /// @brief Method TaskWaitEnd, addr 0x3c6ef20, size 0x84, virtual false, abstract: false, final false
  static inline void TaskWaitEnd(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID);

  static inline ::Internal::Runtime::Augments::TaskTraceCallbacks* getStaticF_s_callbacks();

  /// @brief Method get_Enabled, addr 0x3c6edb8, size 0x60, virtual false, abstract: false, final false
  static inline bool get_Enabled();

  static inline void setStaticF_s_callbacks(::Internal::Runtime::Augments::TaskTraceCallbacks* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskTrace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskTrace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskTrace(TaskTrace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskTrace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskTrace(TaskTrace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2303 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Threading::Tasks::Tracing::TaskTrace, 0x10>, "Size mismatch!");

} // namespace Internal::Threading::Tasks::Tracing
NEED_NO_BOX(::Internal::Threading::Tasks::Tracing::TaskTrace);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Threading::Tasks::Tracing::TaskTrace*, "Internal.Threading.Tasks.Tracing", "TaskTrace");
