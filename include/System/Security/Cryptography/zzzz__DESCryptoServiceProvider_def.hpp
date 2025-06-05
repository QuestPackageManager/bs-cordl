#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DESCryptoServiceProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__DES_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DESCryptoServiceProvider)
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DESCryptoServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::DESCryptoServiceProvider);
// Dependencies System.Security.Cryptography.DES
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.DESCryptoServiceProvider
class CORDL_TYPE DESCryptoServiceProvider : public ::System::Security::Cryptography::DES {
public:
  // Declarations
  /// @brief Method CreateDecryptor, addr 0x3c9fcec, size 0x130, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method CreateEncryptor, addr 0x3c9fbbc, size 0x130, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method GenerateIV, addr 0x3c9fefc, size 0x6c, virtual true, abstract: false, final false
  inline void GenerateIV();

  /// @brief Method GenerateKey, addr 0x3c9fe1c, size 0xe0, virtual true, abstract: false, final false
  inline void GenerateKey();

  static inline ::System::Security::Cryptography::DESCryptoServiceProvider* New_ctor();

  /// @brief Method .ctor, addr 0x3c9f930, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DESCryptoServiceProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DESCryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DESCryptoServiceProvider(DESCryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DESCryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DESCryptoServiceProvider(DESCryptoServiceProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2928 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DESCryptoServiceProvider, 0x48>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::DESCryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DESCryptoServiceProvider*, "System.Security.Cryptography", "DESCryptoServiceProvider");
