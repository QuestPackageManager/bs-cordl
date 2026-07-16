#pragma once
// IWYU pragma private; include "crypto/Security.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::crypto::Security*);
DEFINE_IL2CPP_CLASS(::crypto::Security*, "crypto", "Security");
// Dependencies System.Object
namespace crypto {
// Is value type: false
// CS Name: crypto.Security
class CORDL_TYPE Security : public ::System::Object {
public:
  // Declarations
  /// @brief Method ComputeHash, addr 0x349cd60, size 0x170, virtual false, abstract: false, final false
  static inline ::StringW ComputeHash(::StringW text, ::StringW salt);

  /// @brief Method CreateCipher, addr 0x349cfd8, size 0x224, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IBufferedCipher* CreateCipher(bool isEncryption, ::StringW key, ::StringW iv);

  /// @brief Method Decrypt, addr 0x349ced0, size 0x108, virtual false, abstract: false, final false
  static inline ::StringW Decrypt(::StringW cipherText, ::StringW key, ::StringW iv);

  /// @brief Method Encrypt, addr 0x349d1fc, size 0xf4, virtual false, abstract: false, final false
  static inline ::StringW Encrypt(::StringW plainText, ::StringW key, ::StringW iv);

  /// @brief Method GenerateText, addr 0x349d2f0, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW GenerateText(int32_t size);

  static inline ::crypto::Security* New_ctor();

  /// @brief Method .ctor, addr 0x349d3b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Security();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Security", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Security(Security&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Security", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Security(Security const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1353 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::crypto::Security) == 0x10, "Size mismatch!");

} // namespace crypto
