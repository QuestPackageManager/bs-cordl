#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MacOsArpHardware)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct MacOsArpHardware;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::MacOsArpHardware);
// Type: System.Net.NetworkInformation::MacOsArpHardware
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7291))
// CS Name: ::System.Net.NetworkInformation::MacOsArpHardware
struct CORDL_TYPE MacOsArpHardware {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MacOsArpHardware_Unwrapped
  enum struct __MacOsArpHardware_Unwrapped : int32_t {
    __E_ETHER = static_cast<int32_t>(0x6),
    __E_ATM = static_cast<int32_t>(0x25),
    __E_SLIP = static_cast<int32_t>(0x1c),
    __E_PPP = static_cast<int32_t>(0x17),
    __E_LOOPBACK = static_cast<int32_t>(0x18),
    __E_FDDI = static_cast<int32_t>(0xf),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MacOsArpHardware_Unwrapped() const noexcept {
    return static_cast<__MacOsArpHardware_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MacOsArpHardware(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MacOsArpHardware();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ETHER value: static_cast<int32_t>(0x6)
  static ::System::Net::NetworkInformation::MacOsArpHardware const ETHER;

  /// @brief Field ATM value: static_cast<int32_t>(0x25)
  static ::System::Net::NetworkInformation::MacOsArpHardware const ATM;

  /// @brief Field SLIP value: static_cast<int32_t>(0x1c)
  static ::System::Net::NetworkInformation::MacOsArpHardware const SLIP;

  /// @brief Field PPP value: static_cast<int32_t>(0x17)
  static ::System::Net::NetworkInformation::MacOsArpHardware const PPP;

  /// @brief Field LOOPBACK value: static_cast<int32_t>(0x18)
  static ::System::Net::NetworkInformation::MacOsArpHardware const LOOPBACK;

  /// @brief Field FDDI value: static_cast<int32_t>(0xf)
  static ::System::Net::NetworkInformation::MacOsArpHardware const FDDI;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::MacOsArpHardware, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::MacOsArpHardware, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsArpHardware, "System.Net.NetworkInformation", "MacOsArpHardware");
