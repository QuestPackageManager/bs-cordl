#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/MD4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
CORDL_MODULE_EXPORT(MD4)
// Forward declare root types
namespace Mono::Security::Cryptography {
class MD4;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::MD4);
// Dependencies System.Security.Cryptography.HashAlgorithm
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: Mono.Security.Cryptography.MD4
class CORDL_TYPE MD4 : public ::System::Security::Cryptography::HashAlgorithm {
public:
  // Declarations
  /// @brief Method Create, addr 0x3c71400, size 0x50, virtual false, abstract: false, final false
  static inline ::Mono::Security::Cryptography::MD4* Create();

  static inline ::Mono::Security::Cryptography::MD4* New_ctor();

  /// @brief Method .ctor, addr 0x3c713e0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MD4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MD4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MD4(MD4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MD4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MD4(MD4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2279 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::MD4, 0x28>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::MD4);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::MD4*, "Mono.Security.Cryptography", "MD4");
