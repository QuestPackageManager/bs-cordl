#pragma once
// IWYU pragma private; include "System/Security/ISecurityEncodable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISecurityEncodable)
namespace System::Security {
class SecurityElement;
}
// Forward declare root types
namespace System::Security {
class ISecurityEncodable;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::ISecurityEncodable);
// Dependencies
namespace System::Security {
// Is value type: false
// CS Name: System.Security.ISecurityEncodable
class CORDL_TYPE ISecurityEncodable {
public:
  // Declarations
  /// @brief Method ToXml, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Security::SecurityElement* ToXml();

  // Ctor Parameters [CppParam { name: "", ty: "ISecurityEncodable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISecurityEncodable(ISecurityEncodable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2882 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Security
NEED_NO_BOX(::System::Security::ISecurityEncodable);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::ISecurityEncodable*, "System.Security", "ISecurityEncodable");
