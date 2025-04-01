#pragma once
// IWYU pragma private; include "System/Net/Sockets/TcpClient.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::TcpClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpClient::*)()>(&::System::Net::Sockets::TcpClient::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x43fb814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpClient::*)(::System::Net::Sockets::AddressFamily)>(
    &::System::Net::Sockets::TcpClient::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x43fb834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpClient::*)(::System::Net::Sockets::Socket*)>(
    &::System::Net::Sockets::TcpClient::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x43fb9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpClient.get_Client
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (::System::Net::Sockets::TcpClient::*)()>(
    &::System::Net::Sockets::TcpClient::get_Client)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43fb9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "get_Client",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpClient.set_Client
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpClient::*)(::System::Net::Sockets::Socket*)>(
    &::System::Net::Sockets::TcpClient::set_Client)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43fb9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "set_Client", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpClient.get_Connected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::TcpClient::*)()>(&::System::Net::Sockets::TcpClient::get_Connected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x43fba00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "get_Connected",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpClient.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpClient::*)(::StringW, int32_t)>(&::System::Net::Sockets::TcpClient::Connect)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x43fba1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpClient.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpClient::*)(::System::Net::IPEndPoint*)>(
    &::System::Net::Sockets::TcpClient::Connect)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x43fc0ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpClient.BeginConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::System::Net::Sockets::TcpClient::*)(::StringW, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Sockets::TcpClient::BeginConnect)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x43fc1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "BeginConnect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpClient.EndConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpClient::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::TcpClient::EndConnect)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x43fc218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "EndConnect", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpClient.ConnectAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Net::Sockets::TcpClient::*)(::StringW, int32_t)>(
    &::System::Net::Sockets::TcpClient::ConnectAsync)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x43fc260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "ConnectAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpClient.GetStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::NetworkStream* (::System::Net::Sockets::TcpClient::*)()>(
    &::System::Net::Sockets::TcpClient::GetStream)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x43fc3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "GetStream",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpClient.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpClient::*)()>(&::System::Net::Sockets::TcpClient::Close)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x43fc504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "Close",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpClient.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpClient::*)(bool)>(&::System::Net::Sockets::TcpClient::Dispose)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x43fc5a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpClient.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpClient::*)()>(&::System::Net::Sockets::TcpClient::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x43fc73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpClient.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpClient::*)()>(&::System::Net::Sockets::TcpClient::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x43fc74c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpClient.initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpClient::*)()>(&::System::Net::Sockets::TcpClient::initialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x43fb940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& System::Net::Sockets::TcpClient::__cordl_internal_get_m_ClientSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClientSocket;
}
constexpr ::System::Net::Sockets::Socket* const& System::Net::Sockets::TcpClient::__cordl_internal_get_m_ClientSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClientSocket;
}
constexpr void System::Net::Sockets::TcpClient::__cordl_internal_set_m_ClientSocket(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ClientSocket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::Sockets::TcpClient::__cordl_internal_get_m_Active() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Active;
}
constexpr bool const& System::Net::Sockets::TcpClient::__cordl_internal_get_m_Active() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Active;
}
constexpr void System::Net::Sockets::TcpClient::__cordl_internal_set_m_Active(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Active = value;
}
constexpr ::System::Net::Sockets::NetworkStream*& System::Net::Sockets::TcpClient::__cordl_internal_get_m_DataStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DataStream;
}
constexpr ::System::Net::Sockets::NetworkStream* const& System::Net::Sockets::TcpClient::__cordl_internal_get_m_DataStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DataStream;
}
constexpr void System::Net::Sockets::TcpClient::__cordl_internal_set_m_DataStream(::System::Net::Sockets::NetworkStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DataStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Sockets::AddressFamily& System::Net::Sockets::TcpClient::__cordl_internal_get_m_Family() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Family;
}
constexpr ::System::Net::Sockets::AddressFamily const& System::Net::Sockets::TcpClient::__cordl_internal_get_m_Family() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Family;
}
constexpr void System::Net::Sockets::TcpClient::__cordl_internal_set_m_Family(::System::Net::Sockets::AddressFamily value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Family = value;
}
constexpr bool& System::Net::Sockets::TcpClient::__cordl_internal_get_m_CleanedUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CleanedUp;
}
constexpr bool const& System::Net::Sockets::TcpClient::__cordl_internal_get_m_CleanedUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CleanedUp;
}
constexpr void System::Net::Sockets::TcpClient::__cordl_internal_set_m_CleanedUp(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CleanedUp = value;
}
inline void System::Net::Sockets::TcpClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::TcpClient::_ctor(::System::Net::Sockets::AddressFamily family) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, family);
}
inline void System::Net::Sockets::TcpClient::_ctor(::System::Net::Sockets::Socket* acceptedSocket) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, acceptedSocket);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::TcpClient::get_Client() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "get_Client",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*, false>(this, ___internal_method);
}
inline void System::Net::Sockets::TcpClient::set_Client(::System::Net::Sockets::Socket* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "set_Client", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::Sockets::TcpClient::get_Connected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "get_Connected",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::Sockets::TcpClient::Connect(::StringW hostname, int32_t port) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hostname, port);
}
inline void System::Net::Sockets::TcpClient::Connect(::System::Net::IPEndPoint* remoteEP) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEP);
}
inline ::System::IAsyncResult* System::Net::Sockets::TcpClient::BeginConnect(::StringW host, int32_t port, ::System::AsyncCallback* requestCallback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "BeginConnect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, host, port, requestCallback, state);
}
inline void System::Net::Sockets::TcpClient::EndConnect(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "EndConnect", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task* System::Net::Sockets::TcpClient::ConnectAsync(::StringW host, int32_t port) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "ConnectAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, host, port);
}
inline ::System::Net::Sockets::NetworkStream* System::Net::Sockets::TcpClient::GetStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "GetStream",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::NetworkStream*, false>(this, ___internal_method);
}
inline void System::Net::Sockets::TcpClient::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "Close",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::TcpClient::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Net::Sockets::TcpClient::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::TcpClient::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::TcpClient::initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpClient*>::get(), "initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::TcpClient* System::Net::Sockets::TcpClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::TcpClient*>());
}
inline ::System::Net::Sockets::TcpClient* System::Net::Sockets::TcpClient::New_ctor(::System::Net::Sockets::AddressFamily family) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::TcpClient*>(family));
}
inline ::System::Net::Sockets::TcpClient* System::Net::Sockets::TcpClient::New_ctor(::System::Net::Sockets::Socket* acceptedSocket) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::TcpClient*>(acceptedSocket));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::Sockets::TcpClient::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::Sockets::TcpClient::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::TcpClient::TcpClient() {}
