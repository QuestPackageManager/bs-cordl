#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/AbstractTlsSignerCredentials.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCredentials_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractTlsSignerCredentials)
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsSignerCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials);
// Dependencies Org.BouncyCastle.Crypto.Tls.AbstractTlsCredentials
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.AbstractTlsSignerCredentials
class CORDL_TYPE AbstractTlsSignerCredentials : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials {
public:
  // Declarations
  __declspec(property(get = get_SignatureAndHashAlgorithm)) ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* SignatureAndHashAlgorithm;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*() noexcept;

  /// @brief Method GenerateCertificateSignature, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateCertificateSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials* New_ctor();

  /// @brief Method .ctor, addr 0x33114a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_SignatureAndHashAlgorithm, addr 0x331145c, size 0x4c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* get_SignatureAndHashAlgorithm();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* i___Org__BouncyCastle__Crypto__Tls__TlsCredentials() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* i___Org__BouncyCastle__Crypto__Tls__TlsSignerCredentials() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractTlsSignerCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsSignerCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractTlsSignerCredentials(AbstractTlsSignerCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsSignerCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractTlsSignerCredentials(AbstractTlsSignerCredentials const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1177 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials*, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsSignerCredentials");
