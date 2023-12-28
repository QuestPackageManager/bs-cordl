#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpListenerResponse_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Net/zzzz__ResponseStream_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/Net/zzzz__Cookie_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Net/zzzz__CookieCollection_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
//  Writing Method size for method: ::System::Net::HttpListenerResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)(::System::Net::HttpListenerContext*)>(
    &::System::Net::HttpListenerResponse::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x29c95f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.get_ForceCloseChunked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::get_ForceCloseChunked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ca560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                                                                               "get_ForceCloseChunked", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.get_ContentEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (::System::Net::HttpListenerResponse::*)()>(
    &::System::Net::HttpListenerResponse::get_ContentEncoding)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29c7698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                                                                               "get_ContentEncoding", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.set_ContentLength64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)(int64_t)>(&::System::Net::HttpListenerResponse::set_ContentLength64)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x29ca568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "set_ContentLength64",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.set_ContentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)(::StringW)>(&::System::Net::HttpListenerResponse::set_ContentType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x29c75c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "set_ContentType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.get_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::HttpListenerResponse::*)()>(
    &::System::Net::HttpListenerResponse::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ca698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "get_Headers",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.get_OutputStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::HttpListenerResponse::*)()>(
    &::System::Net::HttpListenerResponse::get_OutputStream)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x29ca6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "get_OutputStream",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.get_SendChunked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::get_SendChunked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ca6d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "get_SendChunked",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.set_SendChunked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)(bool)>(&::System::Net::HttpListenerResponse::set_SendChunked)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x29c5434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "set_SendChunked", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.set_StatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)(int32_t)>(&::System::Net::HttpListenerResponse::set_StatusCode)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x29c748c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "set_StatusCode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ca6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                                                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)(bool)>(&::System::Net::HttpListenerResponse::Close)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x29ca6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "Close", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::Close)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29ca710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "Close",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(
    &::System::Net::HttpListenerResponse::Close)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x29c76b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "Close", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.SendHeaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)(bool, ::System::IO::MemoryStream*)>(
    &::System::Net::HttpListenerResponse::SendHeaders)> {
  constexpr static std::size_t size = 0x9a8;
  constexpr static std::size_t addrs = 0x29ca724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "SendHeaders", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.FormatHeaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Net::WebHeaderCollection*)>(&::System::Net::HttpListenerResponse::FormatHeaders)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x29cb364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "FormatHeaders", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.CookieToClientString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Net::Cookie*)>(&::System::Net::HttpListenerResponse::CookieToClientString)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x29cb0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "CookieToClientString", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cookie*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.QuotedString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Net::Cookie*, ::StringW)>(&::System::Net::HttpListenerResponse::QuotedString)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x29cb5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "QuotedString", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cookie*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.IsToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Net::HttpListenerResponse::IsToken)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x29cb688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "IsToken", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::HttpListenerResponse::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr bool& System::Net::HttpListenerResponse::__get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Net::HttpListenerResponse::__get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Net::HttpListenerResponse::__set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr ::System::Text::Encoding*& System::Net::HttpListenerResponse::__get_content_encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_encoding;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& System::Net::HttpListenerResponse::__get_content_encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_encoding;
}
constexpr void System::Net::HttpListenerResponse::__set_content_encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content_encoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Net::HttpListenerResponse::__get_content_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_length;
}
constexpr int64_t const& System::Net::HttpListenerResponse::__get_content_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_length;
}
constexpr void System::Net::HttpListenerResponse::__set_content_length(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content_length = value;
}
constexpr bool& System::Net::HttpListenerResponse::__get_cl_set() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cl_set;
}
constexpr bool const& System::Net::HttpListenerResponse::__get_cl_set() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cl_set;
}
constexpr void System::Net::HttpListenerResponse::__set_cl_set(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cl_set = value;
}
constexpr ::StringW& System::Net::HttpListenerResponse::__get_content_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_type;
}
constexpr ::StringW const& System::Net::HttpListenerResponse::__get_content_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_type;
}
constexpr void System::Net::HttpListenerResponse::__set_content_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content_type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::CookieCollection*& System::Net::HttpListenerResponse::__get_cookies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookies;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::CookieCollection*> const& System::Net::HttpListenerResponse::__get_cookies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookies;
}
constexpr void System::Net::HttpListenerResponse::__set_cookies(::System::Net::CookieCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cookies)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::HttpListenerResponse::__get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& System::Net::HttpListenerResponse::__get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void System::Net::HttpListenerResponse::__set_headers(::System::Net::WebHeaderCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpListenerResponse::__get_keep_alive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keep_alive;
}
constexpr bool const& System::Net::HttpListenerResponse::__get_keep_alive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keep_alive;
}
constexpr void System::Net::HttpListenerResponse::__set_keep_alive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keep_alive = value;
}
constexpr ::System::Net::ResponseStream*& System::Net::HttpListenerResponse::__get_output_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___output_stream;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::ResponseStream*> const& System::Net::HttpListenerResponse::__get_output_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___output_stream;
}
constexpr void System::Net::HttpListenerResponse::__set_output_stream(::System::Net::ResponseStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___output_stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Version*& System::Net::HttpListenerResponse::__get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& System::Net::HttpListenerResponse::__get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void System::Net::HttpListenerResponse::__set_version(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::HttpListenerResponse::__get_location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr ::StringW const& System::Net::HttpListenerResponse::__get_location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr void System::Net::HttpListenerResponse::__set_location(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___location)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::HttpListenerResponse::__get_status_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status_code;
}
constexpr int32_t const& System::Net::HttpListenerResponse::__get_status_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status_code;
}
constexpr void System::Net::HttpListenerResponse::__set_status_code(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status_code = value;
}
constexpr ::StringW& System::Net::HttpListenerResponse::__get_status_description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status_description;
}
constexpr ::StringW const& System::Net::HttpListenerResponse::__get_status_description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status_description;
}
constexpr void System::Net::HttpListenerResponse::__set_status_description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___status_description)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpListenerResponse::__get_chunked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunked;
}
constexpr bool const& System::Net::HttpListenerResponse::__get_chunked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunked;
}
constexpr void System::Net::HttpListenerResponse::__set_chunked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunked = value;
}
constexpr ::System::Net::HttpListenerContext*& System::Net::HttpListenerResponse::__get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerContext*> const& System::Net::HttpListenerResponse::__get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Net::HttpListenerResponse::__set_context(::System::Net::HttpListenerContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpListenerResponse::__get_HeadersSent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HeadersSent;
}
constexpr bool const& System::Net::HttpListenerResponse::__get_HeadersSent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HeadersSent;
}
constexpr void System::Net::HttpListenerResponse::__set_HeadersSent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HeadersSent = value;
}
constexpr ::System::Object*& System::Net::HttpListenerResponse::__get_headers_lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers_lock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Net::HttpListenerResponse::__get_headers_lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers_lock;
}
constexpr void System::Net::HttpListenerResponse::__set_headers_lock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headers_lock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpListenerResponse::__get_force_close_chunked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___force_close_chunked;
}
constexpr bool const& System::Net::HttpListenerResponse::__get_force_close_chunked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___force_close_chunked;
}
constexpr void System::Net::HttpListenerResponse::__set_force_close_chunked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___force_close_chunked = value;
}
inline void System::Net::HttpListenerResponse::setStaticF_tspecials(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "tspecials", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Net::HttpListenerResponse::getStaticF_tspecials() {
  return ::cordl_internals::getStaticField<::StringW, "tspecials", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get>();
}
inline ::System::Net::HttpListenerResponse* System::Net::HttpListenerResponse::New_ctor(::System::Net::HttpListenerContext* context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::HttpListenerResponse*>(context));
}
inline void System::Net::HttpListenerResponse::_ctor(::System::Net::HttpListenerContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline bool System::Net::HttpListenerResponse::get_ForceCloseChunked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                                                                             "get_ForceCloseChunked", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::Net::HttpListenerResponse::get_ContentEncoding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "get_ContentEncoding",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(this, ___internal_method);
}
inline void System::Net::HttpListenerResponse::set_ContentLength64(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "set_ContentLength64", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::HttpListenerResponse::set_ContentType(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "set_ContentType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::WebHeaderCollection* System::Net::HttpListenerResponse::get_Headers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "get_Headers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*, false>(this, ___internal_method);
}
inline ::System::IO::Stream* System::Net::HttpListenerResponse::get_OutputStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "get_OutputStream",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline bool System::Net::HttpListenerResponse::get_SendChunked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "get_SendChunked",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::HttpListenerResponse::set_SendChunked(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "set_SendChunked", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::HttpListenerResponse::set_StatusCode(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "set_StatusCode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::HttpListenerResponse::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                                                                             "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::HttpListenerResponse::Close(bool force) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "Close", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, force);
}
inline void System::Net::HttpListenerResponse::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "Close",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::HttpListenerResponse::Close(::ArrayW<uint8_t, ::Array<uint8_t>*> responseEntity, bool willBlock) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "Close", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, responseEntity, willBlock);
}
inline void System::Net::HttpListenerResponse::SendHeaders(bool closing, ::System::IO::MemoryStream* ms) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "SendHeaders", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, closing, ms);
}
inline ::StringW System::Net::HttpListenerResponse::FormatHeaders(::System::Net::WebHeaderCollection* headers) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "FormatHeaders", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, headers);
}
inline ::StringW System::Net::HttpListenerResponse::CookieToClientString(::System::Net::Cookie* cookie) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "CookieToClientString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cookie*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, cookie);
}
inline ::StringW System::Net::HttpListenerResponse::QuotedString(::System::Net::Cookie* cookie, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "QuotedString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cookie*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, cookie, value);
}
inline bool System::Net::HttpListenerResponse::IsToken(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(), "IsToken", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Net::HttpListenerResponse::HttpListenerResponse() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
