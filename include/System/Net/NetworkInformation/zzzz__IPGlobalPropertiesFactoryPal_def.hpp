#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/IPGlobalPropertiesFactoryPal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IPGlobalPropertiesFactoryPal)
namespace System::Net::NetworkInformation {
class IPGlobalProperties;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class IPGlobalPropertiesFactoryPal;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal);
// Dependencies System.Object
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.IPGlobalPropertiesFactoryPal
class CORDL_TYPE IPGlobalPropertiesFactoryPal : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x43eb318, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Net::NetworkInformation::IPGlobalProperties* Create();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IPGlobalPropertiesFactoryPal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IPGlobalPropertiesFactoryPal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPGlobalPropertiesFactoryPal(IPGlobalPropertiesFactoryPal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPGlobalPropertiesFactoryPal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPGlobalPropertiesFactoryPal(IPGlobalPropertiesFactoryPal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9785 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal*, "System.Net.NetworkInformation", "IPGlobalPropertiesFactoryPal");
