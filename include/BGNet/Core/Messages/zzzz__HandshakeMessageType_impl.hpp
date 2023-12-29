#pragma once
#include "BGNet/Core/Messages/zzzz__HandshakeMessageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::Messages::HandshakeMessageType::HandshakeMessageType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::HandshakeMessageType::HandshakeMessageType() {}
constexpr ::BGNet::Core::Messages::HandshakeMessageType BGNet::Core::Messages::HandshakeMessageType::ClientHelloRequest{ static_cast<int32_t>(0x0) };
constexpr ::BGNet::Core::Messages::HandshakeMessageType BGNet::Core::Messages::HandshakeMessageType::HelloVerifyRequest{ static_cast<int32_t>(0x1) };
constexpr ::BGNet::Core::Messages::HandshakeMessageType BGNet::Core::Messages::HandshakeMessageType::ClientHelloWithCookieRequest{ static_cast<int32_t>(0x2) };
constexpr ::BGNet::Core::Messages::HandshakeMessageType BGNet::Core::Messages::HandshakeMessageType::ServerHelloRequest{ static_cast<int32_t>(0x3) };
constexpr ::BGNet::Core::Messages::HandshakeMessageType BGNet::Core::Messages::HandshakeMessageType::ServerCertificateRequest{ static_cast<int32_t>(0x4) };
constexpr ::BGNet::Core::Messages::HandshakeMessageType BGNet::Core::Messages::HandshakeMessageType::ClientKeyExchangeRequest{ static_cast<int32_t>(0x6) };
constexpr ::BGNet::Core::Messages::HandshakeMessageType BGNet::Core::Messages::HandshakeMessageType::ChangeCipherSpecRequest{ static_cast<int32_t>(0x7) };
constexpr ::BGNet::Core::Messages::HandshakeMessageType BGNet::Core::Messages::HandshakeMessageType::MessageReceivedAcknowledge{ static_cast<int32_t>(0x8) };
constexpr ::BGNet::Core::Messages::HandshakeMessageType BGNet::Core::Messages::HandshakeMessageType::MultipartMessage{ static_cast<int32_t>(0x9) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
