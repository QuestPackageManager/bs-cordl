#pragma once
// IWYU pragma private; include "System/Net/HttpWebResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpWebResponse)
namespace System::IO {
class Stream;
}
namespace System::Net {
class CookieCollection;
}
namespace System::Net {
class CookieContainer;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class WebResponseStream;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class IDisposable;
}
namespace System {
class Uri;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System::Net {
class HttpWebResponse;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpWebResponse);
// Dependencies System.Net.HttpStatusCode, System.Net.WebResponse
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpWebResponse
class CORDL_TYPE HttpWebResponse : public ::System::Net::WebResponse {
public:
  // Declarations
  __declspec(property(get = get_Headers)) ::System::Net::WebHeaderCollection* Headers;

  __declspec(property(get = get_ResponseUri)) ::System::Uri* ResponseUri;

  __declspec(property(get = get_StatusCode)) ::System::Net::HttpStatusCode StatusCode;

  __declspec(property(get = get_StatusDescription)) ::StringW StatusDescription;

  /// @brief Field contentLength, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_contentLength, put = __cordl_internal_set_contentLength)) int64_t contentLength;

  /// @brief Field contentType, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_contentType, put = __cordl_internal_set_contentType)) ::StringW contentType;

  /// @brief Field cookieCollection, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cookieCollection, put = __cordl_internal_set_cookieCollection)) ::System::Net::CookieCollection* cookieCollection;

  /// @brief Field cookie_container, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_cookie_container, put = __cordl_internal_set_cookie_container)) ::System::Net::CookieContainer* cookie_container;

  /// @brief Field disposed, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field method, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method)) ::StringW method;

  /// @brief Field statusCode, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_statusCode, put = __cordl_internal_set_statusCode)) ::System::Net::HttpStatusCode statusCode;

  /// @brief Field statusDescription, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_statusDescription, put = __cordl_internal_set_statusDescription)) ::StringW statusDescription;

  /// @brief Field stream, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_stream, put = __cordl_internal_set_stream)) ::System::IO::Stream* stream;

  /// @brief Field uri, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_uri, put = __cordl_internal_set_uri)) ::System::Uri* uri;

  /// @brief Field version, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::System::Version* version;

  /// @brief Field webHeaders, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_webHeaders, put = __cordl_internal_set_webHeaders)) ::System::Net::WebHeaderCollection* webHeaders;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method CheckDisposed, addr 0x618337c, size 0x74, virtual false, abstract: false, final false
  inline void CheckDisposed();

  /// @brief Method Close, addr 0x618368c, size 0x34, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x61836d0, size 0x14, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method FillCookies, addr 0x6182d78, size 0x224, virtual false, abstract: false, final false
  inline void FillCookies();

  /// @brief Method GetObjectData, addr 0x61834c4, size 0x1c8, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetResponseStream, addr 0x6183410, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IO::Stream* GetResponseStream();

  static inline ::System::Net::HttpWebResponse* New_ctor();

  static inline ::System::Net::HttpWebResponse* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  static inline ::System::Net::HttpWebResponse* New_ctor(::System::Uri* uri, ::StringW method, ::System::Net::HttpStatusCode status, ::System::Net::WebHeaderCollection* headers);

  static inline ::System::Net::HttpWebResponse* New_ctor(::System::Uri* uri, ::StringW method, ::System::Net::WebResponseStream* stream, ::System::Net::CookieContainer* container);

  /// @brief Method System.IDisposable.Dispose, addr 0x61836c0, size 0x10, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x61834b8, size 0xc, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  constexpr int64_t const& __cordl_internal_get_contentLength() const;

  constexpr int64_t& __cordl_internal_get_contentLength();

  constexpr ::StringW const& __cordl_internal_get_contentType() const;

  constexpr ::StringW& __cordl_internal_get_contentType();

  constexpr ::System::Net::CookieCollection* const& __cordl_internal_get_cookieCollection() const;

  constexpr ::System::Net::CookieCollection*& __cordl_internal_get_cookieCollection();

  constexpr ::System::Net::CookieContainer* const& __cordl_internal_get_cookie_container() const;

  constexpr ::System::Net::CookieContainer*& __cordl_internal_get_cookie_container();

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr ::StringW const& __cordl_internal_get_method() const;

  constexpr ::StringW& __cordl_internal_get_method();

  constexpr ::System::Net::HttpStatusCode const& __cordl_internal_get_statusCode() const;

  constexpr ::System::Net::HttpStatusCode& __cordl_internal_get_statusCode();

  constexpr ::StringW const& __cordl_internal_get_statusDescription() const;

  constexpr ::StringW& __cordl_internal_get_statusDescription();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_stream();

  constexpr ::System::Uri* const& __cordl_internal_get_uri() const;

  constexpr ::System::Uri*& __cordl_internal_get_uri();

  constexpr ::System::Version* const& __cordl_internal_get_version() const;

  constexpr ::System::Version*& __cordl_internal_get_version();

  constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get_webHeaders() const;

  constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get_webHeaders();

  constexpr void __cordl_internal_set_contentLength(int64_t value);

  constexpr void __cordl_internal_set_contentType(::StringW value);

  constexpr void __cordl_internal_set_cookieCollection(::System::Net::CookieCollection* value);

  constexpr void __cordl_internal_set_cookie_container(::System::Net::CookieContainer* value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_method(::StringW value);

  constexpr void __cordl_internal_set_statusCode(::System::Net::HttpStatusCode value);

  constexpr void __cordl_internal_set_statusDescription(::StringW value);

  constexpr void __cordl_internal_set_stream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_uri(::System::Uri* value);

  constexpr void __cordl_internal_set_version(::System::Version* value);

  constexpr void __cordl_internal_set_webHeaders(::System::Net::WebHeaderCollection* value);

  /// @brief Method .ctor, addr 0x6182cc8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6182f9c, size 0x3c0, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor, addr 0x6182ccc, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* uri, ::StringW method, ::System::Net::HttpStatusCode status, ::System::Net::WebHeaderCollection* headers);

  /// @brief Method .ctor, addr 0x6182488, size 0x2f0, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* uri, ::StringW method, ::System::Net::WebResponseStream* stream, ::System::Net::CookieContainer* container);

  /// @brief Method get_Headers, addr 0x618335c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method get_ResponseUri, addr 0x6183364, size 0x18, virtual true, abstract: false, final false
  inline ::System::Uri* get_ResponseUri();

  /// @brief Method get_StatusCode, addr 0x61833f0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Net::HttpStatusCode get_StatusCode();

  /// @brief Method get_StatusDescription, addr 0x61833f8, size 0x18, virtual true, abstract: false, final false
  inline ::StringW get_StatusDescription();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpWebResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpWebResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpWebResponse(HttpWebResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpWebResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpWebResponse(HttpWebResponse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11586 };

  /// @brief Field uri, offset: 0x20, size: 0x8, def value: None
  ::System::Uri* ___uri;

  /// @brief Field webHeaders, offset: 0x28, size: 0x8, def value: None
  ::System::Net::WebHeaderCollection* ___webHeaders;

  /// @brief Field cookieCollection, offset: 0x30, size: 0x8, def value: None
  ::System::Net::CookieCollection* ___cookieCollection;

  /// @brief Field method, offset: 0x38, size: 0x8, def value: None
  ::StringW ___method;

  /// @brief Field version, offset: 0x40, size: 0x8, def value: None
  ::System::Version* ___version;

  /// @brief Field statusCode, offset: 0x48, size: 0x4, def value: None
  ::System::Net::HttpStatusCode ___statusCode;

  /// @brief Field statusDescription, offset: 0x50, size: 0x8, def value: None
  ::StringW ___statusDescription;

  /// @brief Field contentLength, offset: 0x58, size: 0x8, def value: None
  int64_t ___contentLength;

  /// @brief Field contentType, offset: 0x60, size: 0x8, def value: None
  ::StringW ___contentType;

  /// @brief Field cookie_container, offset: 0x68, size: 0x8, def value: None
  ::System::Net::CookieContainer* ___cookie_container;

  /// @brief Field disposed, offset: 0x70, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field stream, offset: 0x78, size: 0x8, def value: None
  ::System::IO::Stream* ___stream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpWebResponse, ___uri) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebResponse, ___webHeaders) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebResponse, ___cookieCollection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebResponse, ___method) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebResponse, ___version) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebResponse, ___statusCode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebResponse, ___statusDescription) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebResponse, ___contentLength) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebResponse, ___contentType) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebResponse, ___cookie_container) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebResponse, ___disposed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebResponse, ___stream) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HttpWebResponse, 0x80>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HttpWebResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpWebResponse*, "System.Net", "HttpWebResponse");
