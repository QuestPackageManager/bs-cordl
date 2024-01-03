#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__EndPointListener_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Net/zzzz__ListenerPrefix_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncEventArgs_def.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Net/zzzz__HttpConnection_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::EndPointListener._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::EndPointListener::*)(::System::Net::HttpListener*, ::System::Net::IPAddress*, int32_t, bool)>(
    &::System::Net::EndPointListener::_ctor)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x29c07b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.get_Listener
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpListener* (::System::Net::EndPointListener::*)()>(
    &::System::Net::EndPointListener::get_Listener)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c0f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "get_Listener",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.Accept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Net::Sockets::Socket*, ::System::Net::Sockets::SocketAsyncEventArgs*, ByRef<::System::Net::Sockets::Socket*>)>(&::System::Net::EndPointListener::Accept)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x29c0e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "Accept", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::Socket*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.ProcessAccept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(&::System::Net::EndPointListener::ProcessAccept)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x29c0f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "ProcessAccept", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.OnAccept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::Net::Sockets::SocketAsyncEventArgs*)>(
    &::System::Net::EndPointListener::OnAccept)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c15a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "OnAccept", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.RemoveConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::EndPointListener::*)(::System::Net::HttpConnection*)>(
    &::System::Net::EndPointListener::RemoveConnection)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x29c15b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "RemoveConnection", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpConnection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.BindContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::EndPointListener::*)(::System::Net::HttpListenerContext*)>(
    &::System::Net::EndPointListener::BindContext)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x29c16b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "BindContext", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.UnbindContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::EndPointListener::*)(::System::Net::HttpListenerContext*)>(
    &::System::Net::EndPointListener::UnbindContext)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x29c1d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "UnbindContext", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.SearchListener
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Net::HttpListener* (::System::Net::EndPointListener::*)(::System::Uri*, ByRef<::System::Net::ListenerPrefix*>)>(&::System::Net::EndPointListener::SearchListener)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x29c1704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "SearchListener", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::ListenerPrefix*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.MatchFromList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpListener* (
    ::System::Net::EndPointListener::*)(::StringW, ::StringW, ::System::Collections::ArrayList*, ByRef<::System::Net::ListenerPrefix*>)>(&::System::Net::EndPointListener::MatchFromList)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x29c1f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "MatchFromList", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::ListenerPrefix*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.AddSpecial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::EndPointListener::*)(::System::Collections::ArrayList*, ::System::Net::ListenerPrefix*)>(
    &::System::Net::EndPointListener::AddSpecial)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x29c227c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "AddSpecial", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ListenerPrefix*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.RemoveSpecial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::EndPointListener::*)(::System::Collections::ArrayList*, ::System::Net::ListenerPrefix*)>(
    &::System::Net::EndPointListener::RemoveSpecial)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x29c25e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "RemoveSpecial", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ListenerPrefix*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.CheckIfRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::EndPointListener::*)()>(&::System::Net::EndPointListener::CheckIfRemove)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x29c26d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "CheckIfRemove",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::EndPointListener::*)()>(&::System::Net::EndPointListener::Close)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x29c29fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "Close",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.AddPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::EndPointListener::*)(::System::Net::ListenerPrefix*, ::System::Net::HttpListener*)>(
    &::System::Net::EndPointListener::AddPrefix)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x29c2f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "AddPrefix", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ListenerPrefix*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointListener.RemovePrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::EndPointListener::*)(::System::Net::ListenerPrefix*, ::System::Net::HttpListener*)>(
    &::System::Net::EndPointListener::RemovePrefix)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x29c329c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "RemovePrefix", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ListenerPrefix*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Net::HttpListener*& System::Net::EndPointListener::__get_listener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listener;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListener*> const& System::Net::EndPointListener::__get_listener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listener;
}
constexpr void System::Net::EndPointListener::__set_listener(::System::Net::HttpListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___listener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::IPEndPoint*& System::Net::EndPointListener::__get_endpoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endpoint;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& System::Net::EndPointListener::__get_endpoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endpoint;
}
constexpr void System::Net::EndPointListener::__set_endpoint(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___endpoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Sockets::Socket*& System::Net::EndPointListener::__get_sock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& System::Net::EndPointListener::__get_sock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sock;
}
constexpr void System::Net::EndPointListener::__set_sock(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Net::EndPointListener::__get_prefixes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Net::EndPointListener::__get_prefixes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixes;
}
constexpr void System::Net::EndPointListener::__set_prefixes(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefixes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Net::EndPointListener::__get_unhandled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhandled;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Net::EndPointListener::__get_unhandled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhandled;
}
constexpr void System::Net::EndPointListener::__set_unhandled(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unhandled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Net::EndPointListener::__get_all() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___all;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Net::EndPointListener::__get_all() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___all;
}
constexpr void System::Net::EndPointListener::__set_all(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___all)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& System::Net::EndPointListener::__get_cert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> const& System::Net::EndPointListener::__get_cert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr void System::Net::EndPointListener::__set_cert(::System::Security::Cryptography::X509Certificates::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cert)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::EndPointListener::__get_secure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secure;
}
constexpr bool const& System::Net::EndPointListener::__get_secure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secure;
}
constexpr void System::Net::EndPointListener::__set_secure(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___secure = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection*, ::System::Net::HttpConnection*>*& System::Net::EndPointListener::__get_unregistered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unregistered;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection*, ::System::Net::HttpConnection*>*> const&
System::Net::EndPointListener::__get_unregistered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unregistered;
}
constexpr void System::Net::EndPointListener::__set_unregistered(::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection*, ::System::Net::HttpConnection*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unregistered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::EndPointListener* System::Net::EndPointListener::New_ctor(::System::Net::HttpListener* listener, ::System::Net::IPAddress* addr, int32_t port, bool secure) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::EndPointListener*>(listener, addr, port, secure));
}
inline void System::Net::EndPointListener::_ctor(::System::Net::HttpListener* listener, ::System::Net::IPAddress* addr, int32_t port, bool secure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listener, addr, port, secure);
}
inline ::System::Net::HttpListener* System::Net::EndPointListener::get_Listener() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "get_Listener",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListener*, false>(this, ___internal_method);
}
inline void System::Net::EndPointListener::Accept(::System::Net::Sockets::Socket* socket, ::System::Net::Sockets::SocketAsyncEventArgs* e, ByRef<::System::Net::Sockets::Socket*> accepted) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "Accept", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::Socket*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, socket, e, accepted);
}
inline void System::Net::EndPointListener::ProcessAccept(::System::Net::Sockets::SocketAsyncEventArgs* args) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "ProcessAccept", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, args);
}
inline void System::Net::EndPointListener::OnAccept(::System::Object* sender, ::System::Net::Sockets::SocketAsyncEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "OnAccept", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sender, e);
}
inline void System::Net::EndPointListener::RemoveConnection(::System::Net::HttpConnection* conn) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "RemoveConnection", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, conn);
}
inline bool System::Net::EndPointListener::BindContext(::System::Net::HttpListenerContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "BindContext", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context);
}
inline void System::Net::EndPointListener::UnbindContext(::System::Net::HttpListenerContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "UnbindContext", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline ::System::Net::HttpListener* System::Net::EndPointListener::SearchListener(::System::Uri* uri, ByRef<::System::Net::ListenerPrefix*> prefix) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "SearchListener", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::ListenerPrefix*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListener*, false>(this, ___internal_method, uri, prefix);
}
inline ::System::Net::HttpListener* System::Net::EndPointListener::MatchFromList(::StringW host, ::StringW path, ::System::Collections::ArrayList* list, ByRef<::System::Net::ListenerPrefix*> prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "MatchFromList", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::ListenerPrefix*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListener*, false>(this, ___internal_method, host, path, list, prefix);
}
inline void System::Net::EndPointListener::AddSpecial(::System::Collections::ArrayList* coll, ::System::Net::ListenerPrefix* prefix) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "AddSpecial", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ListenerPrefix*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, coll, prefix);
}
inline bool System::Net::EndPointListener::RemoveSpecial(::System::Collections::ArrayList* coll, ::System::Net::ListenerPrefix* prefix) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "RemoveSpecial", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ListenerPrefix*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, coll, prefix);
}
inline void System::Net::EndPointListener::CheckIfRemove() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "CheckIfRemove",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::EndPointListener::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "Close",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::EndPointListener::AddPrefix(::System::Net::ListenerPrefix* prefix, ::System::Net::HttpListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "AddPrefix", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ListenerPrefix*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, listener);
}
inline void System::Net::EndPointListener::RemovePrefix(::System::Net::ListenerPrefix* prefix, ::System::Net::HttpListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointListener*>::get(), "RemovePrefix", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ListenerPrefix*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, listener);
}
// Ctor Parameters []
constexpr ::System::Net::EndPointListener::EndPointListener() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
