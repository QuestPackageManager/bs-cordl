#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__FormatException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CustomAttributeFormatException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
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
// CS Name: ::System.Reflection::CustomAttributeFormatException*
class CORDL_TYPE CustomAttributeFormatException : public ::System::FormatException {
public:
  // Declarations
  static inline ::System::Reflection::CustomAttributeFormatException* New_ctor();

  static inline ::System::Reflection::CustomAttributeFormatException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Reflection::CustomAttributeFormatException* New_ctor(::StringW message);

  static inline ::System::Reflection::CustomAttributeFormatException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x25d6fc8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25d7074, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x25d7028, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x25d7050, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomAttributeFormatException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomAttributeFormatException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomAttributeFormatException(CustomAttributeFormatException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomAttributeFormatException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomAttributeFormatException(CustomAttributeFormatException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::CustomAttributeFormatException, 0x90>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::CustomAttributeFormatException);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::CustomAttributeFormatException*, "System.Reflection", "CustomAttributeFormatException");
