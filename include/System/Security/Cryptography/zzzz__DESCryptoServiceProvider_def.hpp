#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__DES_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Security.Cryptography::DESCryptoServiceProvider
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::DESCryptoServiceProvider*
class CORDL_TYPE DESCryptoServiceProvider : public ::System::Security::Cryptography::DES {
public:
  // Declarations
  /// @brief Method CreateDecryptor, addr 0x25b34b8, size 0x148, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method CreateEncryptor, addr 0x25b3370, size 0x148, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method GenerateIV, addr 0x25b36e8, size 0x6c, virtual true, abstract: false, final false
  inline void GenerateIV();

  /// @brief Method GenerateKey, addr 0x25b3600, size 0xe8, virtual true, abstract: false, final false
  inline void GenerateKey();

  static inline ::System::Security::Cryptography::DESCryptoServiceProvider* New_ctor();

  /// @brief Method .ctor, addr 0x25b32a0, size 0xd0, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DESCryptoServiceProvider, 0x48>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::DESCryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DESCryptoServiceProvider*, "System.Security.Cryptography", "DESCryptoServiceProvider");
