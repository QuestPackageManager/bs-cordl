#pragma once
// IWYU pragma private; include "System/Net/HttpConnection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpConnection)
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class EndPointListener;
}
namespace System::Net {
struct HttpConnection_InputState;
}
namespace System::Net {
struct HttpConnection_LineState;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::Net {
class HttpListener;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net {
class ListenerPrefix;
}
namespace System::Net {
class RequestStream;
}
namespace System::Net {
class ResponseStream;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading {
class Timer;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
struct HttpConnection_InputState;
}
namespace System::Net {
struct HttpConnection_LineState;
}
namespace System::Net {
class HttpConnection;
}
// Write type traits
MARK_VAL_T(::System::Net::HttpConnection_InputState);
MARK_VAL_T(::System::Net::HttpConnection_LineState);
MARK_REF_PTR_T(::System::Net::HttpConnection);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.HttpConnection/InputState
struct CORDL_TYPE HttpConnection_InputState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HttpConnection_InputState_Unwrapped
  enum struct __HttpConnection_InputState_Unwrapped : int32_t {
    __E_RequestLine = static_cast<int32_t>(0x0),
    __E_Headers = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HttpConnection_InputState_Unwrapped() const noexcept {
    return static_cast<__HttpConnection_InputState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpConnection_InputState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HttpConnection_InputState(int32_t value__) noexcept;

  /// @brief Field Headers value: I32(1)
  static ::System::Net::HttpConnection_InputState const Headers;

  /// @brief Field RequestLine value: I32(0)
  static ::System::Net::HttpConnection_InputState const RequestLine;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9689 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpConnection_InputState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HttpConnection_InputState, 0x4>, "Size mismatch!");

} // namespace System::Net
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.HttpConnection/LineState
struct CORDL_TYPE HttpConnection_LineState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HttpConnection_LineState_Unwrapped
  enum struct __HttpConnection_LineState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_CR = static_cast<int32_t>(0x1),
    __E_LF = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HttpConnection_LineState_Unwrapped() const noexcept {
    return static_cast<__HttpConnection_LineState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpConnection_LineState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HttpConnection_LineState(int32_t value__) noexcept;

  /// @brief Field CR value: I32(1)
  static ::System::Net::HttpConnection_LineState const CR;

  /// @brief Field LF value: I32(2)
  static ::System::Net::HttpConnection_LineState const LF;

  /// @brief Field None value: I32(0)
  static ::System::Net::HttpConnection_LineState const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9690 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpConnection_LineState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HttpConnection_LineState, 0x4>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.HttpConnection::InputState, System.Net.HttpConnection::LineState, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpConnection
class CORDL_TYPE HttpConnection : public ::System::Object {
public:
  // Declarations
  using InputState = ::System::Net::HttpConnection_InputState;

  using LineState = ::System::Net::HttpConnection_LineState;

  __declspec(property(get = get_IsSecure)) bool IsSecure;

  __declspec(property(get = get_LocalEndPoint)) ::System::Net::IPEndPoint* LocalEndPoint;

  __declspec(property(put = set_Prefix)) ::System::Net::ListenerPrefix* Prefix;

  __declspec(property(get = get_Reuses)) int32_t Reuses;

  /// @brief Field buffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field cert, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_cert, put = __cordl_internal_set_cert)) ::System::Security::Cryptography::X509Certificates::X509Certificate* cert;

  /// @brief Field chunked, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_chunked, put = __cordl_internal_set_chunked)) bool chunked;

  /// @brief Field client_cert, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_client_cert, put = __cordl_internal_set_client_cert)) ::System::Security::Cryptography::X509Certificates::X509Certificate2* client_cert;

  /// @brief Field client_cert_errors, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_client_cert_errors, put = __cordl_internal_set_client_cert_errors)) ::ArrayW<int32_t, ::Array<int32_t>*> client_cert_errors;

  /// @brief Field context, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::System::Net::HttpListenerContext* context;

  /// @brief Field context_bound, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_context_bound, put = __cordl_internal_set_context_bound)) bool context_bound;

  /// @brief Field current_line, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_current_line, put = __cordl_internal_set_current_line)) ::System::Text::StringBuilder* current_line;

  /// @brief Field epl, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_epl, put = __cordl_internal_set_epl)) ::System::Net::EndPointListener* epl;

  /// @brief Field i_stream, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_i_stream, put = __cordl_internal_set_i_stream)) ::System::Net::RequestStream* i_stream;

  /// @brief Field input_state, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_input_state, put = __cordl_internal_set_input_state)) ::System::Net::HttpConnection_InputState input_state;

  /// @brief Field last_listener, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_last_listener, put = __cordl_internal_set_last_listener)) ::System::Net::HttpListener* last_listener;

  /// @brief Field line_state, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_line_state, put = __cordl_internal_set_line_state)) ::System::Net::HttpConnection_LineState line_state;

  /// @brief Field local_ep, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_local_ep, put = __cordl_internal_set_local_ep)) ::System::Net::IPEndPoint* local_ep;

  /// @brief Field ms, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ms, put = __cordl_internal_set_ms)) ::System::IO::MemoryStream* ms;

  /// @brief Field o_stream, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_o_stream, put = __cordl_internal_set_o_stream)) ::System::Net::ResponseStream* o_stream;

  /// @brief Field onread_cb, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onread_cb, put = setStaticF_onread_cb)) ::System::AsyncCallback* onread_cb;

  /// @brief Field position, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) int32_t position;

  /// @brief Field prefix, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix)) ::System::Net::ListenerPrefix* prefix;

  /// @brief Field reuses, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_reuses, put = __cordl_internal_set_reuses)) int32_t reuses;

  /// @brief Field s_timeout, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_s_timeout, put = __cordl_internal_set_s_timeout)) int32_t s_timeout;

  /// @brief Field secure, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_secure, put = __cordl_internal_set_secure)) bool secure;

  /// @brief Field sock, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sock, put = __cordl_internal_set_sock)) ::System::Net::Sockets::Socket* sock;

  /// @brief Field ssl_stream, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_ssl_stream, put = __cordl_internal_set_ssl_stream)) ::System::Net::Security::SslStream* ssl_stream;

  /// @brief Field stream, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_stream, put = __cordl_internal_set_stream)) ::System::IO::Stream* stream;

  /// @brief Field timer, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_timer, put = __cordl_internal_set_timer)) ::System::Threading::Timer* timer;

  /// @brief Method BeginReadRequest, addr 0x44c10d0, size 0x1a8, virtual false, abstract: false, final false
  inline void BeginReadRequest();

  /// @brief Method Close, addr 0x44c2968, size 0x264, virtual false, abstract: false, final false
  inline void Close(bool force_close);

  /// @brief Method CloseSocket, addr 0x44c4eb4, size 0x104, virtual false, abstract: false, final false
  inline void CloseSocket();

  /// @brief Method GetRequestStream, addr 0x44c4fe8, size 0x148, virtual false, abstract: false, final false
  inline ::System::Net::RequestStream* GetRequestStream(bool chunked, int64_t contentlength);

  /// @brief Method GetResponseStream, addr 0x44c5130, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Net::ResponseStream* GetResponseStream();

  /// @brief Method Init, addr 0x44c4c7c, size 0xa4, virtual false, abstract: false, final false
  inline void Init();

  static inline ::System::Net::HttpConnection* New_ctor(::System::Net::Sockets::Socket* sock, ::System::Net::EndPointListener* epl, bool secure,
                                                        ::System::Security::Cryptography::X509Certificates::X509Certificate* cert);

  /// @brief Method OnRead, addr 0x44c51f8, size 0xd4, virtual false, abstract: false, final false
  static inline void OnRead(::System::IAsyncResult* ares);

  /// @brief Method OnReadInternal, addr 0x44c52cc, size 0x338, virtual false, abstract: false, final false
  inline void OnReadInternal(::System::IAsyncResult* ares);

  /// @brief Method OnTimeout, addr 0x44c4e9c, size 0x18, virtual false, abstract: false, final false
  inline void OnTimeout(::System::Object* unused);

  /// @brief Method ProcessInput, addr 0x44c5624, size 0x2b8, virtual false, abstract: false, final false
  inline bool ProcessInput(::System::IO::MemoryStream* ms);

  /// @brief Method ReadLine, addr 0x44c6310, size 0x174, virtual false, abstract: false, final false
  inline ::StringW ReadLine(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t len, ::ByRef<int32_t> used);

  /// @brief Method RemoveConnection, addr 0x44c5f10, size 0x40, virtual false, abstract: false, final false
  inline void RemoveConnection();

  /// @brief Method SendError, addr 0x44c5604, size 0x20, virtual false, abstract: false, final false
  inline void SendError();

  /// @brief Method SendError, addr 0x44bcd18, size 0x1dc, virtual false, abstract: false, final false
  inline void SendError(::StringW msg, int32_t status);

  /// @brief Method Unbind, addr 0x44c4fb8, size 0x30, virtual false, abstract: false, final false
  inline void Unbind();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* const& __cordl_internal_get_cert() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& __cordl_internal_get_cert();

  constexpr bool const& __cordl_internal_get_chunked() const;

  constexpr bool& __cordl_internal_get_chunked();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2* const& __cordl_internal_get_client_cert() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2*& __cordl_internal_get_client_cert();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_client_cert_errors() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_client_cert_errors();

  constexpr ::System::Net::HttpListenerContext* const& __cordl_internal_get_context() const;

  constexpr ::System::Net::HttpListenerContext*& __cordl_internal_get_context();

  constexpr bool const& __cordl_internal_get_context_bound() const;

  constexpr bool& __cordl_internal_get_context_bound();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_current_line() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_current_line();

  constexpr ::System::Net::EndPointListener* const& __cordl_internal_get_epl() const;

  constexpr ::System::Net::EndPointListener*& __cordl_internal_get_epl();

  constexpr ::System::Net::RequestStream* const& __cordl_internal_get_i_stream() const;

  constexpr ::System::Net::RequestStream*& __cordl_internal_get_i_stream();

  constexpr ::System::Net::HttpConnection_InputState const& __cordl_internal_get_input_state() const;

  constexpr ::System::Net::HttpConnection_InputState& __cordl_internal_get_input_state();

  constexpr ::System::Net::HttpListener* const& __cordl_internal_get_last_listener() const;

  constexpr ::System::Net::HttpListener*& __cordl_internal_get_last_listener();

  constexpr ::System::Net::HttpConnection_LineState const& __cordl_internal_get_line_state() const;

  constexpr ::System::Net::HttpConnection_LineState& __cordl_internal_get_line_state();

  constexpr ::System::Net::IPEndPoint* const& __cordl_internal_get_local_ep() const;

  constexpr ::System::Net::IPEndPoint*& __cordl_internal_get_local_ep();

  constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_ms() const;

  constexpr ::System::IO::MemoryStream*& __cordl_internal_get_ms();

  constexpr ::System::Net::ResponseStream* const& __cordl_internal_get_o_stream() const;

  constexpr ::System::Net::ResponseStream*& __cordl_internal_get_o_stream();

  constexpr int32_t const& __cordl_internal_get_position() const;

  constexpr int32_t& __cordl_internal_get_position();

  constexpr ::System::Net::ListenerPrefix* const& __cordl_internal_get_prefix() const;

  constexpr ::System::Net::ListenerPrefix*& __cordl_internal_get_prefix();

  constexpr int32_t const& __cordl_internal_get_reuses() const;

  constexpr int32_t& __cordl_internal_get_reuses();

  constexpr int32_t const& __cordl_internal_get_s_timeout() const;

  constexpr int32_t& __cordl_internal_get_s_timeout();

  constexpr bool const& __cordl_internal_get_secure() const;

  constexpr bool& __cordl_internal_get_secure();

  constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get_sock() const;

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_sock();

  constexpr ::System::Net::Security::SslStream* const& __cordl_internal_get_ssl_stream() const;

  constexpr ::System::Net::Security::SslStream*& __cordl_internal_get_ssl_stream();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_stream();

  constexpr ::System::Threading::Timer* const& __cordl_internal_get_timer() const;

  constexpr ::System::Threading::Timer*& __cordl_internal_get_timer();

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_cert(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

  constexpr void __cordl_internal_set_chunked(bool value);

  constexpr void __cordl_internal_set_client_cert(::System::Security::Cryptography::X509Certificates::X509Certificate2* value);

  constexpr void __cordl_internal_set_client_cert_errors(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_context(::System::Net::HttpListenerContext* value);

  constexpr void __cordl_internal_set_context_bound(bool value);

  constexpr void __cordl_internal_set_current_line(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_epl(::System::Net::EndPointListener* value);

  constexpr void __cordl_internal_set_i_stream(::System::Net::RequestStream* value);

  constexpr void __cordl_internal_set_input_state(::System::Net::HttpConnection_InputState value);

  constexpr void __cordl_internal_set_last_listener(::System::Net::HttpListener* value);

  constexpr void __cordl_internal_set_line_state(::System::Net::HttpConnection_LineState value);

  constexpr void __cordl_internal_set_local_ep(::System::Net::IPEndPoint* value);

  constexpr void __cordl_internal_set_ms(::System::IO::MemoryStream* value);

  constexpr void __cordl_internal_set_o_stream(::System::Net::ResponseStream* value);

  constexpr void __cordl_internal_set_position(int32_t value);

  constexpr void __cordl_internal_set_prefix(::System::Net::ListenerPrefix* value);

  constexpr void __cordl_internal_set_reuses(int32_t value);

  constexpr void __cordl_internal_set_s_timeout(int32_t value);

  constexpr void __cordl_internal_set_secure(bool value);

  constexpr void __cordl_internal_set_sock(::System::Net::Sockets::Socket* value);

  constexpr void __cordl_internal_set_ssl_stream(::System::Net::Security::SslStream* value);

  constexpr void __cordl_internal_set_stream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_timer(::System::Threading::Timer* value);

  /// @brief Method <.ctor>b__24_0, addr 0x44c7540, size 0xf0, virtual false, abstract: false, final false
  inline bool __ctor_b__24_0(::System::Object* t, ::System::Security::Cryptography::X509Certificates::X509Certificate* c, ::System::Security::Cryptography::X509Certificates::X509Chain* ch,
                             ::System::Net::Security::SslPolicyErrors e);

  /// @brief Method .ctor, addr 0x44c0e84, size 0x24c, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::Socket* sock, ::System::Net::EndPointListener* epl, bool secure, ::System::Security::Cryptography::X509Certificates::X509Certificate* cert);

  static inline ::System::AsyncCallback* getStaticF_onread_cb();

  /// @brief Method get_IsSecure, addr 0x44c4e8c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsSecure();

  /// @brief Method get_LocalEndPoint, addr 0x44c4dd4, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Net::IPEndPoint* get_LocalEndPoint();

  /// @brief Method get_Reuses, addr 0x44c4dcc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Reuses();

  static inline void setStaticF_onread_cb(::System::AsyncCallback* value);

  /// @brief Method set_Prefix, addr 0x44c4e94, size 0x8, virtual false, abstract: false, final false
  inline void set_Prefix(::System::Net::ListenerPrefix* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpConnection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpConnection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpConnection(HttpConnection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpConnection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpConnection(HttpConnection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9691 };

  /// @brief Field sock, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ___sock;

  /// @brief Field stream, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Stream* ___stream;

  /// @brief Field epl, offset: 0x20, size: 0x8, def value: None
  ::System::Net::EndPointListener* ___epl;

  /// @brief Field ms, offset: 0x28, size: 0x8, def value: None
  ::System::IO::MemoryStream* ___ms;

  /// @brief Field buffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  /// @brief Field context, offset: 0x38, size: 0x8, def value: None
  ::System::Net::HttpListenerContext* ___context;

  /// @brief Field current_line, offset: 0x40, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___current_line;

  /// @brief Field prefix, offset: 0x48, size: 0x8, def value: None
  ::System::Net::ListenerPrefix* ___prefix;

  /// @brief Field i_stream, offset: 0x50, size: 0x8, def value: None
  ::System::Net::RequestStream* ___i_stream;

  /// @brief Field o_stream, offset: 0x58, size: 0x8, def value: None
  ::System::Net::ResponseStream* ___o_stream;

  /// @brief Field chunked, offset: 0x60, size: 0x1, def value: None
  bool ___chunked;

  /// @brief Field reuses, offset: 0x64, size: 0x4, def value: None
  int32_t ___reuses;

  /// @brief Field context_bound, offset: 0x68, size: 0x1, def value: None
  bool ___context_bound;

  /// @brief Field secure, offset: 0x69, size: 0x1, def value: None
  bool ___secure;

  /// @brief Field cert, offset: 0x70, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Certificate* ___cert;

  /// @brief Field s_timeout, offset: 0x78, size: 0x4, def value: None
  int32_t ___s_timeout;

  /// @brief Field timer, offset: 0x80, size: 0x8, def value: None
  ::System::Threading::Timer* ___timer;

  /// @brief Field local_ep, offset: 0x88, size: 0x8, def value: None
  ::System::Net::IPEndPoint* ___local_ep;

  /// @brief Field last_listener, offset: 0x90, size: 0x8, def value: None
  ::System::Net::HttpListener* ___last_listener;

  /// @brief Field client_cert_errors, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___client_cert_errors;

  /// @brief Field client_cert, offset: 0xa0, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Certificate2* ___client_cert;

  /// @brief Field ssl_stream, offset: 0xa8, size: 0x8, def value: None
  ::System::Net::Security::SslStream* ___ssl_stream;

  /// @brief Field input_state, offset: 0xb0, size: 0x4, def value: None
  ::System::Net::HttpConnection_InputState ___input_state;

  /// @brief Field line_state, offset: 0xb4, size: 0x4, def value: None
  ::System::Net::HttpConnection_LineState ___line_state;

  /// @brief Field position, offset: 0xb8, size: 0x4, def value: None
  int32_t ___position;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpConnection, ___sock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___stream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___epl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___ms) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___context) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___current_line) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___prefix) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___i_stream) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___o_stream) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___chunked) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___reuses) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___context_bound) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___secure) == 0x69, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___cert) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___s_timeout) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___timer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___local_ep) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___last_listener) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___client_cert_errors) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___client_cert) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___ssl_stream) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___input_state) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___line_state) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___position) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HttpConnection, 0xc0>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpConnection_InputState, "System.Net", "HttpConnection/InputState");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpConnection_LineState, "System.Net", "HttpConnection/LineState");
NEED_NO_BOX(::System::Net::HttpConnection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpConnection*, "System.Net", "HttpConnection");
