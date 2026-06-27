#pragma once
// IWYU pragma private; include "System/Net/SecurityProtocolType.hpp"
#include "System/Net/zzzz__SecurityProtocolType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::SecurityProtocolType::SecurityProtocolType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::SecurityProtocolType::SecurityProtocolType()   {
}
constexpr ::System::Net::SecurityProtocolType  System::Net::SecurityProtocolType::SystemDefault{static_cast<int32_t>(0x0)};
constexpr ::System::Net::SecurityProtocolType  System::Net::SecurityProtocolType::Ssl3{static_cast<int32_t>(0x30)};
constexpr ::System::Net::SecurityProtocolType  System::Net::SecurityProtocolType::Tls{static_cast<int32_t>(0xc0)};
constexpr ::System::Net::SecurityProtocolType  System::Net::SecurityProtocolType::Tls11{static_cast<int32_t>(0x300)};
constexpr ::System::Net::SecurityProtocolType  System::Net::SecurityProtocolType::Tls12{static_cast<int32_t>(0xc00)};
constexpr ::System::Net::SecurityProtocolType  System::Net::SecurityProtocolType::Tls13{static_cast<int32_t>(0x3000)};
