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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::OVRNetwork_FrameHeader::*)()>(
    &::GlobalNamespace::OVRNetwork_FrameHeader::ToBytes)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x403ccb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_FrameHeader>::get(), "ToBytes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_FrameHeader.FromBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRNetwork_FrameHeader (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::OVRNetwork_FrameHeader::FromBytes)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x403cdd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_FrameHeader>::get(), "FromBytes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::OVRNetwork_FrameHeader::ToBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_FrameHeader>::get(), "ToBytes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRNetwork_FrameHeader GlobalNamespace::OVRNetwork_FrameHeader::FromBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> arr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_FrameHeader>::get(), "FromBytes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNetwork_FrameHeader, false>(nullptr, ___internal_method, arr);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::*)(int32_t)>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::StartListening)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x403cf08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>::get(), "StartListening",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer.StopListening
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::*)()>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::StopListening)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x403d428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>::get(),
                                                                               "StopListening", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer.DoAcceptTcpClientCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::DoAcceptTcpClientCallback)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x403d5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>::get(), "DoAcceptTcpClientCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer.HasConnectedClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::*)()>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::HasConnectedClient)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x403db24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>::get(),
                                                                               "HasConnectedClient", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer.Broadcast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::*)(int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::Broadcast)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x403dd8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>::get(), "Broadcast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer.DoWriteDataCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::DoWriteDataCallback)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x403e324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>::get(), "DoWriteDataCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::*)()>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x403e418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tcpListener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientsLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clients)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::StartListening(int32_t listeningPort) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>::get(), "StartListening",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listeningPort);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::StopListening() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>::get(),
                                                                             "StopListening", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::DoAcceptTcpClientCallback(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>::get(), "DoAcceptTcpClientCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
inline bool GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::HasConnectedClient() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>::get(),
                                                                             "HasConnectedClient", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::Broadcast(int32_t payloadType, ::ArrayW<uint8_t, ::Array<uint8_t>*> payload) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>::get(), "Broadcast", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, payloadType, payload);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::DoWriteDataCallback(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>::get(), "DoWriteDataCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer* GlobalNamespace::OVRNetwork_OVRNetworkTcpServer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRNetwork_OVRNetworkTcpServer*>());
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState (
    ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::*)()>(&::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::get_connectionState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x403e4c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>::get(),
                                                                               "get_connectionState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient.get_Connected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::*)()>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::get_Connected)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x403e4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>::get(),
                                                                               "get_Connected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::*)(int32_t)>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::Connect)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x403e4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>::get(), "Connect",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient.ConnectCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::ConnectCallback)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x403e674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>::get(), "ConnectCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::*)()>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::Disconnect)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x403e974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>::get(),
                                                                               "Disconnect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::*)()>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::Tick)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x403ebac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>::get(),
                                                                               "Tick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient.OnReadDataCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::OnReadDataCallback)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x403edc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>::get(), "OnReadDataCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::*)()>(
    &::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x403f294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectionStateChangedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_4<int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t>*& GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_payloadReceivedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___payloadReceivedCallback;
}
constexpr ::System::Action_4<int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t>* const&
GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_payloadReceivedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___payloadReceivedCallback;
}
constexpr void
GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_set_payloadReceivedCallback(::System::Action_4<int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___payloadReceivedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tcpClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>& GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_receivedBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receivedBuffers;
}
constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const&
GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_get_receivedBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receivedBuffers;
}
constexpr void
GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::__cordl_internal_set_receivedBuffers(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___receivedBuffers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readyReceiveDataEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::get_connectionState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>::get(),
                                                                             "get_connectionState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::get_Connected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>::get(),
                                                                             "get_Connected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::Connect(int32_t listeningPort) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>::get(), "Connect",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listeningPort);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::ConnectCallback(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>::get(), "ConnectCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::Disconnect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>::get(),
                                                                             "Disconnect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::Tick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>::get(), "Tick",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::OnReadDataCallback(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>::get(), "OnReadDataCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
inline void GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient* GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRNetwork_OVRNetworkTcpClient::OVRNetwork_OVRNetworkTcpClient() {}
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRNetwork::*)()>(&::GlobalNamespace::OVRNetwork::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x403ccb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRNetwork::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRNetwork* GlobalNamespace::OVRNetwork::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRNetwork*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRNetwork::OVRNetwork() {}
