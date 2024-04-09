#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CertificateException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security::Certificates {
class CertificateException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::Certificates::CertificateException);
// Type: Org.BouncyCastle.Security.Certificates::CertificateException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security::Certificates {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Security.Certificates::CertificateException*
class CORDL_TYPE CertificateException : public ::Org::BouncyCastle::Security::GeneralSecurityException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Security::Certificates::CertificateException* New_ctor();

  static inline ::Org::BouncyCastle::Security::Certificates::CertificateException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Security::Certificates::CertificateException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x128da7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x128da84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x128da8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertificateException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateException(CertificateException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateException(CertificateException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::Certificates::CertificateException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security::Certificates
NEED_NO_BOX(::Org::BouncyCastle::Security::Certificates::CertificateException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::Certificates::CertificateException*, "Org.BouncyCastle.Security.Certificates", "CertificateException");
