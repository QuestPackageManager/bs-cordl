#pragma once
#include "System/Net/NetworkInformation/zzzz__AixIoctlRequest_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixIoctlRequest::AixIoctlRequest(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixIoctlRequest::AixIoctlRequest() {}
constexpr ::System::Net::NetworkInformation::AixIoctlRequest System::Net::NetworkInformation::AixIoctlRequest::SIOCGSIZIFCONF{ static_cast<uint32_t>(0x4696af0u) };
constexpr ::System::Net::NetworkInformation::AixIoctlRequest System::Net::NetworkInformation::AixIoctlRequest::SIOCGIFCONF{ static_cast<uint32_t>(0x106945f0u) };
constexpr ::System::Net::NetworkInformation::AixIoctlRequest System::Net::NetworkInformation::AixIoctlRequest::SIOCGIFFLAGS{ static_cast<uint32_t>(0x286911f0u) };
constexpr ::System::Net::NetworkInformation::AixIoctlRequest System::Net::NetworkInformation::AixIoctlRequest::SIOCGIFNETMASK{ static_cast<uint32_t>(0x286925f0u) };
constexpr ::System::Net::NetworkInformation::AixIoctlRequest System::Net::NetworkInformation::AixIoctlRequest::SIOCGIFMTU{ static_cast<uint32_t>(0x286956f0u) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
