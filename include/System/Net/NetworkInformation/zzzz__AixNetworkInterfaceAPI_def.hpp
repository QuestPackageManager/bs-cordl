#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AixNetworkInterfaceAPI)
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
namespace System::Net::NetworkInformation {
struct AixIoctlRequest;
}
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq_flags;
}
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq_mtu;
}
namespace System::Net::NetworkInformation::AixStructs {
struct ifconf;
}
namespace System::Net::NetworkInformation {
struct AixAddressFamily;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class AixNetworkInterfaceAPI;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::AixNetworkInterfaceAPI);
// Type: System.Net.NetworkInformation::AixNetworkInterfaceAPI
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9291))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9260))
// CS Name: ::System.Net.NetworkInformation::AixNetworkInterfaceAPI*
class CORDL_TYPE AixNetworkInterfaceAPI : public ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI {
public:
  // Declarations
  /// @brief Method socket addr 0x29ec3a8 size 0xa0 virtual false final false
  static inline int32_t socket(::System::Net::NetworkInformation::AixAddressFamily family, int32_t type, int32_t protocol);

  /// @brief Method close addr 0x29ec448 size 0x78 virtual false final false
  static inline int32_t close(int32_t fd);

  /// @brief Method ioctl addr 0x29ec4c0 size 0xa0 virtual false final false
  static inline int32_t ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request, ByRef<int32_t> arg);

  /// @brief Method ioctl addr 0x29ec560 size 0xa0 virtual false final false
  static inline int32_t ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request, ByRef<::System::Net::NetworkInformation::AixStructs::ifconf> arg);

  /// @brief Method ioctl addr 0x29ec600 size 0xa0 virtual false final false
  static inline int32_t ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request, ByRef<::System::Net::NetworkInformation::AixStructs::ifreq_flags> arg);

  /// @brief Method ioctl addr 0x29ec6a0 size 0xa0 virtual false final false
  static inline int32_t ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request, ByRef<::System::Net::NetworkInformation::AixStructs::ifreq_mtu> arg);

  /// @brief Method ByteArrayCopy addr 0x29ec740 size 0x1c virtual false final false
  static inline void ByteArrayCopy(::cordl_internals::Ptr<uint8_t> dst, ::cordl_internals::Ptr<uint8_t> src, int32_t elements);

  /// @brief Method GetAllNetworkInterfaces addr 0x29ec75c size 0xe8c virtual true final false
  inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*> GetAllNetworkInterfaces();

  static inline ::System::Net::NetworkInformation::AixNetworkInterfaceAPI* New_ctor();

  /// @brief Method .ctor addr 0x29ed854 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AixNetworkInterfaceAPI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AixNetworkInterfaceAPI(AixNetworkInterfaceAPI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AixNetworkInterfaceAPI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AixNetworkInterfaceAPI(AixNetworkInterfaceAPI const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AixNetworkInterfaceAPI();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixNetworkInterfaceAPI, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::AixNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixNetworkInterfaceAPI*, "System.Net.NetworkInformation", "AixNetworkInterfaceAPI");
