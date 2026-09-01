#pragma once
// IWYU pragma private; include "System\Security\Cryptography\RC2CryptoServiceProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__KeySizes_def.hpp"
#include "System/Security/Cryptography/zzzz__RC2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC2CryptoServiceProvider)
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RC2CryptoServiceProvider;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::RC2CryptoServiceProvider*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::RC2CryptoServiceProvider*, "System.Security.Cryptography", "RC2CryptoServiceProvider");
// Dependencies System.Security.Cryptography.KeySizes, System.Security.Cryptography.RC2
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RC2CryptoServiceProvider
class CORDL_TYPE RC2CryptoServiceProvider : public ::System::Security::Cryptography::RC2 {
public:
  // Declarations
  __declspec(property(get = get_EffectiveKeySize)) int32_t EffectiveKeySize;

  /// @brief Field m_use40bitSalt, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_m_use40bitSalt, put = __cordl_internal_set_m_use40bitSalt)) bool m_use40bitSalt;

  /// @brief Field s_legalKeySizes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_legalKeySizes, put = setStaticF_s_legalKeySizes)) ::ArrayW<::System::Security::Cryptography::KeySizes*> s_legalKeySizes;

  /// @brief Method CreateDecryptor, addr 0x5afd0f8, size 0xcc, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV);

  /// @brief Method CreateEncryptor, addr 0x5afd02c, size 0xcc, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV);

  /// @brief Method GenerateIV, addr 0x5afd244, size 0x70, virtual true, abstract: false, final false
  inline void GenerateIV();

  /// @brief Method GenerateKey, addr 0x5afd1c4, size 0x80, virtual true, abstract: false, final false
  inline void GenerateKey();

  static inline ::System::Security::Cryptography::RC2CryptoServiceProvider* New_ctor();

  constexpr bool const& __cordl_internal_get_m_use40bitSalt() const;

  constexpr bool& __cordl_internal_get_m_use40bitSalt();

  constexpr void __cordl_internal_set_m_use40bitSalt(bool value);

  /// @brief Method .ctor, addr 0x5afcf60, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*> getStaticF_s_legalKeySizes();

  /// @brief Method get_EffectiveKeySize, addr 0x5afd024, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_EffectiveKeySize();

  static inline void setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC2CryptoServiceProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RC2CryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC2CryptoServiceProvider(RC2CryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC2CryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC2CryptoServiceProvider(RC2CryptoServiceProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2964 };

  /// @brief Field m_use40bitSalt, offset: 0x48, size: 0x1, def value: None
  bool ___m_use40bitSalt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::RC2CryptoServiceProvider, ___m_use40bitSalt) == 0x48, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::RC2CryptoServiceProvider) == 0x50, "Size mismatch!");

} // namespace System::Security::Cryptography
