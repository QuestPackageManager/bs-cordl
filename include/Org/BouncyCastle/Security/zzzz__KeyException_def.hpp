#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/KeyException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class KeyException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::KeyException);
// Dependencies Org.BouncyCastle.Security.GeneralSecurityException
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: Org.BouncyCastle.Security.KeyException
class CORDL_TYPE KeyException : public ::Org::BouncyCastle::Security::GeneralSecurityException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Security::KeyException* New_ctor();

  static inline ::Org::BouncyCastle::Security::KeyException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Security::KeyException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x25aabbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25aabc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x25aabcc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyException(KeyException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyException(KeyException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1748 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::KeyException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::KeyException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::KeyException*, "Org.BouncyCastle.Security", "KeyException");
