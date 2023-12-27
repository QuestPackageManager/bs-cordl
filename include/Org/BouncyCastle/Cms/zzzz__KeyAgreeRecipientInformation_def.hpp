#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyAgreeRecipientInformation)
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
namespace Org::BouncyCastle::Cms {
class RecipientID;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorPublicKey;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorIdentifierOrKey;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KeyAgreeRecipientInfo;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Cms {
class OriginatorID;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class KeyAgreeRecipientInformation;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation);
// Type: Org.BouncyCastle.Cms::KeyAgreeRecipientInformation
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(671))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(674))
// CS Name: ::Org.BouncyCastle.Cms::KeyAgreeRecipientInformation*
class CORDL_TYPE KeyAgreeRecipientInformation : public ::Org::BouncyCastle::Cms::RecipientInformation {
public:
  // Declarations
  /// @brief Field info, offset 0x30, size 0x8
  __declspec(property(get = __get_info, put = __set_info))::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info;

  /// @brief Field encryptedKey, offset 0x38, size 0x8
  __declspec(property(get = __get_encryptedKey, put = __set_encryptedKey))::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey;

  constexpr ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*& __get_info();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*> const& __get_info() const;

  constexpr void __set_info(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_encryptedKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_encryptedKey() const;

  constexpr void __set_encryptedKey(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method ReadRecipientInfo addr 0x11e39d0 size 0x57c virtual false final false
  static inline void ReadRecipientInfo(::System::Collections::IList* infos, ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  static inline ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation* New_ctor(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info, ::Org::BouncyCastle::Cms::RecipientID* rid,
                                                                                 ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  /// @brief Method .ctor addr 0x1203efc size 0x48 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info, ::Org::BouncyCastle::Cms::RecipientID* rid, ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey,
                    ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  /// @brief Method GetSenderPublicKey addr 0x1203f44 size 0xdc virtual false final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetSenderPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* receiverPrivateKey,
                                                                                 ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* originator);

  /// @brief Method GetPublicKeyFromOriginatorPublicKey addr 0x1204020 size 0xb0 virtual false final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetPublicKeyFromOriginatorPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* receiverPrivateKey,
                                                                                                  ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* originatorPublicKey);

  /// @brief Method GetPublicKeyFromOriginatorID addr 0x12040e0 size 0x50 virtual false final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetPublicKeyFromOriginatorID(::Org::BouncyCastle::Cms::OriginatorID* origID);

  /// @brief Method CalculateAgreedWrapKey addr 0x1204130 size 0x3d4 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* CalculateAgreedWrapKey(::StringW wrapAlg, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPublicKey,
                                                                                       ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* receiverPrivateKey);

  /// @brief Method UnwrapSessionKey addr 0x1204504 size 0x1c0 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* UnwrapSessionKey(::StringW wrapAlg, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* agreedKey);

  /// @brief Method GetSessionKey addr 0x12046c4 size 0x258 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* GetSessionKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* receiverPrivateKey);

  /// @brief Method GetContentStream addr 0x120491c size 0x114 virtual true final false
  inline ::Org::BouncyCastle::Cms::CmsTypedStream* GetContentStream(::Org::BouncyCastle::Crypto::ICipherParameters* key);

  // Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyAgreeRecipientInformation(KeyAgreeRecipientInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyAgreeRecipientInformation(KeyAgreeRecipientInformation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyAgreeRecipientInformation();

public:
  /// @brief Field info, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* ___info;

  /// @brief Field encryptedKey, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___encryptedKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*, "Org.BouncyCastle.Cms", "KeyAgreeRecipientInformation");
