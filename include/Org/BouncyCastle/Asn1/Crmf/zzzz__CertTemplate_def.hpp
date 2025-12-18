#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/CertTemplate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertTemplate)
namespace Org::BouncyCastle::Asn1::Crmf {
class OptionalValidity;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
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
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::CertTemplate);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Crmf.CertTemplate
class CORDL_TYPE CertTemplate : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* Extensions;

  __declspec(property(get = get_Issuer)) ::Org::BouncyCastle::Asn1::X509::X509Name* Issuer;

  __declspec(property(get = get_IssuerUID)) ::Org::BouncyCastle::Asn1::DerBitString* IssuerUID;

  __declspec(property(get = get_PublicKey)) ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* PublicKey;

  __declspec(property(get = get_SerialNumber)) ::Org::BouncyCastle::Asn1::DerInteger* SerialNumber;

  __declspec(property(get = get_SigningAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* SigningAlg;

  __declspec(property(get = get_Subject)) ::Org::BouncyCastle::Asn1::X509::X509Name* Subject;

  __declspec(property(get = get_SubjectUID)) ::Org::BouncyCastle::Asn1::DerBitString* SubjectUID;

  __declspec(property(get = get_Validity)) ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* Validity;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field extensions, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_extensions, put = __cordl_internal_set_extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;

  /// @brief Field issuer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_issuer, put = __cordl_internal_set_issuer)) ::Org::BouncyCastle::Asn1::X509::X509Name* issuer;

  /// @brief Field issuerUID, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_issuerUID, put = __cordl_internal_set_issuerUID)) ::Org::BouncyCastle::Asn1::DerBitString* issuerUID;

  /// @brief Field publicKey, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_publicKey, put = __cordl_internal_set_publicKey)) ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* publicKey;

  /// @brief Field seq, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_seq, put = __cordl_internal_set_seq)) ::Org::BouncyCastle::Asn1::Asn1Sequence* seq;

  /// @brief Field serialNumber, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_serialNumber, put = __cordl_internal_set_serialNumber)) ::Org::BouncyCastle::Asn1::DerInteger* serialNumber;

  /// @brief Field signingAlg, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_signingAlg, put = __cordl_internal_set_signingAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signingAlg;

  /// @brief Field subject, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_subject, put = __cordl_internal_set_subject)) ::Org::BouncyCastle::Asn1::X509::X509Name* subject;

  /// @brief Field subjectUID, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_subjectUID, put = __cordl_internal_set_subjectUID)) ::Org::BouncyCastle::Asn1::DerBitString* subjectUID;

  /// @brief Field validity, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_validity, put = __cordl_internal_set_validity)) ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* validity;

  /// @brief Field version, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method GetInstance, addr 0x3269e60, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x326aaec, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& __cordl_internal_get_extensions() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_extensions();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& __cordl_internal_get_issuer() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __cordl_internal_get_issuer();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_issuerUID() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_issuerUID();

  constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* const& __cordl_internal_get_publicKey() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& __cordl_internal_get_publicKey();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_seq() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_seq();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_serialNumber() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_serialNumber();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_signingAlg() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_signingAlg();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& __cordl_internal_get_subject() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __cordl_internal_get_subject();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_subjectUID() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_subjectUID();

  constexpr ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* const& __cordl_internal_get_validity() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*& __cordl_internal_get_validity();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  constexpr void __cordl_internal_set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr void __cordl_internal_set_issuerUID(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr void __cordl_internal_set_publicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value);

  constexpr void __cordl_internal_set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_signingAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_subject(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr void __cordl_internal_set_subjectUID(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr void __cordl_internal_set_validity(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x326a29c, size 0x594, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Extensions, addr 0x326aae4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();

  /// @brief Method get_Issuer, addr 0x326aab4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();

  /// @brief Method get_IssuerUID, addr 0x326aad4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_IssuerUID();

  /// @brief Method get_PublicKey, addr 0x326aacc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_PublicKey();

  /// @brief Method get_SerialNumber, addr 0x326aaa4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber();

  /// @brief Method get_SigningAlg, addr 0x326aaac, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SigningAlg();

  /// @brief Method get_Subject, addr 0x326aac4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Subject();

  /// @brief Method get_SubjectUID, addr 0x326aadc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_SubjectUID();

  /// @brief Method get_Validity, addr 0x326aabc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* get_Validity();

  /// @brief Method get_Version, addr 0x326aa14, size 0x14, virtual true, abstract: false, final false
  inline int32_t get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertTemplate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertTemplate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertTemplate(CertTemplate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertTemplate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertTemplate(CertTemplate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 107 };

  /// @brief Field seq, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___seq;

  /// @brief Field version, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field serialNumber, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___serialNumber;

  /// @brief Field signingAlg, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___signingAlg;

  /// @brief Field issuer, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___issuer;

  /// @brief Field validity, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* ___validity;

  /// @brief Field subject, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___subject;

  /// @brief Field publicKey, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* ___publicKey;

  /// @brief Field issuerUID, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___issuerUID;

  /// @brief Field subjectUID, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___subjectUID;

  /// @brief Field extensions, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___extensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplate, ___seq) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplate, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplate, ___serialNumber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplate, ___signingAlg) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplate, ___issuer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplate, ___validity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplate, ___subject) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplate, ___publicKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplate, ___issuerUID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplate, ___subjectUID) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplate, ___extensions) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::CertTemplate, 0x68>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::CertTemplate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::CertTemplate*, "Org.BouncyCastle.Asn1.Crmf", "CertTemplate");
