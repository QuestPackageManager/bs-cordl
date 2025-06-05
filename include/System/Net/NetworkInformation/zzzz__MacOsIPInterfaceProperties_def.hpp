#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/MacOsIPInterfaceProperties.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixIPInterfaceProperties_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MacOsIPInterfaceProperties)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::NetworkInformation {
class GatewayIPAddressInformationCollection;
}
namespace System::Net::NetworkInformation {
class MacOsNetworkInterface;
}
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class MacOsIPInterfaceProperties;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::MacOsIPInterfaceProperties);
// Dependencies System.Net.NetworkInformation.UnixIPInterfaceProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.MacOsIPInterfaceProperties
class CORDL_TYPE MacOsIPInterfaceProperties : public ::System::Net::NetworkInformation::UnixIPInterfaceProperties {
public:
  // Declarations
  __declspec(property(get = get_GatewayAddresses)) ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* GatewayAddresses;

  static inline ::System::Net::NetworkInformation::MacOsIPInterfaceProperties* New_ctor(::System::Net::NetworkInformation::MacOsNetworkInterface* iface,
                                                                                        ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses);

  /// @brief Method ParseRouteInfo_icall, addr 0x43ed69c, size 0x4, virtual false, abstract: false, final false
  static inline bool ParseRouteInfo_icall(::StringW iface, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> gw_addr_list);

  /// @brief Method .ctor, addr 0x43ed62c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::NetworkInformation::MacOsNetworkInterface* iface, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses);

  /// @brief Method get_GatewayAddresses, addr 0x43ed6a0, size 0x234, virtual true, abstract: false, final false
  inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* get_GatewayAddresses();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MacOsIPInterfaceProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MacOsIPInterfaceProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MacOsIPInterfaceProperties(MacOsIPInterfaceProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MacOsIPInterfaceProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MacOsIPInterfaceProperties(MacOsIPInterfaceProperties const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9799 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::MacOsIPInterfaceProperties, 0x20>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::MacOsIPInterfaceProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsIPInterfaceProperties*, "System.Net.NetworkInformation", "MacOsIPInterfaceProperties");
