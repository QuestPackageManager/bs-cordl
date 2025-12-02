#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketOptionName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SocketOptionName)
// Forward declare root types
namespace System::Net::Sockets {
struct SocketOptionName;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::SocketOptionName);
// Dependencies
namespace System::Net::Sockets {
// Is value type: true
// CS Name: System.Net.Sockets.SocketOptionName
struct CORDL_TYPE SocketOptionName {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SocketOptionName_Unwrapped
  enum struct __SocketOptionName_Unwrapped : int32_t {
    __E_Debug = static_cast<int32_t>(0x1),
    __E_AcceptConnection = static_cast<int32_t>(0x2),
    __E_ReuseAddress = static_cast<int32_t>(0x4),
    __E_KeepAlive = static_cast<int32_t>(0x8),
    __E_DontRoute = static_cast<int32_t>(0x10),
    __E_Broadcast = static_cast<int32_t>(0x20),
    __E_UseLoopback = static_cast<int32_t>(0x40),
    __E_Linger = static_cast<int32_t>(0x80),
    __E_OutOfBandInline = static_cast<int32_t>(0x100),
    __E_DontLinger = static_cast<int32_t>(0xffffff7f),
    __E_ExclusiveAddressUse = static_cast<int32_t>(0xfffffffb),
    __E_SendBuffer = static_cast<int32_t>(0x1001),
    __E_ReceiveBuffer = static_cast<int32_t>(0x1002),
    __E_SendLowWater = static_cast<int32_t>(0x1003),
    __E_ReceiveLowWater = static_cast<int32_t>(0x1004),
    __E_SendTimeout = static_cast<int32_t>(0x1005),
    __E_ReceiveTimeout = static_cast<int32_t>(0x1006),
    __E_Error = static_cast<int32_t>(0x1007),
    __E_Type = static_cast<int32_t>(0x1008),
    __E_ReuseUnicastPort = static_cast<int32_t>(0x3007),
    __E_MaxConnections = static_cast<int32_t>(0x7fffffff),
    __E_IPOptions = static_cast<int32_t>(0x1),
    __E_HeaderIncluded = static_cast<int32_t>(0x2),
    __E_TypeOfService = static_cast<int32_t>(0x3),
    __E_IpTimeToLive = static_cast<int32_t>(0x4),
    __E_MulticastInterface = static_cast<int32_t>(0x9),
    __E_MulticastTimeToLive = static_cast<int32_t>(0xa),
    __E_MulticastLoopback = static_cast<int32_t>(0xb),
    __E_AddMembership = static_cast<int32_t>(0xc),
    __E_DropMembership = static_cast<int32_t>(0xd),
    __E_DontFragment = static_cast<int32_t>(0xe),
    __E_AddSourceMembership = static_cast<int32_t>(0xf),
    __E_DropSourceMembership = static_cast<int32_t>(0x10),
    __E_BlockSource = static_cast<int32_t>(0x11),
    __E_UnblockSource = static_cast<int32_t>(0x12),
    __E_PacketInformation = static_cast<int32_t>(0x13),
    __E_HopLimit = static_cast<int32_t>(0x15),
    __E_IPProtectionLevel = static_cast<int32_t>(0x17),
    __E_IPv6Only = static_cast<int32_t>(0x1b),
    __E_NoDelay = static_cast<int32_t>(0x1),
    __E_BsdUrgent = static_cast<int32_t>(0x2),
    __E_Expedited = static_cast<int32_t>(0x2),
    __E_NoChecksum = static_cast<int32_t>(0x1),
    __E_ChecksumCoverage = static_cast<int32_t>(0x14),
    __E_UpdateAcceptContext = static_cast<int32_t>(0x700b),
    __E_UpdateConnectContext = static_cast<int32_t>(0x7010),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SocketOptionName_Unwrapped() const noexcept {
    return static_cast<__SocketOptionName_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SocketOptionName();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SocketOptionName(int32_t value__) noexcept;

  /// @brief Field AcceptConnection value: I32(2)
  static ::System::Net::Sockets::SocketOptionName const AcceptConnection;

  /// @brief Field AddMembership value: I32(12)
  static ::System::Net::Sockets::SocketOptionName const AddMembership;

  /// @brief Field AddSourceMembership value: I32(15)
  static ::System::Net::Sockets::SocketOptionName const AddSourceMembership;

  /// @brief Field BlockSource value: I32(17)
  static ::System::Net::Sockets::SocketOptionName const BlockSource;

  /// @brief Field Broadcast value: I32(32)
  static ::System::Net::Sockets::SocketOptionName const Broadcast;

  /// @brief Field BsdUrgent value: I32(2)
  static ::System::Net::Sockets::SocketOptionName const BsdUrgent;

  /// @brief Field ChecksumCoverage value: I32(20)
  static ::System::Net::Sockets::SocketOptionName const ChecksumCoverage;

  /// @brief Field Debug value: I32(1)
  static ::System::Net::Sockets::SocketOptionName const Debug;

  /// @brief Field DontFragment value: I32(14)
  static ::System::Net::Sockets::SocketOptionName const DontFragment;

  /// @brief Field DontLinger value: I32(-129)
  static ::System::Net::Sockets::SocketOptionName const DontLinger;

  /// @brief Field DontRoute value: I32(16)
  static ::System::Net::Sockets::SocketOptionName const DontRoute;

  /// @brief Field DropMembership value: I32(13)
  static ::System::Net::Sockets::SocketOptionName const DropMembership;

  /// @brief Field DropSourceMembership value: I32(16)
  static ::System::Net::Sockets::SocketOptionName const DropSourceMembership;

  /// @brief Field Error value: I32(4103)
  static ::System::Net::Sockets::SocketOptionName const Error;

  /// @brief Field ExclusiveAddressUse value: I32(-5)
  static ::System::Net::Sockets::SocketOptionName const ExclusiveAddressUse;

  /// @brief Field Expedited value: I32(2)
  static ::System::Net::Sockets::SocketOptionName const Expedited;

  /// @brief Field HeaderIncluded value: I32(2)
  static ::System::Net::Sockets::SocketOptionName const HeaderIncluded;

  /// @brief Field HopLimit value: I32(21)
  static ::System::Net::Sockets::SocketOptionName const HopLimit;

  /// @brief Field IPOptions value: I32(1)
  static ::System::Net::Sockets::SocketOptionName const IPOptions;

  /// @brief Field IPProtectionLevel value: I32(23)
  static ::System::Net::Sockets::SocketOptionName const IPProtectionLevel;

  /// @brief Field IPv6Only value: I32(27)
  static ::System::Net::Sockets::SocketOptionName const IPv6Only;

  /// @brief Field IpTimeToLive value: I32(4)
  static ::System::Net::Sockets::SocketOptionName const IpTimeToLive;

  /// @brief Field KeepAlive value: I32(8)
  static ::System::Net::Sockets::SocketOptionName const KeepAlive;

  /// @brief Field Linger value: I32(128)
  static ::System::Net::Sockets::SocketOptionName const Linger;

  /// @brief Field MaxConnections value: I32(2147483647)
  static ::System::Net::Sockets::SocketOptionName const MaxConnections;

  /// @brief Field MulticastInterface value: I32(9)
  static ::System::Net::Sockets::SocketOptionName const MulticastInterface;

  /// @brief Field MulticastLoopback value: I32(11)
  static ::System::Net::Sockets::SocketOptionName const MulticastLoopback;

  /// @brief Field MulticastTimeToLive value: I32(10)
  static ::System::Net::Sockets::SocketOptionName const MulticastTimeToLive;

  /// @brief Field NoChecksum value: I32(1)
  static ::System::Net::Sockets::SocketOptionName const NoChecksum;

  /// @brief Field NoDelay value: I32(1)
  static ::System::Net::Sockets::SocketOptionName const NoDelay;

  /// @brief Field OutOfBandInline value: I32(256)
  static ::System::Net::Sockets::SocketOptionName const OutOfBandInline;

  /// @brief Field PacketInformation value: I32(19)
  static ::System::Net::Sockets::SocketOptionName const PacketInformation;

  /// @brief Field ReceiveBuffer value: I32(4098)
  static ::System::Net::Sockets::SocketOptionName const ReceiveBuffer;

  /// @brief Field ReceiveLowWater value: I32(4100)
  static ::System::Net::Sockets::SocketOptionName const ReceiveLowWater;

  /// @brief Field ReceiveTimeout value: I32(4102)
  static ::System::Net::Sockets::SocketOptionName const ReceiveTimeout;

  /// @brief Field ReuseAddress value: I32(4)
  static ::System::Net::Sockets::SocketOptionName const ReuseAddress;

  /// @brief Field ReuseUnicastPort value: I32(12295)
  static ::System::Net::Sockets::SocketOptionName const ReuseUnicastPort;

  /// @brief Field SendBuffer value: I32(4097)
  static ::System::Net::Sockets::SocketOptionName const SendBuffer;

  /// @brief Field SendLowWater value: I32(4099)
  static ::System::Net::Sockets::SocketOptionName const SendLowWater;

  /// @brief Field SendTimeout value: I32(4101)
  static ::System::Net::Sockets::SocketOptionName const SendTimeout;

  /// @brief Field Type value: I32(4104)
  static ::System::Net::Sockets::SocketOptionName const Type;

  /// @brief Field TypeOfService value: I32(3)
  static ::System::Net::Sockets::SocketOptionName const TypeOfService;

  /// @brief Field UnblockSource value: I32(18)
  static ::System::Net::Sockets::SocketOptionName const UnblockSource;

  /// @brief Field UpdateAcceptContext value: I32(28683)
  static ::System::Net::Sockets::SocketOptionName const UpdateAcceptContext;

  /// @brief Field UpdateConnectContext value: I32(28688)
  static ::System::Net::Sockets::SocketOptionName const UpdateConnectContext;

  /// @brief Field UseLoopback value: I32(64)
  static ::System::Net::Sockets::SocketOptionName const UseLoopback;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11746 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::SocketOptionName, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketOptionName, 0x4>, "Size mismatch!");

} // namespace System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketOptionName, "System.Net.Sockets", "SocketOptionName");
