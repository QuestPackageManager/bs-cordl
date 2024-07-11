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
// Type: System.Net.NetworkInformation::IPGlobalPropertiesFactoryPal
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: ::System.Net.NetworkInformation::IPGlobalPropertiesFactoryPal*
class CORDL_TYPE IPGlobalPropertiesFactoryPal : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x304e910, size 0x50, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal*, "System.Net.NetworkInformation", "IPGlobalPropertiesFactoryPal");
