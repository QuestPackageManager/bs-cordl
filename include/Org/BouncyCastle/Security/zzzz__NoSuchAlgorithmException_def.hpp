#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/NoSuchAlgorithmException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NoSuchAlgorithmException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class NoSuchAlgorithmException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::NoSuchAlgorithmException);
// Dependencies Org.BouncyCastle.Security.GeneralSecurityException
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: Org.BouncyCastle.Security.NoSuchAlgorithmException
class CORDL_TYPE NoSuchAlgorithmException : public ::Org::BouncyCastle::Security::GeneralSecurityException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Security::NoSuchAlgorithmException* New_ctor();

  static inline ::Org::BouncyCastle::Security::NoSuchAlgorithmException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Security::NoSuchAlgorithmException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x25ad86c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25ad874, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x25ad87c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoSuchAlgorithmException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoSuchAlgorithmException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoSuchAlgorithmException(NoSuchAlgorithmException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoSuchAlgorithmException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoSuchAlgorithmException(NoSuchAlgorithmException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1752 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::NoSuchAlgorithmException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::NoSuchAlgorithmException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::NoSuchAlgorithmException*, "Org.BouncyCastle.Security", "NoSuchAlgorithmException");
