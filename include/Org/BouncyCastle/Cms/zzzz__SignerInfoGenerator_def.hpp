#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SignerInfoGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class SignerIdentifier;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class SignerInfoGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::SignerInfoGenerator);
// Type: Org.BouncyCastle.Cms::SignerInfoGenerator
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(689))
// CS Name: ::Org.BouncyCastle.Cms::SignerInfoGenerator*
class CORDL_TYPE SignerInfoGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field certificate, offset 0x10, size 0x8
  __declspec(property(get = __get_certificate, put = __set_certificate))::Org::BouncyCastle::X509::X509Certificate* certificate;

  /// @brief Field contentSigner, offset 0x18, size 0x8
  __declspec(property(get = __get_contentSigner, put = __set_contentSigner))::Org::BouncyCastle::Crypto::ISignatureFactory* contentSigner;

  /// @brief Field sigId, offset 0x20, size 0x8
  __declspec(property(get = __get_sigId, put = __set_sigId))::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId;

  /// @brief Field signedGen, offset 0x28, size 0x8
  __declspec(property(get = __get_signedGen, put = __set_signedGen))::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedGen;

  /// @brief Field unsignedGen, offset 0x30, size 0x8
  __declspec(property(get = __get_unsignedGen, put = __set_unsignedGen))::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedGen;

  /// @brief Field isDirectSignature, offset 0x38, size 0x1
  __declspec(property(get = __get_isDirectSignature, put = __set_isDirectSignature)) bool isDirectSignature;

  constexpr ::Org::BouncyCastle::X509::X509Certificate*& __get_certificate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509Certificate*> const& __get_certificate() const;

  constexpr void __set_certificate(::Org::BouncyCastle::X509::X509Certificate* value);

  constexpr ::Org::BouncyCastle::Crypto::ISignatureFactory*& __get_contentSigner();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISignatureFactory*> const& __get_contentSigner() const;

  constexpr void __set_contentSigner(::Org::BouncyCastle::Crypto::ISignatureFactory* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*& __get_sigId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*> const& __get_sigId() const;

  constexpr void __set_sigId(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* value);

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& __get_signedGen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*> const& __get_signedGen() const;

  constexpr void __set_signedGen(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value);

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& __get_unsignedGen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*> const& __get_unsignedGen() const;

  constexpr void __set_unsignedGen(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value);

  constexpr bool& __get_isDirectSignature();

  constexpr bool const& __get_isDirectSignature() const;

  constexpr void __set_isDirectSignature(bool value);

  static inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* New_ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId, ::Org::BouncyCastle::Crypto::ISignatureFactory* signerFactory);

  /// @brief Method .ctor addr 0x1208be4 size 0x8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId, ::Org::BouncyCastle::Crypto::ISignatureFactory* signerFactory);

  static inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* New_ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId, ::Org::BouncyCastle::Crypto::ISignatureFactory* signerFactory,
                                                                        bool isDirectSignature);

  /// @brief Method .ctor addr 0x1208bec size 0xa0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId, ::Org::BouncyCastle::Crypto::ISignatureFactory* signerFactory, bool isDirectSignature);

  static inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* New_ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId, ::Org::BouncyCastle::Crypto::ISignatureFactory* contentSigner,
                                                                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedGen,
                                                                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedGen);

  /// @brief Method .ctor addr 0x1208c8c size 0x44 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId, ::Org::BouncyCastle::Crypto::ISignatureFactory* contentSigner,
                    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedGen, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedGen);

  /// @brief Method setAssociatedCertificate addr 0x1208cd0 size 0x8 virtual false final false
  inline void setAssociatedCertificate(::Org::BouncyCastle::X509::X509Certificate* certificate);

  // Ctor Parameters [CppParam { name: "", ty: "SignerInfoGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerInfoGenerator(SignerInfoGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerInfoGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerInfoGenerator(SignerInfoGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerInfoGenerator();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::SignerInfoGenerator, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::SignerInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::SignerInfoGenerator*, "Org.BouncyCastle.Cms", "SignerInfoGenerator");
