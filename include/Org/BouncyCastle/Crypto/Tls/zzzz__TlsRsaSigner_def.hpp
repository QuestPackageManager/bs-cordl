#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsRsaSigner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsSigner_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsRsaSigner)
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsRsaSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner);
// Dependencies Org.BouncyCastle.Crypto.Tls.AbstractTlsSigner
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsRsaSigner
class CORDL_TYPE TlsRsaSigner : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner {
public:
  // Declarations
  /// @brief Method CreateRsaImpl, addr 0x243706c, size 0x80, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* CreateRsaImpl();

  /// @brief Method CreateSigner, addr 0x2436988, size 0x110, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* CreateSigner(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method CreateVerifyer, addr 0x2436a98, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* CreateVerifyer(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method GenerateRawSignature, addr 0x2436628, size 0x204, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                   ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  /// @brief Method IsValidPublicKey, addr 0x2436ab4, size 0x84, virtual true, abstract: false, final false
  inline bool IsValidPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method MakeSigner, addr 0x2436b38, size 0x2b0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* MakeSigner(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, bool raw, bool forSigning,
                                                          ::Org::BouncyCastle::Crypto::ICipherParameters* cp);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner* New_ctor();

  /// @brief Method VerifyRawSignature, addr 0x243682c, size 0x15c, virtual true, abstract: false, final false
  inline bool VerifyRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> sigBytes,
                                 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  /// @brief Method .ctor, addr 0x242ef94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsRsaSigner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsRsaSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsRsaSigner(TlsRsaSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsRsaSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsRsaSigner(TlsRsaSigner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1319 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*, "Org.BouncyCastle.Crypto.Tls", "TlsRsaSigner");
