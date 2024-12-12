#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/KeyAgreeRecipientInfoGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__RecipientInfoGenerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(KeyAgreeRecipientInfoGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorPublicKey;
}
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedHelper;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class KeyAgreeRecipientInfoGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator);
// Dependencies Org.BouncyCastle.Cms.RecipientInfoGenerator, System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.KeyAgreeRecipientInfoGenerator
class CORDL_TYPE KeyAgreeRecipientInfoGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field Helper, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Helper, put = setStaticF_Helper)) ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Helper;

  __declspec(property(put = set_KeyAgreementOID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* KeyAgreementOID;

  __declspec(property(put = set_KeyEncryptionOID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* KeyEncryptionOID;

  __declspec(property(put = set_RecipientCerts)) ::System::Collections::ICollection* RecipientCerts;

  __declspec(property(put = set_SenderKeyPair)) ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* SenderKeyPair;

  /// @brief Field keyAgreementOID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keyAgreementOID, put = __cordl_internal_set_keyAgreementOID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAgreementOID;

  /// @brief Field keyEncryptionOID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keyEncryptionOID, put = __cordl_internal_set_keyEncryptionOID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyEncryptionOID;

  /// @brief Field recipientCerts, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_recipientCerts, put = __cordl_internal_set_recipientCerts)) ::System::Collections::IList* recipientCerts;

  /// @brief Field senderKeyPair, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_senderKeyPair, put = __cordl_internal_set_senderKeyPair)) ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* senderKeyPair;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
  constexpr operator ::Org::BouncyCastle::Cms::RecipientInfoGenerator*() noexcept;

  /// @brief Method CreateOriginatorPublicKey, addr 0x2677020, size 0x118, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* CreateOriginatorPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method Generate, addr 0x2675ed4, size 0x114c, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Generate(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentEncryptionKey, ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator* New_ctor();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_keyAgreementOID() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_keyAgreementOID();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_keyEncryptionOID() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_keyEncryptionOID();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_recipientCerts() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_recipientCerts();

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* const& __cordl_internal_get_senderKeyPair() const;

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*& __cordl_internal_get_senderKeyPair();

  constexpr void __cordl_internal_set_keyAgreementOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_keyEncryptionOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_recipientCerts(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_senderKeyPair(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* value);

  /// @brief Method .ctor, addr 0x2675e48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* getStaticF_Helper();

  /// @brief Convert to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
  constexpr ::Org::BouncyCastle::Cms::RecipientInfoGenerator* i___Org__BouncyCastle__Cms__RecipientInfoGenerator() noexcept;

  static inline void setStaticF_Helper(::Org::BouncyCastle::Cms::CmsEnvelopedHelper* value);

  /// @brief Method set_KeyAgreementOID, addr 0x2675e50, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyAgreementOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method set_KeyEncryptionOID, addr 0x2675e58, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyEncryptionOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method set_RecipientCerts, addr 0x2675e60, size 0x6c, virtual false, abstract: false, final false
  inline void set_RecipientCerts(::System::Collections::ICollection* value);

  /// @brief Method set_SenderKeyPair, addr 0x2675ecc, size 0x8, virtual false, abstract: false, final false
  inline void set_SenderKeyPair(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyAgreeRecipientInfoGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInfoGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyAgreeRecipientInfoGenerator(KeyAgreeRecipientInfoGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInfoGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyAgreeRecipientInfoGenerator(KeyAgreeRecipientInfoGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 673 };

  /// @brief Field keyAgreementOID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___keyAgreementOID;

  /// @brief Field keyEncryptionOID, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___keyEncryptionOID;

  /// @brief Field recipientCerts, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IList* ___recipientCerts;

  /// @brief Field senderKeyPair, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* ___senderKeyPair;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator, ___keyAgreementOID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator, ___keyEncryptionOID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator, ___recipientCerts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator, ___senderKeyPair) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*, "Org.BouncyCastle.Cms", "KeyAgreeRecipientInfoGenerator");
