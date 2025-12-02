#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/SrpTlsClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsClient_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SrpTlsClient)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpGroupVerifier;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SrpTlsClient;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::SrpTlsClient);
// Dependencies Org.BouncyCastle.Crypto.Tls.AbstractTlsClient
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.SrpTlsClient
class CORDL_TYPE SrpTlsClient : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient {
public:
  // Declarations
  __declspec(property(get = get_RequireSrpServerExtension)) bool RequireSrpServerExtension;

  /// @brief Field mGroupVerifier, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_mGroupVerifier, put = __cordl_internal_set_mGroupVerifier)) ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* mGroupVerifier;

  /// @brief Field mIdentity, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_mIdentity, put = __cordl_internal_set_mIdentity)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mIdentity;

  /// @brief Field mPassword, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_mPassword, put = __cordl_internal_set_mPassword)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mPassword;

  /// @brief Method CreateSrpKeyExchange, addr 0x334b118, size 0x90, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateSrpKeyExchange(int32_t keyExchange);

  /// @brief Method GetAuthentication, addr 0x334b0dc, size 0x3c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* GetAuthentication();

  /// @brief Method GetCipherSuites, addr 0x334aeb0, size 0x68, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCipherSuites();

  /// @brief Method GetClientExtensions, addr 0x334af18, size 0x34, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* GetClientExtensions();

  /// @brief Method GetKeyExchange, addr 0x334b020, size 0xbc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();

  static inline ::Org::BouncyCastle::Crypto::Tls::SrpTlsClient* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                         ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* groupVerifier, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  static inline ::Org::BouncyCastle::Crypto::Tls::SrpTlsClient* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  static inline ::Org::BouncyCastle::Crypto::Tls::SrpTlsClient* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method ProcessServerExtensions, addr 0x334af4c, size 0xd4, virtual true, abstract: false, final false
  inline void ProcessServerExtensions(::System::Collections::IDictionary* serverExtensions);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* const& __cordl_internal_get_mGroupVerifier() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*& __cordl_internal_get_mGroupVerifier();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mIdentity() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mIdentity();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mPassword() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mPassword();

  constexpr void __cordl_internal_set_mGroupVerifier(::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* value);

  constexpr void __cordl_internal_set_mIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mPassword(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x334ad84, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* groupVerifier,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method .ctor, addr 0x334ae20, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method .ctor, addr 0x334ace0, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method get_RequireSrpServerExtension, addr 0x334aea8, size 0x8, virtual true, abstract: false, final false
  inline bool get_RequireSrpServerExtension();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SrpTlsClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SrpTlsClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SrpTlsClient(SrpTlsClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SrpTlsClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SrpTlsClient(SrpTlsClient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1280 };

  /// @brief Field mGroupVerifier, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* ___mGroupVerifier;

  /// @brief Field mIdentity, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mIdentity;

  /// @brief Field mPassword, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPassword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SrpTlsClient, ___mGroupVerifier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SrpTlsClient, ___mIdentity) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SrpTlsClient, ___mPassword) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::SrpTlsClient, 0x68>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SrpTlsClient);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SrpTlsClient*, "Org.BouncyCastle.Crypto.Tls", "SrpTlsClient");
