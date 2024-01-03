#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCredentials_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractTlsAgreementCredentials)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAgreementCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsAgreementCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials);
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsAgreementCredentials
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1157))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1159))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::AbstractTlsAgreementCredentials*
class CORDL_TYPE AbstractTlsAgreementCredentials : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials* i___Org__BouncyCastle__Crypto__Tls__TlsAgreementCredentials() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* i___Org__BouncyCastle__Crypto__Tls__TlsCredentials() noexcept;

  /// @brief Method GenerateAgreement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateAgreement(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* peerPublicKey);

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials* New_ctor();

  /// @brief Method .ctor, addr 0xf5a308, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsAgreementCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractTlsAgreementCredentials(AbstractTlsAgreementCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsAgreementCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractTlsAgreementCredentials(AbstractTlsAgreementCredentials const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractTlsAgreementCredentials();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials*, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsAgreementCredentials");
