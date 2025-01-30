#pragma once
// IWYU pragma private; include "Mono/Security/Authenticode/PrivateKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrivateKey)
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace Mono::Security::Authenticode {
class PrivateKey;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Authenticode::PrivateKey);
// Dependencies System.Object
namespace Mono::Security::Authenticode {
// Is value type: false
// CS Name: Mono.Security.Authenticode.PrivateKey
class CORDL_TYPE PrivateKey : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_RSA)) ::System::Security::Cryptography::RSA* RSA;

  /// @brief Field encrypted, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_encrypted, put = __cordl_internal_set_encrypted)) bool encrypted;

  /// @brief Field keyType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_keyType, put = __cordl_internal_set_keyType)) int32_t keyType;

  /// @brief Field rsa, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_rsa, put = __cordl_internal_set_rsa)) ::System::Security::Cryptography::RSA* rsa;

  /// @brief Field weak, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_weak, put = __cordl_internal_set_weak)) bool weak;

  /// @brief Method CreateFromFile, addr 0x3c51dd8, size 0x8, virtual false, abstract: false, final false
  static inline ::Mono::Security::Authenticode::PrivateKey* CreateFromFile(::StringW filename);

  /// @brief Method CreateFromFile, addr 0x3c51de0, size 0x2ac, virtual false, abstract: false, final false
  static inline ::Mono::Security::Authenticode::PrivateKey* CreateFromFile(::StringW filename, ::StringW password);

  /// @brief Method Decode, addr 0x3c5186c, size 0x44c, virtual false, abstract: false, final false
  inline bool Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> pvk, ::StringW password);

  /// @brief Method DeriveKey, addr 0x3c51cc0, size 0x118, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DeriveKey(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::StringW password);

  static inline ::Mono::Security::Authenticode::PrivateKey* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW password);

  constexpr bool const& __cordl_internal_get_encrypted() const;

  constexpr bool& __cordl_internal_get_encrypted();

  constexpr int32_t const& __cordl_internal_get_keyType() const;

  constexpr int32_t& __cordl_internal_get_keyType();

  constexpr ::System::Security::Cryptography::RSA* const& __cordl_internal_get_rsa() const;

  constexpr ::System::Security::Cryptography::RSA*& __cordl_internal_get_rsa();

  constexpr bool const& __cordl_internal_get_weak() const;

  constexpr bool& __cordl_internal_get_weak();

  constexpr void __cordl_internal_set_encrypted(bool value);

  constexpr void __cordl_internal_set_keyType(int32_t value);

  constexpr void __cordl_internal_set_rsa(::System::Security::Cryptography::RSA* value);

  constexpr void __cordl_internal_set_weak(bool value);

  /// @brief Method .ctor, addr 0x3c51794, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW password);

  /// @brief Method get_RSA, addr 0x3c51cb8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::RSA* get_RSA();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivateKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrivateKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivateKey(PrivateKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivateKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivateKey(PrivateKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15977 };

  /// @brief Field encrypted, offset: 0x10, size: 0x1, def value: None
  bool ___encrypted;

  /// @brief Field rsa, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Cryptography::RSA* ___rsa;

  /// @brief Field weak, offset: 0x20, size: 0x1, def value: None
  bool ___weak;

  /// @brief Field keyType, offset: 0x24, size: 0x4, def value: None
  int32_t ___keyType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Authenticode::PrivateKey, ___encrypted) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::PrivateKey, ___rsa) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::PrivateKey, ___weak) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::PrivateKey, ___keyType) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Authenticode::PrivateKey, 0x28>, "Size mismatch!");

} // namespace Mono::Security::Authenticode
NEED_NO_BOX(::Mono::Security::Authenticode::PrivateKey);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Authenticode::PrivateKey*, "Mono.Security.Authenticode", "PrivateKey");
