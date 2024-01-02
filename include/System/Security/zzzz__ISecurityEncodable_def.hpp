#pragma once
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
// Type: System.Security::ISecurityEncodable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2879))
// CS Name: ::System.Security::ISecurityEncodable*
class CORDL_TYPE ISecurityEncodable {
public:
  // Declarations
  /// @brief Method ToXml, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::SecurityElement* ToXml();

  // Ctor Parameters [CppParam { name: "", ty: "ISecurityEncodable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISecurityEncodable(ISecurityEncodable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISecurityEncodable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISecurityEncodable(ISecurityEncodable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Security
NEED_NO_BOX(::System::Security::ISecurityEncodable);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::ISecurityEncodable*, "System.Security", "ISecurityEncodable");
