#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/Rfc3280CertPathUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Rfc3280CertPathUtilities)
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPoint;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Pkix {
class CertStatus;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
namespace Org::BouncyCastle::Pkix {
class PkixCrlUtilities;
}
namespace Org::BouncyCastle::Pkix {
class PkixNameConstraintValidator;
}
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
namespace Org::BouncyCastle::Pkix {
class PkixPolicyNode;
}
namespace Org::BouncyCastle::Pkix {
class ReasonsMask;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::X509 {
class X509Crl;
}
namespace System::Collections {
class IList;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class Rfc3280CertPathUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities);
// Dependencies System.Object
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// CS Name: Org.BouncyCastle.Pkix.Rfc3280CertPathUtilities
class CORDL_TYPE Rfc3280CertPathUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field ANY_POLICY, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ANY_POLICY, put = setStaticF_ANY_POLICY)) ::StringW ANY_POLICY;

  /// @brief Field CRL_SIGN, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_CRL_SIGN, put = setStaticF_CRL_SIGN)) int32_t CRL_SIGN;

  /// @brief Field CrlReasons, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CrlReasons, put = setStaticF_CrlReasons)) ::ArrayW<::StringW, ::Array<::StringW>*> CrlReasons;

  /// @brief Field CrlUtilities, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CrlUtilities, put = setStaticF_CrlUtilities)) ::Org::BouncyCastle::Pkix::PkixCrlUtilities* CrlUtilities;

  /// @brief Field KEY_CERT_SIGN, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_KEY_CERT_SIGN, put = setStaticF_KEY_CERT_SIGN)) int32_t KEY_CERT_SIGN;

  /// @brief Method CheckCrl, addr 0x2591b04, size 0xba8, virtual false, abstract: false, final false
  static inline void CheckCrl(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, ::Org::BouncyCastle::X509::X509Certificate* cert,
                              ::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Certificate* defaultCRLSignCert, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* defaultCRLSignKey,
                              ::Org::BouncyCastle::Pkix::CertStatus* certStatus, ::Org::BouncyCastle::Pkix::ReasonsMask* reasonMask, ::System::Collections::IList* certPathCerts);

  /// @brief Method CheckCrls, addr 0x2592d60, size 0xa7c, virtual false, abstract: false, final false
  static inline void CheckCrls(::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, ::Org::BouncyCastle::X509::X509Certificate* cert, ::System::DateTime validDate,
                               ::Org::BouncyCastle::X509::X509Certificate* sign, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* workingPublicKey, ::System::Collections::IList* certPathCerts);

  static inline ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities* New_ctor();

  /// @brief Method PrepareCertB, addr 0x2575f64, size 0x1e34, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* PrepareCertB(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index,
                                                                        ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> policyNodes,
                                                                        ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree, int32_t policyMapping);

  /// @brief Method PrepareNextCertA, addr 0x2575a98, size 0x4cc, virtual false, abstract: false, final false
  static inline void PrepareNextCertA(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index);

  /// @brief Method PrepareNextCertG, addr 0x2577d98, size 0x4e0, virtual false, abstract: false, final false
  static inline void PrepareNextCertG(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator* nameConstraintValidator);

  /// @brief Method PrepareNextCertH1, addr 0x2578278, size 0x160, virtual false, abstract: false, final false
  static inline int32_t PrepareNextCertH1(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t explicitPolicy);

  /// @brief Method PrepareNextCertH2, addr 0x25783d8, size 0x160, virtual false, abstract: false, final false
  static inline int32_t PrepareNextCertH2(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t policyMapping);

  /// @brief Method PrepareNextCertH3, addr 0x2578538, size 0x160, virtual false, abstract: false, final false
  static inline int32_t PrepareNextCertH3(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t inhibitAnyPolicy);

  /// @brief Method PrepareNextCertI1, addr 0x2578698, size 0x41c, virtual false, abstract: false, final false
  static inline int32_t PrepareNextCertI1(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t explicitPolicy);

  /// @brief Method PrepareNextCertI2, addr 0x2578ab4, size 0x420, virtual false, abstract: false, final false
  static inline int32_t PrepareNextCertI2(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t policyMapping);

  /// @brief Method PrepareNextCertJ, addr 0x2578ed4, size 0x26c, virtual false, abstract: false, final false
  static inline int32_t PrepareNextCertJ(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t inhibitAnyPolicy);

  /// @brief Method PrepareNextCertK, addr 0x2579140, size 0x2c4, virtual false, abstract: false, final false
  static inline void PrepareNextCertK(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index);

  /// @brief Method PrepareNextCertL, addr 0x2579404, size 0x1ac, virtual false, abstract: false, final false
  static inline int32_t PrepareNextCertL(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t maxPathLength);

  /// @brief Method PrepareNextCertM, addr 0x25795b0, size 0x278, virtual false, abstract: false, final false
  static inline int32_t PrepareNextCertM(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t maxPathLength);

  /// @brief Method PrepareNextCertN, addr 0x2579828, size 0x1c0, virtual false, abstract: false, final false
  static inline void PrepareNextCertN(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index);

  /// @brief Method PrepareNextCertO, addr 0x25799e8, size 0x47c, virtual false, abstract: false, final false
  static inline void PrepareNextCertO(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, ::Org::BouncyCastle::Utilities::Collections::ISet* criticalExtensions,
                                      ::System::Collections::IList* pathCheckers);

  /// @brief Method ProcessCertA, addr 0x25728c4, size 0x668, virtual false, abstract: false, final false
  static inline void ProcessCertA(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, int32_t index,
                                  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* workingPublicKey, ::Org::BouncyCastle::Asn1::X509::X509Name* workingIssuerName,
                                  ::Org::BouncyCastle::X509::X509Certificate* sign);

  /// @brief Method ProcessCertBC, addr 0x2572f2c, size 0xa94, virtual false, abstract: false, final false
  static inline void ProcessCertBC(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator* nameConstraintValidator);

  /// @brief Method ProcessCertD, addr 0x25739c0, size 0x1e08, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* ProcessCertD(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index,
                                                                        ::Org::BouncyCastle::Utilities::Collections::ISet* acceptablePolicies,
                                                                        ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree,
                                                                        ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> policyNodes, int32_t inhibitAnyPolicy);

  /// @brief Method ProcessCertE, addr 0x25757c8, size 0x25c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* ProcessCertE(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree);

  /// @brief Method ProcessCertF, addr 0x2575a24, size 0x74, virtual false, abstract: false, final false
  static inline void ProcessCertF(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree, int32_t explicitPolicy);

  /// @brief Method ProcessCrlA1i, addr 0x2593ca4, size 0x494, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* ProcessCrlA1i(::System::DateTime currentDate, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                                                                                 ::Org::BouncyCastle::X509::X509Certificate* cert, ::Org::BouncyCastle::X509::X509Crl* crl);

  /// @brief Method ProcessCrlA1ii, addr 0x25937dc, size 0x4c8, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Utilities::Collections::ISet*, ::Array<::Org::BouncyCastle::Utilities::Collections::ISet*>*>
  ProcessCrlA1ii(::System::DateTime currentDate, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, ::Org::BouncyCastle::X509::X509Certificate* cert, ::Org::BouncyCastle::X509::X509Crl* crl);

  /// @brief Method ProcessCrlB1, addr 0x258fd98, size 0x38c, virtual false, abstract: false, final false
  static inline void ProcessCrlB1(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, ::System::Object* cert, ::Org::BouncyCastle::X509::X509Crl* crl);

  /// @brief Method ProcessCrlB2, addr 0x258efa4, size 0xdf4, virtual false, abstract: false, final false
  static inline void ProcessCrlB2(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, ::System::Object* cert, ::Org::BouncyCastle::X509::X509Crl* crl);

  /// @brief Method ProcessCrlC, addr 0x25926ac, size 0x564, virtual false, abstract: false, final false
  static inline void ProcessCrlC(::Org::BouncyCastle::X509::X509Crl* deltaCRL, ::Org::BouncyCastle::X509::X509Crl* completeCRL, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);

  /// @brief Method ProcessCrlD, addr 0x2590124, size 0x320, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Pkix::ReasonsMask* ProcessCrlD(::Org::BouncyCastle::X509::X509Crl* crl, ::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp);

  /// @brief Method ProcessCrlF, addr 0x2590444, size 0xdf0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* ProcessCrlF(::Org::BouncyCastle::X509::X509Crl* crl, ::System::Object* cert,
                                                                               ::Org::BouncyCastle::X509::X509Certificate* defaultCRLSignCert,
                                                                               ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* defaultCRLSignKey,
                                                                               ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, ::System::Collections::IList* certPathCerts);

  /// @brief Method ProcessCrlG, addr 0x2591234, size 0x468, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ProcessCrlG(::Org::BouncyCastle::X509::X509Crl* crl, ::Org::BouncyCastle::Utilities::Collections::ISet* keys);

  /// @brief Method ProcessCrlH, addr 0x259169c, size 0x468, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::X509::X509Crl* ProcessCrlH(::Org::BouncyCastle::Utilities::Collections::ISet* deltaCrls, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);

  /// @brief Method ProcessCrlI, addr 0x2592c10, size 0xb8, virtual false, abstract: false, final false
  static inline void ProcessCrlI(::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Crl* deltacrl, ::System::Object* cert, ::Org::BouncyCastle::Pkix::CertStatus* certStatus,
                                 ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);

  /// @brief Method ProcessCrlJ, addr 0x2592cc8, size 0x98, virtual false, abstract: false, final false
  static inline void ProcessCrlJ(::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Crl* completecrl, ::System::Object* cert, ::Org::BouncyCastle::Pkix::CertStatus* certStatus);

  /// @brief Method WrapupCertA, addr 0x257a240, size 0x78, virtual false, abstract: false, final false
  static inline int32_t WrapupCertA(int32_t explicitPolicy, ::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method WrapupCertB, addr 0x257a2b8, size 0x448, virtual false, abstract: false, final false
  static inline int32_t WrapupCertB(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t explicitPolicy);

  /// @brief Method WrapupCertF, addr 0x257a700, size 0x464, virtual false, abstract: false, final false
  static inline void WrapupCertF(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, ::System::Collections::IList* pathCheckers,
                                 ::Org::BouncyCastle::Utilities::Collections::ISet* criticalExtensions);

  /// @brief Method WrapupCertG, addr 0x257ab64, size 0x158c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* WrapupCertG(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                                                                       ::Org::BouncyCastle::Utilities::Collections::ISet* userInitialPolicySet, int32_t index,
                                                                       ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> policyNodes,
                                                                       ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree,
                                                                       ::Org::BouncyCastle::Utilities::Collections::ISet* acceptablePolicies);

  /// @brief Method .ctor, addr 0x25943a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_ANY_POLICY();

  static inline int32_t getStaticF_CRL_SIGN();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_CrlReasons();

  static inline ::Org::BouncyCastle::Pkix::PkixCrlUtilities* getStaticF_CrlUtilities();

  static inline int32_t getStaticF_KEY_CERT_SIGN();

  static inline void setStaticF_ANY_POLICY(::StringW value);

  static inline void setStaticF_CRL_SIGN(int32_t value);

  static inline void setStaticF_CrlReasons(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_CrlUtilities(::Org::BouncyCastle::Pkix::PkixCrlUtilities* value);

  static inline void setStaticF_KEY_CERT_SIGN(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rfc3280CertPathUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Rfc3280CertPathUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rfc3280CertPathUtilities(Rfc3280CertPathUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rfc3280CertPathUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rfc3280CertPathUtilities(Rfc3280CertPathUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1730 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*, "Org.BouncyCastle.Pkix", "Rfc3280CertPathUtilities");
