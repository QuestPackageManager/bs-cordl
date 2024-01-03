#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArithmeticException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OverflowException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class OverflowException;
}
// Write type traits
MARK_REF_PTR_T(::System::OverflowException);
// Type: System::OverflowException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2456))
// CS Name: ::System::OverflowException*
class CORDL_TYPE OverflowException : public ::System::ArithmeticException {
public:
  // Declarations
  static inline ::System::OverflowException* New_ctor();

  /// @brief Method .ctor, addr 0x25be0d8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::OverflowException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x25be134, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::System::OverflowException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x25be158, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  static inline ::System::OverflowException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x25be17c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "OverflowException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OverflowException(OverflowException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OverflowException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OverflowException(OverflowException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OverflowException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::OverflowException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::OverflowException);
DEFINE_IL2CPP_ARG_TYPE(::System::OverflowException*, "System", "OverflowException");
