#pragma once
// IWYU pragma private; include "Mono/Net/Security/MonoTlsStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoTlsStream)
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace Mono::Net::Security {
struct MonoTlsStream__CreateStream_d__18;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Net::Sockets {
class NetworkStream;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class WebConnectionTunnel;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Net::Security {
class MonoTlsStream;
}
namespace Mono::Net::Security {
struct MonoTlsStream__CreateStream_d__18;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::MonoTlsStream);
MARK_VAL_T(::Mono::Net::Security::MonoTlsStream__CreateStream_d__18);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Mono::Net::Security {
// Is value type: true
// CS Name: Mono.Net.Security.MonoTlsStream/<CreateStream>d__18
struct CORDL_TYPE MonoTlsStream__CreateStream_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x4117e4c, size 0x704, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x4118550, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoTlsStream__CreateStream_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Mono::Net::Security::MonoTlsStream*", modifiers: "", def_value: None }, CppParam { name: "tunnel", ty: "::System::Net::WebConnectionTunnel*", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_socket_5__2", ty: "::System::Net::Sockets::Socket*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr MonoTlsStream__CreateStream_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> __t__builder,
                                              ::Mono::Net::Security::MonoTlsStream* __4__this, ::System::Net::WebConnectionTunnel* tunnel, ::System::Threading::CancellationToken cancellationToken,
                                              ::System::Net::Sockets::Socket* _socket_5__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9163 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Mono::Net::Security::MonoTlsStream* __4__this;

  /// @brief Field tunnel, offset: 0x28, size: 0x8, def value: None
  ::System::Net::WebConnectionTunnel* tunnel;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <socket>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* _socket_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::MonoTlsStream__CreateStream_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream__CreateStream_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream__CreateStream_d__18, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream__CreateStream_d__18, tunnel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream__CreateStream_d__18, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream__CreateStream_d__18, _socket_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream__CreateStream_d__18, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MonoTlsStream__CreateStream_d__18, 0x50>, "Size mismatch!");

} // namespace Mono::Net::Security
// Dependencies System.IDisposable, System.Net.WebExceptionStatus, System.Object
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.MonoTlsStream
class CORDL_TYPE MonoTlsStream : public ::System::Object {
public:
  // Declarations
  using _CreateStream_d__18 = ::Mono::Net::Security::MonoTlsStream__CreateStream_d__18;

  __declspec(property(get = get_CertificateValidationFailed, put = set_CertificateValidationFailed)) bool CertificateValidationFailed;

  __declspec(property(get = get_ExceptionStatus)) ::System::Net::WebExceptionStatus ExceptionStatus;

  __declspec(property(get = get_Request)) ::System::Net::HttpWebRequest* Request;

  /// @brief Field <CertificateValidationFailed>k__BackingField, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__CertificateValidationFailed_k__BackingField,
                      put = __cordl_internal_set__CertificateValidationFailed_k__BackingField)) bool _CertificateValidationFailed_k__BackingField;

  /// @brief Field networkStream, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_networkStream, put = __cordl_internal_set_networkStream)) ::System::Net::Sockets::NetworkStream* networkStream;

  /// @brief Field provider, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_provider, put = __cordl_internal_set_provider)) ::Mono::Net::Security::MobileTlsProvider* provider;

  /// @brief Field request, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request)) ::System::Net::HttpWebRequest* request;

  /// @brief Field settings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_settings, put = __cordl_internal_set_settings)) ::Mono::Security::Interface::MonoTlsSettings* settings;

  /// @brief Field sslStream, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_sslStream, put = __cordl_internal_set_sslStream)) ::System::Net::Security::SslStream* sslStream;

  /// @brief Field sslStreamLock, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_sslStreamLock, put = __cordl_internal_set_sslStreamLock)) ::System::Object* sslStreamLock;

  /// @brief Field status, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_status, put = __cordl_internal_set_status)) ::System::Net::WebExceptionStatus status;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CloseSslStream, addr 0x4117d78, size 0xd4, virtual false, abstract: false, final false
  inline void CloseSslStream();

  /// @brief Method CreateStream, addr 0x4117c80, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* CreateStream(::System::Net::WebConnectionTunnel* tunnel, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose, addr 0x4117d74, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::Mono::Net::Security::MonoTlsStream* New_ctor(::System::Net::HttpWebRequest* request, ::System::Net::Sockets::NetworkStream* networkStream);

  constexpr bool const& __cordl_internal_get__CertificateValidationFailed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CertificateValidationFailed_k__BackingField();

  constexpr ::System::Net::Sockets::NetworkStream* const& __cordl_internal_get_networkStream() const;

  constexpr ::System::Net::Sockets::NetworkStream*& __cordl_internal_get_networkStream();

  constexpr ::Mono::Net::Security::MobileTlsProvider* const& __cordl_internal_get_provider() const;

  constexpr ::Mono::Net::Security::MobileTlsProvider*& __cordl_internal_get_provider();

  constexpr ::System::Net::HttpWebRequest* const& __cordl_internal_get_request() const;

  constexpr ::System::Net::HttpWebRequest*& __cordl_internal_get_request();

  constexpr ::Mono::Security::Interface::MonoTlsSettings* const& __cordl_internal_get_settings() const;

  constexpr ::Mono::Security::Interface::MonoTlsSettings*& __cordl_internal_get_settings();

  constexpr ::System::Net::Security::SslStream* const& __cordl_internal_get_sslStream() const;

  constexpr ::System::Net::Security::SslStream*& __cordl_internal_get_sslStream();

  constexpr ::System::Object* const& __cordl_internal_get_sslStreamLock() const;

  constexpr ::System::Object*& __cordl_internal_get_sslStreamLock();

  constexpr ::System::Net::WebExceptionStatus const& __cordl_internal_get_status() const;

  constexpr ::System::Net::WebExceptionStatus& __cordl_internal_get_status();

  constexpr void __cordl_internal_set__CertificateValidationFailed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_networkStream(::System::Net::Sockets::NetworkStream* value);

  constexpr void __cordl_internal_set_provider(::Mono::Net::Security::MobileTlsProvider* value);

  constexpr void __cordl_internal_set_request(::System::Net::HttpWebRequest* value);

  constexpr void __cordl_internal_set_settings(::Mono::Security::Interface::MonoTlsSettings* value);

  constexpr void __cordl_internal_set_sslStream(::System::Net::Security::SslStream* value);

  constexpr void __cordl_internal_set_sslStreamLock(::System::Object* value);

  constexpr void __cordl_internal_set_status(::System::Net::WebExceptionStatus value);

  /// @brief Method .ctor, addr 0x4117ac8, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::HttpWebRequest* request, ::System::Net::Sockets::NetworkStream* networkStream);

  /// @brief Method get_CertificateValidationFailed, addr 0x4117ab4, size 0x8, virtual false, abstract: false, final false
  inline bool get_CertificateValidationFailed();

  /// @brief Method get_ExceptionStatus, addr 0x4117aac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::WebExceptionStatus get_ExceptionStatus();

  /// @brief Method get_Request, addr 0x4117aa4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::HttpWebRequest* get_Request();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_CertificateValidationFailed, addr 0x4117abc, size 0xc, virtual false, abstract: false, final false
  inline void set_CertificateValidationFailed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoTlsStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoTlsStream(MonoTlsStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoTlsStream(MonoTlsStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9164 };

  /// @brief Field provider, offset: 0x10, size: 0x8, def value: None
  ::Mono::Net::Security::MobileTlsProvider* ___provider;

  /// @brief Field networkStream, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Sockets::NetworkStream* ___networkStream;

  /// @brief Field request, offset: 0x20, size: 0x8, def value: None
  ::System::Net::HttpWebRequest* ___request;

  /// @brief Field settings, offset: 0x28, size: 0x8, def value: None
  ::Mono::Security::Interface::MonoTlsSettings* ___settings;

  /// @brief Field sslStream, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Security::SslStream* ___sslStream;

  /// @brief Field sslStreamLock, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ___sslStreamLock;

  /// @brief Field status, offset: 0x40, size: 0x4, def value: None
  ::System::Net::WebExceptionStatus ___status;

  /// @brief Field <CertificateValidationFailed>k__BackingField, offset: 0x44, size: 0x1, def value: None
  bool ____CertificateValidationFailed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::MonoTlsStream, ___provider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream, ___networkStream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream, ___request) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream, ___settings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream, ___sslStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream, ___sslStreamLock) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream, ___status) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream, ____CertificateValidationFailed_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MonoTlsStream, 0x48>, "Size mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::MonoTlsStream);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MonoTlsStream*, "Mono.Net.Security", "MonoTlsStream");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MonoTlsStream__CreateStream_d__18, "Mono.Net.Security", "MonoTlsStream/<CreateStream>d__18");
