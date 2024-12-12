#pragma once
// IWYU pragma private; include "System/Security/Principal/IPrincipal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPrincipal)
// Forward declare root types
namespace System::Security::Principal {
class IPrincipal;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Principal::IPrincipal);
// Dependencies
namespace System::Security::Principal {
// Is value type: false
// CS Name: System.Security.Principal.IPrincipal
class CORDL_TYPE IPrincipal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IPrincipal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPrincipal(IPrincipal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2995 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::IPrincipal);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::IPrincipal*, "System.Security.Principal", "IPrincipal");
