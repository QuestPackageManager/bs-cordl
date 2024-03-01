#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceFactory_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnixNetworkInterfaceAPI)
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixNetworkInterfaceAPI;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::UnixNetworkInterfaceAPI);
// Type: System.Net.NetworkInformation::UnixNetworkInterfaceAPI
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: ::System.Net.NetworkInformation::UnixNetworkInterfaceAPI*
class CORDL_TYPE UnixNetworkInterfaceAPI : public ::System::Net::NetworkInformation::NetworkInterfaceFactory {
public:
  // Declarations
  static inline ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI* New_ctor();

  /// @brief Method .ctor, addr 0x2ada3d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method freeifaddrs, addr 0x2adab30, size 0x7c, virtual false, abstract: false, final false
  static inline void freeifaddrs(void* ifap);

  /// @brief Method getifaddrs, addr 0x2adabb0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t getifaddrs(ByRef<void*> ifap);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnixNetworkInterfaceAPI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterfaceAPI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnixNetworkInterfaceAPI(UnixNetworkInterfaceAPI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterfaceAPI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnixNetworkInterfaceAPI(UnixNetworkInterfaceAPI const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnixNetworkInterfaceAPI, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnixNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnixNetworkInterfaceAPI*, "System.Net.NetworkInformation", "UnixNetworkInterfaceAPI");
