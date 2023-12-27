#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Security)
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
// Forward declare root types
namespace crypto {
class Security;
}
// Write type traits
MARK_REF_PTR_T(::crypto::Security);
// Type: crypto::Security
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1353))
// CS Name: ::crypto::Security*
class CORDL_TYPE Security : public ::System::Object {
public:
  // Declarations
  /// @brief Method ComputeHash addr 0xfc59b0 size 0x164 virtual false final false
  static inline ::StringW ComputeHash(::StringW text, ::StringW salt);

  /// @brief Method Decrypt addr 0xfc5b14 size 0x108 virtual false final false
  static inline ::StringW Decrypt(::StringW cipherText, ::StringW key, ::StringW iv);

  /// @brief Method Encrypt addr 0xfc5e3c size 0xf4 virtual false final false
  static inline ::StringW Encrypt(::StringW plainText, ::StringW key, ::StringW iv);

  /// @brief Method GenerateText addr 0xfc5f30 size 0xc4 virtual false final false
  static inline ::StringW GenerateText(int32_t size);

  /// @brief Method CreateCipher addr 0xfc5c1c size 0x220 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::IBufferedCipher* CreateCipher(bool isEncryption, ::StringW key, ::StringW iv);

  static inline ::crypto::Security* New_ctor();

  /// @brief Method .ctor addr 0xfc5ff4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Security", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Security(Security&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Security", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Security(Security const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Security();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::crypto::Security, 0x10>, "Size mismatch!");

} // namespace crypto
NEED_NO_BOX(::crypto::Security);
DEFINE_IL2CPP_ARG_TYPE(::crypto::Security*, "crypto", "Security");
