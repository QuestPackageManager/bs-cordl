#pragma once
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
// Type: System.Threading::SemaphoreFullException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2479))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2665))
// CS Name: ::System.Threading::SemaphoreFullException*
class CORDL_TYPE SemaphoreFullException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Threading::SemaphoreFullException* New_ctor();

  /// @brief Method .ctor addr 0x24b4f98 size 0x4c virtual false final false
  inline void _ctor();

  static inline ::System::Threading::SemaphoreFullException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x24b4fe4 size 0x8 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "SemaphoreFullException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SemaphoreFullException(SemaphoreFullException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SemaphoreFullException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SemaphoreFullException(SemaphoreFullException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SemaphoreFullException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::SemaphoreFullException, 0x90>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::SemaphoreFullException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SemaphoreFullException*, "System.Threading", "SemaphoreFullException");
