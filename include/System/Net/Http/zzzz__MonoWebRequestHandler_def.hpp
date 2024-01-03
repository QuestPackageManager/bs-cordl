#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Net/Security/zzzz__AuthenticationLevel_def.hpp"
#include "System/Net/zzzz__DecompressionMethods_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Security/Principal/zzzz__TokenImpersonationLevel_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoWebRequestHandler)
namespace System::Net {
class ICredentials;
}
namespace System {
class IDisposable;
}
namespace System::Net::Http {
class HttpMethod;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net::Security {
class SslClientAuthenticationOptions;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class CookieContainer;
}
namespace System::Net::Http {
class __MonoWebRequestHandler____c;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Net {
class HttpWebResponse;
}
namespace System::Net::Http {
class IMonoHttpClientHandler;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Net::Http {
struct __MonoWebRequestHandler___SendAsync_d__99;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net::Http::Headers {
class HttpRequestHeaders;
}
namespace System {
struct TimeSpan;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System::Net {
class WebResponse;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Net::Http {
class HttpContent;
}
namespace System::Threading {
struct CancellationTokenRegistration;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::Net::Http {
class MonoWebRequestHandler;
}
namespace System::Net::Http {
class __MonoWebRequestHandler____c;
}
namespace System::Net::Http {
struct __MonoWebRequestHandler___SendAsync_d__99;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::MonoWebRequestHandler);
MARK_REF_PTR_T(::System::Net::Http::__MonoWebRequestHandler____c);
MARK_VAL_T(::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14636))
// CS Name: ::MonoWebRequestHandler::<>c*
class CORDL_TYPE __MonoWebRequestHandler____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Net::Http::__MonoWebRequestHandler____c* __9;

  /// @brief Field <>9__95_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__95_0, put = setStaticF___9__95_0))::System::Func_2<::StringW, bool>* __9__95_0;

  /// @brief Field <>9__96_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__96_0, put = setStaticF___9__96_0))::System::Func_2<::StringW, bool>* __9__96_0;

  /// @brief Field <>9__99_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__99_0, put = setStaticF___9__99_0))::System::Action_1<::System::Object*>* __9__99_0;

  static inline void setStaticF___9(::System::Net::Http::__MonoWebRequestHandler____c* value);

  static inline ::System::Net::Http::__MonoWebRequestHandler____c* getStaticF___9();

  static inline void setStaticF___9__95_0(::System::Func_2<::StringW, bool>* value);

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__95_0();

  static inline void setStaticF___9__96_0(::System::Func_2<::StringW, bool>* value);

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__96_0();

  static inline void setStaticF___9__99_0(::System::Action_1<::System::Object*>* value);

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__99_0();

  static inline ::System::Net::Http::__MonoWebRequestHandler____c* New_ctor();

  /// @brief Method .ctor, addr 0x282e910, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetConnectionKeepAlive>b__95_0, addr 0x282e918, size 0x50, virtual false, abstract: false, final false
  inline bool _GetConnectionKeepAlive_b__95_0(::StringW l);

  /// @brief Method <CreateWebRequest>b__96_0, addr 0x282e968, size 0x4c, virtual false, abstract: false, final false
  inline bool _CreateWebRequest_b__96_0(::StringW l);

  /// @brief Method <SendAsync>b__99_0, addr 0x282e9b4, size 0xb0, virtual false, abstract: false, final false
  inline void _SendAsync_b__99_0(::System::Object* l);

  // Ctor Parameters [CppParam { name: "", ty: "__MonoWebRequestHandler____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MonoWebRequestHandler____c(__MonoWebRequestHandler____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MonoWebRequestHandler____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MonoWebRequestHandler____c(__MonoWebRequestHandler____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MonoWebRequestHandler____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::__MonoWebRequestHandler____c, 0x10>, "Size mismatch!");

} // namespace System::Net::Http
// Type: ::<SendAsync>d__99
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 883 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(14655)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3397), inst: 1125 }), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(9097)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 883 }), TypeDefinitionIndex(TypeDefinitionIndex(2683)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3397), inst: 899 }), TypeDefinitionIndex(TypeDefinitionIndex(3619))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14637)) CS Name: ::MonoWebRequestHandler::<SendAsync>d__99
struct CORDL_TYPE __MonoWebRequestHandler___SendAsync_d__99 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x282ea64, size 0x1700, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2830540, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::System::Net::Http::MonoWebRequestHandler*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None
  // }, CppParam { name: "request", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: None }, CppParam { name: "_wrequest_5__2", ty: "::System::Net::HttpWebRequest*",
  // modifiers: "", def_value: None }, CppParam { name: "_wresponse_5__3", ty: "::System::Net::HttpWebResponse*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty:
  // "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: None }, CppParam { name: "_content_5__5", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "_stream_5__6", ty:
  // "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*>", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }]
  constexpr __MonoWebRequestHandler___SendAsync_d__99(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*> __t__builder,
                                                      ::System::Net::Http::MonoWebRequestHandler* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                      ::System::Net::Http::HttpRequestMessage* request, ::System::Net::HttpWebRequest* _wrequest_5__2, ::System::Net::HttpWebResponse* _wresponse_5__3,
                                                      ::System::Threading::CancellationTokenRegistration __7__wrap3, ::System::Net::Http::HttpContent* _content_5__5,
                                                      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::System::IO::Stream* _stream_5__6,
                                                      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*> __u__2,
                                                      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*> __u__3,
                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__4) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MonoWebRequestHandler___SendAsync_d__99();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::MonoWebRequestHandler* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field request, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Http::HttpRequestMessage* request;

  /// @brief Field <wrequest>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Net::HttpWebRequest* _wrequest_5__2;

  /// @brief Field <wresponse>5__3, offset: 0x40, size: 0x8, def value: None
  ::System::Net::HttpWebResponse* _wresponse_5__3;

  /// @brief Field <>7__wrap3, offset: 0x48, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration __7__wrap3;

  /// @brief Field <content>5__5, offset: 0x60, size: 0x8, def value: None
  ::System::Net::Http::HttpContent* _content_5__5;

  /// @brief Field <>u__1, offset: 0x68, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <stream>5__6, offset: 0x78, size: 0x8, def value: None
  ::System::IO::Stream* _stream_5__6;

  /// @brief Field <>u__2, offset: 0x80, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*> __u__2;

  /// @brief Field <>u__3, offset: 0x90, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*> __u__3;

  /// @brief Field <>u__4, offset: 0xa0, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__4;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99, 0xa8>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99, request) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99, _wrequest_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99, _wresponse_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99, __7__wrap3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99, _content_5__5) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99, __u__1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99, _stream_5__6) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99, __u__2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99, __u__3) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99, __u__4) == 0xa0, "Offset mismatch!");

} // namespace System::Net::Http
// Type: System.Net.Http::MonoWebRequestHandler
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 177, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9365)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 2711 }), TypeDefinitionIndex(TypeDefinitionIndex(9157)), TypeDefinitionIndex(TypeDefinitionIndex(2484)),
// TypeDefinitionIndex(TypeDefinitionIndex(2997))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14638)) CS Name: ::System.Net.Http::MonoWebRequestHandler*
class CORDL_TYPE MonoWebRequestHandler : public ::System::Object {
public:
  // Declarations
  using _SendAsync_d__99 = ::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99;

  using __c = ::System::Net::Http::__MonoWebRequestHandler____c;

  /// @brief Field allowAutoRedirect, offset 0x10, size 0x1
  __declspec(property(get = __get_allowAutoRedirect, put = __set_allowAutoRedirect)) bool allowAutoRedirect;

  /// @brief Field automaticDecompression, offset 0x14, size 0x4
  __declspec(property(get = __get_automaticDecompression, put = __set_automaticDecompression))::System::Net::DecompressionMethods automaticDecompression;

  /// @brief Field cookieContainer, offset 0x18, size 0x8
  __declspec(property(get = __get_cookieContainer, put = __set_cookieContainer))::System::Net::CookieContainer* cookieContainer;

  /// @brief Field credentials, offset 0x20, size 0x8
  __declspec(property(get = __get_credentials, put = __set_credentials))::System::Net::ICredentials* credentials;

  /// @brief Field maxAutomaticRedirections, offset 0x28, size 0x4
  __declspec(property(get = __get_maxAutomaticRedirections, put = __set_maxAutomaticRedirections)) int32_t maxAutomaticRedirections;

  /// @brief Field maxRequestContentBufferSize, offset 0x30, size 0x8
  __declspec(property(get = __get_maxRequestContentBufferSize, put = __set_maxRequestContentBufferSize)) int64_t maxRequestContentBufferSize;

  /// @brief Field preAuthenticate, offset 0x38, size 0x1
  __declspec(property(get = __get_preAuthenticate, put = __set_preAuthenticate)) bool preAuthenticate;

  /// @brief Field proxy, offset 0x40, size 0x8
  __declspec(property(get = __get_proxy, put = __set_proxy))::System::Net::IWebProxy* proxy;

  /// @brief Field useCookies, offset 0x48, size 0x1
  __declspec(property(get = __get_useCookies, put = __set_useCookies)) bool useCookies;

  /// @brief Field useProxy, offset 0x49, size 0x1
  __declspec(property(get = __get_useProxy, put = __set_useProxy)) bool useProxy;

  /// @brief Field sslOptions, offset 0x50, size 0x8
  __declspec(property(get = __get_sslOptions, put = __set_sslOptions))::System::Net::Security::SslClientAuthenticationOptions* sslOptions;

  /// @brief Field allowPipelining, offset 0x58, size 0x1
  __declspec(property(get = __get_allowPipelining, put = __set_allowPipelining)) bool allowPipelining;

  /// @brief Field cachePolicy, offset 0x60, size 0x8
  __declspec(property(get = __get_cachePolicy, put = __set_cachePolicy))::System::Net::Cache::RequestCachePolicy* cachePolicy;

  /// @brief Field authenticationLevel, offset 0x68, size 0x4
  __declspec(property(get = __get_authenticationLevel, put = __set_authenticationLevel))::System::Net::Security::AuthenticationLevel authenticationLevel;

  /// @brief Field continueTimeout, offset 0x70, size 0x8
  __declspec(property(get = __get_continueTimeout, put = __set_continueTimeout))::System::TimeSpan continueTimeout;

  /// @brief Field impersonationLevel, offset 0x78, size 0x4
  __declspec(property(get = __get_impersonationLevel, put = __set_impersonationLevel))::System::Security::Principal::TokenImpersonationLevel impersonationLevel;

  /// @brief Field maxResponseHeadersLength, offset 0x7c, size 0x4
  __declspec(property(get = __get_maxResponseHeadersLength, put = __set_maxResponseHeadersLength)) int32_t maxResponseHeadersLength;

  /// @brief Field readWriteTimeout, offset 0x80, size 0x4
  __declspec(property(get = __get_readWriteTimeout, put = __set_readWriteTimeout)) int32_t readWriteTimeout;

  /// @brief Field serverCertificateValidationCallback, offset 0x88, size 0x8
  __declspec(property(get = __get_serverCertificateValidationCallback,
                      put = __set_serverCertificateValidationCallback))::System::Net::Security::RemoteCertificateValidationCallback* serverCertificateValidationCallback;

  /// @brief Field unsafeAuthenticatedConnectionSharing, offset 0x90, size 0x1
  __declspec(property(get = __get_unsafeAuthenticatedConnectionSharing, put = __set_unsafeAuthenticatedConnectionSharing)) bool unsafeAuthenticatedConnectionSharing;

  /// @brief Field sentRequest, offset 0x91, size 0x1
  __declspec(property(get = __get_sentRequest, put = __set_sentRequest)) bool sentRequest;

  /// @brief Field connectionGroupName, offset 0x98, size 0x8
  __declspec(property(get = __get_connectionGroupName, put = __set_connectionGroupName))::StringW connectionGroupName;

  /// @brief Field timeout, offset 0xa0, size 0x10
  __declspec(property(get = __get_timeout, put = __set_timeout))::System::Nullable_1<::System::TimeSpan> timeout;

  /// @brief Field disposed, offset 0xb0, size 0x1
  __declspec(property(get = __get_disposed, put = __set_disposed)) bool disposed;

  /// @brief Field groupCounter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_groupCounter, put = setStaticF_groupCounter)) int64_t groupCounter;

  __declspec(property(get = get_CookieContainer))::System::Net::CookieContainer* CookieContainer;

  __declspec(property(get = get_MaxRequestContentBufferSize)) int64_t MaxRequestContentBufferSize;

  __declspec(property(get = get_SslOptions, put = set_SslOptions))::System::Net::Security::SslClientAuthenticationOptions* SslOptions;

  /// @brief Convert operator to "::System::Net::Http::IMonoHttpClientHandler"
  constexpr operator ::System::Net::Http::IMonoHttpClientHandler*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr bool& __get_allowAutoRedirect();

  constexpr bool const& __get_allowAutoRedirect() const;

  constexpr void __set_allowAutoRedirect(bool value);

  constexpr ::System::Net::DecompressionMethods& __get_automaticDecompression();

  constexpr ::System::Net::DecompressionMethods const& __get_automaticDecompression() const;

  constexpr void __set_automaticDecompression(::System::Net::DecompressionMethods value);

  constexpr ::System::Net::CookieContainer*& __get_cookieContainer();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::CookieContainer*> const& __get_cookieContainer() const;

  constexpr void __set_cookieContainer(::System::Net::CookieContainer* value);

  constexpr ::System::Net::ICredentials*& __get_credentials();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ICredentials*> const& __get_credentials() const;

  constexpr void __set_credentials(::System::Net::ICredentials* value);

  constexpr int32_t& __get_maxAutomaticRedirections();

  constexpr int32_t const& __get_maxAutomaticRedirections() const;

  constexpr void __set_maxAutomaticRedirections(int32_t value);

  constexpr int64_t& __get_maxRequestContentBufferSize();

  constexpr int64_t const& __get_maxRequestContentBufferSize() const;

  constexpr void __set_maxRequestContentBufferSize(int64_t value);

  constexpr bool& __get_preAuthenticate();

  constexpr bool const& __get_preAuthenticate() const;

  constexpr void __set_preAuthenticate(bool value);

  constexpr ::System::Net::IWebProxy*& __get_proxy();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& __get_proxy() const;

  constexpr void __set_proxy(::System::Net::IWebProxy* value);

  constexpr bool& __get_useCookies();

  constexpr bool const& __get_useCookies() const;

  constexpr void __set_useCookies(bool value);

  constexpr bool& __get_useProxy();

  constexpr bool const& __get_useProxy() const;

  constexpr void __set_useProxy(bool value);

  constexpr ::System::Net::Security::SslClientAuthenticationOptions*& __get_sslOptions();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::SslClientAuthenticationOptions*> const& __get_sslOptions() const;

  constexpr void __set_sslOptions(::System::Net::Security::SslClientAuthenticationOptions* value);

  constexpr bool& __get_allowPipelining();

  constexpr bool const& __get_allowPipelining() const;

  constexpr void __set_allowPipelining(bool value);

  constexpr ::System::Net::Cache::RequestCachePolicy*& __get_cachePolicy();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCachePolicy*> const& __get_cachePolicy() const;

  constexpr void __set_cachePolicy(::System::Net::Cache::RequestCachePolicy* value);

  constexpr ::System::Net::Security::AuthenticationLevel& __get_authenticationLevel();

  constexpr ::System::Net::Security::AuthenticationLevel const& __get_authenticationLevel() const;

  constexpr void __set_authenticationLevel(::System::Net::Security::AuthenticationLevel value);

  constexpr ::System::TimeSpan& __get_continueTimeout();

  constexpr ::System::TimeSpan const& __get_continueTimeout() const;

  constexpr void __set_continueTimeout(::System::TimeSpan value);

  constexpr ::System::Security::Principal::TokenImpersonationLevel& __get_impersonationLevel();

  constexpr ::System::Security::Principal::TokenImpersonationLevel const& __get_impersonationLevel() const;

  constexpr void __set_impersonationLevel(::System::Security::Principal::TokenImpersonationLevel value);

  constexpr int32_t& __get_maxResponseHeadersLength();

  constexpr int32_t const& __get_maxResponseHeadersLength() const;

  constexpr void __set_maxResponseHeadersLength(int32_t value);

  constexpr int32_t& __get_readWriteTimeout();

  constexpr int32_t const& __get_readWriteTimeout() const;

  constexpr void __set_readWriteTimeout(int32_t value);

  constexpr ::System::Net::Security::RemoteCertificateValidationCallback*& __get_serverCertificateValidationCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::RemoteCertificateValidationCallback*> const& __get_serverCertificateValidationCallback() const;

  constexpr void __set_serverCertificateValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback* value);

  constexpr bool& __get_unsafeAuthenticatedConnectionSharing();

  constexpr bool const& __get_unsafeAuthenticatedConnectionSharing() const;

  constexpr void __set_unsafeAuthenticatedConnectionSharing(bool value);

  constexpr bool& __get_sentRequest();

  constexpr bool const& __get_sentRequest() const;

  constexpr void __set_sentRequest(bool value);

  constexpr ::StringW& __get_connectionGroupName();

  constexpr ::StringW const& __get_connectionGroupName() const;

  constexpr void __set_connectionGroupName(::StringW value);

  constexpr ::System::Nullable_1<::System::TimeSpan>& __get_timeout();

  constexpr ::System::Nullable_1<::System::TimeSpan> const& __get_timeout() const;

  constexpr void __set_timeout(::System::Nullable_1<::System::TimeSpan> value);

  constexpr bool& __get_disposed();

  constexpr bool const& __get_disposed() const;

  constexpr void __set_disposed(bool value);

  static inline void setStaticF_groupCounter(int64_t value);

  static inline int64_t getStaticF_groupCounter();

  static inline ::System::Net::Http::MonoWebRequestHandler* New_ctor();

  /// @brief Method .ctor, addr 0x282c6a8, size 0x1b0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method EnsureModifiability, addr 0x282d0d8, size 0x60, virtual false, abstract: false, final false
  inline void EnsureModifiability();

  /// @brief Method get_CookieContainer, addr 0x282d138, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Net::CookieContainer* get_CookieContainer();

  /// @brief Method get_MaxRequestContentBufferSize, addr 0x282d1a4, size 0x8, virtual true, abstract: false, final true
  inline int64_t get_MaxRequestContentBufferSize();

  /// @brief Method get_SslOptions, addr 0x282d1ac, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Net::Security::SslClientAuthenticationOptions* get_SslOptions();

  /// @brief Method set_SslOptions, addr 0x282d218, size 0x24, virtual true, abstract: false, final true
  inline void set_SslOptions(::System::Net::Security::SslClientAuthenticationOptions* value);

  /// @brief Method Dispose, addr 0x282d23c, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x282d24c, size 0x84, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetConnectionKeepAlive, addr 0x282d2d0, size 0x110, virtual false, abstract: false, final false
  inline bool GetConnectionKeepAlive(::System::Net::Http::Headers::HttpRequestHeaders* headers);

  /// @brief Method CreateWebRequest, addr 0x282d448, size 0x7bc, virtual true, abstract: false, final false
  inline ::System::Net::HttpWebRequest* CreateWebRequest(::System::Net::Http::HttpRequestMessage* request);

  /// @brief Method CreateResponseMessage, addr 0x282e0ec, size 0x1c8, virtual false, abstract: false, final false
  inline ::System::Net::Http::HttpResponseMessage* CreateResponseMessage(::System::Net::HttpWebResponse* wr, ::System::Net::Http::HttpRequestMessage* requestMessage,
                                                                         ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method MethodHasBody, addr 0x282e61c, size 0x10c, virtual false, abstract: false, final false
  static inline bool MethodHasBody(::System::Net::Http::HttpMethod* method);

  /// @brief Method SendAsync, addr 0x282e728, size 0x114, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method System.Net.Http.IMonoHttpClientHandler.SetWebRequestTimeout, addr 0x282e83c, size 0x70, virtual true, abstract: false, final true
  inline void System_Net_Http_IMonoHttpClientHandler_SetWebRequestTimeout(::System::TimeSpan timeout);

  // Ctor Parameters [CppParam { name: "", ty: "MonoWebRequestHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoWebRequestHandler(MonoWebRequestHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoWebRequestHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoWebRequestHandler(MonoWebRequestHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoWebRequestHandler();

public:
  /// @brief Field allowAutoRedirect, offset: 0x10, size: 0x1, def value: None
  bool ___allowAutoRedirect;

  /// @brief Field automaticDecompression, offset: 0x14, size: 0x4, def value: None
  ::System::Net::DecompressionMethods ___automaticDecompression;

  /// @brief Field cookieContainer, offset: 0x18, size: 0x8, def value: None
  ::System::Net::CookieContainer* ___cookieContainer;

  /// @brief Field credentials, offset: 0x20, size: 0x8, def value: None
  ::System::Net::ICredentials* ___credentials;

  /// @brief Field maxAutomaticRedirections, offset: 0x28, size: 0x4, def value: None
  int32_t ___maxAutomaticRedirections;

  /// @brief Field maxRequestContentBufferSize, offset: 0x30, size: 0x8, def value: None
  int64_t ___maxRequestContentBufferSize;

  /// @brief Field preAuthenticate, offset: 0x38, size: 0x1, def value: None
  bool ___preAuthenticate;

  /// @brief Field proxy, offset: 0x40, size: 0x8, def value: None
  ::System::Net::IWebProxy* ___proxy;

  /// @brief Field useCookies, offset: 0x48, size: 0x1, def value: None
  bool ___useCookies;

  /// @brief Field useProxy, offset: 0x49, size: 0x1, def value: None
  bool ___useProxy;

  /// @brief Field sslOptions, offset: 0x50, size: 0x8, def value: None
  ::System::Net::Security::SslClientAuthenticationOptions* ___sslOptions;

  /// @brief Field allowPipelining, offset: 0x58, size: 0x1, def value: None
  bool ___allowPipelining;

  /// @brief Field cachePolicy, offset: 0x60, size: 0x8, def value: None
  ::System::Net::Cache::RequestCachePolicy* ___cachePolicy;

  /// @brief Field authenticationLevel, offset: 0x68, size: 0x4, def value: None
  ::System::Net::Security::AuthenticationLevel ___authenticationLevel;

  /// @brief Field continueTimeout, offset: 0x70, size: 0x8, def value: None
  ::System::TimeSpan ___continueTimeout;

  /// @brief Field impersonationLevel, offset: 0x78, size: 0x4, def value: None
  ::System::Security::Principal::TokenImpersonationLevel ___impersonationLevel;

  /// @brief Field maxResponseHeadersLength, offset: 0x7c, size: 0x4, def value: None
  int32_t ___maxResponseHeadersLength;

  /// @brief Field readWriteTimeout, offset: 0x80, size: 0x4, def value: None
  int32_t ___readWriteTimeout;

  /// @brief Field serverCertificateValidationCallback, offset: 0x88, size: 0x8, def value: None
  ::System::Net::Security::RemoteCertificateValidationCallback* ___serverCertificateValidationCallback;

  /// @brief Field unsafeAuthenticatedConnectionSharing, offset: 0x90, size: 0x1, def value: None
  bool ___unsafeAuthenticatedConnectionSharing;

  /// @brief Field sentRequest, offset: 0x91, size: 0x1, def value: None
  bool ___sentRequest;

  /// @brief Field connectionGroupName, offset: 0x98, size: 0x8, def value: None
  ::StringW ___connectionGroupName;

  /// @brief Field timeout, offset: 0xa0, size: 0x10, def value: None
  ::System::Nullable_1<::System::TimeSpan> ___timeout;

  /// @brief Field disposed, offset: 0xb0, size: 0x1, def value: None
  bool ___disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::MonoWebRequestHandler, 0xb8>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___allowAutoRedirect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___automaticDecompression) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___cookieContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___credentials) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___maxAutomaticRedirections) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___maxRequestContentBufferSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___preAuthenticate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___proxy) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___useCookies) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___useProxy) == 0x49, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___sslOptions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___allowPipelining) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___cachePolicy) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___authenticationLevel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___continueTimeout) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___impersonationLevel) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___maxResponseHeadersLength) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___readWriteTimeout) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___serverCertificateValidationCallback) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___unsafeAuthenticatedConnectionSharing) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___sentRequest) == 0x91, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___connectionGroupName) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___timeout) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___disposed) == 0xb0, "Offset mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::MonoWebRequestHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::MonoWebRequestHandler*, "System.Net.Http", "MonoWebRequestHandler");
NEED_NO_BOX(::System::Net::Http::__MonoWebRequestHandler____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::__MonoWebRequestHandler____c*, "System.Net.Http", "MonoWebRequestHandler/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::__MonoWebRequestHandler___SendAsync_d__99, "System.Net.Http", "MonoWebRequestHandler/<SendAsync>d__99");
