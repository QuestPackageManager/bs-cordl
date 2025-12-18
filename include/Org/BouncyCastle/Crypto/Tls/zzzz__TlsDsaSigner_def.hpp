#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsDsaSigner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsSigner_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsDsaSigner)
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
class IDsa;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDsaSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner);
// Dependencies Org.BouncyCastle.Crypto.Tls.AbstractTlsSigner
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsDsaSigner
class CORDL_TYPE TlsDsaSigner : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner {
public:
  // Declarations
  __declspec(property(get = get_SignatureAlgorithm)) uint8_t SignatureAlgorithm;

  /// @brief Method CreateDsaImpl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IDsa* CreateDsaImpl(uint8_t hashAlgorithm);

  /// @brief Method CreateSigner, addr 0x3384af0, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* CreateSigner(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method CreateVerifyer, addr 0x3384b0c, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* CreateVerifyer(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method GenerateRawSignature, addr 0x3384698, size 0x284, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                   ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  /// @brief Method MakeInitParameters, addr 0x3384b28, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* MakeInitParameters(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* cp);

  /// @brief Method MakeSigner, addr 0x3384b30, size 0x268, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* MakeSigner(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, bool raw, bool forSigning,
                                                          ::Org::BouncyCastle::Crypto::ICipherParameters* cp);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner* New_ctor();

  /// @brief Method VerifyRawSignature, addr 0x338491c, size 0x1d4, virtual true, abstract: false, final false
  inline bool VerifyRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> sigBytes,
                                 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  /// @brief Method .ctor, addr 0x3384d98, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_SignatureAlgorithm, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline uint8_t get_SignatureAlgorithm();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsDsaSigner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsDsaSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsDsaSigner(TlsDsaSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsDsaSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsDsaSigner(TlsDsaSigner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1301 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*, "Org.BouncyCastle.Crypto.Tls", "TlsDsaSigner");
