#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EncryptionException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class EncryptionException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::EncryptionException);
// Type: Org.BouncyCastle.Security::EncryptionException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3561))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1679))
// CS Name: ::Org.BouncyCastle.Security::EncryptionException*
class CORDL_TYPE EncryptionException : public ::System::IO::IOException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Security::EncryptionException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x10fdc94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::Org::BouncyCastle::Security::EncryptionException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x10fdc9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

  // Ctor Parameters [CppParam { name: "", ty: "EncryptionException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptionException(EncryptionException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptionException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptionException(EncryptionException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptionException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::EncryptionException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::EncryptionException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::EncryptionException*, "Org.BouncyCastle.Security", "EncryptionException");
