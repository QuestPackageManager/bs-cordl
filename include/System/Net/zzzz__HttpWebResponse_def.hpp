#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpWebResponse)
namespace System {
class Uri;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Net {
class CookieContainer;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Version;
}
namespace System::Net {
class WebResponseStream;
}
namespace System::IO {
class Stream;
}
namespace System {
class IDisposable;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System::Net {
class CookieCollection;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Net {
class HttpWebResponse;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpWebResponse);
// Type: System.Net::HttpWebResponse
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9027)), TypeDefinitionIndex(TypeDefinitionIndex(9097))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9187))
// CS Name: ::System.Net::HttpWebResponse*
class CORDL_TYPE HttpWebResponse : public ::System::Net::WebResponse {
public:
  // Declarations
  /// @brief Field uri, offset 0x20, size 0x8
  __declspec(property(get = __get_uri, put = __set_uri))::System::Uri* uri;

  /// @brief Field webHeaders, offset 0x28, size 0x8
  __declspec(property(get = __get_webHeaders, put = __set_webHeaders))::System::Net::WebHeaderCollection* webHeaders;

  /// @brief Field cookieCollection, offset 0x30, size 0x8
  __declspec(property(get = __get_cookieCollection, put = __set_cookieCollection))::System::Net::CookieCollection* cookieCollection;

  /// @brief Field method, offset 0x38, size 0x8
  __declspec(property(get = __get_method, put = __set_method))::StringW method;

  /// @brief Field version, offset 0x40, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::System::Version* version;

  /// @brief Field statusCode, offset 0x48, size 0x4
  __declspec(property(get = __get_statusCode, put = __set_statusCode))::System::Net::HttpStatusCode statusCode;

  /// @brief Field statusDescription, offset 0x50, size 0x8
  __declspec(property(get = __get_statusDescription, put = __set_statusDescription))::StringW statusDescription;

  /// @brief Field contentLength, offset 0x58, size 0x8
  __declspec(property(get = __get_contentLength, put = __set_contentLength)) int64_t contentLength;

  /// @brief Field contentType, offset 0x60, size 0x8
  __declspec(property(get = __get_contentType, put = __set_contentType))::StringW contentType;

  /// @brief Field cookie_container, offset 0x68, size 0x8
  __declspec(property(get = __get_cookie_container, put = __set_cookie_container))::System::Net::CookieContainer* cookie_container;

  /// @brief Field disposed, offset 0x70, size 0x1
  __declspec(property(get = __get_disposed, put = __set_disposed)) bool disposed;

  /// @brief Field stream, offset 0x78, size 0x8
  __declspec(property(get = __get_stream, put = __set_stream))::System::IO::Stream* stream;

  __declspec(property(get = get_Headers))::System::Net::WebHeaderCollection* Headers;

  __declspec(property(get = get_ResponseUri))::System::Uri* ResponseUri;

  __declspec(property(get = get_StatusCode))::System::Net::HttpStatusCode StatusCode;

  __declspec(property(get = get_StatusDescription))::StringW StatusDescription;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Uri*& __get_uri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __get_uri() const;

  constexpr void __set_uri(::System::Uri* value);

  constexpr ::System::Net::WebHeaderCollection*& __get_webHeaders();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& __get_webHeaders() const;

  constexpr void __set_webHeaders(::System::Net::WebHeaderCollection* value);

  constexpr ::System::Net::CookieCollection*& __get_cookieCollection();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::CookieCollection*> const& __get_cookieCollection() const;

  constexpr void __set_cookieCollection(::System::Net::CookieCollection* value);

  constexpr ::StringW& __get_method();

  constexpr ::StringW const& __get_method() const;

  constexpr void __set_method(::StringW value);

  constexpr ::System::Version*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& __get_version() const;

  constexpr void __set_version(::System::Version* value);

  constexpr ::System::Net::HttpStatusCode& __get_statusCode();

  constexpr ::System::Net::HttpStatusCode const& __get_statusCode() const;

  constexpr void __set_statusCode(::System::Net::HttpStatusCode value);

  constexpr ::StringW& __get_statusDescription();

  constexpr ::StringW const& __get_statusDescription() const;

  constexpr void __set_statusDescription(::StringW value);

  constexpr int64_t& __get_contentLength();

  constexpr int64_t const& __get_contentLength() const;

  constexpr void __set_contentLength(int64_t value);

  constexpr ::StringW& __get_contentType();

  constexpr ::StringW const& __get_contentType() const;

  constexpr void __set_contentType(::StringW value);

  constexpr ::System::Net::CookieContainer*& __get_cookie_container();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::CookieContainer*> const& __get_cookie_container() const;

  constexpr void __set_cookie_container(::System::Net::CookieContainer* value);

  constexpr bool& __get_disposed();

  constexpr bool const& __get_disposed() const;

  constexpr void __set_disposed(bool value);

  constexpr ::System::IO::Stream*& __get_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_stream() const;

  constexpr void __set_stream(::System::IO::Stream* value);

  static inline ::System::Net::HttpWebResponse* New_ctor();

  /// @brief Method .ctor addr 0x29d1cd0 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::System::Net::HttpWebResponse* New_ctor(::System::Uri* uri, ::StringW method, ::System::Net::HttpStatusCode status, ::System::Net::WebHeaderCollection* headers);

  /// @brief Method .ctor addr 0x29d1cd8 size 0xb4 virtual false final false
  inline void _ctor(::System::Uri* uri, ::StringW method, ::System::Net::HttpStatusCode status, ::System::Net::WebHeaderCollection* headers);

  static inline ::System::Net::HttpWebResponse* New_ctor(::System::Uri* uri, ::StringW method, ::System::Net::WebResponseStream* stream, ::System::Net::CookieContainer* container);

  /// @brief Method .ctor addr 0x29d1514 size 0x2ec virtual false final false
  inline void _ctor(::System::Uri* uri, ::StringW method, ::System::Net::WebResponseStream* stream, ::System::Net::CookieContainer* container);

  static inline ::System::Net::HttpWebResponse* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor addr 0x29d1fa0 size 0x39c virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method get_Headers addr 0x29d233c size 0x8 virtual true final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method get_ResponseUri addr 0x29d2344 size 0x18 virtual true final false
  inline ::System::Uri* get_ResponseUri();

  /// @brief Method get_StatusCode addr 0x29d23e0 size 0x8 virtual true final false
  inline ::System::Net::HttpStatusCode get_StatusCode();

  /// @brief Method get_StatusDescription addr 0x29d23e8 size 0x18 virtual true final false
  inline ::StringW get_StatusDescription();

  /// @brief Method GetResponseStream addr 0x29d2400 size 0x9c virtual true final false
  inline ::System::IO::Stream* GetResponseStream();

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x29d249c size 0xc virtual true final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetObjectData addr 0x29d24a8 size 0x1c0 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method Close addr 0x29d2668 size 0x30 virtual true final false
  inline void Close();

  /// @brief Method System.IDisposable.Dispose addr 0x29d2698 size 0x10 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method Dispose addr 0x29d26a8 size 0x14 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method CheckDisposed addr 0x29d235c size 0x84 virtual false final false
  inline void CheckDisposed();

  /// @brief Method FillCookies addr 0x29d1d8c size 0x214 virtual false final false
  inline void FillCookies();

  // Ctor Parameters [CppParam { name: "", ty: "HttpWebResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpWebResponse(HttpWebResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpWebResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpWebResponse(HttpWebResponse const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpWebResponse();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Net::HttpWebResponse, 0x80>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HttpWebResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpWebResponse*, "System.Net", "HttpWebResponse");
