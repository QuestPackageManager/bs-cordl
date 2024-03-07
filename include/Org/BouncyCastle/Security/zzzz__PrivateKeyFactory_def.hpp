#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrivateKeyFactory)
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptedPrivateKeyInfo;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class PrivateKeyFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::PrivateKeyFactory);
// Type: Org.BouncyCastle.Security::PrivateKeyFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Security::PrivateKeyFactory*
class CORDL_TYPE PrivateKeyFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateKey, addr 0x11d49c4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* CreateKey(::System::IO::Stream* inStr);

  /// @brief Method CreateKey, addr 0x11d353c, size 0x1488, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* CreateKey(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* keyInfo);

  /// @brief Method CreateKey, addr 0x11d3520, size 0x1c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* CreateKey(::ArrayW<uint8_t, ::Array<uint8_t>*> privateKeyInfoData);

  /// @brief Method DecryptKey, addr 0x11d4ab0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* DecryptKey(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method DecryptKey, addr 0x11d4a78, size 0x14, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* DecryptKey(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encInfo);

  /// @brief Method DecryptKey, addr 0x11d4a8c, size 0x24, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* DecryptKey(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::ArrayW<uint8_t, ::Array<uint8_t>*> encryptedPrivateKeyInfoData);

  /// @brief Method DecryptKey, addr 0x11d4adc, size 0x24, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* DecryptKey(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::System::IO::Stream* encryptedPrivateKeyInfoStream);

  /// @brief Method EncryptKey, addr 0x11d4b00, size 0x20, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptKey(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);

  /// @brief Method EncryptKey, addr 0x11d4b20, size 0x1020, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptKey(::StringW algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt,
                                                                int32_t iterationCount, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);

  /// @brief Method GetRawKey, addr 0x11d49e0, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRawKey(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* keyInfo, int32_t expectedSize);

  static inline ::Org::BouncyCastle::Security::PrivateKeyFactory* New_ctor();

  /// @brief Method .ctor, addr 0x11d3518, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivateKeyFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrivateKeyFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivateKeyFactory(PrivateKeyFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivateKeyFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivateKeyFactory(PrivateKeyFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::PrivateKeyFactory, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::PrivateKeyFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::PrivateKeyFactory*, "Org.BouncyCastle.Security", "PrivateKeyFactory");
