#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DSACryptoServiceProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DSACryptoServiceProvider)
namespace Mono::Security::Cryptography {
class DSAManaged;
}
namespace Mono::Security::Cryptography {
class KeyPairPersistence;
}
namespace System::Security::Cryptography {
struct DSAParameters;
}
namespace System {
class EventArgs;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DSACryptoServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::DSACryptoServiceProvider);
// Dependencies System.Security.Cryptography.DSA
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.DSACryptoServiceProvider
class CORDL_TYPE DSACryptoServiceProvider : public ::System::Security::Cryptography::DSA {
public:
  // Declarations
  __declspec(property(get = get_KeySize)) int32_t KeySize;

  __declspec(property(get = get_PublicOnly)) bool PublicOnly;

  /// @brief Field dsa, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_dsa, put = __cordl_internal_set_dsa)) ::Mono::Security::Cryptography::DSAManaged* dsa;

  /// @brief Field m_disposed, offset 0x2b, size 0x1
  __declspec(property(get = __cordl_internal_get_m_disposed, put = __cordl_internal_set_m_disposed)) bool m_disposed;

  /// @brief Field persistKey, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_persistKey, put = __cordl_internal_set_persistKey)) bool persistKey;

  /// @brief Field persisted, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_persisted, put = __cordl_internal_set_persisted)) bool persisted;

  /// @brief Field privateKeyExportable, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get_privateKeyExportable, put = __cordl_internal_set_privateKeyExportable)) bool privateKeyExportable;

  /// @brief Field store, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_store, put = __cordl_internal_set_store)) ::Mono::Security::Cryptography::KeyPairPersistence* store;

  /// @brief Field useMachineKeyStore, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_useMachineKeyStore, put = setStaticF_useMachineKeyStore)) bool useMachineKeyStore;

  /// @brief Method Common, addr 0x3cb26cc, size 0x1f8, virtual false, abstract: false, final false
  inline void Common(int32_t dwKeySize, bool parameters);

  /// @brief Method Dispose, addr 0x3cb2ac0, size 0x54, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method ExportParameters, addr 0x3cb29a0, size 0xac, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::DSAParameters ExportParameters(bool includePrivateParameters);

  /// @brief Method Finalize, addr 0x3cb28c4, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method ImportParameters, addr 0x3cb2a4c, size 0x54, virtual true, abstract: false, final false
  inline void ImportParameters(::System::Security::Cryptography::DSAParameters parameters);

  static inline ::System::Security::Cryptography::DSACryptoServiceProvider* New_ctor();

  static inline ::System::Security::Cryptography::DSACryptoServiceProvider* New_ctor(int32_t dwKeySize);

  /// @brief Method OnKeyGenerated, addr 0x3cb2b14, size 0x84, virtual false, abstract: false, final false
  inline void OnKeyGenerated(::System::Object* sender, ::System::EventArgs* e);

  /// @brief Method VerifySignature, addr 0x3cb2aa0, size 0x20, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature);

  constexpr ::Mono::Security::Cryptography::DSAManaged* const& __cordl_internal_get_dsa() const;

  constexpr ::Mono::Security::Cryptography::DSAManaged*& __cordl_internal_get_dsa();

  constexpr bool const& __cordl_internal_get_m_disposed() const;

  constexpr bool& __cordl_internal_get_m_disposed();

  constexpr bool const& __cordl_internal_get_persistKey() const;

  constexpr bool& __cordl_internal_get_persistKey();

  constexpr bool const& __cordl_internal_get_persisted() const;

  constexpr bool& __cordl_internal_get_persisted();

  constexpr bool const& __cordl_internal_get_privateKeyExportable() const;

  constexpr bool& __cordl_internal_get_privateKeyExportable();

  constexpr ::Mono::Security::Cryptography::KeyPairPersistence* const& __cordl_internal_get_store() const;

  constexpr ::Mono::Security::Cryptography::KeyPairPersistence*& __cordl_internal_get_store();

  constexpr void __cordl_internal_set_dsa(::Mono::Security::Cryptography::DSAManaged* value);

  constexpr void __cordl_internal_set_m_disposed(bool value);

  constexpr void __cordl_internal_set_persistKey(bool value);

  constexpr void __cordl_internal_set_persisted(bool value);

  constexpr void __cordl_internal_set_privateKeyExportable(bool value);

  constexpr void __cordl_internal_set_store(::Mono::Security::Cryptography::KeyPairPersistence* value);

  /// @brief Method .ctor, addr 0x3cb05f0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3cb2694, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(int32_t dwKeySize);

  static inline bool getStaticF_useMachineKeyStore();

  /// @brief Method get_KeySize, addr 0x3cb2964, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_KeySize();

  /// @brief Method get_PublicOnly, addr 0x3cb2984, size 0x1c, virtual false, abstract: false, final false
  inline bool get_PublicOnly();

  static inline void setStaticF_useMachineKeyStore(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DSACryptoServiceProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DSACryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DSACryptoServiceProvider(DSACryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DSACryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DSACryptoServiceProvider(DSACryptoServiceProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2978 };

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

  /// @brief Field dsa, offset: 0x30, size: 0x8, def value: None
  ::Mono::Security::Cryptography::DSAManaged* ___dsa;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::DSACryptoServiceProvider, ___store) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSACryptoServiceProvider, ___persistKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSACryptoServiceProvider, ___persisted) == 0x29, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSACryptoServiceProvider, ___privateKeyExportable) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSACryptoServiceProvider, ___m_disposed) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSACryptoServiceProvider, ___dsa) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DSACryptoServiceProvider, 0x38>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::DSACryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSACryptoServiceProvider*, "System.Security.Cryptography", "DSACryptoServiceProvider");
