#pragma once
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
// Type: System.Net::WebExceptionStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9087))
// CS Name: ::System.Net::WebExceptionStatus
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WebExceptionStatus(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebExceptionStatus();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Success value: static_cast<int32_t>(0x0)
  static ::System::Net::WebExceptionStatus const Success;

  /// @brief Field NameResolutionFailure value: static_cast<int32_t>(0x1)
  static ::System::Net::WebExceptionStatus const NameResolutionFailure;

  /// @brief Field ConnectFailure value: static_cast<int32_t>(0x2)
  static ::System::Net::WebExceptionStatus const ConnectFailure;

  /// @brief Field ReceiveFailure value: static_cast<int32_t>(0x3)
  static ::System::Net::WebExceptionStatus const ReceiveFailure;

  /// @brief Field SendFailure value: static_cast<int32_t>(0x4)
  static ::System::Net::WebExceptionStatus const SendFailure;

  /// @brief Field PipelineFailure value: static_cast<int32_t>(0x5)
  static ::System::Net::WebExceptionStatus const PipelineFailure;

  /// @brief Field RequestCanceled value: static_cast<int32_t>(0x6)
  static ::System::Net::WebExceptionStatus const RequestCanceled;

  /// @brief Field ProtocolError value: static_cast<int32_t>(0x7)
  static ::System::Net::WebExceptionStatus const ProtocolError;

  /// @brief Field ConnectionClosed value: static_cast<int32_t>(0x8)
  static ::System::Net::WebExceptionStatus const ConnectionClosed;

  /// @brief Field TrustFailure value: static_cast<int32_t>(0x9)
  static ::System::Net::WebExceptionStatus const TrustFailure;

  /// @brief Field SecureChannelFailure value: static_cast<int32_t>(0xa)
  static ::System::Net::WebExceptionStatus const SecureChannelFailure;

  /// @brief Field ServerProtocolViolation value: static_cast<int32_t>(0xb)
  static ::System::Net::WebExceptionStatus const ServerProtocolViolation;

  /// @brief Field KeepAliveFailure value: static_cast<int32_t>(0xc)
  static ::System::Net::WebExceptionStatus const KeepAliveFailure;

  /// @brief Field Pending value: static_cast<int32_t>(0xd)
  static ::System::Net::WebExceptionStatus const Pending;

  /// @brief Field Timeout value: static_cast<int32_t>(0xe)
  static ::System::Net::WebExceptionStatus const Timeout;

  /// @brief Field ProxyNameResolutionFailure value: static_cast<int32_t>(0xf)
  static ::System::Net::WebExceptionStatus const ProxyNameResolutionFailure;

  /// @brief Field UnknownError value: static_cast<int32_t>(0x10)
  static ::System::Net::WebExceptionStatus const UnknownError;

  /// @brief Field MessageLengthLimitExceeded value: static_cast<int32_t>(0x11)
  static ::System::Net::WebExceptionStatus const MessageLengthLimitExceeded;

  /// @brief Field CacheEntryNotFound value: static_cast<int32_t>(0x12)
  static ::System::Net::WebExceptionStatus const CacheEntryNotFound;

  /// @brief Field RequestProhibitedByCachePolicy value: static_cast<int32_t>(0x13)
  static ::System::Net::WebExceptionStatus const RequestProhibitedByCachePolicy;

  /// @brief Field RequestProhibitedByProxy value: static_cast<int32_t>(0x14)
  static ::System::Net::WebExceptionStatus const RequestProhibitedByProxy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebExceptionStatus, 0x4>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebExceptionStatus, "System.Net", "WebExceptionStatus");
