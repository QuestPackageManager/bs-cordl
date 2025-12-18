#pragma once
// IWYU pragma private; include "System/Net/WebExceptionStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebExceptionStatus)
// Forward declare root types
namespace System::Net {
struct WebExceptionStatus;
}
// Write type traits
MARK_VAL_T(::System::Net::WebExceptionStatus);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebExceptionStatus
struct CORDL_TYPE WebExceptionStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WebExceptionStatus_Unwrapped
  enum struct __WebExceptionStatus_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_NameResolutionFailure = static_cast<int32_t>(0x1),
    __E_ConnectFailure = static_cast<int32_t>(0x2),
    __E_ReceiveFailure = static_cast<int32_t>(0x3),
    __E_SendFailure = static_cast<int32_t>(0x4),
    __E_PipelineFailure = static_cast<int32_t>(0x5),
    __E_RequestCanceled = static_cast<int32_t>(0x6),
    __E_ProtocolError = static_cast<int32_t>(0x7),
    __E_ConnectionClosed = static_cast<int32_t>(0x8),
    __E_TrustFailure = static_cast<int32_t>(0x9),
    __E_SecureChannelFailure = static_cast<int32_t>(0xa),
    __E_ServerProtocolViolation = static_cast<int32_t>(0xb),
    __E_KeepAliveFailure = static_cast<int32_t>(0xc),
    __E_Pending = static_cast<int32_t>(0xd),
    __E_Timeout = static_cast<int32_t>(0xe),
    __E_ProxyNameResolutionFailure = static_cast<int32_t>(0xf),
    __E_UnknownError = static_cast<int32_t>(0x10),
    __E_MessageLengthLimitExceeded = static_cast<int32_t>(0x11),
    __E_CacheEntryNotFound = static_cast<int32_t>(0x12),
    __E_RequestProhibitedByCachePolicy = static_cast<int32_t>(0x13),
    __E_RequestProhibitedByProxy = static_cast<int32_t>(0x14),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WebExceptionStatus_Unwrapped() const noexcept {
    return static_cast<__WebExceptionStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebExceptionStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WebExceptionStatus(int32_t value__) noexcept;

  /// @brief Field CacheEntryNotFound value: I32(18)
  static ::System::Net::WebExceptionStatus const CacheEntryNotFound;

  /// @brief Field ConnectFailure value: I32(2)
  static ::System::Net::WebExceptionStatus const ConnectFailure;

  /// @brief Field ConnectionClosed value: I32(8)
  static ::System::Net::WebExceptionStatus const ConnectionClosed;

  /// @brief Field KeepAliveFailure value: I32(12)
  static ::System::Net::WebExceptionStatus const KeepAliveFailure;

  /// @brief Field MessageLengthLimitExceeded value: I32(17)
  static ::System::Net::WebExceptionStatus const MessageLengthLimitExceeded;

  /// @brief Field NameResolutionFailure value: I32(1)
  static ::System::Net::WebExceptionStatus const NameResolutionFailure;

  /// @brief Field Pending value: I32(13)
  static ::System::Net::WebExceptionStatus const Pending;

  /// @brief Field PipelineFailure value: I32(5)
  static ::System::Net::WebExceptionStatus const PipelineFailure;

  /// @brief Field ProtocolError value: I32(7)
  static ::System::Net::WebExceptionStatus const ProtocolError;

  /// @brief Field ProxyNameResolutionFailure value: I32(15)
  static ::System::Net::WebExceptionStatus const ProxyNameResolutionFailure;

  /// @brief Field ReceiveFailure value: I32(3)
  static ::System::Net::WebExceptionStatus const ReceiveFailure;

  /// @brief Field RequestCanceled value: I32(6)
  static ::System::Net::WebExceptionStatus const RequestCanceled;

  /// @brief Field RequestProhibitedByCachePolicy value: I32(19)
  static ::System::Net::WebExceptionStatus const RequestProhibitedByCachePolicy;

  /// @brief Field RequestProhibitedByProxy value: I32(20)
  static ::System::Net::WebExceptionStatus const RequestProhibitedByProxy;

  /// @brief Field SecureChannelFailure value: I32(10)
  static ::System::Net::WebExceptionStatus const SecureChannelFailure;

  /// @brief Field SendFailure value: I32(4)
  static ::System::Net::WebExceptionStatus const SendFailure;

  /// @brief Field ServerProtocolViolation value: I32(11)
  static ::System::Net::WebExceptionStatus const ServerProtocolViolation;

  /// @brief Field Success value: I32(0)
  static ::System::Net::WebExceptionStatus const Success;

  /// @brief Field Timeout value: I32(14)
  static ::System::Net::WebExceptionStatus const Timeout;

  /// @brief Field TrustFailure value: I32(9)
  static ::System::Net::WebExceptionStatus const TrustFailure;

  /// @brief Field UnknownError value: I32(16)
  static ::System::Net::WebExceptionStatus const UnknownError;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11486 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebExceptionStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebExceptionStatus, 0x4>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebExceptionStatus, "System.Net", "WebExceptionStatus");
