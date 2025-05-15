#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsClientContextImpl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClientContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
CORDL_MODULE_EXPORT(TlsClientContextImpl)
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientContextImpl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl);
// Dependencies Org.BouncyCastle.Crypto.Tls.AbstractTlsContext, Org.BouncyCastle.Crypto.Tls.TlsClientContext, Org.BouncyCastle.Crypto.Tls.TlsContext
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsClientContextImpl
class CORDL_TYPE TlsClientContextImpl : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext {
public:
  // Declarations
  __declspec(property(get = get_IsServer)) bool IsServer;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsClientContext"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsClientContext*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsContext"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsContext*() noexcept;

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom,
                                                                                 ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* securityParameters);

  /// @brief Method .ctor, addr 0x2420c8c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* securityParameters);

  /// @brief Method get_IsServer, addr 0x2420cfc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsServer();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsClientContext"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContext* i___Org__BouncyCastle__Crypto__Tls__TlsClientContext() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsContext"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* i___Org__BouncyCastle__Crypto__Tls__TlsContext() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsClientContextImpl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsClientContextImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsClientContextImpl(TlsClientContextImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsClientContextImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsClientContextImpl(TlsClientContextImpl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1290 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*, "Org.BouncyCastle.Crypto.Tls", "TlsClientContextImpl");
