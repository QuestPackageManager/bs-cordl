#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/InvalidDataContractException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidDataContractException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class InvalidDataContractException;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::InvalidDataContractException);
// Dependencies System.Exception
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.InvalidDataContractException
class CORDL_TYPE InvalidDataContractException : public ::System::Exception {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::InvalidDataContractException* New_ctor();

  static inline ::System::Runtime::Serialization::InvalidDataContractException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                         ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::Serialization::InvalidDataContractException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x5fa31c4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5fa3288, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5fa321c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidDataContractException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvalidDataContractException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidDataContractException(InvalidDataContractException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidDataContractException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidDataContractException(InvalidDataContractException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17022 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::InvalidDataContractException, 0x90>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::InvalidDataContractException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::InvalidDataContractException*, "System.Runtime.Serialization", "InvalidDataContractException");
