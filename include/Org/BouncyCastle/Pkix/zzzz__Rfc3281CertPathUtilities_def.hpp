#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Rfc3281CertPathUtilities)
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPoint;
}
namespace Org::BouncyCastle::Pkix {
class CertStatus;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPathValidatorResult;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
namespace Org::BouncyCastle::Pkix {
class ReasonsMask;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class IList;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class Rfc3281CertPathUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities);
// Type: Org.BouncyCastle.Pkix::Rfc3281CertPathUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Pkix::Rfc3281CertPathUtilities*
class CORDL_TYPE Rfc3281CertPathUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method AdditionalChecks, addr 0x128b80c, size 0x7d8, virtual false, abstract: false, final false
  static inline void AdditionalChecks(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);

  /// @brief Method CheckCrl, addr 0x128b00c, size 0x800, virtual false, abstract: false, final false
  static inline void CheckCrl(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, ::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert,
                              ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, ::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Certificate* issuerCert,
                              ::Org::BouncyCastle::Pkix::CertStatus* certStatus, ::Org::BouncyCastle::Pkix::ReasonsMask* reasonMask, ::System::Collections::IList* certPathCerts);

  /// @brief Method CheckCrls, addr 0x128a378, size 0xc94, virtual false, abstract: false, final false
  static inline void CheckCrls(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                               ::Org::BouncyCastle::X509::X509Certificate* issuerCert, ::System::DateTime validDate, ::System::Collections::IList* certPathCerts);

  static inline ::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities* New_ctor();

  /// @brief Method ProcessAttrCert1, addr 0x128c878, size 0xc40, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Pkix::PkixCertPath* ProcessAttrCert1(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);

  /// @brief Method ProcessAttrCert2, addr 0x128c738, size 0x140, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* ProcessAttrCert2(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);

  /// @brief Method ProcessAttrCert3, addr 0x128c628, size 0x110, virtual false, abstract: false, final false
  static inline void ProcessAttrCert3(::Org::BouncyCastle::X509::X509Certificate* acIssuerCert, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);

  /// @brief Method ProcessAttrCert4, addr 0x128c1b0, size 0x478, virtual false, abstract: false, final false
  static inline void ProcessAttrCert4(::Org::BouncyCastle::X509::X509Certificate* acIssuerCert, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);

  /// @brief Method ProcessAttrCert5, addr 0x128bfe4, size 0x1cc, virtual false, abstract: false, final false
  static inline void ProcessAttrCert5(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);

  /// @brief Method ProcessAttrCert7, addr 0x1289c8c, size 0x6ec, virtual false, abstract: false, final false
  static inline void ProcessAttrCert7(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, ::Org::BouncyCastle::Pkix::PkixCertPath* certPath,
                                      ::Org::BouncyCastle::Pkix::PkixCertPath* holderCertPath, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);

  /// @brief Method .ctor, addr 0x128d4b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rfc3281CertPathUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Rfc3281CertPathUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rfc3281CertPathUtilities(Rfc3281CertPathUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rfc3281CertPathUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rfc3281CertPathUtilities(Rfc3281CertPathUtilities const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities*, "Org.BouncyCastle.Pkix", "Rfc3281CertPathUtilities");
