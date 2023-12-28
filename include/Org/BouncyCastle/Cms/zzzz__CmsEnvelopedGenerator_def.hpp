#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsEnvelopedGenerator)
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KekIdentifier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace Org::BouncyCastle::Cms {
class CmsPbeKey;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Cms {
class RecipientInfoGenerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsEnvelopedGenerator);
// Type: Org.BouncyCastle.Cms::CmsEnvelopedGenerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(617))
// CS Name: ::Org.BouncyCastle.Cms::CmsEnvelopedGenerator*
class CORDL_TYPE CmsEnvelopedGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field recipientInfoGenerators, offset 0x10, size 0x8
  __declspec(property(get = __get_recipientInfoGenerators, put = __set_recipientInfoGenerators))::System::Collections::IList* recipientInfoGenerators;

  /// @brief Field rand, offset 0x18, size 0x8
  __declspec(property(get = __get_rand, put = __set_rand))::Org::BouncyCastle::Security::SecureRandom* rand;

  /// @brief Field unprotectedAttributeGenerator, offset 0x20, size 0x8
  __declspec(property(get = __get_unprotectedAttributeGenerator, put = __set_unprotectedAttributeGenerator))::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unprotectedAttributeGenerator;

  /// @brief Field rc2Table, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rc2Table, put = setStaticF_rc2Table))::ArrayW<int16_t, ::Array<int16_t>*> rc2Table;

  /// @brief Field DesEde3Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DesEde3Cbc, put = setStaticF_DesEde3Cbc))::StringW DesEde3Cbc;

  /// @brief Field RC2Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RC2Cbc, put = setStaticF_RC2Cbc))::StringW RC2Cbc;

  /// @brief Field Aes128Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Aes128Cbc, put = setStaticF_Aes128Cbc))::StringW Aes128Cbc;

  /// @brief Field Aes192Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Aes192Cbc, put = setStaticF_Aes192Cbc))::StringW Aes192Cbc;

  /// @brief Field Aes256Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Aes256Cbc, put = setStaticF_Aes256Cbc))::StringW Aes256Cbc;

  /// @brief Field Camellia128Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Camellia128Cbc, put = setStaticF_Camellia128Cbc))::StringW Camellia128Cbc;

  /// @brief Field Camellia192Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Camellia192Cbc, put = setStaticF_Camellia192Cbc))::StringW Camellia192Cbc;

  /// @brief Field Camellia256Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Camellia256Cbc, put = setStaticF_Camellia256Cbc))::StringW Camellia256Cbc;

  /// @brief Field SeedCbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SeedCbc, put = setStaticF_SeedCbc))::StringW SeedCbc;

  /// @brief Field DesEde3Wrap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DesEde3Wrap, put = setStaticF_DesEde3Wrap))::StringW DesEde3Wrap;

  /// @brief Field Aes128Wrap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Aes128Wrap, put = setStaticF_Aes128Wrap))::StringW Aes128Wrap;

  /// @brief Field Aes192Wrap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Aes192Wrap, put = setStaticF_Aes192Wrap))::StringW Aes192Wrap;

  /// @brief Field Aes256Wrap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Aes256Wrap, put = setStaticF_Aes256Wrap))::StringW Aes256Wrap;

  /// @brief Field Camellia128Wrap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Camellia128Wrap, put = setStaticF_Camellia128Wrap))::StringW Camellia128Wrap;

  /// @brief Field Camellia192Wrap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Camellia192Wrap, put = setStaticF_Camellia192Wrap))::StringW Camellia192Wrap;

  /// @brief Field Camellia256Wrap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Camellia256Wrap, put = setStaticF_Camellia256Wrap))::StringW Camellia256Wrap;

  /// @brief Field SeedWrap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SeedWrap, put = setStaticF_SeedWrap))::StringW SeedWrap;

  /// @brief Field ECDHSha1Kdf, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ECDHSha1Kdf, put = setStaticF_ECDHSha1Kdf))::StringW ECDHSha1Kdf;

  /// @brief Field ECMqvSha1Kdf, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ECMqvSha1Kdf, put = setStaticF_ECMqvSha1Kdf))::StringW ECMqvSha1Kdf;

  __declspec(property(get = get_UnprotectedAttributeGenerator, put = set_UnprotectedAttributeGenerator))::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* UnprotectedAttributeGenerator;

  constexpr ::System::Collections::IList*& __get_recipientInfoGenerators();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_recipientInfoGenerators() const;

  constexpr void __set_recipientInfoGenerators(::System::Collections::IList* value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_rand();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_rand() const;

  constexpr void __set_rand(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& __get_unprotectedAttributeGenerator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*> const& __get_unprotectedAttributeGenerator() const;

  constexpr void __set_unprotectedAttributeGenerator(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value);

  static inline void setStaticF_rc2Table(::ArrayW<int16_t, ::Array<int16_t>*> value);

  static inline ::ArrayW<int16_t, ::Array<int16_t>*> getStaticF_rc2Table();

  static inline void setStaticF_DesEde3Cbc(::StringW value);

  static inline ::StringW getStaticF_DesEde3Cbc();

  static inline void setStaticF_RC2Cbc(::StringW value);

  static inline ::StringW getStaticF_RC2Cbc();

  static inline void setStaticF_Aes128Cbc(::StringW value);

  static inline ::StringW getStaticF_Aes128Cbc();

  static inline void setStaticF_Aes192Cbc(::StringW value);

  static inline ::StringW getStaticF_Aes192Cbc();

  static inline void setStaticF_Aes256Cbc(::StringW value);

  static inline ::StringW getStaticF_Aes256Cbc();

  static inline void setStaticF_Camellia128Cbc(::StringW value);

  static inline ::StringW getStaticF_Camellia128Cbc();

  static inline void setStaticF_Camellia192Cbc(::StringW value);

  static inline ::StringW getStaticF_Camellia192Cbc();

  static inline void setStaticF_Camellia256Cbc(::StringW value);

  static inline ::StringW getStaticF_Camellia256Cbc();

  static inline void setStaticF_SeedCbc(::StringW value);

  static inline ::StringW getStaticF_SeedCbc();

  static inline void setStaticF_DesEde3Wrap(::StringW value);

  static inline ::StringW getStaticF_DesEde3Wrap();

  static inline void setStaticF_Aes128Wrap(::StringW value);

  static inline ::StringW getStaticF_Aes128Wrap();

  static inline void setStaticF_Aes192Wrap(::StringW value);

  static inline ::StringW getStaticF_Aes192Wrap();

  static inline void setStaticF_Aes256Wrap(::StringW value);

  static inline ::StringW getStaticF_Aes256Wrap();

  static inline void setStaticF_Camellia128Wrap(::StringW value);

  static inline ::StringW getStaticF_Camellia128Wrap();

  static inline void setStaticF_Camellia192Wrap(::StringW value);

  static inline ::StringW getStaticF_Camellia192Wrap();

  static inline void setStaticF_Camellia256Wrap(::StringW value);

  static inline ::StringW getStaticF_Camellia256Wrap();

  static inline void setStaticF_SeedWrap(::StringW value);

  static inline ::StringW getStaticF_SeedWrap();

  static inline void setStaticF_ECDHSha1Kdf(::StringW value);

  static inline ::StringW getStaticF_ECDHSha1Kdf();

  static inline void setStaticF_ECMqvSha1Kdf(::StringW value);

  static inline ::StringW getStaticF_ECMqvSha1Kdf();

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* New_ctor();

  /// @brief Method .ctor addr 0x11d86c0 size 0x64 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor addr 0x11d8724 size 0x7c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method get_UnprotectedAttributeGenerator addr 0x11d87a0 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* get_UnprotectedAttributeGenerator();

  /// @brief Method set_UnprotectedAttributeGenerator addr 0x11d87a8 size 0x8 virtual false final false
  inline void set_UnprotectedAttributeGenerator(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value);

  /// @brief Method AddKeyTransRecipient addr 0x11d87b0 size 0xf0 virtual false final false
  inline void AddKeyTransRecipient(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method AddKeyTransRecipient addr 0x11d88a0 size 0x128 virtual false final false
  inline void AddKeyTransRecipient(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subKeyId);

  /// @brief Method AddKekRecipient addr 0x11d89c8 size 0x94 virtual false final false
  inline void AddKekRecipient(::StringW keyAlgorithm, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier);

  /// @brief Method AddKekRecipient addr 0x11d8a5c size 0x104 virtual false final false
  inline void AddKekRecipient(::StringW keyAlgorithm, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, ::Org::BouncyCastle::Asn1::Cms::KekIdentifier* kekIdentifier);

  /// @brief Method AddPasswordRecipient addr 0x11d8b60 size 0x1c0 virtual false final false
  inline void AddPasswordRecipient(::Org::BouncyCastle::Cms::CmsPbeKey* pbeKey, ::StringW kekAlgorithmOid);

  /// @brief Method AddKeyAgreementRecipient addr 0x11d8d20 size 0x120 virtual false final false
  inline void AddKeyAgreementRecipient(::StringW agreementAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPrivateKey,
                                       ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPublicKey, ::Org::BouncyCastle::X509::X509Certificate* recipientCert, ::StringW cekWrapAlgorithm);

  /// @brief Method AddKeyAgreementRecipients addr 0x11d8e40 size 0x248 virtual false final false
  inline void AddKeyAgreementRecipients(::StringW agreementAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPrivateKey,
                                        ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPublicKey, ::System::Collections::ICollection* recipientCerts, ::StringW cekWrapAlgorithm);

  /// @brief Method AddRecipientInfoGenerator addr 0x11d9088 size 0xac virtual false final false
  inline void AddRecipientInfoGenerator(::Org::BouncyCastle::Cms::RecipientInfoGenerator* recipientInfoGenerator);

  /// @brief Method GetAlgorithmIdentifier addr 0x11d9134 size 0x144 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetAlgorithmIdentifier(::StringW encryptionOid, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* encKey,
                                                                                      ::Org::BouncyCastle::Asn1::Asn1Encodable* asn1Params,
                                                                                      ByRef<::Org::BouncyCastle::Crypto::ICipherParameters*> cipherParameters);

  /// @brief Method GenerateAsn1Parameters addr 0x11d9278 size 0x238 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GenerateAsn1Parameters(::StringW encryptionOid, ::ArrayW<uint8_t, ::Array<uint8_t>*> encKeyBytes);

  // Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsEnvelopedGenerator(CmsEnvelopedGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsEnvelopedGenerator(CmsEnvelopedGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsEnvelopedGenerator();

public:
  /// @brief Field recipientInfoGenerators, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___recipientInfoGenerators;

  /// @brief Field rand, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___rand;

  /// @brief Field unprotectedAttributeGenerator, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* ___unprotectedAttributeGenerator;

  /// @brief Field IdeaCbc offset 0xffffffff size 0x8
  static constexpr ::ConstString IdeaCbc{ u"1.3.6.1.4.1.188.7.1.1.2" };

  /// @brief Field Cast5Cbc offset 0xffffffff size 0x8
  static constexpr ::ConstString Cast5Cbc{ u"1.2.840.113533.7.66.10" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsEnvelopedGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*, "Org.BouncyCastle.Cms", "CmsEnvelopedGenerator");
