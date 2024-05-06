#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_def.hpp"
CORDL_MODULE_EXPORT(TlsClientContextImpl)
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
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
// Type: Org.BouncyCastle.Crypto.Tls::TlsClientContextImpl
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsClientContextImpl*
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

  /// @brief Method .ctor, addr 0x11faf48, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* securityParameters);

  /// @brief Method get_IsServer, addr 0x11fafb8, size 0x8, virtual true, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*, "Org.BouncyCastle.Crypto.Tls", "TlsClientContextImpl");
