#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsClient_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PskTlsClient)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentity;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHVerifier;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class PskTlsClient;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::PskTlsClient);
// Type: Org.BouncyCastle.Crypto.Tls::PskTlsClient
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1165))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1261))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::PskTlsClient*
class CORDL_TYPE PskTlsClient : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient {
public:
  // Declarations
  /// @brief Field mDHVerifier, offset 0x50, size 0x8
  __declspec(property(get = __get_mDHVerifier, put = __set_mDHVerifier))::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* mDHVerifier;

  /// @brief Field mPskIdentity, offset 0x58, size 0x8
  __declspec(property(get = __get_mPskIdentity, put = __set_mPskIdentity))::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* mPskIdentity;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*& __get_mDHVerifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*> const& __get_mDHVerifier() const;

  constexpr void __set_mDHVerifier(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*& __get_mPskIdentity();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*> const& __get_mPskIdentity() const;

  constexpr void __set_mPskIdentity(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::PskTlsClient* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity);

  /// @brief Method .ctor addr 0xf1cd24 size 0x74 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity);

  static inline ::Org::BouncyCastle::Crypto::Tls::PskTlsClient* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                         ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity);

  /// @brief Method .ctor addr 0xf1cd98 size 0x80 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity);

  static inline ::Org::BouncyCastle::Crypto::Tls::PskTlsClient* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                                                                         ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity);

  /// @brief Method .ctor addr 0xf1ce18 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                    ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity);

  /// @brief Method GetCipherSuites addr 0xf1ce44 size 0x74 virtual true final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCipherSuites();

  /// @brief Method GetKeyExchange addr 0xf1ceb8 size 0xc8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();

  /// @brief Method GetAuthentication addr 0xf1cf80 size 0x44 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* GetAuthentication();

  /// @brief Method CreatePskKeyExchange addr 0xf1cfc4 size 0xb0 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreatePskKeyExchange(int32_t keyExchange);

  // Ctor Parameters [CppParam { name: "", ty: "PskTlsClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PskTlsClient(PskTlsClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PskTlsClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PskTlsClient(PskTlsClient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PskTlsClient();

public:
  /// @brief Field mDHVerifier, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* ___mDHVerifier;

  /// @brief Field mPskIdentity, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* ___mPskIdentity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::PskTlsClient, 0x60>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::PskTlsClient, ___mDHVerifier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::PskTlsClient, ___mPskIdentity) == 0x58, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::PskTlsClient);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::PskTlsClient*, "Org.BouncyCastle.Crypto.Tls", "PskTlsClient");
