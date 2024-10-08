#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/NetworkInterfaceType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkInterfaceType)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct NetworkInterfaceType;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::NetworkInterfaceType);
// Type: System.Net.NetworkInformation::NetworkInterfaceType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: true
// CS Name: ::System.Net.NetworkInformation::NetworkInterfaceType
struct CORDL_TYPE NetworkInterfaceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NetworkInterfaceType_Unwrapped
  enum struct __NetworkInterfaceType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x1),
    __E_Ethernet = static_cast<int32_t>(0x6),
    __E_TokenRing = static_cast<int32_t>(0x9),
    __E_Fddi = static_cast<int32_t>(0xf),
    __E_BasicIsdn = static_cast<int32_t>(0x14),
    __E_PrimaryIsdn = static_cast<int32_t>(0x15),
    __E_Ppp = static_cast<int32_t>(0x17),
    __E_Loopback = static_cast<int32_t>(0x18),
    __E_Ethernet3Megabit = static_cast<int32_t>(0x1a),
    __E_Slip = static_cast<int32_t>(0x1c),
    __E_Atm = static_cast<int32_t>(0x25),
    __E_GenericModem = static_cast<int32_t>(0x30),
    __E_FastEthernetT = static_cast<int32_t>(0x3e),
    __E_Isdn = static_cast<int32_t>(0x3f),
    __E_FastEthernetFx = static_cast<int32_t>(0x45),
    __E_Wireless80211 = static_cast<int32_t>(0x47),
    __E_AsymmetricDsl = static_cast<int32_t>(0x5e),
    __E_RateAdaptDsl = static_cast<int32_t>(0x5f),
    __E_SymmetricDsl = static_cast<int32_t>(0x60),
    __E_VeryHighSpeedDsl = static_cast<int32_t>(0x61),
    __E_IPOverAtm = static_cast<int32_t>(0x72),
    __E_GigabitEthernet = static_cast<int32_t>(0x75),
    __E_Tunnel = static_cast<int32_t>(0x83),
    __E_MultiRateSymmetricDsl = static_cast<int32_t>(0x8f),
    __E_HighPerformanceSerialBus = static_cast<int32_t>(0x90),
    __E_Wman = static_cast<int32_t>(0xed),
    __E_Wwanpp = static_cast<int32_t>(0xf3),
    __E_Wwanpp2 = static_cast<int32_t>(0xf4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NetworkInterfaceType_Unwrapped() const noexcept {
    return static_cast<__NetworkInterfaceType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkInterfaceType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NetworkInterfaceType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AsymmetricDsl value: static_cast<int32_t>(0x5e)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const AsymmetricDsl;

  /// @brief Field Atm value: static_cast<int32_t>(0x25)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const Atm;

  /// @brief Field BasicIsdn value: static_cast<int32_t>(0x14)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const BasicIsdn;

  /// @brief Field Ethernet value: static_cast<int32_t>(0x6)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const Ethernet;

  /// @brief Field Ethernet3Megabit value: static_cast<int32_t>(0x1a)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const Ethernet3Megabit;

  /// @brief Field FastEthernetFx value: static_cast<int32_t>(0x45)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const FastEthernetFx;

  /// @brief Field FastEthernetT value: static_cast<int32_t>(0x3e)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const FastEthernetT;

  /// @brief Field Fddi value: static_cast<int32_t>(0xf)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const Fddi;

  /// @brief Field GenericModem value: static_cast<int32_t>(0x30)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const GenericModem;

  /// @brief Field GigabitEthernet value: static_cast<int32_t>(0x75)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const GigabitEthernet;

  /// @brief Field HighPerformanceSerialBus value: static_cast<int32_t>(0x90)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const HighPerformanceSerialBus;

  /// @brief Field IPOverAtm value: static_cast<int32_t>(0x72)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const IPOverAtm;

  /// @brief Field Isdn value: static_cast<int32_t>(0x3f)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const Isdn;

  /// @brief Field Loopback value: static_cast<int32_t>(0x18)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const Loopback;

  /// @brief Field MultiRateSymmetricDsl value: static_cast<int32_t>(0x8f)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const MultiRateSymmetricDsl;

  /// @brief Field Ppp value: static_cast<int32_t>(0x17)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const Ppp;

  /// @brief Field PrimaryIsdn value: static_cast<int32_t>(0x15)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const PrimaryIsdn;

  /// @brief Field RateAdaptDsl value: static_cast<int32_t>(0x5f)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const RateAdaptDsl;

  /// @brief Field Slip value: static_cast<int32_t>(0x1c)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const Slip;

  /// @brief Field SymmetricDsl value: static_cast<int32_t>(0x60)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const SymmetricDsl;

  /// @brief Field TokenRing value: static_cast<int32_t>(0x9)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const TokenRing;

  /// @brief Field Tunnel value: static_cast<int32_t>(0x83)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const Tunnel;

  /// @brief Field Unknown value: static_cast<int32_t>(0x1)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const Unknown;

  /// @brief Field VeryHighSpeedDsl value: static_cast<int32_t>(0x61)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const VeryHighSpeedDsl;

  /// @brief Field Wireless80211 value: static_cast<int32_t>(0x47)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const Wireless80211;

  /// @brief Field Wman value: static_cast<int32_t>(0xed)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const Wman;

  /// @brief Field Wwanpp value: static_cast<int32_t>(0xf3)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const Wwanpp;

  /// @brief Field Wwanpp2 value: static_cast<int32_t>(0xf4)
  static ::System::Net::NetworkInformation::NetworkInterfaceType const Wwanpp2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9744 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::NetworkInterfaceType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::NetworkInterfaceType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::NetworkInterfaceType, "System.Net.NetworkInformation", "NetworkInterfaceType");
