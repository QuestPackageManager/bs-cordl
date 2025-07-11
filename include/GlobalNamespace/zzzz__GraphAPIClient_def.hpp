#pragma once
// IWYU pragma private; include "GlobalNamespace/GraphAPIClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphAPIClient)
namespace GlobalNamespace {
struct GraphAPIClient_PostOptions;
}
namespace GlobalNamespace {
template <typename TRequest, typename TResponse> struct GraphAPIClient__Post_d__4_2;
}
namespace GlobalNamespace {
template <typename TResponse> struct GraphAPIClient__Post_d__5_1;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace System::Net::Http {
class HttpClient;
}
namespace System::Net::Http {
class HttpContent;
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
struct CancellationToken;
}
namespace System {
class UriBuilder;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace GlobalNamespace {
class GraphAPIClient;
}
namespace GlobalNamespace {
struct GraphAPIClient_PostOptions;
}
namespace GlobalNamespace {
template <typename TRequest, typename TResponse> struct GraphAPIClient__Post_d__4_2;
}
namespace GlobalNamespace {
template <typename TResponse> struct GraphAPIClient__Post_d__5_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GraphAPIClient);
MARK_VAL_T(::GlobalNamespace::GraphAPIClient_PostOptions);
MARK_GEN_VAL_T(::GlobalNamespace::GraphAPIClient__Post_d__4_2);
MARK_GEN_VAL_T(::GlobalNamespace::GraphAPIClient__Post_d__5_1);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GraphAPIClient/PostOptions
struct CORDL_TYPE GraphAPIClient_PostOptions {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphAPIClient_PostOptions();

  // Ctor Parameters [CppParam { name: "MaxRetries", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "MinWaitTimeForRetryMs", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "WithExponentialBackoff", ty: "bool", modifiers: "", def_value: None }]
  constexpr GraphAPIClient_PostOptions(int32_t MaxRetries, int32_t MinWaitTimeForRetryMs, bool WithExponentialBackoff) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14774 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field MaxRetries, offset: 0x0, size: 0x4, def value: None
  int32_t MaxRetries;

  /// @brief Field MinWaitTimeForRetryMs, offset: 0x4, size: 0x4, def value: None
  int32_t MinWaitTimeForRetryMs;

  /// @brief Field WithExponentialBackoff, offset: 0x8, size: 0x1, def value: None
  bool WithExponentialBackoff;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GraphAPIClient_PostOptions, MaxRetries) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphAPIClient_PostOptions, MinWaitTimeForRetryMs) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphAPIClient_PostOptions, WithExponentialBackoff) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GraphAPIClient_PostOptions, 0xc>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies GraphAPIClient::PostOptions, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// cpp template
template <typename TRequest, typename TResponse>
// Is value type: true
// CS Name: GraphAPIClient/<Post>d__4`2<TRequest,TResponse>
struct CORDL_TYPE GraphAPIClient__Post_d__4_2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphAPIClient__Post_d__4_2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GraphAPIClient*", modifiers:
  // "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "request", ty: "TRequest", modifiers: "", def_value: None }, CppParam { name:
  // "accessToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam {
  // name: "postOptions", ty: "::GlobalNamespace::GraphAPIClient_PostOptions", modifiers: "", def_value: None }, CppParam { name: "_uriBuilder_5__2", ty: "::System::UriBuilder*", modifiers: "",
  // def_value: None }, CppParam { name: "_httpContent_5__3", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value: None }, CppParam { name: "_numAttempts_5__4", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr GraphAPIClient__Post_d__4_2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> __t__builder, ::GlobalNamespace::GraphAPIClient* __4__this,
                                        ::StringW path, TRequest request, ::StringW accessToken, ::System::Threading::CancellationToken cancellationToken,
                                        ::GlobalNamespace::GraphAPIClient_PostOptions postOptions, ::System::UriBuilder* _uriBuilder_5__2, ::System::Net::Http::HttpContent* _httpContent_5__3,
                                        int32_t _numAttempts_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __u__1,
                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14775 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GraphAPIClient* __4__this;

  /// @brief Field path, offset: 0x28, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field request, offset: 0x30, size: 0x8, def value: None
  TRequest request;

  /// @brief Field accessToken, offset: 0x38, size: 0x8, def value: None
  ::StringW accessToken;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field postOptions, offset: 0x48, size: 0xc, def value: None
  ::GlobalNamespace::GraphAPIClient_PostOptions postOptions;

  /// @brief Field <uriBuilder>5__2, offset: 0x58, size: 0x8, def value: None
  ::System::UriBuilder* _uriBuilder_5__2;

  /// @brief Field <httpContent>5__3, offset: 0x60, size: 0x8, def value: None
  ::System::Net::Http::HttpContent* _httpContent_5__3;

  /// @brief Field <numAttempts>5__4, offset: 0x68, size: 0x4, def value: None
  int32_t _numAttempts_5__4;

  /// @brief Field <>u__1, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __u__1;

  /// @brief Field <>u__2, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// System.Threading.CancellationToken
namespace GlobalNamespace {
// cpp template
template <typename TResponse>
// Is value type: true
// CS Name: GraphAPIClient/<Post>d__5`1<TResponse>
struct CORDL_TYPE GraphAPIClient__Post_d__5_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphAPIClient__Post_d__5_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value: None },
  // CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "httpContent", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value: None },
  // CppParam { name: "__4__this", ty: "::GlobalNamespace::GraphAPIClient*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "_requestMessage_5__2", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr GraphAPIClient__Post_d__5_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> __t__builder, ::System::Uri* uri, ::StringW accessToken,
                                        ::System::Net::Http::HttpContent* httpContent, ::GlobalNamespace::GraphAPIClient* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                        ::System::Net::Http::HttpRequestMessage* _requestMessage_5__2,
                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__1,
                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14776 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> __t__builder;

  /// @brief Field uri, offset: 0x20, size: 0x8, def value: None
  ::System::Uri* uri;

  /// @brief Field accessToken, offset: 0x28, size: 0x8, def value: None
  ::StringW accessToken;

  /// @brief Field httpContent, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Http::HttpContent* httpContent;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::GraphAPIClient* __4__this;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <requestMessage>5__2, offset: 0x48, size: 0x8, def value: None
  ::System::Net::Http::HttpRequestMessage* _requestMessage_5__2;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GraphAPIClient
class CORDL_TYPE GraphAPIClient : public ::System::Object {
public:
  // Declarations
  using PostOptions = ::GlobalNamespace::GraphAPIClient_PostOptions;

  template <typename TRequest, typename TResponse> using _Post_d__4_2 = ::GlobalNamespace::GraphAPIClient__Post_d__4_2<TRequest, TResponse>;

  template <typename TResponse> using _Post_d__5_1 = ::GlobalNamespace::GraphAPIClient__Post_d__5_1<TResponse>;

  /// @brief Field _client, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__client, put = __cordl_internal_set__client)) ::System::Net::Http::HttpClient* _client;

  /// @brief Field _networkConfig, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig)) ::GlobalNamespace::INetworkConfig* _networkConfig;

  /// @brief Method CalculateDelayMsBeforeRetry, addr 0x22cbc60, size 0x98, virtual false, abstract: false, final false
  static inline int32_t CalculateDelayMsBeforeRetry(int32_t numAttempts, ::GlobalNamespace::GraphAPIClient_PostOptions postOptions);

  static inline ::GlobalNamespace::GraphAPIClient* New_ctor(::GlobalNamespace::INetworkConfig* networkConfig);

  /// @brief Method Post, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TRequest, typename TResponse>
  inline ::System::Threading::Tasks::Task_1<TResponse>* Post(::StringW path, ::StringW accessToken, TRequest request, ::GlobalNamespace::GraphAPIClient_PostOptions postOptions,
                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Post, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResponse>
  inline ::System::Threading::Tasks::Task_1<TResponse>* Post(::System::Uri* uri, ::StringW accessToken, ::System::Net::Http::HttpContent* httpContent,
                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method PostLoggedOut, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TRequest, typename TResponse>
  inline ::System::Threading::Tasks::Task_1<TResponse>* PostLoggedOut(::StringW path, TRequest request, ::GlobalNamespace::GraphAPIClient_PostOptions postOptions,
                                                                      ::System::Threading::CancellationToken cancellationToken);

  constexpr ::System::Net::Http::HttpClient* const& __cordl_internal_get__client() const;

  constexpr ::System::Net::Http::HttpClient*& __cordl_internal_get__client();

  constexpr ::GlobalNamespace::INetworkConfig* const& __cordl_internal_get__networkConfig() const;

  constexpr ::GlobalNamespace::INetworkConfig*& __cordl_internal_get__networkConfig();

  constexpr void __cordl_internal_set__client(::System::Net::Http::HttpClient* value);

  constexpr void __cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value);

  /// @brief Method .ctor, addr 0x22cbbec, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::INetworkConfig* networkConfig);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphAPIClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphAPIClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphAPIClient(GraphAPIClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphAPIClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphAPIClient(GraphAPIClient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14777 };

  /// @brief Field _networkConfig, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::INetworkConfig* ____networkConfig;

  /// @brief Field _client, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Http::HttpClient* ____client;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GraphAPIClient, ____networkConfig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphAPIClient, ____client) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GraphAPIClient, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GraphAPIClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GraphAPIClient*, "", "GraphAPIClient");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GraphAPIClient_PostOptions, "", "GraphAPIClient/PostOptions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::GraphAPIClient__Post_d__4_2, "", "GraphAPIClient/<Post>d__4`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::GraphAPIClient__Post_d__5_1, "", "GraphAPIClient/<Post>d__5`1");
