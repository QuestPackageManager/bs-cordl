#pragma once
// IWYU pragma private; include "System\Security\Cryptography\RIPEMD160.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
CORDL_MODULE_EXPORT(RIPEMD160)
// Forward declare root types
namespace System::Security::Cryptography {
class RIPEMD160;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::RIPEMD160*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::RIPEMD160*, "System.Security.Cryptography", "RIPEMD160");
// Dependencies System.Security.Cryptography.HashAlgorithm
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RIPEMD160
class CORDL_TYPE RIPEMD160 : public ::System::Security::Cryptography::HashAlgorithm {
public:
  // Declarations
  /// @brief Method Create, addr 0x5b006bc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RIPEMD160* Create();

  static inline ::System::Security::Cryptography::RIPEMD160* New_ctor();

  /// @brief Method .ctor, addr 0x5b006b0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RIPEMD160();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RIPEMD160", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RIPEMD160(RIPEMD160&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RIPEMD160", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RIPEMD160(RIPEMD160 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2969 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::RIPEMD160) == 0x28, "Size mismatch!");

} // namespace System::Security::Cryptography
