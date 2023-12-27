#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__Aes_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AesCryptoServiceProvider)
namespace System::Security::Cryptography {
struct PaddingMode;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
struct CipherMode;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AesCryptoServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::AesCryptoServiceProvider);
// Type: System.Security.Cryptography::AesCryptoServiceProvider
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2917))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14251))
// CS Name: ::System.Security.Cryptography::AesCryptoServiceProvider*
class CORDL_TYPE AesCryptoServiceProvider : public ::System::Security::Cryptography::Aes {
public:
  // Declarations
  __declspec(property(get = get_IV, put = set_IV))::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  __declspec(property(get = get_Key, put = set_Key))::ArrayW<uint8_t, ::Array<uint8_t>*> Key;

  __declspec(property(get = get_KeySize, put = set_KeySize)) int32_t KeySize;

  __declspec(property(get = get_FeedbackSize)) int32_t FeedbackSize;

  __declspec(property(get = get_Mode, put = set_Mode))::System::Security::Cryptography::CipherMode Mode;

  __declspec(property(get = get_Padding, put = set_Padding))::System::Security::Cryptography::PaddingMode Padding;

  static inline ::System::Security::Cryptography::AesCryptoServiceProvider* New_ctor();

  /// @brief Method .ctor addr 0x280d4f0 size 0x64 virtual false final false
  inline void _ctor();

  /// @brief Method GenerateIV addr 0x280d554 size 0x24 virtual true final false
  inline void GenerateIV();

  /// @brief Method GenerateKey addr 0x280d578 size 0x24 virtual true final false
  inline void GenerateKey();

  /// @brief Method CreateDecryptor addr 0x280d59c size 0xfc virtual true final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method CreateEncryptor addr 0x280dd8c size 0xfc virtual true final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method get_IV addr 0x280de88 size 0x8 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_IV();

  /// @brief Method set_IV addr 0x280de90 size 0x8 virtual true final false
  inline void set_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_Key addr 0x280de98 size 0x8 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Key();

  /// @brief Method set_Key addr 0x280dea0 size 0x8 virtual true final false
  inline void set_Key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_KeySize addr 0x280dea8 size 0x8 virtual true final false
  inline int32_t get_KeySize();

  /// @brief Method set_KeySize addr 0x280deb0 size 0x8 virtual true final false
  inline void set_KeySize(int32_t value);

  /// @brief Method get_FeedbackSize addr 0x280deb8 size 0x8 virtual true final false
  inline int32_t get_FeedbackSize();

  /// @brief Method get_Mode addr 0x280dec0 size 0x8 virtual true final false
  inline ::System::Security::Cryptography::CipherMode get_Mode();

  /// @brief Method set_Mode addr 0x280dec8 size 0x60 virtual true final false
  inline void set_Mode(::System::Security::Cryptography::CipherMode value);

  /// @brief Method get_Padding addr 0x280df28 size 0x8 virtual true final false
  inline ::System::Security::Cryptography::PaddingMode get_Padding();

  /// @brief Method set_Padding addr 0x280df30 size 0x8 virtual true final false
  inline void set_Padding(::System::Security::Cryptography::PaddingMode value);

  /// @brief Method CreateDecryptor addr 0x280df38 size 0x50 virtual true final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor();

  /// @brief Method CreateEncryptor addr 0x280df88 size 0x50 virtual true final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor();

  /// @brief Method Dispose addr 0x280dfd8 size 0xc virtual true final false
  inline void Dispose(bool disposing);

  // Ctor Parameters [CppParam { name: "", ty: "AesCryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AesCryptoServiceProvider(AesCryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AesCryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AesCryptoServiceProvider(AesCryptoServiceProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AesCryptoServiceProvider();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AesCryptoServiceProvider, 0x48>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::AesCryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AesCryptoServiceProvider*, "System.Security.Cryptography", "AesCryptoServiceProvider");
