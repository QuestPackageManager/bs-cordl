#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ReadOnlyCollectionBase_def.hpp"
CORDL_MODULE_EXPORT(ServiceNameCollection)
// Forward declare root types
namespace System::Security::Authentication::ExtendedProtection {
class ServiceNameCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Authentication::ExtendedProtection::ServiceNameCollection);
// Type: System.Security.Authentication.ExtendedProtection::ServiceNameCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Authentication::ExtendedProtection {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3776))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6975))
// CS Name: ::System.Security.Authentication.ExtendedProtection::ServiceNameCollection*
class CORDL_TYPE ServiceNameCollection : public ::System::Collections::ReadOnlyCollectionBase {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "ServiceNameCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServiceNameCollection(ServiceNameCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServiceNameCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServiceNameCollection(ServiceNameCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServiceNameCollection();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection, 0x18>, "Size mismatch!");

} // namespace System::Security::Authentication::ExtendedProtection
NEED_NO_BOX(::System::Security::Authentication::ExtendedProtection::ServiceNameCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*, "System.Security.Authentication.ExtendedProtection", "ServiceNameCollection");
