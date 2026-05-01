#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/FailureHandlingMethod.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__FailureHandlingMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod::FailureHandlingMethod(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod::FailureHandlingMethod() {}
constexpr ::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod::GoOffline{ static_cast<int32_t>(0x0) };
constexpr ::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod::Retry{ static_cast<int32_t>(0x1) };
constexpr ::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod::Silent{ static_cast<int32_t>(0x2) };
