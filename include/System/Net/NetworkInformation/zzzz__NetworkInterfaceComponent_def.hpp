#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/NetworkInterfaceComponent.hpp"
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
// Dependencies
namespace System::Net::NetworkInformation {
// Is value type: true
// CS Name: System.Net.NetworkInformation.NetworkInterfaceComponent
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkInterfaceComponent();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NetworkInterfaceComponent(int32_t value__) noexcept;

  /// @brief Field IPv4 value: I32(0)
  static ::System::Net::NetworkInformation::NetworkInterfaceComponent const IPv4;

  /// @brief Field IPv6 value: I32(1)
  static ::System::Net::NetworkInformation::NetworkInterfaceComponent const IPv6;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9773 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::NetworkInterfaceComponent, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::NetworkInterfaceComponent, 0x4>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::NetworkInterfaceComponent, "System.Net.NetworkInformation", "NetworkInterfaceComponent");
