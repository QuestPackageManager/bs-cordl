#pragma once
// IWYU pragma private; include "System/Net/Http/HttpClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__HttpCompletionOption_def.hpp"
#include "System/Net/Http/zzzz__HttpMessageInvoker_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpClient)
namespace System::Net::Http::Headers {
class HttpRequestHeaders;
}
namespace System::Net::Http {
struct HttpClient__GetStringAsync_d__53;
}
namespace System::Net::Http {
struct HttpClient__SendAsyncWorker_d__47;
}
namespace System::Net::Http {
struct HttpCompletionOption;
}
namespace System::Net::Http {
class HttpMessageHandler;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net::Http {
class HttpClient;
}
namespace System::Net::Http {
struct HttpClient__GetStringAsync_d__53;
}
namespace System::Net::Http {
struct HttpClient__SendAsyncWorker_d__47;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpClient);
MARK_VAL_T(::System::Net::Http::HttpClient__GetStringAsync_d__53);
MARK_VAL_T(::System::Net::Http::HttpClient__SendAsyncWorker_d__47);
// Dependencies System.Net.Http.HttpCompletionOption, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::Net::Http {
// Is value type: true
// CS Name: System.Net.Http.HttpClient/<SendAsyncWorker>d__47
struct CORDL_TYPE HttpClient__SendAsyncWorker_d__47 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x42255a4, size 0x684, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x4225c28, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpClient__SendAsyncWorker_d__47();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::System::Net::Http::HttpClient*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None },
  // CppParam { name: "request", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: None }, CppParam { name: "completionOption", ty: "::System::Net::Http::HttpCompletionOption",
  // modifiers: "", def_value: None }, CppParam { name: "_lcts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None }, CppParam { name: "_response_5__3", ty:
  // "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr HttpClient__SendAsyncWorker_d__47(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*> __t__builder,
                                              ::System::Net::Http::HttpClient* __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Net::Http::HttpRequestMessage* request,
                                              ::System::Net::Http::HttpCompletionOption completionOption, ::System::Threading::CancellationTokenSource* _lcts_5__2,
                                              ::System::Net::Http::HttpResponseMessage* _response_5__3,
                                              ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1,
                                              ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16686 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::HttpClient* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field request, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Http::HttpRequestMessage* request;

  /// @brief Field completionOption, offset: 0x38, size: 0x4, def value: None
  ::System::Net::Http::HttpCompletionOption completionOption;

  /// @brief Field <lcts>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* _lcts_5__2;

  /// @brief Field <response>5__3, offset: 0x48, size: 0x8, def value: None
  ::System::Net::Http::HttpResponseMessage* _response_5__3;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1;

  /// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::HttpClient__SendAsyncWorker_d__47, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient__SendAsyncWorker_d__47, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient__SendAsyncWorker_d__47, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient__SendAsyncWorker_d__47, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient__SendAsyncWorker_d__47, request) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient__SendAsyncWorker_d__47, completionOption) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient__SendAsyncWorker_d__47, _lcts_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient__SendAsyncWorker_d__47, _response_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient__SendAsyncWorker_d__47, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient__SendAsyncWorker_d__47, __u__2) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpClient__SendAsyncWorker_d__47, 0x70>, "Size mismatch!");

} // namespace System::Net::Http
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine
namespace System::Net::Http {
// Is value type: true
// CS Name: System.Net.Http.HttpClient/<GetStringAsync>d__53
struct CORDL_TYPE HttpClient__GetStringAsync_d__53 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x4225ca4, size 0x534, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x4226360, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpClient__GetStringAsync_d__53();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpClient*", modifiers: "",
  // def_value: None }, CppParam { name: "requestUri", ty: "::System::Uri*", modifiers: "", def_value: None }, CppParam { name: "_resp_5__2", ty: "::System::Net::Http::HttpResponseMessage*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::StringW>", modifiers: "", def_value: None
  // }]
  constexpr HttpClient__GetStringAsync_d__53(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::System::Net::Http::HttpClient* __4__this,
                                             ::System::Uri* requestUri, ::System::Net::Http::HttpResponseMessage* _resp_5__2,
                                             ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1,
                                             ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::StringW> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16687 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::HttpClient* __4__this;

  /// @brief Field requestUri, offset: 0x28, size: 0x8, def value: None
  ::System::Uri* requestUri;

  /// @brief Field <resp>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Http::HttpResponseMessage* _resp_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::StringW> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::HttpClient__GetStringAsync_d__53, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient__GetStringAsync_d__53, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient__GetStringAsync_d__53, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient__GetStringAsync_d__53, requestUri) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient__GetStringAsync_d__53, _resp_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient__GetStringAsync_d__53, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient__GetStringAsync_d__53, __u__2) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpClient__GetStringAsync_d__53, 0x58>, "Size mismatch!");

} // namespace System::Net::Http
// Dependencies System.Net.Http.HttpMessageInvoker, System.TimeSpan
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.HttpClient
class CORDL_TYPE HttpClient : public ::System::Net::Http::HttpMessageInvoker {
public:
  // Declarations
  using _GetStringAsync_d__53 = ::System::Net::Http::HttpClient__GetStringAsync_d__53;

  using _SendAsyncWorker_d__47 = ::System::Net::Http::HttpClient__SendAsyncWorker_d__47;

  __declspec(property(get = get_MaxResponseContentBufferSize)) int64_t MaxResponseContentBufferSize;

  __declspec(property(put = set_Timeout)) ::System::TimeSpan Timeout;

  /// @brief Field TimeoutDefault, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TimeoutDefault, put = setStaticF_TimeoutDefault)) ::System::TimeSpan TimeoutDefault;

  /// @brief Field base_address, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_base_address, put = __cordl_internal_set_base_address)) ::System::Uri* base_address;

  /// @brief Field buffer_size, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer_size, put = __cordl_internal_set_buffer_size)) int64_t buffer_size;

  /// @brief Field cts, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cts, put = __cordl_internal_set_cts)) ::System::Threading::CancellationTokenSource* cts;

  /// @brief Field disposed, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field headers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_headers, put = __cordl_internal_set_headers)) ::System::Net::Http::Headers::HttpRequestHeaders* headers;

  /// @brief Field timeout, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_timeout, put = __cordl_internal_set_timeout)) ::System::TimeSpan timeout;

  /// @brief Method Dispose, addr 0x4224b90, size 0x6c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetAsync, addr 0x4224c34, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* GetAsync(::System::Uri* requestUri, ::System::Net::Http::HttpCompletionOption completionOption);

  /// @brief Method GetStringAsync, addr 0x42253f8, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetStringAsync(::System::Uri* requestUri);

  static inline ::System::Net::Http::HttpClient* New_ctor();

  static inline ::System::Net::Http::HttpClient* New_ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler);

  /// @brief Method SendAsync, addr 0x4225034, size 0xc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendAsync, addr 0x4224d44, size 0x78, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                  ::System::Net::Http::HttpCompletionOption completionOption);

  /// @brief Method SendAsync, addr 0x4224dbc, size 0x278, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*
  SendAsync(::System::Net::Http::HttpRequestMessage* request, ::System::Net::Http::HttpCompletionOption completionOption, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendAsyncWorker, addr 0x42252f0, size 0x108, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*
  SendAsyncWorker(::System::Net::Http::HttpRequestMessage* request, ::System::Net::Http::HttpCompletionOption completionOption, ::System::Threading::CancellationToken cancellationToken);

  constexpr ::System::Uri* const& __cordl_internal_get_base_address() const;

  constexpr ::System::Uri*& __cordl_internal_get_base_address();

  constexpr int64_t const& __cordl_internal_get_buffer_size() const;

  constexpr int64_t& __cordl_internal_get_buffer_size();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_cts() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_cts();

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr ::System::Net::Http::Headers::HttpRequestHeaders* const& __cordl_internal_get_headers() const;

  constexpr ::System::Net::Http::Headers::HttpRequestHeaders*& __cordl_internal_get_headers();

  constexpr ::System::TimeSpan const& __cordl_internal_get_timeout() const;

  constexpr ::System::TimeSpan& __cordl_internal_get_timeout();

  constexpr void __cordl_internal_set_base_address(::System::Uri* value);

  constexpr void __cordl_internal_set_buffer_size(int64_t value);

  constexpr void __cordl_internal_set_cts(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_headers(::System::Net::Http::Headers::HttpRequestHeaders* value);

  constexpr void __cordl_internal_set_timeout(::System::TimeSpan value);

  /// @brief Method <>n__0, addr 0x4225564, size 0x20, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* __n__0(::System::Net::Http::HttpRequestMessage* request,
                                                                                               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method .ctor, addr 0x42248bc, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4224918, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler);

  static inline ::System::TimeSpan getStaticF_TimeoutDefault();

  /// @brief Method get_MaxResponseContentBufferSize, addr 0x4224a4c, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_MaxResponseContentBufferSize();

  static inline void setStaticF_TimeoutDefault(::System::TimeSpan value);

  /// @brief Method set_Timeout, addr 0x4224a54, size 0x13c, virtual false, abstract: false, final false
  inline void set_Timeout(::System::TimeSpan value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpClient(HttpClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpClient(HttpClient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16688 };

  /// @brief Field base_address, offset: 0x20, size: 0x8, def value: None
  ::System::Uri* ___base_address;

  /// @brief Field cts, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ___cts;

  /// @brief Field disposed, offset: 0x30, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field headers, offset: 0x38, size: 0x8, def value: None
  ::System::Net::Http::Headers::HttpRequestHeaders* ___headers;

  /// @brief Field buffer_size, offset: 0x40, size: 0x8, def value: None
  int64_t ___buffer_size;

  /// @brief Field timeout, offset: 0x48, size: 0x8, def value: None
  ::System::TimeSpan ___timeout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::HttpClient, ___base_address) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient, ___cts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient, ___disposed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient, ___headers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient, ___buffer_size) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient, ___timeout) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpClient, 0x50>, "Size mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpClient);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpClient*, "System.Net.Http", "HttpClient");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpClient__GetStringAsync_d__53, "System.Net.Http", "HttpClient/<GetStringAsync>d__53");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpClient__SendAsyncWorker_d__47, "System.Net.Http", "HttpClient/<SendAsyncWorker>d__47");
