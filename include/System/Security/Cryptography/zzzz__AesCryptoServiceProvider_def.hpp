#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AesCryptoServiceProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__Aes_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AesCryptoServiceProvider)
namespace System::Security::Cryptography {
struct CipherMode;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
struct PaddingMode;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AesCryptoServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::AesCryptoServiceProvider);
// Dependencies System.Security.Cryptography.Aes
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.AesCryptoServiceProvider
class CORDL_TYPE AesCryptoServiceProvider : public ::System::Security::Cryptography::Aes {
public:
  // Declarations
  __declspec(property(get = get_FeedbackSize)) int32_t FeedbackSize;

  __declspec(property(get = get_IV, put = set_IV)) ::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  __declspec(property(get = get_Key, put = set_Key)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Key;

  __declspec(property(get = get_KeySize, put = set_KeySize)) int32_t KeySize;

  __declspec(property(get = get_Mode, put = set_Mode)) ::System::Security::Cryptography::CipherMode Mode;

  __declspec(property(get = get_Padding, put = set_Padding)) ::System::Security::Cryptography::PaddingMode Padding;

  /// @brief Method CreateDecryptor, addr 0x4091374, size 0x50, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor();

  /// @brief Method CreateDecryptor, addr 0x40909f4, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method CreateEncryptor, addr 0x40913c4, size 0x50, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor();

  /// @brief Method CreateEncryptor, addr 0x40911d8, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method Dispose, addr 0x4091414, size 0xc, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GenerateIV, addr 0x40909ac, size 0x24, virtual true, abstract: false, final false
  inline void GenerateIV();

  /// @brief Method GenerateKey, addr 0x40909d0, size 0x24, virtual true, abstract: false, final false
  inline void GenerateKey();

  static inline ::System::Security::Cryptography::AesCryptoServiceProvider* New_ctor();

  /// @brief Method .ctor, addr 0x4090948, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FeedbackSize, addr 0x40912f8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_FeedbackSize();

  /// @brief Method get_IV, addr 0x40912c8, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_IV();

  /// @brief Method get_Key, addr 0x40912d8, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Key();

  /// @brief Method get_KeySize, addr 0x40912e8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_KeySize();

  /// @brief Method get_Mode, addr 0x4091300, size 0x8, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::CipherMode get_Mode();

  /// @brief Method get_Padding, addr 0x4091364, size 0x8, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::PaddingMode get_Padding();

  /// @brief Method set_IV, addr 0x40912d0, size 0x8, virtual true, abstract: false, final false
  inline void set_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_Key, addr 0x40912e0, size 0x8, virtual true, abstract: false, final false
  inline void set_Key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_KeySize, addr 0x40912f0, size 0x8, virtual true, abstract: false, final false
  inline void set_KeySize(int32_t value);

  /// @brief Method set_Mode, addr 0x4091308, size 0x5c, virtual true, abstract: false, final false
  inline void set_Mode(::System::Security::Cryptography::CipherMode value);

  /// @brief Method set_Padding, addr 0x409136c, size 0x8, virtual true, abstract: false, final false
  inline void set_Padding(::System::Security::Cryptography::PaddingMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AesCryptoServiceProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AesCryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AesCryptoServiceProvider(AesCryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AesCryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AesCryptoServiceProvider(AesCryptoServiceProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13563 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AesCryptoServiceProvider, 0x48>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::AesCryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AesCryptoServiceProvider*, "System.Security.Cryptography", "AesCryptoServiceProvider");
