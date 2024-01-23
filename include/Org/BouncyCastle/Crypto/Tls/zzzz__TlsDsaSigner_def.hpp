#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsSigner_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.Tls::TlsDsaSigner
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1175))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1301))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsDsaSigner*
class CORDL_TYPE TlsDsaSigner : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner {
public:
  // Declarations
  __declspec(property(get = get_SignatureAlgorithm)) uint8_t SignatureAlgorithm;

  /// @brief Method GenerateRawSignature, addr 0xfa6834, size 0x27c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                   ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  /// @brief Method VerifyRawSignature, addr 0xfa6ab0, size 0x1d0, virtual true, abstract: false, final false
  inline bool VerifyRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> sigBytes,
                                 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  /// @brief Method CreateSigner, addr 0xfa6c80, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* CreateSigner(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method CreateVerifyer, addr 0xfa6c9c, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* CreateVerifyer(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method MakeInitParameters, addr 0xfa6cb8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* MakeInitParameters(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* cp);

  /// @brief Method MakeSigner, addr 0xfa6cc0, size 0x264, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* MakeSigner(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, bool raw, bool forSigning,
                                                          ::Org::BouncyCastle::Crypto::ICipherParameters* cp);

  /// @brief Method get_SignatureAlgorithm, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint8_t get_SignatureAlgorithm();

  /// @brief Method CreateDsaImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::IDsa* CreateDsaImpl(uint8_t hashAlgorithm);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner* New_ctor();

  /// @brief Method .ctor, addr 0xfa6f24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TlsDsaSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsDsaSigner(TlsDsaSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsDsaSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsDsaSigner(TlsDsaSigner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsDsaSigner();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*, "Org.BouncyCastle.Crypto.Tls", "TlsDsaSigner");
