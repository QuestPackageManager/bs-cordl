#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileWebRequest)
namespace System::IO {
class Stream;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
class Object;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Net {
class IWebProxy;
}
namespace System {
class AsyncCallback;
}
namespace System::Net {
class ICredentials;
}
namespace System {
class IAsyncResult;
}
namespace System::Net {
class LazyAsyncResult;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Net {
class WebResponse;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Threading {
class WaitCallback;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class FileWebRequest;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::FileWebRequest);
// Type: System.Net::FileWebRequest
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 196, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7933)), TypeDefinitionIndex(TypeDefinitionIndex(3554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7971))
// CS Name: ::System.Net::FileWebRequest*
class CORDL_TYPE FileWebRequest : public ::System::Net::WebRequest {
public:
  // Declarations
  /// @brief Field m_connectionGroupName, offset 0x38, size 0x8
  __declspec(property(get = __get_m_connectionGroupName, put = __set_m_connectionGroupName))::StringW m_connectionGroupName;

  /// @brief Field m_contentLength, offset 0x40, size 0x8
  __declspec(property(get = __get_m_contentLength, put = __set_m_contentLength)) int64_t m_contentLength;

  /// @brief Field m_credentials, offset 0x48, size 0x8
  __declspec(property(get = __get_m_credentials, put = __set_m_credentials))::System::Net::ICredentials* m_credentials;

  /// @brief Field m_fileAccess, offset 0x50, size 0x4
  __declspec(property(get = __get_m_fileAccess, put = __set_m_fileAccess))::System::IO::FileAccess m_fileAccess;

  /// @brief Field m_headers, offset 0x58, size 0x8
  __declspec(property(get = __get_m_headers, put = __set_m_headers))::System::Net::WebHeaderCollection* m_headers;

  /// @brief Field m_method, offset 0x60, size 0x8
  __declspec(property(get = __get_m_method, put = __set_m_method))::StringW m_method;

  /// @brief Field m_preauthenticate, offset 0x68, size 0x1
  __declspec(property(get = __get_m_preauthenticate, put = __set_m_preauthenticate)) bool m_preauthenticate;

  /// @brief Field m_proxy, offset 0x70, size 0x8
  __declspec(property(get = __get_m_proxy, put = __set_m_proxy))::System::Net::IWebProxy* m_proxy;

  /// @brief Field m_readerEvent, offset 0x78, size 0x8
  __declspec(property(get = __get_m_readerEvent, put = __set_m_readerEvent))::System::Threading::ManualResetEvent* m_readerEvent;

  /// @brief Field m_readPending, offset 0x80, size 0x1
  __declspec(property(get = __get_m_readPending, put = __set_m_readPending)) bool m_readPending;

  /// @brief Field m_response, offset 0x88, size 0x8
  __declspec(property(get = __get_m_response, put = __set_m_response))::System::Net::WebResponse* m_response;

  /// @brief Field m_stream, offset 0x90, size 0x8
  __declspec(property(get = __get_m_stream, put = __set_m_stream))::System::IO::Stream* m_stream;

  /// @brief Field m_syncHint, offset 0x98, size 0x1
  __declspec(property(get = __get_m_syncHint, put = __set_m_syncHint)) bool m_syncHint;

  /// @brief Field m_timeout, offset 0x9c, size 0x4
  __declspec(property(get = __get_m_timeout, put = __set_m_timeout)) int32_t m_timeout;

  /// @brief Field m_uri, offset 0xa0, size 0x8
  __declspec(property(get = __get_m_uri, put = __set_m_uri))::System::Uri* m_uri;

  /// @brief Field m_writePending, offset 0xa8, size 0x1
  __declspec(property(get = __get_m_writePending, put = __set_m_writePending)) bool m_writePending;

  /// @brief Field m_writing, offset 0xa9, size 0x1
  __declspec(property(get = __get_m_writing, put = __set_m_writing)) bool m_writing;

  /// @brief Field m_WriteAResult, offset 0xb0, size 0x8
  __declspec(property(get = __get_m_WriteAResult, put = __set_m_WriteAResult))::System::Net::LazyAsyncResult* m_WriteAResult;

  /// @brief Field m_ReadAResult, offset 0xb8, size 0x8
  __declspec(property(get = __get_m_ReadAResult, put = __set_m_ReadAResult))::System::Net::LazyAsyncResult* m_ReadAResult;

  /// @brief Field m_Aborted, offset 0xc0, size 0x4
  __declspec(property(get = __get_m_Aborted, put = __set_m_Aborted)) int32_t m_Aborted;

  /// @brief Field s_GetRequestStreamCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_GetRequestStreamCallback, put = setStaticF_s_GetRequestStreamCallback))::System::Threading::WaitCallback* s_GetRequestStreamCallback;

  /// @brief Field s_GetResponseCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_GetResponseCallback, put = setStaticF_s_GetResponseCallback))::System::Threading::WaitCallback* s_GetResponseCallback;

  __declspec(property(get = get_Aborted)) bool Aborted;

  __declspec(property(put = set_ConnectionGroupName))::StringW ConnectionGroupName;

  __declspec(property(get = get_ContentLength, put = set_ContentLength)) int64_t ContentLength;

  __declspec(property(get = get_Credentials, put = set_Credentials))::System::Net::ICredentials* Credentials;

  __declspec(property(get = get_Headers))::System::Net::WebHeaderCollection* Headers;

  __declspec(property(get = get_Method, put = set_Method))::StringW Method;

  __declspec(property(put = set_PreAuthenticate)) bool PreAuthenticate;

  __declspec(property(get = get_Proxy, put = set_Proxy))::System::Net::IWebProxy* Proxy;

  __declspec(property(get = get_Timeout, put = set_Timeout)) int32_t Timeout;

  __declspec(property(get = get_RequestUri))::System::Uri* RequestUri;

  __declspec(property(get = get_UseDefaultCredentials)) bool UseDefaultCredentials;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr ::StringW& __get_m_connectionGroupName();

  constexpr ::StringW const& __get_m_connectionGroupName() const;

  constexpr void __set_m_connectionGroupName(::StringW value);

  constexpr int64_t& __get_m_contentLength();

  constexpr int64_t const& __get_m_contentLength() const;

  constexpr void __set_m_contentLength(int64_t value);

  constexpr ::System::Net::ICredentials*& __get_m_credentials();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ICredentials*> const& __get_m_credentials() const;

  constexpr void __set_m_credentials(::System::Net::ICredentials* value);

  constexpr ::System::IO::FileAccess& __get_m_fileAccess();

  constexpr ::System::IO::FileAccess const& __get_m_fileAccess() const;

  constexpr void __set_m_fileAccess(::System::IO::FileAccess value);

  constexpr ::System::Net::WebHeaderCollection*& __get_m_headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& __get_m_headers() const;

  constexpr void __set_m_headers(::System::Net::WebHeaderCollection* value);

  constexpr ::StringW& __get_m_method();

  constexpr ::StringW const& __get_m_method() const;

  constexpr void __set_m_method(::StringW value);

  constexpr bool& __get_m_preauthenticate();

  constexpr bool const& __get_m_preauthenticate() const;

  constexpr void __set_m_preauthenticate(bool value);

  constexpr ::System::Net::IWebProxy*& __get_m_proxy();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& __get_m_proxy() const;

  constexpr void __set_m_proxy(::System::Net::IWebProxy* value);

  constexpr ::System::Threading::ManualResetEvent*& __get_m_readerEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& __get_m_readerEvent() const;

  constexpr void __set_m_readerEvent(::System::Threading::ManualResetEvent* value);

  constexpr bool& __get_m_readPending();

  constexpr bool const& __get_m_readPending() const;

  constexpr void __set_m_readPending(bool value);

  constexpr ::System::Net::WebResponse*& __get_m_response();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebResponse*> const& __get_m_response() const;

  constexpr void __set_m_response(::System::Net::WebResponse* value);

  constexpr ::System::IO::Stream*& __get_m_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_m_stream() const;

  constexpr void __set_m_stream(::System::IO::Stream* value);

  constexpr bool& __get_m_syncHint();

  constexpr bool const& __get_m_syncHint() const;

  constexpr void __set_m_syncHint(bool value);

  constexpr int32_t& __get_m_timeout();

  constexpr int32_t const& __get_m_timeout() const;

  constexpr void __set_m_timeout(int32_t value);

  constexpr ::System::Uri*& __get_m_uri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __get_m_uri() const;

  constexpr void __set_m_uri(::System::Uri* value);

  constexpr bool& __get_m_writePending();

  constexpr bool const& __get_m_writePending() const;

  constexpr void __set_m_writePending(bool value);

  constexpr bool& __get_m_writing();

  constexpr bool const& __get_m_writing() const;

  constexpr void __set_m_writing(bool value);

  constexpr ::System::Net::LazyAsyncResult*& __get_m_WriteAResult();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::LazyAsyncResult*> const& __get_m_WriteAResult() const;

  constexpr void __set_m_WriteAResult(::System::Net::LazyAsyncResult* value);

  constexpr ::System::Net::LazyAsyncResult*& __get_m_ReadAResult();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::LazyAsyncResult*> const& __get_m_ReadAResult() const;

  constexpr void __set_m_ReadAResult(::System::Net::LazyAsyncResult* value);

  constexpr int32_t& __get_m_Aborted();

  constexpr int32_t const& __get_m_Aborted() const;

  constexpr void __set_m_Aborted(int32_t value);

  static inline void setStaticF_s_GetRequestStreamCallback(::System::Threading::WaitCallback* value);

  static inline ::System::Threading::WaitCallback* getStaticF_s_GetRequestStreamCallback();

  static inline void setStaticF_s_GetResponseCallback(::System::Threading::WaitCallback* value);

  static inline ::System::Threading::WaitCallback* getStaticF_s_GetResponseCallback();

  static inline ::System::Net::FileWebRequest* New_ctor(::System::Uri* uri);

  /// @brief Method .ctor addr 0x2835c9c size 0x178 virtual false final false
  inline void _ctor(::System::Uri* uri);

  static inline ::System::Net::FileWebRequest* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor addr 0x2835e14 size 0x39c virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x28361b0 size 0xc virtual true final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetObjectData addr 0x28361bc size 0x290 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method get_Aborted addr 0x283644c size 0x10 virtual false final false
  inline bool get_Aborted();

  /// @brief Method set_ConnectionGroupName addr 0x283645c size 0x8 virtual true final false
  inline void set_ConnectionGroupName(::StringW value);

  /// @brief Method get_ContentLength addr 0x2836464 size 0x8 virtual true final false
  inline int64_t get_ContentLength();

  /// @brief Method set_ContentLength addr 0x283646c size 0x84 virtual true final false
  inline void set_ContentLength(int64_t value);

  /// @brief Method get_Credentials addr 0x28364f0 size 0x8 virtual true final false
  inline ::System::Net::ICredentials* get_Credentials();

  /// @brief Method set_Credentials addr 0x28364f8 size 0x8 virtual true final false
  inline void set_Credentials(::System::Net::ICredentials* value);

  /// @brief Method get_Headers addr 0x2836500 size 0x8 virtual true final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method get_Method addr 0x2836508 size 0x8 virtual true final false
  inline ::StringW get_Method();

  /// @brief Method set_Method addr 0x2836510 size 0xd4 virtual true final false
  inline void set_Method(::StringW value);

  /// @brief Method set_PreAuthenticate addr 0x28365e4 size 0xc virtual true final false
  inline void set_PreAuthenticate(bool value);

  /// @brief Method get_Proxy addr 0x28365f0 size 0x8 virtual true final false
  inline ::System::Net::IWebProxy* get_Proxy();

  /// @brief Method set_Proxy addr 0x28365f8 size 0x8 virtual true final false
  inline void set_Proxy(::System::Net::IWebProxy* value);

  /// @brief Method get_Timeout addr 0x2836600 size 0x8 virtual true final false
  inline int32_t get_Timeout();

  /// @brief Method set_Timeout addr 0x2836608 size 0x88 virtual true final false
  inline void set_Timeout(int32_t value);

  /// @brief Method get_RequestUri addr 0x2836690 size 0x8 virtual true final false
  inline ::System::Uri* get_RequestUri();

  /// @brief Method BeginGetRequestStream addr 0x2836698 size 0x3d4 virtual true final false
  inline ::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginGetResponse addr 0x2836adc size 0x2e0 virtual true final false
  inline ::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method CanGetRequestStream addr 0x2836a6c size 0x70 virtual false final false
  inline bool CanGetRequestStream();

  /// @brief Method EndGetRequestStream addr 0x2836dbc size 0x304 virtual true final false
  inline ::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* asyncResult);

  /// @brief Method EndGetResponse addr 0x28370c0 size 0x304 virtual true final false
  inline ::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* asyncResult);

  /// @brief Method GetResponse addr 0x28373c4 size 0x370 virtual true final false
  inline ::System::Net::WebResponse* GetResponse();

  /// @brief Method GetRequestStreamCallback addr 0x2837734 size 0x230 virtual false final false
  static inline void GetRequestStreamCallback(::System::Object* state);

  /// @brief Method GetResponseCallback addr 0x2837a00 size 0x324 virtual false final false
  static inline void GetResponseCallback(::System::Object* state);

  /// @brief Method UnblockReader addr 0x2837ff0 size 0xd8 virtual false final false
  inline void UnblockReader();

  /// @brief Method get_UseDefaultCredentials addr 0x28380c8 size 0x24 virtual true final false
  inline bool get_UseDefaultCredentials();

  /// @brief Method Abort addr 0x28380ec size 0x3b4 virtual true final false
  inline void Abort();

  // Ctor Parameters [CppParam { name: "", ty: "FileWebRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileWebRequest(FileWebRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileWebRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileWebRequest(FileWebRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileWebRequest();

public:
  /// @brief Field m_connectionGroupName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_connectionGroupName;

  /// @brief Field m_contentLength, offset: 0x40, size: 0x8, def value: None
  int64_t ___m_contentLength;

  /// @brief Field m_credentials, offset: 0x48, size: 0x8, def value: None
  ::System::Net::ICredentials* ___m_credentials;

  /// @brief Field m_fileAccess, offset: 0x50, size: 0x4, def value: None
  ::System::IO::FileAccess ___m_fileAccess;

  /// @brief Field m_headers, offset: 0x58, size: 0x8, def value: None
  ::System::Net::WebHeaderCollection* ___m_headers;

  /// @brief Field m_method, offset: 0x60, size: 0x8, def value: None
  ::StringW ___m_method;

  /// @brief Field m_preauthenticate, offset: 0x68, size: 0x1, def value: None
  bool ___m_preauthenticate;

  /// @brief Field m_proxy, offset: 0x70, size: 0x8, def value: None
  ::System::Net::IWebProxy* ___m_proxy;

  /// @brief Field m_readerEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ___m_readerEvent;

  /// @brief Field m_readPending, offset: 0x80, size: 0x1, def value: None
  bool ___m_readPending;

  /// @brief Field m_response, offset: 0x88, size: 0x8, def value: None
  ::System::Net::WebResponse* ___m_response;

  /// @brief Field m_stream, offset: 0x90, size: 0x8, def value: None
  ::System::IO::Stream* ___m_stream;

  /// @brief Field m_syncHint, offset: 0x98, size: 0x1, def value: None
  bool ___m_syncHint;

  /// @brief Field m_timeout, offset: 0x9c, size: 0x4, def value: None
  int32_t ___m_timeout;

  /// @brief Field m_uri, offset: 0xa0, size: 0x8, def value: None
  ::System::Uri* ___m_uri;

  /// @brief Field m_writePending, offset: 0xa8, size: 0x1, def value: None
  bool ___m_writePending;

  /// @brief Field m_writing, offset: 0xa9, size: 0x1, def value: None
  bool ___m_writing;

  /// @brief Field m_WriteAResult, offset: 0xb0, size: 0x8, def value: None
  ::System::Net::LazyAsyncResult* ___m_WriteAResult;

  /// @brief Field m_ReadAResult, offset: 0xb8, size: 0x8, def value: None
  ::System::Net::LazyAsyncResult* ___m_ReadAResult;

  /// @brief Field m_Aborted, offset: 0xc0, size: 0x4, def value: None
  int32_t ___m_Aborted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FileWebRequest, 0xc8>, "Size mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_connectionGroupName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_contentLength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_credentials) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_fileAccess) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_headers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_method) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_preauthenticate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_proxy) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_readerEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_readPending) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_response) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_stream) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_syncHint) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_timeout) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_uri) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_writePending) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_writing) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_WriteAResult) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_ReadAResult) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_Aborted) == 0xc0, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::FileWebRequest);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FileWebRequest*, "System.Net", "FileWebRequest");
