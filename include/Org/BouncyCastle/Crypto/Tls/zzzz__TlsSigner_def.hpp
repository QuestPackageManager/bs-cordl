#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsSigner)
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsSigner);
// Type: Org.BouncyCastle.Crypto.Tls::TlsSigner
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1174))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsSigner*
class CORDL_TYPE TlsSigner {
public:
  // Declarations
  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method GenerateRawSignature, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateRawSignature(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> md5AndSha1);

  /// @brief Method GenerateRawSignature, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                   ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  /// @brief Method VerifyRawSignature, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool VerifyRawSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> sigBytes, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> md5AndSha1);

  /// @brief Method VerifyRawSignature, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool VerifyRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> sigBytes,
                                 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  /// @brief Method CreateSigner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* CreateSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method CreateSigner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* CreateSigner(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method CreateVerifyer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* CreateVerifyer(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method CreateVerifyer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* CreateVerifyer(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method IsValidPublicKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsValidPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  // Ctor Parameters [CppParam { name: "", ty: "TlsSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsSigner(TlsSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsSigner(TlsSigner const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsSigner*, "Org.BouncyCastle.Crypto.Tls", "TlsSigner");
