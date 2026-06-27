#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketError.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::SocketError::SocketError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SocketError::SocketError()   {
}
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::Success{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::_cordl_SocketError{static_cast<int32_t>(0xffffffff)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::Interrupted{static_cast<int32_t>(0x2714)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::AccessDenied{static_cast<int32_t>(0x271d)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::Fault{static_cast<int32_t>(0x271e)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::InvalidArgument{static_cast<int32_t>(0x2726)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::TooManyOpenSockets{static_cast<int32_t>(0x2728)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::WouldBlock{static_cast<int32_t>(0x2733)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::InProgress{static_cast<int32_t>(0x2734)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::AlreadyInProgress{static_cast<int32_t>(0x2735)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::NotSocket{static_cast<int32_t>(0x2736)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::DestinationAddressRequired{static_cast<int32_t>(0x2737)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::MessageSize{static_cast<int32_t>(0x2738)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::ProtocolType{static_cast<int32_t>(0x2739)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::ProtocolOption{static_cast<int32_t>(0x273a)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::ProtocolNotSupported{static_cast<int32_t>(0x273b)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::SocketNotSupported{static_cast<int32_t>(0x273c)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::OperationNotSupported{static_cast<int32_t>(0x273d)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::ProtocolFamilyNotSupported{static_cast<int32_t>(0x273e)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::AddressFamilyNotSupported{static_cast<int32_t>(0x273f)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::AddressAlreadyInUse{static_cast<int32_t>(0x2740)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::AddressNotAvailable{static_cast<int32_t>(0x2741)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::NetworkDown{static_cast<int32_t>(0x2742)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::NetworkUnreachable{static_cast<int32_t>(0x2743)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::NetworkReset{static_cast<int32_t>(0x2744)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::ConnectionAborted{static_cast<int32_t>(0x2745)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::ConnectionReset{static_cast<int32_t>(0x2746)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::NoBufferSpaceAvailable{static_cast<int32_t>(0x2747)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::IsConnected{static_cast<int32_t>(0x2748)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::NotConnected{static_cast<int32_t>(0x2749)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::Shutdown{static_cast<int32_t>(0x274a)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::TimedOut{static_cast<int32_t>(0x274c)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::ConnectionRefused{static_cast<int32_t>(0x274d)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::HostDown{static_cast<int32_t>(0x2750)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::HostUnreachable{static_cast<int32_t>(0x2751)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::ProcessLimit{static_cast<int32_t>(0x2753)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::SystemNotReady{static_cast<int32_t>(0x276b)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::VersionNotSupported{static_cast<int32_t>(0x276c)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::NotInitialized{static_cast<int32_t>(0x276d)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::Disconnecting{static_cast<int32_t>(0x2775)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::TypeNotFound{static_cast<int32_t>(0x277d)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::HostNotFound{static_cast<int32_t>(0x2af9)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::TryAgain{static_cast<int32_t>(0x2afa)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::NoRecovery{static_cast<int32_t>(0x2afb)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::NoData{static_cast<int32_t>(0x2afc)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::IOPending{static_cast<int32_t>(0x3e5)};
constexpr ::System::Net::Sockets::SocketError  System::Net::Sockets::SocketError::OperationAborted{static_cast<int32_t>(0x3e3)};
