#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSACryptoServiceProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__CspProviderFlags_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSACryptoServiceProvider)
namespace Mono::Security::Cryptography {
class KeyPairPersistence;
}
namespace Mono::Security::Cryptography {
class RSAManaged;
}
namespace System::Security::Cryptography {
class CspParameters;
}
namespace System::Security::Cryptography {
struct RSAParameters;
}
namespace System {
class EventArgs;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSACryptoServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSACryptoServiceProvider);
// Dependencies System.Security.Cryptography.CspProviderFlags, System.Security.Cryptography.RSA
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RSACryptoServiceProvider
class CORDL_TYPE RSACryptoServiceProvider : public ::System::Security::Cryptography::RSA {
public:
  // Declarations
  __declspec(property(get = get_KeySize)) int32_t KeySize;

  __declspec(property(get = get_PublicOnly)) bool PublicOnly;

  /// @brief Field m_disposed, offset 0x2b, size 0x1
  __declspec(property(get = __cordl_internal_get_m_disposed, put = __cordl_internal_set_m_disposed)) bool m_disposed;

  /// @brief Field persistKey, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_persistKey, put = __cordl_internal_set_persistKey)) bool persistKey;

  /// @brief Field persisted, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_persisted, put = __cordl_internal_set_persisted)) bool persisted;

  /// @brief Field privateKeyExportable, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get_privateKeyExportable, put = __cordl_internal_set_privateKeyExportable)) bool privateKeyExportable;

  /// @brief Field rsa, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_rsa, put = __cordl_internal_set_rsa)) ::Mono::Security::Cryptography::RSAManaged* rsa;

  /// @brief Field s_UseMachineKeyStore, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_UseMachineKeyStore, put = setStaticF_s_UseMachineKeyStore)) ::System::Security::Cryptography::CspProviderFlags s_UseMachineKeyStore;

  /// @brief Field store, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_store, put = __cordl_internal_set_store)) ::Mono::Security::Cryptography::KeyPairPersistence* store;

  /// @brief Method Common, addr 0x3ca3c24, size 0x1f8, virtual false, abstract: false, final false
  inline void Common(int32_t dwKeySize, bool parameters);

  /// @brief Method Common, addr 0x3ca3e1c, size 0x11c, virtual false, abstract: false, final false
  inline void Common(::System::Security::Cryptography::CspParameters* p);

  /// @brief Method Dispose, addr 0x3ca449c, size 0x54, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EncryptValue, addr 0x3ca4014, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptValue(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb);

  /// @brief Method ExportParameters, addr 0x3ca4034, size 0x130, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters);

  /// @brief Method Finalize, addr 0x3ca3f38, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetHashNameFromOID, addr 0x3ca41b8, size 0x1c4, virtual false, abstract: false, final false
  inline ::StringW GetHashNameFromOID(::StringW oid);

  /// @brief Method ImportParameters, addr 0x3ca4164, size 0x54, virtual true, abstract: false, final false
  inline void ImportParameters(::System::Security::Cryptography::RSAParameters parameters);

  static inline ::System::Security::Cryptography::RSACryptoServiceProvider* New_ctor();

  static inline ::System::Security::Cryptography::RSACryptoServiceProvider* New_ctor(int32_t dwKeySize);

  static inline ::System::Security::Cryptography::RSACryptoServiceProvider* New_ctor(int32_t dwKeySize, ::System::Security::Cryptography::CspParameters* parameters);

  static inline ::System::Security::Cryptography::RSACryptoServiceProvider* New_ctor(::System::Security::Cryptography::CspParameters* parameters);

  /// @brief Method OnKeyGenerated, addr 0x3ca44f0, size 0x84, virtual false, abstract: false, final false
  inline void OnKeyGenerated(::System::Object* sender, ::System::EventArgs* e);

  /// @brief Method VerifyHash, addr 0x3ca437c, size 0x120, virtual false, abstract: false, final false
  inline bool VerifyHash(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::StringW str, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature);

  constexpr bool const& __cordl_internal_get_m_disposed() const;

  constexpr bool& __cordl_internal_get_m_disposed();

  constexpr bool const& __cordl_internal_get_persistKey() const;

  constexpr bool& __cordl_internal_get_persistKey();

  constexpr bool const& __cordl_internal_get_persisted() const;

  constexpr bool& __cordl_internal_get_persisted();

  constexpr bool const& __cordl_internal_get_privateKeyExportable() const;

  constexpr bool& __cordl_internal_get_privateKeyExportable();

  constexpr ::Mono::Security::Cryptography::RSAManaged* const& __cordl_internal_get_rsa() const;

  constexpr ::Mono::Security::Cryptography::RSAManaged*& __cordl_internal_get_rsa();

  constexpr ::Mono::Security::Cryptography::KeyPairPersistence* const& __cordl_internal_get_store() const;

  constexpr ::Mono::Security::Cryptography::KeyPairPersistence*& __cordl_internal_get_store();

  constexpr void __cordl_internal_set_m_disposed(bool value);

  constexpr void __cordl_internal_set_persistKey(bool value);

  constexpr void __cordl_internal_set_persisted(bool value);

  constexpr void __cordl_internal_set_privateKeyExportable(bool value);

  constexpr void __cordl_internal_set_rsa(::Mono::Security::Cryptography::RSAManaged* value);

  constexpr void __cordl_internal_set_store(::Mono::Security::Cryptography::KeyPairPersistence* value);

  /// @brief Method .ctor, addr 0x3ca3134, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3ca3b84, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(int32_t dwKeySize);

  /// @brief Method .ctor, addr 0x3ca3bc8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(int32_t dwKeySize, ::System::Security::Cryptography::CspParameters* parameters);

  /// @brief Method .ctor, addr 0x3ca3bbc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::CspParameters* parameters);

  static inline ::System::Security::Cryptography::CspProviderFlags getStaticF_s_UseMachineKeyStore();

  /// @brief Method get_KeySize, addr 0x3ca3fd8, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_KeySize();

  /// @brief Method get_PublicOnly, addr 0x3ca3ff8, size 0x1c, virtual false, abstract: false, final false
  inline bool get_PublicOnly();

  /// @brief Method get_UseMachineKeyStore, addr 0x3ca3b30, size 0x54, virtual false, abstract: false, final false
  static inline bool get_UseMachineKeyStore();

  static inline void setStaticF_s_UseMachineKeyStore(::System::Security::Cryptography::CspProviderFlags value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSACryptoServiceProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RSACryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSACryptoServiceProvider(RSACryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSACryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSACryptoServiceProvider(RSACryptoServiceProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2956 };

  /// @brief Field store, offset: 0x20, size: 0x8, def value: None
  ::Mono::Security::Cryptography::KeyPairPersistence* ___store;

  /// @brief Field persistKey, offset: 0x28, size: 0x1, def value: None
  bool ___persistKey;

  /// @brief Field persisted, offset: 0x29, size: 0x1, def value: None
  bool ___persisted;

  /// @brief Field privateKeyExportable, offset: 0x2a, size: 0x1, def value: None
  bool ___privateKeyExportable;

  /// @brief Field m_disposed, offset: 0x2b, size: 0x1, def value: None
  bool ___m_disposed;

  /// @brief Field rsa, offset: 0x30, size: 0x8, def value: None
  ::Mono::Security::Cryptography::RSAManaged* ___rsa;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___store) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___persistKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___persisted) == 0x29, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___privateKeyExportable) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___m_disposed) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___rsa) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSACryptoServiceProvider, 0x38>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSACryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSACryptoServiceProvider*, "System.Security.Cryptography", "RSACryptoServiceProvider");
