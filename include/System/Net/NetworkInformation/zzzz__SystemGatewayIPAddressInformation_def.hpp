#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformation_def.hpp"
CORDL_MODULE_EXPORT(SystemGatewayIPAddressInformation)
namespace System::Net::NetworkInformation {
class GatewayIPAddressInformationCollection;
}
namespace System::Net::NetworkInformation {
class IPAddressCollection;
}
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class SystemGatewayIPAddressInformation;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::SystemGatewayIPAddressInformation);
// Type: System.Net.NetworkInformation::SystemGatewayIPAddressInformation
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9245))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9255))
// CS Name: ::System.Net.NetworkInformation::SystemGatewayIPAddressInformation*
class CORDL_TYPE SystemGatewayIPAddressInformation : public ::System::Net::NetworkInformation::GatewayIPAddressInformation {
public:
  // Declarations
  /// @brief Field address, offset 0x10, size 0x8
  __declspec(property(get = __get_address, put = __set_address))::System::Net::IPAddress* address;

  constexpr ::System::Net::IPAddress*& __get_address();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IPAddress*> const& __get_address() const;

  constexpr void __set_address(::System::Net::IPAddress* value);

  static inline ::System::Net::NetworkInformation::SystemGatewayIPAddressInformation* New_ctor(::System::Net::IPAddress* address);

  /// @brief Method .ctor, addr 0x29eb9d8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::IPAddress* address);

  /// @brief Method ToGatewayIpAddressInformationCollection, addr 0x29eba00, size 0x2f0, virtual false, abstract: false, final false
  static inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* ToGatewayIpAddressInformationCollection(::System::Net::NetworkInformation::IPAddressCollection* addresses);

  // Ctor Parameters [CppParam { name: "", ty: "SystemGatewayIPAddressInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemGatewayIPAddressInformation(SystemGatewayIPAddressInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemGatewayIPAddressInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemGatewayIPAddressInformation(SystemGatewayIPAddressInformation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemGatewayIPAddressInformation();

public:
  /// @brief Field address, offset: 0x10, size: 0x8, def value: None
  ::System::Net::IPAddress* ___address;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::SystemGatewayIPAddressInformation, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::SystemGatewayIPAddressInformation, ___address) == 0x10, "Offset mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::SystemGatewayIPAddressInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::SystemGatewayIPAddressInformation*, "System.Net.NetworkInformation", "SystemGatewayIPAddressInformation");
