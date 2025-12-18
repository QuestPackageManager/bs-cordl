#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/HttpPollingTransport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpPollingTransport)
namespace OculusStudios::GraphQL::Client {
class GraphQLLiveQuery;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLRequest;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLResponseStream;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLResponse;
}
namespace OculusStudios::GraphQL::Client {
struct HttpPollingTransport__ExecuteAsync_d__12;
}
namespace OculusStudios::GraphQL::Client {
struct HttpPollingTransport__StartHttpPollingAsync_d__13;
}
namespace OculusStudios::GraphQL::Client {
class HttpPollingTransport___c__DisplayClass12_0;
}
namespace OculusStudios::GraphQL::Client {
class HttpTransport;
}
namespace OculusStudios::GraphQL::Client {
class IGraphQLClientTransport;
}
namespace OculusStudios::GraphQL::Client {
class MinimalMainThreadExecutor;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class HttpPollingTransport;
}
namespace OculusStudios::GraphQL::Client {
class HttpPollingTransport___c__DisplayClass12_0;
}
namespace OculusStudios::GraphQL::Client {
struct HttpPollingTransport__ExecuteAsync_d__12;
}
namespace OculusStudios::GraphQL::Client {
struct HttpPollingTransport__StartHttpPollingAsync_d__13;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::HttpPollingTransport);
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0);
MARK_VAL_T(::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12);
MARK_VAL_T(::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13);
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.HttpPollingTransport/<>c__DisplayClass12_0
class CORDL_TYPE HttpPollingTransport___c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field liveQuery, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_liveQuery, put = __cordl_internal_set_liveQuery)) ::OculusStudios::GraphQL::Client::GraphQLLiveQuery* liveQuery;

  static inline ::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0* New_ctor();

  /// @brief Method <ExecuteAsync>b__0, addr 0x5d78328, size 0x1c, virtual false, abstract: false, final false
  inline void _ExecuteAsync_b__0();

  constexpr ::OculusStudios::GraphQL::Client::GraphQLLiveQuery* const& __cordl_internal_get_liveQuery() const;

  constexpr ::OculusStudios::GraphQL::Client::GraphQLLiveQuery*& __cordl_internal_get_liveQuery();

  constexpr void __cordl_internal_set_liveQuery(::OculusStudios::GraphQL::Client::GraphQLLiveQuery* value);

  /// @brief Method .ctor, addr 0x5d78324, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpPollingTransport___c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpPollingTransport___c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpPollingTransport___c__DisplayClass12_0(HttpPollingTransport___c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpPollingTransport___c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpPollingTransport___c__DisplayClass12_0(HttpPollingTransport___c__DisplayClass12_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20188 };

  /// @brief Field liveQuery, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLLiveQuery* ___liveQuery;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0, ___liveQuery) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0, 0x18>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.HttpPollingTransport/<ExecuteAsync>d__12
struct CORDL_TYPE HttpPollingTransport__ExecuteAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d78344, size 0x424, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d78908, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpPollingTransport__ExecuteAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>", modifiers: "", def_value: None }, CppParam { name: "graphQLRequest", ty:
  // "::OculusStudios::GraphQL::Client::GraphQLRequest*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::HttpPollingTransport*", modifiers: "",
  // def_value: None }, CppParam { name: "executor", ty: "::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>", modifiers: "", def_value: None }]
  constexpr HttpPollingTransport__ExecuteAsync_d__12(int32_t __1__state,
                                                     ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __t__builder,
                                                     ::OculusStudios::GraphQL::Client::GraphQLRequest* graphQLRequest, ::OculusStudios::GraphQL::Client::HttpPollingTransport* __4__this,
                                                     ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* executor,
                                                     ::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0* __8__1,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20189 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __t__builder;

  /// @brief Field graphQLRequest, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLRequest* graphQLRequest;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::HttpPollingTransport* __4__this;

  /// @brief Field executor, offset: 0x30, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* executor;

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0* __8__1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12, graphQLRequest) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12, executor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12, 0x48>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.HttpPollingTransport/<StartHttpPollingAsync>d__13
struct CORDL_TYPE HttpPollingTransport__StartHttpPollingAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d78988, size 0x45c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d78de4, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpPollingTransport__StartHttpPollingAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "liveQuery", ty: "::OculusStudios::GraphQL::Client::GraphQLLiveQuery*",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::HttpPollingTransport*", modifiers: "", def_value: None }, CppParam { name: "operation", ty:
  // "::OculusStudios::GraphQL::Client::GraphQLResponseStream*", modifiers: "", def_value: None }, CppParam { name: "executor", ty: "::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*",
  // modifiers: "", def_value: None }, CppParam { name: "_httpTransport_5__2", ty: "::OculusStudios::GraphQL::Client::HttpTransport*", modifiers: "", def_value: None }, CppParam { name:
  // "_lastResponse_5__3", ty: "::OculusStudios::GraphQL::Client::GraphQLResponse*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>", modifiers: "", def_value: None }]
  constexpr HttpPollingTransport__StartHttpPollingAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                              ::OculusStudios::GraphQL::Client::GraphQLLiveQuery* liveQuery, ::OculusStudios::GraphQL::Client::HttpPollingTransport* __4__this,
                                                              ::OculusStudios::GraphQL::Client::GraphQLResponseStream* operation, ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* executor,
                                                              ::OculusStudios::GraphQL::Client::HttpTransport* _httpTransport_5__2,
                                                              ::OculusStudios::GraphQL::Client::GraphQLResponse* _lastResponse_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20190 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field liveQuery, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLLiveQuery* liveQuery;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::HttpPollingTransport* __4__this;

  /// @brief Field operation, offset: 0x38, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLResponseStream* operation;

  /// @brief Field executor, offset: 0x40, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* executor;

  /// @brief Field <httpTransport>5__2, offset: 0x48, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::HttpTransport* _httpTransport_5__2;

  /// @brief Field <lastResponse>5__3, offset: 0x50, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLResponse* _lastResponse_5__3;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13, liveQuery) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13, operation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13, executor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13, _httpTransport_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13, _lastResponse_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13, __u__2) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13, 0x68>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.HttpPollingTransport
class CORDL_TYPE HttpPollingTransport : public ::System::Object {
public:
  // Declarations
  using _ExecuteAsync_d__12 = ::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12;

  using _StartHttpPollingAsync_d__13 = ::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13;

  using __c__DisplayClass12_0 = ::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0;

  __declspec(property(get = get_AccessToken, put = set_AccessToken)) ::StringW AccessToken;

  /// @brief Field CustomAppHeaders, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_CustomAppHeaders, put = __cordl_internal_set_CustomAppHeaders)) ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* CustomAppHeaders;

  __declspec(property(get = get_Endpoint, put = set_Endpoint)) ::StringW Endpoint;

  /// @brief Field TOTAL_NUM_POLL_REQUESTS, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_TOTAL_NUM_POLL_REQUESTS, put = setStaticF_TOTAL_NUM_POLL_REQUESTS)) int32_t TOTAL_NUM_POLL_REQUESTS;

  /// @brief Field <AccessToken>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__AccessToken_k__BackingField, put = __cordl_internal_set__AccessToken_k__BackingField)) ::StringW _AccessToken_k__BackingField;

  /// @brief Field <Endpoint>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Endpoint_k__BackingField, put = __cordl_internal_set__Endpoint_k__BackingField)) ::StringW _Endpoint_k__BackingField;

  /// @brief Field _httpTransport, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__httpTransport, put = __cordl_internal_set__httpTransport)) ::OculusStudios::GraphQL::Client::HttpTransport* _httpTransport;

  /// @brief Convert operator to "::OculusStudios::GraphQL::Client::IGraphQLClientTransport"
  constexpr operator ::OculusStudios::GraphQL::Client::IGraphQLClientTransport*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x5d78288, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ExecuteAsync, addr 0x5d780cc, size 0xf4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>* ExecuteAsync(::OculusStudios::GraphQL::Client::GraphQLRequest* graphQLRequest,
                                                                                                                    ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* executor);

  /// @brief Method GetHttpTransport, addr 0x5d7803c, size 0x90, virtual false, abstract: false, final false
  inline ::OculusStudios::GraphQL::Client::HttpTransport* GetHttpTransport(::StringW endpoint, ::StringW accessToken,
                                                                           ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* customAppHeaders);

  static inline ::OculusStudios::GraphQL::Client::HttpPollingTransport* New_ctor();

  /// @brief Method StartHttpPollingAsync, addr 0x5d781c0, size 0xc8, virtual false, abstract: false, final false
  inline void StartHttpPollingAsync(::OculusStudios::GraphQL::Client::GraphQLLiveQuery* liveQuery, ::OculusStudios::GraphQL::Client::GraphQLResponseStream* operation,
                                    ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* executor);

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* const& __cordl_internal_get_CustomAppHeaders() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get_CustomAppHeaders();

  constexpr ::StringW const& __cordl_internal_get__AccessToken_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AccessToken_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Endpoint_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Endpoint_k__BackingField();

  constexpr ::OculusStudios::GraphQL::Client::HttpTransport* const& __cordl_internal_get__httpTransport() const;

  constexpr ::OculusStudios::GraphQL::Client::HttpTransport*& __cordl_internal_get__httpTransport();

  constexpr void __cordl_internal_set_CustomAppHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__AccessToken_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Endpoint_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__httpTransport(::OculusStudios::GraphQL::Client::HttpTransport* value);

  /// @brief Method .ctor, addr 0x5d7828c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_TOTAL_NUM_POLL_REQUESTS();

  /// @brief Method get_AccessToken, addr 0x5d7802c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AccessToken();

  /// @brief Method get_Endpoint, addr 0x5d7801c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Endpoint();

  /// @brief Convert to "::OculusStudios::GraphQL::Client::IGraphQLClientTransport"
  constexpr ::OculusStudios::GraphQL::Client::IGraphQLClientTransport* i___OculusStudios__GraphQL__Client__IGraphQLClientTransport() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_TOTAL_NUM_POLL_REQUESTS(int32_t value);

  /// @brief Method set_AccessToken, addr 0x5d78034, size 0x8, virtual false, abstract: false, final false
  inline void set_AccessToken(::StringW value);

  /// @brief Method set_Endpoint, addr 0x5d78024, size 0x8, virtual false, abstract: false, final false
  inline void set_Endpoint(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpPollingTransport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpPollingTransport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpPollingTransport(HttpPollingTransport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpPollingTransport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpPollingTransport(HttpPollingTransport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20191 };

  /// @brief Field <Endpoint>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Endpoint_k__BackingField;

  /// @brief Field <AccessToken>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____AccessToken_k__BackingField;

  /// @brief Field CustomAppHeaders, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ___CustomAppHeaders;

  /// @brief Field _httpTransport, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::HttpTransport* ____httpTransport;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport, ____Endpoint_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport, ____AccessToken_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport, ___CustomAppHeaders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPollingTransport, ____httpTransport) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::HttpPollingTransport, 0x30>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::HttpPollingTransport);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::HttpPollingTransport*, "OculusStudios.GraphQL.Client", "HttpPollingTransport");
NEED_NO_BOX(::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0*, "OculusStudios.GraphQL.Client", "HttpPollingTransport/<>c__DisplayClass12_0");
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12, "OculusStudios.GraphQL.Client", "HttpPollingTransport/<ExecuteAsync>d__12");
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13, "OculusStudios.GraphQL.Client", "HttpPollingTransport/<StartHttpPollingAsync>d__13");
