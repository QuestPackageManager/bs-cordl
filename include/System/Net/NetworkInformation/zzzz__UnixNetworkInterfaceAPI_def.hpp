#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/UnixNetworkInterfaceAPI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceFactory_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnixNetworkInterfaceAPI)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixNetworkInterfaceAPI;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::UnixNetworkInterfaceAPI);
// Dependencies System.Net.NetworkInformation.NetworkInterfaceFactory
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.UnixNetworkInterfaceAPI
class CORDL_TYPE UnixNetworkInterfaceAPI : public ::System::Net::NetworkInformation::NetworkInterfaceFactory {
public:
  // Declarations
  static inline ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI* New_ctor();

  /// @brief Method .ctor, addr 0x43ed410, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method freeifaddrs, addr 0x43edb60, size 0x7c, virtual false, abstract: false, final false
  static inline void freeifaddrs(::System::IntPtr ifap);

  /// @brief Method getifaddrs, addr 0x43edbe0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t getifaddrs(::ByRef<::System::IntPtr> ifap);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9810 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnixNetworkInterfaceAPI, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnixNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnixNetworkInterfaceAPI*, "System.Net.NetworkInformation", "UnixNetworkInterfaceAPI");
