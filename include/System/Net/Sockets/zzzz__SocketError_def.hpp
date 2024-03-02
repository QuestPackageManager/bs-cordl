#pragma once
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
// Type: System.Net.Sockets::SocketError
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: true
// CS Name: ::System.Net.Sockets::SocketError
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AccessDenied value: static_cast<int32_t>(0x271d)
  static ::System::Net::Sockets::SocketError const AccessDenied;

  /// @brief Field AddressAlreadyInUse value: static_cast<int32_t>(0x2740)
  static ::System::Net::Sockets::SocketError const AddressAlreadyInUse;

  /// @brief Field AddressFamilyNotSupported value: static_cast<int32_t>(0x273f)
  static ::System::Net::Sockets::SocketError const AddressFamilyNotSupported;

  /// @brief Field AddressNotAvailable value: static_cast<int32_t>(0x2741)
  static ::System::Net::Sockets::SocketError const AddressNotAvailable;

  /// @brief Field AlreadyInProgress value: static_cast<int32_t>(0x2735)
  static ::System::Net::Sockets::SocketError const AlreadyInProgress;

  /// @brief Field ConnectionAborted value: static_cast<int32_t>(0x2745)
  static ::System::Net::Sockets::SocketError const ConnectionAborted;

  /// @brief Field ConnectionRefused value: static_cast<int32_t>(0x274d)
  static ::System::Net::Sockets::SocketError const ConnectionRefused;

  /// @brief Field ConnectionReset value: static_cast<int32_t>(0x2746)
  static ::System::Net::Sockets::SocketError const ConnectionReset;

  /// @brief Field DestinationAddressRequired value: static_cast<int32_t>(0x2737)
  static ::System::Net::Sockets::SocketError const DestinationAddressRequired;

  /// @brief Field Disconnecting value: static_cast<int32_t>(0x2775)
  static ::System::Net::Sockets::SocketError const Disconnecting;

  /// @brief Field Fault value: static_cast<int32_t>(0x271e)
  static ::System::Net::Sockets::SocketError const Fault;

  /// @brief Field HostDown value: static_cast<int32_t>(0x2750)
  static ::System::Net::Sockets::SocketError const HostDown;

  /// @brief Field HostNotFound value: static_cast<int32_t>(0x2af9)
  static ::System::Net::Sockets::SocketError const HostNotFound;

  /// @brief Field HostUnreachable value: static_cast<int32_t>(0x2751)
  static ::System::Net::Sockets::SocketError const HostUnreachable;

  /// @brief Field IOPending value: static_cast<int32_t>(0x3e5)
  static ::System::Net::Sockets::SocketError const IOPending;

  /// @brief Field InProgress value: static_cast<int32_t>(0x2734)
  static ::System::Net::Sockets::SocketError const InProgress;

  /// @brief Field Interrupted value: static_cast<int32_t>(0x2714)
  static ::System::Net::Sockets::SocketError const Interrupted;

  /// @brief Field InvalidArgument value: static_cast<int32_t>(0x2726)
  static ::System::Net::Sockets::SocketError const InvalidArgument;

  /// @brief Field IsConnected value: static_cast<int32_t>(0x2748)
  static ::System::Net::Sockets::SocketError const IsConnected;

  /// @brief Field MessageSize value: static_cast<int32_t>(0x2738)
  static ::System::Net::Sockets::SocketError const MessageSize;

  /// @brief Field NetworkDown value: static_cast<int32_t>(0x2742)
  static ::System::Net::Sockets::SocketError const NetworkDown;

  /// @brief Field NetworkReset value: static_cast<int32_t>(0x2744)
  static ::System::Net::Sockets::SocketError const NetworkReset;

  /// @brief Field NetworkUnreachable value: static_cast<int32_t>(0x2743)
  static ::System::Net::Sockets::SocketError const NetworkUnreachable;

  /// @brief Field NoBufferSpaceAvailable value: static_cast<int32_t>(0x2747)
  static ::System::Net::Sockets::SocketError const NoBufferSpaceAvailable;

  /// @brief Field NoData value: static_cast<int32_t>(0x2afc)
  static ::System::Net::Sockets::SocketError const NoData;

  /// @brief Field NoRecovery value: static_cast<int32_t>(0x2afb)
  static ::System::Net::Sockets::SocketError const NoRecovery;

  /// @brief Field NotConnected value: static_cast<int32_t>(0x2749)
  static ::System::Net::Sockets::SocketError const NotConnected;

  /// @brief Field NotInitialized value: static_cast<int32_t>(0x276d)
  static ::System::Net::Sockets::SocketError const NotInitialized;

  /// @brief Field NotSocket value: static_cast<int32_t>(0x2736)
  static ::System::Net::Sockets::SocketError const NotSocket;

  /// @brief Field OperationAborted value: static_cast<int32_t>(0x3e3)
  static ::System::Net::Sockets::SocketError const OperationAborted;

  /// @brief Field OperationNotSupported value: static_cast<int32_t>(0x273d)
  static ::System::Net::Sockets::SocketError const OperationNotSupported;

  /// @brief Field ProcessLimit value: static_cast<int32_t>(0x2753)
  static ::System::Net::Sockets::SocketError const ProcessLimit;

  /// @brief Field ProtocolFamilyNotSupported value: static_cast<int32_t>(0x273e)
  static ::System::Net::Sockets::SocketError const ProtocolFamilyNotSupported;

  /// @brief Field ProtocolNotSupported value: static_cast<int32_t>(0x273b)
  static ::System::Net::Sockets::SocketError const ProtocolNotSupported;

  /// @brief Field ProtocolOption value: static_cast<int32_t>(0x273a)
  static ::System::Net::Sockets::SocketError const ProtocolOption;

  /// @brief Field ProtocolType value: static_cast<int32_t>(0x2739)
  static ::System::Net::Sockets::SocketError const ProtocolType;

  /// @brief Field Shutdown value: static_cast<int32_t>(0x274a)
  static ::System::Net::Sockets::SocketError const Shutdown;

  /// @brief Field SocketNotSupported value: static_cast<int32_t>(0x273c)
  static ::System::Net::Sockets::SocketError const SocketNotSupported;

  /// @brief Field Success value: static_cast<int32_t>(0x0)
  static ::System::Net::Sockets::SocketError const Success;

  /// @brief Field SystemNotReady value: static_cast<int32_t>(0x276b)
  static ::System::Net::Sockets::SocketError const SystemNotReady;

  /// @brief Field TimedOut value: static_cast<int32_t>(0x274c)
  static ::System::Net::Sockets::SocketError const TimedOut;

  /// @brief Field TooManyOpenSockets value: static_cast<int32_t>(0x2728)
  static ::System::Net::Sockets::SocketError const TooManyOpenSockets;

  /// @brief Field TryAgain value: static_cast<int32_t>(0x2afa)
  static ::System::Net::Sockets::SocketError const TryAgain;

  /// @brief Field TypeNotFound value: static_cast<int32_t>(0x277d)
  static ::System::Net::Sockets::SocketError const TypeNotFound;

  /// @brief Field VersionNotSupported value: static_cast<int32_t>(0x276c)
  static ::System::Net::Sockets::SocketError const VersionNotSupported;

  /// @brief Field WouldBlock value: static_cast<int32_t>(0x2733)
  static ::System::Net::Sockets::SocketError const WouldBlock;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field SocketError value: static_cast<int32_t>(0xffffffff)
  static ::System::Net::Sockets::SocketError const _cordl_SocketError;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketError, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketError, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketError, "System.Net.Sockets", "SocketError");
