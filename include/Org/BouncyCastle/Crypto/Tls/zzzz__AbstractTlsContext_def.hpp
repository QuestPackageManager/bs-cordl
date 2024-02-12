#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractTlsContext)
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsContext;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext);
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsContext
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1167))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::AbstractTlsContext*
class CORDL_TYPE AbstractTlsContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field mNonceRandom, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mNonceRandom, put = __cordl_internal_set_mNonceRandom))::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* mNonceRandom;

  /// @brief Field mSecureRandom, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mSecureRandom, put = __cordl_internal_set_mSecureRandom))::Org::BouncyCastle::Security::SecureRandom* mSecureRandom;

  /// @brief Field mSecurityParameters, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mSecurityParameters, put = __cordl_internal_set_mSecurityParameters))::Org::BouncyCastle::Crypto::Tls::SecurityParameters* mSecurityParameters;

  /// @brief Field mClientVersion, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mClientVersion, put = __cordl_internal_set_mClientVersion))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mClientVersion;

  /// @brief Field mServerVersion, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerVersion, put = __cordl_internal_set_mServerVersion))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mServerVersion;

  /// @brief Field mSession, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mSession, put = __cordl_internal_set_mSession))::Org::BouncyCastle::Crypto::Tls::TlsSession* mSession;

  /// @brief Field mUserObject, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mUserObject, put = __cordl_internal_set_mUserObject))::System::Object* mUserObject;

  /// @brief Field counter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_counter, put = setStaticF_counter)) int64_t counter;

  __declspec(property(get = get_NonceRandomGenerator))::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* NonceRandomGenerator;

  __declspec(property(get = get_SecureRandom))::Org::BouncyCastle::Security::SecureRandom* SecureRandom;

  __declspec(property(get = get_SecurityParameters))::Org::BouncyCastle::Crypto::Tls::SecurityParameters* SecurityParameters;

  __declspec(property(get = get_IsServer)) bool IsServer;

  __declspec(property(get = get_ClientVersion))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ClientVersion;

  __declspec(property(get = get_ServerVersion))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ServerVersion;

  __declspec(property(get = get_ResumableSession))::Org::BouncyCastle::Crypto::Tls::TlsSession* ResumableSession;

  __declspec(property(get = get_UserObject, put = set_UserObject))::System::Object* UserObject;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsContext"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsContext*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsContext"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* i___Org__BouncyCastle__Crypto__Tls__TlsContext() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*& __cordl_internal_get_mNonceRandom();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*> const& __cordl_internal_get_mNonceRandom() const;

  constexpr void __cordl_internal_set_mNonceRandom(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_mSecureRandom();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __cordl_internal_get_mSecureRandom() const;

  constexpr void __cordl_internal_set_mSecureRandom(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::SecurityParameters*& __cordl_internal_get_mSecurityParameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::SecurityParameters*> const& __cordl_internal_get_mSecurityParameters() const;

  constexpr void __cordl_internal_set_mSecurityParameters(::Org::BouncyCastle::Crypto::Tls::SecurityParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*& __cordl_internal_get_mClientVersion();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*> const& __cordl_internal_get_mClientVersion() const;

  constexpr void __cordl_internal_set_mClientVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*& __cordl_internal_get_mServerVersion();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*> const& __cordl_internal_get_mServerVersion() const;

  constexpr void __cordl_internal_set_mServerVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession*& __cordl_internal_get_mSession();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSession*> const& __cordl_internal_get_mSession() const;

  constexpr void __cordl_internal_set_mSession(::Org::BouncyCastle::Crypto::Tls::TlsSession* value);

  constexpr ::System::Object*& __cordl_internal_get_mUserObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_mUserObject() const;

  constexpr void __cordl_internal_set_mUserObject(::System::Object* value);

  static inline void setStaticF_counter(int64_t value);

  static inline int64_t getStaticF_counter();

  /// @brief Method NextCounterValue, addr 0xf84cd8, size 0x58, virtual false, abstract: false, final false
  static inline int64_t NextCounterValue();

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom,
                                                                               ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* securityParameters);

  /// @brief Method .ctor, addr 0xf84d30, size 0x324, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* securityParameters);

  /// @brief Method get_NonceRandomGenerator, addr 0xf85054, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* get_NonceRandomGenerator();

  /// @brief Method get_SecureRandom, addr 0xf8505c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Security::SecureRandom* get_SecureRandom();

  /// @brief Method get_SecurityParameters, addr 0xf85064, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* get_SecurityParameters();

  /// @brief Method get_IsServer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsServer();

  /// @brief Method get_ClientVersion, addr 0xf8506c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ClientVersion();

  /// @brief Method SetClientVersion, addr 0xf85074, size 0x8, virtual true, abstract: false, final false
  inline void SetClientVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* clientVersion);

  /// @brief Method get_ServerVersion, addr 0xf8507c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ServerVersion();

  /// @brief Method SetServerVersion, addr 0xf85084, size 0x8, virtual true, abstract: false, final false
  inline void SetServerVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* serverVersion);

  /// @brief Method get_ResumableSession, addr 0xf8508c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsSession* get_ResumableSession();

  /// @brief Method SetResumableSession, addr 0xf85094, size 0x8, virtual true, abstract: false, final false
  inline void SetResumableSession(::Org::BouncyCastle::Crypto::Tls::TlsSession* session);

  /// @brief Method get_UserObject, addr 0xf8509c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_UserObject();

  /// @brief Method set_UserObject, addr 0xf850a4, size 0x8, virtual true, abstract: false, final false
  inline void set_UserObject(::System::Object* value);

  /// @brief Method ExportKeyingMaterial, addr 0xf850ac, size 0x2cc, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExportKeyingMaterial(::StringW asciiLabel, ::ArrayW<uint8_t, ::Array<uint8_t>*> context_value, int32_t length);

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractTlsContext(AbstractTlsContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractTlsContext(AbstractTlsContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractTlsContext();

public:
  /// @brief Field mNonceRandom, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* ___mNonceRandom;

  /// @brief Field mSecureRandom, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___mSecureRandom;

  /// @brief Field mSecurityParameters, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* ___mSecurityParameters;

  /// @brief Field mClientVersion, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ___mClientVersion;

  /// @brief Field mServerVersion, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ___mServerVersion;

  /// @brief Field mSession, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSession* ___mSession;

  /// @brief Field mUserObject, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ___mUserObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext, ___mNonceRandom) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext, ___mSecureRandom) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext, ___mSecurityParameters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext, ___mClientVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext, ___mServerVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext, ___mSession) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext, ___mUserObject) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext*, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsContext");
