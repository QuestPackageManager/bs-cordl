#pragma once
// IWYU pragma private; include "System\Net\Sockets\UdpClient.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Sockets/zzzz__UdpClient_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/Sockets/zzzz__UdpReceiveResult_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::UdpClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::UdpClient::*)(::System::Net::Sockets::AddressFamily)>(&::System::Net::Sockets::UdpClient::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x636b5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Sockets::AddressFamily>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpClient.get_Client
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::Socket* (::System::Net::Sockets::UdpClient::*)()>(&::System::Net::Sockets::UdpClient::get_Client)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636b754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "get_Client", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpClient.set_Client
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::UdpClient::*)(::System::Net::Sockets::Socket*)>(&::System::Net::Sockets::UdpClient::set_Client)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636b75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "set_Client", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpClient.FreeResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::UdpClient::*)()>(&::System::Net::Sockets::UdpClient::FreeResources)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x636b764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "FreeResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpClient.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::UdpClient::*)()>(&::System::Net::Sockets::UdpClient::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x636b7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpClient.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::UdpClient::*)(bool)>(&::System::Net::Sockets::UdpClient::Dispose)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x636b7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { ::i2c::class_of<::System::Net::Sockets::UdpClient*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpClient.CheckForBroadcast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::UdpClient::*)(::System::Net::IPAddress*)>(&::System::Net::Sockets::UdpClient::CheckForBroadcast)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x636b84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "CheckForBroadcast", {}, { ::i2c::type_of<::System::Net::IPAddress*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpClient.IsBroadcast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::IPAddress*)>(&::System::Net::Sockets::UdpClient::IsBroadcast)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x636b8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "IsBroadcast", {}, { ::i2c::type_of<::System::Net::IPAddress*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpClient.BeginSend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::UdpClient::*)(::ArrayW<uint8_t>, int32_t, ::System::Net::IPEndPoint*, ::System::AsyncCallback*,
                                                                                                                      ::System::Object*)>(&::System::Net::Sockets::UdpClient::BeginSend)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x636b930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "BeginSend",
                                                                                     {},
                                                                                     { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::IPEndPoint*>(),
                                                                                       ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpClient.EndSend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::UdpClient::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::UdpClient::EndSend)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x636bb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "EndSend", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpClient.BeginReceive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::UdpClient::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::Sockets::UdpClient::BeginReceive)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x636bbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "BeginReceive", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpClient.EndReceive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::Sockets::UdpClient::*)(::System::IAsyncResult*, ::by_ref<::System::Net::IPEndPoint*>)>(
    &::System::Net::Sockets::UdpClient::EndReceive)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x636bd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(),
                                                             { "EndReceive", {}, { ::i2c::type_of<::System::IAsyncResult*>(), ::i2c::type_of<::by_ref<::System::Net::IPEndPoint*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpClient.SendAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::Net::Sockets::UdpClient::*)(::ArrayW<uint8_t>, int32_t, ::System::Net::IPEndPoint*)>(
    &::System::Net::Sockets::UdpClient::SendAsync)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x636bf08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(),
                                                             { "SendAsync", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpClient.ReceiveAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Sockets::UdpReceiveResult>* (::System::Net::Sockets::UdpClient::*)()>(
    &::System::Net::Sockets::UdpClient::ReceiveAsync)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x636c050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "ReceiveAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpClient.createClientSocket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::UdpClient::*)()>(&::System::Net::Sockets::UdpClient::createClientSocket)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x636b6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "createClientSocket", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpClient._ReceiveAsync_b__65_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::UdpClient::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::Sockets::UdpClient::_ReceiveAsync_b__65_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x636c188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(),
                                                             { "<ReceiveAsync>b__65_0", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpClient._ReceiveAsync_b__65_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::UdpReceiveResult (::System::Net::Sockets::UdpClient::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::UdpClient::_ReceiveAsync_b__65_1)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x636c18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "<ReceiveAsync>b__65_1", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& System::Net::Sockets::UdpClient::__cordl_internal_get_m_ClientSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClientSocket;
}
constexpr ::System::Net::Sockets::Socket* const& System::Net::Sockets::UdpClient::__cordl_internal_get_m_ClientSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClientSocket;
}
constexpr void System::Net::Sockets::UdpClient::__cordl_internal_set_m_ClientSocket(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClientSocket = value;
}
constexpr bool& System::Net::Sockets::UdpClient::__cordl_internal_get_m_Active() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Active;
}
constexpr bool const& System::Net::Sockets::UdpClient::__cordl_internal_get_m_Active() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Active;
}
constexpr void System::Net::Sockets::UdpClient::__cordl_internal_set_m_Active(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Active = value;
}
constexpr ::ArrayW<uint8_t>& System::Net::Sockets::UdpClient::__cordl_internal_get_m_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Net::Sockets::UdpClient::__cordl_internal_get_m_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffer;
}
constexpr void System::Net::Sockets::UdpClient::__cordl_internal_set_m_Buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Buffer = value;
}
constexpr ::System::Net::Sockets::AddressFamily& System::Net::Sockets::UdpClient::__cordl_internal_get_m_Family() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Family;
}
constexpr ::System::Net::Sockets::AddressFamily const& System::Net::Sockets::UdpClient::__cordl_internal_get_m_Family() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Family;
}
constexpr void System::Net::Sockets::UdpClient::__cordl_internal_set_m_Family(::System::Net::Sockets::AddressFamily value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Family = value;
}
constexpr bool& System::Net::Sockets::UdpClient::__cordl_internal_get_m_CleanedUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CleanedUp;
}
constexpr bool const& System::Net::Sockets::UdpClient::__cordl_internal_get_m_CleanedUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CleanedUp;
}
constexpr void System::Net::Sockets::UdpClient::__cordl_internal_set_m_CleanedUp(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CleanedUp = value;
}
constexpr bool& System::Net::Sockets::UdpClient::__cordl_internal_get_m_IsBroadcast() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsBroadcast;
}
constexpr bool const& System::Net::Sockets::UdpClient::__cordl_internal_get_m_IsBroadcast() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsBroadcast;
}
constexpr void System::Net::Sockets::UdpClient::__cordl_internal_set_m_IsBroadcast(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsBroadcast = value;
}
inline void System::Net::Sockets::UdpClient::_ctor(::System::Net::Sockets::AddressFamily family) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Sockets::AddressFamily>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, family);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::UdpClient::get_Client() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "get_Client", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*>(this, ___internal_method);
}
inline void System::Net::Sockets::UdpClient::set_Client(::System::Net::Sockets::Socket* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "set_Client", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Sockets::UdpClient::FreeResources() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "FreeResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::UdpClient::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::UdpClient::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::UdpClient*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Net::Sockets::UdpClient::CheckForBroadcast(::System::Net::IPAddress* ipAddress) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "CheckForBroadcast", {}, { ::i2c::type_of<::System::Net::IPAddress*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ipAddress);
}
inline bool System::Net::Sockets::UdpClient::IsBroadcast(::System::Net::IPAddress* address) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "IsBroadcast", {}, { ::i2c::type_of<::System::Net::IPAddress*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, address);
}
inline ::System::IAsyncResult* System::Net::Sockets::UdpClient::BeginSend(::ArrayW<uint8_t> datagram, int32_t bytes, ::System::Net::IPEndPoint* endPoint, ::System::AsyncCallback* requestCallback,
                                                                          ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "BeginSend",
                                                                                   {},
                                                                                   { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::IPEndPoint*>(),
                                                                                     ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, datagram, bytes, endPoint, requestCallback, state);
}
inline int32_t System::Net::Sockets::UdpClient::EndSend(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "EndSend", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult);
}
inline ::System::IAsyncResult* System::Net::Sockets::UdpClient::BeginReceive(::System::AsyncCallback* requestCallback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(),
                                                                                         { "BeginReceive", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, requestCallback, state);
}
inline ::ArrayW<uint8_t> System::Net::Sockets::UdpClient::EndReceive(::System::IAsyncResult* asyncResult, ::by_ref<::System::Net::IPEndPoint*> remoteEP) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(),
                                                           { "EndReceive", {}, { ::i2c::type_of<::System::IAsyncResult*>(), ::i2c::type_of<::by_ref<::System::Net::IPEndPoint*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, asyncResult, remoteEP);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::Sockets::UdpClient::SendAsync(::ArrayW<uint8_t> datagram, int32_t bytes, ::System::Net::IPEndPoint* endPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(),
                                                           { "SendAsync", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, datagram, bytes, endPoint);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Sockets::UdpReceiveResult>* System::Net::Sockets::UdpClient::ReceiveAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "ReceiveAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Sockets::UdpReceiveResult>*>(this, ___internal_method);
}
inline void System::Net::Sockets::UdpClient::createClientSocket() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "createClientSocket", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::Sockets::UdpClient::_ReceiveAsync_b__65_0(::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(),
                                                           { "<ReceiveAsync>b__65_0", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, state);
}
inline ::System::Net::Sockets::UdpReceiveResult System::Net::Sockets::UdpClient::_ReceiveAsync_b__65_1(::System::IAsyncResult* ar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpClient*>(), { "<ReceiveAsync>b__65_1", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::UdpReceiveResult>(this, ___internal_method, ar);
}
inline ::System::Net::Sockets::UdpClient* System::Net::Sockets::UdpClient::New_ctor(::System::Net::Sockets::AddressFamily family) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::UdpClient*>(family));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::Sockets::UdpClient::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::Sockets::UdpClient::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::UdpClient::UdpClient() {}
