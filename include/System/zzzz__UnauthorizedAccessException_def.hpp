#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnauthorizedAccessException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class UnauthorizedAccessException;
}
// Write type traits
MARK_REF_PTR_T(::System::UnauthorizedAccessException);
// Type: System::UnauthorizedAccessException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2501))
// CS Name: ::System::UnauthorizedAccessException*
class CORDL_TYPE UnauthorizedAccessException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::UnauthorizedAccessException* New_ctor();

  /// @brief Method .ctor, addr 0x25cde9c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::UnauthorizedAccessException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x25cdef4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::System::UnauthorizedAccessException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x25cdf14, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

  static inline ::System::UnauthorizedAccessException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x25cdf34, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "UnauthorizedAccessException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnauthorizedAccessException(UnauthorizedAccessException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnauthorizedAccessException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnauthorizedAccessException(UnauthorizedAccessException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnauthorizedAccessException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UnauthorizedAccessException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::UnauthorizedAccessException);
DEFINE_IL2CPP_ARG_TYPE(::System::UnauthorizedAccessException*, "System", "UnauthorizedAccessException");
