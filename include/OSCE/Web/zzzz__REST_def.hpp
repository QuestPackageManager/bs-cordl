#pragma once
// IWYU pragma private; include "OSCE/Web/REST.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(REST)
namespace OSCE::Analytics {
class LoggerAnalyticsBatch;
}
namespace OSCE::Web {
struct FailedPostRequest;
}
namespace OSCE::Web {
struct REST__BuildQueryString_d__12;
}
namespace OSCE::Web {
struct REST__BuildUri_d__11;
}
namespace OSCE::Web {
struct REST__PostAsync_d__10;
}
namespace OSCE::Web {
struct REST__PostRequest_d__7;
}
namespace OSCE::Web {
class REST___c__DisplayClass10_0;
}
namespace OSCE::Web {
struct __c__DisplayClass10_0_REST___PostAsync_b__0_d;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Net::Http {
class HttpClientHandler;
}
namespace System::Net::Http {
class HttpClient;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net::Http {
class StringContent;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class UriBuilder;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace OSCE::Web {
class REST;
}
namespace OSCE::Web {
class REST___c__DisplayClass10_0;
}
namespace OSCE::Web {
struct REST__BuildQueryString_d__12;
}
namespace OSCE::Web {
struct REST__BuildUri_d__11;
}
namespace OSCE::Web {
struct REST__PostAsync_d__10;
}
namespace OSCE::Web {
struct REST__PostRequest_d__7;
}
namespace OSCE::Web {
struct __c__DisplayClass10_0_REST___PostAsync_b__0_d;
}
// Write type traits
MARK_REF_PTR_T(::OSCE::Web::REST);
MARK_REF_PTR_T(::OSCE::Web::REST___c__DisplayClass10_0);
MARK_VAL_T(::OSCE::Web::REST__BuildQueryString_d__12);
MARK_VAL_T(::OSCE::Web::REST__BuildUri_d__11);
MARK_VAL_T(::OSCE::Web::REST__PostAsync_d__10);
MARK_VAL_T(::OSCE::Web::REST__PostRequest_d__7);
MARK_VAL_T(::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace OSCE::Web {
// Is value type: true
// CS Name: OSCE.Web.REST/<>c__DisplayClass10_0/<<PostAsync>b__0>d
struct CORDL_TYPE __c__DisplayClass10_0_REST___PostAsync_b__0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d895c4, size 0x760, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d89d24, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __c__DisplayClass10_0_REST___PostAsync_b__0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::OSCE::Web::REST___c__DisplayClass10_0*", modifiers: "",
  // def_value: None }, CppParam { name: "cancelToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_client_5__2", ty:
  // "::System::Net::Http::HttpClient*", modifiers: "", def_value: None }, CppParam { name: "_httpContent_5__3", ty: "::System::Net::Http::StringContent*", modifiers: "", def_value: None }, CppParam {
  // name: "_uri_5__4", ty: "::System::Uri*", modifiers: "", def_value: None }, CppParam { name: "_result_5__5", ty: "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Uri*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr __c__DisplayClass10_0_REST___PostAsync_b__0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                          ::OSCE::Web::REST___c__DisplayClass10_0* __4__this, ::System::Threading::CancellationToken cancelToken,
                                                          ::System::Net::Http::HttpClient* _client_5__2, ::System::Net::Http::StringContent* _httpContent_5__3, ::System::Uri* _uri_5__4,
                                                          ::System::Net::Http::HttpResponseMessage* _result_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Uri*> __u__1,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__2,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21699 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::OSCE::Web::REST___c__DisplayClass10_0* __4__this;

  /// @brief Field cancelToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancelToken;

  /// @brief Field <client>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Http::HttpClient* _client_5__2;

  /// @brief Field <httpContent>5__3, offset: 0x38, size: 0x8, def value: None
  ::System::Net::Http::StringContent* _httpContent_5__3;

  /// @brief Field <uri>5__4, offset: 0x40, size: 0x8, def value: None
  ::System::Uri* _uri_5__4;

  /// @brief Field <result>5__5, offset: 0x48, size: 0x8, def value: None
  ::System::Net::Http::HttpResponseMessage* _result_5__5;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Uri*> __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__2;

  /// @brief Field <>u__3, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d, cancelToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d, _client_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d, _httpContent_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d, _uri_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d, _result_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d, __u__2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d, __u__3) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d, 0x68>, "Size mismatch!");

} // namespace OSCE::Web
// Dependencies System.Object
namespace OSCE::Web {
// Is value type: false
// CS Name: OSCE.Web.REST/<>c__DisplayClass10_0
class CORDL_TYPE REST___c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  using __PostAsync_b__0_d = ::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d;

  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::OSCE::Web::REST* __4__this;

  /// @brief Field auth, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_auth, put = __cordl_internal_set_auth)) ::StringW auth;

  /// @brief Field json, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_json, put = __cordl_internal_set_json)) ::StringW json;

  /// @brief Field path, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_path, put = __cordl_internal_set_path)) ::StringW path;

  /// @brief Field queryParams, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_queryParams, put = __cordl_internal_set_queryParams)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* queryParams;

  /// @brief Field response, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_response, put = __cordl_internal_set_response)) ::StringW response;

  static inline ::OSCE::Web::REST___c__DisplayClass10_0* New_ctor();

  /// @brief Method <PostAsync>b__0, addr 0x5d894fc, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _PostAsync_b__0(::System::Threading::CancellationToken cancelToken);

  constexpr ::OSCE::Web::REST* const& __cordl_internal_get___4__this() const;

  constexpr ::OSCE::Web::REST*& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_auth() const;

  constexpr ::StringW& __cordl_internal_get_auth();

  constexpr ::StringW const& __cordl_internal_get_json() const;

  constexpr ::StringW& __cordl_internal_get_json();

  constexpr ::StringW const& __cordl_internal_get_path() const;

  constexpr ::StringW& __cordl_internal_get_path();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* const& __cordl_internal_get_queryParams() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get_queryParams();

  constexpr ::StringW const& __cordl_internal_get_response() const;

  constexpr ::StringW& __cordl_internal_get_response();

  constexpr void __cordl_internal_set___4__this(::OSCE::Web::REST* value);

  constexpr void __cordl_internal_set_auth(::StringW value);

  constexpr void __cordl_internal_set_json(::StringW value);

  constexpr void __cordl_internal_set_path(::StringW value);

  constexpr void __cordl_internal_set_queryParams(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_response(::StringW value);

  /// @brief Method .ctor, addr 0x5d894f8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr REST___c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "REST___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  REST___c__DisplayClass10_0(REST___c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "REST___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  REST___c__DisplayClass10_0(REST___c__DisplayClass10_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21700 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::OSCE::Web::REST* _____4__this;

  /// @brief Field json, offset: 0x18, size: 0x8, def value: None
  ::StringW ___json;

  /// @brief Field path, offset: 0x20, size: 0x8, def value: None
  ::StringW ___path;

  /// @brief Field auth, offset: 0x28, size: 0x8, def value: None
  ::StringW ___auth;

  /// @brief Field queryParams, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ___queryParams;

  /// @brief Field response, offset: 0x38, size: 0x8, def value: None
  ::StringW ___response;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Web::REST___c__DisplayClass10_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST___c__DisplayClass10_0, ___json) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST___c__DisplayClass10_0, ___path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST___c__DisplayClass10_0, ___auth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST___c__DisplayClass10_0, ___queryParams) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST___c__DisplayClass10_0, ___response) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Web::REST___c__DisplayClass10_0, 0x40>, "Size mismatch!");

} // namespace OSCE::Web
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OSCE::Web {
// Is value type: true
// CS Name: OSCE.Web.REST/<BuildQueryString>d__12
struct CORDL_TYPE REST__BuildQueryString_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d89d90, size 0x314, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d8a0a4, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr REST__BuildQueryString_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "query", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None }, CppParam { name: "isFirstParameter", ty: "bool", modifiers: "", def_value: None }, CppParam
  // { name: "__7__wrap1", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr REST__BuildQueryString_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                         ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* query, bool isFirstParameter, ::StringW __7__wrap1, ::StringW __7__wrap2,
                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21701 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field query, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* query;

  /// @brief Field isFirstParameter, offset: 0x28, size: 0x1, def value: None
  bool isFirstParameter;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::StringW __7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x38, size: 0x8, def value: None
  ::StringW __7__wrap2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Web::REST__BuildQueryString_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__BuildQueryString_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__BuildQueryString_d__12, query) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__BuildQueryString_d__12, isFirstParameter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__BuildQueryString_d__12, __7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__BuildQueryString_d__12, __7__wrap2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__BuildQueryString_d__12, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Web::REST__BuildQueryString_d__12, 0x48>, "Size mismatch!");

} // namespace OSCE::Web
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OSCE::Web {
// Is value type: true
// CS Name: OSCE.Web.REST/<BuildUri>d__11
struct CORDL_TYPE REST__BuildUri_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d8a124, size 0x418, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d8a580, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr REST__BuildUri_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Uri*>", modifiers: "", def_value: None }, CppParam { name: "auth", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "query", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "__7__wrap1", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr REST__BuildUri_d__11(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Uri*> __t__builder, ::StringW auth,
                                 ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* query, ::StringW path, ::StringW __7__wrap1,
                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21702 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Uri*> __t__builder;

  /// @brief Field auth, offset: 0x20, size: 0x8, def value: None
  ::StringW auth;

  /// @brief Field query, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* query;

  /// @brief Field path, offset: 0x30, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::StringW __7__wrap1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Web::REST__BuildUri_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__BuildUri_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__BuildUri_d__11, auth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__BuildUri_d__11, query) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__BuildUri_d__11, path) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__BuildUri_d__11, __7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__BuildUri_d__11, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Web::REST__BuildUri_d__11, 0x48>, "Size mismatch!");

} // namespace OSCE::Web
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace OSCE::Web {
// Is value type: true
// CS Name: OSCE.Web.REST/<PostAsync>d__10
struct CORDL_TYPE REST__PostAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d8a600, size 0x474, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d8aa74, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr REST__PostAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::OSCE::Web::REST*", modifiers: "", def_value:
  // None }, CppParam { name: "json", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "auth", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "queryParams", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None }, CppParam
  // { name: "attempts", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancel", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name:
  // "__8__1", ty: "::OSCE::Web::REST___c__DisplayClass10_0*", modifiers: "", def_value: None }, CppParam { name: "batchToSend", ty: "::OSCE::Analytics::LoggerAnalyticsBatch*", modifiers: "",
  // def_value: None }, CppParam { name: "onFail", ty: "::System::Action_2<::System::Exception*,::OSCE::Web::FailedPostRequest>*", modifiers: "", def_value: None }, CppParam { name: "onSucceed", ty:
  // "::System::Action_2<::StringW,::OSCE::Analytics::LoggerAnalyticsBatch*>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr REST__PostAsync_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::OSCE::Web::REST* __4__this, ::StringW json,
                                  ::StringW path, ::StringW auth, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* queryParams, int32_t attempts,
                                  ::System::Threading::CancellationToken cancel, ::OSCE::Web::REST___c__DisplayClass10_0* __8__1, ::OSCE::Analytics::LoggerAnalyticsBatch* batchToSend,
                                  ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail, ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed,
                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21703 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::OSCE::Web::REST* __4__this;

  /// @brief Field json, offset: 0x28, size: 0x8, def value: None
  ::StringW json;

  /// @brief Field path, offset: 0x30, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field auth, offset: 0x38, size: 0x8, def value: None
  ::StringW auth;

  /// @brief Field queryParams, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* queryParams;

  /// @brief Field attempts, offset: 0x48, size: 0x4, def value: None
  int32_t attempts;

  /// @brief Field cancel, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancel;

  /// @brief Field <>8__1, offset: 0x58, size: 0x8, def value: None
  ::OSCE::Web::REST___c__DisplayClass10_0* __8__1;

  /// @brief Field batchToSend, offset: 0x60, size: 0x8, def value: None
  ::OSCE::Analytics::LoggerAnalyticsBatch* batchToSend;

  /// @brief Field onFail, offset: 0x68, size: 0x8, def value: None
  ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail;

  /// @brief Field onSucceed, offset: 0x70, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed;

  /// @brief Field <>u__1, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Web::REST__PostAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostAsync_d__10, json) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostAsync_d__10, path) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostAsync_d__10, auth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostAsync_d__10, queryParams) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostAsync_d__10, attempts) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostAsync_d__10, cancel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostAsync_d__10, __8__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostAsync_d__10, batchToSend) == 0x60, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostAsync_d__10, onFail) == 0x68, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostAsync_d__10, onSucceed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostAsync_d__10, __u__1) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Web::REST__PostAsync_d__10, 0x80>, "Size mismatch!");

} // namespace OSCE::Web
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OSCE::Web {
// Is value type: true
// CS Name: OSCE.Web.REST/<PostRequest>d__7
struct CORDL_TYPE REST__PostRequest_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d8aaf4, size 0x2a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d8ad98, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr REST__PostRequest_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "authToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "json", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "batchToSend", ty:
  // "::OSCE::Analytics::LoggerAnalyticsBatch*", modifiers: "", def_value: None }, CppParam { name: "onSucceed", ty: "::System::Action_2<::StringW,::OSCE::Analytics::LoggerAnalyticsBatch*>*",
  // modifiers: "", def_value: None }, CppParam { name: "onFail", ty: "::System::Action_2<::System::Exception*,::OSCE::Web::FailedPostRequest>*", modifiers: "", def_value: None }, CppParam { name:
  // "attempts", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "queryParams", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr REST__PostRequest_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW path, ::StringW authToken, ::StringW json,
                                   ::OSCE::Analytics::LoggerAnalyticsBatch* batchToSend, ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed,
                                   ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail, int32_t attempts,
                                   ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* queryParams, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21704 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field path, offset: 0x28, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field authToken, offset: 0x30, size: 0x8, def value: None
  ::StringW authToken;

  /// @brief Field json, offset: 0x38, size: 0x8, def value: None
  ::StringW json;

  /// @brief Field batchToSend, offset: 0x40, size: 0x8, def value: None
  ::OSCE::Analytics::LoggerAnalyticsBatch* batchToSend;

  /// @brief Field onSucceed, offset: 0x48, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed;

  /// @brief Field onFail, offset: 0x50, size: 0x8, def value: None
  ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail;

  /// @brief Field attempts, offset: 0x58, size: 0x4, def value: None
  int32_t attempts;

  /// @brief Field queryParams, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* queryParams;

  /// @brief Field <>u__1, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Web::REST__PostRequest_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostRequest_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostRequest_d__7, path) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostRequest_d__7, authToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostRequest_d__7, json) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostRequest_d__7, batchToSend) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostRequest_d__7, onSucceed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostRequest_d__7, onFail) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostRequest_d__7, attempts) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostRequest_d__7, queryParams) == 0x60, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST__PostRequest_d__7, __u__1) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Web::REST__PostRequest_d__7, 0x70>, "Size mismatch!");

} // namespace OSCE::Web
// Dependencies System.Object
namespace OSCE::Web {
// Is value type: false
// CS Name: OSCE.Web.REST
class CORDL_TYPE REST : public ::System::Object {
public:
  // Declarations
  using _BuildQueryString_d__12 = ::OSCE::Web::REST__BuildQueryString_d__12;

  using _BuildUri_d__11 = ::OSCE::Web::REST__BuildUri_d__11;

  using _PostAsync_d__10 = ::OSCE::Web::REST__PostAsync_d__10;

  using _PostRequest_d__7 = ::OSCE::Web::REST__PostRequest_d__7;

  using __c__DisplayClass10_0 = ::OSCE::Web::REST___c__DisplayClass10_0;

  /// @brief Field _handler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__handler, put = __cordl_internal_set__handler)) ::System::Net::Http::HttpClientHandler* _handler;

  /// @brief Field _lock, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lock, put = __cordl_internal_set__lock)) ::System::Object* _lock;

  /// @brief Field _oculusUriBuilder, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__oculusUriBuilder, put = setStaticF__oculusUriBuilder)) ::System::UriBuilder* _oculusUriBuilder;

  /// @brief Field _singleton, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__singleton, put = setStaticF__singleton)) ::OSCE::Web::REST* _singleton;

  /// @brief Field _timer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__timer, put = __cordl_internal_set__timer)) ::System::Diagnostics::Stopwatch* _timer;

  /// @brief Method BuildQueryString, addr 0x5d893a8, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::StringW>* BuildQueryString(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* query, bool isFirstParameter);

  /// @brief Method BuildUri, addr 0x5d892b4, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Uri*>* BuildUri(::StringW path, ::StringW auth, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* query);

  /// @brief Method CreateClient, addr 0x5d88f6c, size 0x74, virtual false, abstract: false, final false
  inline ::System::Net::Http::HttpClient* CreateClient();

  /// @brief Method GetHandler, addr 0x5d88fe0, size 0x194, virtual false, abstract: false, final false
  inline ::System::Net::Http::HttpClientHandler* GetHandler();

  static inline ::OSCE::Web::REST* New_ctor();

  /// @brief Method PostAsync, addr 0x5d89174, size 0x140, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* PostAsync(::StringW path, ::StringW auth, ::StringW json, ::OSCE::Analytics::LoggerAnalyticsBatch* batchToSend,
                                                                  ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed,
                                                                  ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail, ::System::Threading::CancellationToken cancel,
                                                                  int32_t attempts, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* queryParams);

  /// @brief Method PostRequest, addr 0x5d88cac, size 0xf4, virtual false, abstract: false, final false
  static inline void PostRequest(::StringW path, ::StringW authToken, ::StringW json, ::OSCE::Analytics::LoggerAnalyticsBatch* batchToSend,
                                 ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed, ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail,
                                 int32_t attempts, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* queryParams);

  constexpr ::System::Net::Http::HttpClientHandler* const& __cordl_internal_get__handler() const;

  constexpr ::System::Net::Http::HttpClientHandler*& __cordl_internal_get__handler();

  constexpr ::System::Object* const& __cordl_internal_get__lock() const;

  constexpr ::System::Object*& __cordl_internal_get__lock();

  constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__timer() const;

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__timer();

  constexpr void __cordl_internal_set__handler(::System::Net::Http::HttpClientHandler* value);

  constexpr void __cordl_internal_set__lock(::System::Object* value);

  constexpr void __cordl_internal_set__timer(::System::Diagnostics::Stopwatch* value);

  /// @brief Method .ctor, addr 0x5d88eb8, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::UriBuilder* getStaticF__oculusUriBuilder();

  static inline ::OSCE::Web::REST* getStaticF__singleton();

  static inline void setStaticF__oculusUriBuilder(::System::UriBuilder* value);

  static inline void setStaticF__singleton(::OSCE::Web::REST* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr REST();

public:
  // Ctor Parameters [CppParam { name: "", ty: "REST", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  REST(REST&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "REST", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  REST(REST const&) = delete;

  /// @brief Field EXPIRE_SECONDS offset 0xffffffff size 0x4
  static constexpr int32_t EXPIRE_SECONDS{ static_cast<int32_t>(0x78) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21705 };

  /// @brief Field _handler, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Http::HttpClientHandler* ____handler;

  /// @brief Field _timer, offset: 0x18, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ____timer;

  /// @brief Field _lock, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____lock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Web::REST, ____handler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST, ____timer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::REST, ____lock) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Web::REST, 0x28>, "Size mismatch!");

} // namespace OSCE::Web
NEED_NO_BOX(::OSCE::Web::REST);
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Web::REST*, "OSCE.Web", "REST");
NEED_NO_BOX(::OSCE::Web::REST___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Web::REST___c__DisplayClass10_0*, "OSCE.Web", "REST/<>c__DisplayClass10_0");
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Web::REST__BuildQueryString_d__12, "OSCE.Web", "REST/<BuildQueryString>d__12");
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Web::REST__BuildUri_d__11, "OSCE.Web", "REST/<BuildUri>d__11");
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Web::REST__PostAsync_d__10, "OSCE.Web", "REST/<PostAsync>d__10");
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Web::REST__PostRequest_d__7, "OSCE.Web", "REST/<PostRequest>d__7");
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d, "OSCE.Web", "REST/<>c__DisplayClass10_0/<<PostAsync>b__0>d");
