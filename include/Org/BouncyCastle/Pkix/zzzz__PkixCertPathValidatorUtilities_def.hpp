#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixCertPathValidatorUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkixCertPathValidatorUtilities)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CrlDistPoint;
}
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPoint;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Pkix {
class CertStatus;
}
namespace Org::BouncyCastle::Pkix {
class PkixBuilderParameters;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
namespace Org::BouncyCastle::Pkix {
class PkixCrlUtilities;
}
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
namespace Org::BouncyCastle::Pkix {
class PkixPolicyNode;
}
namespace Org::BouncyCastle::Pkix {
class TrustAnchor;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::X509::Store {
class X509AttrCertStoreSelector;
}
namespace Org::BouncyCastle::X509::Store {
class X509CertStoreSelector;
}
namespace Org::BouncyCastle::X509::Store {
class X509CrlStoreSelector;
}
namespace Org::BouncyCastle::X509 {
class IX509Extension;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::X509 {
class X509Crl;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
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
class PkixCertPathValidatorUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities);
// Dependencies System.Object
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// CS Name: Org.BouncyCastle.Pkix.PkixCertPathValidatorUtilities
class CORDL_TYPE PkixCertPathValidatorUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field ANY_POLICY, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ANY_POLICY, put = setStaticF_ANY_POLICY)) ::StringW ANY_POLICY;

  /// @brief Field CRL_NUMBER, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CRL_NUMBER, put = setStaticF_CRL_NUMBER)) ::StringW CRL_NUMBER;

  /// @brief Field CRL_SIGN, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_CRL_SIGN, put = setStaticF_CRL_SIGN)) int32_t CRL_SIGN;

  /// @brief Field CrlUtilities, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CrlUtilities, put = setStaticF_CrlUtilities)) ::Org::BouncyCastle::Pkix::PkixCrlUtilities* CrlUtilities;

  /// @brief Field KEY_CERT_SIGN, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_KEY_CERT_SIGN, put = setStaticF_KEY_CERT_SIGN)) int32_t KEY_CERT_SIGN;

  /// @brief Field crlReasons, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_crlReasons, put = setStaticF_crlReasons)) ::ArrayW<::StringW, ::Array<::StringW>*> crlReasons;

  /// @brief Method AddAdditionalStoreFromLocation, addr 0x257ecc4, size 0x248, virtual false, abstract: false, final false
  static inline void AddAdditionalStoreFromLocation(::StringW location, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);

  /// @brief Method AddAdditionalStoresFromAltNames, addr 0x2569c34, size 0x378, virtual false, abstract: false, final false
  static inline void AddAdditionalStoresFromAltNames(::Org::BouncyCastle::X509::X509Certificate* cert, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);

  /// @brief Method AddAdditionalStoresFromCrlDistributionPoint, addr 0x25826c4, size 0x214, virtual false, abstract: false, final false
  static inline void AddAdditionalStoresFromCrlDistributionPoint(::Org::BouncyCastle::Asn1::X509::CrlDistPoint* crldp, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);

  /// @brief Method FindCertificates, addr 0x2567de0, size 0x81c, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* FindCertificates(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* certSelect, ::System::Collections::IList* certStores);

  /// @brief Method FindCertificates, addr 0x2568600, size 0x81c, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* FindCertificates(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* certSelect, ::System::Collections::IList* certStores);

  /// @brief Method FindIssuerCerts, addr 0x2569fac, size 0x364, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* FindIssuerCerts(::Org::BouncyCastle::X509::X509Certificate* cert, ::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams);

  /// @brief Method FindTrustAnchor, addr 0x25749e0, size 0x56c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Pkix::TrustAnchor* FindTrustAnchor(::Org::BouncyCastle::X509::X509Certificate* cert, ::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors);

  /// @brief Method GetAlgorithmIdentifier, addr 0x25751f8, size 0xe4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetAlgorithmIdentifier(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);

  /// @brief Method GetCertStatus, addr 0x2580e58, size 0x470, virtual false, abstract: false, final false
  static inline void GetCertStatus(::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Crl* crl, ::System::Object* cert, ::Org::BouncyCastle::Pkix::CertStatus* certStatus);

  /// @brief Method GetCompleteCrls, addr 0x2581794, size 0x5a4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetCompleteCrls(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, ::System::Object* cert, ::System::DateTime currentDate,
                                                                                   ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX);

  /// @brief Method GetCrlIssuersFromDistributionPoint, addr 0x25812c8, size 0x4cc, virtual false, abstract: false, final false
  static inline void GetCrlIssuersFromDistributionPoint(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, ::System::Collections::ICollection* issuerPrincipals,
                                                        ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* selector, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);

  /// @brief Method GetDeltaCrls, addr 0x2581d38, size 0x894, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetDeltaCrls(::System::DateTime currentDate, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                                                                                ::Org::BouncyCastle::X509::X509Crl* completeCRL);

  /// @brief Method GetExtensionValue, addr 0x25806c8, size 0xc0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* GetExtensionValue(::Org::BouncyCastle::X509::IX509Extension* ext, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetIssuerPrincipal, addr 0x257eb64, size 0x160, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* GetIssuerPrincipal(::System::Object* cert);

  /// @brief Method GetNextWorkingKey, addr 0x257c87c, size 0x3dc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetNextWorkingKey(::System::Collections::IList* certs, int32_t index);

  /// @brief Method GetQualifierSet, addr 0x257f1b4, size 0x468, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetQualifierSet(::Org::BouncyCastle::Asn1::Asn1Sequence* qualifiers);

  /// @brief Method GetSerialNumber, addr 0x257f0e8, size 0xcc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* GetSerialNumber(::System::Object* cert);

  /// @brief Method GetValidCertDateFromValidityModel, addr 0x256a738, size 0x444, virtual false, abstract: false, final false
  static inline ::System::DateTime GetValidCertDateFromValidityModel(::Org::BouncyCastle::Pkix::PkixParameters* paramsPkix, ::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index);

  /// @brief Method GetValidDate, addr 0x257ef0c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::DateTime GetValidDate(::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX);

  /// @brief Method IsAnyPolicy, addr 0x257ef90, size 0x158, virtual false, abstract: false, final false
  static inline bool IsAnyPolicy(::Org::BouncyCastle::Utilities::Collections::ISet* policySet);

  /// @brief Method IsIssuerTrustAnchor, addr 0x2569a24, size 0xe8, virtual false, abstract: false, final false
  static inline bool IsIssuerTrustAnchor(::Org::BouncyCastle::X509::X509Certificate* cert, ::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors);

  /// @brief Method IsSelfIssued, addr 0x256a310, size 0x5c, virtual false, abstract: false, final false
  static inline bool IsSelfIssued(::Org::BouncyCastle::X509::X509Certificate* cert);

  static inline ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities* New_ctor();

  /// @brief Method PrepareNextCertB1, addr 0x257fb90, size 0xb38, virtual false, abstract: false, final false
  static inline void PrepareNextCertB1(int32_t i, ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> policyNodes, ::StringW id_p,
                                       ::System::Collections::IDictionary* m_idp, ::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method PrepareNextCertB2, addr 0x2580788, size 0x6d0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* PrepareNextCertB2(int32_t i, ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> policyNodes, ::StringW id_p,
                                                                             ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree);

  /// @brief Method ProcessCertD1i, addr 0x25828d8, size 0x404, virtual false, abstract: false, final false
  static inline bool ProcessCertD1i(int32_t index, ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> policyNodes, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* pOid,
                                    ::Org::BouncyCastle::Utilities::Collections::ISet* pq);

  /// @brief Method ProcessCertD1ii, addr 0x2582cdc, size 0x3dc, virtual false, abstract: false, final false
  static inline void ProcessCertD1ii(int32_t index, ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> policyNodes, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _poid,
                                     ::Org::BouncyCastle::Utilities::Collections::ISet* _pq);

  /// @brief Method RemovePolicyNode, addr 0x257f61c, size 0x13c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* RemovePolicyNode(::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree,
                                                                            ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> policyNodes,
                                                                            ::Org::BouncyCastle::Pkix::PkixPolicyNode* _node);

  /// @brief Method RemovePolicyNodeRecurse, addr 0x257f758, size 0x438, virtual false, abstract: false, final false
  static inline void RemovePolicyNodeRecurse(::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> policyNodes, ::Org::BouncyCastle::Pkix::PkixPolicyNode* _node);

  /// @brief Method .ctor, addr 0x2583370, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_ANY_POLICY();

  static inline ::StringW getStaticF_CRL_NUMBER();

  static inline int32_t getStaticF_CRL_SIGN();

  static inline ::Org::BouncyCastle::Pkix::PkixCrlUtilities* getStaticF_CrlUtilities();

  static inline int32_t getStaticF_KEY_CERT_SIGN();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_crlReasons();

  /// @brief Method isDeltaCrl, addr 0x25825cc, size 0xf8, virtual false, abstract: false, final false
  static inline bool isDeltaCrl(::Org::BouncyCastle::X509::X509Crl* crl);

  static inline void setStaticF_ANY_POLICY(::StringW value);

  static inline void setStaticF_CRL_NUMBER(::StringW value);

  static inline void setStaticF_CRL_SIGN(int32_t value);

  static inline void setStaticF_CrlUtilities(::Org::BouncyCastle::Pkix::PkixCrlUtilities* value);

  static inline void setStaticF_KEY_CERT_SIGN(int32_t value);

  static inline void setStaticF_crlReasons(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixCertPathValidatorUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidatorUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixCertPathValidatorUtilities(PkixCertPathValidatorUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidatorUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixCertPathValidatorUtilities(PkixCertPathValidatorUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1724 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*, "Org.BouncyCastle.Pkix", "PkixCertPathValidatorUtilities");
