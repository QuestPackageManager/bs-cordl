#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkInterfaceComponent)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct NetworkInterfaceComponent;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::NetworkInterfaceComponent);
// Type: System.Net.NetworkInformation::NetworkInterfaceComponent
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9253))
// CS Name: ::System.Net.NetworkInformation::NetworkInterfaceComponent
struct CORDL_TYPE NetworkInterfaceComponent {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NetworkInterfaceComponent_Unwrapped
  enum struct __NetworkInterfaceComponent_Unwrapped : int32_t {
    __E_IPv4 = static_cast<int32_t>(0x0),
    __E_IPv6 = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NetworkInterfaceComponent_Unwrapped() const noexcept {
    return static_cast<__NetworkInterfaceComponent_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NetworkInterfaceComponent(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkInterfaceComponent();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field IPv4 value: static_cast<int32_t>(0x0)
  static ::System::Net::NetworkInformation::NetworkInterfaceComponent const IPv4;

  /// @brief Field IPv6 value: static_cast<int32_t>(0x1)
  static ::System::Net::NetworkInformation::NetworkInterfaceComponent const IPv6;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::NetworkInterfaceComponent, 0x4>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::NetworkInterfaceComponent, "System.Net.NetworkInformation", "NetworkInterfaceComponent");
