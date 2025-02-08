#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/AbstractTlsEncryptionCredentials.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsEncryptionCredentials_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractTlsEncryptionCredentials)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsEncryptionCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials);
// Dependencies Org.BouncyCastle.Crypto.Tls.AbstractTlsCredentials, Org.BouncyCastle.Crypto.Tls.TlsCredentials, Org.BouncyCastle.Crypto.Tls.TlsEncryptionCredentials
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.AbstractTlsEncryptionCredentials
class CORDL_TYPE AbstractTlsEncryptionCredentials : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*() noexcept;

  /// @brief Method DecryptPreMasterSecret, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecryptPreMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> encryptedPreMasterSecret);

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials* New_ctor();

  /// @brief Method .ctor, addr 0x23e223c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* i___Org__BouncyCastle__Crypto__Tls__TlsCredentials() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* i___Org__BouncyCastle__Crypto__Tls__TlsEncryptionCredentials() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractTlsEncryptionCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsEncryptionCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractTlsEncryptionCredentials(AbstractTlsEncryptionCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsEncryptionCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractTlsEncryptionCredentials(AbstractTlsEncryptionCredentials const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1169 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials*, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsEncryptionCredentials");
