#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__CommandStream_def.hpp"
#include "System/Net/zzzz__FtpLoginState_def.hpp"
#include "System/Net/zzzz__FtpStatusCode_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace System::Net {
class __CommandStream__PipelineEntry;
}
namespace System::Net {
struct __CommandStream__PipelineInstruction;
}
namespace System::Net {
struct __FtpControlStream__GetPathOption;
}
namespace System::Net {
class __FtpControlStream____c__DisplayClass31_0;
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
struct __FtpControlStream__GetPathOption;
}
namespace System::Net {
class FtpControlStream;
}
namespace System::Net {
class __FtpControlStream____c__DisplayClass31_0;
}
// Write type traits
MARK_VAL_T(::System::Net::__FtpControlStream__GetPathOption);
MARK_REF_PTR_T(::System::Net::FtpControlStream);
MARK_REF_PTR_T(::System::Net::__FtpControlStream____c__DisplayClass31_0);
// Type: ::GetPathOption
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9040))
// CS Name: ::FtpControlStream::GetPathOption
struct CORDL_TYPE __FtpControlStream__GetPathOption {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____FtpControlStream__GetPathOption_Unwrapped
  enum struct ____FtpControlStream__GetPathOption_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_AssumeFilename = static_cast<int32_t>(0x1),
    __E_AssumeNoFilename = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____FtpControlStream__GetPathOption_Unwrapped() const noexcept {
    return static_cast<____FtpControlStream__GetPathOption_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __FtpControlStream__GetPathOption(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __FtpControlStream__GetPathOption();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::System::Net::__FtpControlStream__GetPathOption const Normal;

  /// @brief Field AssumeFilename value: static_cast<int32_t>(0x1)
  static ::System::Net::__FtpControlStream__GetPathOption const AssumeFilename;

  /// @brief Field AssumeNoFilename value: static_cast<int32_t>(0x2)
  static ::System::Net::__FtpControlStream__GetPathOption const AssumeNoFilename;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__FtpControlStream__GetPathOption, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::__FtpControlStream__GetPathOption, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
// Type: ::<>c__DisplayClass31_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9041))
// CS Name: ::FtpControlStream::<>c__DisplayClass31_0*
class CORDL_TYPE __FtpControlStream____c__DisplayClass31_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::System::Net::FtpControlStream* __4__this;

  /// @brief Field tlsStream, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tlsStream, put = __cordl_internal_set_tlsStream))::System::Net::TlsStream* tlsStream;

  constexpr ::System::Net::FtpControlStream*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::FtpControlStream*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::System::Net::FtpControlStream* value);

  constexpr ::System::Net::TlsStream*& __cordl_internal_get_tlsStream();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::TlsStream*> const& __cordl_internal_get_tlsStream() const;

  constexpr void __cordl_internal_set_tlsStream(::System::Net::TlsStream* value);

  static inline ::System::Net::__FtpControlStream____c__DisplayClass31_0* New_ctor();

  /// @brief Method .ctor, addr 0x29904dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <PipelineCallback>b__0, addr 0x29934a8, size 0xf8, virtual false, abstract: false, final false
  inline void _PipelineCallback_b__0(::System::IAsyncResult* ar);

  // Ctor Parameters [CppParam { name: "", ty: "__FtpControlStream____c__DisplayClass31_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FtpControlStream____c__DisplayClass31_0(__FtpControlStream____c__DisplayClass31_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FtpControlStream____c__DisplayClass31_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FtpControlStream____c__DisplayClass31_0(__FtpControlStream____c__DisplayClass31_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FtpControlStream____c__DisplayClass31_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::System::Net::FtpControlStream* _____4__this;

  /// @brief Field tlsStream, offset: 0x18, size: 0x8, def value: None
  ::System::Net::TlsStream* ___tlsStream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__FtpControlStream____c__DisplayClass31_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::__FtpControlStream____c__DisplayClass31_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::__FtpControlStream____c__DisplayClass31_0, ___tlsStream) == 0x18, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::FtpControlStream
// SizeInfo { instance_size: 272, native_size: -1, calculated_instance_size: 272, calculated_native_size: 272, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2368)), TypeDefinitionIndex(TypeDefinitionIndex(9036)), TypeDefinitionIndex(TypeDefinitionIndex(9039)),
// TypeDefinitionIndex(TypeDefinitionIndex(9062))] Self: TypeDefinitionIndex(TypeDefinitionIndex(9042)) CS Name: ::System.Net::FtpControlStream*
class CORDL_TYPE FtpControlStream : public ::System::Net::CommandStream {
public:
  // Declarations
  using __c__DisplayClass31_0 = ::System::Net::__FtpControlStream____c__DisplayClass31_0;

  using GetPathOption = ::System::Net::__FtpControlStream__GetPathOption;

  /// @brief Field _dataSocket, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSocket, put = __cordl_internal_set__dataSocket))::System::Net::Sockets::Socket* _dataSocket;

  /// @brief Field _passiveEndPoint, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__passiveEndPoint, put = __cordl_internal_set__passiveEndPoint))::System::Net::IPEndPoint* _passiveEndPoint;

  /// @brief Field _tlsStream, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__tlsStream, put = __cordl_internal_set__tlsStream))::System::Net::TlsStream* _tlsStream;

  /// @brief Field _bannerMessage, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__bannerMessage, put = __cordl_internal_set__bannerMessage))::System::Text::StringBuilder* _bannerMessage;

  /// @brief Field _welcomeMessage, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__welcomeMessage, put = __cordl_internal_set__welcomeMessage))::System::Text::StringBuilder* _welcomeMessage;

  /// @brief Field _exitMessage, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__exitMessage, put = __cordl_internal_set__exitMessage))::System::Text::StringBuilder* _exitMessage;

  /// @brief Field _credentials, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__credentials, put = __cordl_internal_set__credentials))::System::WeakReference* _credentials;

  /// @brief Field _currentTypeSetting, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__currentTypeSetting, put = __cordl_internal_set__currentTypeSetting))::StringW _currentTypeSetting;

  /// @brief Field _contentLength, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__contentLength, put = __cordl_internal_set__contentLength)) int64_t _contentLength;

  /// @brief Field _lastModified, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__lastModified, put = __cordl_internal_set__lastModified))::System::DateTime _lastModified;

  /// @brief Field _dataHandshakeStarted, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get__dataHandshakeStarted, put = __cordl_internal_set__dataHandshakeStarted)) bool _dataHandshakeStarted;

  /// @brief Field _loginDirectory, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__loginDirectory, put = __cordl_internal_set__loginDirectory))::StringW _loginDirectory;

  /// @brief Field _establishedServerDirectory, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__establishedServerDirectory, put = __cordl_internal_set__establishedServerDirectory))::StringW _establishedServerDirectory;

  /// @brief Field _requestedServerDirectory, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__requestedServerDirectory, put = __cordl_internal_set__requestedServerDirectory))::StringW _requestedServerDirectory;

  /// @brief Field _responseUri, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__responseUri, put = __cordl_internal_set__responseUri))::System::Uri* _responseUri;

  /// @brief Field _loginState, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get__loginState, put = __cordl_internal_set__loginState))::System::Net::FtpLoginState _loginState;

  /// @brief Field StatusCode, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_StatusCode, put = __cordl_internal_set_StatusCode))::System::Net::FtpStatusCode StatusCode;

  /// @brief Field StatusLine, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_StatusLine, put = __cordl_internal_set_StatusLine))::StringW StatusLine;

  /// @brief Field s_acceptCallbackDelegate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_acceptCallbackDelegate, put = setStaticF_s_acceptCallbackDelegate))::System::AsyncCallback* s_acceptCallbackDelegate;

  /// @brief Field s_connectCallbackDelegate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_connectCallbackDelegate, put = setStaticF_s_connectCallbackDelegate))::System::AsyncCallback* s_connectCallbackDelegate;

  /// @brief Field s_SSLHandshakeCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SSLHandshakeCallback, put = setStaticF_s_SSLHandshakeCallback))::System::AsyncCallback* s_SSLHandshakeCallback;

  __declspec(property(get = get_Credentials, put = set_Credentials))::System::Net::NetworkCredential* Credentials;

  __declspec(property(get = get_ContentLength)) int64_t ContentLength;

  __declspec(property(get = get_LastModified))::System::DateTime LastModified;

  __declspec(property(get = get_ResponseUri))::System::Uri* ResponseUri;

  __declspec(property(get = get_BannerMessage))::StringW BannerMessage;

  __declspec(property(get = get_WelcomeMessage))::StringW WelcomeMessage;

  __declspec(property(get = get_ExitMessage))::StringW ExitMessage;

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get__dataSocket();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __cordl_internal_get__dataSocket() const;

  constexpr void __cordl_internal_set__dataSocket(::System::Net::Sockets::Socket* value);

  constexpr ::System::Net::IPEndPoint*& __cordl_internal_get__passiveEndPoint();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& __cordl_internal_get__passiveEndPoint() const;

  constexpr void __cordl_internal_set__passiveEndPoint(::System::Net::IPEndPoint* value);

  constexpr ::System::Net::TlsStream*& __cordl_internal_get__tlsStream();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::TlsStream*> const& __cordl_internal_get__tlsStream() const;

  constexpr void __cordl_internal_set__tlsStream(::System::Net::TlsStream* value);

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__bannerMessage();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get__bannerMessage() const;

  constexpr void __cordl_internal_set__bannerMessage(::System::Text::StringBuilder* value);

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__welcomeMessage();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get__welcomeMessage() const;

  constexpr void __cordl_internal_set__welcomeMessage(::System::Text::StringBuilder* value);

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__exitMessage();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get__exitMessage() const;

  constexpr void __cordl_internal_set__exitMessage(::System::Text::StringBuilder* value);

  constexpr ::System::WeakReference*& __cordl_internal_get__credentials();

  constexpr ::cordl_internals::to_const_pointer<::System::WeakReference*> const& __cordl_internal_get__credentials() const;

  constexpr void __cordl_internal_set__credentials(::System::WeakReference* value);

  constexpr ::StringW& __cordl_internal_get__currentTypeSetting();

  constexpr ::StringW const& __cordl_internal_get__currentTypeSetting() const;

  constexpr void __cordl_internal_set__currentTypeSetting(::StringW value);

  constexpr int64_t& __cordl_internal_get__contentLength();

  constexpr int64_t const& __cordl_internal_get__contentLength() const;

  constexpr void __cordl_internal_set__contentLength(int64_t value);

  constexpr ::System::DateTime& __cordl_internal_get__lastModified();

  constexpr ::System::DateTime const& __cordl_internal_get__lastModified() const;

  constexpr void __cordl_internal_set__lastModified(::System::DateTime value);

  constexpr bool& __cordl_internal_get__dataHandshakeStarted();

  constexpr bool const& __cordl_internal_get__dataHandshakeStarted() const;

  constexpr void __cordl_internal_set__dataHandshakeStarted(bool value);

  constexpr ::StringW& __cordl_internal_get__loginDirectory();

  constexpr ::StringW const& __cordl_internal_get__loginDirectory() const;

  constexpr void __cordl_internal_set__loginDirectory(::StringW value);

  constexpr ::StringW& __cordl_internal_get__establishedServerDirectory();

  constexpr ::StringW const& __cordl_internal_get__establishedServerDirectory() const;

  constexpr void __cordl_internal_set__establishedServerDirectory(::StringW value);

  constexpr ::StringW& __cordl_internal_get__requestedServerDirectory();

  constexpr ::StringW const& __cordl_internal_get__requestedServerDirectory() const;

  constexpr void __cordl_internal_set__requestedServerDirectory(::StringW value);

  constexpr ::System::Uri*& __cordl_internal_get__responseUri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get__responseUri() const;

  constexpr void __cordl_internal_set__responseUri(::System::Uri* value);

  constexpr ::System::Net::FtpLoginState& __cordl_internal_get__loginState();

  constexpr ::System::Net::FtpLoginState const& __cordl_internal_get__loginState() const;

  constexpr void __cordl_internal_set__loginState(::System::Net::FtpLoginState value);

  constexpr ::System::Net::FtpStatusCode& __cordl_internal_get_StatusCode();

  constexpr ::System::Net::FtpStatusCode const& __cordl_internal_get_StatusCode() const;

  constexpr void __cordl_internal_set_StatusCode(::System::Net::FtpStatusCode value);

  constexpr ::StringW& __cordl_internal_get_StatusLine();

  constexpr ::StringW const& __cordl_internal_get_StatusLine() const;

  constexpr void __cordl_internal_set_StatusLine(::StringW value);

  static inline void setStaticF_s_acceptCallbackDelegate(::System::AsyncCallback* value);

  static inline ::System::AsyncCallback* getStaticF_s_acceptCallbackDelegate();

  static inline void setStaticF_s_connectCallbackDelegate(::System::AsyncCallback* value);

  static inline ::System::AsyncCallback* getStaticF_s_connectCallbackDelegate();

  static inline void setStaticF_s_SSLHandshakeCallback(::System::AsyncCallback* value);

  static inline ::System::AsyncCallback* getStaticF_s_SSLHandshakeCallback();

  /// @brief Method get_Credentials, addr 0x298ecdc, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Net::NetworkCredential* get_Credentials();

  /// @brief Method set_Credentials, addr 0x298ed84, size 0x80, virtual false, abstract: false, final false
  inline void set_Credentials(::System::Net::NetworkCredential* value);

  static inline ::System::Net::FtpControlStream* New_ctor(::System::Net::Sockets::TcpClient* client);

  /// @brief Method .ctor, addr 0x298ee04, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::TcpClient* client);

  /// @brief Method AbortConnect, addr 0x298ee90, size 0x8c, virtual false, abstract: false, final false
  inline void AbortConnect();

  /// @brief Method AcceptCallback, addr 0x298ef1c, size 0x368, virtual false, abstract: false, final false
  static inline void AcceptCallback(::System::IAsyncResult* asyncResult);

  /// @brief Method ConnectCallback, addr 0x298f318, size 0x1b0, virtual false, abstract: false, final false
  static inline void ConnectCallback(::System::IAsyncResult* asyncResult);

  /// @brief Method SSLHandshakeCallback, addr 0x298f4c8, size 0x1c4, virtual false, abstract: false, final false
  static inline void SSLHandshakeCallback(::System::IAsyncResult* asyncResult);

  /// @brief Method QueueOrCreateFtpDataStream, addr 0x298f68c, size 0x29c, virtual false, abstract: false, final false
  inline ::System::Net::__CommandStream__PipelineInstruction QueueOrCreateFtpDataStream(ByRef<::System::IO::Stream*> stream);

  /// @brief Method ClearState, addr 0x298fc20, size 0x90, virtual true, abstract: false, final false
  inline void ClearState();

  /// @brief Method PipelineCallback, addr 0x298fcb0, size 0x82c, virtual true, abstract: false, final false
  inline ::System::Net::__CommandStream__PipelineInstruction PipelineCallback(::System::Net::__CommandStream__PipelineEntry* entry, ::System::Net::ResponseDescription* response, bool timeout,
                                                                              ByRef<::System::IO::Stream*> stream);

  /// @brief Method BuildCommandsList, addr 0x2991504, size 0xdd8, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*> BuildCommandsList(::System::Net::WebRequest* req);

  /// @brief Method QueueOrCreateDataConection, addr 0x29904e4, size 0x664, virtual false, abstract: false, final false
  inline ::System::Net::__CommandStream__PipelineInstruction QueueOrCreateDataConection(::System::Net::__CommandStream__PipelineEntry* entry, ::System::Net::ResponseDescription* response,
                                                                                        bool timeout, ByRef<::System::IO::Stream*> stream, ByRef<bool> isSocketReady);

  /// @brief Method GetPathInfo, addr 0x29923ec, size 0x194, virtual false, abstract: false, final false
  static inline void GetPathInfo(::System::Net::__FtpControlStream__GetPathOption pathOption, ::System::Uri* uri, ByRef<::StringW> path, ByRef<::StringW> directory, ByRef<::StringW> filename);

  /// @brief Method FormatAddress, addr 0x2992d34, size 0x124, virtual false, abstract: false, final false
  inline ::StringW FormatAddress(::System::Net::IPAddress* address, int32_t Port);

  /// @brief Method FormatAddressV6, addr 0x2992e58, size 0x110, virtual false, abstract: false, final false
  inline ::StringW FormatAddressV6(::System::Net::IPAddress* address, int32_t port);

  /// @brief Method get_ContentLength, addr 0x2992f68, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_ContentLength();

  /// @brief Method get_LastModified, addr 0x2992f70, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastModified();

  /// @brief Method get_ResponseUri, addr 0x2992f78, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_ResponseUri();

  /// @brief Method get_BannerMessage, addr 0x2992f80, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_BannerMessage();

  /// @brief Method get_WelcomeMessage, addr 0x2992f98, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_WelcomeMessage();

  /// @brief Method get_ExitMessage, addr 0x2992fb0, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_ExitMessage();

  /// @brief Method GetContentLengthFrom213Response, addr 0x2990fb4, size 0x140, virtual false, abstract: false, final false
  inline int64_t GetContentLengthFrom213Response(::StringW responseString);

  /// @brief Method GetLastModifiedFrom213Response, addr 0x29910f4, size 0x360, virtual false, abstract: false, final false
  inline ::System::DateTime GetLastModifiedFrom213Response(::StringW str);

  /// @brief Method TryUpdateResponseUri, addr 0x2990c40, size 0x358, virtual false, abstract: false, final false
  inline void TryUpdateResponseUri(::StringW str, ::System::Net::FtpWebRequest* request);

  /// @brief Method TryUpdateContentLength, addr 0x2990b48, size 0xec, virtual false, abstract: false, final false
  inline void TryUpdateContentLength(::StringW str);

  /// @brief Method GetLoginDirectory, addr 0x2991454, size 0xb0, virtual false, abstract: false, final false
  inline ::StringW GetLoginDirectory(::StringW str);

  /// @brief Method GetPortV4, addr 0x2992900, size 0x1f4, virtual false, abstract: false, final false
  inline int32_t GetPortV4(::StringW responseString);

  /// @brief Method GetPortV6, addr 0x2992af4, size 0x1c0, virtual false, abstract: false, final false
  inline int32_t GetPortV6(::StringW responseString);

  /// @brief Method CreateFtpListenerSocket, addr 0x2992590, size 0x17c, virtual false, abstract: false, final false
  inline void CreateFtpListenerSocket(::System::Net::FtpWebRequest* request);

  /// @brief Method GetPortCommandLine, addr 0x299270c, size 0x1f4, virtual false, abstract: false, final false
  inline ::StringW GetPortCommandLine(::System::Net::FtpWebRequest* request);

  /// @brief Method FormatFtpCommand, addr 0x29922dc, size 0x100, virtual false, abstract: false, final false
  inline ::StringW FormatFtpCommand(::StringW command, ::StringW parameter);

  /// @brief Method CreateFtpDataSocket, addr 0x2992cb4, size 0x80, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::Socket* CreateFtpDataSocket(::System::Net::FtpWebRequest* request, ::System::Net::Sockets::Socket* templateSocket);

  /// @brief Method CheckValid, addr 0x2992fc8, size 0x3b4, virtual true, abstract: false, final false
  inline bool CheckValid(::System::Net::ResponseDescription* response, ByRef<int32_t> validThrough, ByRef<int32_t> completeLength);

  /// @brief Method IsFtpDataStreamWriteable, addr 0x298f928, size 0x84, virtual false, abstract: false, final false
  inline ::System::Net::TriState IsFtpDataStreamWriteable();

  // Ctor Parameters [CppParam { name: "", ty: "FtpControlStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FtpControlStream(FtpControlStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FtpControlStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FtpControlStream(FtpControlStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpControlStream();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Net::FtpControlStream, 0x110>, "Size mismatch!");

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

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__FtpControlStream__GetPathOption, "System.Net", "FtpControlStream/GetPathOption");
NEED_NO_BOX(::System::Net::FtpControlStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpControlStream*, "System.Net", "FtpControlStream");
NEED_NO_BOX(::System::Net::__FtpControlStream____c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__FtpControlStream____c__DisplayClass31_0*, "System.Net", "FtpControlStream/<>c__DisplayClass31_0");
