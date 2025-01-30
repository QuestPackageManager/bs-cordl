#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/Certificates/CertificateNotYetValidException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/Certificates/zzzz__CertificateException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CertificateNotYetValidException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security::Certificates {
class CertificateNotYetValidException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::Certificates::CertificateNotYetValidException);
// Dependencies Org.BouncyCastle.Security.Certificates.CertificateException
namespace Org::BouncyCastle::Security::Certificates {
// Is value type: false
// CS Name: Org.BouncyCastle.Security.Certificates.CertificateNotYetValidException
class CORDL_TYPE CertificateNotYetValidException : public ::Org::BouncyCastle::Security::Certificates::CertificateException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Security::Certificates::CertificateNotYetValidException* New_ctor();

  static inline ::Org::BouncyCastle::Security::Certificates::CertificateNotYetValidException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Security::Certificates::CertificateNotYetValidException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x259923c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2599244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x259924c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateNotYetValidException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertificateNotYetValidException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateNotYetValidException(CertificateNotYetValidException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateNotYetValidException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateNotYetValidException(CertificateNotYetValidException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1736 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::Certificates::CertificateNotYetValidException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security::Certificates
NEED_NO_BOX(::Org::BouncyCastle::Security::Certificates::CertificateNotYetValidException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::Certificates::CertificateNotYetValidException*, "Org.BouncyCastle.Security.Certificates", "CertificateNotYetValidException");
