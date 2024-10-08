#pragma once
// IWYU pragma private; include "System/Security/Cryptography/SHA256.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
CORDL_MODULE_EXPORT(SHA256)
// Forward declare root types
namespace System::Security::Cryptography {
class SHA256;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::SHA256);
// Type: System.Security.Cryptography::SHA256
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::SHA256*
class CORDL_TYPE SHA256 : public ::System::Security::Cryptography::HashAlgorithm {
public:
  // Declarations
  /// @brief Method Create, addr 0x3c33f80, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::SHA256* Create();

  static inline ::System::Security::Cryptography::SHA256* New_ctor();

  /// @brief Method .ctor, addr 0x3c33f60, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SHA256();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SHA256", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SHA256(SHA256&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SHA256", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SHA256(SHA256 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2959 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::SHA256, 0x28>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::SHA256);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SHA256*, "System.Security.Cryptography", "SHA256");
