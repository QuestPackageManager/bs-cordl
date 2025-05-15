#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsECDsaSigner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDsaSigner_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsECDsaSigner)
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsECDsaSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner);
// Dependencies Org.BouncyCastle.Crypto.Tls.TlsDsaSigner
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsECDsaSigner
class CORDL_TYPE TlsECDsaSigner : public ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner {
public:
  // Declarations
  __declspec(property(get = get_SignatureAlgorithm)) uint8_t SignatureAlgorithm;

  /// @brief Method CreateDsaImpl, addr 0x2430b58, size 0xbc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IDsa* CreateDsaImpl(uint8_t hashAlgorithm);

  /// @brief Method IsValidPublicKey, addr 0x2430ae0, size 0x78, virtual true, abstract: false, final false
  inline bool IsValidPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner* New_ctor();

  /// @brief Method .ctor, addr 0x242ef4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_SignatureAlgorithm, addr 0x2430dcc, size 0x8, virtual true, abstract: false, final false
  inline uint8_t get_SignatureAlgorithm();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsECDsaSigner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsECDsaSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsECDsaSigner(TlsECDsaSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsECDsaSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsECDsaSigner(TlsECDsaSigner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1306 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner*, "Org.BouncyCastle.Crypto.Tls", "TlsECDsaSigner");
