#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ReadOnlyCollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(AuthorizationRuleCollection)
namespace System::Security::AccessControl {
class AuthorizationRule;
}
// Forward declare root types
namespace System::Security::AccessControl {
class AuthorizationRuleCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::AuthorizationRuleCollection);
// Type: System.Security.AccessControl::AuthorizationRuleCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3776))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3022))
// CS Name: ::System.Security.AccessControl::AuthorizationRuleCollection*
class CORDL_TYPE AuthorizationRuleCollection : public ::System::Collections::ReadOnlyCollectionBase {
public:
  // Declarations
  static inline ::System::Security::AccessControl::AuthorizationRuleCollection*
  New_ctor(::ArrayW<::System::Security::AccessControl::AuthorizationRule*, ::Array<::System::Security::AccessControl::AuthorizationRule*>*> rules);

  /// @brief Method .ctor, addr 0x24a2a5c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Security::AccessControl::AuthorizationRule*, ::Array<::System::Security::AccessControl::AuthorizationRule*>*> rules);

  // Ctor Parameters [CppParam { name: "", ty: "AuthorizationRuleCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthorizationRuleCollection(AuthorizationRuleCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthorizationRuleCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthorizationRuleCollection(AuthorizationRuleCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthorizationRuleCollection();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AuthorizationRuleCollection, 0x18>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::AuthorizationRuleCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AuthorizationRuleCollection*, "System.Security.AccessControl", "AuthorizationRuleCollection");
