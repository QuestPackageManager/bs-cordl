#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__Aes_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AesManaged)
namespace System::Security::Cryptography {
struct CipherMode;
}
namespace System::Security::Cryptography {
struct PaddingMode;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
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
// Type: System.Security.Cryptography::AesManaged
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2917))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14250))
// CS Name: ::System.Security.Cryptography::AesManaged*
class CORDL_TYPE AesManaged : public ::System::Security::Cryptography::Aes {
public:
  // Declarations
  /// @brief Field m_rijndael, offset 0x48, size 0x8
  __declspec(property(get = __get_m_rijndael, put = __set_m_rijndael))::System::Security::Cryptography::RijndaelManaged* m_rijndael;

  __declspec(property(get = get_FeedbackSize)) int32_t FeedbackSize;

  __declspec(property(get = get_IV, put = set_IV))::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  __declspec(property(get = get_Key, put = set_Key))::ArrayW<uint8_t, ::Array<uint8_t>*> Key;

  __declspec(property(get = get_KeySize, put = set_KeySize)) int32_t KeySize;

  __declspec(property(get = get_Mode, put = set_Mode))::System::Security::Cryptography::CipherMode Mode;

  __declspec(property(get = get_Padding, put = set_Padding))::System::Security::Cryptography::PaddingMode Padding;

  constexpr ::System::Security::Cryptography::RijndaelManaged*& __get_m_rijndael();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RijndaelManaged*> const& __get_m_rijndael() const;

  constexpr void __set_m_rijndael(::System::Security::Cryptography::RijndaelManaged* value);

  static inline ::System::Security::Cryptography::AesManaged* New_ctor();

  /// @brief Method .ctor, addr 0x280cd58, size 0x164, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FeedbackSize, addr 0x280cebc, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_FeedbackSize();

  /// @brief Method get_IV, addr 0x280cedc, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_IV();

  /// @brief Method set_IV, addr 0x280cefc, size 0x20, virtual true, abstract: false, final false
  inline void set_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_Key, addr 0x280cf1c, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Key();

  /// @brief Method set_Key, addr 0x280cf3c, size 0x20, virtual true, abstract: false, final false
  inline void set_Key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_KeySize, addr 0x280cf5c, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_KeySize();

  /// @brief Method set_KeySize, addr 0x280cf80, size 0x24, virtual true, abstract: false, final false
  inline void set_KeySize(int32_t value);

  /// @brief Method get_Mode, addr 0x280cfa4, size 0x24, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::CipherMode get_Mode();

  /// @brief Method set_Mode, addr 0x280cfc8, size 0x88, virtual true, abstract: false, final false
  inline void set_Mode(::System::Security::Cryptography::CipherMode value);

  /// @brief Method get_Padding, addr 0x280d050, size 0x24, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::PaddingMode get_Padding();

  /// @brief Method set_Padding, addr 0x280d074, size 0x24, virtual true, abstract: false, final false
  inline void set_Padding(::System::Security::Cryptography::PaddingMode value);

  /// @brief Method CreateDecryptor, addr 0x280d098, size 0x24, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor();

  /// @brief Method CreateDecryptor, addr 0x280d0bc, size 0x14c, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method CreateEncryptor, addr 0x280d208, size 0x24, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor();

  /// @brief Method CreateEncryptor, addr 0x280d22c, size 0x14c, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method Dispose, addr 0x280d378, size 0x130, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GenerateIV, addr 0x280d4a8, size 0x24, virtual true, abstract: false, final false
  inline void GenerateIV();

  /// @brief Method GenerateKey, addr 0x280d4cc, size 0x24, virtual true, abstract: false, final false
  inline void GenerateKey();

  // Ctor Parameters [CppParam { name: "", ty: "AesManaged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AesManaged(AesManaged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AesManaged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AesManaged(AesManaged const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AesManaged();

public:
  /// @brief Field m_rijndael, offset: 0x48, size: 0x8, def value: None
  ::System::Security::Cryptography::RijndaelManaged* ___m_rijndael;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AesManaged, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::AesManaged, ___m_rijndael) == 0x48, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::AesManaged);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AesManaged*, "System.Security.Cryptography", "AesManaged");
