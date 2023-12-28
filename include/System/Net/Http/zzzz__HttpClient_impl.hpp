#pragma once
#include "System/Net/Http/zzzz__HttpCompletionOption_impl.hpp"
#include "System/Net/Http/zzzz__HttpMessageInvoker_impl.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpMessageHandler_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpRequestHeaders_def.hpp"
#include "System/Net/Http/zzzz__HttpCompletionOption_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
//  Writing Method size for method: ::System::Net::Http::__HttpClient___SendAsyncWorker_d__47.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::__HttpClient___SendAsyncWorker_d__47::*)()>(
    &::System::Net::Http::__HttpClient___SendAsyncWorker_d__47::MoveNext)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x283198c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::__HttpClient___SendAsyncWorker_d__47>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::__HttpClient___SendAsyncWorker_d__47.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::__HttpClient___SendAsyncWorker_d__47::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::Http::__HttpClient___SendAsyncWorker_d__47::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2831fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::__HttpClient___SendAsyncWorker_d__47>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::Http::__HttpClient___SendAsyncWorker_d__47::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Net::Http::__HttpClient___SendAsyncWorker_d__47::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::__HttpClient___SendAsyncWorker_d__47>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Http::__HttpClient___SendAsyncWorker_d__47::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::__HttpClient___SendAsyncWorker_d__47>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::System::Net::Http::HttpClient*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "request", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "completionOption", ty:
// "::System::Net::Http::HttpCompletionOption", modifiers: "", def_value: Some("{}") }, CppParam { name: "_lcts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_response_5__3", ty: "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::__HttpClient___SendAsyncWorker_d__47::__HttpClient___SendAsyncWorker_d__47(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*> __t__builder, ::System::Net::Http::HttpClient* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Net::Http::HttpRequestMessage* request, ::System::Net::Http::HttpCompletionOption completionOption,
    ::System::Threading::CancellationTokenSource* _lcts_5__2, ::System::Net::Http::HttpResponseMessage* _response_5__3,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->request = request;
  this->completionOption = completionOption;
  this->_lcts_5__2 = _lcts_5__2;
  this->_response_5__3 = _response_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::Http::__HttpClient___SendAsyncWorker_d__47::__HttpClient___SendAsyncWorker_d__47() {}
//  Writing Method size for method: ::System::Net::Http::__HttpClient___GetStringAsync_d__53.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::__HttpClient___GetStringAsync_d__53::*)()>(
    &::System::Net::Http::__HttpClient___GetStringAsync_d__53::MoveNext)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x2832004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::__HttpClient___GetStringAsync_d__53>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::__HttpClient___GetStringAsync_d__53.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::__HttpClient___GetStringAsync_d__53::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::Http::__HttpClient___GetStringAsync_d__53::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2832668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::__HttpClient___GetStringAsync_d__53>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::Http::__HttpClient___GetStringAsync_d__53::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Net::Http::__HttpClient___GetStringAsync_d__53::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::__HttpClient___GetStringAsync_d__53>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Http::__HttpClient___GetStringAsync_d__53::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::__HttpClient___GetStringAsync_d__53>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpClient*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "requestUri", ty: "::System::Uri*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_resp_5__2", ty:
// "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::__HttpClient___GetStringAsync_d__53::__HttpClient___GetStringAsync_d__53(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::System::Net::Http::HttpClient* __4__this, ::System::Uri* requestUri,
    ::System::Net::Http::HttpResponseMessage* _resp_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->requestUri = requestUri;
  this->_resp_5__2 = _resp_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::Http::__HttpClient___GetStringAsync_d__53::__HttpClient___GetStringAsync_d__53() {}
//  Writing Method size for method: ::System::Net::Http::HttpClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpClient::*)()>(&::System::Net::Http::HttpClient::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2830bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpMessageHandler*, bool)>(
    &::System::Net::Http::HttpClient::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2830c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMessageHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.get_MaxResponseContentBufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::Http::HttpClient::*)()>(&::System::Net::Http::HttpClient::get_MaxResponseContentBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2830d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(),
                                                                               "get_MaxResponseContentBufferSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.set_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpClient::*)(::System::TimeSpan)>(&::System::Net::Http::HttpClient::set_Timeout)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2830d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "set_Timeout", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpClient::*)(bool)>(&::System::Net::Http::HttpClient::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2830ebc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.GetAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpClient::*)(::System::Uri*, ::System::Net::Http::HttpCompletionOption)>(&::System::Net::Http::HttpClient::GetAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2830f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "GetAsync", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpCompletionOption>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.SendAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage*)>(&::System::Net::Http::HttpClient::SendAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x28310f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "SendAsync", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.SendAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage*, ::System::Net::Http::HttpCompletionOption)>(&::System::Net::Http::HttpClient::SendAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2831078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "SendAsync", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpCompletionOption>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.SendAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken)>(&::System::Net::Http::HttpClient::SendAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28313f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.SendAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage*, ::System::Net::Http::HttpCompletionOption, ::System::Threading::CancellationToken)>(
    &::System::Net::Http::HttpClient::SendAsync)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2831164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "SendAsync", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpCompletionOption>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.SendAsyncWorker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage*, ::System::Net::Http::HttpCompletionOption, ::System::Threading::CancellationToken)>(
    &::System::Net::Http::HttpClient::SendAsyncWorker)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x28316b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "SendAsyncWorker", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpCompletionOption>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.GetStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::System::Net::Http::HttpClient::*)(::System::Uri*)>(
    &::System::Net::Http::HttpClient::GetStringAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x28317d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "GetStringAsync", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.__n__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken)>(&::System::Net::Http::HttpClient::__n__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x283194c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "<>n__0", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Net::Http::HttpClient::__get_base_address() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___base_address;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& System::Net::Http::HttpClient::__get_base_address() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___base_address;
}
constexpr void System::Net::Http::HttpClient::__set_base_address(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___base_address)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& System::Net::Http::HttpClient::__get_cts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cts;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& System::Net::Http::HttpClient::__get_cts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cts;
}
constexpr void System::Net::Http::HttpClient::__set_cts(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::Http::HttpClient::__get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Net::Http::HttpClient::__get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Net::Http::HttpClient::__set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr ::System::Net::Http::Headers::HttpRequestHeaders*& System::Net::Http::HttpClient::__get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::HttpRequestHeaders*> const& System::Net::Http::HttpClient::__get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void System::Net::Http::HttpClient::__set_headers(::System::Net::Http::Headers::HttpRequestHeaders* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Net::Http::HttpClient::__get_buffer_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer_size;
}
constexpr int64_t const& System::Net::Http::HttpClient::__get_buffer_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer_size;
}
constexpr void System::Net::Http::HttpClient::__set_buffer_size(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer_size = value;
}
constexpr ::System::TimeSpan& System::Net::Http::HttpClient::__get_timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeout;
}
constexpr ::System::TimeSpan const& System::Net::Http::HttpClient::__get_timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeout;
}
constexpr void System::Net::Http::HttpClient::__set_timeout(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeout = value;
}
inline void System::Net::Http::HttpClient::setStaticF_TimeoutDefault(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "TimeoutDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get>(
      std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::Net::Http::HttpClient::getStaticF_TimeoutDefault() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "TimeoutDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get>();
}
inline ::System::Net::Http::HttpClient* System::Net::Http::HttpClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::HttpClient*>());
}
inline void System::Net::Http::HttpClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Http::HttpClient* System::Net::Http::HttpClient::New_ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::HttpClient*>(handler, disposeHandler));
}
inline void System::Net::Http::HttpClient::_ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMessageHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler, disposeHandler);
}
inline int64_t System::Net::Http::HttpClient::get_MaxResponseContentBufferSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(),
                                                                             "get_MaxResponseContentBufferSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void System::Net::Http::HttpClient::set_Timeout(::System::TimeSpan value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "set_Timeout", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Http::HttpClient::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "Dispose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::GetAsync(::System::Uri* requestUri,
                                                                                                                              ::System::Net::Http::HttpCompletionOption completionOption) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "GetAsync", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpCompletionOption>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*, false>(this, ___internal_method, requestUri, completionOption);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::SendAsync(::System::Net::Http::HttpRequestMessage* request) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "SendAsync", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*, false>(this, ___internal_method, request);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                                               ::System::Net::Http::HttpCompletionOption completionOption) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "SendAsync", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpCompletionOption>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*, false>(this, ___internal_method, request, completionOption);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                                               ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "SendAsync", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*, false>(this, ___internal_method, request, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                                               ::System::Net::Http::HttpCompletionOption completionOption,
                                                                                                                               ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "SendAsync", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpCompletionOption>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*, false>(this, ___internal_method, request, completionOption,
                                                                                                                                    cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::SendAsyncWorker(::System::Net::Http::HttpRequestMessage* request,
                                                                                                                                     ::System::Net::Http::HttpCompletionOption completionOption,
                                                                                                                                     ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "SendAsyncWorker", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpCompletionOption>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*, false>(this, ___internal_method, request, completionOption,
                                                                                                                                    cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* System::Net::Http::HttpClient::GetStringAsync(::System::Uri* requestUri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "GetStringAsync", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, requestUri);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::__n__0(::System::Net::Http::HttpRequestMessage* request,
                                                                                                                            ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient*>::get(), "<>n__0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*, false>(this, ___internal_method, request, cancellationToken);
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpClient::HttpClient() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
