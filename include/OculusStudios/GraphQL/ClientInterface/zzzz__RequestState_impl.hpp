#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/RequestState.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__RequestState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestState::RequestState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestState::RequestState() {}
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestState OculusStudios::GraphQL::ClientInterface::RequestState::NotTracked{ static_cast<int32_t>(0x0) };
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestState OculusStudios::GraphQL::ClientInterface::RequestState::WaitingToAddToDictionary{ static_cast<int32_t>(0x1) };
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestState OculusStudios::GraphQL::ClientInterface::RequestState::Enqueueing{ static_cast<int32_t>(0x2) };
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestState OculusStudios::GraphQL::ClientInterface::RequestState::Processing{ static_cast<int32_t>(0x3) };
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestState OculusStudios::GraphQL::ClientInterface::RequestState::Converting{ static_cast<int32_t>(0x4) };
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestState OculusStudios::GraphQL::ClientInterface::RequestState::Retrying{ static_cast<int32_t>(0x5) };
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestState OculusStudios::GraphQL::ClientInterface::RequestState::Complete{ static_cast<int32_t>(0x6) };
constexpr ::OculusStudios::GraphQL::ClientInterface::RequestState OculusStudios::GraphQL::ClientInterface::RequestState::WaitingToRmFromDictionary{ static_cast<int32_t>(0x7) };
