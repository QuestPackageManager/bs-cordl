#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GeneralSecurityException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class GeneralSecurityException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::GeneralSecurityException);
// Type: Org.BouncyCastle.Security::GeneralSecurityException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2561))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1717))
// CS Name: ::Org.BouncyCastle.Security::GeneralSecurityException*
class CORDL_TYPE GeneralSecurityException : public ::System::Exception {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Security::GeneralSecurityException* New_ctor();

  /// @brief Method .ctor, addr 0x1121d04, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Security::GeneralSecurityException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x1121d5c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::Org::BouncyCastle::Security::GeneralSecurityException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x1121dc4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

  // Ctor Parameters [CppParam { name: "", ty: "GeneralSecurityException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeneralSecurityException(GeneralSecurityException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeneralSecurityException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneralSecurityException(GeneralSecurityException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneralSecurityException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::GeneralSecurityException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::GeneralSecurityException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::GeneralSecurityException*, "Org.BouncyCastle.Security", "GeneralSecurityException");
