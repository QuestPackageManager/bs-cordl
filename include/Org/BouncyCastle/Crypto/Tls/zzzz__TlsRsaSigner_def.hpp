#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsSigner_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsRsaSigner)
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsRsaSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner);
// Type: Org.BouncyCastle.Crypto.Tls::TlsRsaSigner
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1175))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1319))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsRsaSigner*
class CORDL_TYPE TlsRsaSigner : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner {
public:
  // Declarations
  /// @brief Method GenerateRawSignature addr 0xfb18c4 size 0x208 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                   ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  /// @brief Method VerifyRawSignature addr 0xfb1acc size 0x15c virtual true final false
  inline bool VerifyRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> sigBytes,
                                 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  /// @brief Method CreateSigner addr 0xfb1c28 size 0x114 virtual true final false
  inline ::Org::BouncyCastle::Crypto::ISigner* CreateSigner(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method CreateVerifyer addr 0xfb1d3c size 0x1c virtual true final false
  inline ::Org::BouncyCastle::Crypto::ISigner* CreateVerifyer(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method IsValidPublicKey addr 0xfb1d58 size 0x84 virtual true final false
  inline bool IsValidPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method MakeSigner addr 0xfb1ddc size 0x2c4 virtual true final false
  inline ::Org::BouncyCastle::Crypto::ISigner* MakeSigner(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, bool raw, bool forSigning,
                                                          ::Org::BouncyCastle::Crypto::ICipherParameters* cp);

  /// @brief Method CreateRsaImpl addr 0xfb2310 size 0x8c virtual true final false
  inline ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* CreateRsaImpl();

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner* New_ctor();

  /// @brief Method .ctor addr 0xfaa05c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TlsRsaSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsRsaSigner(TlsRsaSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsRsaSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsRsaSigner(TlsRsaSigner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsRsaSigner();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*, "Org.BouncyCastle.Crypto.Tls", "TlsRsaSigner");
