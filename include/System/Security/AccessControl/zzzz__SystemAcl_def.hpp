#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__CommonAcl_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SystemAcl)
namespace System::Security::AccessControl {
struct AceQualifier;
}
// Forward declare root types
namespace System::Security::AccessControl {
class SystemAcl;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::SystemAcl);
// Type: System.Security.AccessControl::SystemAcl
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3025))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3049))
// CS Name: ::System.Security.AccessControl::SystemAcl*
class CORDL_TYPE SystemAcl : public ::System::Security::AccessControl::CommonAcl {
public:
  // Declarations
  /// @brief Method ApplyCanonicalSortToExplicitAces, addr 0x24a6b40, size 0x20, virtual true, abstract: false, final false
  inline void ApplyCanonicalSortToExplicitAces();

  /// @brief Method GetAceInsertPosition, addr 0x24a6b60, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetAceInsertPosition(::System::Security::AccessControl::AceQualifier aceQualifier);

  // Ctor Parameters [CppParam { name: "", ty: "SystemAcl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemAcl(SystemAcl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemAcl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemAcl(SystemAcl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemAcl();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::SystemAcl, 0x20>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::SystemAcl);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::SystemAcl*, "System.Security.AccessControl", "SystemAcl");
