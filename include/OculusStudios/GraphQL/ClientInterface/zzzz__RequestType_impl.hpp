#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/RequestType.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__RequestType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestType::RequestType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestType::RequestType() {}
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestType OculusStudios::GraphQL::ClientInterface::RequestType::Unknown{ static_cast<uint8_t>(0x0u) };
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestType OculusStudios::GraphQL::ClientInterface::RequestType::Query{ static_cast<uint8_t>(0x1u) };
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestType OculusStudios::GraphQL::ClientInterface::RequestType::Mutation{ static_cast<uint8_t>(0x2u) };
