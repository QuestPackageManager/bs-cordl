#pragma once
// IWYU pragma private; include "System/Net/FtpWebResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Net/zzzz__FtpStatusCode_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FtpWebResponse)
namespace System::IO {
class Stream;
}
namespace System::Net {
struct FtpStatusCode;
}
namespace System::Net {
class FtpWebResponse_EmptyStream;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System {
struct DateTime;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class FtpWebResponse;
}
namespace System::Net {
class FtpWebResponse_EmptyStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::FtpWebResponse);
MARK_REF_PTR_T(::System::Net::FtpWebResponse_EmptyStream);
// Dependencies System.IO.MemoryStream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.FtpWebResponse/EmptyStream
class CORDL_TYPE FtpWebResponse_EmptyStream : public ::System::IO::MemoryStream {
public:
  // Declarations
  static inline ::System::Net::FtpWebResponse_EmptyStream* New_ctor();

  /// @brief Method .ctor, addr 0x449df00, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpWebResponse_EmptyStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FtpWebResponse_EmptyStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FtpWebResponse_EmptyStream(FtpWebResponse_EmptyStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FtpWebResponse_EmptyStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FtpWebResponse_EmptyStream(FtpWebResponse_EmptyStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9573 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FtpWebResponse_EmptyStream, 0x50>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.DateTime, System.IDisposable, System.Net.FtpStatusCode, System.Net.WebResponse
namespace System::Net {
// Is value type: false
// CS Name: System.Net.FtpWebResponse
class CORDL_TYPE FtpWebResponse : public ::System::Net::WebResponse {
public:
  // Declarations
  using EmptyStream = ::System::Net::FtpWebResponse_EmptyStream;

  __declspec(property(get = get_Headers)) ::System::Net::WebHeaderCollection* Headers;

  __declspec(property(get = get_ResponseUri)) ::System::Uri* ResponseUri;

  __declspec(property(get = get_StatusCode)) ::System::Net::FtpStatusCode StatusCode;

  /// @brief Field _bannerMessage, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__bannerMessage, put = __cordl_internal_set__bannerMessage)) ::StringW _bannerMessage;

  /// @brief Field _contentLength, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__contentLength, put = __cordl_internal_set__contentLength)) int64_t _contentLength;

  /// @brief Field _exitMessage, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__exitMessage, put = __cordl_internal_set__exitMessage)) ::StringW _exitMessage;

  /// @brief Field _ftpRequestHeaders, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__ftpRequestHeaders, put = __cordl_internal_set__ftpRequestHeaders)) ::System::Net::WebHeaderCollection* _ftpRequestHeaders;

  /// @brief Field _lastModified, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__lastModified, put = __cordl_internal_set__lastModified)) ::System::DateTime _lastModified;

  /// @brief Field _responseStream, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__responseStream, put = __cordl_internal_set__responseStream)) ::System::IO::Stream* _responseStream;

  /// @brief Field _responseUri, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__responseUri, put = __cordl_internal_set__responseUri)) ::System::Uri* _responseUri;

  /// @brief Field _statusCode, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__statusCode, put = __cordl_internal_set__statusCode)) ::System::Net::FtpStatusCode _statusCode;

  /// @brief Field _statusLine, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__statusLine, put = __cordl_internal_set__statusLine)) ::StringW _statusLine;

  /// @brief Field _welcomeMessage, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__welcomeMessage, put = __cordl_internal_set__welcomeMessage)) ::StringW _welcomeMessage;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Close, addr 0x449df9c, size 0xf4, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method GetResponseStream, addr 0x449dea0, size 0x60, virtual true, abstract: false, final false
  inline ::System::IO::Stream* GetResponseStream();

  static inline ::System::Net::FtpWebResponse* New_ctor(::System::IO::Stream* responseStream, int64_t contentLength, ::System::Uri* responseUri, ::System::Net::FtpStatusCode statusCode,
                                                        ::StringW statusLine, ::System::DateTime lastModified, ::StringW bannerMessage, ::StringW welcomeMessage, ::StringW exitMessage);

  /// @brief Method SetResponseStream, addr 0x449d670, size 0x94, virtual false, abstract: false, final false
  inline void SetResponseStream(::System::IO::Stream* stream);

  /// @brief Method UpdateStatus, addr 0x449c004, size 0x10, virtual false, abstract: false, final false
  inline void UpdateStatus(::System::Net::FtpStatusCode statusCode, ::StringW statusLine, ::StringW exitMessage);

  constexpr ::StringW const& __cordl_internal_get__bannerMessage() const;

  constexpr ::StringW& __cordl_internal_get__bannerMessage();

  constexpr int64_t const& __cordl_internal_get__contentLength() const;

  constexpr int64_t& __cordl_internal_get__contentLength();

  constexpr ::StringW const& __cordl_internal_get__exitMessage() const;

  constexpr ::StringW& __cordl_internal_get__exitMessage();

  constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get__ftpRequestHeaders() const;

  constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get__ftpRequestHeaders();

  constexpr ::System::DateTime const& __cordl_internal_get__lastModified() const;

  constexpr ::System::DateTime& __cordl_internal_get__lastModified();

  constexpr ::System::IO::Stream* const& __cordl_internal_get__responseStream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get__responseStream();

  constexpr ::System::Uri* const& __cordl_internal_get__responseUri() const;

  constexpr ::System::Uri*& __cordl_internal_get__responseUri();

  constexpr ::System::Net::FtpStatusCode const& __cordl_internal_get__statusCode() const;

  constexpr ::System::Net::FtpStatusCode& __cordl_internal_get__statusCode();

  constexpr ::StringW const& __cordl_internal_get__statusLine() const;

  constexpr ::StringW& __cordl_internal_get__statusLine();

  constexpr ::StringW const& __cordl_internal_get__welcomeMessage() const;

  constexpr ::StringW& __cordl_internal_get__welcomeMessage();

  constexpr void __cordl_internal_set__bannerMessage(::StringW value);

  constexpr void __cordl_internal_set__contentLength(int64_t value);

  constexpr void __cordl_internal_set__exitMessage(::StringW value);

  constexpr void __cordl_internal_set__ftpRequestHeaders(::System::Net::WebHeaderCollection* value);

  constexpr void __cordl_internal_set__lastModified(::System::DateTime value);

  constexpr void __cordl_internal_set__responseStream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set__responseUri(::System::Uri* value);

  constexpr void __cordl_internal_set__statusCode(::System::Net::FtpStatusCode value);

  constexpr void __cordl_internal_set__statusLine(::StringW value);

  constexpr void __cordl_internal_set__welcomeMessage(::StringW value);

  /// @brief Method .ctor, addr 0x449d704, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* responseStream, int64_t contentLength, ::System::Uri* responseUri, ::System::Net::FtpStatusCode statusCode, ::StringW statusLine,
                    ::System::DateTime lastModified, ::StringW bannerMessage, ::StringW welcomeMessage, ::StringW exitMessage);

  /// @brief Method get_Headers, addr 0x449e090, size 0x10c, virtual true, abstract: false, final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method get_ResponseUri, addr 0x449e19c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Uri* get_ResponseUri();

  /// @brief Method get_StatusCode, addr 0x449e1a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::FtpStatusCode get_StatusCode();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpWebResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FtpWebResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FtpWebResponse(FtpWebResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FtpWebResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FtpWebResponse(FtpWebResponse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9574 };

  /// @brief Field _responseStream, offset: 0x20, size: 0x8, def value: None
  ::System::IO::Stream* ____responseStream;

  /// @brief Field _contentLength, offset: 0x28, size: 0x8, def value: None
  int64_t ____contentLength;

  /// @brief Field _responseUri, offset: 0x30, size: 0x8, def value: None
  ::System::Uri* ____responseUri;

  /// @brief Field _statusCode, offset: 0x38, size: 0x4, def value: None
  ::System::Net::FtpStatusCode ____statusCode;

  /// @brief Field _statusLine, offset: 0x40, size: 0x8, def value: None
  ::StringW ____statusLine;

  /// @brief Field _ftpRequestHeaders, offset: 0x48, size: 0x8, def value: None
  ::System::Net::WebHeaderCollection* ____ftpRequestHeaders;

  /// @brief Field _lastModified, offset: 0x50, size: 0x8, def value: None
  ::System::DateTime ____lastModified;

  /// @brief Field _bannerMessage, offset: 0x58, size: 0x8, def value: None
  ::StringW ____bannerMessage;

  /// @brief Field _welcomeMessage, offset: 0x60, size: 0x8, def value: None
  ::StringW ____welcomeMessage;

  /// @brief Field _exitMessage, offset: 0x68, size: 0x8, def value: None
  ::StringW ____exitMessage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::FtpWebResponse, ____responseStream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebResponse, ____contentLength) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebResponse, ____responseUri) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebResponse, ____statusCode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebResponse, ____statusLine) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebResponse, ____ftpRequestHeaders) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebResponse, ____lastModified) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebResponse, ____bannerMessage) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebResponse, ____welcomeMessage) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebResponse, ____exitMessage) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::FtpWebResponse, 0x70>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::FtpWebResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpWebResponse*, "System.Net", "FtpWebResponse");
NEED_NO_BOX(::System::Net::FtpWebResponse_EmptyStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpWebResponse_EmptyStream*, "System.Net", "FtpWebResponse/EmptyStream");
