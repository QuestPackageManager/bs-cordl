#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__CryptographicException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CryptographicUnexpectedOperationException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CryptographicUnexpectedOperationException;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::CryptographicUnexpectedOperationException);
// Type: System.Security.Cryptography::CryptographicUnexpectedOperationException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2924))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2925))
// CS Name: ::System.Security.Cryptography::CryptographicUnexpectedOperationException*
class CORDL_TYPE CryptographicUnexpectedOperationException : public ::System::Security::Cryptography::CryptographicException {
public:
  // Declarations
  static inline ::System::Security::Cryptography::CryptographicUnexpectedOperationException* New_ctor();

  /// @brief Method .ctor addr 0x245c218 size 0x24 virtual false final false
  inline void _ctor();

  static inline ::System::Security::Cryptography::CryptographicUnexpectedOperationException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x245b474 size 0x48 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::System::Security::Cryptography::CryptographicUnexpectedOperationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                      ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x245c23c size 0x8 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "CryptographicUnexpectedOperationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptographicUnexpectedOperationException(CryptographicUnexpectedOperationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptographicUnexpectedOperationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptographicUnexpectedOperationException(CryptographicUnexpectedOperationException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptographicUnexpectedOperationException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CryptographicUnexpectedOperationException, 0x90>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::CryptographicUnexpectedOperationException);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptographicUnexpectedOperationException*, "System.Security.Cryptography", "CryptographicUnexpectedOperationException");
