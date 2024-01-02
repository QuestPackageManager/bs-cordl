#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncCausalityTracer)
namespace System::Threading::Tasks {
struct CausalitySynchronousWork;
}
namespace System::Threading::Tasks {
struct AsyncCausalityStatus;
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
// Type: System.Threading.Tasks::AsyncCausalityTracer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2820))
// CS Name: ::System.Threading.Tasks::AsyncCausalityTracer*
class CORDL_TYPE AsyncCausalityTracer : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_LoggingOn, addr 0x262a984, size 0x8, virtual false, abstract: false, final false
  static inline bool get_LoggingOn();

  /// @brief Method TraceOperationCreation, addr 0x262ded8, size 0x4, virtual false, abstract: false, final false
  static inline void TraceOperationCreation(::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, ::StringW operationName, uint64_t relatedContext);

  /// @brief Method TraceOperationCompletion, addr 0x262dedc, size 0x4, virtual false, abstract: false, final false
  static inline void TraceOperationCompletion(::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, ::System::Threading::Tasks::AsyncCausalityStatus status);

  /// @brief Method TraceSynchronousWorkStart, addr 0x262dee0, size 0x4, virtual false, abstract: false, final false
  static inline void TraceSynchronousWorkStart(::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, ::System::Threading::Tasks::CausalitySynchronousWork work);

  /// @brief Method TraceSynchronousWorkCompletion, addr 0x262a98c, size 0x4, virtual false, abstract: false, final false
  static inline void TraceSynchronousWorkCompletion(::System::Threading::Tasks::CausalityTraceLevel traceLevel, ::System::Threading::Tasks::CausalitySynchronousWork work);

  // Ctor Parameters [CppParam { name: "", ty: "AsyncCausalityTracer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncCausalityTracer(AsyncCausalityTracer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncCausalityTracer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncCausalityTracer(AsyncCausalityTracer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncCausalityTracer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::AsyncCausalityTracer, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::AsyncCausalityTracer);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::AsyncCausalityTracer*, "System.Threading.Tasks", "AsyncCausalityTracer");
