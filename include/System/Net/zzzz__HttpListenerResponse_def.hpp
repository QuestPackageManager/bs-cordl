#pragma once
// IWYU pragma private; include "System/Net/HttpListenerResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListenerResponse)
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class CookieCollection;
}
namespace System::Net {
class Cookie;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::Net {
class ResponseStream;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Text {
class Encoding;
}
namespace System {
class Object;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System::Net {
class HttpListenerResponse;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpListenerResponse);
// Dependencies System.IDisposable, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpListenerResponse
class CORDL_TYPE HttpListenerResponse : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ContentEncoding)) ::System::Text::Encoding* ContentEncoding;

  __declspec(property(put = set_ContentLength64)) int64_t ContentLength64;

  __declspec(property(put = set_ContentType)) ::StringW ContentType;

  __declspec(property(get = get_ForceCloseChunked)) bool ForceCloseChunked;

  __declspec(property(get = get_Headers)) ::System::Net::WebHeaderCollection* Headers;

  /// @brief Field HeadersSent, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_HeadersSent, put = __cordl_internal_set_HeadersSent)) bool HeadersSent;

  __declspec(property(get = get_OutputStream)) ::System::IO::Stream* OutputStream;

  __declspec(property(get = get_SendChunked, put = set_SendChunked)) bool SendChunked;

  __declspec(property(put = set_StatusCode)) int32_t StatusCode;

  /// @brief Field chunked, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_chunked, put = __cordl_internal_set_chunked)) bool chunked;

  /// @brief Field cl_set, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_cl_set, put = __cordl_internal_set_cl_set)) bool cl_set;

  /// @brief Field content_encoding, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_content_encoding, put = __cordl_internal_set_content_encoding)) ::System::Text::Encoding* content_encoding;

  /// @brief Field content_length, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_content_length, put = __cordl_internal_set_content_length)) int64_t content_length;

  /// @brief Field content_type, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_content_type, put = __cordl_internal_set_content_type)) ::StringW content_type;

  /// @brief Field context, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::System::Net::HttpListenerContext* context;

  /// @brief Field cookies, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_cookies, put = __cordl_internal_set_cookies)) ::System::Net::CookieCollection* cookies;

  /// @brief Field disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field force_close_chunked, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_force_close_chunked, put = __cordl_internal_set_force_close_chunked)) bool force_close_chunked;

  /// @brief Field headers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_headers, put = __cordl_internal_set_headers)) ::System::Net::WebHeaderCollection* headers;

  /// @brief Field headers_lock, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_headers_lock, put = __cordl_internal_set_headers_lock)) ::System::Object* headers_lock;

  /// @brief Field keep_alive, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_keep_alive, put = __cordl_internal_set_keep_alive)) bool keep_alive;

  /// @brief Field location, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_location, put = __cordl_internal_set_location)) ::StringW location;

  /// @brief Field output_stream, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_output_stream, put = __cordl_internal_set_output_stream)) ::System::Net::ResponseStream* output_stream;

  /// @brief Field status_code, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_status_code, put = __cordl_internal_set_status_code)) int32_t status_code;

  /// @brief Field status_description, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_status_description, put = __cordl_internal_set_status_description)) ::StringW status_description;

  /// @brief Field tspecials, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tspecials, put = setStaticF_tspecials)) ::StringW tspecials;

  /// @brief Field version, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::System::Version* version;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Close, addr 0x43c7978, size 0x14, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method Close, addr 0x43c7948, size 0x30, virtual false, abstract: false, final false
  inline void Close(bool force);

  /// @brief Method Close, addr 0x43c798c, size 0xb8, virtual false, abstract: false, final false
  inline void Close(::ArrayW<uint8_t, ::Array<uint8_t>*> responseEntity, bool willBlock);

  /// @brief Method CookieToClientString, addr 0x43c83fc, size 0x2a8, virtual false, abstract: false, final false
  static inline ::StringW CookieToClientString(::System::Net::Cookie* cookie);

  /// @brief Method FormatHeaders, addr 0x43c86a4, size 0x25c, virtual false, abstract: false, final false
  static inline ::StringW FormatHeaders(::System::Net::WebHeaderCollection* headers);

  /// @brief Method IsToken, addr 0x43c89d0, size 0xd0, virtual false, abstract: false, final false
  static inline bool IsToken(::StringW value);

  static inline ::System::Net::HttpListenerResponse* New_ctor(::System::Net::HttpListenerContext* context);

  /// @brief Method QuotedString, addr 0x43c8900, size 0xd0, virtual false, abstract: false, final false
  static inline ::StringW QuotedString(::System::Net::Cookie* cookie, ::StringW value);

  /// @brief Method SendHeaders, addr 0x43c7a44, size 0x9b8, virtual false, abstract: false, final false
  inline void SendHeaders(bool closing, ::System::IO::MemoryStream* ms);

  /// @brief Method System.IDisposable.Dispose, addr 0x43c7940, size 0x8, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr bool const& __cordl_internal_get_HeadersSent() const;

  constexpr bool& __cordl_internal_get_HeadersSent();

  constexpr bool const& __cordl_internal_get_chunked() const;

  constexpr bool& __cordl_internal_get_chunked();

  constexpr bool const& __cordl_internal_get_cl_set() const;

  constexpr bool& __cordl_internal_get_cl_set();

  constexpr ::System::Text::Encoding* const& __cordl_internal_get_content_encoding() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get_content_encoding();

  constexpr int64_t const& __cordl_internal_get_content_length() const;

  constexpr int64_t& __cordl_internal_get_content_length();

  constexpr ::StringW const& __cordl_internal_get_content_type() const;

  constexpr ::StringW& __cordl_internal_get_content_type();

  constexpr ::System::Net::HttpListenerContext* const& __cordl_internal_get_context() const;

  constexpr ::System::Net::HttpListenerContext*& __cordl_internal_get_context();

  constexpr ::System::Net::CookieCollection* const& __cordl_internal_get_cookies() const;

  constexpr ::System::Net::CookieCollection*& __cordl_internal_get_cookies();

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr bool const& __cordl_internal_get_force_close_chunked() const;

  constexpr bool& __cordl_internal_get_force_close_chunked();

  constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get_headers() const;

  constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get_headers();

  constexpr ::System::Object* const& __cordl_internal_get_headers_lock() const;

  constexpr ::System::Object*& __cordl_internal_get_headers_lock();

  constexpr bool const& __cordl_internal_get_keep_alive() const;

  constexpr bool& __cordl_internal_get_keep_alive();

  constexpr ::StringW const& __cordl_internal_get_location() const;

  constexpr ::StringW& __cordl_internal_get_location();

  constexpr ::System::Net::ResponseStream* const& __cordl_internal_get_output_stream() const;

  constexpr ::System::Net::ResponseStream*& __cordl_internal_get_output_stream();

  constexpr int32_t const& __cordl_internal_get_status_code() const;

  constexpr int32_t& __cordl_internal_get_status_code();

  constexpr ::StringW const& __cordl_internal_get_status_description() const;

  constexpr ::StringW& __cordl_internal_get_status_description();

  constexpr ::System::Version* const& __cordl_internal_get_version() const;

  constexpr ::System::Version*& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_HeadersSent(bool value);

  constexpr void __cordl_internal_set_chunked(bool value);

  constexpr void __cordl_internal_set_cl_set(bool value);

  constexpr void __cordl_internal_set_content_encoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set_content_length(int64_t value);

  constexpr void __cordl_internal_set_content_type(::StringW value);

  constexpr void __cordl_internal_set_context(::System::Net::HttpListenerContext* value);

  constexpr void __cordl_internal_set_cookies(::System::Net::CookieCollection* value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_force_close_chunked(bool value);

  constexpr void __cordl_internal_set_headers(::System::Net::WebHeaderCollection* value);

  constexpr void __cordl_internal_set_headers_lock(::System::Object* value);

  constexpr void __cordl_internal_set_keep_alive(bool value);

  constexpr void __cordl_internal_set_location(::StringW value);

  constexpr void __cordl_internal_set_output_stream(::System::Net::ResponseStream* value);

  constexpr void __cordl_internal_set_status_code(int32_t value);

  constexpr void __cordl_internal_set_status_description(::StringW value);

  constexpr void __cordl_internal_set_version(::System::Version* value);

  /// @brief Method .ctor, addr 0x43c73e8, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::HttpListenerContext* context);

  static inline ::StringW getStaticF_tspecials();

  /// @brief Method get_ContentEncoding, addr 0x43c74f8, size 0x20, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* get_ContentEncoding();

  /// @brief Method get_ForceCloseChunked, addr 0x43c74f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_ForceCloseChunked();

  /// @brief Method get_Headers, addr 0x43c7704, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method get_OutputStream, addr 0x43c770c, size 0x38, virtual false, abstract: false, final false
  inline ::System::IO::Stream* get_OutputStream();

  /// @brief Method get_SendChunked, addr 0x43c7744, size 0x8, virtual false, abstract: false, final false
  inline bool get_SendChunked();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_tspecials(::StringW value);

  /// @brief Method set_ContentLength64, addr 0x43c7518, size 0x120, virtual false, abstract: false, final false
  inline void set_ContentLength64(int64_t value);

  /// @brief Method set_ContentType, addr 0x43c7638, size 0xcc, virtual false, abstract: false, final false
  inline void set_ContentType(::StringW value);

  /// @brief Method set_SendChunked, addr 0x43c774c, size 0xd0, virtual false, abstract: false, final false
  inline void set_SendChunked(bool value);

  /// @brief Method set_StatusCode, addr 0x43c781c, size 0x124, virtual false, abstract: false, final false
  inline void set_StatusCode(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpListenerResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpListenerResponse(HttpListenerResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpListenerResponse(HttpListenerResponse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9697 };

  /// @brief Field disposed, offset: 0x10, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field content_encoding, offset: 0x18, size: 0x8, def value: None
  ::System::Text::Encoding* ___content_encoding;

  /// @brief Field content_length, offset: 0x20, size: 0x8, def value: None
  int64_t ___content_length;

  /// @brief Field cl_set, offset: 0x28, size: 0x1, def value: None
  bool ___cl_set;

  /// @brief Field content_type, offset: 0x30, size: 0x8, def value: None
  ::StringW ___content_type;

  /// @brief Field cookies, offset: 0x38, size: 0x8, def value: None
  ::System::Net::CookieCollection* ___cookies;

  /// @brief Field headers, offset: 0x40, size: 0x8, def value: None
  ::System::Net::WebHeaderCollection* ___headers;

  /// @brief Field keep_alive, offset: 0x48, size: 0x1, def value: None
  bool ___keep_alive;

  /// @brief Field output_stream, offset: 0x50, size: 0x8, def value: None
  ::System::Net::ResponseStream* ___output_stream;

  /// @brief Field version, offset: 0x58, size: 0x8, def value: None
  ::System::Version* ___version;

  /// @brief Field location, offset: 0x60, size: 0x8, def value: None
  ::StringW ___location;

  /// @brief Field status_code, offset: 0x68, size: 0x4, def value: None
  int32_t ___status_code;

  /// @brief Field status_description, offset: 0x70, size: 0x8, def value: None
  ::StringW ___status_description;

  /// @brief Field chunked, offset: 0x78, size: 0x1, def value: None
  bool ___chunked;

  /// @brief Field context, offset: 0x80, size: 0x8, def value: None
  ::System::Net::HttpListenerContext* ___context;

  /// @brief Field HeadersSent, offset: 0x88, size: 0x1, def value: None
  bool ___HeadersSent;

  /// @brief Field headers_lock, offset: 0x90, size: 0x8, def value: None
  ::System::Object* ___headers_lock;

  /// @brief Field force_close_chunked, offset: 0x98, size: 0x1, def value: None
  bool ___force_close_chunked;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpListenerResponse, ___disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerResponse, ___content_encoding) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerResponse, ___content_length) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerResponse, ___cl_set) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerResponse, ___content_type) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerResponse, ___cookies) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerResponse, ___headers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerResponse, ___keep_alive) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerResponse, ___output_stream) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerResponse, ___version) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerResponse, ___location) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerResponse, ___status_code) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerResponse, ___status_description) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerResponse, ___chunked) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerResponse, ___context) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerResponse, ___HeadersSent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerResponse, ___headers_lock) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerResponse, ___force_close_chunked) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HttpListenerResponse, 0xa0>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HttpListenerResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListenerResponse*, "System.Net", "HttpListenerResponse");
