#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TbsCertificateStructure)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
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
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateStructure;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure);
// Type: Org.BouncyCastle.Asn1.X509::TbsCertificateStructure
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(389))
// CS Name: ::Org.BouncyCastle.Asn1.X509::TbsCertificateStructure*
class CORDL_TYPE TbsCertificateStructure : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field seq, offset 0x10, size 0x8
  __declspec(property(get = __get_seq, put = __set_seq))::Org::BouncyCastle::Asn1::Asn1Sequence* seq;

  /// @brief Field version, offset 0x18, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field serialNumber, offset 0x20, size 0x8
  __declspec(property(get = __get_serialNumber, put = __set_serialNumber))::Org::BouncyCastle::Asn1::DerInteger* serialNumber;

  /// @brief Field signature, offset 0x28, size 0x8
  __declspec(property(get = __get_signature, put = __set_signature))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature;

  /// @brief Field issuer, offset 0x30, size 0x8
  __declspec(property(get = __get_issuer, put = __set_issuer))::Org::BouncyCastle::Asn1::X509::X509Name* issuer;

  /// @brief Field startDate, offset 0x38, size 0x8
  __declspec(property(get = __get_startDate, put = __set_startDate))::Org::BouncyCastle::Asn1::X509::Time* startDate;

  /// @brief Field endDate, offset 0x40, size 0x8
  __declspec(property(get = __get_endDate, put = __set_endDate))::Org::BouncyCastle::Asn1::X509::Time* endDate;

  /// @brief Field subject, offset 0x48, size 0x8
  __declspec(property(get = __get_subject, put = __set_subject))::Org::BouncyCastle::Asn1::X509::X509Name* subject;

  /// @brief Field subjectPublicKeyInfo, offset 0x50, size 0x8
  __declspec(property(get = __get_subjectPublicKeyInfo, put = __set_subjectPublicKeyInfo))::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* subjectPublicKeyInfo;

  /// @brief Field issuerUniqueID, offset 0x58, size 0x8
  __declspec(property(get = __get_issuerUniqueID, put = __set_issuerUniqueID))::Org::BouncyCastle::Asn1::DerBitString* issuerUniqueID;

  /// @brief Field subjectUniqueID, offset 0x60, size 0x8
  __declspec(property(get = __get_subjectUniqueID, put = __set_subjectUniqueID))::Org::BouncyCastle::Asn1::DerBitString* subjectUniqueID;

  /// @brief Field extensions, offset 0x68, size 0x8
  __declspec(property(get = __get_extensions, put = __set_extensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_VersionNumber))::Org::BouncyCastle::Asn1::DerInteger* VersionNumber;

  __declspec(property(get = get_SerialNumber))::Org::BouncyCastle::Asn1::DerInteger* SerialNumber;

  __declspec(property(get = get_Signature))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Signature;

  __declspec(property(get = get_Issuer))::Org::BouncyCastle::Asn1::X509::X509Name* Issuer;

  __declspec(property(get = get_StartDate))::Org::BouncyCastle::Asn1::X509::Time* StartDate;

  __declspec(property(get = get_EndDate))::Org::BouncyCastle::Asn1::X509::Time* EndDate;

  __declspec(property(get = get_Subject))::Org::BouncyCastle::Asn1::X509::X509Name* Subject;

  __declspec(property(get = get_SubjectPublicKeyInfo))::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* SubjectPublicKeyInfo;

  __declspec(property(get = get_IssuerUniqueID))::Org::BouncyCastle::Asn1::DerBitString* IssuerUniqueID;

  __declspec(property(get = get_SubjectUniqueID))::Org::BouncyCastle::Asn1::DerBitString* SubjectUniqueID;

  __declspec(property(get = get_Extensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* Extensions;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_seq();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_seq() const;

  constexpr void __set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

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

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_issuerUniqueID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_issuerUniqueID() const;

  constexpr void __set_issuerUniqueID(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_subjectUniqueID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_subjectUniqueID() const;

  constexpr void __set_subjectUniqueID(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __get_extensions();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& __get_extensions() const;

  constexpr void __set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  /// @brief Method GetInstance, addr 0x119858c, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x11985a4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x1198648, size 0x620, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Version, addr 0x1199014, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Method get_VersionNumber, addr 0x1199038, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_VersionNumber();

  /// @brief Method get_SerialNumber, addr 0x1199040, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber();

  /// @brief Method get_Signature, addr 0x1199048, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Signature();

  /// @brief Method get_Issuer, addr 0x1199050, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();

  /// @brief Method get_StartDate, addr 0x1199058, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_StartDate();

  /// @brief Method get_EndDate, addr 0x1199060, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_EndDate();

  /// @brief Method get_Subject, addr 0x1199068, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Subject();

  /// @brief Method get_SubjectPublicKeyInfo, addr 0x1199070, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_SubjectPublicKeyInfo();

  /// @brief Method get_IssuerUniqueID, addr 0x1199078, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_IssuerUniqueID();

  /// @brief Method get_SubjectUniqueID, addr 0x1199080, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_SubjectUniqueID();

  /// @brief Method get_Extensions, addr 0x1199088, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();

  /// @brief Method ToAsn1Object, addr 0x1199090, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "TbsCertificateStructure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TbsCertificateStructure(TbsCertificateStructure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TbsCertificateStructure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TbsCertificateStructure(TbsCertificateStructure const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TbsCertificateStructure();

public:
  /// @brief Field seq, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___seq;

  /// @brief Field version, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field serialNumber, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___serialNumber;

  /// @brief Field signature, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___signature;

  /// @brief Field issuer, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___issuer;

  /// @brief Field startDate, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::Time* ___startDate;

  /// @brief Field endDate, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::Time* ___endDate;

  /// @brief Field subject, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___subject;

  /// @brief Field subjectPublicKeyInfo, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* ___subjectPublicKeyInfo;

  /// @brief Field issuerUniqueID, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___issuerUniqueID;

  /// @brief Field subjectUniqueID, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___subjectUniqueID;

  /// @brief Field extensions, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___extensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure, 0x70>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure, ___seq) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure, ___serialNumber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure, ___signature) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure, ___issuer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure, ___startDate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure, ___endDate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure, ___subject) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure, ___subjectPublicKeyInfo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure, ___issuerUniqueID) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure, ___subjectUniqueID) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure, ___extensions) == 0x68, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*, "Org.BouncyCastle.Asn1.X509", "TbsCertificateStructure");
