#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ArithmeticException)
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class ArithmeticException;
}
// Write type traits
MARK_REF_PTR_T(::System::ArithmeticException);
// Type: System::ArithmeticException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2347))
// CS Name: ::System::ArithmeticException*
class CORDL_TYPE ArithmeticException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::ArithmeticException* New_ctor();

  /// @brief Method .ctor, addr 0x2521050, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::ArithmeticException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x25210ac, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::System::ArithmeticException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x25210d0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  static inline ::System::ArithmeticException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x25210f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "ArithmeticException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArithmeticException(ArithmeticException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArithmeticException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArithmeticException(ArithmeticException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArithmeticException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ArithmeticException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ArithmeticException);
DEFINE_IL2CPP_ARG_TYPE(::System::ArithmeticException*, "System", "ArithmeticException");
