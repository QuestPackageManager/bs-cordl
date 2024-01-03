#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsClient_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultTlsClient)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHVerifier;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsClient;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient);
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsClient
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1165))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1210))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DefaultTlsClient*
class CORDL_TYPE DefaultTlsClient : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient {
public:
  // Declarations
  /// @brief Field mDHVerifier, offset 0x50, size 0x8
  __declspec(property(get = __get_mDHVerifier, put = __set_mDHVerifier))::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* mDHVerifier;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*& __get_mDHVerifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*> const& __get_mDHVerifier() const;

  constexpr void __set_mDHVerifier(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient* New_ctor();

  /// @brief Method .ctor, addr 0xf64330, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory);

  /// @brief Method .ctor, addr 0xf64394, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory);

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                             ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier);

  /// @brief Method .ctor, addr 0xf6446c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier);

  /// @brief Method GetCipherSuites, addr 0xf6449c, size 0x70, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCipherSuites();

  /// @brief Method GetKeyExchange, addr 0xf6450c, size 0x124, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();

  /// @brief Method CreateDHKeyExchange, addr 0xf64630, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateDHKeyExchange(int32_t keyExchange);

  /// @brief Method CreateDheKeyExchange, addr 0xf646b4, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateDheKeyExchange(int32_t keyExchange);

  /// @brief Method CreateECDHKeyExchange, addr 0xf64738, size 0x90, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateECDHKeyExchange(int32_t keyExchange);

  /// @brief Method CreateECDheKeyExchange, addr 0xf647c8, size 0x90, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateECDheKeyExchange(int32_t keyExchange);

  /// @brief Method CreateRsaKeyExchange, addr 0xf64858, size 0x68, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateRsaKeyExchange();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultTlsClient(DefaultTlsClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultTlsClient(DefaultTlsClient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultTlsClient();

public:
  /// @brief Field mDHVerifier, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* ___mDHVerifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient, ___mDHVerifier) == 0x50, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsClient");
