#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/SystemGatewayIPAddressInformation.hpp"
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
// Dependencies System.Net.NetworkInformation.GatewayIPAddressInformation
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.SystemGatewayIPAddressInformation
class CORDL_TYPE SystemGatewayIPAddressInformation : public ::System::Net::NetworkInformation::GatewayIPAddressInformation {
public:
  // Declarations
  /// @brief Field address, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_address, put = __cordl_internal_set_address)) ::System::Net::IPAddress* address;

  static inline ::System::Net::NetworkInformation::SystemGatewayIPAddressInformation* New_ctor(::System::Net::IPAddress* address);

  /// @brief Method ToGatewayIpAddressInformationCollection, addr 0x43e9d84, size 0x2e4, virtual false, abstract: false, final false
  static inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* ToGatewayIpAddressInformationCollection(::System::Net::NetworkInformation::IPAddressCollection* addresses);

  constexpr ::System::Net::IPAddress* const& __cordl_internal_get_address() const;

  constexpr ::System::Net::IPAddress*& __cordl_internal_get_address();

  constexpr void __cordl_internal_set_address(::System::Net::IPAddress* value);

  /// @brief Method .ctor, addr 0x43e9d5c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::IPAddress* address);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemGatewayIPAddressInformation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SystemGatewayIPAddressInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemGatewayIPAddressInformation(SystemGatewayIPAddressInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemGatewayIPAddressInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemGatewayIPAddressInformation(SystemGatewayIPAddressInformation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9776 };

  /// @brief Field address, offset: 0x10, size: 0x8, def value: None
  ::System::Net::IPAddress* ___address;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::SystemGatewayIPAddressInformation, ___address) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::SystemGatewayIPAddressInformation, 0x18>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::SystemGatewayIPAddressInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::SystemGatewayIPAddressInformation*, "System.Net.NetworkInformation", "SystemGatewayIPAddressInformation");
