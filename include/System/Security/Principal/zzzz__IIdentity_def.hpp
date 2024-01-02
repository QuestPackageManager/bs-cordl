#pragma once
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
// Type: System.Security.Principal::IIdentity
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2995))
// CS Name: ::System.Security.Principal::IIdentity*
class CORDL_TYPE IIdentity {
public:
  // Declarations
  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_AuthenticationType))::StringW AuthenticationType;

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Name();

  /// @brief Method get_AuthenticationType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_AuthenticationType();

  // Ctor Parameters [CppParam { name: "", ty: "IIdentity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IIdentity(IIdentity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IIdentity(IIdentity const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::IIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::IIdentity*, "System.Security.Principal", "IIdentity");
