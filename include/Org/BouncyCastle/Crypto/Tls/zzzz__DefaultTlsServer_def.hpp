#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DefaultTlsServer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsServer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultTlsServer)
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsEncryptionCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsServer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer);
// Dependencies Org.BouncyCastle.Crypto.Tls.AbstractTlsServer
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.DefaultTlsServer
class CORDL_TYPE DefaultTlsServer : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer {
public:
  // Declarations
  /// @brief Method CreateDHKeyExchange, addr 0x331a068, size 0x98, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateDHKeyExchange(int32_t keyExchange);

  /// @brief Method CreateDheKeyExchange, addr 0x331a100, size 0x98, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateDheKeyExchange(int32_t keyExchange);

  /// @brief Method CreateECDHKeyExchange, addr 0x331a198, size 0x90, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateECDHKeyExchange(int32_t keyExchange);

  /// @brief Method CreateECDheKeyExchange, addr 0x331a228, size 0x90, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateECDheKeyExchange(int32_t keyExchange);

  /// @brief Method CreateRsaKeyExchange, addr 0x331a2b8, size 0x64, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateRsaKeyExchange();

  /// @brief Method GetCipherSuites, addr 0x3319d58, size 0x78, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCipherSuites();

  /// @brief Method GetCredentials, addr 0x3319dd0, size 0x140, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* GetCredentials();

  /// @brief Method GetDHParameters, addr 0x3319cfc, size 0x5c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* GetDHParameters();

  /// @brief Method GetDsaSignerCredentials, addr 0x3319c0c, size 0x3c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* GetDsaSignerCredentials();

  /// @brief Method GetECDsaSignerCredentials, addr 0x3319c48, size 0x3c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* GetECDsaSignerCredentials();

  /// @brief Method GetKeyExchange, addr 0x3319f10, size 0x158, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();

  /// @brief Method GetRsaEncryptionCredentials, addr 0x3319c84, size 0x3c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* GetRsaEncryptionCredentials();

  /// @brief Method GetRsaSignerCredentials, addr 0x3319cc0, size 0x3c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* GetRsaSignerCredentials();

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory);

  /// @brief Method .ctor, addr 0x3319c00, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3319c04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultTlsServer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsServer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultTlsServer(DefaultTlsServer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsServer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultTlsServer(DefaultTlsServer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1214 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsServer");
