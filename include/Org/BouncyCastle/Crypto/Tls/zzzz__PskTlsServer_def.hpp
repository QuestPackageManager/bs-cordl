#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsServer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PskTlsServer)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentityManager;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsEncryptionCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class PskTlsServer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::PskTlsServer);
// Type: Org.BouncyCastle.Crypto.Tls::PskTlsServer
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1173))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1262))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::PskTlsServer*
class CORDL_TYPE PskTlsServer : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer {
public:
  // Declarations
  /// @brief Field mPskIdentityManager, offset 0x90, size 0x8
  __declspec(property(get = __get_mPskIdentityManager, put = __set_mPskIdentityManager))::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* mPskIdentityManager;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*& __get_mPskIdentityManager();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*> const& __get_mPskIdentityManager() const;

  constexpr void __set_mPskIdentityManager(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::PskTlsServer* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager);

  /// @brief Method .ctor addr 0xf9329c size 0x7c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager);

  static inline ::Org::BouncyCastle::Crypto::Tls::PskTlsServer* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                         ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager);

  /// @brief Method .ctor addr 0xf93318 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager);

  /// @brief Method GetRsaEncryptionCredentials addr 0xf93340 size 0x44 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* GetRsaEncryptionCredentials();

  /// @brief Method GetDHParameters addr 0xf93384 size 0x58 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* GetDHParameters();

  /// @brief Method GetCipherSuites addr 0xf933dc size 0x70 virtual true final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCipherSuites();

  /// @brief Method GetCredentials addr 0xf9344c size 0xdc virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* GetCredentials();

  /// @brief Method GetKeyExchange addr 0xf93528 size 0xc8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();

  /// @brief Method CreatePskKeyExchange addr 0xf935f0 size 0xd0 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreatePskKeyExchange(int32_t keyExchange);

  // Ctor Parameters [CppParam { name: "", ty: "PskTlsServer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PskTlsServer(PskTlsServer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PskTlsServer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PskTlsServer(PskTlsServer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PskTlsServer();

public:
  /// @brief Field mPskIdentityManager, offset: 0x90, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* ___mPskIdentityManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::PskTlsServer, 0x98>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::PskTlsServer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::PskTlsServer*, "Org.BouncyCastle.Crypto.Tls", "PskTlsServer");
