#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/LinuxNetworkInterfaceAPI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinuxNetworkInterfaceAPI)
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class LinuxNetworkInterfaceAPI;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI);
// Dependencies System.Net.NetworkInformation.UnixNetworkInterfaceAPI
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.LinuxNetworkInterfaceAPI
class CORDL_TYPE LinuxNetworkInterfaceAPI : public ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI {
public:
  // Declarations
  /// @brief Method FreeInterfaceAddresses, addr 0x619ffd4, size 0x4, virtual false, abstract: false, final false
  static inline void FreeInterfaceAddresses(::System::IntPtr ifap);

  /// @brief Method GetAllNetworkInterfaces, addr 0x61a00d4, size 0xae8, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*> GetAllNetworkInterfaces();

  /// @brief Method GetInterfaceAddresses, addr 0x61a0054, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetInterfaceAddresses(::ByRef<::System::IntPtr> ifap);

  static inline ::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI* New_ctor();

  /// @brief Method .ctor, addr 0x61a0ca0, size 0x4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11667 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*, "System.Net.NetworkInformation", "LinuxNetworkInterfaceAPI");
