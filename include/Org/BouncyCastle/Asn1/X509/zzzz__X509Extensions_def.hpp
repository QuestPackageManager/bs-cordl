#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(X509Extensions)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extension;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509Extensions);
// Type: Org.BouncyCastle.Asn1.X509::X509Extensions
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(406))
// CS Name: ::Org.BouncyCastle.Asn1.X509::X509Extensions*
class CORDL_TYPE X509Extensions : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field extensions, offset 0x10, size 0x8
  __declspec(property(get = __get_extensions, put = __set_extensions))::System::Collections::IDictionary* extensions;

  /// @brief Field ordering, offset 0x18, size 0x8
  __declspec(property(get = __get_ordering, put = __set_ordering))::System::Collections::IList* ordering;

  /// @brief Field SubjectDirectoryAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SubjectDirectoryAttributes, put = setStaticF_SubjectDirectoryAttributes))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SubjectDirectoryAttributes;

  /// @brief Field SubjectKeyIdentifier, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SubjectKeyIdentifier, put = setStaticF_SubjectKeyIdentifier))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SubjectKeyIdentifier;

  /// @brief Field KeyUsage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_KeyUsage, put = setStaticF_KeyUsage))::Org::BouncyCastle::Asn1::DerObjectIdentifier* KeyUsage;

  /// @brief Field PrivateKeyUsagePeriod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PrivateKeyUsagePeriod, put = setStaticF_PrivateKeyUsagePeriod))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PrivateKeyUsagePeriod;

  /// @brief Field SubjectAlternativeName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SubjectAlternativeName, put = setStaticF_SubjectAlternativeName))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SubjectAlternativeName;

  /// @brief Field IssuerAlternativeName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IssuerAlternativeName, put = setStaticF_IssuerAlternativeName))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IssuerAlternativeName;

  /// @brief Field BasicConstraints, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BasicConstraints, put = setStaticF_BasicConstraints))::Org::BouncyCastle::Asn1::DerObjectIdentifier* BasicConstraints;

  /// @brief Field CrlNumber, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CrlNumber, put = setStaticF_CrlNumber))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CrlNumber;

  /// @brief Field ReasonCode, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReasonCode, put = setStaticF_ReasonCode))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ReasonCode;

  /// @brief Field InstructionCode, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InstructionCode, put = setStaticF_InstructionCode))::Org::BouncyCastle::Asn1::DerObjectIdentifier* InstructionCode;

  /// @brief Field InvalidityDate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvalidityDate, put = setStaticF_InvalidityDate))::Org::BouncyCastle::Asn1::DerObjectIdentifier* InvalidityDate;

  /// @brief Field DeltaCrlIndicator, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeltaCrlIndicator, put = setStaticF_DeltaCrlIndicator))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DeltaCrlIndicator;

  /// @brief Field IssuingDistributionPoint, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IssuingDistributionPoint, put = setStaticF_IssuingDistributionPoint))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IssuingDistributionPoint;

  /// @brief Field CertificateIssuer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CertificateIssuer, put = setStaticF_CertificateIssuer))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CertificateIssuer;

  /// @brief Field NameConstraints, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NameConstraints, put = setStaticF_NameConstraints))::Org::BouncyCastle::Asn1::DerObjectIdentifier* NameConstraints;

  /// @brief Field CrlDistributionPoints, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CrlDistributionPoints, put = setStaticF_CrlDistributionPoints))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CrlDistributionPoints;

  /// @brief Field CertificatePolicies, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CertificatePolicies, put = setStaticF_CertificatePolicies))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CertificatePolicies;

  /// @brief Field PolicyMappings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PolicyMappings, put = setStaticF_PolicyMappings))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PolicyMappings;

  /// @brief Field AuthorityKeyIdentifier, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AuthorityKeyIdentifier, put = setStaticF_AuthorityKeyIdentifier))::Org::BouncyCastle::Asn1::DerObjectIdentifier* AuthorityKeyIdentifier;

  /// @brief Field PolicyConstraints, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PolicyConstraints, put = setStaticF_PolicyConstraints))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PolicyConstraints;

  /// @brief Field ExtendedKeyUsage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ExtendedKeyUsage, put = setStaticF_ExtendedKeyUsage))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ExtendedKeyUsage;

  /// @brief Field FreshestCrl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FreshestCrl, put = setStaticF_FreshestCrl))::Org::BouncyCastle::Asn1::DerObjectIdentifier* FreshestCrl;

  /// @brief Field InhibitAnyPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InhibitAnyPolicy, put = setStaticF_InhibitAnyPolicy))::Org::BouncyCastle::Asn1::DerObjectIdentifier* InhibitAnyPolicy;

  /// @brief Field AuthorityInfoAccess, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AuthorityInfoAccess, put = setStaticF_AuthorityInfoAccess))::Org::BouncyCastle::Asn1::DerObjectIdentifier* AuthorityInfoAccess;

  /// @brief Field SubjectInfoAccess, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SubjectInfoAccess, put = setStaticF_SubjectInfoAccess))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SubjectInfoAccess;

  /// @brief Field LogoType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LogoType, put = setStaticF_LogoType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* LogoType;

  /// @brief Field BiometricInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BiometricInfo, put = setStaticF_BiometricInfo))::Org::BouncyCastle::Asn1::DerObjectIdentifier* BiometricInfo;

  /// @brief Field QCStatements, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_QCStatements, put = setStaticF_QCStatements))::Org::BouncyCastle::Asn1::DerObjectIdentifier* QCStatements;

  /// @brief Field AuditIdentity, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AuditIdentity, put = setStaticF_AuditIdentity))::Org::BouncyCastle::Asn1::DerObjectIdentifier* AuditIdentity;

  /// @brief Field NoRevAvail, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NoRevAvail, put = setStaticF_NoRevAvail))::Org::BouncyCastle::Asn1::DerObjectIdentifier* NoRevAvail;

  /// @brief Field TargetInformation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TargetInformation, put = setStaticF_TargetInformation))::Org::BouncyCastle::Asn1::DerObjectIdentifier* TargetInformation;

  /// @brief Field ExpiredCertsOnCrl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ExpiredCertsOnCrl, put = setStaticF_ExpiredCertsOnCrl))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ExpiredCertsOnCrl;

  __declspec(property(get = get_ExtensionOids))::System::Collections::IEnumerable* ExtensionOids;

  constexpr ::System::Collections::IDictionary*& __get_extensions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get_extensions() const;

  constexpr void __set_extensions(::System::Collections::IDictionary* value);

  constexpr ::System::Collections::IList*& __get_ordering();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_ordering() const;

  constexpr void __set_ordering(::System::Collections::IList* value);

  static inline void setStaticF_SubjectDirectoryAttributes(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SubjectDirectoryAttributes();

  static inline void setStaticF_SubjectKeyIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SubjectKeyIdentifier();

  static inline void setStaticF_KeyUsage(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_KeyUsage();

  static inline void setStaticF_PrivateKeyUsagePeriod(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PrivateKeyUsagePeriod();

  static inline void setStaticF_SubjectAlternativeName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SubjectAlternativeName();

  static inline void setStaticF_IssuerAlternativeName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IssuerAlternativeName();

  static inline void setStaticF_BasicConstraints(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BasicConstraints();

  static inline void setStaticF_CrlNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CrlNumber();

  static inline void setStaticF_ReasonCode(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ReasonCode();

  static inline void setStaticF_InstructionCode(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_InstructionCode();

  static inline void setStaticF_InvalidityDate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_InvalidityDate();

  static inline void setStaticF_DeltaCrlIndicator(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DeltaCrlIndicator();

  static inline void setStaticF_IssuingDistributionPoint(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IssuingDistributionPoint();

  static inline void setStaticF_CertificateIssuer(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CertificateIssuer();

  static inline void setStaticF_NameConstraints(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NameConstraints();

  static inline void setStaticF_CrlDistributionPoints(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CrlDistributionPoints();

  static inline void setStaticF_CertificatePolicies(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CertificatePolicies();

  static inline void setStaticF_PolicyMappings(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PolicyMappings();

  static inline void setStaticF_AuthorityKeyIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_AuthorityKeyIdentifier();

  static inline void setStaticF_PolicyConstraints(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PolicyConstraints();

  static inline void setStaticF_ExtendedKeyUsage(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ExtendedKeyUsage();

  static inline void setStaticF_FreshestCrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_FreshestCrl();

  static inline void setStaticF_InhibitAnyPolicy(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_InhibitAnyPolicy();

  static inline void setStaticF_AuthorityInfoAccess(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_AuthorityInfoAccess();

  static inline void setStaticF_SubjectInfoAccess(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SubjectInfoAccess();

  static inline void setStaticF_LogoType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_LogoType();

  static inline void setStaticF_BiometricInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BiometricInfo();

  static inline void setStaticF_QCStatements(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_QCStatements();

  static inline void setStaticF_AuditIdentity(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_AuditIdentity();

  static inline void setStaticF_NoRevAvail(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NoRevAvail();

  static inline void setStaticF_TargetInformation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_TargetInformation();

  static inline void setStaticF_ExpiredCertsOnCrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ExpiredCertsOnCrl();

  /// @brief Method GetExtension, addr 0x119ddec, size 0xc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509Extension* GetExtension(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetExtensionParsedValue, addr 0x118ab94, size 0xc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetExtensionParsedValue(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetInstance, addr 0x119de14, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x1198e28, size 0x1ec, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x119de8c, size 0x7f0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::IDictionary* extensions);

  /// @brief Method .ctor, addr 0x119e67c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* extensions);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::IList* ordering, ::System::Collections::IDictionary* extensions);

  /// @brief Method .ctor, addr 0x119e688, size 0x564, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* ordering, ::System::Collections::IDictionary* extensions);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::IList* oids, ::System::Collections::IList* values);

  /// @brief Method .ctor, addr 0x119c044, size 0x4fc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* oids, ::System::Collections::IList* values);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::Hashtable* extensions);

  /// @brief Method .ctor, addr 0x119ebec, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Hashtable* extensions);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::ArrayList* ordering, ::System::Collections::Hashtable* extensions);

  /// @brief Method .ctor, addr 0x119ebf8, size 0x4d8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ArrayList* ordering, ::System::Collections::Hashtable* extensions);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::ArrayList* oids, ::System::Collections::ArrayList* values);

  /// @brief Method .ctor, addr 0x119f0d0, size 0x4a4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ArrayList* oids, ::System::Collections::ArrayList* values);

  /// @brief Method Oids, addr 0x119f574, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Oids();

  /// @brief Method get_ExtensionOids, addr 0x119f61c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* get_ExtensionOids();

  /// @brief Method GetExtension, addr 0x119cdc0, size 0xf4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extension* GetExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetExtensionParsedValue, addr 0x119ddf8, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetExtensionParsedValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method ToAsn1Object, addr 0x119f684, size 0x5d8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method Equivalent, addr 0x119fc5c, size 0x5d0, virtual false, abstract: false, final false
  inline bool Equivalent(::Org::BouncyCastle::Asn1::X509::X509Extensions* other);

  /// @brief Method GetExtensionOids, addr 0x11a022c, size 0x58, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> GetExtensionOids();

  /// @brief Method GetNonCriticalExtensionOids, addr 0x11a03b4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> GetNonCriticalExtensionOids();

  /// @brief Method GetCriticalExtensionOids, addr 0x11a08cc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> GetCriticalExtensionOids();

  /// @brief Method GetExtensionOids, addr 0x11a03bc, size 0x510, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> GetExtensionOids(bool isCritical);

  /// @brief Method ToOidArray, addr 0x11a0284, size 0x130, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> ToOidArray(::System::Collections::IList* oids);

  // Ctor Parameters [CppParam { name: "", ty: "X509Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Extensions(X509Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Extensions(X509Extensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Extensions();

public:
  /// @brief Field extensions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___extensions;

  /// @brief Field ordering, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___ordering;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509Extensions, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::X509Extensions, ___extensions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::X509Extensions, ___ordering) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509Extensions*, "Org.BouncyCastle.Asn1.X509", "X509Extensions");
