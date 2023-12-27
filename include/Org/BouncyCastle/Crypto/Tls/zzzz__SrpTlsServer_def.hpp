#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsServer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SrpTlsServer)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpLoginParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpIdentityManager;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
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
// Type: Org.BouncyCastle.Crypto.Tls::SrpTlsServer
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1173))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1281))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::SrpTlsServer*
class CORDL_TYPE SrpTlsServer : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer {
public:
  // Declarations
  /// @brief Field mSrpIdentityManager, offset 0x90, size 0x8
  __declspec(property(get = __get_mSrpIdentityManager, put = __set_mSrpIdentityManager))::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* mSrpIdentityManager;

  /// @brief Field mSrpIdentity, offset 0x98, size 0x8
  __declspec(property(get = __get_mSrpIdentity, put = __set_mSrpIdentity))::ArrayW<uint8_t, ::Array<uint8_t>*> mSrpIdentity;

  /// @brief Field mLoginParameters, offset 0xa0, size 0x8
  __declspec(property(get = __get_mLoginParameters, put = __set_mLoginParameters))::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* mLoginParameters;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*& __get_mSrpIdentityManager();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*> const& __get_mSrpIdentityManager() const;

  constexpr void __set_mSrpIdentityManager(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mSrpIdentity();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mSrpIdentity() const;

  constexpr void __set_mSrpIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*& __get_mLoginParameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*> const& __get_mLoginParameters() const;

  constexpr void __set_mLoginParameters(::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* srpIdentityManager);

  /// @brief Method .ctor addr 0xf97830 size 0x80 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* srpIdentityManager);

  static inline ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                         ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* srpIdentityManager);

  /// @brief Method .ctor addr 0xf978b0 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* srpIdentityManager);

  /// @brief Method GetDsaSignerCredentials addr 0xf978dc size 0x44 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* GetDsaSignerCredentials();

  /// @brief Method GetRsaSignerCredentials addr 0xf97920 size 0x44 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* GetRsaSignerCredentials();

  /// @brief Method GetCipherSuites addr 0xf97964 size 0x70 virtual true final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCipherSuites();

  /// @brief Method ProcessClientExtensions addr 0xf979d4 size 0x34 virtual true final false
  inline void ProcessClientExtensions(::System::Collections::IDictionary* clientExtensions);

  /// @brief Method GetSelectedCipherSuite addr 0xf97a08 size 0x12c virtual true final false
  inline int32_t GetSelectedCipherSuite();

  /// @brief Method GetCredentials addr 0xf97b34 size 0xe8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* GetCredentials();

  /// @brief Method GetKeyExchange addr 0xf97c1c size 0xc0 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();

  /// @brief Method CreateSrpKeyExchange addr 0xf97cdc size 0x84 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateSrpKeyExchange(int32_t keyExchange);

  // Ctor Parameters [CppParam { name: "", ty: "SrpTlsServer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SrpTlsServer(SrpTlsServer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SrpTlsServer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SrpTlsServer(SrpTlsServer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SrpTlsServer();

public:
  /// @brief Field mSrpIdentityManager, offset: 0x90, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* ___mSrpIdentityManager;

  /// @brief Field mSrpIdentity, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mSrpIdentity;

  /// @brief Field mLoginParameters, offset: 0xa0, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* ___mLoginParameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer, 0xa8>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SrpTlsServer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*, "Org.BouncyCastle.Crypto.Tls", "SrpTlsServer");
