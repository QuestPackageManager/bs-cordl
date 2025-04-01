#pragma once
// IWYU pragma private; include "System/Security/Cryptography/SHA384.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
CORDL_MODULE_EXPORT(SHA384)
// Forward declare root types
namespace System::Security::Cryptography {
class SHA384;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::SHA384);
// Dependencies System.Security.Cryptography.HashAlgorithm
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.SHA384
class CORDL_TYPE SHA384 : public ::System::Security::Cryptography::HashAlgorithm {
public:
  // Declarations
  /// @brief Method Create, addr 0x3ca5e38, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::SHA384* Create();

  static inline ::System::Security::Cryptography::SHA384* New_ctor();

  /// @brief Method .ctor, addr 0x3ca5e18, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SHA384();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SHA384", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SHA384(SHA384&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SHA384", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SHA384(SHA384 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2961 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::SHA384, 0x28>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::SHA384);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SHA384*, "System.Security.Cryptography", "SHA384");
