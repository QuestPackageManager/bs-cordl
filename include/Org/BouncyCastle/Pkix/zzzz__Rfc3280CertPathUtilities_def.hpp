#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Rfc3280CertPathUtilities)
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Pkix {
class PkixCrlUtilities;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Pkix {
class CertStatus;
}
namespace Org::BouncyCastle::X509 {
class X509Crl;
}
namespace Org::BouncyCastle::Pkix {
class PkixNameConstraintValidator;
}
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Pkix {
class ReasonsMask;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPoint;
}
namespace Org::BouncyCastle::Pkix {
class PkixPolicyNode;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class Rfc3280CertPathUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities);
// Type: Org.BouncyCastle.Pkix::Rfc3280CertPathUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1730))
// CS Name: ::Org.BouncyCastle.Pkix::Rfc3280CertPathUtilities*
class CORDL_TYPE Rfc3280CertPathUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field CrlUtilities, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CrlUtilities, put = setStaticF_CrlUtilities))::Org::BouncyCastle::Pkix::PkixCrlUtilities* CrlUtilities;

  /// @brief Field ANY_POLICY, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ANY_POLICY, put = setStaticF_ANY_POLICY))::StringW ANY_POLICY;

  /// @brief Field KEY_CERT_SIGN, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_KEY_CERT_SIGN, put = setStaticF_KEY_CERT_SIGN)) int32_t KEY_CERT_SIGN;

  /// @brief Field CRL_SIGN, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_CRL_SIGN, put = setStaticF_CRL_SIGN)) int32_t CRL_SIGN;

  /// @brief Field CrlReasons, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CrlReasons, put = setStaticF_CrlReasons))::ArrayW<::StringW, ::Array<::StringW>*> CrlReasons;

  static inline void setStaticF_CrlUtilities(::Org::BouncyCastle::Pkix::PkixCrlUtilities* value);

  static inline ::Org::BouncyCastle::Pkix::PkixCrlUtilities* getStaticF_CrlUtilities();

  static inline void setStaticF_ANY_POLICY(::StringW value);

  static inline ::StringW getStaticF_ANY_POLICY();

  static inline void setStaticF_KEY_CERT_SIGN(int32_t value);

  static inline int32_t getStaticF_KEY_CERT_SIGN();

  static inline void setStaticF_CRL_SIGN(int32_t value);

  static inline int32_t getStaticF_CRL_SIGN();

  static inline void setStaticF_CrlReasons(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_CrlReasons();

  /// @brief Method ProcessCrlB2, addr 0x1113640, size 0xe10, virtual false, abstract: false, final false
  static inline void ProcessCrlB2(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, ::System::Object* cert, ::Org::BouncyCastle::X509::X509Crl* crl);

  /// @brief Method ProcessCertBC, addr 0x10f7464, size 0xa84, virtual false, abstract: false, final false
  static inline void ProcessCertBC(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator* nameConstraintValidator);

  /// @brief Method PrepareNextCertA, addr 0x10f9f98, size 0x4dc, virtual false, abstract: false, final false
  static inline void PrepareNextCertA(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index);

  /// @brief Method ProcessCertD, addr 0x10f7ee8, size 0x1dd8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* ProcessCertD(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index,
                                                                        ::Org::BouncyCastle::Utilities::Collections::ISet* acceptablePolicies,
                                                                        ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree,
                                                                        ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> policyNodes, int32_t inhibitAnyPolicy);

  /// @brief Method ProcessCrlB1, addr 0x1114450, size 0x39c, virtual false, abstract: false, final false
  static inline void ProcessCrlB1(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, ::System::Object* cert, ::Org::BouncyCastle::X509::X509Crl* crl);

  /// @brief Method ProcessCrlD, addr 0x11147ec, size 0x318, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Pkix::ReasonsMask* ProcessCrlD(::Org::BouncyCastle::X509::X509Crl* crl, ::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp);

  /// @brief Method ProcessCrlF, addr 0x1114b04, size 0xe0c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* ProcessCrlF(::Org::BouncyCastle::X509::X509Crl* crl, ::System::Object* cert,
                                                                               ::Org::BouncyCastle::X509::X509Certificate* defaultCRLSignCert,
                                                                               ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* defaultCRLSignKey,
                                                                               ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, ::System::Collections::IList* certPathCerts);

  /// @brief Method ProcessCrlG, addr 0x1115910, size 0x46c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ProcessCrlG(::Org::BouncyCastle::X509::X509Crl* crl, ::Org::BouncyCastle::Utilities::Collections::ISet* keys);

  /// @brief Method ProcessCrlH, addr 0x1115d7c, size 0x46c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::X509::X509Crl* ProcessCrlH(::Org::BouncyCastle::Utilities::Collections::ISet* deltaCrls, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);

  /// @brief Method CheckCrl, addr 0x11161e8, size 0xbb8, virtual false, abstract: false, final false
  static inline void CheckCrl(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, ::Org::BouncyCastle::X509::X509Certificate* cert,
                              ::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Certificate* defaultCRLSignCert, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* defaultCRLSignKey,
                              ::Org::BouncyCastle::Pkix::CertStatus* certStatus, ::Org::BouncyCastle::Pkix::ReasonsMask* reasonMask, ::System::Collections::IList* certPathCerts);

  /// @brief Method CheckCrls, addr 0x1117478, size 0xa08, virtual false, abstract: false, final false
  static inline void CheckCrls(::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, ::Org::BouncyCastle::X509::X509Certificate* cert, ::System::DateTime validDate,
                               ::Org::BouncyCastle::X509::X509Certificate* sign, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* workingPublicKey, ::System::Collections::IList* certPathCerts);

  /// @brief Method PrepareCertB, addr 0x10fa474, size 0x1e94, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* PrepareCertB(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index,
                                                                        ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> policyNodes,
                                                                        ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree, int32_t policyMapping);

  /// @brief Method ProcessCrlA1ii, addr 0x1117e80, size 0x4cc, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Utilities::Collections::ISet*, ::Array<::Org::BouncyCastle::Utilities::Collections::ISet*>*>
  ProcessCrlA1ii(::System::DateTime currentDate, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, ::Org::BouncyCastle::X509::X509Certificate* cert, ::Org::BouncyCastle::X509::X509Crl* crl);

  /// @brief Method ProcessCrlA1i, addr 0x111834c, size 0x4a0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* ProcessCrlA1i(::System::DateTime currentDate, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                                                                                 ::Org::BouncyCastle::X509::X509Certificate* cert, ::Org::BouncyCastle::X509::X509Crl* crl);

  /// @brief Method ProcessCertF, addr 0x10f9f20, size 0x78, virtual false, abstract: false, final false
  static inline void ProcessCertF(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree, int32_t explicitPolicy);

  /// @brief Method ProcessCertA, addr 0x10f6ddc, size 0x688, virtual false, abstract: false, final false
  static inline void ProcessCertA(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, int32_t index,
                                  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* workingPublicKey, ::Org::BouncyCastle::Asn1::X509::X509Name* workingIssuerName,
                                  ::Org::BouncyCastle::X509::X509Certificate* sign);

  /// @brief Method PrepareNextCertI1, addr 0x10fcc1c, size 0x424, virtual false, abstract: false, final false
  static inline int32_t PrepareNextCertI1(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t explicitPolicy);

  /// @brief Method PrepareNextCertI2, addr 0x10fd040, size 0x428, virtual false, abstract: false, final false
  static inline int32_t PrepareNextCertI2(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t policyMapping);

  /// @brief Method PrepareNextCertG, addr 0x10fc308, size 0x4f4, virtual false, abstract: false, final false
  static inline void PrepareNextCertG(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator* nameConstraintValidator);

  /// @brief Method PrepareNextCertJ, addr 0x10fd468, size 0x270, virtual false, abstract: false, final false
  static inline int32_t PrepareNextCertJ(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t inhibitAnyPolicy);

  /// @brief Method PrepareNextCertK, addr 0x10fd6d8, size 0x2d0, virtual false, abstract: false, final false
  static inline void PrepareNextCertK(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index);

  /// @brief Method PrepareNextCertL, addr 0x10fd9a8, size 0x1b0, virtual false, abstract: false, final false
  static inline int32_t PrepareNextCertL(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t maxPathLength);

  /// @brief Method PrepareNextCertM, addr 0x10fdb58, size 0x27c, virtual false, abstract: false, final false
  static inline int32_t PrepareNextCertM(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t maxPathLength);

  /// @brief Method PrepareNextCertN, addr 0x10fddd4, size 0x1c4, virtual false, abstract: false, final false
  static inline void PrepareNextCertN(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index);

  /// @brief Method PrepareNextCertO, addr 0x10fdf98, size 0x4b4, virtual false, abstract: false, final false
  static inline void PrepareNextCertO(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, ::Org::BouncyCastle::Utilities::Collections::ISet* criticalExtensions,
                                      ::System::Collections::IList* pathCheckers);

  /// @brief Method PrepareNextCertH1, addr 0x10fc7fc, size 0x160, virtual false, abstract: false, final false
  static inline int32_t PrepareNextCertH1(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t explicitPolicy);

  /// @brief Method PrepareNextCertH2, addr 0x10fc95c, size 0x160, virtual false, abstract: false, final false
  static inline int32_t PrepareNextCertH2(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t policyMapping);

  /// @brief Method PrepareNextCertH3, addr 0x10fcabc, size 0x160, virtual false, abstract: false, final false
  static inline int32_t PrepareNextCertH3(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t inhibitAnyPolicy);

  /// @brief Method WrapupCertA, addr 0x10fe840, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t WrapupCertA(int32_t explicitPolicy, ::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method WrapupCertB, addr 0x10fe8bc, size 0x450, virtual false, abstract: false, final false
  static inline int32_t WrapupCertB(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t explicitPolicy);

  /// @brief Method WrapupCertF, addr 0x10fed0c, size 0x498, virtual false, abstract: false, final false
  static inline void WrapupCertF(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, ::System::Collections::IList* pathCheckers,
                                 ::Org::BouncyCastle::Utilities::Collections::ISet* criticalExtensions);

  /// @brief Method WrapupCertG, addr 0x10ff1a4, size 0x1520, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* WrapupCertG(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                                                                       ::Org::BouncyCastle::Utilities::Collections::ISet* userInitialPolicySet, int32_t index,
                                                                       ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> policyNodes,
                                                                       ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree,
                                                                       ::Org::BouncyCastle::Utilities::Collections::ISet* acceptablePolicies);

  /// @brief Method ProcessCrlC, addr 0x1116da0, size 0x588, virtual false, abstract: false, final false
  static inline void ProcessCrlC(::Org::BouncyCastle::X509::X509Crl* deltaCRL, ::Org::BouncyCastle::X509::X509Crl* completeCRL, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);

  /// @brief Method ProcessCrlI, addr 0x1117328, size 0xb8, virtual false, abstract: false, final false
  static inline void ProcessCrlI(::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Crl* deltacrl, ::System::Object* cert, ::Org::BouncyCastle::Pkix::CertStatus* certStatus,
                                 ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);

  /// @brief Method ProcessCrlJ, addr 0x11173e0, size 0x98, virtual false, abstract: false, final false
  static inline void ProcessCrlJ(::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Crl* completecrl, ::System::Object* cert, ::Org::BouncyCastle::Pkix::CertStatus* certStatus);

  /// @brief Method ProcessCertE, addr 0x10f9cc0, size 0x260, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* ProcessCertE(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree);

  static inline ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x1118b9c, size 0x1008, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Rfc3280CertPathUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rfc3280CertPathUtilities(Rfc3280CertPathUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rfc3280CertPathUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rfc3280CertPathUtilities(Rfc3280CertPathUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rfc3280CertPathUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*, "Org.BouncyCastle.Pkix", "Rfc3280CertPathUtilities");
