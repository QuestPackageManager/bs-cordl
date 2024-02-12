#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICredentialPolicy)
// Forward declare root types
namespace System::Net {
class ICredentialPolicy;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ICredentialPolicy);
// Type: System.Net::ICredentialPolicy
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7198))
// CS Name: ::System.Net::ICredentialPolicy*
class CORDL_TYPE ICredentialPolicy {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "ICredentialPolicy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICredentialPolicy(ICredentialPolicy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICredentialPolicy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICredentialPolicy(ICredentialPolicy const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
NEED_NO_BOX(::System::Net::ICredentialPolicy);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ICredentialPolicy*, "System.Net", "ICredentialPolicy");
