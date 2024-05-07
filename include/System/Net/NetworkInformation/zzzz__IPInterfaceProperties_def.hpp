#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/IPInterfaceProperties.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IPInterfaceProperties)
namespace System::Net::NetworkInformation {
class GatewayIPAddressInformationCollection;
}
namespace System::Net::NetworkInformation {
class UnicastIPAddressInformationCollection;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class IPInterfaceProperties;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::IPInterfaceProperties);
// Type: System.Net.NetworkInformation::IPInterfaceProperties
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: ::System.Net.NetworkInformation::IPInterfaceProperties*
class CORDL_TYPE IPInterfaceProperties : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_GatewayAddresses))::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* GatewayAddresses;

  __declspec(property(get = get_UnicastAddresses))::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* UnicastAddresses;

  static inline ::System::Net::NetworkInformation::IPInterfaceProperties* New_ctor();

  /// @brief Method .ctor, addr 0x3021868, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GatewayAddresses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* get_GatewayAddresses();

  /// @brief Method get_UnicastAddresses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* get_UnicastAddresses();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IPInterfaceProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IPInterfaceProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPInterfaceProperties(IPInterfaceProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPInterfaceProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPInterfaceProperties(IPInterfaceProperties const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::IPInterfaceProperties, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::IPInterfaceProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::IPInterfaceProperties*, "System.Net.NetworkInformation", "IPInterfaceProperties");
