#pragma once
// IWYU pragma private; include "System/Security/Cryptography/Aes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Aes)
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class Aes;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::Aes);
// Dependencies System.Security.Cryptography.SymmetricAlgorithm
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.Aes
class CORDL_TYPE Aes : public ::System::Security::Cryptography::SymmetricAlgorithm {
public:
  // Declarations
  /// @brief Field s_legalBlockSizes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_legalBlockSizes,
                      put = setStaticF_s_legalBlockSizes)) ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*>
      s_legalBlockSizes;

  /// @brief Field s_legalKeySizes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_legalKeySizes, put = setStaticF_s_legalKeySizes)) ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*>
      s_legalKeySizes;

  /// @brief Method Create, addr 0x58e2468, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::Aes* Create();

  /// @brief Method Create, addr 0x58e24d4, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::Aes* Create(::StringW algorithmName);

  static inline ::System::Security::Cryptography::Aes* New_ctor();

  /// @brief Method .ctor, addr 0x58e23e0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> getStaticF_s_legalBlockSizes();

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> getStaticF_s_legalKeySizes();

  static inline void setStaticF_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  static inline void setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Aes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Aes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Aes(Aes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Aes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Aes(Aes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2933 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::Aes, 0x48>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::Aes);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::Aes*, "System.Security.Cryptography", "Aes");
