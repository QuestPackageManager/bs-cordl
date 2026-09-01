#pragma once
// IWYU pragma private; include "LiteNetLib\NetSocket.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetSocket_def.hpp"
#include "LiteNetLib/zzzz__INetSocketListener_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Threading/zzzz__ThreadPriority_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetSocket.get_LocalPort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::NetSocket::*)()>(&::LiteNetLib::NetSocket::get_LocalPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a6338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "get_LocalPort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.set_LocalPort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetSocket::*)(int32_t)>(&::LiteNetLib::NetSocket::set_LocalPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a6340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "set_LocalPort", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.get_Ttl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::LiteNetLib::NetSocket::*)()>(&::LiteNetLib::NetSocket::get_Ttl)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58a6348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "get_Ttl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.set_Ttl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetSocket::*)(int16_t)>(&::LiteNetLib::NetSocket::set_Ttl)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x589cffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "set_Ttl", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetSocket::*)(::LiteNetLib::INetSocketListener*)>(&::LiteNetLib::NetSocket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589e88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::INetSocketListener*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.IsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::NetSocket::*)()>(&::LiteNetLib::NetSocket::IsActive)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58a6438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "IsActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.ReceiveLogic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetSocket::*)(::System::Object*)>(&::LiteNetLib::NetSocket::ReceiveLogic)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x58a6444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "ReceiveLogic", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (::LiteNetLib::NetSocket::*)(::System::Net::IPAddress*, ::System::Net::IPAddress*, int32_t, bool, bool, ::System::Threading::ThreadPriority)>(&::LiteNetLib::NetSocket::Bind)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x58a249c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "Bind",
                                                                           {},
                                                                           { ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>(),
                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::ThreadPriority>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.BindSocket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::NetSocket::*)(::System::Net::Sockets::Socket*, ::System::Net::IPEndPoint*, bool)>(&::LiteNetLib::NetSocket::BindSocket)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x58a6974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(),
                                                { "BindSocket", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.SendBroadcast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::NetSocket::*)(::ArrayW<uint8_t>, int32_t, int32_t, int32_t)>(&::LiteNetLib::NetSocket::SendBroadcast)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x58a2e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(),
                                                { "SendBroadcast", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.SendTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::NetSocket::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::IPEndPoint*,
                                                                                            ::by_ref<::System::Net::Sockets::SocketError>)>(&::LiteNetLib::NetSocket::SendTo)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x589d014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "SendTo",
                                                                           {},
                                                                           { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                             ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetSocket::*)(bool)>(&::LiteNetLib::NetSocket::Close)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58a3ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "Close", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& LiteNetLib::NetSocket::__cordl_internal_get__udpSocketv4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____udpSocketv4;
}
constexpr ::System::Net::Sockets::Socket* const& LiteNetLib::NetSocket::__cordl_internal_get__udpSocketv4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____udpSocketv4;
}
constexpr void LiteNetLib::NetSocket::__cordl_internal_set__udpSocketv4(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____udpSocketv4 = value;
}
constexpr ::System::Net::Sockets::Socket*& LiteNetLib::NetSocket::__cordl_internal_get__udpSocketv6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____udpSocketv6;
}
constexpr ::System::Net::Sockets::Socket* const& LiteNetLib::NetSocket::__cordl_internal_get__udpSocketv6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____udpSocketv6;
}
constexpr void LiteNetLib::NetSocket::__cordl_internal_set__udpSocketv6(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____udpSocketv6 = value;
}
constexpr ::System::Threading::Thread*& LiteNetLib::NetSocket::__cordl_internal_get__threadv4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____threadv4;
}
constexpr ::System::Threading::Thread* const& LiteNetLib::NetSocket::__cordl_internal_get__threadv4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____threadv4;
}
constexpr void LiteNetLib::NetSocket::__cordl_internal_set__threadv4(::System::Threading::Thread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____threadv4 = value;
}
constexpr ::System::Threading::Thread*& LiteNetLib::NetSocket::__cordl_internal_get__threadv6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____threadv6;
}
constexpr ::System::Threading::Thread* const& LiteNetLib::NetSocket::__cordl_internal_get__threadv6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____threadv6;
}
constexpr void LiteNetLib::NetSocket::__cordl_internal_set__threadv6(::System::Threading::Thread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____threadv6 = value;
}
constexpr ::LiteNetLib::INetSocketListener*& LiteNetLib::NetSocket::__cordl_internal_get__listener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listener;
}
constexpr ::LiteNetLib::INetSocketListener* const& LiteNetLib::NetSocket::__cordl_internal_get__listener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listener;
}
constexpr void LiteNetLib::NetSocket::__cordl_internal_set__listener(::LiteNetLib::INetSocketListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____listener = value;
}
constexpr int32_t& LiteNetLib::NetSocket::__cordl_internal_get__LocalPort_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocalPort_k__BackingField;
}
constexpr int32_t const& LiteNetLib::NetSocket::__cordl_internal_get__LocalPort_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocalPort_k__BackingField;
}
constexpr void LiteNetLib::NetSocket::__cordl_internal_set__LocalPort_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LocalPort_k__BackingField = value;
}
constexpr bool& LiteNetLib::NetSocket::__cordl_internal_get_IsRunning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsRunning;
}
constexpr bool const& LiteNetLib::NetSocket::__cordl_internal_get_IsRunning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsRunning;
}
constexpr void LiteNetLib::NetSocket::__cordl_internal_set_IsRunning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsRunning = value;
}
inline void LiteNetLib::NetSocket::setStaticF_MulticastAddressV6(::System::Net::IPAddress* value) {
  ::cordl_internals::setStaticField<::System::Net::IPAddress*, "MulticastAddressV6", ::LiteNetLib::NetSocket*>(std::forward<::System::Net::IPAddress*>(value));
}
inline ::System::Net::IPAddress* LiteNetLib::NetSocket::getStaticF_MulticastAddressV6() {
  return ::cordl_internals::getStaticField<::System::Net::IPAddress*, "MulticastAddressV6", ::LiteNetLib::NetSocket*>();
}
inline void LiteNetLib::NetSocket::setStaticF_IPv6Support(bool value) {
  ::cordl_internals::setStaticField<bool, "IPv6Support", ::LiteNetLib::NetSocket*>(std::forward<bool>(value));
}
inline bool LiteNetLib::NetSocket::getStaticF_IPv6Support() {
  return ::cordl_internals::getStaticField<bool, "IPv6Support", ::LiteNetLib::NetSocket*>();
}
inline int32_t LiteNetLib::NetSocket::get_LocalPort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "get_LocalPort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void LiteNetLib::NetSocket::set_LocalPort(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "set_LocalPort", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int16_t LiteNetLib::NetSocket::get_Ttl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "get_Ttl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline void LiteNetLib::NetSocket::set_Ttl(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "set_Ttl", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::NetSocket::_ctor(::LiteNetLib::INetSocketListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::INetSocketListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline bool LiteNetLib::NetSocket::IsActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "IsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void LiteNetLib::NetSocket::ReceiveLogic(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "ReceiveLogic", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline bool LiteNetLib::NetSocket::Bind(::System::Net::IPAddress* addressIPv4, ::System::Net::IPAddress* addressIPv6, int32_t port, bool reuseAddress, bool ipv6,
                                        ::System::Threading::ThreadPriority priority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "Bind",
                                                                         {},
                                                                         { ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>(),
                                                                           ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::ThreadPriority>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, addressIPv4, addressIPv6, port, reuseAddress, ipv6, priority);
}
inline bool LiteNetLib::NetSocket::BindSocket(::System::Net::Sockets::Socket* socket, ::System::Net::IPEndPoint* ep, bool reuseAddress) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(),
                                              { "BindSocket", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, socket, ep, reuseAddress);
}
inline bool LiteNetLib::NetSocket::SendBroadcast(::ArrayW<uint8_t> data, int32_t offset, int32_t size, int32_t port) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(),
                                              { "SendBroadcast", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, offset, size, port);
}
inline int32_t LiteNetLib::NetSocket::SendTo(::ArrayW<uint8_t> data, int32_t offset, int32_t size, ::System::Net::IPEndPoint* remoteEndPoint, ::by_ref<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "SendTo",
                                                                         {},
                                                                         { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                           ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, offset, size, remoteEndPoint, errorCode);
}
inline void LiteNetLib::NetSocket::Close(bool suspend) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetSocket*>(), { "Close", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, suspend);
}
inline ::LiteNetLib::NetSocket* LiteNetLib::NetSocket::New_ctor(::LiteNetLib::INetSocketListener* listener) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::NetSocket*>(listener));
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetSocket::NetSocket() {}
