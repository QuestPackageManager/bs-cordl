#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptedPrivateKeyInfoFactory)
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptedPrivateKeyInfo;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class EncryptedPrivateKeyInfoFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory);
// Type: Org.BouncyCastle.Pkcs::EncryptedPrivateKeyInfoFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Pkcs::EncryptedPrivateKeyInfoFactory*
class CORDL_TYPE EncryptedPrivateKeyInfoFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateEncryptedPrivateKeyInfo, addr 0x116c5fc, size 0x54, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* CreateEncryptedPrivateKeyInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm,
                                                                                                        ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt,
                                                                                                        int32_t iterationCount, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);

  /// @brief Method CreateEncryptedPrivateKeyInfo, addr 0x116b804, size 0x4c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* CreateEncryptedPrivateKeyInfo(::StringW algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount,
                                                                                                        ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);

  /// @brief Method CreateEncryptedPrivateKeyInfo, addr 0x116c650, size 0x2a4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* CreateEncryptedPrivateKeyInfo(::StringW algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount,
                                                                                                        ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* keyInfo);

  /// @brief Method CreateEncryptedPrivateKeyInfo, addr 0x116c8f4, size 0x64, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* CreateEncryptedPrivateKeyInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier* cipherAlgorithm,
                                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* prfAlgorithm,
                                                                                                        ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt,
                                                                                                        int32_t iterationCount, ::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                                        ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);

  /// @brief Method CreateEncryptedPrivateKeyInfo, addr 0x116c958, size 0x2f4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* CreateEncryptedPrivateKeyInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier* cipherAlgorithm,
                                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* prfAlgorithm,
                                                                                                        ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt,
                                                                                                        int32_t iterationCount, ::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                                        ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* keyInfo);

  static inline ::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory* New_ctor();

  /// @brief Method .ctor, addr 0x116c5f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptedPrivateKeyInfoFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncryptedPrivateKeyInfoFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptedPrivateKeyInfoFactory(EncryptedPrivateKeyInfoFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedPrivateKeyInfoFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptedPrivateKeyInfoFactory(EncryptedPrivateKeyInfoFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*, "Org.BouncyCastle.Pkcs", "EncryptedPrivateKeyInfoFactory");
