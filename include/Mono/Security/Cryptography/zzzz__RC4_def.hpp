#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC4)
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class RC4;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::RC4);
// Type: Mono.Security.Cryptography::RC4
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2972))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14069))
// CS Name: ::Mono.Security.Cryptography::RC4*
class CORDL_TYPE RC4 : public ::System::Security::Cryptography::SymmetricAlgorithm {
public:
  // Declarations
  /// @brief Field s_legalBlockSizes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_legalBlockSizes,
                             put = setStaticF_s_legalBlockSizes))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> s_legalBlockSizes;

  /// @brief Field s_legalKeySizes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_legalKeySizes,
                             put = setStaticF_s_legalKeySizes))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> s_legalKeySizes;

  __declspec(property(get = get_IV, put = set_IV))::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  static inline void setStaticF_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> getStaticF_s_legalBlockSizes();

  static inline void setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> getStaticF_s_legalKeySizes();

  static inline ::Mono::Security::Cryptography::RC4* New_ctor();

  /// @brief Method .ctor addr 0x22a9020 size 0x7c virtual false final false
  inline void _ctor();

  /// @brief Method get_IV addr 0x22ae41c size 0x44 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_IV();

  /// @brief Method set_IV addr 0x22ae460 size 0x4 virtual true final false
  inline void set_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method Create addr 0x22ae464 size 0x58 virtual false final false
  static inline ::Mono::Security::Cryptography::RC4* Create();

  // Ctor Parameters [CppParam { name: "", ty: "RC4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC4(RC4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC4(RC4 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC4();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::RC4, 0x48>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::RC4);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::RC4*, "Mono.Security.Cryptography", "RC4");
