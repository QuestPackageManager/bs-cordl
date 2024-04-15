#pragma once
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
// Type: Mono.Security.Cryptography::MD4
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: ::Mono.Security.Cryptography::MD4*
class CORDL_TYPE MD4 : public ::System::Security::Cryptography::HashAlgorithm {
public:
  // Declarations
  /// @brief Method Create, addr 0x26a1d5c, size 0x58, virtual false, abstract: false, final false
  static inline ::Mono::Security::Cryptography::MD4* Create();

  static inline ::Mono::Security::Cryptography::MD4* New_ctor();

  /// @brief Method .ctor, addr 0x26a1d3c, size 0x20, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::MD4, 0x28>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::MD4);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::MD4*, "Mono.Security.Cryptography", "MD4");
