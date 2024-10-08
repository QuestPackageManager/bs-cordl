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
// Type: System.Net.Sockets::SocketOptionName
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: true
// CS Name: ::System.Net.Sockets::SocketOptionName
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AcceptConnection value: static_cast<int32_t>(0x2)
  static ::System::Net::Sockets::SocketOptionName const AcceptConnection;

  /// @brief Field AddMembership value: static_cast<int32_t>(0xc)
  static ::System::Net::Sockets::SocketOptionName const AddMembership;

  /// @brief Field AddSourceMembership value: static_cast<int32_t>(0xf)
  static ::System::Net::Sockets::SocketOptionName const AddSourceMembership;

  /// @brief Field BlockSource value: static_cast<int32_t>(0x11)
  static ::System::Net::Sockets::SocketOptionName const BlockSource;

  /// @brief Field Broadcast value: static_cast<int32_t>(0x20)
  static ::System::Net::Sockets::SocketOptionName const Broadcast;

  /// @brief Field BsdUrgent value: static_cast<int32_t>(0x2)
  static ::System::Net::Sockets::SocketOptionName const BsdUrgent;

  /// @brief Field ChecksumCoverage value: static_cast<int32_t>(0x14)
  static ::System::Net::Sockets::SocketOptionName const ChecksumCoverage;

  /// @brief Field Debug value: static_cast<int32_t>(0x1)
  static ::System::Net::Sockets::SocketOptionName const Debug;

  /// @brief Field DontFragment value: static_cast<int32_t>(0xe)
  static ::System::Net::Sockets::SocketOptionName const DontFragment;

  /// @brief Field DontLinger value: static_cast<int32_t>(0xffffff7f)
  static ::System::Net::Sockets::SocketOptionName const DontLinger;

  /// @brief Field DontRoute value: static_cast<int32_t>(0x10)
  static ::System::Net::Sockets::SocketOptionName const DontRoute;

  /// @brief Field DropMembership value: static_cast<int32_t>(0xd)
  static ::System::Net::Sockets::SocketOptionName const DropMembership;

  /// @brief Field DropSourceMembership value: static_cast<int32_t>(0x10)
  static ::System::Net::Sockets::SocketOptionName const DropSourceMembership;

  /// @brief Field Error value: static_cast<int32_t>(0x1007)
  static ::System::Net::Sockets::SocketOptionName const Error;

  /// @brief Field ExclusiveAddressUse value: static_cast<int32_t>(0xfffffffb)
  static ::System::Net::Sockets::SocketOptionName const ExclusiveAddressUse;

  /// @brief Field Expedited value: static_cast<int32_t>(0x2)
  static ::System::Net::Sockets::SocketOptionName const Expedited;

  /// @brief Field HeaderIncluded value: static_cast<int32_t>(0x2)
  static ::System::Net::Sockets::SocketOptionName const HeaderIncluded;

  /// @brief Field HopLimit value: static_cast<int32_t>(0x15)
  static ::System::Net::Sockets::SocketOptionName const HopLimit;

  /// @brief Field IPOptions value: static_cast<int32_t>(0x1)
  static ::System::Net::Sockets::SocketOptionName const IPOptions;

  /// @brief Field IPProtectionLevel value: static_cast<int32_t>(0x17)
  static ::System::Net::Sockets::SocketOptionName const IPProtectionLevel;

  /// @brief Field IPv6Only value: static_cast<int32_t>(0x1b)
  static ::System::Net::Sockets::SocketOptionName const IPv6Only;

  /// @brief Field IpTimeToLive value: static_cast<int32_t>(0x4)
  static ::System::Net::Sockets::SocketOptionName const IpTimeToLive;

  /// @brief Field KeepAlive value: static_cast<int32_t>(0x8)
  static ::System::Net::Sockets::SocketOptionName const KeepAlive;

  /// @brief Field Linger value: static_cast<int32_t>(0x80)
  static ::System::Net::Sockets::SocketOptionName const Linger;

  /// @brief Field MaxConnections value: static_cast<int32_t>(0x7fffffff)
  static ::System::Net::Sockets::SocketOptionName const MaxConnections;

  /// @brief Field MulticastInterface value: static_cast<int32_t>(0x9)
  static ::System::Net::Sockets::SocketOptionName const MulticastInterface;

  /// @brief Field MulticastLoopback value: static_cast<int32_t>(0xb)
  static ::System::Net::Sockets::SocketOptionName const MulticastLoopback;

  /// @brief Field MulticastTimeToLive value: static_cast<int32_t>(0xa)
  static ::System::Net::Sockets::SocketOptionName const MulticastTimeToLive;

  /// @brief Field NoChecksum value: static_cast<int32_t>(0x1)
  static ::System::Net::Sockets::SocketOptionName const NoChecksum;

  /// @brief Field NoDelay value: static_cast<int32_t>(0x1)
  static ::System::Net::Sockets::SocketOptionName const NoDelay;

  /// @brief Field OutOfBandInline value: static_cast<int32_t>(0x100)
  static ::System::Net::Sockets::SocketOptionName const OutOfBandInline;

  /// @brief Field PacketInformation value: static_cast<int32_t>(0x13)
  static ::System::Net::Sockets::SocketOptionName const PacketInformation;

  /// @brief Field ReceiveBuffer value: static_cast<int32_t>(0x1002)
  static ::System::Net::Sockets::SocketOptionName const ReceiveBuffer;

  /// @brief Field ReceiveLowWater value: static_cast<int32_t>(0x1004)
  static ::System::Net::Sockets::SocketOptionName const ReceiveLowWater;

  /// @brief Field ReceiveTimeout value: static_cast<int32_t>(0x1006)
  static ::System::Net::Sockets::SocketOptionName const ReceiveTimeout;

  /// @brief Field ReuseAddress value: static_cast<int32_t>(0x4)
  static ::System::Net::Sockets::SocketOptionName const ReuseAddress;

  /// @brief Field ReuseUnicastPort value: static_cast<int32_t>(0x3007)
  static ::System::Net::Sockets::SocketOptionName const ReuseUnicastPort;

  /// @brief Field SendBuffer value: static_cast<int32_t>(0x1001)
  static ::System::Net::Sockets::SocketOptionName const SendBuffer;

  /// @brief Field SendLowWater value: static_cast<int32_t>(0x1003)
  static ::System::Net::Sockets::SocketOptionName const SendLowWater;

  /// @brief Field SendTimeout value: static_cast<int32_t>(0x1005)
  static ::System::Net::Sockets::SocketOptionName const SendTimeout;

  /// @brief Field Type value: static_cast<int32_t>(0x1008)
  static ::System::Net::Sockets::SocketOptionName const Type;

  /// @brief Field TypeOfService value: static_cast<int32_t>(0x3)
  static ::System::Net::Sockets::SocketOptionName const TypeOfService;

  /// @brief Field UnblockSource value: static_cast<int32_t>(0x12)
  static ::System::Net::Sockets::SocketOptionName const UnblockSource;

  /// @brief Field UpdateAcceptContext value: static_cast<int32_t>(0x700b)
  static ::System::Net::Sockets::SocketOptionName const UpdateAcceptContext;

  /// @brief Field UpdateConnectContext value: static_cast<int32_t>(0x7010)
  static ::System::Net::Sockets::SocketOptionName const UpdateConnectContext;

  /// @brief Field UseLoopback value: static_cast<int32_t>(0x40)
  static ::System::Net::Sockets::SocketOptionName const UseLoopback;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9836 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketOptionName, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketOptionName, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketOptionName, "System.Net.Sockets", "SocketOptionName");
