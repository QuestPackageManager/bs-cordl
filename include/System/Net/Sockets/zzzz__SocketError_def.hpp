#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SocketError)
// Forward declare root types
namespace System::Net::Sockets {
struct SocketError;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::SocketError);
// Dependencies
namespace System::Net::Sockets {
// Is value type: true
// CS Name: System.Net.Sockets.SocketError
struct CORDL_TYPE SocketError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SocketError_Unwrapped
  enum struct __SocketError_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_SocketError = static_cast<int32_t>(0xffffffff),
    __E_Interrupted = static_cast<int32_t>(0x2714),
    __E_AccessDenied = static_cast<int32_t>(0x271d),
    __E_Fault = static_cast<int32_t>(0x271e),
    __E_InvalidArgument = static_cast<int32_t>(0x2726),
    __E_TooManyOpenSockets = static_cast<int32_t>(0x2728),
    __E_WouldBlock = static_cast<int32_t>(0x2733),
    __E_InProgress = static_cast<int32_t>(0x2734),
    __E_AlreadyInProgress = static_cast<int32_t>(0x2735),
    __E_NotSocket = static_cast<int32_t>(0x2736),
    __E_DestinationAddressRequired = static_cast<int32_t>(0x2737),
    __E_MessageSize = static_cast<int32_t>(0x2738),
    __E_ProtocolType = static_cast<int32_t>(0x2739),
    __E_ProtocolOption = static_cast<int32_t>(0x273a),
    __E_ProtocolNotSupported = static_cast<int32_t>(0x273b),
    __E_SocketNotSupported = static_cast<int32_t>(0x273c),
    __E_OperationNotSupported = static_cast<int32_t>(0x273d),
    __E_ProtocolFamilyNotSupported = static_cast<int32_t>(0x273e),
    __E_AddressFamilyNotSupported = static_cast<int32_t>(0x273f),
    __E_AddressAlreadyInUse = static_cast<int32_t>(0x2740),
    __E_AddressNotAvailable = static_cast<int32_t>(0x2741),
    __E_NetworkDown = static_cast<int32_t>(0x2742),
    __E_NetworkUnreachable = static_cast<int32_t>(0x2743),
    __E_NetworkReset = static_cast<int32_t>(0x2744),
    __E_ConnectionAborted = static_cast<int32_t>(0x2745),
    __E_ConnectionReset = static_cast<int32_t>(0x2746),
    __E_NoBufferSpaceAvailable = static_cast<int32_t>(0x2747),
    __E_IsConnected = static_cast<int32_t>(0x2748),
    __E_NotConnected = static_cast<int32_t>(0x2749),
    __E_Shutdown = static_cast<int32_t>(0x274a),
    __E_TimedOut = static_cast<int32_t>(0x274c),
    __E_ConnectionRefused = static_cast<int32_t>(0x274d),
    __E_HostDown = static_cast<int32_t>(0x2750),
    __E_HostUnreachable = static_cast<int32_t>(0x2751),
    __E_ProcessLimit = static_cast<int32_t>(0x2753),
    __E_SystemNotReady = static_cast<int32_t>(0x276b),
    __E_VersionNotSupported = static_cast<int32_t>(0x276c),
    __E_NotInitialized = static_cast<int32_t>(0x276d),
    __E_Disconnecting = static_cast<int32_t>(0x2775),
    __E_TypeNotFound = static_cast<int32_t>(0x277d),
    __E_HostNotFound = static_cast<int32_t>(0x2af9),
    __E_TryAgain = static_cast<int32_t>(0x2afa),
    __E_NoRecovery = static_cast<int32_t>(0x2afb),
    __E_NoData = static_cast<int32_t>(0x2afc),
    __E_IOPending = static_cast<int32_t>(0x3e5),
    __E_OperationAborted = static_cast<int32_t>(0x3e3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SocketError_Unwrapped() const noexcept {
    return static_cast<__SocketError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SocketError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SocketError(int32_t value__) noexcept;

  /// @brief Field AccessDenied value: I32(10013)
  static ::System::Net::Sockets::SocketError const AccessDenied;

  /// @brief Field AddressAlreadyInUse value: I32(10048)
  static ::System::Net::Sockets::SocketError const AddressAlreadyInUse;

  /// @brief Field AddressFamilyNotSupported value: I32(10047)
  static ::System::Net::Sockets::SocketError const AddressFamilyNotSupported;

  /// @brief Field AddressNotAvailable value: I32(10049)
  static ::System::Net::Sockets::SocketError const AddressNotAvailable;

  /// @brief Field AlreadyInProgress value: I32(10037)
  static ::System::Net::Sockets::SocketError const AlreadyInProgress;

  /// @brief Field ConnectionAborted value: I32(10053)
  static ::System::Net::Sockets::SocketError const ConnectionAborted;

  /// @brief Field ConnectionRefused value: I32(10061)
  static ::System::Net::Sockets::SocketError const ConnectionRefused;

  /// @brief Field ConnectionReset value: I32(10054)
  static ::System::Net::Sockets::SocketError const ConnectionReset;

  /// @brief Field DestinationAddressRequired value: I32(10039)
  static ::System::Net::Sockets::SocketError const DestinationAddressRequired;

  /// @brief Field Disconnecting value: I32(10101)
  static ::System::Net::Sockets::SocketError const Disconnecting;

  /// @brief Field Fault value: I32(10014)
  static ::System::Net::Sockets::SocketError const Fault;

  /// @brief Field HostDown value: I32(10064)
  static ::System::Net::Sockets::SocketError const HostDown;

  /// @brief Field HostNotFound value: I32(11001)
  static ::System::Net::Sockets::SocketError const HostNotFound;

  /// @brief Field HostUnreachable value: I32(10065)
  static ::System::Net::Sockets::SocketError const HostUnreachable;

  /// @brief Field IOPending value: I32(997)
  static ::System::Net::Sockets::SocketError const IOPending;

  /// @brief Field InProgress value: I32(10036)
  static ::System::Net::Sockets::SocketError const InProgress;

  /// @brief Field Interrupted value: I32(10004)
  static ::System::Net::Sockets::SocketError const Interrupted;

  /// @brief Field InvalidArgument value: I32(10022)
  static ::System::Net::Sockets::SocketError const InvalidArgument;

  /// @brief Field IsConnected value: I32(10056)
  static ::System::Net::Sockets::SocketError const IsConnected;

  /// @brief Field MessageSize value: I32(10040)
  static ::System::Net::Sockets::SocketError const MessageSize;

  /// @brief Field NetworkDown value: I32(10050)
  static ::System::Net::Sockets::SocketError const NetworkDown;

  /// @brief Field NetworkReset value: I32(10052)
  static ::System::Net::Sockets::SocketError const NetworkReset;

  /// @brief Field NetworkUnreachable value: I32(10051)
  static ::System::Net::Sockets::SocketError const NetworkUnreachable;

  /// @brief Field NoBufferSpaceAvailable value: I32(10055)
  static ::System::Net::Sockets::SocketError const NoBufferSpaceAvailable;

  /// @brief Field NoData value: I32(11004)
  static ::System::Net::Sockets::SocketError const NoData;

  /// @brief Field NoRecovery value: I32(11003)
  static ::System::Net::Sockets::SocketError const NoRecovery;

  /// @brief Field NotConnected value: I32(10057)
  static ::System::Net::Sockets::SocketError const NotConnected;

  /// @brief Field NotInitialized value: I32(10093)
  static ::System::Net::Sockets::SocketError const NotInitialized;

  /// @brief Field NotSocket value: I32(10038)
  static ::System::Net::Sockets::SocketError const NotSocket;

  /// @brief Field OperationAborted value: I32(995)
  static ::System::Net::Sockets::SocketError const OperationAborted;

  /// @brief Field OperationNotSupported value: I32(10045)
  static ::System::Net::Sockets::SocketError const OperationNotSupported;

  /// @brief Field ProcessLimit value: I32(10067)
  static ::System::Net::Sockets::SocketError const ProcessLimit;

  /// @brief Field ProtocolFamilyNotSupported value: I32(10046)
  static ::System::Net::Sockets::SocketError const ProtocolFamilyNotSupported;

  /// @brief Field ProtocolNotSupported value: I32(10043)
  static ::System::Net::Sockets::SocketError const ProtocolNotSupported;

  /// @brief Field ProtocolOption value: I32(10042)
  static ::System::Net::Sockets::SocketError const ProtocolOption;

  /// @brief Field ProtocolType value: I32(10041)
  static ::System::Net::Sockets::SocketError const ProtocolType;

  /// @brief Field Shutdown value: I32(10058)
  static ::System::Net::Sockets::SocketError const Shutdown;

  /// @brief Field SocketNotSupported value: I32(10044)
  static ::System::Net::Sockets::SocketError const SocketNotSupported;

  /// @brief Field Success value: I32(0)
  static ::System::Net::Sockets::SocketError const Success;

  /// @brief Field SystemNotReady value: I32(10091)
  static ::System::Net::Sockets::SocketError const SystemNotReady;

  /// @brief Field TimedOut value: I32(10060)
  static ::System::Net::Sockets::SocketError const TimedOut;

  /// @brief Field TooManyOpenSockets value: I32(10024)
  static ::System::Net::Sockets::SocketError const TooManyOpenSockets;

  /// @brief Field TryAgain value: I32(11002)
  static ::System::Net::Sockets::SocketError const TryAgain;

  /// @brief Field TypeNotFound value: I32(10109)
  static ::System::Net::Sockets::SocketError const TypeNotFound;

  /// @brief Field VersionNotSupported value: I32(10092)
  static ::System::Net::Sockets::SocketError const VersionNotSupported;

  /// @brief Field WouldBlock value: I32(10035)
  static ::System::Net::Sockets::SocketError const WouldBlock;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9867 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field SocketError value: I32(-1)
  static ::System::Net::Sockets::SocketError const _cordl_SocketError;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::SocketError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketError, 0x4>, "Size mismatch!");

} // namespace System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketError, "System.Net.Sockets", "SocketError");
