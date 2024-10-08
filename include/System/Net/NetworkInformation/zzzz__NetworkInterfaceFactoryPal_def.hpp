#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/NetworkInterfaceFactoryPal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetworkInterfaceFactoryPal)
namespace System::Net::NetworkInformation {
class NetworkInterfaceFactory;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class NetworkInterfaceFactoryPal;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::NetworkInterfaceFactoryPal);
// Type: System.Net.NetworkInformation::NetworkInterfaceFactoryPal
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: ::System.Net.NetworkInformation::NetworkInterfaceFactoryPal*
class CORDL_TYPE NetworkInterfaceFactoryPal : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x4377158, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Net::NetworkInformation::NetworkInterfaceFactory* Create();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkInterfaceFactoryPal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkInterfaceFactoryPal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkInterfaceFactoryPal(NetworkInterfaceFactoryPal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkInterfaceFactoryPal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkInterfaceFactoryPal(NetworkInterfaceFactoryPal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9770 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::NetworkInterfaceFactoryPal, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::NetworkInterfaceFactoryPal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::NetworkInterfaceFactoryPal*, "System.Net.NetworkInformation", "NetworkInterfaceFactoryPal");
