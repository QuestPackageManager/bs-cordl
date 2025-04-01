#pragma once
// IWYU pragma private; include "System/Threading/SemaphoreFullException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
CORDL_MODULE_EXPORT(SemaphoreFullException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Threading {
class SemaphoreFullException;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::SemaphoreFullException);
// Dependencies System.SystemException
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.SemaphoreFullException
class CORDL_TYPE SemaphoreFullException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Threading::SemaphoreFullException* New_ctor();

  static inline ::System::Threading::SemaphoreFullException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3e48634, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e48680, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SemaphoreFullException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SemaphoreFullException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SemaphoreFullException(SemaphoreFullException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SemaphoreFullException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SemaphoreFullException(SemaphoreFullException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2670 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::SemaphoreFullException, 0x90>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::SemaphoreFullException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SemaphoreFullException*, "System.Threading", "SemaphoreFullException");
