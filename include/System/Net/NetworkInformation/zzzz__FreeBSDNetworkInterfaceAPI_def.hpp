#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__MacOsNetworkInterfaceAPI_def.hpp"
CORDL_MODULE_EXPORT(FreeBSDNetworkInterfaceAPI)
// Forward declare root types
namespace System::Net::NetworkInformation {
class FreeBSDNetworkInterfaceAPI;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI);
// Type: System.Net.NetworkInformation::FreeBSDNetworkInterfaceAPI
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: ::System.Net.NetworkInformation::FreeBSDNetworkInterfaceAPI*
class CORDL_TYPE FreeBSDNetworkInterfaceAPI : public ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI {
public:
  // Declarations
  static inline ::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI* New_ctor();

  /// @brief Method .ctor, addr 0x2f1e1ec, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FreeBSDNetworkInterfaceAPI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FreeBSDNetworkInterfaceAPI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FreeBSDNetworkInterfaceAPI(FreeBSDNetworkInterfaceAPI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FreeBSDNetworkInterfaceAPI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FreeBSDNetworkInterfaceAPI(FreeBSDNetworkInterfaceAPI const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI, 0x18>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI*, "System.Net.NetworkInformation", "FreeBSDNetworkInterfaceAPI");
