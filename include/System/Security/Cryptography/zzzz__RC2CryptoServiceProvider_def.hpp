#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__RC2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC2CryptoServiceProvider)
namespace System::Security::Cryptography {
class KeySizes;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RC2CryptoServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RC2CryptoServiceProvider);
// Type: System.Security.Cryptography::RC2CryptoServiceProvider
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2947))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2948))
// CS Name: ::System.Security.Cryptography::RC2CryptoServiceProvider*
class CORDL_TYPE RC2CryptoServiceProvider : public ::System::Security::Cryptography::RC2 {
public:
  // Declarations
  /// @brief Field m_use40bitSalt, offset 0x48, size 0x1
  __declspec(property(get = __get_m_use40bitSalt, put = __set_m_use40bitSalt)) bool m_use40bitSalt;

  /// @brief Field s_legalKeySizes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_legalKeySizes,
                             put = setStaticF_s_legalKeySizes))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> s_legalKeySizes;

  __declspec(property(get = get_EffectiveKeySize)) int32_t EffectiveKeySize;

  constexpr bool& __get_m_use40bitSalt();

  constexpr bool const& __get_m_use40bitSalt() const;

  constexpr void __set_m_use40bitSalt(bool value);

  static inline void setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> getStaticF_s_legalKeySizes();

  static inline ::System::Security::Cryptography::RC2CryptoServiceProvider* New_ctor();

  /// @brief Method .ctor, addr 0x246029c, size 0x174, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_EffectiveKeySize, addr 0x2460410, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_EffectiveKeySize();

  /// @brief Method CreateEncryptor, addr 0x2460418, size 0xd4, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method CreateDecryptor, addr 0x24604ec, size 0xd4, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method GenerateKey, addr 0x24605c0, size 0x7c, virtual true, abstract: false, final false
  inline void GenerateKey();

  /// @brief Method GenerateIV, addr 0x246063c, size 0x6c, virtual true, abstract: false, final false
  inline void GenerateIV();

  // Ctor Parameters [CppParam { name: "", ty: "RC2CryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC2CryptoServiceProvider(RC2CryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC2CryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC2CryptoServiceProvider(RC2CryptoServiceProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC2CryptoServiceProvider();

public:
  /// @brief Field m_use40bitSalt, offset: 0x48, size: 0x1, def value: None
  bool ___m_use40bitSalt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RC2CryptoServiceProvider, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RC2CryptoServiceProvider, ___m_use40bitSalt) == 0x48, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RC2CryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RC2CryptoServiceProvider*, "System.Security.Cryptography", "RC2CryptoServiceProvider");
