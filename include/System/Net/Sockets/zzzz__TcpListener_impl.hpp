#pragma once
// IWYU pragma private; include "System/Net/Sockets/TcpListener.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Sockets/zzzz__TcpListener_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::TcpListener._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::TcpListener::*)(::System::Net::IPAddress*, int32_t)>(&::System::Net::Sockets::TcpListener::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x63657e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::TcpListener*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.get_LocalEndpoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::EndPoint* (::System::Net::Sockets::TcpListener::*)()>(&::System::Net::Sockets::TcpListener::get_LocalEndpoint)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6365968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::TcpListener*>(), { "get_LocalEndpoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::TcpListener::*)()>(&::System::Net::Sockets::TcpListener::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6365990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::TcpListener*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::TcpListener::*)(int32_t)>(&::System::Net::Sockets::TcpListener::Start)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6365998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::TcpListener*>(), { "Start", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::TcpListener::*)()>(&::System::Net::Sockets::TcpListener::Stop)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6365b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::TcpListener*>(), { "Stop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.BeginAcceptTcpClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::TcpListener::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::Sockets::TcpListener::BeginAcceptTcpClient)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6365bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::TcpListener*>(),
                                                             { "BeginAcceptTcpClient", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.EndAcceptTcpClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::TcpClient* (::System::Net::Sockets::TcpListener::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::TcpListener::EndAcceptTcpClient)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6365c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::TcpListener*>(), { "EndAcceptTcpClient", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::IPEndPoint*& System::Net::Sockets::TcpListener::__cordl_internal_get_m_ServerSocketEP() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ServerSocketEP;
}
constexpr ::System::Net::IPEndPoint* const& System::Net::Sockets::TcpListener::__cordl_internal_get_m_ServerSocketEP() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ServerSocketEP;
}
constexpr void System::Net::Sockets::TcpListener::__cordl_internal_set_m_ServerSocketEP(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ServerSocketEP = value;
}
constexpr ::System::Net::Sockets::Socket*& System::Net::Sockets::TcpListener::__cordl_internal_get_m_ServerSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ServerSocket;
}
constexpr ::System::Net::Sockets::Socket* const& System::Net::Sockets::TcpListener::__cordl_internal_get_m_ServerSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ServerSocket;
}
constexpr void System::Net::Sockets::TcpListener::__cordl_internal_set_m_ServerSocket(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ServerSocket = value;
}
constexpr bool& System::Net::Sockets::TcpListener::__cordl_internal_get_m_Active() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Active;
}
constexpr bool const& System::Net::Sockets::TcpListener::__cordl_internal_get_m_Active() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Active;
}
constexpr void System::Net::Sockets::TcpListener::__cordl_internal_set_m_Active(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Active = value;
}
constexpr bool& System::Net::Sockets::TcpListener::__cordl_internal_get_m_ExclusiveAddressUse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExclusiveAddressUse;
}
constexpr bool const& System::Net::Sockets::TcpListener::__cordl_internal_get_m_ExclusiveAddressUse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExclusiveAddressUse;
}
constexpr void System::Net::Sockets::TcpListener::__cordl_internal_set_m_ExclusiveAddressUse(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExclusiveAddressUse = value;
}
inline void System::Net::Sockets::TcpListener::_ctor(::System::Net::IPAddress* localaddr, int32_t port) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::TcpListener*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localaddr, port);
}
inline ::System::Net::EndPoint* System::Net::Sockets::TcpListener::get_LocalEndpoint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::TcpListener*>(), { "get_LocalEndpoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::EndPoint*>(this, ___internal_method);
}
inline void System::Net::Sockets::TcpListener::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::TcpListener*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::TcpListener::Start(int32_t backlog) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::TcpListener*>(), { "Start", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, backlog);
}
inline void System::Net::Sockets::TcpListener::Stop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::TcpListener*>(), { "Stop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::Sockets::TcpListener::BeginAcceptTcpClient(::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::TcpListener*>(),
                                                           { "BeginAcceptTcpClient", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, state);
}
inline ::System::Net::Sockets::TcpClient* System::Net::Sockets::TcpListener::EndAcceptTcpClient(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::TcpListener*>(), { "EndAcceptTcpClient", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::TcpClient*>(this, ___internal_method, asyncResult);
}
inline ::System::Net::Sockets::TcpListener* System::Net::Sockets::TcpListener::New_ctor(::System::Net::IPAddress* localaddr, int32_t port) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::TcpListener*>(localaddr, port));
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::TcpListener::TcpListener() {}
