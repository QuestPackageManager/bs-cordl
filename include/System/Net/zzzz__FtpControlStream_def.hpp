#pragma once
// IWYU pragma private; include "System/Net/FtpControlStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__CommandStream_def.hpp"
#include "System/Net/zzzz__FtpLoginState_def.hpp"
#include "System/Net/zzzz__FtpStatusCode_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FtpControlStream)
namespace System::IO {
class Stream;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net::Sockets {
class TcpClient;
}
namespace System::Net {
class CommandStream_PipelineEntry;
}
namespace System::Net {
struct CommandStream_PipelineInstruction;
}
namespace System::Net {
struct FtpControlStream_GetPathOption;
}
namespace System::Net {
class FtpControlStream___c__DisplayClass31_0;
}
namespace System::Net {
class FtpWebRequest;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net {
class NetworkCredential;
}
namespace System::Net {
class ResponseDescription;
}
namespace System::Net {
class TlsStream;
}
namespace System::Net {
struct TriState;
}
namespace System::Net {
class WebRequest;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct DateTime;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Uri;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace System::Net {
struct FtpControlStream_GetPathOption;
}
namespace System::Net {
class FtpControlStream;
}
namespace System::Net {
class FtpControlStream___c__DisplayClass31_0;
}
// Write type traits
MARK_VAL_T(::System::Net::FtpControlStream_GetPathOption);
MARK_REF_PTR_T(::System::Net::FtpControlStream);
MARK_REF_PTR_T(::System::Net::FtpControlStream___c__DisplayClass31_0);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.FtpControlStream/GetPathOption
struct CORDL_TYPE FtpControlStream_GetPathOption {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FtpControlStream_GetPathOption_Unwrapped
  enum struct __FtpControlStream_GetPathOption_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_AssumeFilename = static_cast<int32_t>(0x1),
    __E_AssumeNoFilename = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FtpControlStream_GetPathOption_Unwrapped() const noexcept {
    return static_cast<__FtpControlStream_GetPathOption_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpControlStream_GetPathOption();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FtpControlStream_GetPathOption(int32_t value__) noexcept;

  /// @brief Field AssumeFilename value: I32(1)
  static ::System::Net::FtpControlStream_GetPathOption const AssumeFilename;

  /// @brief Field AssumeNoFilename value: I32(2)
  static ::System::Net::FtpControlStream_GetPathOption const AssumeNoFilename;

  /// @brief Field Normal value: I32(0)
  static ::System::Net::FtpControlStream_GetPathOption const Normal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9561 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::FtpControlStream_GetPathOption, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::FtpControlStream_GetPathOption, 0x4>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.FtpControlStream/<>c__DisplayClass31_0
class CORDL_TYPE FtpControlStream___c__DisplayClass31_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::System::Net::FtpControlStream* __4__this;

  /// @brief Field tlsStream, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tlsStream, put = __cordl_internal_set_tlsStream)) ::System::Net::TlsStream* tlsStream;

  static inline ::System::Net::FtpControlStream___c__DisplayClass31_0* New_ctor();

  /// @brief Method <PipelineCallback>b__0, addr 0x44956a0, size 0xfc, virtual false, abstract: false, final false
  inline void _PipelineCallback_b__0(::System::IAsyncResult* ar);

  constexpr ::System::Net::FtpControlStream* const& __cordl_internal_get___4__this() const;

  constexpr ::System::Net::FtpControlStream*& __cordl_internal_get___4__this();

  constexpr ::System::Net::TlsStream* const& __cordl_internal_get_tlsStream() const;

  constexpr ::System::Net::TlsStream*& __cordl_internal_get_tlsStream();

  constexpr void __cordl_internal_set___4__this(::System::Net::FtpControlStream* value);

  constexpr void __cordl_internal_set_tlsStream(::System::Net::TlsStream* value);

  /// @brief Method .ctor, addr 0x44926ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpControlStream___c__DisplayClass31_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FtpControlStream___c__DisplayClass31_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FtpControlStream___c__DisplayClass31_0(FtpControlStream___c__DisplayClass31_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FtpControlStream___c__DisplayClass31_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FtpControlStream___c__DisplayClass31_0(FtpControlStream___c__DisplayClass31_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9562 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::System::Net::FtpControlStream* _____4__this;

  /// @brief Field tlsStream, offset: 0x18, size: 0x8, def value: None
  ::System::Net::TlsStream* ___tlsStream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::FtpControlStream___c__DisplayClass31_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream___c__DisplayClass31_0, ___tlsStream) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::FtpControlStream___c__DisplayClass31_0, 0x20>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.DateTime, System.Net.CommandStream, System.Net.FtpLoginState, System.Net.FtpStatusCode
namespace System::Net {
// Is value type: false
// CS Name: System.Net.FtpControlStream
class CORDL_TYPE FtpControlStream : public ::System::Net::CommandStream {
public:
  // Declarations
  using GetPathOption = ::System::Net::FtpControlStream_GetPathOption;

  using __c__DisplayClass31_0 = ::System::Net::FtpControlStream___c__DisplayClass31_0;

  __declspec(property(get = get_BannerMessage)) ::StringW BannerMessage;

  __declspec(property(get = get_ContentLength)) int64_t ContentLength;

  __declspec(property(get = get_Credentials, put = set_Credentials)) ::System::Net::NetworkCredential* Credentials;

  __declspec(property(get = get_ExitMessage)) ::StringW ExitMessage;

  __declspec(property(get = get_LastModified)) ::System::DateTime LastModified;

  __declspec(property(get = get_ResponseUri)) ::System::Uri* ResponseUri;

  /// @brief Field StatusCode, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_StatusCode, put = __cordl_internal_set_StatusCode)) ::System::Net::FtpStatusCode StatusCode;

  /// @brief Field StatusLine, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_StatusLine, put = __cordl_internal_set_StatusLine)) ::StringW StatusLine;

  __declspec(property(get = get_WelcomeMessage)) ::StringW WelcomeMessage;

  /// @brief Field _bannerMessage, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__bannerMessage, put = __cordl_internal_set__bannerMessage)) ::System::Text::StringBuilder* _bannerMessage;

  /// @brief Field _contentLength, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__contentLength, put = __cordl_internal_set__contentLength)) int64_t _contentLength;

  /// @brief Field _credentials, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__credentials, put = __cordl_internal_set__credentials)) ::System::WeakReference* _credentials;

  /// @brief Field _currentTypeSetting, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__currentTypeSetting, put = __cordl_internal_set__currentTypeSetting)) ::StringW _currentTypeSetting;

  /// @brief Field _dataHandshakeStarted, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get__dataHandshakeStarted, put = __cordl_internal_set__dataHandshakeStarted)) bool _dataHandshakeStarted;

  /// @brief Field _dataSocket, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSocket, put = __cordl_internal_set__dataSocket)) ::System::Net::Sockets::Socket* _dataSocket;

  /// @brief Field _establishedServerDirectory, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__establishedServerDirectory, put = __cordl_internal_set__establishedServerDirectory)) ::StringW _establishedServerDirectory;

  /// @brief Field _exitMessage, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__exitMessage, put = __cordl_internal_set__exitMessage)) ::System::Text::StringBuilder* _exitMessage;

  /// @brief Field _lastModified, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__lastModified, put = __cordl_internal_set__lastModified)) ::System::DateTime _lastModified;

  /// @brief Field _loginDirectory, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__loginDirectory, put = __cordl_internal_set__loginDirectory)) ::StringW _loginDirectory;

  /// @brief Field _loginState, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get__loginState, put = __cordl_internal_set__loginState)) ::System::Net::FtpLoginState _loginState;

  /// @brief Field _passiveEndPoint, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__passiveEndPoint, put = __cordl_internal_set__passiveEndPoint)) ::System::Net::IPEndPoint* _passiveEndPoint;

  /// @brief Field _requestedServerDirectory, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__requestedServerDirectory, put = __cordl_internal_set__requestedServerDirectory)) ::StringW _requestedServerDirectory;

  /// @brief Field _responseUri, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__responseUri, put = __cordl_internal_set__responseUri)) ::System::Uri* _responseUri;

  /// @brief Field _tlsStream, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__tlsStream, put = __cordl_internal_set__tlsStream)) ::System::Net::TlsStream* _tlsStream;

  /// @brief Field _welcomeMessage, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__welcomeMessage, put = __cordl_internal_set__welcomeMessage)) ::System::Text::StringBuilder* _welcomeMessage;

  /// @brief Field s_SSLHandshakeCallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SSLHandshakeCallback, put = setStaticF_s_SSLHandshakeCallback)) ::System::AsyncCallback* s_SSLHandshakeCallback;

  /// @brief Field s_acceptCallbackDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_acceptCallbackDelegate, put = setStaticF_s_acceptCallbackDelegate)) ::System::AsyncCallback* s_acceptCallbackDelegate;

  /// @brief Field s_connectCallbackDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_connectCallbackDelegate, put = setStaticF_s_connectCallbackDelegate)) ::System::AsyncCallback* s_connectCallbackDelegate;

  /// @brief Method AbortConnect, addr 0x4491250, size 0x8c, virtual false, abstract: false, final false
  inline void AbortConnect();

  /// @brief Method AcceptCallback, addr 0x44912dc, size 0x354, virtual false, abstract: false, final false
  static inline void AcceptCallback(::System::IAsyncResult* asyncResult);

  /// @brief Method BuildCommandsList, addr 0x44936dc, size 0xe18, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Net::CommandStream_PipelineEntry*, ::Array<::System::Net::CommandStream_PipelineEntry*>*> BuildCommandsList(::System::Net::WebRequest* req);

  /// @brief Method CheckValid, addr 0x44951b8, size 0x3bc, virtual true, abstract: false, final false
  inline bool CheckValid(::System::Net::ResponseDescription* response, ::ByRef<int32_t> validThrough, ::ByRef<int32_t> completeLength);

  /// @brief Method ClearState, addr 0x4491dc0, size 0x90, virtual true, abstract: false, final false
  inline void ClearState();

  /// @brief Method ConnectCallback, addr 0x4491630, size 0x1b4, virtual false, abstract: false, final false
  static inline void ConnectCallback(::System::IAsyncResult* asyncResult);

  /// @brief Method CreateFtpDataSocket, addr 0x4494ea4, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::Socket* CreateFtpDataSocket(::System::Net::FtpWebRequest* request, ::System::Net::Sockets::Socket* templateSocket);

  /// @brief Method CreateFtpListenerSocket, addr 0x449479c, size 0x178, virtual false, abstract: false, final false
  inline void CreateFtpListenerSocket(::System::Net::FtpWebRequest* request);

  /// @brief Method FormatAddress, addr 0x4494f20, size 0x128, virtual false, abstract: false, final false
  inline ::StringW FormatAddress(::System::Net::IPAddress* address, int32_t Port);

  /// @brief Method FormatAddressV6, addr 0x4495048, size 0x110, virtual false, abstract: false, final false
  inline ::StringW FormatAddressV6(::System::Net::IPAddress* address, int32_t port);

  /// @brief Method FormatFtpCommand, addr 0x44944f4, size 0xf8, virtual false, abstract: false, final false
  inline ::StringW FormatFtpCommand(::StringW command, ::StringW parameter);

  /// @brief Method GetContentLengthFrom213Response, addr 0x4493174, size 0x138, virtual false, abstract: false, final false
  inline int64_t GetContentLengthFrom213Response(::StringW responseString);

  /// @brief Method GetLastModifiedFrom213Response, addr 0x44932ac, size 0x380, virtual false, abstract: false, final false
  inline ::System::DateTime GetLastModifiedFrom213Response(::StringW str);

  /// @brief Method GetLoginDirectory, addr 0x449362c, size 0xb0, virtual false, abstract: false, final false
  inline ::StringW GetLoginDirectory(::StringW str);

  /// @brief Method GetPathInfo, addr 0x44945fc, size 0x190, virtual false, abstract: false, final false
  static inline void GetPathInfo(::System::Net::FtpControlStream_GetPathOption pathOption, ::System::Uri* uri, ::ByRef<::StringW> path, ::ByRef<::StringW> directory, ::ByRef<::StringW> filename);

  /// @brief Method GetPortCommandLine, addr 0x4494914, size 0x1f0, virtual false, abstract: false, final false
  inline ::StringW GetPortCommandLine(::System::Net::FtpWebRequest* request);

  /// @brief Method GetPortV4, addr 0x4494b04, size 0x1e8, virtual false, abstract: false, final false
  inline int32_t GetPortV4(::StringW responseString);

  /// @brief Method GetPortV6, addr 0x4494cec, size 0x1b8, virtual false, abstract: false, final false
  inline int32_t GetPortV6(::StringW responseString);

  /// @brief Method IsFtpDataStreamWriteable, addr 0x4491c40, size 0x84, virtual false, abstract: false, final false
  inline ::System::Net::TriState IsFtpDataStreamWriteable();

  static inline ::System::Net::FtpControlStream* New_ctor(::System::Net::Sockets::TcpClient* client);

  /// @brief Method PipelineCallback, addr 0x4491e50, size 0x85c, virtual true, abstract: false, final false
  inline ::System::Net::CommandStream_PipelineInstruction PipelineCallback(::System::Net::CommandStream_PipelineEntry* entry, ::System::Net::ResponseDescription* response, bool timeout,
                                                                           ::ByRef<::System::IO::Stream*> stream);

  /// @brief Method QueueOrCreateDataConection, addr 0x44926b4, size 0x680, virtual false, abstract: false, final false
  inline ::System::Net::CommandStream_PipelineInstruction QueueOrCreateDataConection(::System::Net::CommandStream_PipelineEntry* entry, ::System::Net::ResponseDescription* response, bool timeout,
                                                                                     ::ByRef<::System::IO::Stream*> stream, ::ByRef<bool> isSocketReady);

  /// @brief Method QueueOrCreateFtpDataStream, addr 0x44919ac, size 0x294, virtual false, abstract: false, final false
  inline ::System::Net::CommandStream_PipelineInstruction QueueOrCreateFtpDataStream(::ByRef<::System::IO::Stream*> stream);

  /// @brief Method SSLHandshakeCallback, addr 0x44917e4, size 0x1c8, virtual false, abstract: false, final false
  static inline void SSLHandshakeCallback(::System::IAsyncResult* asyncResult);

  /// @brief Method TryUpdateContentLength, addr 0x4492d34, size 0xec, virtual false, abstract: false, final false
  inline void TryUpdateContentLength(::StringW str);

  /// @brief Method TryUpdateResponseUri, addr 0x4492e2c, size 0x348, virtual false, abstract: false, final false
  inline void TryUpdateResponseUri(::StringW str, ::System::Net::FtpWebRequest* request);

  constexpr ::System::Net::FtpStatusCode const& __cordl_internal_get_StatusCode() const;

  constexpr ::System::Net::FtpStatusCode& __cordl_internal_get_StatusCode();

  constexpr ::StringW const& __cordl_internal_get_StatusLine() const;

  constexpr ::StringW& __cordl_internal_get_StatusLine();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__bannerMessage() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__bannerMessage();

  constexpr int64_t const& __cordl_internal_get__contentLength() const;

  constexpr int64_t& __cordl_internal_get__contentLength();

  constexpr ::System::WeakReference* const& __cordl_internal_get__credentials() const;

  constexpr ::System::WeakReference*& __cordl_internal_get__credentials();

  constexpr ::StringW const& __cordl_internal_get__currentTypeSetting() const;

  constexpr ::StringW& __cordl_internal_get__currentTypeSetting();

  constexpr bool const& __cordl_internal_get__dataHandshakeStarted() const;

  constexpr bool& __cordl_internal_get__dataHandshakeStarted();

  constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get__dataSocket() const;

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get__dataSocket();

  constexpr ::StringW const& __cordl_internal_get__establishedServerDirectory() const;

  constexpr ::StringW& __cordl_internal_get__establishedServerDirectory();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__exitMessage() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__exitMessage();

  constexpr ::System::DateTime const& __cordl_internal_get__lastModified() const;

  constexpr ::System::DateTime& __cordl_internal_get__lastModified();

  constexpr ::StringW const& __cordl_internal_get__loginDirectory() const;

  constexpr ::StringW& __cordl_internal_get__loginDirectory();

  constexpr ::System::Net::FtpLoginState const& __cordl_internal_get__loginState() const;

  constexpr ::System::Net::FtpLoginState& __cordl_internal_get__loginState();

  constexpr ::System::Net::IPEndPoint* const& __cordl_internal_get__passiveEndPoint() const;

  constexpr ::System::Net::IPEndPoint*& __cordl_internal_get__passiveEndPoint();

  constexpr ::StringW const& __cordl_internal_get__requestedServerDirectory() const;

  constexpr ::StringW& __cordl_internal_get__requestedServerDirectory();

  constexpr ::System::Uri* const& __cordl_internal_get__responseUri() const;

  constexpr ::System::Uri*& __cordl_internal_get__responseUri();

  constexpr ::System::Net::TlsStream* const& __cordl_internal_get__tlsStream() const;

  constexpr ::System::Net::TlsStream*& __cordl_internal_get__tlsStream();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__welcomeMessage() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__welcomeMessage();

  constexpr void __cordl_internal_set_StatusCode(::System::Net::FtpStatusCode value);

  constexpr void __cordl_internal_set_StatusLine(::StringW value);

  constexpr void __cordl_internal_set__bannerMessage(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set__contentLength(int64_t value);

  constexpr void __cordl_internal_set__credentials(::System::WeakReference* value);

  constexpr void __cordl_internal_set__currentTypeSetting(::StringW value);

  constexpr void __cordl_internal_set__dataHandshakeStarted(bool value);

  constexpr void __cordl_internal_set__dataSocket(::System::Net::Sockets::Socket* value);

  constexpr void __cordl_internal_set__establishedServerDirectory(::StringW value);

  constexpr void __cordl_internal_set__exitMessage(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set__lastModified(::System::DateTime value);

  constexpr void __cordl_internal_set__loginDirectory(::StringW value);

  constexpr void __cordl_internal_set__loginState(::System::Net::FtpLoginState value);

  constexpr void __cordl_internal_set__passiveEndPoint(::System::Net::IPEndPoint* value);

  constexpr void __cordl_internal_set__requestedServerDirectory(::StringW value);

  constexpr void __cordl_internal_set__responseUri(::System::Uri* value);

  constexpr void __cordl_internal_set__tlsStream(::System::Net::TlsStream* value);

  constexpr void __cordl_internal_set__welcomeMessage(::System::Text::StringBuilder* value);

  /// @brief Method .ctor, addr 0x44911c4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::TcpClient* client);

  static inline ::System::AsyncCallback* getStaticF_s_SSLHandshakeCallback();

  static inline ::System::AsyncCallback* getStaticF_s_acceptCallbackDelegate();

  static inline ::System::AsyncCallback* getStaticF_s_connectCallbackDelegate();

  /// @brief Method get_BannerMessage, addr 0x4495170, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_BannerMessage();

  /// @brief Method get_ContentLength, addr 0x4495158, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_ContentLength();

  /// @brief Method get_Credentials, addr 0x449109c, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Net::NetworkCredential* get_Credentials();

  /// @brief Method get_ExitMessage, addr 0x44951a0, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_ExitMessage();

  /// @brief Method get_LastModified, addr 0x4495160, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastModified();

  /// @brief Method get_ResponseUri, addr 0x4495168, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_ResponseUri();

  /// @brief Method get_WelcomeMessage, addr 0x4495188, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_WelcomeMessage();

  static inline void setStaticF_s_SSLHandshakeCallback(::System::AsyncCallback* value);

  static inline void setStaticF_s_acceptCallbackDelegate(::System::AsyncCallback* value);

  static inline void setStaticF_s_connectCallbackDelegate(::System::AsyncCallback* value);

  /// @brief Method set_Credentials, addr 0x4491144, size 0x80, virtual false, abstract: false, final false
  inline void set_Credentials(::System::Net::NetworkCredential* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpControlStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FtpControlStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FtpControlStream(FtpControlStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FtpControlStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FtpControlStream(FtpControlStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9563 };

  /// @brief Field _dataSocket, offset: 0x88, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ____dataSocket;

  /// @brief Field _passiveEndPoint, offset: 0x90, size: 0x8, def value: None
  ::System::Net::IPEndPoint* ____passiveEndPoint;

  /// @brief Field _tlsStream, offset: 0x98, size: 0x8, def value: None
  ::System::Net::TlsStream* ____tlsStream;

  /// @brief Field _bannerMessage, offset: 0xa0, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____bannerMessage;

  /// @brief Field _welcomeMessage, offset: 0xa8, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____welcomeMessage;

  /// @brief Field _exitMessage, offset: 0xb0, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____exitMessage;

  /// @brief Field _credentials, offset: 0xb8, size: 0x8, def value: None
  ::System::WeakReference* ____credentials;

  /// @brief Field _currentTypeSetting, offset: 0xc0, size: 0x8, def value: None
  ::StringW ____currentTypeSetting;

  /// @brief Field _contentLength, offset: 0xc8, size: 0x8, def value: None
  int64_t ____contentLength;

  /// @brief Field _lastModified, offset: 0xd0, size: 0x8, def value: None
  ::System::DateTime ____lastModified;

  /// @brief Field _dataHandshakeStarted, offset: 0xd8, size: 0x1, def value: None
  bool ____dataHandshakeStarted;

  /// @brief Field _loginDirectory, offset: 0xe0, size: 0x8, def value: None
  ::StringW ____loginDirectory;

  /// @brief Field _establishedServerDirectory, offset: 0xe8, size: 0x8, def value: None
  ::StringW ____establishedServerDirectory;

  /// @brief Field _requestedServerDirectory, offset: 0xf0, size: 0x8, def value: None
  ::StringW ____requestedServerDirectory;

  /// @brief Field _responseUri, offset: 0xf8, size: 0x8, def value: None
  ::System::Uri* ____responseUri;

  /// @brief Field _loginState, offset: 0x100, size: 0x1, def value: None
  ::System::Net::FtpLoginState ____loginState;

  /// @brief Field StatusCode, offset: 0x104, size: 0x4, def value: None
  ::System::Net::FtpStatusCode ___StatusCode;

  /// @brief Field StatusLine, offset: 0x108, size: 0x8, def value: None
  ::StringW ___StatusLine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::FtpControlStream, ____dataSocket) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream, ____passiveEndPoint) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream, ____tlsStream) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream, ____bannerMessage) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream, ____welcomeMessage) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream, ____exitMessage) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream, ____credentials) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream, ____currentTypeSetting) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream, ____contentLength) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream, ____lastModified) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream, ____dataHandshakeStarted) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream, ____loginDirectory) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream, ____establishedServerDirectory) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream, ____requestedServerDirectory) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream, ____responseUri) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream, ____loginState) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream, ___StatusCode) == 0x104, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpControlStream, ___StatusLine) == 0x108, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::FtpControlStream, 0x110>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpControlStream_GetPathOption, "System.Net", "FtpControlStream/GetPathOption");
NEED_NO_BOX(::System::Net::FtpControlStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpControlStream*, "System.Net", "FtpControlStream");
NEED_NO_BOX(::System::Net::FtpControlStream___c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpControlStream___c__DisplayClass31_0*, "System.Net", "FtpControlStream/<>c__DisplayClass31_0");
