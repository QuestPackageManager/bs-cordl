#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
CORDL_MODULE_EXPORT(MD2)
// Forward declare root types
namespace Mono::Security::Cryptography {
class MD2;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::MD2);
// Type: Mono.Security.Cryptography::MD2
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: ::Mono.Security.Cryptography::MD2*
class CORDL_TYPE MD2 : public ::System::Security::Cryptography::HashAlgorithm {
public:
  // Declarations
  /// @brief Method Create, addr 0x279ea88, size 0x58, virtual false, abstract: false, final false
  static inline ::Mono::Security::Cryptography::MD2* Create();

  static inline ::Mono::Security::Cryptography::MD2* New_ctor();

  /// @brief Method .ctor, addr 0x279ea68, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MD2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MD2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MD2(MD2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MD2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MD2(MD2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::MD2, 0x28>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::MD2);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::MD2*, "Mono.Security.Cryptography", "MD2");
