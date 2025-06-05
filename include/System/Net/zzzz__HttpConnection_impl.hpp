#pragma once
// IWYU pragma private; include "System/Net/HttpConnection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpConnection_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__EndPointListener_def.hpp"
#include "System/Net/zzzz__HttpConnection_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/zzzz__ListenerPrefix_def.hpp"
#include "System/Net/zzzz__RequestStream_def.hpp"
#include "System/Net/zzzz__ResponseStream_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::HttpConnection_InputState::HttpConnection_InputState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::HttpConnection_InputState::HttpConnection_InputState() {}
constexpr ::System::Net::HttpConnection_InputState System::Net::HttpConnection_InputState::RequestLine{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::HttpConnection_InputState System::Net::HttpConnection_InputState::Headers{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::HttpConnection_LineState::HttpConnection_LineState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::HttpConnection_LineState::HttpConnection_LineState() {}
constexpr ::System::Net::HttpConnection_LineState System::Net::HttpConnection_LineState::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::HttpConnection_LineState System::Net::HttpConnection_LineState::CR{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::HttpConnection_LineState System::Net::HttpConnection_LineState::LF{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Net::HttpConnection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)(
    ::System::Net::Sockets::Socket*, ::System::Net::EndPointListener*, bool, ::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&::System::Net::HttpConnection::_ctor)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x44c11ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPointListener*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::Init)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x44c4fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.get_Reuses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::get_Reuses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44c5134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "get_Reuses",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.get_LocalEndPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::get_LocalEndPoint)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x44c513c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "get_LocalEndPoint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.get_IsSecure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::get_IsSecure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44c51f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "get_IsSecure",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.set_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)(::System::Net::ListenerPrefix*)>(
    &::System::Net::HttpConnection::set_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44c51fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "set_Prefix", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ListenerPrefix*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.OnTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)(::System::Object*)>(&::System::Net::HttpConnection::OnTimeout)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x44c5204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "OnTimeout", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.BeginReadRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::BeginReadRequest)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x44c1438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "BeginReadRequest",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.GetRequestStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::RequestStream* (::System::Net::HttpConnection::*)(bool, int64_t)>(
    &::System::Net::HttpConnection::GetRequestStream)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x44c5350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "GetRequestStream", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.GetResponseStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ResponseStream* (::System::Net::HttpConnection::*)()>(
    &::System::Net::HttpConnection::GetResponseStream)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x44c5498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "GetResponseStream",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.OnRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Net::HttpConnection::OnRead)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x44c5560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "OnRead", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.OnReadInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)(::System::IAsyncResult*)>(&::System::Net::HttpConnection::OnReadInternal)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x44c5634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "OnReadInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.RemoveConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::RemoveConnection)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x44c6278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "RemoveConnection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.ProcessInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpConnection::*)(::System::IO::MemoryStream*)>(&::System::Net::HttpConnection::ProcessInput)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x44c598c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "ProcessInput", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.ReadLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::Net::HttpConnection::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ByRef<int32_t>)>(&::System::Net::HttpConnection::ReadLine)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x44c6678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "ReadLine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.SendError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)(::StringW, int32_t)>(&::System::Net::HttpConnection::SendError)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x44bd080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "SendError", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.SendError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::SendError)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x44c596c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "SendError",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.Unbind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::Unbind)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x44c5320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "Unbind",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.CloseSocket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::CloseSocket)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x44c521c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "CloseSocket",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)(bool)>(&::System::Net::HttpConnection::Close)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x44c2cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "Close", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.__ctor_b__24_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpConnection::*)(
    ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(
    &::System::Net::HttpConnection::__ctor_b__24_0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x44c78a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "<.ctor>b__24_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslPolicyErrors>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& System::Net::HttpConnection::__cordl_internal_get_sock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sock;
}
constexpr ::System::Net::Sockets::Socket* const& System::Net::HttpConnection::__cordl_internal_get_sock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sock;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_sock(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Stream*& System::Net::HttpConnection::__cordl_internal_get_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr ::System::IO::Stream* const& System::Net::HttpConnection::__cordl_internal_get_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::EndPointListener*& System::Net::HttpConnection::__cordl_internal_get_epl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___epl;
}
constexpr ::System::Net::EndPointListener* const& System::Net::HttpConnection::__cordl_internal_get_epl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___epl;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_epl(::System::Net::EndPointListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___epl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::MemoryStream*& System::Net::HttpConnection::__cordl_internal_get_ms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ms;
}
constexpr ::System::IO::MemoryStream* const& System::Net::HttpConnection::__cordl_internal_get_ms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ms;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_ms(::System::IO::MemoryStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Net::HttpConnection::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Net::HttpConnection::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::HttpListenerContext*& System::Net::HttpConnection::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::System::Net::HttpListenerContext* const& System::Net::HttpConnection::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_context(::System::Net::HttpListenerContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::StringBuilder*& System::Net::HttpConnection::__cordl_internal_get_current_line() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current_line;
}
constexpr ::System::Text::StringBuilder* const& System::Net::HttpConnection::__cordl_internal_get_current_line() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current_line;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_current_line(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___current_line)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::ListenerPrefix*& System::Net::HttpConnection::__cordl_internal_get_prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr ::System::Net::ListenerPrefix* const& System::Net::HttpConnection::__cordl_internal_get_prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_prefix(::System::Net::ListenerPrefix* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::RequestStream*& System::Net::HttpConnection::__cordl_internal_get_i_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i_stream;
}
constexpr ::System::Net::RequestStream* const& System::Net::HttpConnection::__cordl_internal_get_i_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i_stream;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_i_stream(::System::Net::RequestStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___i_stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::ResponseStream*& System::Net::HttpConnection::__cordl_internal_get_o_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o_stream;
}
constexpr ::System::Net::ResponseStream* const& System::Net::HttpConnection::__cordl_internal_get_o_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o_stream;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_o_stream(::System::Net::ResponseStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___o_stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpConnection::__cordl_internal_get_chunked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunked;
}
constexpr bool const& System::Net::HttpConnection::__cordl_internal_get_chunked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunked;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_chunked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunked = value;
}
constexpr int32_t& System::Net::HttpConnection::__cordl_internal_get_reuses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reuses;
}
constexpr int32_t const& System::Net::HttpConnection::__cordl_internal_get_reuses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reuses;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_reuses(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reuses = value;
}
constexpr bool& System::Net::HttpConnection::__cordl_internal_get_context_bound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context_bound;
}
constexpr bool const& System::Net::HttpConnection::__cordl_internal_get_context_bound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context_bound;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_context_bound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context_bound = value;
}
constexpr bool& System::Net::HttpConnection::__cordl_internal_get_secure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secure;
}
constexpr bool const& System::Net::HttpConnection::__cordl_internal_get_secure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secure;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_secure(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___secure = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& System::Net::HttpConnection::__cordl_internal_get_cert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* const& System::Net::HttpConnection::__cordl_internal_get_cert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_cert(::System::Security::Cryptography::X509Certificates::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cert)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::HttpConnection::__cordl_internal_get_s_timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_timeout;
}
constexpr int32_t const& System::Net::HttpConnection::__cordl_internal_get_s_timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_timeout;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_s_timeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s_timeout = value;
}
constexpr ::System::Threading::Timer*& System::Net::HttpConnection::__cordl_internal_get_timer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timer;
}
constexpr ::System::Threading::Timer* const& System::Net::HttpConnection::__cordl_internal_get_timer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timer;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_timer(::System::Threading::Timer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___timer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::IPEndPoint*& System::Net::HttpConnection::__cordl_internal_get_local_ep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___local_ep;
}
constexpr ::System::Net::IPEndPoint* const& System::Net::HttpConnection::__cordl_internal_get_local_ep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___local_ep;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_local_ep(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___local_ep)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::HttpListener*& System::Net::HttpConnection::__cordl_internal_get_last_listener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___last_listener;
}
constexpr ::System::Net::HttpListener* const& System::Net::HttpConnection::__cordl_internal_get_last_listener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___last_listener;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_last_listener(::System::Net::HttpListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___last_listener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Net::HttpConnection::__cordl_internal_get_client_cert_errors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client_cert_errors;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Net::HttpConnection::__cordl_internal_get_client_cert_errors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client_cert_errors;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_client_cert_errors(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___client_cert_errors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2*& System::Net::HttpConnection::__cordl_internal_get_client_cert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client_cert;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2* const& System::Net::HttpConnection::__cordl_internal_get_client_cert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client_cert;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_client_cert(::System::Security::Cryptography::X509Certificates::X509Certificate2* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___client_cert)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Security::SslStream*& System::Net::HttpConnection::__cordl_internal_get_ssl_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ssl_stream;
}
constexpr ::System::Net::Security::SslStream* const& System::Net::HttpConnection::__cordl_internal_get_ssl_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ssl_stream;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_ssl_stream(::System::Net::Security::SslStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ssl_stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::HttpConnection_InputState& System::Net::HttpConnection::__cordl_internal_get_input_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input_state;
}
constexpr ::System::Net::HttpConnection_InputState const& System::Net::HttpConnection::__cordl_internal_get_input_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input_state;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_input_state(::System::Net::HttpConnection_InputState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___input_state = value;
}
constexpr ::System::Net::HttpConnection_LineState& System::Net::HttpConnection::__cordl_internal_get_line_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___line_state;
}
constexpr ::System::Net::HttpConnection_LineState const& System::Net::HttpConnection::__cordl_internal_get_line_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___line_state;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_line_state(::System::Net::HttpConnection_LineState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___line_state = value;
}
constexpr int32_t& System::Net::HttpConnection::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr int32_t const& System::Net::HttpConnection::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void System::Net::HttpConnection::__cordl_internal_set_position(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
inline void System::Net::HttpConnection::setStaticF_onread_cb(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "onread_cb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get>(
      std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::HttpConnection::getStaticF_onread_cb() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "onread_cb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get>();
}
inline void System::Net::HttpConnection::_ctor(::System::Net::Sockets::Socket* sock, ::System::Net::EndPointListener* epl, bool secure,
                                               ::System::Security::Cryptography::X509Certificates::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPointListener*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sock, epl, secure, cert);
}
inline void System::Net::HttpConnection::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Net::HttpConnection::get_Reuses() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "get_Reuses",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Net::IPEndPoint* System::Net::HttpConnection::get_LocalEndPoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "get_LocalEndPoint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*, false>(this, ___internal_method);
}
inline bool System::Net::HttpConnection::get_IsSecure() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "get_IsSecure",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::HttpConnection::set_Prefix(::System::Net::ListenerPrefix* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "set_Prefix", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ListenerPrefix*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::HttpConnection::OnTimeout(::System::Object* unused) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "OnTimeout", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unused);
}
inline void System::Net::HttpConnection::BeginReadRequest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "BeginReadRequest",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::RequestStream* System::Net::HttpConnection::GetRequestStream(bool chunked, int64_t contentlength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "GetRequestStream", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::RequestStream*, false>(this, ___internal_method, chunked, contentlength);
}
inline ::System::Net::ResponseStream* System::Net::HttpConnection::GetResponseStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "GetResponseStream",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ResponseStream*, false>(this, ___internal_method);
}
inline void System::Net::HttpConnection::OnRead(::System::IAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "OnRead", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ares);
}
inline void System::Net::HttpConnection::OnReadInternal(::System::IAsyncResult* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "OnReadInternal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::HttpConnection::RemoveConnection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "RemoveConnection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Net::HttpConnection::ProcessInput(::System::IO::MemoryStream* ms) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "ProcessInput", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ms);
}
inline ::StringW System::Net::HttpConnection::ReadLine(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t len, ::ByRef<int32_t> used) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "ReadLine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, buffer, offset, len, used);
}
inline void System::Net::HttpConnection::SendError(::StringW msg, int32_t status) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "SendError", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg, status);
}
inline void System::Net::HttpConnection::SendError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "SendError",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::HttpConnection::Unbind() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "Unbind",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::HttpConnection::CloseSocket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "CloseSocket",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::HttpConnection::Close(bool force_close) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "Close", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, force_close);
}
inline bool System::Net::HttpConnection::__ctor_b__24_0(::System::Object* t, ::System::Security::Cryptography::X509Certificates::X509Certificate* c,
                                                        ::System::Security::Cryptography::X509Certificates::X509Chain* ch, ::System::Net::Security::SslPolicyErrors e) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(), "<.ctor>b__24_0", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslPolicyErrors>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t, c, ch, e);
}
inline ::System::Net::HttpConnection* System::Net::HttpConnection::New_ctor(::System::Net::Sockets::Socket* sock, ::System::Net::EndPointListener* epl, bool secure,
                                                                            ::System::Security::Cryptography::X509Certificates::X509Certificate* cert) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::HttpConnection*>(sock, epl, secure, cert));
}
// Ctor Parameters []
constexpr ::System::Net::HttpConnection::HttpConnection() {}
