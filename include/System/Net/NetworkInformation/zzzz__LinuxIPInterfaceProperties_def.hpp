#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/LinuxIPInterfaceProperties.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixIPInterfaceProperties_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LinuxIPInterfaceProperties)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::NetworkInformation {
class GatewayIPAddressInformationCollection;
}
namespace System::Net::NetworkInformation {
class IPAddressCollection;
}
namespace System::Net::NetworkInformation {
class LinuxNetworkInterface;
}
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class LinuxIPInterfaceProperties;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::LinuxIPInterfaceProperties);
// Type: System.Net.NetworkInformation::LinuxIPInterfaceProperties
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: ::System.Net.NetworkInformation::LinuxIPInterfaceProperties*
class CORDL_TYPE LinuxIPInterfaceProperties : public ::System::Net::NetworkInformation::UnixIPInterfaceProperties {
public:
  // Declarations
  __declspec(property(get = get_GatewayAddresses))::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* GatewayAddresses;

  static inline ::System::Net::NetworkInformation::LinuxIPInterfaceProperties* New_ctor(::System::Net::NetworkInformation::LinuxNetworkInterface* iface,
                                                                                        ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses);

  /// @brief Method ParseRouteInfo, addr 0x3050d50, size 0x488, virtual false, abstract: false, final false
  inline ::System::Net::NetworkInformation::IPAddressCollection* ParseRouteInfo(::StringW iface);

  /// @brief Method .ctor, addr 0x3050ce0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::NetworkInformation::LinuxNetworkInterface* iface, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses);

  /// @brief Method get_GatewayAddresses, addr 0x30511d8, size 0x3c, virtual true, abstract: false, final false
  inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* get_GatewayAddresses();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinuxIPInterfaceProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LinuxIPInterfaceProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinuxIPInterfaceProperties(LinuxIPInterfaceProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinuxIPInterfaceProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinuxIPInterfaceProperties(LinuxIPInterfaceProperties const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::LinuxIPInterfaceProperties, 0x20>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::LinuxIPInterfaceProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::LinuxIPInterfaceProperties*, "System.Net.NetworkInformation", "LinuxIPInterfaceProperties");
