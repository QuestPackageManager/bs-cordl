#pragma once
// IWYU pragma private; include "System/Threading/ThreadInterruptedException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
CORDL_MODULE_EXPORT(ThreadInterruptedException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Threading {
class ThreadInterruptedException;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ThreadInterruptedException);
// Dependencies System.SystemException
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.ThreadInterruptedException
class CORDL_TYPE ThreadInterruptedException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Threading::ThreadInterruptedException* New_ctor();

  static inline ::System::Threading::ThreadInterruptedException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5a9d700, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5a9d77c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadInterruptedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadInterruptedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadInterruptedException(ThreadInterruptedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadInterruptedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadInterruptedException(ThreadInterruptedException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2739 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadInterruptedException, 0x90>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ThreadInterruptedException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadInterruptedException*, "System.Threading", "ThreadInterruptedException");
