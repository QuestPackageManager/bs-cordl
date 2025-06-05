#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/SignerInfoGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SignerInfoGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class SignerIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class SignerInfoGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::SignerInfoGenerator);
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.SignerInfoGenerator
class CORDL_TYPE SignerInfoGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field certificate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certificate, put = __cordl_internal_set_certificate)) ::Org::BouncyCastle::X509::X509Certificate* certificate;

  /// @brief Field contentSigner, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_contentSigner, put = __cordl_internal_set_contentSigner)) ::Org::BouncyCastle::Crypto::ISignatureFactory* contentSigner;

  /// @brief Field isDirectSignature, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_isDirectSignature, put = __cordl_internal_set_isDirectSignature)) bool isDirectSignature;

  /// @brief Field sigId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sigId, put = __cordl_internal_set_sigId)) ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId;

  /// @brief Field signedGen, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_signedGen, put = __cordl_internal_set_signedGen)) ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedGen;

  /// @brief Field unsignedGen, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_unsignedGen, put = __cordl_internal_set_unsignedGen)) ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedGen;

  static inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* New_ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId, ::Org::BouncyCastle::Crypto::ISignatureFactory* contentSigner,
                                                                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedGen,
                                                                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedGen);

  static inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* New_ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId, ::Org::BouncyCastle::Crypto::ISignatureFactory* signerFactory);

  static inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* New_ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId, ::Org::BouncyCastle::Crypto::ISignatureFactory* signerFactory,
                                                                        bool isDirectSignature);

  constexpr ::Org::BouncyCastle::X509::X509Certificate* const& __cordl_internal_get_certificate() const;

  constexpr ::Org::BouncyCastle::X509::X509Certificate*& __cordl_internal_get_certificate();

  constexpr ::Org::BouncyCastle::Crypto::ISignatureFactory* const& __cordl_internal_get_contentSigner() const;

  constexpr ::Org::BouncyCastle::Crypto::ISignatureFactory*& __cordl_internal_get_contentSigner();

  constexpr bool const& __cordl_internal_get_isDirectSignature() const;

  constexpr bool& __cordl_internal_get_isDirectSignature();

  constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* const& __cordl_internal_get_sigId() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*& __cordl_internal_get_sigId();

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* const& __cordl_internal_get_signedGen() const;

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& __cordl_internal_get_signedGen();

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* const& __cordl_internal_get_unsignedGen() const;

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& __cordl_internal_get_unsignedGen();

  constexpr void __cordl_internal_set_certificate(::Org::BouncyCastle::X509::X509Certificate* value);

  constexpr void __cordl_internal_set_contentSigner(::Org::BouncyCastle::Crypto::ISignatureFactory* value);

  constexpr void __cordl_internal_set_isDirectSignature(bool value);

  constexpr void __cordl_internal_set_sigId(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* value);

  constexpr void __cordl_internal_set_signedGen(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value);

  constexpr void __cordl_internal_set_unsignedGen(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value);

  /// @brief Method .ctor, addr 0x267e20c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId, ::Org::BouncyCastle::Crypto::ISignatureFactory* contentSigner,
                    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedGen, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedGen);

  /// @brief Method .ctor, addr 0x267e174, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId, ::Org::BouncyCastle::Crypto::ISignatureFactory* signerFactory);

  /// @brief Method .ctor, addr 0x267e17c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId, ::Org::BouncyCastle::Crypto::ISignatureFactory* signerFactory, bool isDirectSignature);

  /// @brief Method setAssociatedCertificate, addr 0x267e250, size 0x8, virtual false, abstract: false, final false
  inline void setAssociatedCertificate(::Org::BouncyCastle::X509::X509Certificate* certificate);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerInfoGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignerInfoGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerInfoGenerator(SignerInfoGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerInfoGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerInfoGenerator(SignerInfoGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 689 };

  /// @brief Field certificate, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::X509Certificate* ___certificate;

  /// @brief Field contentSigner, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ISignatureFactory* ___contentSigner;

  /// @brief Field sigId, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* ___sigId;

  /// @brief Field signedGen, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* ___signedGen;

  /// @brief Field unsignedGen, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* ___unsignedGen;

  /// @brief Field isDirectSignature, offset: 0x38, size: 0x1, def value: None
  bool ___isDirectSignature;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInfoGenerator, ___certificate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInfoGenerator, ___contentSigner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInfoGenerator, ___sigId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInfoGenerator, ___signedGen) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInfoGenerator, ___unsignedGen) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInfoGenerator, ___isDirectSignature) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::SignerInfoGenerator, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::SignerInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::SignerInfoGenerator*, "Org.BouncyCastle.Cms", "SignerInfoGenerator");
