#pragma once
// IWYU pragma private; include "System/Security/Principal/IIdentity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IIdentity)
// Forward declare root types
namespace System::Security::Principal {
class IIdentity;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Principal::IIdentity);
// Dependencies
namespace System::Security::Principal {
// Is value type: false
// CS Name: System.Security.Principal.IIdentity
class CORDL_TYPE IIdentity {
public:
  // Declarations
  __declspec(property(get = get_AuthenticationType)) ::StringW AuthenticationType;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method get_AuthenticationType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_AuthenticationType();

  /// @brief Method get_Name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  // Ctor Parameters [CppParam { name: "", ty: "IIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IIdentity(IIdentity const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3011 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::IIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::IIdentity*, "System.Security.Principal", "IIdentity");
