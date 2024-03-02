#pragma once
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpListener::*)(::System::Net::IPAddress*, int32_t)>(
    &::System::Net::Sockets::TcpListener::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x29e71a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.get_LocalEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::EndPoint* (::System::Net::Sockets::TcpListener::*)()>(
    &::System::Net::Sockets::TcpListener::get_LocalEndpoint)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29e7340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(), "get_LocalEndpoint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpListener::*)()>(&::System::Net::Sockets::TcpListener::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e7370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpListener::*)(int32_t)>(&::System::Net::Sockets::TcpListener::Start)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x29e7378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpListener::*)()>(&::System::Net::Sockets::TcpListener::Stop)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x29e7504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(), "Stop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.BeginAcceptTcpClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::TcpListener::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::Sockets::TcpListener::BeginAcceptTcpClient)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x29e75c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(), "BeginAcceptTcpClient", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.EndAcceptTcpClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::TcpClient* (::System::Net::Sockets::TcpListener::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::TcpListener::EndAcceptTcpClient)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x29e767c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(), "EndAcceptTcpClient", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Net::IPEndPoint*& System::Net::Sockets::TcpListener::__cordl_internal_get_m_ServerSocketEP() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ServerSocketEP;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& System::Net::Sockets::TcpListener::__cordl_internal_get_m_ServerSocketEP() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ServerSocketEP;
}
constexpr void System::Net::Sockets::TcpListener::__cordl_internal_set_m_ServerSocketEP(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ServerSocketEP)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Sockets::Socket*& System::Net::Sockets::TcpListener::__cordl_internal_get_m_ServerSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ServerSocket;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& System::Net::Sockets::TcpListener::__cordl_internal_get_m_ServerSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ServerSocket;
}
constexpr void System::Net::Sockets::TcpListener::__cordl_internal_set_m_ServerSocket(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ServerSocket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::System::Net::Sockets::TcpListener* System::Net::Sockets::TcpListener::New_ctor(::System::Net::IPAddress* localaddr, int32_t port) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::TcpListener*>(localaddr, port));
}
inline void System::Net::Sockets::TcpListener::_ctor(::System::Net::IPAddress* localaddr, int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localaddr, port);
}
inline ::System::Net::EndPoint* System::Net::Sockets::TcpListener::get_LocalEndpoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(), "get_LocalEndpoint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::EndPoint*, false>(this, ___internal_method);
}
inline void System::Net::Sockets::TcpListener::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::TcpListener::Start(int32_t backlog) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, backlog);
}
inline void System::Net::Sockets::TcpListener::Stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(), "Stop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::Sockets::TcpListener::BeginAcceptTcpClient(::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(), "BeginAcceptTcpClient", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, state);
}
inline ::System::Net::Sockets::TcpClient* System::Net::Sockets::TcpListener::EndAcceptTcpClient(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(), "EndAcceptTcpClient", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::TcpClient*, false>(this, ___internal_method, asyncResult);
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::TcpListener::TcpListener() {}
