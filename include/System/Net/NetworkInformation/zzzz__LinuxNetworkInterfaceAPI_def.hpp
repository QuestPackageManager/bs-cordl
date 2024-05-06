#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinuxNetworkInterfaceAPI)
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class LinuxNetworkInterfaceAPI;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI);
// Type: System.Net.NetworkInformation::LinuxNetworkInterfaceAPI
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: ::System.Net.NetworkInformation::LinuxNetworkInterfaceAPI*
class CORDL_TYPE LinuxNetworkInterfaceAPI : public ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI {
public:
  // Declarations
  /// @brief Method FreeInterfaceAddresses, addr 0x3024110, size 0x4, virtual false, abstract: false, final false
  static inline void FreeInterfaceAddresses(void* ifap);

  /// @brief Method GetAllNetworkInterfaces, addr 0x3024210, size 0xaf4, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*> GetAllNetworkInterfaces();

  /// @brief Method GetInterfaceAddresses, addr 0x3024190, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetInterfaceAddresses(ByRef<void*> ifap);

  static inline ::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI* New_ctor();

  /// @brief Method .ctor, addr 0x3024ddc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinuxNetworkInterfaceAPI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LinuxNetworkInterfaceAPI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinuxNetworkInterfaceAPI(LinuxNetworkInterfaceAPI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinuxNetworkInterfaceAPI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinuxNetworkInterfaceAPI(LinuxNetworkInterfaceAPI const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*, "System.Net.NetworkInformation", "LinuxNetworkInterfaceAPI");
