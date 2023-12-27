#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_def.hpp"
CORDL_MODULE_EXPORT(TlsServerContextImpl)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContextImpl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl);
// Type: Org.BouncyCastle.Crypto.Tls::TlsServerContextImpl
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1167))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1322))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsServerContextImpl*
class CORDL_TYPE TlsServerContextImpl : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext {
public:
  // Declarations
  __declspec(property(get = get_IsServer)) bool IsServer;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsServerContext"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsServerContext*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsContext"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsContext*() noexcept;

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl* New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom,
                                                                                 ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* securityParameters);

  /// @brief Method .ctor addr 0xfb27cc size 0x70 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* securityParameters);

  /// @brief Method get_IsServer addr 0xfb283c size 0x8 virtual true final false
  inline bool get_IsServer();

  // Ctor Parameters [CppParam { name: "", ty: "TlsServerContextImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsServerContextImpl(TlsServerContextImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsServerContextImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsServerContextImpl(TlsServerContextImpl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsServerContextImpl();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*, "Org.BouncyCastle.Crypto.Tls", "TlsServerContextImpl");
