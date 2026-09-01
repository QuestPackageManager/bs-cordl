#pragma once
// IWYU pragma private; include "System\Net\ICredentialPolicy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICredentialPolicy)
// Forward declare root types
namespace System::Net {
class ICredentialPolicy;
}
// Write type traits
MARK_REF_T(::System::Net::ICredentialPolicy*);
DEFINE_IL2CPP_CLASS(::System::Net::ICredentialPolicy*, "System.Net", "ICredentialPolicy");
// Dependencies
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ICredentialPolicy
class CORDL_TYPE ICredentialPolicy {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "ICredentialPolicy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICredentialPolicy(ICredentialPolicy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11612 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
