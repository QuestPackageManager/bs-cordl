#pragma once
// IWYU pragma private; include "System\Security\Cryptography\RC2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__KeySizes_def.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC2)
// Forward declare root types
namespace System::Security::Cryptography {
class RC2;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::RC2*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::RC2*, "System.Security.Cryptography", "RC2");
// Dependencies System.Security.Cryptography.KeySizes, System.Security.Cryptography.SymmetricAlgorithm
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RC2
class CORDL_TYPE RC2 : public ::System::Security::Cryptography::SymmetricAlgorithm {
public:
  // Declarations
  __declspec(property(get = get_EffectiveKeySize)) int32_t EffectiveKeySize;

  /// @brief Field EffectiveKeySizeValue, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_EffectiveKeySizeValue, put = __cordl_internal_set_EffectiveKeySizeValue)) int32_t EffectiveKeySizeValue;

  __declspec(property(get = get_KeySize, put = set_KeySize)) int32_t KeySize;

  /// @brief Field s_legalBlockSizes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_legalBlockSizes, put = setStaticF_s_legalBlockSizes)) ::ArrayW<::System::Security::Cryptography::KeySizes*> s_legalBlockSizes;

  /// @brief Field s_legalKeySizes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_legalKeySizes, put = setStaticF_s_legalKeySizes)) ::ArrayW<::System::Security::Cryptography::KeySizes*> s_legalKeySizes;

  static inline ::System::Security::Cryptography::RC2* New_ctor();

  constexpr int32_t const& __cordl_internal_get_EffectiveKeySizeValue() const;

  constexpr int32_t& __cordl_internal_get_EffectiveKeySizeValue();

  constexpr void __cordl_internal_set_EffectiveKeySizeValue(int32_t value);

  /// @brief Method .ctor, addr 0x5afcd4c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*> getStaticF_s_legalBlockSizes();

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*> getStaticF_s_legalKeySizes();

  /// @brief Method get_EffectiveKeySize, addr 0x5afcdcc, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_EffectiveKeySize();

  /// @brief Method get_KeySize, addr 0x5afcde8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_KeySize();

  static inline void setStaticF_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes*> value);

  static inline void setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*> value);

  /// @brief Method set_KeySize, addr 0x5afcdf0, size 0x60, virtual true, abstract: false, final false
  inline void set_KeySize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RC2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC2(RC2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC2(RC2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2963 };

  /// @brief Field EffectiveKeySizeValue, offset: 0x44, size: 0x4, def value: None
  int32_t ___EffectiveKeySizeValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::RC2, ___EffectiveKeySizeValue) == 0x44, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::RC2) == 0x48, "Size mismatch!");

} // namespace System::Security::Cryptography
