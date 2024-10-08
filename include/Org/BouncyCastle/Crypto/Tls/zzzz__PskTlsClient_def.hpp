#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/PskTlsClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsClient_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PskTlsClient)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHVerifier;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentity;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class PskTlsClient;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::PskTlsClient);
// Type: Org.BouncyCastle.Crypto.Tls::PskTlsClient
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::PskTlsClient*
class CORDL_TYPE PskTlsClient : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient {
public:
  // Declarations
  /// @brief Field mDHVerifier, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_mDHVerifier, put = __cordl_internal_set_mDHVerifier)) ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* mDHVerifier;

  /// @brief Field mPskIdentity, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_mPskIdentity, put = __cordl_internal_set_mPskIdentity)) ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* mPskIdentity;

  /// @brief Method CreatePskKeyExchange, addr 0x23d8244, size 0xa8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreatePskKeyExchange(int32_t keyExchange);

  /// @brief Method GetAuthentication, addr 0x23d8208, size 0x3c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* GetAuthentication();

  /// @brief Method GetCipherSuites, addr 0x23d80d4, size 0x74, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCipherSuites();

  /// @brief Method GetKeyExchange, addr 0x23d8148, size 0xc0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();

  static inline ::Org::BouncyCastle::Crypto::Tls::PskTlsClient* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                                                                         ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity);

  static inline ::Org::BouncyCastle::Crypto::Tls::PskTlsClient* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                         ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity);

  static inline ::Org::BouncyCastle::Crypto::Tls::PskTlsClient* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*& __cordl_internal_get_mDHVerifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*> const& __cordl_internal_get_mDHVerifier() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*& __cordl_internal_get_mPskIdentity();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*> const& __cordl_internal_get_mPskIdentity() const;

  constexpr void __cordl_internal_set_mDHVerifier(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* value);

  constexpr void __cordl_internal_set_mPskIdentity(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* value);

  /// @brief Method .ctor, addr 0x23d80a8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                    ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity);

  /// @brief Method .ctor, addr 0x23d8030, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity);

  /// @brief Method .ctor, addr 0x23d7fc4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PskTlsClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PskTlsClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PskTlsClient(PskTlsClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PskTlsClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PskTlsClient(PskTlsClient const&) = delete;

  /// @brief Field mDHVerifier, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* ___mDHVerifier;

  /// @brief Field mPskIdentity, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* ___mPskIdentity;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1261 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::PskTlsClient, 0x60>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::PskTlsClient, ___mDHVerifier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::PskTlsClient, ___mPskIdentity) == 0x58, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::PskTlsClient);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::PskTlsClient*, "Org.BouncyCastle.Crypto.Tls", "PskTlsClient");
