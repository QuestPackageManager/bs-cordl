#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/SrpTlsServer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsServer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SrpTlsServer)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpIdentityManager;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpLoginParameters;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SrpTlsServer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::SrpTlsServer);
// Dependencies Org.BouncyCastle.Crypto.Tls.AbstractTlsServer
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.SrpTlsServer
class CORDL_TYPE SrpTlsServer : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer {
public:
  // Declarations
  /// @brief Field mLoginParameters, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_mLoginParameters, put = __cordl_internal_set_mLoginParameters)) ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* mLoginParameters;

  /// @brief Field mSrpIdentity, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_mSrpIdentity, put = __cordl_internal_set_mSrpIdentity)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mSrpIdentity;

  /// @brief Field mSrpIdentityManager, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_mSrpIdentityManager, put = __cordl_internal_set_mSrpIdentityManager)) ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* mSrpIdentityManager;

  /// @brief Method CreateSrpKeyExchange, addr 0x241bf1c, size 0x7c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateSrpKeyExchange(int32_t keyExchange);

  /// @brief Method GetCipherSuites, addr 0x241bbc0, size 0x70, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCipherSuites();

  /// @brief Method GetCredentials, addr 0x241bd84, size 0xe0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* GetCredentials();

  /// @brief Method GetDsaSignerCredentials, addr 0x241bb48, size 0x3c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* GetDsaSignerCredentials();

  /// @brief Method GetKeyExchange, addr 0x241be64, size 0xb8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();

  /// @brief Method GetRsaSignerCredentials, addr 0x241bb84, size 0x3c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* GetRsaSignerCredentials();

  /// @brief Method GetSelectedCipherSuite, addr 0x241bc64, size 0x120, virtual true, abstract: false, final false
  inline int32_t GetSelectedCipherSuite();

  static inline ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                         ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* srpIdentityManager);

  static inline ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* srpIdentityManager);

  /// @brief Method ProcessClientExtensions, addr 0x241bc30, size 0x34, virtual true, abstract: false, final false
  inline void ProcessClientExtensions(::System::Collections::IDictionary* clientExtensions);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* const& __cordl_internal_get_mLoginParameters() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*& __cordl_internal_get_mLoginParameters();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mSrpIdentity() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mSrpIdentity();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* const& __cordl_internal_get_mSrpIdentityManager() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*& __cordl_internal_get_mSrpIdentityManager();

  constexpr void __cordl_internal_set_mLoginParameters(::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* value);

  constexpr void __cordl_internal_set_mSrpIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mSrpIdentityManager(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* value);

  /// @brief Method .ctor, addr 0x241bb1c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* srpIdentityManager);

  /// @brief Method .ctor, addr 0x241baa4, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* srpIdentityManager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SrpTlsServer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SrpTlsServer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SrpTlsServer(SrpTlsServer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SrpTlsServer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SrpTlsServer(SrpTlsServer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1281 };

  /// @brief Field mSrpIdentityManager, offset: 0x90, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* ___mSrpIdentityManager;

  /// @brief Field mSrpIdentity, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mSrpIdentity;

  /// @brief Field mLoginParameters, offset: 0xa0, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* ___mLoginParameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SrpTlsServer, ___mSrpIdentityManager) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SrpTlsServer, ___mSrpIdentity) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SrpTlsServer, ___mLoginParameters) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer, 0xa8>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SrpTlsServer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*, "Org.BouncyCastle.Crypto.Tls", "SrpTlsServer");
