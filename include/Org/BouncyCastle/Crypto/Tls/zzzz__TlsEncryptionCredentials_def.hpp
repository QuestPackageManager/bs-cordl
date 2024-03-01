#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsEncryptionCredentials)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsEncryptionCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials);
// Type: Org.BouncyCastle.Crypto.Tls::TlsEncryptionCredentials
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsEncryptionCredentials*
class CORDL_TYPE TlsEncryptionCredentials {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*() noexcept;

  /// @brief Method DecryptPreMasterSecret, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecryptPreMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> encryptedPreMasterSecret);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* i___Org__BouncyCastle__Crypto__Tls__TlsCredentials() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "TlsEncryptionCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsEncryptionCredentials(TlsEncryptionCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsEncryptionCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsEncryptionCredentials(TlsEncryptionCredentials const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*, "Org.BouncyCastle.Crypto.Tls", "TlsEncryptionCredentials");
