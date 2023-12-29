#pragma once
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableResponse_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedResponse_def.hpp"
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableResponse"
constexpr BGNet::Core::Messages::IUnconnectedAuthenticateRequest::operator ::BGNet::Core::Messages::IUnconnectedReliableResponse*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedReliableResponse*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableRequest"
constexpr BGNet::Core::Messages::IUnconnectedAuthenticateRequest::operator ::BGNet::Core::Messages::IUnconnectedReliableRequest*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedReliableRequest*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
constexpr BGNet::Core::Messages::IUnconnectedAuthenticateRequest::operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr BGNet::Core::Messages::IUnconnectedAuthenticateRequest::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr BGNet::Core::Messages::IUnconnectedAuthenticateRequest::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedResponse"
constexpr BGNet::Core::Messages::IUnconnectedAuthenticateRequest::operator ::BGNet::Core::Messages::IUnconnectedResponse*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedResponse*>(static_cast<void*>(this));
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
