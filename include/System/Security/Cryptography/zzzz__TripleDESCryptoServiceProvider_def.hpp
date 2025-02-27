#pragma once
// IWYU pragma private; include "System/Security/Cryptography/TripleDESCryptoServiceProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__TripleDES_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TripleDESCryptoServiceProvider)
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Forward declare root types
namespace System::Security::Cryptography {
class TripleDESCryptoServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::TripleDESCryptoServiceProvider);
// Dependencies System.Security.Cryptography.TripleDES
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.TripleDESCryptoServiceProvider
class CORDL_TYPE TripleDESCryptoServiceProvider : public ::System::Security::Cryptography::TripleDES {
public:
  // Declarations
  /// @brief Method CreateDecryptor, addr 0x3cbb904, size 0x10c, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method CreateEncryptor, addr 0x3cbb7f8, size 0x10c, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method GenerateIV, addr 0x3cbbb74, size 0x68, virtual true, abstract: false, final false
  inline void GenerateIV();

  /// @brief Method GenerateKey, addr 0x3cbba10, size 0xc8, virtual true, abstract: false, final false
  inline void GenerateKey();

  static inline ::System::Security::Cryptography::TripleDESCryptoServiceProvider* New_ctor();

  /// @brief Method .ctor, addr 0x3cbb3f8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TripleDESCryptoServiceProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TripleDESCryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TripleDESCryptoServiceProvider(TripleDESCryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TripleDESCryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TripleDESCryptoServiceProvider(TripleDESCryptoServiceProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2974 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::TripleDESCryptoServiceProvider, 0x48>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::TripleDESCryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::TripleDESCryptoServiceProvider*, "System.Security.Cryptography", "TripleDESCryptoServiceProvider");
