#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRNetwork.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRNetwork_def.hpp"
#include "GlobalNamespace/zzzz__OVRNetwork_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Net/Sockets/zzzz__TcpListener_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_FrameHeader.ToBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::OVRNetwork_FrameHeader::*)()>(&::GlobalNamespace::OVRNetwork_FrameHeader::ToBytes)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5f02c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_FrameHeader>(), { "ToBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_FrameHeader.FromBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRNetwork_FrameHeader (*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::OVRNetwork_FrameHeader::FromBytes)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5f02d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_FrameHeader>(), { "FromBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> GlobalNamespace::OVRNetwork_FrameHeader::ToBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_FrameHeader>(), { "ToBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRNetwork_FrameHeader GlobalNamespace::OVRNetwork_FrameHeader::FromBytes(::ArrayW<uint8_t> arr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_FrameHeader>(), { "FromBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNetwork_FrameHeader>(nullptr, ___internal_method, arr);
}
// Ctor Parameters [CppParam { name: "protocolIdentifier", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "payloadType", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "payloadLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRNetwork_FrameHeader::OVRNetwork_FrameHeader(uint32_t protocolIdentifier, int32_t payloadType, int32_t payloadLength) noexcept {
  this->protocolIdentifier = protocolIdentifier;
  this->payloadType = payloadType;
  this->payloadLength = payloadLength;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRNetwork_FrameHeader::OVRNetwork_FrameHeader() {}
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer.StartListening
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::*)(int32_t)>(&::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::StartListening)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x5f02eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>(), { "StartListening", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer.StopListening
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::*)()>(&::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::StopListening)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5f0341c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>(), { "StopListening", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer.DoAcceptTcpClientCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::DoAcceptTcpClientCallback)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x5f035ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>(), { "DoAcceptTcpClientCallback", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer.HasConnectedClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::*)()>(&::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::HasConnectedClient)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5f03b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>(), { "HasConnectedClient", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer.Broadcast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::*)(int32_t, ::ArrayW<uint8_t>)>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::Broadcast)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x5f03cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>(),
                                                                                           { "Broadcast", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer.DoWriteDataCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::DoWriteDataCallback)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f04284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>(), { "DoWriteDataCallback", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::*)()>(&::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f04380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::TcpListener*& GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::__cordl_internal_get_tcpListener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcpListener;
}
constexpr ::System::Net::Sockets::TcpListener* const& GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::__cordl_internal_get_tcpListener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcpListener;
}
constexpr void GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::__cordl_internal_set_tcpListener(::System::Net::Sockets::TcpListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tcpListener = value;
}
constexpr ::System::Object*& GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::__cordl_internal_get_clientsLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientsLock;
}
constexpr ::System::Object* const& GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::__cordl_internal_get_clientsLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientsLock;
}
constexpr void GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::__cordl_internal_set_clientsLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clientsLock = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>*& GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::__cordl_internal_get_clients() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clients;
}
constexpr ::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>* const& GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::__cordl_internal_get_clients() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clients;
}
constexpr void GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::__cordl_internal_set_clients(::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clients = value;
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::StartListening(int32_t listeningPort) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>(), { "StartListening", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listeningPort);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::StopListening() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>(), { "StopListening", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::DoAcceptTcpClientCallback(::System::IAsyncResult* ar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>(), { "DoAcceptTcpClientCallback", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar);
}
inline bool GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::HasConnectedClient() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>(), { "HasConnectedClient", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::Broadcast(int32_t payloadType, ::ArrayW<uint8_t> payload) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>(),
                                                                                         { "Broadcast", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, payloadType, payload);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::DoWriteDataCallback(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>(), { "DoWriteDataCallback", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer* GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::OVRNetwork_OVRNetworkTcpServer() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState::OVRNetworkTcpClient_OVRNetwork_ConnectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState::OVRNetworkTcpClient_OVRNetwork_ConnectionState() {}
constexpr ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState::Disconnected{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState::Connected{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState::Connecting{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient.get_connectionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState (::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::*)()>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::get_connectionState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f0441c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>(), { "get_connectionState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient.get_Connected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::*)()>(&::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::get_Connected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f04450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>(), { "get_Connected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient.Connect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::*)(int32_t)>(&::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::Connect)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5f04480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>(), { "Connect", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient.ConnectCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::ConnectCallback)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x5f04610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>(), { "ConnectCallback", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient.Disconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::*)()>(&::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::Disconnect)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5f04944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>(), { "Disconnect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::*)()>(&::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::Tick)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5f04b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>(), { "Tick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient.OnReadDataCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::OnReadDataCallback)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x5f04dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>(), { "OnReadDataCallback", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::*)()>(&::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f052bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_connectionStateChangedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionStateChangedCallback;
}
constexpr ::System::Action* const& GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_connectionStateChangedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionStateChangedCallback;
}
constexpr void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_set_connectionStateChangedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectionStateChangedCallback = value;
}
constexpr ::System::Action_4<int32_t, ::ArrayW<uint8_t>, int32_t, int32_t>*& GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_payloadReceivedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___payloadReceivedCallback;
}
constexpr ::System::Action_4<int32_t, ::ArrayW<uint8_t>, int32_t, int32_t>* const& GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_payloadReceivedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___payloadReceivedCallback;
}
constexpr void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_set_payloadReceivedCallback(::System::Action_4<int32_t, ::ArrayW<uint8_t>, int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___payloadReceivedCallback = value;
}
constexpr ::System::Net::Sockets::TcpClient*& GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_tcpClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcpClient;
}
constexpr ::System::Net::Sockets::TcpClient* const& GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_tcpClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcpClient;
}
constexpr void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_set_tcpClient(::System::Net::Sockets::TcpClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tcpClient = value;
}
constexpr ::ArrayW<::ArrayW<uint8_t>>& GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_receivedBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receivedBuffers;
}
constexpr ::ArrayW<::ArrayW<uint8_t>> const& GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_receivedBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receivedBuffers;
}
constexpr void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_set_receivedBuffers(::ArrayW<::ArrayW<uint8_t>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___receivedBuffers = value;
}
constexpr int32_t& GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_receivedBufferIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receivedBufferIndex;
}
constexpr int32_t const& GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_receivedBufferIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receivedBufferIndex;
}
constexpr void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_set_receivedBufferIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___receivedBufferIndex = value;
}
constexpr int32_t& GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_receivedBufferDataSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receivedBufferDataSize;
}
constexpr int32_t const& GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_receivedBufferDataSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receivedBufferDataSize;
}
constexpr void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_set_receivedBufferDataSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___receivedBufferDataSize = value;
}
constexpr ::System::Threading::ManualResetEvent*& GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_readyReceiveDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readyReceiveDataEvent;
}
constexpr ::System::Threading::ManualResetEvent* const& GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_readyReceiveDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readyReceiveDataEvent;
}
constexpr void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_set_readyReceiveDataEvent(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readyReceiveDataEvent = value;
}
inline ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::get_connectionState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>(), { "get_connectionState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::get_Connected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>(), { "get_Connected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::Connect(int32_t listeningPort) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>(), { "Connect", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listeningPort);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::ConnectCallback(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>(), { "ConnectCallback", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::Disconnect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>(), { "Disconnect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::Tick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>(), { "Tick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::OnReadDataCallback(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>(), { "OnReadDataCallback", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient* GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::OVRNetwork_OVRNetworkTcpClient() {}
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRNetwork::*)()>(&::GlobalNamespace::OVRNetwork::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f02c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRNetwork::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNetwork*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRNetwork* GlobalNamespace::OVRNetwork::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRNetwork*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRNetwork::OVRNetwork() {}
