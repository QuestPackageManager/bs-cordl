#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/NetworkInterfaceFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetworkInterfaceFactory)
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class NetworkInterfaceFactory;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::NetworkInterfaceFactory);
// Dependencies System.Object
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.NetworkInterfaceFactory
class CORDL_TYPE NetworkInterfaceFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x43fba6c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Net::NetworkInformation::NetworkInterfaceFactory* Create();

  /// @brief Method GetAllNetworkInterfaces, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*> GetAllNetworkInterfaces();

  static inline ::System::Net::NetworkInformation::NetworkInterfaceFactory* New_ctor();

  /// @brief Method .ctor, addr 0x43fbab8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkInterfaceFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkInterfaceFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkInterfaceFactory(NetworkInterfaceFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkInterfaceFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkInterfaceFactory(NetworkInterfaceFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9804 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::NetworkInterfaceFactory, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::NetworkInterfaceFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::NetworkInterfaceFactory*, "System.Net.NetworkInformation", "NetworkInterfaceFactory");
