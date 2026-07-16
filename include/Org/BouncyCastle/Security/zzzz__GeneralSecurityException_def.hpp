#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/GeneralSecurityException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GeneralSecurityException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class GeneralSecurityException;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Security::GeneralSecurityException*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Security::GeneralSecurityException*, "Org.BouncyCastle.Security", "GeneralSecurityException");
// Dependencies System.Exception
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: Org.BouncyCastle.Security.GeneralSecurityException
class CORDL_TYPE GeneralSecurityException : public ::System::Exception {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Security::GeneralSecurityException* New_ctor();

  static inline ::Org::BouncyCastle::Security::GeneralSecurityException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Security::GeneralSecurityException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x35c566c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x35c56c4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x35c5730, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneralSecurityException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeneralSecurityException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeneralSecurityException(GeneralSecurityException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeneralSecurityException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneralSecurityException(GeneralSecurityException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1717 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Security::GeneralSecurityException) == 0x90, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
