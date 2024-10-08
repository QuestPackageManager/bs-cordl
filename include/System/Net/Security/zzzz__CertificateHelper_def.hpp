#pragma once
// IWYU pragma private; include "System/Net/Security/CertificateHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CertificateHelper)
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Collection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509EnhancedKeyUsageExtension;
}
namespace System::Security::Cryptography::X509Certificates {
class X509KeyUsageExtension;
}
// Forward declare root types
namespace System::Net::Security {
class CertificateHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Security::CertificateHelper);
// Type: System.Net.Security::CertificateHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Security {
// Is value type: false
// CS Name: ::System.Net.Security::CertificateHelper*
class CORDL_TYPE CertificateHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetEligibleClientCertificate, addr 0x438e908, size 0x1b4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* GetEligibleClientCertificate();

  /// @brief Method GetEligibleClientCertificate, addr 0x438e6b8, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2*
  GetEligibleClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* candidateCerts);

  /// @brief Method GetEligibleClientCertificate, addr 0x438e624, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2*
  GetEligibleClientCertificate(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* candidateCerts);

  /// @brief Method IsValidClientCertificate, addr 0x438e74c, size 0xf8, virtual false, abstract: false, final false
  static inline bool IsValidClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2* cert);

  /// @brief Method IsValidForClientAuthenticationEKU, addr 0x438e844, size 0xa4, virtual false, abstract: false, final false
  static inline bool IsValidForClientAuthenticationEKU(::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension* eku);

  /// @brief Method IsValidForDigitalSignatureUsage, addr 0x438e8e8, size 0x20, virtual false, abstract: false, final false
  static inline bool IsValidForDigitalSignatureUsage(::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension* ku);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertificateHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateHelper(CertificateHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateHelper(CertificateHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9856 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Security::CertificateHelper, 0x10>, "Size mismatch!");

} // namespace System::Net::Security
NEED_NO_BOX(::System::Net::Security::CertificateHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::CertificateHelper*, "System.Net.Security", "CertificateHelper");
