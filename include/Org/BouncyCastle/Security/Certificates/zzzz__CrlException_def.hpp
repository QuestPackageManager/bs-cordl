#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/Certificates/CrlException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CrlException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security::Certificates {
class CrlException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::Certificates::CrlException);
// Dependencies Org.BouncyCastle.Security.GeneralSecurityException
namespace Org::BouncyCastle::Security::Certificates {
// Is value type: false
// CS Name: Org.BouncyCastle.Security.Certificates.CrlException
class CORDL_TYPE CrlException : public ::Org::BouncyCastle::Security::GeneralSecurityException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Security::Certificates::CrlException* New_ctor();

  static inline ::Org::BouncyCastle::Security::Certificates::CrlException* New_ctor(::StringW msg);

  static inline ::Org::BouncyCastle::Security::Certificates::CrlException* New_ctor(::StringW msg, ::System::Exception* e);

  /// @brief Method .ctor, addr 0x2596b30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2596b38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW msg);

  /// @brief Method .ctor, addr 0x2596b40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW msg, ::System::Exception* e);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrlException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrlException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrlException(CrlException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrlException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrlException(CrlException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1738 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::Certificates::CrlException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security::Certificates
NEED_NO_BOX(::Org::BouncyCastle::Security::Certificates::CrlException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::Certificates::CrlException*, "Org.BouncyCastle.Security.Certificates", "CrlException");
