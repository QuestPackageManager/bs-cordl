#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpListenerRequest_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__CookieCollection_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::System::Net::HttpListenerRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerRequest::*)(::System::Net::HttpListenerContext*)>(
    &::System::Net::HttpListenerRequest::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x29c9540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.SetRequestLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerRequest::*)(::StringW)>(&::System::Net::HttpListenerRequest::SetRequestLine)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x29c685c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "SetRequestLine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.CreateQueryString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerRequest::*)(::StringW)>(&::System::Net::HttpListenerRequest::CreateQueryString)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x29c9de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "CreateQueryString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.MaybeUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Net::HttpListenerRequest::MaybeUri)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x29ca000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "MaybeUri", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.IsPredefinedScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Net::HttpListenerRequest::IsPredefinedScheme)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x29ca0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "IsPredefinedScheme", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.FinishInitialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::FinishInitialization)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x29c5cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                                                                               "FinishInitialization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.Unquote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Net::HttpListenerRequest::Unquote)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29ca350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "Unquote", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.AddHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerRequest::*)(::StringW)>(&::System::Net::HttpListenerRequest::AddHeader)> {
  constexpr static std::size_t size = 0x8e4;
  constexpr static std::size_t addrs = 0x29c6ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "AddHeader", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.FlushInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::FlushInput)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x29c78d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "FlushInput",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_HasEntityBody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_HasEntityBody)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29ca3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "get_HasEntityBody",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Specialized::NameValueCollection* (::System::Net::HttpListenerRequest::*)()>(
    &::System::Net::HttpListenerRequest::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ca484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "get_Headers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_InputStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::HttpListenerRequest::*)()>(
    &::System::Net::HttpListenerRequest::get_InputStream)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x29ca3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "get_InputStream",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_IsSecureConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_IsSecureConnection)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29ca30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                                                                               "get_IsSecureConnection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_KeepAlive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_KeepAlive)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x29c7774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "get_KeepAlive",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_LocalEndPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (::System::Net::HttpListenerRequest::*)()>(
    &::System::Net::HttpListenerRequest::get_LocalEndPoint)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29ca330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "get_LocalEndPoint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_ProtocolVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (::System::Net::HttpListenerRequest::*)()>(
    &::System::Net::HttpListenerRequest::get_ProtocolVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ca48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                                                                               "get_ProtocolVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_Url
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ca494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "get_Url",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_UserHostAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_UserHostAddress)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29ca2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                                                                               "get_UserHostAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_UserHostName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_UserHostName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x29ca298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "get_UserHostName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Net::HttpListenerRequest::__cordl_internal_get_accept_types() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accept_types;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Net::HttpListenerRequest::__cordl_internal_get_accept_types() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accept_types;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_accept_types(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___accept_types)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Net::HttpListenerRequest::__cordl_internal_get_content_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_length;
}
constexpr int64_t const& System::Net::HttpListenerRequest::__cordl_internal_get_content_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_length;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_content_length(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content_length = value;
}
constexpr bool& System::Net::HttpListenerRequest::__cordl_internal_get_cl_set() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cl_set;
}
constexpr bool const& System::Net::HttpListenerRequest::__cordl_internal_get_cl_set() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cl_set;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_cl_set(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cl_set = value;
}
constexpr ::System::Net::CookieCollection*& System::Net::HttpListenerRequest::__cordl_internal_get_cookies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookies;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::CookieCollection*> const& System::Net::HttpListenerRequest::__cordl_internal_get_cookies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookies;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_cookies(::System::Net::CookieCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cookies)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::HttpListenerRequest::__cordl_internal_get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& System::Net::HttpListenerRequest::__cordl_internal_get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_headers(::System::Net::WebHeaderCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::HttpListenerRequest::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr ::StringW const& System::Net::HttpListenerRequest::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_method(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___method)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Stream*& System::Net::HttpListenerRequest::__cordl_internal_get_input_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input_stream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& System::Net::HttpListenerRequest::__cordl_internal_get_input_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input_stream;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_input_stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___input_stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Version*& System::Net::HttpListenerRequest::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& System::Net::HttpListenerRequest::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_version(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Specialized::NameValueCollection*& System::Net::HttpListenerRequest::__cordl_internal_get_query_string() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___query_string;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::NameValueCollection*> const& System::Net::HttpListenerRequest::__cordl_internal_get_query_string() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___query_string;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_query_string(::System::Collections::Specialized::NameValueCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___query_string)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::HttpListenerRequest::__cordl_internal_get_raw_url() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raw_url;
}
constexpr ::StringW const& System::Net::HttpListenerRequest::__cordl_internal_get_raw_url() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raw_url;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_raw_url(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___raw_url)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Uri*& System::Net::HttpListenerRequest::__cordl_internal_get_url() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___url;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& System::Net::HttpListenerRequest::__cordl_internal_get_url() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___url;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_url(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___url)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Uri*& System::Net::HttpListenerRequest::__cordl_internal_get_referrer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referrer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& System::Net::HttpListenerRequest::__cordl_internal_get_referrer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referrer;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_referrer(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___referrer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Net::HttpListenerRequest::__cordl_internal_get_user_languages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_languages;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Net::HttpListenerRequest::__cordl_internal_get_user_languages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_languages;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_user_languages(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___user_languages)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::HttpListenerContext*& System::Net::HttpListenerRequest::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerContext*> const& System::Net::HttpListenerRequest::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_context(::System::Net::HttpListenerContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpListenerRequest::__cordl_internal_get_is_chunked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_chunked;
}
constexpr bool const& System::Net::HttpListenerRequest::__cordl_internal_get_is_chunked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_chunked;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_is_chunked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_chunked = value;
}
constexpr bool& System::Net::HttpListenerRequest::__cordl_internal_get_ka_set() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ka_set;
}
constexpr bool const& System::Net::HttpListenerRequest::__cordl_internal_get_ka_set() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ka_set;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_ka_set(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ka_set = value;
}
constexpr bool& System::Net::HttpListenerRequest::__cordl_internal_get_keep_alive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keep_alive;
}
constexpr bool const& System::Net::HttpListenerRequest::__cordl_internal_get_keep_alive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keep_alive;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_keep_alive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keep_alive = value;
}
inline void System::Net::HttpListenerRequest::setStaticF__100continue(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "_100continue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Net::HttpListenerRequest::getStaticF__100continue() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "_100continue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get>();
}
inline void System::Net::HttpListenerRequest::setStaticF_separators(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "separators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Net::HttpListenerRequest::getStaticF_separators() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "separators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get>();
}
inline ::System::Net::HttpListenerRequest* System::Net::HttpListenerRequest::New_ctor(::System::Net::HttpListenerContext* context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::HttpListenerRequest*>(context));
}
inline void System::Net::HttpListenerRequest::_ctor(::System::Net::HttpListenerContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void System::Net::HttpListenerRequest::SetRequestLine(::StringW req) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "SetRequestLine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, req);
}
inline void System::Net::HttpListenerRequest::CreateQueryString(::StringW query) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "CreateQueryString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, query);
}
inline bool System::Net::HttpListenerRequest::MaybeUri(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "MaybeUri", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s);
}
inline bool System::Net::HttpListenerRequest::IsPredefinedScheme(::StringW scheme) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "IsPredefinedScheme", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, scheme);
}
inline bool System::Net::HttpListenerRequest::FinishInitialization() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "FinishInitialization",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Net::HttpListenerRequest::Unquote(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "Unquote", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, str);
}
inline void System::Net::HttpListenerRequest::AddHeader(::StringW header) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "AddHeader", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, header);
}
inline bool System::Net::HttpListenerRequest::FlushInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "FlushInput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::HttpListenerRequest::get_HasEntityBody() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "get_HasEntityBody",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Specialized::NameValueCollection* System::Net::HttpListenerRequest::get_Headers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "get_Headers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Specialized::NameValueCollection*, false>(this, ___internal_method);
}
inline ::System::IO::Stream* System::Net::HttpListenerRequest::get_InputStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "get_InputStream",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline bool System::Net::HttpListenerRequest::get_IsSecureConnection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                                                                             "get_IsSecureConnection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::HttpListenerRequest::get_KeepAlive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "get_KeepAlive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::IPEndPoint* System::Net::HttpListenerRequest::get_LocalEndPoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "get_LocalEndPoint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*, false>(this, ___internal_method);
}
inline ::System::Version* System::Net::HttpListenerRequest::get_ProtocolVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "get_ProtocolVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(this, ___internal_method);
}
inline ::System::Uri* System::Net::HttpListenerRequest::get_Url() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "get_Url",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline ::StringW System::Net::HttpListenerRequest::get_UserHostAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "get_UserHostAddress",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Net::HttpListenerRequest::get_UserHostName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(), "get_UserHostName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::HttpListenerRequest::HttpListenerRequest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
