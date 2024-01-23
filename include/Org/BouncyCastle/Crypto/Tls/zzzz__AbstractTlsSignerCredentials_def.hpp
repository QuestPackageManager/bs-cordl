#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCredentials_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsSignerCredentials
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1157))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1177))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::AbstractTlsSignerCredentials*
class CORDL_TYPE AbstractTlsSignerCredentials : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials {
public:
  // Declarations
  __declspec(property(get = get_SignatureAndHashAlgorithm))::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* SignatureAndHashAlgorithm;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* i___Org__BouncyCastle__Crypto__Tls__TlsSignerCredentials() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* i___Org__BouncyCastle__Crypto__Tls__TlsCredentials() noexcept;

  /// @brief Method GenerateCertificateSignature, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateCertificateSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  /// @brief Method get_SignatureAndHashAlgorithm, addr 0xf5c9d8, size 0x50, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* get_SignatureAndHashAlgorithm();

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials* New_ctor();

  /// @brief Method .ctor, addr 0xf5ca28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsSignerCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractTlsSignerCredentials(AbstractTlsSignerCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsSignerCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractTlsSignerCredentials(AbstractTlsSignerCredentials const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractTlsSignerCredentials();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials*, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsSignerCredentials");
