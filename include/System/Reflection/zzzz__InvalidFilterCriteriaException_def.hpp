#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ApplicationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidFilterCriteriaException)
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
namespace System::Reflection {
class InvalidFilterCriteriaException;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::InvalidFilterCriteriaException);
// Type: System.Reflection::InvalidFilterCriteriaException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2343))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3472))
// CS Name: ::System.Reflection::InvalidFilterCriteriaException*
class CORDL_TYPE InvalidFilterCriteriaException : public ::System::ApplicationException {
public:
  // Declarations
  static inline ::System::Reflection::InvalidFilterCriteriaException* New_ctor();

  /// @brief Method .ctor addr 0x24e7764 size 0x60 virtual false final false
  inline void _ctor();

  static inline ::System::Reflection::InvalidFilterCriteriaException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x24e77c4 size 0x28 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::System::Reflection::InvalidFilterCriteriaException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor addr 0x24e77ec size 0x24 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

  static inline ::System::Reflection::InvalidFilterCriteriaException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x24e7810 size 0x8 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "InvalidFilterCriteriaException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidFilterCriteriaException(InvalidFilterCriteriaException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidFilterCriteriaException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidFilterCriteriaException(InvalidFilterCriteriaException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidFilterCriteriaException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::InvalidFilterCriteriaException, 0x90>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::InvalidFilterCriteriaException);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::InvalidFilterCriteriaException*, "System.Reflection", "InvalidFilterCriteriaException");
