#pragma once
// IWYU pragma private; include "System/Security/AccessControl/CommonObjectSecurity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__ObjectSecurity_def.hpp"
CORDL_MODULE_EXPORT(CommonObjectSecurity)
namespace System::Security::AccessControl {
class AuthorizationRuleCollection;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security::AccessControl {
class CommonObjectSecurity;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::CommonObjectSecurity);
// Dependencies System.Security.AccessControl.ObjectSecurity
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.CommonObjectSecurity
class CORDL_TYPE CommonObjectSecurity : public ::System::Security::AccessControl::ObjectSecurity {
public:
  // Declarations
  /// @brief Method GetAccessRules, addr 0x3cc512c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Security::AccessControl::AuthorizationRuleCollection* GetAccessRules(bool includeExplicit, bool includeInherited, ::System::Type* targetType);

  static inline ::System::Security::AccessControl::CommonObjectSecurity* New_ctor(bool isContainer);

  /// @brief Method .ctor, addr 0x3cc5030, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool isContainer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommonObjectSecurity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommonObjectSecurity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommonObjectSecurity(CommonObjectSecurity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommonObjectSecurity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommonObjectSecurity(CommonObjectSecurity const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3025 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::CommonObjectSecurity, 0x28>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::CommonObjectSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::CommonObjectSecurity*, "System.Security.AccessControl", "CommonObjectSecurity");
