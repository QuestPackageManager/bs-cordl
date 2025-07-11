#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/CertTemplateBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertTemplateBuilder)
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplate;
}
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
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplateBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Crmf.CertTemplateBuilder
class CORDL_TYPE CertTemplateBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field extensions, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_extensions, put = __cordl_internal_set_extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;

  /// @brief Field issuer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_issuer, put = __cordl_internal_set_issuer)) ::Org::BouncyCastle::Asn1::X509::X509Name* issuer;

  /// @brief Field issuerUID, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_issuerUID, put = __cordl_internal_set_issuerUID)) ::Org::BouncyCastle::Asn1::DerBitString* issuerUID;

  /// @brief Field publicKey, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_publicKey, put = __cordl_internal_set_publicKey)) ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* publicKey;

  /// @brief Field serialNumber, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_serialNumber, put = __cordl_internal_set_serialNumber)) ::Org::BouncyCastle::Asn1::DerInteger* serialNumber;

  /// @brief Field signingAlg, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_signingAlg, put = __cordl_internal_set_signingAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signingAlg;

  /// @brief Field subject, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_subject, put = __cordl_internal_set_subject)) ::Org::BouncyCastle::Asn1::X509::X509Name* subject;

  /// @brief Field subjectUID, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_subjectUID, put = __cordl_internal_set_subjectUID)) ::Org::BouncyCastle::Asn1::DerBitString* subjectUID;

  /// @brief Field validity, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_validity, put = __cordl_internal_set_validity)) ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* validity;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method AddOptional, addr 0x2313534, size 0x9c, virtual false, abstract: false, final false
  inline void AddOptional(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v, int32_t tagNo, bool isExplicit, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method Build, addr 0x23133e0, size 0x154, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* Build();

  static inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* New_ctor();

  /// @brief Method SetExtensions, addr 0x23133d8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extens);

  /// @brief Method SetIssuer, addr 0x23133a8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* name);

  /// @brief Method SetIssuerUID, addr 0x23133c8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetIssuerUID(::Org::BouncyCastle::Asn1::DerBitString* uid);

  /// @brief Method SetPublicKey, addr 0x23133c0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  /// @brief Method SetSerialNumber, addr 0x2313398, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetSerialNumber(::Org::BouncyCastle::Asn1::DerInteger* ser);

  /// @brief Method SetSigningAlg, addr 0x23133a0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetSigningAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* aid);

  /// @brief Method SetSubject, addr 0x23133b8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetSubject(::Org::BouncyCastle::Asn1::X509::X509Name* name);

  /// @brief Method SetSubjectUID, addr 0x23133d0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetSubjectUID(::Org::BouncyCastle::Asn1::DerBitString* uid);

  /// @brief Method SetValidity, addr 0x23133b0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetValidity(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* v);

  /// @brief Method SetVersion, addr 0x2313330, size 0x68, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetVersion(int32_t ver);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& __cordl_internal_get_extensions() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_extensions();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& __cordl_internal_get_issuer() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __cordl_internal_get_issuer();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_issuerUID() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_issuerUID();

  constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* const& __cordl_internal_get_publicKey() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& __cordl_internal_get_publicKey();

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

  constexpr void __cordl_internal_set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_signingAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_subject(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr void __cordl_internal_set_subjectUID(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr void __cordl_internal_set_validity(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x23135d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertTemplateBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertTemplateBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertTemplateBuilder(CertTemplateBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertTemplateBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertTemplateBuilder(CertTemplateBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 108 };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field serialNumber, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___serialNumber;

  /// @brief Field signingAlg, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___signingAlg;

  /// @brief Field issuer, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___issuer;

  /// @brief Field validity, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* ___validity;

  /// @brief Field subject, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___subject;

  /// @brief Field publicKey, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* ___publicKey;

  /// @brief Field issuerUID, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___issuerUID;

  /// @brief Field subjectUID, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___subjectUID;

  /// @brief Field extensions, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___extensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder, ___serialNumber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder, ___signingAlg) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder, ___issuer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder, ___validity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder, ___subject) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder, ___publicKey) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder, ___issuerUID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder, ___subjectUID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder, ___extensions) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*, "Org.BouncyCastle.Asn1.Crmf", "CertTemplateBuilder");
