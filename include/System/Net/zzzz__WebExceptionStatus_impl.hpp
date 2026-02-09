#pragma once
// IWYU pragma private; include "System/Net/WebExceptionStatus.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebExceptionStatus::WebExceptionStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::WebExceptionStatus::WebExceptionStatus()   {
}
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::Success{static_cast<int32_t>(0x0)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::NameResolutionFailure{static_cast<int32_t>(0x1)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::ConnectFailure{static_cast<int32_t>(0x2)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::ReceiveFailure{static_cast<int32_t>(0x3)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::SendFailure{static_cast<int32_t>(0x4)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::PipelineFailure{static_cast<int32_t>(0x5)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::RequestCanceled{static_cast<int32_t>(0x6)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::ProtocolError{static_cast<int32_t>(0x7)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::ConnectionClosed{static_cast<int32_t>(0x8)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::TrustFailure{static_cast<int32_t>(0x9)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::SecureChannelFailure{static_cast<int32_t>(0xa)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::ServerProtocolViolation{static_cast<int32_t>(0xb)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::KeepAliveFailure{static_cast<int32_t>(0xc)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::Pending{static_cast<int32_t>(0xd)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::Timeout{static_cast<int32_t>(0xe)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::ProxyNameResolutionFailure{static_cast<int32_t>(0xf)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::UnknownError{static_cast<int32_t>(0x10)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::MessageLengthLimitExceeded{static_cast<int32_t>(0x11)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::CacheEntryNotFound{static_cast<int32_t>(0x12)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::RequestProhibitedByCachePolicy{static_cast<int32_t>(0x13)};
constexpr ::System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::RequestProhibitedByProxy{static_cast<int32_t>(0x14)};
