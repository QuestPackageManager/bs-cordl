#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC2)
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RC2;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RC2);
// Type: System.Security.Cryptography::RC2
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2972))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2946))
// CS Name: ::System.Security.Cryptography::RC2*
class CORDL_TYPE RC2 : public ::System::Security::Cryptography::SymmetricAlgorithm {
public:
  // Declarations
  /// @brief Field EffectiveKeySizeValue, offset 0x44, size 0x4
  __declspec(property(get = __get_EffectiveKeySizeValue, put = __set_EffectiveKeySizeValue)) int32_t EffectiveKeySizeValue;

  /// @brief Field s_legalBlockSizes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_legalBlockSizes,
                             put = setStaticF_s_legalBlockSizes))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> s_legalBlockSizes;

  /// @brief Field s_legalKeySizes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_legalKeySizes,
                             put = setStaticF_s_legalKeySizes))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> s_legalKeySizes;

  __declspec(property(get = get_EffectiveKeySize)) int32_t EffectiveKeySize;

  __declspec(property(get = get_KeySize, put = set_KeySize)) int32_t KeySize;

  constexpr int32_t& __get_EffectiveKeySizeValue();

  constexpr int32_t const& __get_EffectiveKeySizeValue() const;

  constexpr void __set_EffectiveKeySizeValue(int32_t value);

  static inline void setStaticF_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> getStaticF_s_legalBlockSizes();

  static inline void setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> getStaticF_s_legalKeySizes();

  static inline ::System::Security::Cryptography::RC2* New_ctor();

  /// @brief Method .ctor addr 0x23069b8 size 0x7c virtual false final false
  inline void _ctor();

  /// @brief Method get_EffectiveKeySize addr 0x2306a34 size 0x1c virtual true final false
  inline int32_t get_EffectiveKeySize();

  /// @brief Method get_KeySize addr 0x2306a50 size 0x8 virtual true final false
  inline int32_t get_KeySize();

  /// @brief Method set_KeySize addr 0x2306a58 size 0x7c virtual true final false
  inline void set_KeySize(int32_t value);

  // Ctor Parameters [CppParam { name: "", ty: "RC2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC2(RC2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC2(RC2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC2();

public:
  /// @brief Field EffectiveKeySizeValue, offset: 0x44, size: 0x4, def value: None
  int32_t ___EffectiveKeySizeValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RC2, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RC2, ___EffectiveKeySizeValue) == 0x44, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RC2);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RC2*, "System.Security.Cryptography", "RC2");
