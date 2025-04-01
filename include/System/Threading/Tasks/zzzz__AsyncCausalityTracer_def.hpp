#pragma once
// IWYU pragma private; include "System/Threading/Tasks/AsyncCausalityTracer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncCausalityTracer)
namespace System::Threading::Tasks {
struct AsyncCausalityStatus;
}
namespace System::Threading::Tasks {
struct CausalitySynchronousWork;
}
namespace System::Threading::Tasks {
struct CausalityTraceLevel;
}
// Forward declare root types
namespace System::Threading::Tasks {
class AsyncCausalityTracer;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::AsyncCausalityTracer);
// Dependencies System.Object
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.AsyncCausalityTracer
class CORDL_TYPE AsyncCausalityTracer : public ::System::Object {
public:
  // Declarations
  /// @brief Method TraceOperationCompletion, addr 0x3e6718c, size 0x4, virtual false, abstract: false, final false
  static inline void TraceOperationCompletion(::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, ::System::Threading::Tasks::AsyncCausalityStatus status);

  /// @brief Method TraceOperationCreation, addr 0x3e67188, size 0x4, virtual false, abstract: false, final false
  static inline void TraceOperationCreation(::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, ::StringW operationName, uint64_t relatedContext);

  /// @brief Method TraceSynchronousWorkCompletion, addr 0x3e63dc0, size 0x4, virtual false, abstract: false, final false
  static inline void TraceSynchronousWorkCompletion(::System::Threading::Tasks::CausalityTraceLevel traceLevel, ::System::Threading::Tasks::CausalitySynchronousWork work);

  /// @brief Method TraceSynchronousWorkStart, addr 0x3e67190, size 0x4, virtual false, abstract: false, final false
  static inline void TraceSynchronousWorkStart(::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, ::System::Threading::Tasks::CausalitySynchronousWork work);

  /// @brief Method get_LoggingOn, addr 0x3e63db8, size 0x8, virtual false, abstract: false, final false
  static inline bool get_LoggingOn();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncCausalityTracer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncCausalityTracer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncCausalityTracer(AsyncCausalityTracer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncCausalityTracer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncCausalityTracer(AsyncCausalityTracer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2823 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::AsyncCausalityTracer, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::AsyncCausalityTracer);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::AsyncCausalityTracer*, "System.Threading.Tasks", "AsyncCausalityTracer");
