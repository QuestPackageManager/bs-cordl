#pragma once
// IWYU pragma private; include "System/Net/Sockets/IOControlCode.hpp"
#include "System/Net/Sockets/zzzz__IOControlCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::IOControlCode::IOControlCode(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::IOControlCode::IOControlCode()   {
}
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::AsyncIO{static_cast<int64_t>(0x8004667d)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::NonBlockingIO{static_cast<int64_t>(0x8004667e)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::DataToRead{static_cast<int64_t>(0x4004667f)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::OobDataRead{static_cast<int64_t>(0x40047307)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::AssociateHandle{static_cast<int64_t>(0x88000001)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::EnableCircularQueuing{static_cast<int64_t>(0x28000002)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::Flush{static_cast<int64_t>(0x28000004)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::GetBroadcastAddress{static_cast<int64_t>(0x48000005)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::GetExtensionFunctionPointer{static_cast<int64_t>(0xc8000006)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::GetQos{static_cast<int64_t>(0xc8000007)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::GetGroupQos{static_cast<int64_t>(0xc8000008)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::MultipointLoopback{static_cast<int64_t>(0x88000009)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::MulticastScope{static_cast<int64_t>(0x8800000a)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::SetQos{static_cast<int64_t>(0x8800000b)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::SetGroupQos{static_cast<int64_t>(0x8800000c)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::TranslateHandle{static_cast<int64_t>(0xc800000d)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::RoutingInterfaceQuery{static_cast<int64_t>(0xc8000014)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::RoutingInterfaceChange{static_cast<int64_t>(0x88000015)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::AddressListQuery{static_cast<int64_t>(0x48000016)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::AddressListChange{static_cast<int64_t>(0x28000017)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::QueryTargetPnpHandle{static_cast<int64_t>(0x48000018)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::NamespaceChange{static_cast<int64_t>(0x88000019)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::AddressListSort{static_cast<int64_t>(0xc8000019)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::ReceiveAll{static_cast<int64_t>(0x98000001)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::ReceiveAllMulticast{static_cast<int64_t>(0x98000002)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::ReceiveAllIgmpMulticast{static_cast<int64_t>(0x98000003)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::KeepAliveValues{static_cast<int64_t>(0x98000004)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::AbsorbRouterAlert{static_cast<int64_t>(0x98000005)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::UnicastInterface{static_cast<int64_t>(0x98000006)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::LimitBroadcasts{static_cast<int64_t>(0x98000007)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::BindToInterface{static_cast<int64_t>(0x98000008)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::MulticastInterface{static_cast<int64_t>(0x98000009)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::AddMulticastGroupOnInterface{static_cast<int64_t>(0x9800000a)};
constexpr ::System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::DeleteMulticastGroupFromInterface{static_cast<int64_t>(0x9800000b)};
