#pragma once
// IWYU pragma private; include "Mono\Security\Cryptography\RC4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__KeySizes_def.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC4)
// Forward declare root types
namespace Mono::Security::Cryptography {
class RC4;
}
// Write type traits
MARK_REF_T(::Mono::Security::Cryptography::RC4*);
DEFINE_IL2CPP_CLASS(::Mono::Security::Cryptography::RC4*, "Mono.Security.Cryptography", "RC4");
// Dependencies System.Security.Cryptography.KeySizes, System.Security.Cryptography.SymmetricAlgorithm
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: Mono.Security.Cryptography.RC4
class CORDL_TYPE RC4 : public ::System::Security::Cryptography::SymmetricAlgorithm {
public:
  // Declarations
  __declspec(property(get = get_IV, put = set_IV)) ::ArrayW<uint8_t> IV;

  /// @brief Field s_legalBlockSizes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_legalBlockSizes, put = setStaticF_s_legalBlockSizes)) ::ArrayW<::System::Security::Cryptography::KeySizes*> s_legalBlockSizes;

  /// @brief Field s_legalKeySizes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_legalKeySizes, put = setStaticF_s_legalKeySizes)) ::ArrayW<::System::Security::Cryptography::KeySizes*> s_legalKeySizes;

  /// @brief Method Create, addr 0x5aa350c, size 0x54, virtual false, abstract: false, final false
  static inline ::Mono::Security::Cryptography::RC4* Create();

  static inline ::Mono::Security::Cryptography::RC4* New_ctor();

  /// @brief Method .ctor, addr 0x5a9e734, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*> getStaticF_s_legalBlockSizes();

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*> getStaticF_s_legalKeySizes();

  /// @brief Method get_IV, addr 0x5aa34c0, size 0x48, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t> get_IV();

  static inline void setStaticF_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes*> value);

  static inline void setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*> value);

  /// @brief Method set_IV, addr 0x5aa3508, size 0x4, virtual true, abstract: false, final false
  inline void set_IV(::ArrayW<uint8_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RC4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC4(RC4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC4(RC4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19335 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::Cryptography::RC4) == 0x48, "Size mismatch!");

} // namespace Mono::Security::Cryptography
