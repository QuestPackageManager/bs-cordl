#pragma once
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
// Type: System.Security.Principal::IPrincipal
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Principal {
// Is value type: false
// CS Name: ::System.Security.Principal::IPrincipal*
class CORDL_TYPE IPrincipal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IPrincipal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPrincipal(IPrincipal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPrincipal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPrincipal(IPrincipal const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::IPrincipal);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::IPrincipal*, "System.Security.Principal", "IPrincipal");
