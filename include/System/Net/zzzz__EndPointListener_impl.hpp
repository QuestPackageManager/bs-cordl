#pragma once
// IWYU pragma private; include "System\Net\EndPointListener.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__EndPointListener_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncEventArgs_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__HttpConnection_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/zzzz__ListenerPrefix_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::EndPointListener._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::EndPointListener::*)(::System::Net::HttpListener*, ::System::Net::IPAddress*, int32_t, bool)>(
    &::System::Net::EndPointListener::_ctor)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x642cde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Net::HttpListener*>(), ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.get_Listener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpListener* (::System::Net::EndPointListener::*)()>(&::System::Net::EndPointListener::get_Listener)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x642d5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "get_Listener", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Sockets::Socket*, ::System::Net::Sockets::SocketAsyncEventArgs*, ::by_ref<::System::Net::Sockets::Socket*>)>(
    &::System::Net::EndPointListener::Accept)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x642d494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "Accept",
                                                                                   {},
                                                                                   { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>(),
                                                                                     ::i2c::type_of<::by_ref<::System::Net::Sockets::Socket*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.ProcessAccept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(&::System::Net::EndPointListener::ProcessAccept)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x642d5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "ProcessAccept", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.OnAccept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Net::Sockets::SocketAsyncEventArgs*)>(&::System::Net::EndPointListener::OnAccept)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x642dc60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(),
                                                             { "OnAccept", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.RemoveConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::EndPointListener::*)(::System::Net::HttpConnection*)>(&::System::Net::EndPointListener::RemoveConnection)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x642dc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "RemoveConnection", {}, { ::i2c::type_of<::System::Net::HttpConnection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.BindContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::EndPointListener::*)(::System::Net::HttpListenerContext*)>(&::System::Net::EndPointListener::BindContext)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x642dd70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "BindContext", {}, { ::i2c::type_of<::System::Net::HttpListenerContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.UnbindContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::EndPointListener::*)(::System::Net::HttpListenerContext*)>(&::System::Net::EndPointListener::UnbindContext)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x642e3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "UnbindContext", {}, { ::i2c::type_of<::System::Net::HttpListenerContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.SearchListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpListener* (::System::Net::EndPointListener::*)(::System::Uri*, ::by_ref<::System::Net::ListenerPrefix*>)>(
    &::System::Net::EndPointListener::SearchListener)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x642ddc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(),
                                                             { "SearchListener", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Net::ListenerPrefix*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.MatchFromList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpListener* (
    ::System::Net::EndPointListener::*)(::StringW, ::StringW, ::System::Collections::ArrayList*, ::by_ref<::System::Net::ListenerPrefix*>)>(&::System::Net::EndPointListener::MatchFromList)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x642e5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "MatchFromList",
                                                                                   {},
                                                                                   { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::ArrayList*>(),
                                                                                     ::i2c::type_of<::by_ref<::System::Net::ListenerPrefix*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.AddSpecial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::EndPointListener::*)(::System::Collections::ArrayList*, ::System::Net::ListenerPrefix*)>(
    &::System::Net::EndPointListener::AddSpecial)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x642e8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(),
                                                             { "AddSpecial", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Net::ListenerPrefix*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.RemoveSpecial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::EndPointListener::*)(::System::Collections::ArrayList*, ::System::Net::ListenerPrefix*)>(
    &::System::Net::EndPointListener::RemoveSpecial)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x642ec04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(),
                                                             { "RemoveSpecial", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Net::ListenerPrefix*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.CheckIfRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::EndPointListener::*)()>(&::System::Net::EndPointListener::CheckIfRemove)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x642ecf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "CheckIfRemove", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::EndPointListener::*)()>(&::System::Net::EndPointListener::Close)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x642f018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.AddPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::EndPointListener::*)(::System::Net::ListenerPrefix*, ::System::Net::HttpListener*)>(
    &::System::Net::EndPointListener::AddPrefix)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x642f508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(),
                                                             { "AddPrefix", {}, { ::i2c::type_of<::System::Net::ListenerPrefix*>(), ::i2c::type_of<::System::Net::HttpListener*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.RemovePrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::EndPointListener::*)(::System::Net::ListenerPrefix*, ::System::Net::HttpListener*)>(
    &::System::Net::EndPointListener::RemovePrefix)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x642f888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(),
                                                             { "RemovePrefix", {}, { ::i2c::type_of<::System::Net::ListenerPrefix*>(), ::i2c::type_of<::System::Net::HttpListener*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::HttpListener*& System::Net::EndPointListener::__cordl_internal_get_listener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listener;
}
constexpr ::System::Net::HttpListener* const& System::Net::EndPointListener::__cordl_internal_get_listener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listener;
}
constexpr void System::Net::EndPointListener::__cordl_internal_set_listener(::System::Net::HttpListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___listener = value;
}
constexpr ::System::Net::IPEndPoint*& System::Net::EndPointListener::__cordl_internal_get_endpoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endpoint;
}
constexpr ::System::Net::IPEndPoint* const& System::Net::EndPointListener::__cordl_internal_get_endpoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endpoint;
}
constexpr void System::Net::EndPointListener::__cordl_internal_set_endpoint(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endpoint = value;
}
constexpr ::System::Net::Sockets::Socket*& System::Net::EndPointListener::__cordl_internal_get_sock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sock;
}
constexpr ::System::Net::Sockets::Socket* const& System::Net::EndPointListener::__cordl_internal_get_sock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sock;
}
constexpr void System::Net::EndPointListener::__cordl_internal_set_sock(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sock = value;
}
constexpr ::System::Collections::Hashtable*& System::Net::EndPointListener::__cordl_internal_get_prefixes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixes;
}
constexpr ::System::Collections::Hashtable* const& System::Net::EndPointListener::__cordl_internal_get_prefixes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixes;
}
constexpr void System::Net::EndPointListener::__cordl_internal_set_prefixes(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefixes = value;
}
constexpr ::System::Collections::ArrayList*& System::Net::EndPointListener::__cordl_internal_get_unhandled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhandled;
}
constexpr ::System::Collections::ArrayList* const& System::Net::EndPointListener::__cordl_internal_get_unhandled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhandled;
}
constexpr void System::Net::EndPointListener::__cordl_internal_set_unhandled(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unhandled = value;
}
constexpr ::System::Collections::ArrayList*& System::Net::EndPointListener::__cordl_internal_get_all() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___all;
}
constexpr ::System::Collections::ArrayList* const& System::Net::EndPointListener::__cordl_internal_get_all() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___all;
}
constexpr void System::Net::EndPointListener::__cordl_internal_set_all(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___all = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& System::Net::EndPointListener::__cordl_internal_get_cert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* const& System::Net::EndPointListener::__cordl_internal_get_cert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr void System::Net::EndPointListener::__cordl_internal_set_cert(::System::Security::Cryptography::X509Certificates::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cert = value;
}
constexpr bool& System::Net::EndPointListener::__cordl_internal_get_secure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secure;
}
constexpr bool const& System::Net::EndPointListener::__cordl_internal_get_secure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secure;
}
constexpr void System::Net::EndPointListener::__cordl_internal_set_secure(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___secure = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection*, ::System::Net::HttpConnection*>*& System::Net::EndPointListener::__cordl_internal_get_unregistered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unregistered;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection*, ::System::Net::HttpConnection*>* const&
System::Net::EndPointListener::__cordl_internal_get_unregistered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unregistered;
}
constexpr void System::Net::EndPointListener::__cordl_internal_set_unregistered(::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection*, ::System::Net::HttpConnection*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unregistered = value;
}
inline void System::Net::EndPointListener::_ctor(::System::Net::HttpListener* listener, ::System::Net::IPAddress* addr, int32_t port, bool secure) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Net::HttpListener*>(), ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener, addr, port, secure);
}
inline ::System::Net::HttpListener* System::Net::EndPointListener::get_Listener() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "get_Listener", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListener*>(this, ___internal_method);
}
inline void System::Net::EndPointListener::Accept(::System::Net::Sockets::Socket* socket, ::System::Net::Sockets::SocketAsyncEventArgs* e, ::by_ref<::System::Net::Sockets::Socket*> accepted) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "Accept",
                                                                                 {},
                                                                                 { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>(),
                                                                                   ::i2c::type_of<::by_ref<::System::Net::Sockets::Socket*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, socket, e, accepted);
}
inline void System::Net::EndPointListener::ProcessAccept(::System::Net::Sockets::SocketAsyncEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "ProcessAccept", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args);
}
inline void System::Net::EndPointListener::OnAccept(::System::Object* sender, ::System::Net::Sockets::SocketAsyncEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(),
                                                           { "OnAccept", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sender, e);
}
inline void System::Net::EndPointListener::RemoveConnection(::System::Net::HttpConnection* conn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "RemoveConnection", {}, { ::i2c::type_of<::System::Net::HttpConnection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline bool System::Net::EndPointListener::BindContext(::System::Net::HttpListenerContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "BindContext", {}, { ::i2c::type_of<::System::Net::HttpListenerContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void System::Net::EndPointListener::UnbindContext(::System::Net::HttpListenerContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "UnbindContext", {}, { ::i2c::type_of<::System::Net::HttpListenerContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::System::Net::HttpListener* System::Net::EndPointListener::SearchListener(::System::Uri* uri, ::by_ref<::System::Net::ListenerPrefix*> prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(),
                                                           { "SearchListener", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Net::ListenerPrefix*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListener*>(this, ___internal_method, uri, prefix);
}
inline ::System::Net::HttpListener* System::Net::EndPointListener::MatchFromList(::StringW host, ::StringW path, ::System::Collections::ArrayList* list,
                                                                                 ::by_ref<::System::Net::ListenerPrefix*> prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "MatchFromList",
                                                                                 {},
                                                                                 { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::ArrayList*>(),
                                                                                   ::i2c::type_of<::by_ref<::System::Net::ListenerPrefix*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListener*>(this, ___internal_method, host, path, list, prefix);
}
inline void System::Net::EndPointListener::AddSpecial(::System::Collections::ArrayList* coll, ::System::Net::ListenerPrefix* prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(),
                                                           { "AddSpecial", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Net::ListenerPrefix*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coll, prefix);
}
inline bool System::Net::EndPointListener::RemoveSpecial(::System::Collections::ArrayList* coll, ::System::Net::ListenerPrefix* prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(),
                                                           { "RemoveSpecial", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Net::ListenerPrefix*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, coll, prefix);
}
inline void System::Net::EndPointListener::CheckIfRemove() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "CheckIfRemove", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::EndPointListener::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::EndPointListener::AddPrefix(::System::Net::ListenerPrefix* prefix, ::System::Net::HttpListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(),
                                                           { "AddPrefix", {}, { ::i2c::type_of<::System::Net::ListenerPrefix*>(), ::i2c::type_of<::System::Net::HttpListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, listener);
}
inline void System::Net::EndPointListener::RemovePrefix(::System::Net::ListenerPrefix* prefix, ::System::Net::HttpListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointListener*>(),
                                                           { "RemovePrefix", {}, { ::i2c::type_of<::System::Net::ListenerPrefix*>(), ::i2c::type_of<::System::Net::HttpListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, listener);
}
inline ::System::Net::EndPointListener* System::Net::EndPointListener::New_ctor(::System::Net::HttpListener* listener, ::System::Net::IPAddress* addr, int32_t port, bool secure) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::EndPointListener*>(listener, addr, port, secure));
}
// Ctor Parameters []
constexpr ::System::Net::EndPointListener::EndPointListener() {}
