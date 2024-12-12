#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AesManaged.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__Aes_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AesManaged)
namespace System::Security::Cryptography {
struct CipherMode;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
struct PaddingMode;
}
namespace System::Security::Cryptography {
class RijndaelManaged;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AesManaged;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::AesManaged);
// Dependencies System.Security.Cryptography.Aes
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.AesManaged
class CORDL_TYPE AesManaged : public ::System::Security::Cryptography::Aes {
public:
  // Declarations
  __declspec(property(get = get_FeedbackSize)) int32_t FeedbackSize;

  __declspec(property(get = get_IV, put = set_IV)) ::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  __declspec(property(get = get_Key, put = set_Key)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Key;

  __declspec(property(get = get_KeySize, put = set_KeySize)) int32_t KeySize;

  __declspec(property(get = get_Mode, put = set_Mode)) ::System::Security::Cryptography::CipherMode Mode;

  __declspec(property(get = get_Padding, put = set_Padding)) ::System::Security::Cryptography::PaddingMode Padding;

  /// @brief Field m_rijndael, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_rijndael, put = __cordl_internal_set_m_rijndael)) ::System::Security::Cryptography::RijndaelManaged* m_rijndael;

  /// @brief Method CreateDecryptor, addr 0x408a64c, size 0x24, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor();

  /// @brief Method CreateDecryptor, addr 0x408a670, size 0x140, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method CreateEncryptor, addr 0x408a7b0, size 0x24, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor();

  /// @brief Method CreateEncryptor, addr 0x408a7d4, size 0x140, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method Dispose, addr 0x408a914, size 0x130, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GenerateIV, addr 0x408aa44, size 0x24, virtual true, abstract: false, final false
  inline void GenerateIV();

  /// @brief Method GenerateKey, addr 0x408aa68, size 0x24, virtual true, abstract: false, final false
  inline void GenerateKey();

  static inline ::System::Security::Cryptography::AesManaged* New_ctor();

  constexpr ::System::Security::Cryptography::RijndaelManaged* const& __cordl_internal_get_m_rijndael() const;

  constexpr ::System::Security::Cryptography::RijndaelManaged*& __cordl_internal_get_m_rijndael();

  constexpr void __cordl_internal_set_m_rijndael(::System::Security::Cryptography::RijndaelManaged* value);

  /// @brief Method .ctor, addr 0x408a31c, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FeedbackSize, addr 0x408a478, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_FeedbackSize();

  /// @brief Method get_IV, addr 0x408a498, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_IV();

  /// @brief Method get_Key, addr 0x408a4d8, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Key();

  /// @brief Method get_KeySize, addr 0x408a518, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_KeySize();

  /// @brief Method get_Mode, addr 0x408a560, size 0x24, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::CipherMode get_Mode();

  /// @brief Method get_Padding, addr 0x408a604, size 0x24, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::PaddingMode get_Padding();

  /// @brief Method set_IV, addr 0x408a4b8, size 0x20, virtual true, abstract: false, final false
  inline void set_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_Key, addr 0x408a4f8, size 0x20, virtual true, abstract: false, final false
  inline void set_Key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_KeySize, addr 0x408a53c, size 0x24, virtual true, abstract: false, final false
  inline void set_KeySize(int32_t value);

  /// @brief Method set_Mode, addr 0x408a584, size 0x80, virtual true, abstract: false, final false
  inline void set_Mode(::System::Security::Cryptography::CipherMode value);

  /// @brief Method set_Padding, addr 0x408a628, size 0x24, virtual true, abstract: false, final false
  inline void set_Padding(::System::Security::Cryptography::PaddingMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AesManaged();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AesManaged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AesManaged(AesManaged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AesManaged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AesManaged(AesManaged const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13558 };

  /// @brief Field m_rijndael, offset: 0x48, size: 0x8, def value: None
  ::System::Security::Cryptography::RijndaelManaged* ___m_rijndael;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::AesManaged, ___m_rijndael) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AesManaged, 0x50>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::AesManaged);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AesManaged*, "System.Security.Cryptography", "AesManaged");
