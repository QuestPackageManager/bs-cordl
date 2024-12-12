#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/X509Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(X509Extensions)
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extension;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509Extensions);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.X509Extensions
class CORDL_TYPE X509Extensions : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field AuditIdentity, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AuditIdentity, put = setStaticF_AuditIdentity)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* AuditIdentity;

  /// @brief Field AuthorityInfoAccess, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AuthorityInfoAccess, put = setStaticF_AuthorityInfoAccess)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* AuthorityInfoAccess;

  /// @brief Field AuthorityKeyIdentifier, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AuthorityKeyIdentifier, put = setStaticF_AuthorityKeyIdentifier)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* AuthorityKeyIdentifier;

  /// @brief Field BasicConstraints, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BasicConstraints, put = setStaticF_BasicConstraints)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* BasicConstraints;

  /// @brief Field BiometricInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BiometricInfo, put = setStaticF_BiometricInfo)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* BiometricInfo;

  /// @brief Field CertificateIssuer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CertificateIssuer, put = setStaticF_CertificateIssuer)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* CertificateIssuer;

  /// @brief Field CertificatePolicies, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CertificatePolicies, put = setStaticF_CertificatePolicies)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* CertificatePolicies;

  /// @brief Field CrlDistributionPoints, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CrlDistributionPoints, put = setStaticF_CrlDistributionPoints)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* CrlDistributionPoints;

  /// @brief Field CrlNumber, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CrlNumber, put = setStaticF_CrlNumber)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* CrlNumber;

  /// @brief Field DeltaCrlIndicator, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DeltaCrlIndicator, put = setStaticF_DeltaCrlIndicator)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* DeltaCrlIndicator;

  /// @brief Field ExpiredCertsOnCrl, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ExpiredCertsOnCrl, put = setStaticF_ExpiredCertsOnCrl)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ExpiredCertsOnCrl;

  /// @brief Field ExtendedKeyUsage, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ExtendedKeyUsage, put = setStaticF_ExtendedKeyUsage)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ExtendedKeyUsage;

  __declspec(property(get = get_ExtensionOids)) ::System::Collections::IEnumerable* ExtensionOids;

  /// @brief Field FreshestCrl, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_FreshestCrl, put = setStaticF_FreshestCrl)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* FreshestCrl;

  /// @brief Field InhibitAnyPolicy, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InhibitAnyPolicy, put = setStaticF_InhibitAnyPolicy)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* InhibitAnyPolicy;

  /// @brief Field InstructionCode, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InstructionCode, put = setStaticF_InstructionCode)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* InstructionCode;

  /// @brief Field InvalidityDate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InvalidityDate, put = setStaticF_InvalidityDate)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* InvalidityDate;

  /// @brief Field IssuerAlternativeName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IssuerAlternativeName, put = setStaticF_IssuerAlternativeName)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IssuerAlternativeName;

  /// @brief Field IssuingDistributionPoint, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IssuingDistributionPoint, put = setStaticF_IssuingDistributionPoint)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IssuingDistributionPoint;

  /// @brief Field KeyUsage, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_KeyUsage, put = setStaticF_KeyUsage)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* KeyUsage;

  /// @brief Field LogoType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_LogoType, put = setStaticF_LogoType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* LogoType;

  /// @brief Field NameConstraints, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NameConstraints, put = setStaticF_NameConstraints)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* NameConstraints;

  /// @brief Field NoRevAvail, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NoRevAvail, put = setStaticF_NoRevAvail)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* NoRevAvail;

  /// @brief Field PolicyConstraints, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PolicyConstraints, put = setStaticF_PolicyConstraints)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* PolicyConstraints;

  /// @brief Field PolicyMappings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PolicyMappings, put = setStaticF_PolicyMappings)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* PolicyMappings;

  /// @brief Field PrivateKeyUsagePeriod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PrivateKeyUsagePeriod, put = setStaticF_PrivateKeyUsagePeriod)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* PrivateKeyUsagePeriod;

  /// @brief Field QCStatements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_QCStatements, put = setStaticF_QCStatements)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* QCStatements;

  /// @brief Field ReasonCode, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ReasonCode, put = setStaticF_ReasonCode)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ReasonCode;

  /// @brief Field SubjectAlternativeName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SubjectAlternativeName, put = setStaticF_SubjectAlternativeName)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* SubjectAlternativeName;

  /// @brief Field SubjectDirectoryAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SubjectDirectoryAttributes, put = setStaticF_SubjectDirectoryAttributes)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* SubjectDirectoryAttributes;

  /// @brief Field SubjectInfoAccess, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SubjectInfoAccess, put = setStaticF_SubjectInfoAccess)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* SubjectInfoAccess;

  /// @brief Field SubjectKeyIdentifier, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SubjectKeyIdentifier, put = setStaticF_SubjectKeyIdentifier)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* SubjectKeyIdentifier;

  /// @brief Field TargetInformation, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TargetInformation, put = setStaticF_TargetInformation)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* TargetInformation;

  /// @brief Field extensions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_extensions, put = __cordl_internal_set_extensions)) ::System::Collections::IDictionary* extensions;

  /// @brief Field ordering, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ordering, put = __cordl_internal_set_ordering)) ::System::Collections::IList* ordering;

  /// @brief Method Equivalent, addr 0x26161d0, size 0x5cc, virtual false, abstract: false, final false
  inline bool Equivalent(::Org::BouncyCastle::Asn1::X509::X509Extensions* other);

  /// @brief Method GetCriticalExtensionOids, addr 0x2616e4c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> GetCriticalExtensionOids();

  /// @brief Method GetExtension, addr 0x2614358, size 0xc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509Extension* GetExtension(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetExtension, addr 0x261336c, size 0xf4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extension* GetExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetExtensionOids, addr 0x261679c, size 0x58, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> GetExtensionOids();

  /// @brief Method GetExtensionOids, addr 0x261692c, size 0x520, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> GetExtensionOids(bool isCritical);

  /// @brief Method GetExtensionParsedValue, addr 0x2601694, size 0xc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetExtensionParsedValue(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetExtensionParsedValue, addr 0x2614364, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetExtensionParsedValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetInstance, addr 0x2614380, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x260f50c, size 0x1e0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetInstance(::System::Object* obj);

  /// @brief Method GetNonCriticalExtensionOids, addr 0x2616924, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> GetNonCriticalExtensionOids();

  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::Hashtable* extensions);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::IDictionary* extensions);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::ArrayList* oids, ::System::Collections::ArrayList* values);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::IList* oids, ::System::Collections::IList* values);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::ArrayList* ordering, ::System::Collections::Hashtable* extensions);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::IList* ordering, ::System::Collections::IDictionary* extensions);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method Oids, addr 0x2615ae0, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Oids();

  /// @brief Method ToAsn1Object, addr 0x2615be8, size 0x5e8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToOidArray, addr 0x26167f4, size 0x130, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> ToOidArray(::System::Collections::IList* oids);

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_extensions() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_extensions();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_ordering() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_ordering();

  constexpr void __cordl_internal_set_extensions(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_ordering(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x2615148, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Hashtable* extensions);

  /// @brief Method .ctor, addr 0x2614bd0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* extensions);

  /// @brief Method .ctor, addr 0x261562c, size 0x4b4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ArrayList* oids, ::System::Collections::ArrayList* values);

  /// @brief Method .ctor, addr 0x2612604, size 0x50c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* oids, ::System::Collections::IList* values);

  /// @brief Method .ctor, addr 0x2615154, size 0x4d8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ArrayList* ordering, ::System::Collections::Hashtable* extensions);

  /// @brief Method .ctor, addr 0x2614bdc, size 0x56c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* ordering, ::System::Collections::IDictionary* extensions);

  /// @brief Method .ctor, addr 0x26143f8, size 0x7d8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_AuditIdentity();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_AuthorityInfoAccess();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_AuthorityKeyIdentifier();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BasicConstraints();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BiometricInfo();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CertificateIssuer();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CertificatePolicies();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CrlDistributionPoints();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CrlNumber();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DeltaCrlIndicator();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ExpiredCertsOnCrl();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ExtendedKeyUsage();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_FreshestCrl();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_InhibitAnyPolicy();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_InstructionCode();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_InvalidityDate();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IssuerAlternativeName();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IssuingDistributionPoint();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_KeyUsage();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_LogoType();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NameConstraints();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NoRevAvail();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PolicyConstraints();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PolicyMappings();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PrivateKeyUsagePeriod();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_QCStatements();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ReasonCode();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SubjectAlternativeName();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SubjectDirectoryAttributes();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SubjectInfoAccess();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SubjectKeyIdentifier();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_TargetInformation();

  /// @brief Method get_ExtensionOids, addr 0x2615b88, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* get_ExtensionOids();

  static inline void setStaticF_AuditIdentity(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_AuthorityInfoAccess(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_AuthorityKeyIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_BasicConstraints(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_BiometricInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_CertificateIssuer(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_CertificatePolicies(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_CrlDistributionPoints(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_CrlNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_DeltaCrlIndicator(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ExpiredCertsOnCrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ExtendedKeyUsage(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_FreshestCrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_InhibitAnyPolicy(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_InstructionCode(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_InvalidityDate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IssuerAlternativeName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IssuingDistributionPoint(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_KeyUsage(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_LogoType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_NameConstraints(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_NoRevAvail(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PolicyConstraints(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PolicyMappings(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PrivateKeyUsagePeriod(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_QCStatements(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ReasonCode(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SubjectAlternativeName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SubjectDirectoryAttributes(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SubjectInfoAccess(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SubjectKeyIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_TargetInformation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Extensions(X509Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Extensions(X509Extensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 406 };

  /// @brief Field extensions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___extensions;

  /// @brief Field ordering, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___ordering;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::X509Extensions, ___extensions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::X509Extensions, ___ordering) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509Extensions, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509Extensions*, "Org.BouncyCastle.Asn1.X509", "X509Extensions");
