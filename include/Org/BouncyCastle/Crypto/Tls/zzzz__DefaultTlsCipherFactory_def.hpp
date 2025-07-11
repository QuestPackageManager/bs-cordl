#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DefaultTlsCipherFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCipherFactory_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultTlsCipherFactory)
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAeadCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsNullCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsStreamCipher;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsCipherFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory);
// Dependencies Org.BouncyCastle.Crypto.Tls.AbstractTlsCipherFactory
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory
class CORDL_TYPE DefaultTlsCipherFactory : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory {
public:
  // Declarations
  /// @brief Method CreateAESCipher, addr 0x23e9820, size 0x100, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* CreateAESCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t cipherKeySize, int32_t macAlgorithm);

  /// @brief Method CreateAeadBlockCipher_Aes_Ccm, addr 0x23ea230, size 0x78, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* CreateAeadBlockCipher_Aes_Ccm();

  /// @brief Method CreateAeadBlockCipher_Aes_Gcm, addr 0x23ea2a8, size 0x78, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* CreateAeadBlockCipher_Aes_Gcm();

  /// @brief Method CreateAeadBlockCipher_Aes_Ocb, addr 0x23ea320, size 0x94, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* CreateAeadBlockCipher_Aes_Ocb();

  /// @brief Method CreateAeadBlockCipher_Camellia_Gcm, addr 0x23ea3b4, size 0x78, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* CreateAeadBlockCipher_Camellia_Gcm();

  /// @brief Method CreateAesBlockCipher, addr 0x23ea1b8, size 0x78, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* CreateAesBlockCipher();

  /// @brief Method CreateAesEngine, addr 0x23ea110, size 0x54, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* CreateAesEngine();

  /// @brief Method CreateCamelliaBlockCipher, addr 0x23ea42c, size 0x78, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* CreateCamelliaBlockCipher();

  /// @brief Method CreateCamelliaCipher, addr 0x23e9920, size 0x100, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* CreateCamelliaCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t cipherKeySize, int32_t macAlgorithm);

  /// @brief Method CreateCamelliaEngine, addr 0x23ea164, size 0x54, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* CreateCamelliaEngine();

  /// @brief Method CreateChaCha20Poly1305, addr 0x23e9a20, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* CreateChaCha20Poly1305(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method CreateCipher, addr 0x23e965c, size 0x1c4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* CreateCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t encryptionAlgorithm, int32_t macAlgorithm);

  /// @brief Method CreateCipher_Aes_Ccm, addr 0x23e9a78, size 0xbc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* CreateCipher_Aes_Ccm(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t cipherKeySize, int32_t macSize);

  /// @brief Method CreateCipher_Aes_Gcm, addr 0x23e9b34, size 0xbc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* CreateCipher_Aes_Gcm(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t cipherKeySize, int32_t macSize);

  /// @brief Method CreateCipher_Aes_Ocb, addr 0x23e9bf0, size 0xc0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* CreateCipher_Aes_Ocb(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t cipherKeySize, int32_t macSize);

  /// @brief Method CreateCipher_Camellia_Gcm, addr 0x23e9cb0, size 0xbc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* CreateCipher_Camellia_Gcm(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t cipherKeySize, int32_t macSize);

  /// @brief Method CreateDesEdeBlockCipher, addr 0x23ea4a4, size 0x80, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* CreateDesEdeBlockCipher();

  /// @brief Method CreateDesEdeCipher, addr 0x23e9d6c, size 0xf4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* CreateDesEdeCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t macAlgorithm);

  /// @brief Method CreateHMacDigest, addr 0x23ea5f8, size 0x144, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IDigest* CreateHMacDigest(int32_t macAlgorithm);

  /// @brief Method CreateNullCipher, addr 0x23e9e60, size 0xb0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsNullCipher* CreateNullCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t macAlgorithm);

  /// @brief Method CreateRC4Cipher, addr 0x23e9f10, size 0x10c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher* CreateRC4Cipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t cipherKeySize, int32_t macAlgorithm);

  /// @brief Method CreateRC4StreamCipher, addr 0x23ea524, size 0x54, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IStreamCipher* CreateRC4StreamCipher();

  /// @brief Method CreateSeedBlockCipher, addr 0x23ea578, size 0x80, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* CreateSeedBlockCipher();

  /// @brief Method CreateSeedCipher, addr 0x23ea01c, size 0xf4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* CreateSeedCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t macAlgorithm);

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory* New_ctor();

  /// @brief Method .ctor, addr 0x23e0be8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultTlsCipherFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsCipherFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultTlsCipherFactory(DefaultTlsCipherFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsCipherFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultTlsCipherFactory(DefaultTlsCipherFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1209 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsCipherFactory");
