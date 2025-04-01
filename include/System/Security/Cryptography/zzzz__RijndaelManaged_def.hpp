#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RijndaelManaged.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__Rijndael_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RijndaelManaged)
namespace System::Security::Cryptography {
struct CipherMode;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
struct RijndaelManagedTransformMode;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RijndaelManaged;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RijndaelManaged);
// Dependencies System.Security.Cryptography.Rijndael
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RijndaelManaged
class CORDL_TYPE RijndaelManaged : public ::System::Security::Cryptography::Rijndael {
public:
  // Declarations
  /// @brief Method CreateDecryptor, addr 0x3c9e5b4, size 0x14, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method CreateEncryptor, addr 0x3c9e4ac, size 0x14, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method GenerateIV, addr 0x3c9e5f8, size 0x30, virtual true, abstract: false, final false
  inline void GenerateIV();

  /// @brief Method GenerateKey, addr 0x3c9e5c8, size 0x30, virtual true, abstract: false, final false
  inline void GenerateKey();

  /// @brief Method NewEncryptor, addr 0x3c9e4c0, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* NewEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::System::Security::Cryptography::CipherMode mode,
                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV, int32_t feedbackSize,
                                                                          ::System::Security::Cryptography::RijndaelManagedTransformMode encryptMode);

  static inline ::System::Security::Cryptography::RijndaelManaged* New_ctor();

  /// @brief Method .ctor, addr 0x3c9e3d4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RijndaelManaged();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RijndaelManaged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RijndaelManaged(RijndaelManaged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RijndaelManaged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RijndaelManaged(RijndaelManaged const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2949 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RijndaelManaged, 0x48>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RijndaelManaged);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RijndaelManaged*, "System.Security.Cryptography", "RijndaelManaged");
