#pragma once
// IWYU pragma private; include "System/Net/HttpListenerRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListenerRequest)
namespace System::Collections::Specialized {
class NameValueCollection;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class CookieCollection;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System {
class Uri;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System::Net {
class HttpListenerRequest;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpListenerRequest);
// Type: System.Net::HttpListenerRequest
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 131, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::HttpListenerRequest*
class CORDL_TYPE HttpListenerRequest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HasEntityBody)) bool HasEntityBody;

  __declspec(property(get = get_Headers))::System::Collections::Specialized::NameValueCollection* Headers;

  __declspec(property(get = get_InputStream))::System::IO::Stream* InputStream;

  __declspec(property(get = get_IsSecureConnection)) bool IsSecureConnection;

  __declspec(property(get = get_KeepAlive)) bool KeepAlive;

  __declspec(property(get = get_LocalEndPoint))::System::Net::IPEndPoint* LocalEndPoint;

  __declspec(property(get = get_ProtocolVersion))::System::Version* ProtocolVersion;

  __declspec(property(get = get_Url))::System::Uri* Url;

  __declspec(property(get = get_UserHostAddress))::StringW UserHostAddress;

  __declspec(property(get = get_UserHostName))::StringW UserHostName;

  /// @brief Field _100continue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__100continue, put = setStaticF__100continue))::ArrayW<uint8_t, ::Array<uint8_t>*> _100continue;

  /// @brief Field accept_types, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_accept_types, put = __cordl_internal_set_accept_types))::ArrayW<::StringW, ::Array<::StringW>*> accept_types;

  /// @brief Field cl_set, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_cl_set, put = __cordl_internal_set_cl_set)) bool cl_set;

  /// @brief Field content_length, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_content_length, put = __cordl_internal_set_content_length)) int64_t content_length;

  /// @brief Field context, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context))::System::Net::HttpListenerContext* context;

  /// @brief Field cookies, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cookies, put = __cordl_internal_set_cookies))::System::Net::CookieCollection* cookies;

  /// @brief Field headers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_headers, put = __cordl_internal_set_headers))::System::Net::WebHeaderCollection* headers;

  /// @brief Field input_stream, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_input_stream, put = __cordl_internal_set_input_stream))::System::IO::Stream* input_stream;

  /// @brief Field is_chunked, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_is_chunked, put = __cordl_internal_set_is_chunked)) bool is_chunked;

  /// @brief Field ka_set, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get_ka_set, put = __cordl_internal_set_ka_set)) bool ka_set;

  /// @brief Field keep_alive, offset 0x82, size 0x1
  __declspec(property(get = __cordl_internal_get_keep_alive, put = __cordl_internal_set_keep_alive)) bool keep_alive;

  /// @brief Field method, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method))::StringW method;

  /// @brief Field query_string, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_query_string, put = __cordl_internal_set_query_string))::System::Collections::Specialized::NameValueCollection* query_string;

  /// @brief Field raw_url, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_raw_url, put = __cordl_internal_set_raw_url))::StringW raw_url;

  /// @brief Field referrer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_referrer, put = __cordl_internal_set_referrer))::System::Uri* referrer;

  /// @brief Field separators, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_separators, put = setStaticF_separators))::ArrayW<char16_t, ::Array<char16_t>*> separators;

  /// @brief Field url, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_url, put = __cordl_internal_set_url))::System::Uri* url;

  /// @brief Field user_languages, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_user_languages, put = __cordl_internal_set_user_languages))::ArrayW<::StringW, ::Array<::StringW>*> user_languages;

  /// @brief Field version, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version))::System::Version* version;

  /// @brief Method AddHeader, addr 0x3028e08, size 0x8e4, virtual false, abstract: false, final false
  inline void AddHeader(::StringW header);

  /// @brief Method CreateQueryString, addr 0x302c048, size 0x218, virtual false, abstract: false, final false
  inline void CreateQueryString(::StringW query);

  /// @brief Method FinishInitialization, addr 0x3027f30, size 0x61c, virtual false, abstract: false, final false
  inline bool FinishInitialization();

  /// @brief Method FlushInput, addr 0x3029b30, size 0x2c8, virtual false, abstract: false, final false
  inline bool FlushInput();

  /// @brief Method IsPredefinedScheme, addr 0x302c308, size 0x1f0, virtual false, abstract: false, final false
  static inline bool IsPredefinedScheme(::StringW scheme);

  /// @brief Method MaybeUri, addr 0x302c260, size 0xa8, virtual false, abstract: false, final false
  static inline bool MaybeUri(::StringW s);

  static inline ::System::Net::HttpListenerRequest* New_ctor(::System::Net::HttpListenerContext* context);

  /// @brief Method SetRequestLine, addr 0x3028abc, size 0x34c, virtual false, abstract: false, final false
  inline void SetRequestLine(::StringW req);

  /// @brief Method Unquote, addr 0x302c5b0, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW Unquote(::StringW str);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_accept_types() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_accept_types();

  constexpr bool const& __cordl_internal_get_cl_set() const;

  constexpr bool& __cordl_internal_get_cl_set();

  constexpr int64_t const& __cordl_internal_get_content_length() const;

  constexpr int64_t& __cordl_internal_get_content_length();

  constexpr ::System::Net::HttpListenerContext*& __cordl_internal_get_context();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerContext*> const& __cordl_internal_get_context() const;

  constexpr ::System::Net::CookieCollection*& __cordl_internal_get_cookies();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::CookieCollection*> const& __cordl_internal_get_cookies() const;

  constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get_headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& __cordl_internal_get_headers() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_input_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_input_stream() const;

  constexpr bool const& __cordl_internal_get_is_chunked() const;

  constexpr bool& __cordl_internal_get_is_chunked();

  constexpr bool const& __cordl_internal_get_ka_set() const;

  constexpr bool& __cordl_internal_get_ka_set();

  constexpr bool const& __cordl_internal_get_keep_alive() const;

  constexpr bool& __cordl_internal_get_keep_alive();

  constexpr ::StringW const& __cordl_internal_get_method() const;

  constexpr ::StringW& __cordl_internal_get_method();

  constexpr ::System::Collections::Specialized::NameValueCollection*& __cordl_internal_get_query_string();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::NameValueCollection*> const& __cordl_internal_get_query_string() const;

  constexpr ::StringW const& __cordl_internal_get_raw_url() const;

  constexpr ::StringW& __cordl_internal_get_raw_url();

  constexpr ::System::Uri*& __cordl_internal_get_referrer();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get_referrer() const;

  constexpr ::System::Uri*& __cordl_internal_get_url();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get_url() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_user_languages() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_user_languages();

  constexpr ::System::Version*& __cordl_internal_get_version();

  constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& __cordl_internal_get_version() const;

  constexpr void __cordl_internal_set_accept_types(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_cl_set(bool value);

  constexpr void __cordl_internal_set_content_length(int64_t value);

  constexpr void __cordl_internal_set_context(::System::Net::HttpListenerContext* value);

  constexpr void __cordl_internal_set_cookies(::System::Net::CookieCollection* value);

  constexpr void __cordl_internal_set_headers(::System::Net::WebHeaderCollection* value);

  constexpr void __cordl_internal_set_input_stream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_is_chunked(bool value);

  constexpr void __cordl_internal_set_ka_set(bool value);

  constexpr void __cordl_internal_set_keep_alive(bool value);

  constexpr void __cordl_internal_set_method(::StringW value);

  constexpr void __cordl_internal_set_query_string(::System::Collections::Specialized::NameValueCollection* value);

  constexpr void __cordl_internal_set_raw_url(::StringW value);

  constexpr void __cordl_internal_set_referrer(::System::Uri* value);

  constexpr void __cordl_internal_set_url(::System::Uri* value);

  constexpr void __cordl_internal_set_user_languages(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_version(::System::Version* value);

  /// @brief Method .ctor, addr 0x302b7a0, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::HttpListenerContext* context);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF__100continue();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_separators();

  /// @brief Method get_HasEntityBody, addr 0x302c61c, size 0x24, virtual false, abstract: false, final false
  inline bool get_HasEntityBody();

  /// @brief Method get_Headers, addr 0x302c6e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Specialized::NameValueCollection* get_Headers();

  /// @brief Method get_InputStream, addr 0x302c640, size 0xa4, virtual false, abstract: false, final false
  inline ::System::IO::Stream* get_InputStream();

  /// @brief Method get_IsSecureConnection, addr 0x302c56c, size 0x24, virtual false, abstract: false, final false
  inline bool get_IsSecureConnection();

  /// @brief Method get_KeepAlive, addr 0x30299d4, size 0x15c, virtual false, abstract: false, final false
  inline bool get_KeepAlive();

  /// @brief Method get_LocalEndPoint, addr 0x302c590, size 0x20, virtual false, abstract: false, final false
  inline ::System::Net::IPEndPoint* get_LocalEndPoint();

  /// @brief Method get_ProtocolVersion, addr 0x302c6ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Version* get_ProtocolVersion();

  /// @brief Method get_Url, addr 0x302c6f4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_Url();

  /// @brief Method get_UserHostAddress, addr 0x302c54c, size 0x20, virtual false, abstract: false, final false
  inline ::StringW get_UserHostAddress();

  /// @brief Method get_UserHostName, addr 0x302c4f8, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_UserHostName();

  static inline void setStaticF__100continue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_separators(::ArrayW<char16_t, ::Array<char16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpListenerRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpListenerRequest(HttpListenerRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpListenerRequest(HttpListenerRequest const&) = delete;

  /// @brief Field accept_types, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___accept_types;

  /// @brief Field content_length, offset: 0x18, size: 0x8, def value: None
  int64_t ___content_length;

  /// @brief Field cl_set, offset: 0x20, size: 0x1, def value: None
  bool ___cl_set;

  /// @brief Field cookies, offset: 0x28, size: 0x8, def value: None
  ::System::Net::CookieCollection* ___cookies;

  /// @brief Field headers, offset: 0x30, size: 0x8, def value: None
  ::System::Net::WebHeaderCollection* ___headers;

  /// @brief Field method, offset: 0x38, size: 0x8, def value: None
  ::StringW ___method;

  /// @brief Field input_stream, offset: 0x40, size: 0x8, def value: None
  ::System::IO::Stream* ___input_stream;

  /// @brief Field version, offset: 0x48, size: 0x8, def value: None
  ::System::Version* ___version;

  /// @brief Field query_string, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Specialized::NameValueCollection* ___query_string;

  /// @brief Field raw_url, offset: 0x58, size: 0x8, def value: None
  ::StringW ___raw_url;

  /// @brief Field url, offset: 0x60, size: 0x8, def value: None
  ::System::Uri* ___url;

  /// @brief Field referrer, offset: 0x68, size: 0x8, def value: None
  ::System::Uri* ___referrer;

  /// @brief Field user_languages, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___user_languages;

  /// @brief Field context, offset: 0x78, size: 0x8, def value: None
  ::System::Net::HttpListenerContext* ___context;

  /// @brief Field is_chunked, offset: 0x80, size: 0x1, def value: None
  bool ___is_chunked;

  /// @brief Field ka_set, offset: 0x81, size: 0x1, def value: None
  bool ___ka_set;

  /// @brief Field keep_alive, offset: 0x82, size: 0x1, def value: None
  bool ___keep_alive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpListenerRequest, 0x88>, "Size mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___accept_types) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___content_length) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___cl_set) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___cookies) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___headers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___method) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___input_stream) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___version) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___query_string) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___raw_url) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___url) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___referrer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___user_languages) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___context) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___is_chunked) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___ka_set) == 0x81, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___keep_alive) == 0x82, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HttpListenerRequest);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListenerRequest*, "System.Net", "HttpListenerRequest");
