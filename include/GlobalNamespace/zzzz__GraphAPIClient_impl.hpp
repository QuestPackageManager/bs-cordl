#pragma once
#include "System/Net/Http/zzzz__HttpResponseMessage_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GraphAPIClient_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__GraphAPIClient_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TRequest, typename TResponse> constexpr GlobalNamespace::__GraphAPIClient___Post_d__4_2<TRequest, TResponse>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TRequest, typename TResponse> inline void GlobalNamespace::__GraphAPIClient___Post_d__4_2<TRequest, TResponse>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GraphAPIClient___Post_d__4_2<TRequest, TResponse>>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TRequest, typename TResponse>
inline void GlobalNamespace::__GraphAPIClient___Post_d__4_2<TRequest, TResponse>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GraphAPIClient___Post_d__4_2<TRequest, TResponse>>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GraphAPIClient*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "request", ty: "TRequest", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_requestMessage_5__2", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
template <typename TRequest, typename TResponse>
constexpr ::GlobalNamespace::__GraphAPIClient___Post_d__4_2<TRequest, TResponse>::__GraphAPIClient___Post_d__4_2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> __t__builder, ::GlobalNamespace::GraphAPIClient* __4__this, ::StringW path, TRequest request,
    ::StringW accessToken, ::System::Threading::CancellationToken cancellationToken, ::System::Net::Http::HttpRequestMessage* _requestMessage_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->path = path;
  this->request = request;
  this->accessToken = accessToken;
  this->cancellationToken = cancellationToken;
  this->_requestMessage_5__2 = _requestMessage_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
template <typename TRequest, typename TResponse> constexpr ::GlobalNamespace::__GraphAPIClient___Post_d__4_2<TRequest, TResponse>::__GraphAPIClient___Post_d__4_2() {}
//  Writing Method size for method: ::GlobalNamespace::GraphAPIClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GraphAPIClient::*)(::GlobalNamespace::INetworkConfig*)>(
    &::GlobalNamespace::GraphAPIClient::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xdb7e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkConfig*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::INetworkConfig*& GlobalNamespace::GraphAPIClient::__get__networkConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> const& GlobalNamespace::GraphAPIClient::__get__networkConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr void GlobalNamespace::GraphAPIClient::__set__networkConfig(::GlobalNamespace::INetworkConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____networkConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Http::HttpClient*& GlobalNamespace::GraphAPIClient::__get__client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> const& GlobalNamespace::GraphAPIClient::__get__client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr void GlobalNamespace::GraphAPIClient::__set__client(::System::Net::Http::HttpClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::GraphAPIClient* GlobalNamespace::GraphAPIClient::New_ctor(::GlobalNamespace::INetworkConfig* networkConfig) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GraphAPIClient*>(networkConfig));
}
inline void GlobalNamespace::GraphAPIClient::_ctor(::GlobalNamespace::INetworkConfig* networkConfig) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, networkConfig);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename TRequest, typename TResponse>
inline ::System::Threading::Tasks::Task_1<TResponse>* GlobalNamespace::GraphAPIClient::PostLoggedOut(::StringW path, TRequest request, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient*>::get(), "PostLoggedOut",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRequest>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResponse>*, false>(this, ___internal_method, path, request, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename TRequest, typename TResponse>
inline ::System::Threading::Tasks::Task_1<TResponse>* GlobalNamespace::GraphAPIClient::Post(::StringW path, ::StringW accessToken, TRequest request,
                                                                                            ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient*>::get(), "Post",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRequest>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResponse>*, false>(this, ___internal_method, path, accessToken, request, cancellationToken);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GraphAPIClient::GraphAPIClient() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
