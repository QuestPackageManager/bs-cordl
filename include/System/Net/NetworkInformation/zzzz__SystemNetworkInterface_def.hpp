#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/SystemNetworkInterface.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SystemNetworkInterface)
namespace System::Net::NetworkInformation {
class NetworkInterfaceFactory;
}
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class SystemNetworkInterface;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::SystemNetworkInterface);
// Dependencies System.Object
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.SystemNetworkInterface
class CORDL_TYPE SystemNetworkInterface : public ::System::Object {
public:
  // Declarations
  /// @brief Field nif, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_nif, put = setStaticF_nif)) ::System::Net::NetworkInformation::NetworkInterfaceFactory* nif;

  /// @brief Method GetNetworkInterfaces, addr 0x43e9810, size 0xfc, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*> GetNetworkInterfaces();

  static inline ::System::Net::NetworkInformation::NetworkInterfaceFactory* getStaticF_nif();

  static inline void setStaticF_nif(::System::Net::NetworkInformation::NetworkInterfaceFactory* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemNetworkInterface();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SystemNetworkInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemNetworkInterface(SystemNetworkInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemNetworkInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemNetworkInterface(SystemNetworkInterface const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9803 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::SystemNetworkInterface, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::SystemNetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::SystemNetworkInterface*, "System.Net.NetworkInformation", "SystemNetworkInterface");
