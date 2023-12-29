#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Mono.Security.Authenticode::PrivateKey
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Authenticode {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14074))
// CS Name: ::Mono.Security.Authenticode::PrivateKey*
class CORDL_TYPE PrivateKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field encrypted, offset 0x10, size 0x1
  __declspec(property(get = __get_encrypted, put = __set_encrypted)) bool encrypted;

  /// @brief Field rsa, offset 0x18, size 0x8
  __declspec(property(get = __get_rsa, put = __set_rsa))::System::Security::Cryptography::RSA* rsa;

  /// @brief Field weak, offset 0x20, size 0x1
  __declspec(property(get = __get_weak, put = __set_weak)) bool weak;

  /// @brief Field keyType, offset 0x24, size 0x4
  __declspec(property(get = __get_keyType, put = __set_keyType)) int32_t keyType;

  __declspec(property(get = get_RSA))::System::Security::Cryptography::RSA* RSA;

  constexpr bool& __get_encrypted();

  constexpr bool const& __get_encrypted() const;

  constexpr void __set_encrypted(bool value);

  constexpr ::System::Security::Cryptography::RSA*& __get_rsa();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RSA*> const& __get_rsa() const;

  constexpr void __set_rsa(::System::Security::Cryptography::RSA* value);

  constexpr bool& __get_weak();

  constexpr bool const& __get_weak() const;

  constexpr void __set_weak(bool value);

  constexpr int32_t& __get_keyType();

  constexpr int32_t const& __get_keyType() const;

  constexpr void __set_keyType(int32_t value);

  static inline ::Mono::Security::Authenticode::PrivateKey* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW password);

  /// @brief Method .ctor addr 0x22b2e10 size 0xe4 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW password);

  /// @brief Method get_RSA addr 0x22b3344 size 0x8 virtual false final false
  inline ::System::Security::Cryptography::RSA* get_RSA();

  /// @brief Method DeriveKey addr 0x22b334c size 0x118 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DeriveKey(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::StringW password);

  /// @brief Method Decode addr 0x22b2ef4 size 0x450 virtual false final false
  inline bool Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> pvk, ::StringW password);

  /// @brief Method CreateFromFile addr 0x22b3464 size 0x8 virtual false final false
  static inline ::Mono::Security::Authenticode::PrivateKey* CreateFromFile(::StringW filename);

  /// @brief Method CreateFromFile addr 0x22b346c size 0x2bc virtual false final false
  static inline ::Mono::Security::Authenticode::PrivateKey* CreateFromFile(::StringW filename, ::StringW password);

  // Ctor Parameters [CppParam { name: "", ty: "PrivateKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivateKey(PrivateKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivateKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivateKey(PrivateKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivateKey();

public:
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
static_assert(::cordl_internals::size_check_v<::Mono::Security::Authenticode::PrivateKey, 0x28>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::PrivateKey, ___encrypted) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::PrivateKey, ___rsa) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::PrivateKey, ___weak) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::PrivateKey, ___keyType) == 0x24, "Offset mismatch!");

} // namespace Mono::Security::Authenticode
NEED_NO_BOX(::Mono::Security::Authenticode::PrivateKey);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Authenticode::PrivateKey*, "Mono.Security.Authenticode", "PrivateKey");
