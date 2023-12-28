#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__FormatException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CustomAttributeFormatException)
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
namespace System::Reflection {
class CustomAttributeFormatException;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::CustomAttributeFormatException);
// Type: System.Reflection::CustomAttributeFormatException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2382))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3462))
// CS Name: ::System.Reflection::CustomAttributeFormatException*
class CORDL_TYPE CustomAttributeFormatException : public ::System::FormatException {
public:
  // Declarations
  static inline ::System::Reflection::CustomAttributeFormatException* New_ctor();

  /// @brief Method .ctor addr 0x24e625c size 0x60 virtual false final false
  inline void _ctor();

  static inline ::System::Reflection::CustomAttributeFormatException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x24e62bc size 0x28 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::System::Reflection::CustomAttributeFormatException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor addr 0x24e62e4 size 0x24 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

  static inline ::System::Reflection::CustomAttributeFormatException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x24e6308 size 0x8 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "CustomAttributeFormatException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomAttributeFormatException(CustomAttributeFormatException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomAttributeFormatException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomAttributeFormatException(CustomAttributeFormatException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomAttributeFormatException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::CustomAttributeFormatException, 0x90>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::CustomAttributeFormatException);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::CustomAttributeFormatException*, "System.Reflection", "CustomAttributeFormatException");
