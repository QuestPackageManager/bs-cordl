#pragma once
// IWYU pragma private; include "System/Net/HttpListenerResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpListenerResponse_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__CookieCollection_def.hpp"
#include "System/Net/zzzz__Cookie_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Net/zzzz__ResponseStream_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::System::Net::HttpListenerResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerResponse::*)(::System::Net::HttpListenerContext*)>(&::System::Net::HttpListenerResponse::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x63295c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::HttpListenerContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.get_ForceCloseChunked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::get_ForceCloseChunked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63296bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "get_ForceCloseChunked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.get_ContentEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::get_ContentEncoding)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63296c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "get_ContentEncoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.set_ContentLength64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerResponse::*)(int64_t)>(&::System::Net::HttpListenerResponse::set_ContentLength64)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x63296e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "set_ContentLength64", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.set_ContentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerResponse::*)(::StringW)>(&::System::Net::HttpListenerResponse::set_ContentType)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6329804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "set_ContentType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.get_Headers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63298d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "get_Headers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.get_OutputStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::get_OutputStream)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x63298d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "get_OutputStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.get_SendChunked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::get_SendChunked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6329910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "get_SendChunked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.set_SendChunked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerResponse::*)(bool)>(&::System::Net::HttpListenerResponse::set_SendChunked)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6329918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "set_SendChunked", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.set_StatusCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerResponse::*)(int32_t)>(&::System::Net::HttpListenerResponse::set_StatusCode)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x63299e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "set_StatusCode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6329b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerResponse::*)(bool)>(&::System::Net::HttpListenerResponse::Close)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6329b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "Close", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::Close)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6329b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerResponse::*)(::ArrayW<uint8_t>, bool)>(&::System::Net::HttpListenerResponse::Close)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6329b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "Close", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.SendHeaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerResponse::*)(bool, ::System::IO::MemoryStream*)>(&::System::Net::HttpListenerResponse::SendHeaders)> {
  constexpr static std::size_t size = 0xa00;
  constexpr static std::size_t addrs = 0x6329c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "SendHeaders", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::IO::MemoryStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.FormatHeaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Net::WebHeaderCollection*)>(&::System::Net::HttpListenerResponse::FormatHeaders)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x632a890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "FormatHeaders", {}, { ::i2c::type_of<::System::Net::WebHeaderCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.CookieToClientString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Net::Cookie*)>(&::System::Net::HttpListenerResponse::CookieToClientString)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x632a610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "CookieToClientString", {}, { ::i2c::type_of<::System::Net::Cookie*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.QuotedString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Net::Cookie*, ::StringW)>(&::System::Net::HttpListenerResponse::QuotedString)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x632aadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "QuotedString", {}, { ::i2c::type_of<::System::Net::Cookie*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.IsToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Net::HttpListenerResponse::IsToken)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x632abc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "IsToken", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Net::HttpListenerResponse::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Net::HttpListenerResponse::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr ::System::Text::Encoding*& System::Net::HttpListenerResponse::__cordl_internal_get_content_encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_encoding;
}
constexpr ::System::Text::Encoding* const& System::Net::HttpListenerResponse::__cordl_internal_get_content_encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_encoding;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_content_encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content_encoding = value;
}
constexpr int64_t& System::Net::HttpListenerResponse::__cordl_internal_get_content_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_length;
}
constexpr int64_t const& System::Net::HttpListenerResponse::__cordl_internal_get_content_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_length;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_content_length(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content_length = value;
}
constexpr bool& System::Net::HttpListenerResponse::__cordl_internal_get_cl_set() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cl_set;
}
constexpr bool const& System::Net::HttpListenerResponse::__cordl_internal_get_cl_set() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cl_set;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_cl_set(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cl_set = value;
}
constexpr ::StringW& System::Net::HttpListenerResponse::__cordl_internal_get_content_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_type;
}
constexpr ::StringW const& System::Net::HttpListenerResponse::__cordl_internal_get_content_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_type;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_content_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content_type = value;
}
constexpr ::System::Net::CookieCollection*& System::Net::HttpListenerResponse::__cordl_internal_get_cookies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookies;
}
constexpr ::System::Net::CookieCollection* const& System::Net::HttpListenerResponse::__cordl_internal_get_cookies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookies;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_cookies(::System::Net::CookieCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cookies = value;
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::HttpListenerResponse::__cordl_internal_get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::System::Net::WebHeaderCollection* const& System::Net::HttpListenerResponse::__cordl_internal_get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_headers(::System::Net::WebHeaderCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headers = value;
}
constexpr bool& System::Net::HttpListenerResponse::__cordl_internal_get_keep_alive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keep_alive;
}
constexpr bool const& System::Net::HttpListenerResponse::__cordl_internal_get_keep_alive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keep_alive;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_keep_alive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keep_alive = value;
}
constexpr ::System::Net::ResponseStream*& System::Net::HttpListenerResponse::__cordl_internal_get_output_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___output_stream;
}
constexpr ::System::Net::ResponseStream* const& System::Net::HttpListenerResponse::__cordl_internal_get_output_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___output_stream;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_output_stream(::System::Net::ResponseStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___output_stream = value;
}
constexpr ::System::Version*& System::Net::HttpListenerResponse::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::System::Version* const& System::Net::HttpListenerResponse::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_version(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::StringW& System::Net::HttpListenerResponse::__cordl_internal_get_location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr ::StringW const& System::Net::HttpListenerResponse::__cordl_internal_get_location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_location(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___location = value;
}
constexpr int32_t& System::Net::HttpListenerResponse::__cordl_internal_get_status_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status_code;
}
constexpr int32_t const& System::Net::HttpListenerResponse::__cordl_internal_get_status_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status_code;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_status_code(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status_code = value;
}
constexpr ::StringW& System::Net::HttpListenerResponse::__cordl_internal_get_status_description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status_description;
}
constexpr ::StringW const& System::Net::HttpListenerResponse::__cordl_internal_get_status_description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status_description;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_status_description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status_description = value;
}
constexpr bool& System::Net::HttpListenerResponse::__cordl_internal_get_chunked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunked;
}
constexpr bool const& System::Net::HttpListenerResponse::__cordl_internal_get_chunked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunked;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_chunked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunked = value;
}
constexpr ::System::Net::HttpListenerContext*& System::Net::HttpListenerResponse::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::System::Net::HttpListenerContext* const& System::Net::HttpListenerResponse::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_context(::System::Net::HttpListenerContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
constexpr bool& System::Net::HttpListenerResponse::__cordl_internal_get_HeadersSent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HeadersSent;
}
constexpr bool const& System::Net::HttpListenerResponse::__cordl_internal_get_HeadersSent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HeadersSent;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_HeadersSent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HeadersSent = value;
}
constexpr ::System::Object*& System::Net::HttpListenerResponse::__cordl_internal_get_headers_lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers_lock;
}
constexpr ::System::Object* const& System::Net::HttpListenerResponse::__cordl_internal_get_headers_lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers_lock;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_headers_lock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headers_lock = value;
}
constexpr bool& System::Net::HttpListenerResponse::__cordl_internal_get_force_close_chunked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___force_close_chunked;
}
constexpr bool const& System::Net::HttpListenerResponse::__cordl_internal_get_force_close_chunked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___force_close_chunked;
}
constexpr void System::Net::HttpListenerResponse::__cordl_internal_set_force_close_chunked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___force_close_chunked = value;
}
inline void System::Net::HttpListenerResponse::setStaticF_tspecials(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "tspecials", ::System::Net::HttpListenerResponse*>(std::forward<::StringW>(value));
}
inline ::StringW System::Net::HttpListenerResponse::getStaticF_tspecials() {
  return ::cordl_internals::getStaticField<::StringW, "tspecials", ::System::Net::HttpListenerResponse*>();
}
inline void System::Net::HttpListenerResponse::_ctor(::System::Net::HttpListenerContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::HttpListenerContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline bool System::Net::HttpListenerResponse::get_ForceCloseChunked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "get_ForceCloseChunked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::Net::HttpListenerResponse::get_ContentEncoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "get_ContentEncoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline void System::Net::HttpListenerResponse::set_ContentLength64(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "set_ContentLength64", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::HttpListenerResponse::set_ContentType(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "set_ContentType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::WebHeaderCollection* System::Net::HttpListenerResponse::get_Headers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "get_Headers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*>(this, ___internal_method);
}
inline ::System::IO::Stream* System::Net::HttpListenerResponse::get_OutputStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "get_OutputStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline bool System::Net::HttpListenerResponse::get_SendChunked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "get_SendChunked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpListenerResponse::set_SendChunked(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "set_SendChunked", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::HttpListenerResponse::set_StatusCode(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "set_StatusCode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::HttpListenerResponse::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::HttpListenerResponse::Close(bool force) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "Close", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void System::Net::HttpListenerResponse::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::HttpListenerResponse::Close(::ArrayW<uint8_t> responseEntity, bool willBlock) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "Close", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseEntity, willBlock);
}
inline void System::Net::HttpListenerResponse::SendHeaders(bool closing, ::System::IO::MemoryStream* ms) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "SendHeaders", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::IO::MemoryStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, closing, ms);
}
inline ::StringW System::Net::HttpListenerResponse::FormatHeaders(::System::Net::WebHeaderCollection* headers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "FormatHeaders", {}, { ::i2c::type_of<::System::Net::WebHeaderCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, headers);
}
inline ::StringW System::Net::HttpListenerResponse::CookieToClientString(::System::Net::Cookie* cookie) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "CookieToClientString", {}, { ::i2c::type_of<::System::Net::Cookie*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, cookie);
}
inline ::StringW System::Net::HttpListenerResponse::QuotedString(::System::Net::Cookie* cookie, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "QuotedString", {}, { ::i2c::type_of<::System::Net::Cookie*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, cookie, value);
}
inline bool System::Net::HttpListenerResponse::IsToken(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerResponse*>(), { "IsToken", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline ::System::Net::HttpListenerResponse* System::Net::HttpListenerResponse::New_ctor(::System::Net::HttpListenerContext* context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpListenerResponse*>(context));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::HttpListenerResponse::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::HttpListenerResponse::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::HttpListenerResponse::HttpListenerResponse() {}
