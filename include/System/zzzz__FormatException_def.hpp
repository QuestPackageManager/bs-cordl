#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FormatException)
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class FormatException;
}
// Write type traits
MARK_REF_PTR_T(::System::FormatException);
// Type: System::FormatException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2382))
// CS Name: ::System::FormatException*
class CORDL_TYPE FormatException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::FormatException* New_ctor();

  /// @brief Method .ctor addr 0x2597238 size 0x5c virtual false final false
  inline void _ctor();

  static inline ::System::FormatException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x2597294 size 0x24 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::System::FormatException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor addr 0x25972b8 size 0x24 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  static inline ::System::FormatException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x25972dc size 0x8 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "FormatException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormatException(FormatException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormatException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormatException(FormatException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormatException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::FormatException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::FormatException);
DEFINE_IL2CPP_ARG_TYPE(::System::FormatException*, "System", "FormatException");
