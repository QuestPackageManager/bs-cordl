#pragma once
// IWYU pragma private; include "GlobalNamespace/GraphAPIClient.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GraphAPIClient_def.hpp"
#include "GlobalNamespace/zzzz__GraphAPIClient_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__UriBuilder_def.hpp"
#include "System/zzzz__Uri_def.hpp"
// Ctor Parameters [CppParam { name: "MaxRetries", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MinWaitTimeForRetryMs", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "WithExponentialBackoff", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GraphAPIClient_PostOptions::GraphAPIClient_PostOptions(int32_t MaxRetries, int32_t MinWaitTimeForRetryMs, bool WithExponentialBackoff) noexcept {
  this->MaxRetries = MaxRetries;
  this->MinWaitTimeForRetryMs = MinWaitTimeForRetryMs;
  this->WithExponentialBackoff = WithExponentialBackoff;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GraphAPIClient_PostOptions::GraphAPIClient_PostOptions() {}
template <typename TRequest, typename TResponse> inline void GlobalNamespace::GraphAPIClient__Post_d__4_2<TRequest, TResponse>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient__Post_d__4_2<TRequest, TResponse>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TRequest, typename TResponse>
inline void GlobalNamespace::GraphAPIClient__Post_d__4_2<TRequest, TResponse>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient__Post_d__4_2<TRequest, TResponse>>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TRequest, typename TResponse> constexpr GlobalNamespace::GraphAPIClient__Post_d__4_2<TRequest, TResponse>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TRequest, typename TResponse>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::GraphAPIClient__Post_d__4_2<TRequest, TResponse>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GraphAPIClient*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "request", ty: "TRequest", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "postOptions", ty: "::GlobalNamespace::GraphAPIClient_PostOptions", modifiers: "", def_value: Some("{}") }, CppParam { name: "_uriBuilder_5__2", ty:
// "::System::UriBuilder*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_httpContent_5__3", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_numAttempts_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
template <typename TRequest, typename TResponse>
constexpr ::GlobalNamespace::GraphAPIClient__Post_d__4_2<TRequest, TResponse>::GraphAPIClient__Post_d__4_2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> __t__builder, ::GlobalNamespace::GraphAPIClient* __4__this, ::StringW path, TRequest request,
    ::StringW accessToken, ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::GraphAPIClient_PostOptions postOptions, ::System::UriBuilder* _uriBuilder_5__2,
    ::System::Net::Http::HttpContent* _httpContent_5__3, int32_t _numAttempts_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->path = path;
  this->request = request;
  this->accessToken = accessToken;
  this->cancellationToken = cancellationToken;
  this->postOptions = postOptions;
  this->_uriBuilder_5__2 = _uriBuilder_5__2;
  this->_httpContent_5__3 = _httpContent_5__3;
  this->_numAttempts_5__4 = _numAttempts_5__4;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
template <typename TRequest, typename TResponse> constexpr ::GlobalNamespace::GraphAPIClient__Post_d__4_2<TRequest, TResponse>::GraphAPIClient__Post_d__4_2() {}
template <typename TResponse> inline void GlobalNamespace::GraphAPIClient__Post_d__5_1<TResponse>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient__Post_d__5_1<TResponse>>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResponse> inline void GlobalNamespace::GraphAPIClient__Post_d__5_1<TResponse>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient__Post_d__5_1<TResponse>>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TResponse> constexpr GlobalNamespace::GraphAPIClient__Post_d__5_1<TResponse>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TResponse>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::GraphAPIClient__Post_d__5_1<TResponse>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "httpContent", ty: "::System::Net::Http::HttpContent*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GraphAPIClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_requestMessage_5__2", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
template <typename TResponse>
constexpr ::GlobalNamespace::GraphAPIClient__Post_d__5_1<TResponse>::GraphAPIClient__Post_d__5_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> __t__builder, ::System::Uri* uri, ::StringW accessToken, ::System::Net::Http::HttpContent* httpContent,
    ::GlobalNamespace::GraphAPIClient* __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Net::Http::HttpRequestMessage* _requestMessage_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->uri = uri;
  this->accessToken = accessToken;
  this->httpContent = httpContent;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_requestMessage_5__2 = _requestMessage_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
template <typename TResponse> constexpr ::GlobalNamespace::GraphAPIClient__Post_d__5_1<TResponse>::GraphAPIClient__Post_d__5_1() {}
//  Writing Method size for method: ::GlobalNamespace::GraphAPIClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GraphAPIClient::*)(::GlobalNamespace::INetworkConfig*)>(
    &::GlobalNamespace::GraphAPIClient::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x22c80ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GraphAPIClient.CalculateDelayMsBeforeRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::GlobalNamespace::GraphAPIClient_PostOptions)>(
    &::GlobalNamespace::GraphAPIClient::CalculateDelayMsBeforeRetry)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x22c8160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient*>::get(), "CalculateDelayMsBeforeRetry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GraphAPIClient_PostOptions>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::INetworkConfig*& GlobalNamespace::GraphAPIClient::__cordl_internal_get__networkConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr ::GlobalNamespace::INetworkConfig* const& GlobalNamespace::GraphAPIClient::__cordl_internal_get__networkConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr void GlobalNamespace::GraphAPIClient::__cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____networkConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Http::HttpClient*& GlobalNamespace::GraphAPIClient::__cordl_internal_get__client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr ::System::Net::Http::HttpClient* const& GlobalNamespace::GraphAPIClient::__cordl_internal_get__client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr void GlobalNamespace::GraphAPIClient::__cordl_internal_set__client(::System::Net::Http::HttpClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GraphAPIClient::_ctor(::GlobalNamespace::INetworkConfig* networkConfig) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, networkConfig);
}
template <typename TRequest, typename TResponse>
inline ::System::Threading::Tasks::Task_1<TResponse>* GlobalNamespace::GraphAPIClient::PostLoggedOut(::StringW path, TRequest request, ::GlobalNamespace::GraphAPIClient_PostOptions postOptions,
                                                                                                     ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient*>::get(), "PostLoggedOut",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRequest>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GraphAPIClient_PostOptions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResponse>*, false>(this, ___internal_method, path, request, postOptions, cancellationToken);
}
template <typename TRequest, typename TResponse>
inline ::System::Threading::Tasks::Task_1<TResponse>* GlobalNamespace::GraphAPIClient::Post(::StringW path, ::StringW accessToken, TRequest request,
                                                                                            ::GlobalNamespace::GraphAPIClient_PostOptions postOptions,
                                                                                            ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient*>::get(), "Post",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRequest>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GraphAPIClient_PostOptions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResponse>*, false>(this, ___internal_method, path, accessToken, request, postOptions, cancellationToken);
}
template <typename TResponse>
inline ::System::Threading::Tasks::Task_1<TResponse>* GlobalNamespace::GraphAPIClient::Post(::System::Uri* uri, ::StringW accessToken, ::System::Net::Http::HttpContent* httpContent,
                                                                                            ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient*>::get(), "Post",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResponse>*, false>(this, ___internal_method, uri, accessToken, httpContent, cancellationToken);
}
inline int32_t GlobalNamespace::GraphAPIClient::CalculateDelayMsBeforeRetry(int32_t numAttempts, ::GlobalNamespace::GraphAPIClient_PostOptions postOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient*>::get(), "CalculateDelayMsBeforeRetry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GraphAPIClient_PostOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, numAttempts, postOptions);
}
inline ::GlobalNamespace::GraphAPIClient* GlobalNamespace::GraphAPIClient::New_ctor(::GlobalNamespace::INetworkConfig* networkConfig) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GraphAPIClient*>(networkConfig));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GraphAPIClient::GraphAPIClient() {}
