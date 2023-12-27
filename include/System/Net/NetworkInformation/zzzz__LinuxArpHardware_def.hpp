#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LinuxArpHardware)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct LinuxArpHardware;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::LinuxArpHardware);
// Type: System.Net.NetworkInformation::LinuxArpHardware
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9276))
// CS Name: ::System.Net.NetworkInformation::LinuxArpHardware
struct CORDL_TYPE LinuxArpHardware {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LinuxArpHardware_Unwrapped
  enum struct __LinuxArpHardware_Unwrapped : int32_t {
    __E_ETHER = static_cast<int32_t>(0x1),
    __E_EETHER = static_cast<int32_t>(0x2),
    __E_PRONET = static_cast<int32_t>(0x4),
    __E_ATM = static_cast<int32_t>(0x13),
    __E_SLIP = static_cast<int32_t>(0x100),
    __E_CSLIP = static_cast<int32_t>(0x101),
    __E_SLIP6 = static_cast<int32_t>(0x102),
    __E_CSLIP6 = static_cast<int32_t>(0x103),
    __E_PPP = static_cast<int32_t>(0x200),
    __E_LOOPBACK = static_cast<int32_t>(0x304),
    __E_FDDI = static_cast<int32_t>(0x306),
    __E_TUNNEL = static_cast<int32_t>(0x300),
    __E_TUNNEL6 = static_cast<int32_t>(0x301),
    __E_SIT = static_cast<int32_t>(0x308),
    __E_IPDDP = static_cast<int32_t>(0x309),
    __E_IPGRE = static_cast<int32_t>(0x30a),
    __E_IP6GRE = static_cast<int32_t>(0x337),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LinuxArpHardware_Unwrapped() const noexcept {
    return static_cast<__LinuxArpHardware_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LinuxArpHardware(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LinuxArpHardware();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ETHER value: static_cast<int32_t>(0x1)
  static ::System::Net::NetworkInformation::LinuxArpHardware const ETHER;

  /// @brief Field EETHER value: static_cast<int32_t>(0x2)
  static ::System::Net::NetworkInformation::LinuxArpHardware const EETHER;

  /// @brief Field PRONET value: static_cast<int32_t>(0x4)
  static ::System::Net::NetworkInformation::LinuxArpHardware const PRONET;

  /// @brief Field ATM value: static_cast<int32_t>(0x13)
  static ::System::Net::NetworkInformation::LinuxArpHardware const ATM;

  /// @brief Field SLIP value: static_cast<int32_t>(0x100)
  static ::System::Net::NetworkInformation::LinuxArpHardware const SLIP;

  /// @brief Field CSLIP value: static_cast<int32_t>(0x101)
  static ::System::Net::NetworkInformation::LinuxArpHardware const CSLIP;

  /// @brief Field SLIP6 value: static_cast<int32_t>(0x102)
  static ::System::Net::NetworkInformation::LinuxArpHardware const SLIP6;

  /// @brief Field CSLIP6 value: static_cast<int32_t>(0x103)
  static ::System::Net::NetworkInformation::LinuxArpHardware const CSLIP6;

  /// @brief Field PPP value: static_cast<int32_t>(0x200)
  static ::System::Net::NetworkInformation::LinuxArpHardware const PPP;

  /// @brief Field LOOPBACK value: static_cast<int32_t>(0x304)
  static ::System::Net::NetworkInformation::LinuxArpHardware const LOOPBACK;

  /// @brief Field FDDI value: static_cast<int32_t>(0x306)
  static ::System::Net::NetworkInformation::LinuxArpHardware const FDDI;

  /// @brief Field TUNNEL value: static_cast<int32_t>(0x300)
  static ::System::Net::NetworkInformation::LinuxArpHardware const TUNNEL;

  /// @brief Field TUNNEL6 value: static_cast<int32_t>(0x301)
  static ::System::Net::NetworkInformation::LinuxArpHardware const TUNNEL6;

  /// @brief Field SIT value: static_cast<int32_t>(0x308)
  static ::System::Net::NetworkInformation::LinuxArpHardware const SIT;

  /// @brief Field IPDDP value: static_cast<int32_t>(0x309)
  static ::System::Net::NetworkInformation::LinuxArpHardware const IPDDP;

  /// @brief Field IPGRE value: static_cast<int32_t>(0x30a)
  static ::System::Net::NetworkInformation::LinuxArpHardware const IPGRE;

  /// @brief Field IP6GRE value: static_cast<int32_t>(0x337)
  static ::System::Net::NetworkInformation::LinuxArpHardware const IP6GRE;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::LinuxArpHardware, 0x4>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::LinuxArpHardware, "System.Net.NetworkInformation", "LinuxArpHardware");
