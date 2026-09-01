#pragma once
// IWYU pragma private; include "System\Reflection\CustomAttributeFormatException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__FormatException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::Reflection::CustomAttributeFormatException*);
DEFINE_IL2CPP_CLASS(::System::Reflection::CustomAttributeFormatException*, "System.Reflection", "CustomAttributeFormatException");
// Dependencies System.FormatException
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.CustomAttributeFormatException
class CORDL_TYPE CustomAttributeFormatException : public ::System::FormatException {
public:
  // Declarations
  static inline ::System::Reflection::CustomAttributeFormatException* New_ctor();

  static inline ::System::Reflection::CustomAttributeFormatException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Reflection::CustomAttributeFormatException* New_ctor(::StringW message);

  static inline ::System::Reflection::CustomAttributeFormatException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x5b7db7c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5b7dc2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5b7dbe0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x5b7dc08, size 0x24, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3482 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Reflection::CustomAttributeFormatException) == 0x90, "Size mismatch!");

} // namespace System::Reflection
