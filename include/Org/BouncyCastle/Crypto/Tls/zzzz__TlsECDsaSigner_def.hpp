#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDsaSigner_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsECDsaSigner)
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsECDsaSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner);
// Type: Org.BouncyCastle.Crypto.Tls::TlsECDsaSigner
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1301))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1306))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsECDsaSigner*
class CORDL_TYPE TlsECDsaSigner : public ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner {
public:
  // Declarations
  __declspec(property(get = get_SignatureAlgorithm)) uint8_t SignatureAlgorithm;

  /// @brief Method IsValidPublicKey addr 0xf35a30 size 0x78 virtual true final false
  inline bool IsValidPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method CreateDsaImpl addr 0xf35aa8 size 0xc8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::IDsa* CreateDsaImpl(uint8_t hashAlgorithm);

  /// @brief Method get_SignatureAlgorithm addr 0xf35d48 size 0x8 virtual true final false
  inline uint8_t get_SignatureAlgorithm();

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner* New_ctor();

  /// @brief Method .ctor addr 0xf33e1c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TlsECDsaSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsECDsaSigner(TlsECDsaSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsECDsaSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsECDsaSigner(TlsECDsaSigner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsECDsaSigner();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner*, "Org.BouncyCastle.Crypto.Tls", "TlsECDsaSigner");
