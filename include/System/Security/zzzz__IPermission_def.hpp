#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPermission)
namespace System::Security {
class ISecurityEncodable;
}
// Forward declare root types
namespace System::Security {
class IPermission;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::IPermission);
// Type: System.Security::IPermission
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2878))
// CS Name: ::System.Security::IPermission*
class CORDL_TYPE IPermission {
public:
  // Declarations
  /// @brief Convert operator to "::System::Security::ISecurityEncodable"
  constexpr operator ::System::Security::ISecurityEncodable*() noexcept;

  /// @brief Method Demand, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Demand();

  /// @brief Method IsSubsetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsSubsetOf(::System::Security::IPermission* target);

  // Ctor Parameters [CppParam { name: "", ty: "IPermission", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPermission(IPermission&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPermission", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPermission(IPermission const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Security
NEED_NO_BOX(::System::Security::IPermission);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::IPermission*, "System.Security", "IPermission");
