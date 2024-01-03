#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsClient_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SrpTlsClient)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpGroupVerifier;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
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
// Type: Org.BouncyCastle.Crypto.Tls::SrpTlsClient
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1165))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1280))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::SrpTlsClient*
class CORDL_TYPE SrpTlsClient : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient {
public:
  // Declarations
  /// @brief Field mGroupVerifier, offset 0x50, size 0x8
  __declspec(property(get = __get_mGroupVerifier, put = __set_mGroupVerifier))::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* mGroupVerifier;

  /// @brief Field mIdentity, offset 0x58, size 0x8
  __declspec(property(get = __get_mIdentity, put = __set_mIdentity))::ArrayW<uint8_t, ::Array<uint8_t>*> mIdentity;

  /// @brief Field mPassword, offset 0x60, size 0x8
  __declspec(property(get = __get_mPassword, put = __set_mPassword))::ArrayW<uint8_t, ::Array<uint8_t>*> mPassword;

  __declspec(property(get = get_RequireSrpServerExtension)) bool RequireSrpServerExtension;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*& __get_mGroupVerifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*> const& __get_mGroupVerifier() const;

  constexpr void __set_mGroupVerifier(::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mIdentity();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mIdentity() const;

  constexpr void __set_mIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mPassword();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mPassword() const;

  constexpr void __set_mPassword(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Tls::SrpTlsClient* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method .ctor, addr 0xf97344, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  static inline ::Org::BouncyCastle::Crypto::Tls::SrpTlsClient* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method .ctor, addr 0xf97494, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  static inline ::Org::BouncyCastle::Crypto::Tls::SrpTlsClient* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                         ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* groupVerifier, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method .ctor, addr 0xf973f0, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* groupVerifier,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method get_RequireSrpServerExtension, addr 0xf97520, size 0x8, virtual true, abstract: false, final false
  inline bool get_RequireSrpServerExtension();

  /// @brief Method GetCipherSuites, addr 0xf97528, size 0x64, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCipherSuites();

  /// @brief Method GetClientExtensions, addr 0xf9758c, size 0x34, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* GetClientExtensions();

  /// @brief Method ProcessServerExtensions, addr 0xf975c0, size 0xd8, virtual true, abstract: false, final false
  inline void ProcessServerExtensions(::System::Collections::IDictionary* serverExtensions);

  /// @brief Method GetKeyExchange, addr 0xf97698, size 0xc0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();

  /// @brief Method GetAuthentication, addr 0xf97758, size 0x44, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* GetAuthentication();

  /// @brief Method CreateSrpKeyExchange, addr 0xf9779c, size 0x94, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateSrpKeyExchange(int32_t keyExchange);

  // Ctor Parameters [CppParam { name: "", ty: "SrpTlsClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SrpTlsClient(SrpTlsClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SrpTlsClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SrpTlsClient(SrpTlsClient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SrpTlsClient();

public:
  /// @brief Field mGroupVerifier, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* ___mGroupVerifier;

  /// @brief Field mIdentity, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mIdentity;

  /// @brief Field mPassword, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPassword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::SrpTlsClient, 0x68>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SrpTlsClient, ___mGroupVerifier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SrpTlsClient, ___mIdentity) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SrpTlsClient, ___mPassword) == 0x60, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SrpTlsClient);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SrpTlsClient*, "Org.BouncyCastle.Crypto.Tls", "SrpTlsClient");
