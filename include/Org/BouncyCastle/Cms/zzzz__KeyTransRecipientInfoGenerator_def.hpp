#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyTransRecipientInfoGenerator)
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedHelper;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateStructure;
}
namespace Org::BouncyCastle::Cms {
class RecipientInfoGenerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class IssuerAndSerialNumber;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class KeyTransRecipientInfoGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator);
// Type: Org.BouncyCastle.Cms::KeyTransRecipientInfoGenerator
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(675))
// CS Name: ::Org.BouncyCastle.Cms::KeyTransRecipientInfoGenerator*
class CORDL_TYPE KeyTransRecipientInfoGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field recipientTbsCert, offset 0x10, size 0x8
  __declspec(property(get = __get_recipientTbsCert, put = __set_recipientTbsCert))::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* recipientTbsCert;

  /// @brief Field recipientPublicKey, offset 0x18, size 0x8
  __declspec(property(get = __get_recipientPublicKey, put = __set_recipientPublicKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* recipientPublicKey;

  /// @brief Field subjectKeyIdentifier, offset 0x20, size 0x8
  __declspec(property(get = __get_subjectKeyIdentifier, put = __set_subjectKeyIdentifier))::Org::BouncyCastle::Asn1::Asn1OctetString* subjectKeyIdentifier;

  /// @brief Field info, offset 0x28, size 0x8
  __declspec(property(get = __get_info, put = __set_info))::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* info;

  /// @brief Field issuerAndSerialNumber, offset 0x30, size 0x8
  __declspec(property(get = __get_issuerAndSerialNumber, put = __set_issuerAndSerialNumber))::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* issuerAndSerialNumber;

  /// @brief Field random, offset 0x38, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Field Helper, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Helper, put = setStaticF_Helper))::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Helper;

  __declspec(property(put = set_RecipientCert))::Org::BouncyCastle::X509::X509Certificate* RecipientCert;

  __declspec(property(put = set_RecipientPublicKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* RecipientPublicKey;

  __declspec(property(put = set_SubjectKeyIdentifier))::Org::BouncyCastle::Asn1::Asn1OctetString* SubjectKeyIdentifier;

  __declspec(property(get = get_AlgorithmDetails))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* AlgorithmDetails;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
  constexpr operator ::Org::BouncyCastle::Cms::RecipientInfoGenerator*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*& __get_recipientTbsCert();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*> const& __get_recipientTbsCert() const;

  constexpr void __set_recipientTbsCert(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* value);

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __get_recipientPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __get_recipientPublicKey() const;

  constexpr void __set_recipientPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_subjectKeyIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_subjectKeyIdentifier() const;

  constexpr void __set_subjectKeyIdentifier(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& __get_info();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*> const& __get_info() const;

  constexpr void __set_info(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*& __get_issuerAndSerialNumber();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*> const& __get_issuerAndSerialNumber() const;

  constexpr void __set_issuerAndSerialNumber(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_random() const;

  constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  static inline void setStaticF_Helper(::Org::BouncyCastle::Cms::CmsEnvelopedHelper* value);

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* getStaticF_Helper();

  static inline ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator* New_ctor();

  /// @brief Method .ctor addr 0x1204a30 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator* New_ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* issuerAndSerialNumber);

  /// @brief Method .ctor addr 0x1204a38 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* issuerAndSerialNumber);

  static inline ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyIdentifier);

  /// @brief Method .ctor addr 0x1204a60 size 0x7c virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyIdentifier);

  /// @brief Method set_RecipientCert addr 0x1204adc size 0x58 virtual false final false
  inline void set_RecipientCert(::Org::BouncyCastle::X509::X509Certificate* value);

  /// @brief Method set_RecipientPublicKey addr 0x1204b34 size 0xdc virtual false final false
  inline void set_RecipientPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  /// @brief Method set_SubjectKeyIdentifier addr 0x1204c10 size 0x8 virtual false final false
  inline void set_SubjectKeyIdentifier(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method Generate addr 0x1204c18 size 0x1c0 virtual true final true
  inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Generate(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentEncryptionKey, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method get_AlgorithmDetails addr 0x1204dd8 size 0x1c virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_AlgorithmDetails();

  /// @brief Method GenerateWrappedKey addr 0x1204df4 size 0x1dc virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateWrappedKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentEncryptionKey);

  // Ctor Parameters [CppParam { name: "", ty: "KeyTransRecipientInfoGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyTransRecipientInfoGenerator(KeyTransRecipientInfoGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyTransRecipientInfoGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyTransRecipientInfoGenerator(KeyTransRecipientInfoGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyTransRecipientInfoGenerator();

public:
  /// @brief Field recipientTbsCert, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* ___recipientTbsCert;

  /// @brief Field recipientPublicKey, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___recipientPublicKey;

  /// @brief Field subjectKeyIdentifier, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___subjectKeyIdentifier;

  /// @brief Field info, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* ___info;

  /// @brief Field issuerAndSerialNumber, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* ___issuerAndSerialNumber;

  /// @brief Field random, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*, "Org.BouncyCastle.Cms", "KeyTransRecipientInfoGenerator");
