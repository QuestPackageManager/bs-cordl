#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/HttpTransport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpTransport)
namespace OculusStudios::GraphQL::Client {
class GraphQLRequest;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLResponseStream;
}
namespace OculusStudios::GraphQL::Client {
class HttpRequestManager;
}
namespace OculusStudios::GraphQL::Client {
struct HttpTransport__ExecuteAsync_d__10;
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
namespace System::Diagnostics {
class Stopwatch;
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
namespace System {
class IDisposable;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class HttpTransport;
}
namespace OculusStudios::GraphQL::Client {
struct HttpTransport__ExecuteAsync_d__10;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::HttpTransport);
MARK_VAL_T(::OculusStudios::GraphQL::Client::HttpTransport__ExecuteAsync_d__10);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.TimeSpan
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.HttpTransport/<ExecuteAsync>d__10
struct CORDL_TYPE HttpTransport__ExecuteAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d16340, size 0x910, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d16c50, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpTransport__ExecuteAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::OculusStudios::GraphQL::Client::HttpTransport*", modifiers: "", def_value: None }, CppParam { name: "graphQLRequest", ty: "::OculusStudios::GraphQL::Client::GraphQLRequest*", modifiers: "",
  // def_value: None }, CppParam { name: "_httpRequest_5__2", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: None }, CppParam { name: "_stopWatch_5__3", ty:
  // "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "::OculusStudios::GraphQL::Client::GraphQLRequest*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }, CppParam { name: "_httpResponse_5__5",
  // ty: "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }, CppParam { name: "_latency_5__6", ty: "::System::TimeSpan",
  // modifiers: "", def_value: None }]
  constexpr HttpTransport__ExecuteAsync_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __t__builder,
                                              ::OculusStudios::GraphQL::Client::HttpTransport* __4__this, ::OculusStudios::GraphQL::Client::GraphQLRequest* graphQLRequest,
                                              ::System::Net::Http::HttpRequestMessage* _httpRequest_5__2, ::System::Diagnostics::Stopwatch* _stopWatch_5__3,
                                              ::OculusStudios::GraphQL::Client::GraphQLRequest* __7__wrap3,
                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1,
                                              ::System::Net::Http::HttpResponseMessage* _httpResponse_5__5,
                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__2, ::System::TimeSpan _latency_5__6) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20292 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::HttpTransport* __4__this;

  /// @brief Field graphQLRequest, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLRequest* graphQLRequest;

  /// @brief Field <httpRequest>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Http::HttpRequestMessage* _httpRequest_5__2;

  /// @brief Field <stopWatch>5__3, offset: 0x38, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* _stopWatch_5__3;

  /// @brief Field <>7__wrap3, offset: 0x40, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLRequest* __7__wrap3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1;

  /// @brief Field <httpResponse>5__5, offset: 0x50, size: 0x8, def value: None
  ::System::Net::Http::HttpResponseMessage* _httpResponse_5__5;

  /// @brief Field <>u__2, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__2;

  /// @brief Field <latency>5__6, offset: 0x60, size: 0x8, def value: None
  ::System::TimeSpan _latency_5__6;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpTransport__ExecuteAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpTransport__ExecuteAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpTransport__ExecuteAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpTransport__ExecuteAsync_d__10, graphQLRequest) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpTransport__ExecuteAsync_d__10, _httpRequest_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpTransport__ExecuteAsync_d__10, _stopWatch_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpTransport__ExecuteAsync_d__10, __7__wrap3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpTransport__ExecuteAsync_d__10, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpTransport__ExecuteAsync_d__10, _httpResponse_5__5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpTransport__ExecuteAsync_d__10, __u__2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpTransport__ExecuteAsync_d__10, _latency_5__6) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::HttpTransport__ExecuteAsync_d__10, 0x68>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.HttpTransport
class CORDL_TYPE HttpTransport : public ::System::Object {
public:
  // Declarations
  using _ExecuteAsync_d__10 = ::OculusStudios::GraphQL::Client::HttpTransport__ExecuteAsync_d__10;

  __declspec(property(get = get_AccessToken, put = set_AccessToken)) ::StringW AccessToken;

  /// @brief Field CustomAppHeaders, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_CustomAppHeaders, put = __cordl_internal_set_CustomAppHeaders)) ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* CustomAppHeaders;

  __declspec(property(get = get_Endpoint, put = set_Endpoint)) ::StringW Endpoint;

  /// @brief Field <AccessToken>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__AccessToken_k__BackingField, put = __cordl_internal_set__AccessToken_k__BackingField)) ::StringW _AccessToken_k__BackingField;

  /// @brief Field <Endpoint>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Endpoint_k__BackingField, put = __cordl_internal_set__Endpoint_k__BackingField)) ::StringW _Endpoint_k__BackingField;

  /// @brief Field http_, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_http_, put = __cordl_internal_set_http_)) ::OculusStudios::GraphQL::Client::HttpRequestManager* http_;

  /// @brief Convert operator to "::OculusStudios::GraphQL::Client::IGraphQLClientTransport"
  constexpr operator ::OculusStudios::GraphQL::Client::IGraphQLClientTransport*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x5d1633c, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ExecuteAsync, addr 0x5d11c88, size 0xf4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>* ExecuteAsync(::OculusStudios::GraphQL::Client::GraphQLRequest* graphQLRequest,
                                                                                                                    ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* _);

  /// @brief Method GetFullURL, addr 0x5d1606c, size 0x2d0, virtual false, abstract: false, final false
  inline ::System::Uri* GetFullURL(::OculusStudios::GraphQL::Client::GraphQLRequest* req);

  /// @brief Method GetHttpRequest, addr 0x5d155a8, size 0xac4, virtual false, abstract: false, final false
  inline ::System::Net::Http::HttpRequestMessage* GetHttpRequest(::OculusStudios::GraphQL::Client::GraphQLRequest* graphQLRequest);

  static inline ::OculusStudios::GraphQL::Client::HttpTransport* New_ctor();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* const& __cordl_internal_get_CustomAppHeaders() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get_CustomAppHeaders();

  constexpr ::StringW const& __cordl_internal_get__AccessToken_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AccessToken_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Endpoint_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Endpoint_k__BackingField();

  constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager* const& __cordl_internal_get_http_() const;

  constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager*& __cordl_internal_get_http_();

  constexpr void __cordl_internal_set_CustomAppHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__AccessToken_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Endpoint_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_http_(::OculusStudios::GraphQL::Client::HttpRequestManager* value);

  /// @brief Method .ctor, addr 0x5d0a040, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AccessToken, addr 0x5d15598, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AccessToken();

  /// @brief Method get_Endpoint, addr 0x5d15588, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Endpoint();

  /// @brief Convert to "::OculusStudios::GraphQL::Client::IGraphQLClientTransport"
  constexpr ::OculusStudios::GraphQL::Client::IGraphQLClientTransport* i___OculusStudios__GraphQL__Client__IGraphQLClientTransport() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_AccessToken, addr 0x5d155a0, size 0x8, virtual false, abstract: false, final false
  inline void set_AccessToken(::StringW value);

  /// @brief Method set_Endpoint, addr 0x5d15590, size 0x8, virtual false, abstract: false, final false
  inline void set_Endpoint(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpTransport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpTransport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpTransport(HttpTransport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpTransport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpTransport(HttpTransport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20293 };

  /// @brief Field <Endpoint>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Endpoint_k__BackingField;

  /// @brief Field <AccessToken>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____AccessToken_k__BackingField;

  /// @brief Field CustomAppHeaders, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ___CustomAppHeaders;

  /// @brief Field http_, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::HttpRequestManager* ___http_;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpTransport, ____Endpoint_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpTransport, ____AccessToken_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpTransport, ___CustomAppHeaders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpTransport, ___http_) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::HttpTransport, 0x30>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::HttpTransport);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::HttpTransport*, "OculusStudios.GraphQL.Client", "HttpTransport");
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::HttpTransport__ExecuteAsync_d__10, "OculusStudios.GraphQL.Client", "HttpTransport/<ExecuteAsync>d__10");
