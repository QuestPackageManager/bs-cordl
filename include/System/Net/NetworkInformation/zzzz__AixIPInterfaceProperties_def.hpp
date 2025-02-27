#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixIPInterfaceProperties.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixIPInterfaceProperties_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AixIPInterfaceProperties)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::NetworkInformation {
class AixNetworkInterface;
}
namespace System::Net::NetworkInformation {
class GatewayIPAddressInformationCollection;
}
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class AixIPInterfaceProperties;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::AixIPInterfaceProperties);
// Dependencies System.Net.NetworkInformation.UnixIPInterfaceProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.AixIPInterfaceProperties
class CORDL_TYPE AixIPInterfaceProperties : public ::System::Net::NetworkInformation::UnixIPInterfaceProperties {
public:
  // Declarations
  __declspec(property(get = get_GatewayAddresses)) ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* GatewayAddresses;

  /// @brief Field _mtu, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__mtu, put = __cordl_internal_set__mtu)) int32_t _mtu;

  static inline ::System::Net::NetworkInformation::AixIPInterfaceProperties* New_ctor(::System::Net::NetworkInformation::AixNetworkInterface* iface,
                                                                                      ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses, int32_t mtu);

  /// @brief Method ParseRouteInfo_icall, addr 0x43f79b4, size 0x44, virtual false, abstract: false, final false
  static inline bool ParseRouteInfo_icall(::StringW iface, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> gw_addr_list);

  constexpr int32_t const& __cordl_internal_get__mtu() const;

  constexpr int32_t& __cordl_internal_get__mtu();

  constexpr void __cordl_internal_set__mtu(int32_t value);

  /// @brief Method .ctor, addr 0x43f7908, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::NetworkInformation::AixNetworkInterface* iface, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses, int32_t mtu);

  /// @brief Method get_GatewayAddresses, addr 0x43f79f8, size 0x25c, virtual true, abstract: false, final false
  inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* get_GatewayAddresses();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AixIPInterfaceProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AixIPInterfaceProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AixIPInterfaceProperties(AixIPInterfaceProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AixIPInterfaceProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AixIPInterfaceProperties(AixIPInterfaceProperties const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9780 };

  /// @brief Field _mtu, offset: 0x20, size: 0x4, def value: None
  int32_t ____mtu;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::AixIPInterfaceProperties, ____mtu) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixIPInterfaceProperties, 0x28>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::AixIPInterfaceProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixIPInterfaceProperties*, "System.Net.NetworkInformation", "AixIPInterfaceProperties");
