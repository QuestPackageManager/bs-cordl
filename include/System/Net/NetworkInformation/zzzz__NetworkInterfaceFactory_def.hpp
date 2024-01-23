#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Net.NetworkInformation::NetworkInterfaceFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9283))
// CS Name: ::System.Net.NetworkInformation::NetworkInterfaceFactory*
class CORDL_TYPE NetworkInterfaceFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetAllNetworkInterfaces, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*> GetAllNetworkInterfaces();

  /// @brief Method Create, addr 0x29f0290, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Net::NetworkInformation::NetworkInterfaceFactory* Create();

  static inline ::System::Net::NetworkInformation::NetworkInterfaceFactory* New_ctor();

  /// @brief Method .ctor, addr 0x29f02e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NetworkInterfaceFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkInterfaceFactory(NetworkInterfaceFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkInterfaceFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkInterfaceFactory(NetworkInterfaceFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkInterfaceFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::NetworkInterfaceFactory, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::NetworkInterfaceFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::NetworkInterfaceFactory*, "System.Net.NetworkInformation", "NetworkInterfaceFactory");
