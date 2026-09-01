#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\TlsHandshakeHash.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsHandshakeHash)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, "Org.BouncyCastle.Crypto.Tls", "TlsHandshakeHash");
// Dependencies
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsHandshakeHash
class CORDL_TYPE TlsHandshakeHash {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Method ForkPrfHash, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IDigest* ForkPrfHash();

  /// @brief Method GetFinalHash, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t> GetFinalHash(uint8_t hashAlgorithm);

  /// @brief Method Init, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method NotifyPrfDetermined, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* NotifyPrfDetermined();

  /// @brief Method SealHashAlgorithms, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SealHashAlgorithms();

  /// @brief Method StopTracking, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* StopTracking();

  /// @brief Method TrackHashAlgorithm, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void TrackHashAlgorithm(uint8_t hashAlgorithm);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "TlsHandshakeHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsHandshakeHash(TlsHandshakeHash const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1201 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
