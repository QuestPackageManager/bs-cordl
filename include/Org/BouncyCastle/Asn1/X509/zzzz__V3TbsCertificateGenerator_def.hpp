#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(V3TbsCertificateGenerator)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateStructure;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerTaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtcTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class V3TbsCertificateGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator);
// Type: Org.BouncyCastle.Asn1.X509::V3TbsCertificateGenerator
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(400))
// CS Name: ::Org.BouncyCastle.Asn1.X509::V3TbsCertificateGenerator*
class CORDL_TYPE V3TbsCertificateGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerTaggedObject* version;

  /// @brief Field serialNumber, offset 0x18, size 0x8
  __declspec(property(get = __get_serialNumber, put = __set_serialNumber))::Org::BouncyCastle::Asn1::DerInteger* serialNumber;

  /// @brief Field signature, offset 0x20, size 0x8
  __declspec(property(get = __get_signature, put = __set_signature))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature;

  /// @brief Field issuer, offset 0x28, size 0x8
  __declspec(property(get = __get_issuer, put = __set_issuer))::Org::BouncyCastle::Asn1::X509::X509Name* issuer;

  /// @brief Field startDate, offset 0x30, size 0x8
  __declspec(property(get = __get_startDate, put = __set_startDate))::Org::BouncyCastle::Asn1::X509::Time* startDate;

  /// @brief Field endDate, offset 0x38, size 0x8
  __declspec(property(get = __get_endDate, put = __set_endDate))::Org::BouncyCastle::Asn1::X509::Time* endDate;

  /// @brief Field subject, offset 0x40, size 0x8
  __declspec(property(get = __get_subject, put = __set_subject))::Org::BouncyCastle::Asn1::X509::X509Name* subject;

  /// @brief Field subjectPublicKeyInfo, offset 0x48, size 0x8
  __declspec(property(get = __get_subjectPublicKeyInfo, put = __set_subjectPublicKeyInfo))::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* subjectPublicKeyInfo;

  /// @brief Field extensions, offset 0x50, size 0x8
  __declspec(property(get = __get_extensions, put = __set_extensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;

  /// @brief Field altNamePresentAndCritical, offset 0x58, size 0x1
  __declspec(property(get = __get_altNamePresentAndCritical, put = __set_altNamePresentAndCritical)) bool altNamePresentAndCritical;

  /// @brief Field issuerUniqueID, offset 0x60, size 0x8
  __declspec(property(get = __get_issuerUniqueID, put = __set_issuerUniqueID))::Org::BouncyCastle::Asn1::DerBitString* issuerUniqueID;

  /// @brief Field subjectUniqueID, offset 0x68, size 0x8
  __declspec(property(get = __get_subjectUniqueID, put = __set_subjectUniqueID))::Org::BouncyCastle::Asn1::DerBitString* subjectUniqueID;

  constexpr ::Org::BouncyCastle::Asn1::DerTaggedObject*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerTaggedObject*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerTaggedObject* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_serialNumber();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_serialNumber() const;

  constexpr void __set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_signature();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_signature() const;

  constexpr void __set_signature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __get_issuer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& __get_issuer() const;

  constexpr void __set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::Time*& __get_startDate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Time*> const& __get_startDate() const;

  constexpr void __set_startDate(::Org::BouncyCastle::Asn1::X509::Time* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::Time*& __get_endDate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Time*> const& __get_endDate() const;

  constexpr void __set_endDate(::Org::BouncyCastle::Asn1::X509::Time* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __get_subject();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& __get_subject() const;

  constexpr void __set_subject(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& __get_subjectPublicKeyInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*> const& __get_subjectPublicKeyInfo() const;

  constexpr void __set_subjectPublicKeyInfo(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __get_extensions();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& __get_extensions() const;

  constexpr void __set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  constexpr bool& __get_altNamePresentAndCritical();

  constexpr bool const& __get_altNamePresentAndCritical() const;

  constexpr void __set_altNamePresentAndCritical(bool value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_issuerUniqueID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_issuerUniqueID() const;

  constexpr void __set_issuerUniqueID(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_subjectUniqueID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_subjectUniqueID() const;

  constexpr void __set_subjectUniqueID(::Org::BouncyCastle::Asn1::DerBitString* value);

  static inline ::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x119cb7c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method SetSerialNumber, addr 0x119cc1c, size 0x8, virtual false, abstract: false, final false
  inline void SetSerialNumber(::Org::BouncyCastle::Asn1::DerInteger* serialNumber);

  /// @brief Method SetSignature, addr 0x119cc24, size 0x8, virtual false, abstract: false, final false
  inline void SetSignature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature);

  /// @brief Method SetIssuer, addr 0x119cc2c, size 0x8, virtual false, abstract: false, final false
  inline void SetIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* issuer);

  /// @brief Method SetStartDate, addr 0x119cc34, size 0x6c, virtual false, abstract: false, final false
  inline void SetStartDate(::Org::BouncyCastle::Asn1::DerUtcTime* startDate);

  /// @brief Method SetStartDate, addr 0x119cca0, size 0x8, virtual false, abstract: false, final false
  inline void SetStartDate(::Org::BouncyCastle::Asn1::X509::Time* startDate);

  /// @brief Method SetEndDate, addr 0x119cca8, size 0x6c, virtual false, abstract: false, final false
  inline void SetEndDate(::Org::BouncyCastle::Asn1::DerUtcTime* endDate);

  /// @brief Method SetEndDate, addr 0x119cd14, size 0x8, virtual false, abstract: false, final false
  inline void SetEndDate(::Org::BouncyCastle::Asn1::X509::Time* endDate);

  /// @brief Method SetSubject, addr 0x119cd1c, size 0x8, virtual false, abstract: false, final false
  inline void SetSubject(::Org::BouncyCastle::Asn1::X509::X509Name* subject);

  /// @brief Method SetIssuerUniqueID, addr 0x119cd24, size 0x8, virtual false, abstract: false, final false
  inline void SetIssuerUniqueID(::Org::BouncyCastle::Asn1::DerBitString* uniqueID);

  /// @brief Method SetSubjectUniqueID, addr 0x119cd2c, size 0x8, virtual false, abstract: false, final false
  inline void SetSubjectUniqueID(::Org::BouncyCastle::Asn1::DerBitString* uniqueID);

  /// @brief Method SetSubjectPublicKeyInfo, addr 0x119cd34, size 0x8, virtual false, abstract: false, final false
  inline void SetSubjectPublicKeyInfo(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* pubKeyInfo);

  /// @brief Method SetExtensions, addr 0x119cd3c, size 0x84, virtual false, abstract: false, final false
  inline void SetExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method GenerateTbsCertificate, addr 0x119ceb4, size 0x3ec, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* GenerateTbsCertificate();

  // Ctor Parameters [CppParam { name: "", ty: "V3TbsCertificateGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  V3TbsCertificateGenerator(V3TbsCertificateGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "V3TbsCertificateGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  V3TbsCertificateGenerator(V3TbsCertificateGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr V3TbsCertificateGenerator();

public:
  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerTaggedObject* ___version;

  /// @brief Field serialNumber, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___serialNumber;

  /// @brief Field signature, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___signature;

  /// @brief Field issuer, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___issuer;

  /// @brief Field startDate, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::Time* ___startDate;

  /// @brief Field endDate, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::Time* ___endDate;

  /// @brief Field subject, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___subject;

  /// @brief Field subjectPublicKeyInfo, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* ___subjectPublicKeyInfo;

  /// @brief Field extensions, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___extensions;

  /// @brief Field altNamePresentAndCritical, offset: 0x58, size: 0x1, def value: None
  bool ___altNamePresentAndCritical;

  /// @brief Field issuerUniqueID, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___issuerUniqueID;

  /// @brief Field subjectUniqueID, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___subjectUniqueID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator, 0x70>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator, ___serialNumber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator, ___signature) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator, ___issuer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator, ___startDate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator, ___endDate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator, ___subject) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator, ___subjectPublicKeyInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator, ___extensions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator, ___altNamePresentAndCritical) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator, ___issuerUniqueID) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator, ___subjectUniqueID) == 0x68, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator*, "Org.BouncyCastle.Asn1.X509", "V3TbsCertificateGenerator");
