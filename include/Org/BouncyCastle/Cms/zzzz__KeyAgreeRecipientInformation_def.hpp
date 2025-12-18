#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/KeyAgreeRecipientInformation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyAgreeRecipientInformation)
namespace Org::BouncyCastle::Asn1::Cms {
class KeyAgreeRecipientInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorIdentifierOrKey;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorPublicKey;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace Org::BouncyCastle::Cms {
class OriginatorID;
}
namespace Org::BouncyCastle::Cms {
class RecipientID;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class KeyAgreeRecipientInformation;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation);
// Dependencies Org.BouncyCastle.Cms.RecipientInformation
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.KeyAgreeRecipientInformation
class CORDL_TYPE KeyAgreeRecipientInformation : public ::Org::BouncyCastle::Cms::RecipientInformation {
public:
  // Declarations
  /// @brief Field encryptedKey, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptedKey, put = __cordl_internal_set_encryptedKey)) ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey;

  /// @brief Field info, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_info, put = __cordl_internal_set_info)) ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info;

  /// @brief Method CalculateAgreedWrapKey, addr 0x35d3610, size 0x3f0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* CalculateAgreedWrapKey(::StringW wrapAlg, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPublicKey,
                                                                                       ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* receiverPrivateKey);

  /// @brief Method GetContentStream, addr 0x35d3e2c, size 0x118, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsTypedStream* GetContentStream(::Org::BouncyCastle::Crypto::ICipherParameters* key);

  /// @brief Method GetPublicKeyFromOriginatorID, addr 0x35d35c4, size 0x4c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetPublicKeyFromOriginatorID(::Org::BouncyCastle::Cms::OriginatorID* origID);

  /// @brief Method GetPublicKeyFromOriginatorPublicKey, addr 0x35d3500, size 0xb8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetPublicKeyFromOriginatorPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* receiverPrivateKey,
                                                                                                  ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* originatorPublicKey);

  /// @brief Method GetSenderPublicKey, addr 0x35d3428, size 0xd8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetSenderPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* receiverPrivateKey,
                                                                                 ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* originator);

  /// @brief Method GetSessionKey, addr 0x35d3bcc, size 0x260, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* GetSessionKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* receiverPrivateKey);

  static inline ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation* New_ctor(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info, ::Org::BouncyCastle::Cms::RecipientID* rid,
                                                                                 ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  /// @brief Method ReadRecipientInfo, addr 0x35b3344, size 0x530, virtual false, abstract: false, final false
  static inline void ReadRecipientInfo(::System::Collections::IList* infos, ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  /// @brief Method UnwrapSessionKey, addr 0x35d3a00, size 0x1cc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* UnwrapSessionKey(::StringW wrapAlg, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* agreedKey);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_encryptedKey() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_encryptedKey();

  constexpr ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* const& __cordl_internal_get_info() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*& __cordl_internal_get_info();

  constexpr void __cordl_internal_set_encryptedKey(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_info(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* value);

  /// @brief Method .ctor, addr 0x35d33e0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info, ::Org::BouncyCastle::Cms::RecipientID* rid, ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey,
                    ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyAgreeRecipientInformation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyAgreeRecipientInformation(KeyAgreeRecipientInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyAgreeRecipientInformation(KeyAgreeRecipientInformation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 674 };

  /// @brief Field info, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* ___info;

  /// @brief Field encryptedKey, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___encryptedKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation, ___info) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation, ___encryptedKey) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*, "Org.BouncyCastle.Cms", "KeyAgreeRecipientInformation");
