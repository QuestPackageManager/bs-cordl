#pragma once
// IWYU pragma private; include "Mono/Net/Security/AsyncOperationStatus.hpp"
#include "Mono/Net/Security/zzzz__AsyncOperationStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::AsyncOperationStatus::AsyncOperationStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::AsyncOperationStatus::AsyncOperationStatus()   {
}
constexpr ::Mono::Net::Security::AsyncOperationStatus  Mono::Net::Security::AsyncOperationStatus::Initialize{static_cast<int32_t>(0x0)};
constexpr ::Mono::Net::Security::AsyncOperationStatus  Mono::Net::Security::AsyncOperationStatus::Continue{static_cast<int32_t>(0x1)};
constexpr ::Mono::Net::Security::AsyncOperationStatus  Mono::Net::Security::AsyncOperationStatus::ReadDone{static_cast<int32_t>(0x2)};
constexpr ::Mono::Net::Security::AsyncOperationStatus  Mono::Net::Security::AsyncOperationStatus::Complete{static_cast<int32_t>(0x3)};
