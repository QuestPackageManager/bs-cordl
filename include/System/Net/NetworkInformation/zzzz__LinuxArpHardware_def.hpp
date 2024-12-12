#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/LinuxArpHardware.hpp"
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
// Dependencies
namespace System::Net::NetworkInformation {
// Is value type: true
// CS Name: System.Net.NetworkInformation.LinuxArpHardware
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LinuxArpHardware();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LinuxArpHardware(int32_t value__) noexcept;

  /// @brief Field ATM value: I32(19)
  static ::System::Net::NetworkInformation::LinuxArpHardware const ATM;

  /// @brief Field CSLIP value: I32(257)
  static ::System::Net::NetworkInformation::LinuxArpHardware const CSLIP;

  /// @brief Field CSLIP6 value: I32(259)
  static ::System::Net::NetworkInformation::LinuxArpHardware const CSLIP6;

  /// @brief Field EETHER value: I32(2)
  static ::System::Net::NetworkInformation::LinuxArpHardware const EETHER;

  /// @brief Field ETHER value: I32(1)
  static ::System::Net::NetworkInformation::LinuxArpHardware const ETHER;

  /// @brief Field FDDI value: I32(774)
  static ::System::Net::NetworkInformation::LinuxArpHardware const FDDI;

  /// @brief Field IP6GRE value: I32(823)
  static ::System::Net::NetworkInformation::LinuxArpHardware const IP6GRE;

  /// @brief Field IPDDP value: I32(777)
  static ::System::Net::NetworkInformation::LinuxArpHardware const IPDDP;

  /// @brief Field IPGRE value: I32(778)
  static ::System::Net::NetworkInformation::LinuxArpHardware const IPGRE;

  /// @brief Field LOOPBACK value: I32(772)
  static ::System::Net::NetworkInformation::LinuxArpHardware const LOOPBACK;

  /// @brief Field PPP value: I32(512)
  static ::System::Net::NetworkInformation::LinuxArpHardware const PPP;

  /// @brief Field PRONET value: I32(4)
  static ::System::Net::NetworkInformation::LinuxArpHardware const PRONET;

  /// @brief Field SIT value: I32(776)
  static ::System::Net::NetworkInformation::LinuxArpHardware const SIT;

  /// @brief Field SLIP value: I32(256)
  static ::System::Net::NetworkInformation::LinuxArpHardware const SLIP;

  /// @brief Field SLIP6 value: I32(258)
  static ::System::Net::NetworkInformation::LinuxArpHardware const SLIP6;

  /// @brief Field TUNNEL value: I32(768)
  static ::System::Net::NetworkInformation::LinuxArpHardware const TUNNEL;

  /// @brief Field TUNNEL6 value: I32(769)
  static ::System::Net::NetworkInformation::LinuxArpHardware const TUNNEL6;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9792 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::LinuxArpHardware, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::LinuxArpHardware, 0x4>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::LinuxArpHardware, "System.Net.NetworkInformation", "LinuxArpHardware");
