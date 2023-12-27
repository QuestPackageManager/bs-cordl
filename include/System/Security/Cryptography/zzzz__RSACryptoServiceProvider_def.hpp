#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__CspProviderFlags_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSACryptoServiceProvider)
namespace Mono::Security::Cryptography {
class RSAManaged;
}
namespace System::Security::Cryptography {
struct RSAParameters;
}
namespace Mono::Security::Cryptography {
class KeyPairPersistence;
}
namespace System::Security::Cryptography {
class CspParameters;
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
// Type: System.Security.Cryptography::RSACryptoServiceProvider
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2956)), TypeDefinitionIndex(TypeDefinitionIndex(2926))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2957))
// CS Name: ::System.Security.Cryptography::RSACryptoServiceProvider*
class CORDL_TYPE RSACryptoServiceProvider : public ::System::Security::Cryptography::RSA {
public:
  // Declarations
  /// @brief Field store, offset 0x20, size 0x8
  __declspec(property(get = __get_store, put = __set_store))::Mono::Security::Cryptography::KeyPairPersistence* store;

  /// @brief Field persistKey, offset 0x28, size 0x1
  __declspec(property(get = __get_persistKey, put = __set_persistKey)) bool persistKey;

  /// @brief Field persisted, offset 0x29, size 0x1
  __declspec(property(get = __get_persisted, put = __set_persisted)) bool persisted;

  /// @brief Field privateKeyExportable, offset 0x2a, size 0x1
  __declspec(property(get = __get_privateKeyExportable, put = __set_privateKeyExportable)) bool privateKeyExportable;

  /// @brief Field m_disposed, offset 0x2b, size 0x1
  __declspec(property(get = __get_m_disposed, put = __set_m_disposed)) bool m_disposed;

  /// @brief Field rsa, offset 0x30, size 0x8
  __declspec(property(get = __get_rsa, put = __set_rsa))::Mono::Security::Cryptography::RSAManaged* rsa;

  /// @brief Field s_UseMachineKeyStore, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_UseMachineKeyStore, put = setStaticF_s_UseMachineKeyStore))::System::Security::Cryptography::CspProviderFlags s_UseMachineKeyStore;

  __declspec(property(get = get_KeySize)) int32_t KeySize;

  __declspec(property(get = get_PublicOnly)) bool PublicOnly;

  constexpr ::Mono::Security::Cryptography::KeyPairPersistence*& __get_store();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Cryptography::KeyPairPersistence*> const& __get_store() const;

  constexpr void __set_store(::Mono::Security::Cryptography::KeyPairPersistence* value);

  constexpr bool& __get_persistKey();

  constexpr bool const& __get_persistKey() const;

  constexpr void __set_persistKey(bool value);

  constexpr bool& __get_persisted();

  constexpr bool const& __get_persisted() const;

  constexpr void __set_persisted(bool value);

  constexpr bool& __get_privateKeyExportable();

  constexpr bool const& __get_privateKeyExportable() const;

  constexpr void __set_privateKeyExportable(bool value);

  constexpr bool& __get_m_disposed();

  constexpr bool const& __get_m_disposed() const;

  constexpr void __set_m_disposed(bool value);

  constexpr ::Mono::Security::Cryptography::RSAManaged*& __get_rsa();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Cryptography::RSAManaged*> const& __get_rsa() const;

  constexpr void __set_rsa(::Mono::Security::Cryptography::RSAManaged* value);

  static inline void setStaticF_s_UseMachineKeyStore(::System::Security::Cryptography::CspProviderFlags value);

  static inline ::System::Security::Cryptography::CspProviderFlags getStaticF_s_UseMachineKeyStore();

  /// @brief Method get_UseMachineKeyStore addr 0x246611c size 0x54 virtual false final false
  static inline bool get_UseMachineKeyStore();

  static inline ::System::Security::Cryptography::RSACryptoServiceProvider* New_ctor();

  /// @brief Method .ctor addr 0x24656fc size 0x2c virtual false final false
  inline void _ctor();

  static inline ::System::Security::Cryptography::RSACryptoServiceProvider* New_ctor(::System::Security::Cryptography::CspParameters* parameters);

  /// @brief Method .ctor addr 0x24661a8 size 0xc virtual false final false
  inline void _ctor(::System::Security::Cryptography::CspParameters* parameters);

  static inline ::System::Security::Cryptography::RSACryptoServiceProvider* New_ctor(int32_t dwKeySize);

  /// @brief Method .ctor addr 0x2466170 size 0x38 virtual false final false
  inline void _ctor(int32_t dwKeySize);

  static inline ::System::Security::Cryptography::RSACryptoServiceProvider* New_ctor(int32_t dwKeySize, ::System::Security::Cryptography::CspParameters* parameters);

  /// @brief Method .ctor addr 0x24661b4 size 0x5c virtual false final false
  inline void _ctor(int32_t dwKeySize, ::System::Security::Cryptography::CspParameters* parameters);

  /// @brief Method Common addr 0x2466210 size 0x21c virtual false final false
  inline void Common(int32_t dwKeySize, bool parameters);

  /// @brief Method Common addr 0x246642c size 0x120 virtual false final false
  inline void Common(::System::Security::Cryptography::CspParameters* p);

  /// @brief Method Finalize addr 0x246654c size 0xa0 virtual true final false
  inline void Finalize();

  /// @brief Method get_KeySize addr 0x24665ec size 0x20 virtual true final false
  inline int32_t get_KeySize();

  /// @brief Method get_PublicOnly addr 0x246660c size 0x1c virtual false final false
  inline bool get_PublicOnly();

  /// @brief Method EncryptValue addr 0x2466628 size 0x20 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptValue(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb);

  /// @brief Method ExportParameters addr 0x2466648 size 0x140 virtual true final false
  inline ::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters);

  /// @brief Method ImportParameters addr 0x2466788 size 0x54 virtual true final false
  inline void ImportParameters(::System::Security::Cryptography::RSAParameters parameters);

  /// @brief Method GetHashNameFromOID addr 0x24667dc size 0x1cc virtual false final false
  inline ::StringW GetHashNameFromOID(::StringW oid);

  /// @brief Method VerifyHash addr 0x24669a8 size 0x128 virtual false final false
  inline bool VerifyHash(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::StringW str, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature);

  /// @brief Method Dispose addr 0x2466ad0 size 0x54 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method OnKeyGenerated addr 0x2466b24 size 0x84 virtual false final false
  inline void OnKeyGenerated(::System::Object* sender, ::System::EventArgs* e);

  // Ctor Parameters [CppParam { name: "", ty: "RSACryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSACryptoServiceProvider(RSACryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSACryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSACryptoServiceProvider(RSACryptoServiceProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSACryptoServiceProvider();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSACryptoServiceProvider, 0x38>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSACryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSACryptoServiceProvider*, "System.Security.Cryptography", "RSACryptoServiceProvider");
