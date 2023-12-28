#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListenerResponse)
namespace System {
class IDisposable;
}
namespace System::Net {
class ResponseStream;
}
namespace System {
class Version;
}
namespace System::Net {
class Cookie;
}
namespace System {
class Object;
}
namespace System::Text {
class Encoding;
}
namespace System::Net {
class CookieCollection;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace System::Net {
class HttpListenerResponse;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpListenerResponse);
// Type: System.Net::HttpListenerResponse
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 153, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9176))
// CS Name: ::System.Net::HttpListenerResponse*
class CORDL_TYPE HttpListenerResponse : public ::System::Object {
public:
  // Declarations
  /// @brief Field disposed, offset 0x10, size 0x1
  __declspec(property(get = __get_disposed, put = __set_disposed)) bool disposed;

  /// @brief Field content_encoding, offset 0x18, size 0x8
  __declspec(property(get = __get_content_encoding, put = __set_content_encoding))::System::Text::Encoding* content_encoding;

  /// @brief Field content_length, offset 0x20, size 0x8
  __declspec(property(get = __get_content_length, put = __set_content_length)) int64_t content_length;

  /// @brief Field cl_set, offset 0x28, size 0x1
  __declspec(property(get = __get_cl_set, put = __set_cl_set)) bool cl_set;

  /// @brief Field content_type, offset 0x30, size 0x8
  __declspec(property(get = __get_content_type, put = __set_content_type))::StringW content_type;

  /// @brief Field cookies, offset 0x38, size 0x8
  __declspec(property(get = __get_cookies, put = __set_cookies))::System::Net::CookieCollection* cookies;

  /// @brief Field headers, offset 0x40, size 0x8
  __declspec(property(get = __get_headers, put = __set_headers))::System::Net::WebHeaderCollection* headers;

  /// @brief Field keep_alive, offset 0x48, size 0x1
  __declspec(property(get = __get_keep_alive, put = __set_keep_alive)) bool keep_alive;

  /// @brief Field output_stream, offset 0x50, size 0x8
  __declspec(property(get = __get_output_stream, put = __set_output_stream))::System::Net::ResponseStream* output_stream;

  /// @brief Field version, offset 0x58, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::System::Version* version;

  /// @brief Field location, offset 0x60, size 0x8
  __declspec(property(get = __get_location, put = __set_location))::StringW location;

  /// @brief Field status_code, offset 0x68, size 0x4
  __declspec(property(get = __get_status_code, put = __set_status_code)) int32_t status_code;

  /// @brief Field status_description, offset 0x70, size 0x8
  __declspec(property(get = __get_status_description, put = __set_status_description))::StringW status_description;

  /// @brief Field chunked, offset 0x78, size 0x1
  __declspec(property(get = __get_chunked, put = __set_chunked)) bool chunked;

  /// @brief Field context, offset 0x80, size 0x8
  __declspec(property(get = __get_context, put = __set_context))::System::Net::HttpListenerContext* context;

  /// @brief Field HeadersSent, offset 0x88, size 0x1
  __declspec(property(get = __get_HeadersSent, put = __set_HeadersSent)) bool HeadersSent;

  /// @brief Field headers_lock, offset 0x90, size 0x8
  __declspec(property(get = __get_headers_lock, put = __set_headers_lock))::System::Object* headers_lock;

  /// @brief Field force_close_chunked, offset 0x98, size 0x1
  __declspec(property(get = __get_force_close_chunked, put = __set_force_close_chunked)) bool force_close_chunked;

  /// @brief Field tspecials, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_tspecials, put = setStaticF_tspecials))::StringW tspecials;

  __declspec(property(get = get_ForceCloseChunked)) bool ForceCloseChunked;

  __declspec(property(get = get_ContentEncoding))::System::Text::Encoding* ContentEncoding;

  __declspec(property(put = set_ContentLength64)) int64_t ContentLength64;

  __declspec(property(put = set_ContentType))::StringW ContentType;

  __declspec(property(get = get_Headers))::System::Net::WebHeaderCollection* Headers;

  __declspec(property(get = get_OutputStream))::System::IO::Stream* OutputStream;

  __declspec(property(get = get_SendChunked, put = set_SendChunked)) bool SendChunked;

  __declspec(property(put = set_StatusCode)) int32_t StatusCode;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr bool& __get_disposed();

  constexpr bool const& __get_disposed() const;

  constexpr void __set_disposed(bool value);

  constexpr ::System::Text::Encoding*& __get_content_encoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __get_content_encoding() const;

  constexpr void __set_content_encoding(::System::Text::Encoding* value);

  constexpr int64_t& __get_content_length();

  constexpr int64_t const& __get_content_length() const;

  constexpr void __set_content_length(int64_t value);

  constexpr bool& __get_cl_set();

  constexpr bool const& __get_cl_set() const;

  constexpr void __set_cl_set(bool value);

  constexpr ::StringW& __get_content_type();

  constexpr ::StringW const& __get_content_type() const;

  constexpr void __set_content_type(::StringW value);

  constexpr ::System::Net::CookieCollection*& __get_cookies();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::CookieCollection*> const& __get_cookies() const;

  constexpr void __set_cookies(::System::Net::CookieCollection* value);

  constexpr ::System::Net::WebHeaderCollection*& __get_headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& __get_headers() const;

  constexpr void __set_headers(::System::Net::WebHeaderCollection* value);

  constexpr bool& __get_keep_alive();

  constexpr bool const& __get_keep_alive() const;

  constexpr void __set_keep_alive(bool value);

  constexpr ::System::Net::ResponseStream*& __get_output_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ResponseStream*> const& __get_output_stream() const;

  constexpr void __set_output_stream(::System::Net::ResponseStream* value);

  constexpr ::System::Version*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& __get_version() const;

  constexpr void __set_version(::System::Version* value);

  constexpr ::StringW& __get_location();

  constexpr ::StringW const& __get_location() const;

  constexpr void __set_location(::StringW value);

  constexpr int32_t& __get_status_code();

  constexpr int32_t const& __get_status_code() const;

  constexpr void __set_status_code(int32_t value);

  constexpr ::StringW& __get_status_description();

  constexpr ::StringW const& __get_status_description() const;

  constexpr void __set_status_description(::StringW value);

  constexpr bool& __get_chunked();

  constexpr bool const& __get_chunked() const;

  constexpr void __set_chunked(bool value);

  constexpr ::System::Net::HttpListenerContext*& __get_context();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerContext*> const& __get_context() const;

  constexpr void __set_context(::System::Net::HttpListenerContext* value);

  constexpr bool& __get_HeadersSent();

  constexpr bool const& __get_HeadersSent() const;

  constexpr void __set_HeadersSent(bool value);

  constexpr ::System::Object*& __get_headers_lock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_headers_lock() const;

  constexpr void __set_headers_lock(::System::Object* value);

  constexpr bool& __get_force_close_chunked();

  constexpr bool const& __get_force_close_chunked() const;

  constexpr void __set_force_close_chunked(bool value);

  static inline void setStaticF_tspecials(::StringW value);

  static inline ::StringW getStaticF_tspecials();

  static inline ::System::Net::HttpListenerResponse* New_ctor(::System::Net::HttpListenerContext* context);

  /// @brief Method .ctor addr 0x29c95f0 size 0x114 virtual false final false
  inline void _ctor(::System::Net::HttpListenerContext* context);

  /// @brief Method get_ForceCloseChunked addr 0x29ca560 size 0x8 virtual false final false
  inline bool get_ForceCloseChunked();

  /// @brief Method get_ContentEncoding addr 0x29c7698 size 0x20 virtual false final false
  inline ::System::Text::Encoding* get_ContentEncoding();

  /// @brief Method set_ContentLength64 addr 0x29ca568 size 0x130 virtual false final false
  inline void set_ContentLength64(int64_t value);

  /// @brief Method set_ContentType addr 0x29c75c0 size 0xd8 virtual false final false
  inline void set_ContentType(::StringW value);

  /// @brief Method get_Headers addr 0x29ca698 size 0x8 virtual false final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method get_OutputStream addr 0x29ca6a0 size 0x34 virtual false final false
  inline ::System::IO::Stream* get_OutputStream();

  /// @brief Method get_SendChunked addr 0x29ca6d4 size 0x8 virtual false final false
  inline bool get_SendChunked();

  /// @brief Method set_SendChunked addr 0x29c5434 size 0xdc virtual false final false
  inline void set_SendChunked(bool value);

  /// @brief Method set_StatusCode addr 0x29c748c size 0x134 virtual false final false
  inline void set_StatusCode(int32_t value);

  /// @brief Method System.IDisposable.Dispose addr 0x29ca6dc size 0x8 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method Close addr 0x29ca6e4 size 0x2c virtual false final false
  inline void Close(bool force);

  /// @brief Method Close addr 0x29ca710 size 0x14 virtual false final false
  inline void Close();

  /// @brief Method Close addr 0x29c76b8 size 0xbc virtual false final false
  inline void Close(::ArrayW<uint8_t, ::Array<uint8_t>*> responseEntity, bool willBlock);

  /// @brief Method SendHeaders addr 0x29ca724 size 0x9a8 virtual false final false
  inline void SendHeaders(bool closing, ::System::IO::MemoryStream* ms);

  /// @brief Method FormatHeaders addr 0x29cb364 size 0x254 virtual false final false
  static inline ::StringW FormatHeaders(::System::Net::WebHeaderCollection* headers);

  /// @brief Method CookieToClientString addr 0x29cb0cc size 0x298 virtual false final false
  static inline ::StringW CookieToClientString(::System::Net::Cookie* cookie);

  /// @brief Method QuotedString addr 0x29cb5b8 size 0xd0 virtual false final false
  static inline ::StringW QuotedString(::System::Net::Cookie* cookie, ::StringW value);

  /// @brief Method IsToken addr 0x29cb688 size 0xd0 virtual false final false
  static inline bool IsToken(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpListenerResponse(HttpListenerResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpListenerResponse(HttpListenerResponse const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpListenerResponse();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Net::HttpListenerResponse, 0xa0>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HttpListenerResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListenerResponse*, "System.Net", "HttpListenerResponse");
