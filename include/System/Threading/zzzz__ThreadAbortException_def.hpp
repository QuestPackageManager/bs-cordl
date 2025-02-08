#pragma once
// IWYU pragma private; include "System/Threading/ThreadAbortException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
CORDL_MODULE_EXPORT(ThreadAbortException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Threading {
class ThreadAbortException;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ThreadAbortException);
// Dependencies System.SystemException
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.ThreadAbortException
class CORDL_TYPE ThreadAbortException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Threading::ThreadAbortException* New_ctor();

  static inline ::System::Threading::ThreadAbortException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3e5ca7c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e5caf8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadAbortException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadAbortException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadAbortException(ThreadAbortException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadAbortException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadAbortException(ThreadAbortException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2728 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadAbortException, 0x90>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ThreadAbortException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadAbortException*, "System.Threading", "ThreadAbortException");
