#pragma once
#include "LiteNetLib/zzzz__DisconnectReason_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketError_impl.hpp"
#include "LiteNetLib/zzzz__DisconnectInfo_def.hpp"
#include "LiteNetLib/zzzz__DisconnectReason_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "LiteNetLib/zzzz__NetPacketReader_def.hpp"
// Ctor Parameters [CppParam { name: "Reason", ty: "::LiteNetLib::DisconnectReason", modifiers: "", def_value: Some("{}") }, CppParam { name: "SocketErrorCode", ty:
// "::System::Net::Sockets::SocketError", modifiers: "", def_value: Some("{}") }, CppParam { name: "AdditionalData", ty: "::LiteNetLib::NetPacketReader*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::LiteNetLib::DisconnectInfo::DisconnectInfo(::LiteNetLib::DisconnectReason Reason, ::System::Net::Sockets::SocketError SocketErrorCode,
                                                       ::LiteNetLib::NetPacketReader* AdditionalData) noexcept {
  this->Reason = Reason;
  this->SocketErrorCode = SocketErrorCode;
  this->AdditionalData = AdditionalData;
}
// Ctor Parameters []
constexpr ::LiteNetLib::DisconnectInfo::DisconnectInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
