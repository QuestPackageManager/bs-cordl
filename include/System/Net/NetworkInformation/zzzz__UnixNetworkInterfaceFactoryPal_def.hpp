#pragma once
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
// Type: System.Net.NetworkInformation::UnixNetworkInterfaceFactoryPal
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8130))
// CS Name: ::System.Net.NetworkInformation::UnixNetworkInterfaceFactoryPal*
class CORDL_TYPE UnixNetworkInterfaceFactoryPal : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create addr 0x2873a68 size 0xf4 virtual false final false
  static inline ::System::Net::NetworkInformation::NetworkInterfaceFactory* Create();

  // Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterfaceFactoryPal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnixNetworkInterfaceFactoryPal(UnixNetworkInterfaceFactoryPal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterfaceFactoryPal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnixNetworkInterfaceFactoryPal(UnixNetworkInterfaceFactoryPal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnixNetworkInterfaceFactoryPal();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal*, "System.Net.NetworkInformation", "UnixNetworkInterfaceFactoryPal");
