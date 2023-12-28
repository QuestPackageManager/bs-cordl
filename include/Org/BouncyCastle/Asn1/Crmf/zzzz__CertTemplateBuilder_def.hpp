#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertTemplateBuilder)
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class OptionalValidity;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplateBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder);
// Type: Org.BouncyCastle.Asn1.Crmf::CertTemplateBuilder
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(108))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::CertTemplateBuilder*
class CORDL_TYPE CertTemplateBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field serialNumber, offset 0x18, size 0x8
  __declspec(property(get = __get_serialNumber, put = __set_serialNumber))::Org::BouncyCastle::Asn1::DerInteger* serialNumber;

  /// @brief Field signingAlg, offset 0x20, size 0x8
  __declspec(property(get = __get_signingAlg, put = __set_signingAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signingAlg;

  /// @brief Field issuer, offset 0x28, size 0x8
  __declspec(property(get = __get_issuer, put = __set_issuer))::Org::BouncyCastle::Asn1::X509::X509Name* issuer;

  /// @brief Field validity, offset 0x30, size 0x8
  __declspec(property(get = __get_validity, put = __set_validity))::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* validity;

  /// @brief Field subject, offset 0x38, size 0x8
  __declspec(property(get = __get_subject, put = __set_subject))::Org::BouncyCastle::Asn1::X509::X509Name* subject;

  /// @brief Field publicKey, offset 0x40, size 0x8
  __declspec(property(get = __get_publicKey, put = __set_publicKey))::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* publicKey;

  /// @brief Field issuerUID, offset 0x48, size 0x8
  __declspec(property(get = __get_issuerUID, put = __set_issuerUID))::Org::BouncyCastle::Asn1::DerBitString* issuerUID;

  /// @brief Field subjectUID, offset 0x50, size 0x8
  __declspec(property(get = __get_subjectUID, put = __set_subjectUID))::Org::BouncyCastle::Asn1::DerBitString* subjectUID;

  /// @brief Field extensions, offset 0x58, size 0x8
  __declspec(property(get = __get_extensions, put = __set_extensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_serialNumber();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_serialNumber() const;

  constexpr void __set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_signingAlg();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_signingAlg() const;

  constexpr void __set_signingAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __get_issuer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& __get_issuer() const;

  constexpr void __set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*& __get_validity();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*> const& __get_validity() const;

  constexpr void __set_validity(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __get_subject();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& __get_subject() const;

  constexpr void __set_subject(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& __get_publicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*> const& __get_publicKey() const;

  constexpr void __set_publicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_issuerUID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_issuerUID() const;

  constexpr void __set_issuerUID(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_subjectUID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_subjectUID() const;

  constexpr void __set_subjectUID(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __get_extensions();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& __get_extensions() const;

  constexpr void __set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  /// @brief Method SetVersion addr 0xe854c4 size 0x70 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetVersion(int32_t ver);

  /// @brief Method SetSerialNumber addr 0xe85534 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetSerialNumber(::Org::BouncyCastle::Asn1::DerInteger* ser);

  /// @brief Method SetSigningAlg addr 0xe8553c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetSigningAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* aid);

  /// @brief Method SetIssuer addr 0xe85544 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* name);

  /// @brief Method SetValidity addr 0xe8554c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetValidity(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* v);

  /// @brief Method SetSubject addr 0xe85554 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetSubject(::Org::BouncyCastle::Asn1::X509::X509Name* name);

  /// @brief Method SetPublicKey addr 0xe8555c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  /// @brief Method SetIssuerUID addr 0xe85564 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetIssuerUID(::Org::BouncyCastle::Asn1::DerBitString* uid);

  /// @brief Method SetSubjectUID addr 0xe8556c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetSubjectUID(::Org::BouncyCastle::Asn1::DerBitString* uid);

  /// @brief Method SetExtensions addr 0xe85574 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* SetExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extens);

  /// @brief Method Build addr 0xe8557c size 0x158 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* Build();

  /// @brief Method AddOptional addr 0xe856d4 size 0xa0 virtual false final false
  inline void AddOptional(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v, int32_t tagNo, bool isExplicit, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* New_ctor();

  /// @brief Method .ctor addr 0xe85774 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CertTemplateBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertTemplateBuilder(CertTemplateBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertTemplateBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertTemplateBuilder(CertTemplateBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertTemplateBuilder();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*, "Org.BouncyCastle.Asn1.Crmf", "CertTemplateBuilder");
