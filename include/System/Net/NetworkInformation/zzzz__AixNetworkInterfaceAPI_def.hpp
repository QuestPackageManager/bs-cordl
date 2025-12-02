#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixNetworkInterfaceAPI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AixNetworkInterfaceAPI)
namespace System::Net::NetworkInformation::AixStructs {
struct ifconf;
}
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq_flags;
}
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq_mtu;
}
namespace System::Net::NetworkInformation {
struct AixAddressFamily;
}
namespace System::Net::NetworkInformation {
struct AixIoctlRequest;
}
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class AixNetworkInterfaceAPI;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::AixNetworkInterfaceAPI);
// Dependencies System.Net.NetworkInformation.UnixNetworkInterfaceAPI
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.AixNetworkInterfaceAPI
class CORDL_TYPE AixNetworkInterfaceAPI : public ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI {
public:
  // Declarations
  /// @brief Method ByteArrayCopy, addr 0x6136bc8, size 0x1c, virtual false, abstract: false, final false
  static inline void ByteArrayCopy(uint8_t* dst, uint8_t* src, int32_t elements);

  /// @brief Method GetAllNetworkInterfaces, addr 0x6136be4, size 0xf2c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*> GetAllNetworkInterfaces();

  static inline ::System::Net::NetworkInformation::AixNetworkInterfaceAPI* New_ctor();

  /// @brief Method .ctor, addr 0x6137d30, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method close, addr 0x61368d0, size 0x78, virtual false, abstract: false, final false
  static inline int32_t close(int32_t fd);

  /// @brief Method ioctl, addr 0x61369e8, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request, ::ByRef<::System::Net::NetworkInformation::AixStructs::ifconf> arg);

  /// @brief Method ioctl, addr 0x6136a88, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request, ::ByRef<::System::Net::NetworkInformation::AixStructs::ifreq_flags> arg);

  /// @brief Method ioctl, addr 0x6136b28, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request, ::ByRef<::System::Net::NetworkInformation::AixStructs::ifreq_mtu> arg);

  /// @brief Method ioctl, addr 0x6136948, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request, ::ByRef<int32_t> arg);

  /// @brief Method socket, addr 0x6136830, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t socket(::System::Net::NetworkInformation::AixAddressFamily family, int32_t type, int32_t protocol);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AixNetworkInterfaceAPI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AixNetworkInterfaceAPI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AixNetworkInterfaceAPI(AixNetworkInterfaceAPI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AixNetworkInterfaceAPI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AixNetworkInterfaceAPI(AixNetworkInterfaceAPI const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11655 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixNetworkInterfaceAPI, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::AixNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixNetworkInterfaceAPI*, "System.Net.NetworkInformation", "AixNetworkInterfaceAPI");
