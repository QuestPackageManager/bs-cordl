#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NetworkInterface)
namespace System::Net::NetworkInformation {
struct OperationalStatus;
}
namespace System::Net::NetworkInformation {
struct NetworkInterfaceType;
}
namespace System::Net::NetworkInformation {
class IPInterfaceProperties;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::NetworkInterface);
// Type: System.Net.NetworkInformation::NetworkInterface
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9252))
// CS Name: ::System.Net.NetworkInformation::NetworkInterface*
class CORDL_TYPE NetworkInterface : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_OperationalStatus))::System::Net::NetworkInformation::OperationalStatus OperationalStatus;

  __declspec(property(get = get_NetworkInterfaceType))::System::Net::NetworkInformation::NetworkInterfaceType NetworkInterfaceType;

  /// @brief Method GetAllNetworkInterfaces, addr 0x29eb788, size 0x4c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*> GetAllNetworkInterfaces();

  /// @brief Method get_Name, addr 0x29eb8d0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method GetIPProperties, addr 0x29eb910, size 0x40, virtual true, abstract: false, final false
  inline ::System::Net::NetworkInformation::IPInterfaceProperties* GetIPProperties();

  /// @brief Method get_OperationalStatus, addr 0x29eb950, size 0x40, virtual true, abstract: false, final false
  inline ::System::Net::NetworkInformation::OperationalStatus get_OperationalStatus();

  /// @brief Method get_NetworkInterfaceType, addr 0x29eb990, size 0x40, virtual true, abstract: false, final false
  inline ::System::Net::NetworkInformation::NetworkInterfaceType get_NetworkInterfaceType();

  static inline ::System::Net::NetworkInformation::NetworkInterface* New_ctor();

  /// @brief Method .ctor, addr 0x29eb9d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NetworkInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkInterface(NetworkInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkInterface(NetworkInterface const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkInterface();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::NetworkInterface, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::NetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::NetworkInterface*, "System.Net.NetworkInformation", "NetworkInterface");
