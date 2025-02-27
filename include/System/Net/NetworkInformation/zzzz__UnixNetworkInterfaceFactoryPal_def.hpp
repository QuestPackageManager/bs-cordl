#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/UnixNetworkInterfaceFactoryPal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnixNetworkInterfaceFactoryPal)
namespace System::Net::NetworkInformation {
class NetworkInterfaceFactory;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixNetworkInterfaceFactoryPal;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal);
// Dependencies System.Object
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.UnixNetworkInterfaceFactoryPal
class CORDL_TYPE UnixNetworkInterfaceFactoryPal : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x43fbac0, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Net::NetworkInformation::NetworkInterfaceFactory* Create();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnixNetworkInterfaceFactoryPal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterfaceFactoryPal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnixNetworkInterfaceFactoryPal(UnixNetworkInterfaceFactoryPal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterfaceFactoryPal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnixNetworkInterfaceFactoryPal(UnixNetworkInterfaceFactoryPal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9814 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal*, "System.Net.NetworkInformation", "UnixNetworkInterfaceFactoryPal");
