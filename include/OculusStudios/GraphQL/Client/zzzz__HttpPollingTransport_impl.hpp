#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/HttpPollingTransport.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__HttpPollingTransport_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLLiveQuery_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequest_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLResponseStream_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLResponse_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__HttpPollingTransport_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__HttpTransport_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__IGraphQLClientTransport_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MinimalMainThreadExecutor_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d78324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0._ExecuteAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0::_ExecuteAsync_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d78328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0*>::get(),
                                                 "<ExecuteAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::GraphQL::Client::GraphQLLiveQuery*& OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0::__cordl_internal_get_liveQuery() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___liveQuery;
}
constexpr ::OculusStudios::GraphQL::Client::GraphQLLiveQuery* const& OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0::__cordl_internal_get_liveQuery() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___liveQuery;
}
constexpr void OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0::__cordl_internal_set_liveQuery(::OculusStudios::GraphQL::Client::GraphQLLiveQuery* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___liveQuery)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0::_ExecuteAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0*>::get(),
                                               "<ExecuteAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0* OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0::HttpPollingTransport___c__DisplayClass12_0() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x5d78344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d78908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "graphQLRequest",
// ty: "::OculusStudios::GraphQL::Client::GraphQLRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::HttpPollingTransport*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "executor", ty: "::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__8__1", ty: "::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12::HttpPollingTransport__ExecuteAsync_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __t__builder,
    ::OculusStudios::GraphQL::Client::GraphQLRequest* graphQLRequest, ::OculusStudios::GraphQL::Client::HttpPollingTransport* __4__this,
    ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* executor, ::OculusStudios::GraphQL::Client::HttpPollingTransport___c__DisplayClass12_0* __8__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->graphQLRequest = graphQLRequest;
  this->__4__this = __4__this;
  this->executor = executor;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpPollingTransport__ExecuteAsync_d__12::HttpPollingTransport__ExecuteAsync_d__12() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x5d78988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d78de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "liveQuery", ty: "::OculusStudios::GraphQL::Client::GraphQLLiveQuery*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::HttpPollingTransport*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "operation", ty: "::OculusStudios::GraphQL::Client::GraphQLResponseStream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "executor", ty:
// "::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_httpTransport_5__2", ty:
// "::OculusStudios::GraphQL::Client::HttpTransport*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_lastResponse_5__3", ty: "::OculusStudios::GraphQL::Client::GraphQLResponse*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13::HttpPollingTransport__StartHttpPollingAsync_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::OculusStudios::GraphQL::Client::GraphQLLiveQuery* liveQuery,
    ::OculusStudios::GraphQL::Client::HttpPollingTransport* __4__this, ::OculusStudios::GraphQL::Client::GraphQLResponseStream* operation,
    ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* executor, ::OculusStudios::GraphQL::Client::HttpTransport* _httpTransport_5__2,
    ::OculusStudios::GraphQL::Client::GraphQLResponse* _lastResponse_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->liveQuery = liveQuery;
  this->__4__this = __4__this;
  this->operation = operation;
  this->executor = executor;
  this->_httpTransport_5__2 = _httpTransport_5__2;
  this->_lastResponse_5__3 = _lastResponse_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpPollingTransport__StartHttpPollingAsync_d__13::HttpPollingTransport__StartHttpPollingAsync_d__13() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPollingTransport.get_Endpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::GraphQL::Client::HttpPollingTransport::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPollingTransport::get_Endpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7801c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(),
                                                                               "get_Endpoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPollingTransport.set_Endpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPollingTransport::*)(::StringW)>(
    &::OculusStudios::GraphQL::Client::HttpPollingTransport::set_Endpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d78024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(), "set_Endpoint",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPollingTransport.get_AccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::GraphQL::Client::HttpPollingTransport::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPollingTransport::get_AccessToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7802c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(),
                                                                               "get_AccessToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPollingTransport.set_AccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPollingTransport::*)(::StringW)>(
    &::OculusStudios::GraphQL::Client::HttpPollingTransport::set_AccessToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d78034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(), "set_AccessToken",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPollingTransport.GetHttpTransport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::GraphQL::Client::HttpTransport* (
    ::OculusStudios::GraphQL::Client::HttpPollingTransport::*)(::StringW, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(
    &::OculusStudios::GraphQL::Client::HttpPollingTransport::GetHttpTransport)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d7803c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(), "GetHttpTransport", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPollingTransport.ExecuteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>* (
    ::OculusStudios::GraphQL::Client::HttpPollingTransport::*)(::OculusStudios::GraphQL::Client::GraphQLRequest*, ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*)>(
    &::OculusStudios::GraphQL::Client::HttpPollingTransport::ExecuteAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d780cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(), "ExecuteAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPollingTransport.StartHttpPollingAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPollingTransport::*)(
    ::OculusStudios::GraphQL::Client::GraphQLLiveQuery*, ::OculusStudios::GraphQL::Client::GraphQLResponseStream*, ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*)>(
    &::OculusStudios::GraphQL::Client::HttpPollingTransport::StartHttpPollingAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d781c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(), "StartHttpPollingAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLLiveQuery*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPollingTransport.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPollingTransport::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPollingTransport::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d78288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpPollingTransport._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::HttpPollingTransport::*)()>(
    &::OculusStudios::GraphQL::Client::HttpPollingTransport::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d7828c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& OculusStudios::GraphQL::Client::HttpPollingTransport::__cordl_internal_get__Endpoint_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Endpoint_k__BackingField;
}
constexpr ::StringW const& OculusStudios::GraphQL::Client::HttpPollingTransport::__cordl_internal_get__Endpoint_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Endpoint_k__BackingField;
}
constexpr void OculusStudios::GraphQL::Client::HttpPollingTransport::__cordl_internal_set__Endpoint_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Endpoint_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& OculusStudios::GraphQL::Client::HttpPollingTransport::__cordl_internal_get__AccessToken_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AccessToken_k__BackingField;
}
constexpr ::StringW const& OculusStudios::GraphQL::Client::HttpPollingTransport::__cordl_internal_get__AccessToken_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AccessToken_k__BackingField;
}
constexpr void OculusStudios::GraphQL::Client::HttpPollingTransport::__cordl_internal_set__AccessToken_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AccessToken_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& OculusStudios::GraphQL::Client::HttpPollingTransport::__cordl_internal_get_CustomAppHeaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomAppHeaders;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* const& OculusStudios::GraphQL::Client::HttpPollingTransport::__cordl_internal_get_CustomAppHeaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomAppHeaders;
}
constexpr void OculusStudios::GraphQL::Client::HttpPollingTransport::__cordl_internal_set_CustomAppHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CustomAppHeaders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::GraphQL::Client::HttpTransport*& OculusStudios::GraphQL::Client::HttpPollingTransport::__cordl_internal_get__httpTransport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____httpTransport;
}
constexpr ::OculusStudios::GraphQL::Client::HttpTransport* const& OculusStudios::GraphQL::Client::HttpPollingTransport::__cordl_internal_get__httpTransport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____httpTransport;
}
constexpr void OculusStudios::GraphQL::Client::HttpPollingTransport::__cordl_internal_set__httpTransport(::OculusStudios::GraphQL::Client::HttpTransport* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____httpTransport)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OculusStudios::GraphQL::Client::HttpPollingTransport::setStaticF_TOTAL_NUM_POLL_REQUESTS(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "TOTAL_NUM_POLL_REQUESTS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t OculusStudios::GraphQL::Client::HttpPollingTransport::getStaticF_TOTAL_NUM_POLL_REQUESTS() {
  return ::cordl_internals::getStaticField<int32_t, "TOTAL_NUM_POLL_REQUESTS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get>();
}
inline ::StringW OculusStudios::GraphQL::Client::HttpPollingTransport::get_Endpoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(),
                                                                             "get_Endpoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpPollingTransport::set_Endpoint(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(), "set_Endpoint",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW OculusStudios::GraphQL::Client::HttpPollingTransport::get_AccessToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(),
                                                                             "get_AccessToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpPollingTransport::set_AccessToken(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(), "set_AccessToken",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::OculusStudios::GraphQL::Client::HttpTransport*
OculusStudios::GraphQL::Client::HttpPollingTransport::GetHttpTransport(::StringW endpoint, ::StringW accessToken,
                                                                       ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* customAppHeaders) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(), "GetHttpTransport", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::Client::HttpTransport*, false>(this, ___internal_method, endpoint, accessToken, customAppHeaders);
}
inline ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>*
OculusStudios::GraphQL::Client::HttpPollingTransport::ExecuteAsync(::OculusStudios::GraphQL::Client::GraphQLRequest* graphQLRequest,
                                                                   ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* executor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(), "ExecuteAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>*, false>(this, ___internal_method, graphQLRequest, executor);
}
inline void OculusStudios::GraphQL::Client::HttpPollingTransport::StartHttpPollingAsync(::OculusStudios::GraphQL::Client::GraphQLLiveQuery* liveQuery,
                                                                                        ::OculusStudios::GraphQL::Client::GraphQLResponseStream* operation,
                                                                                        ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* executor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(), "StartHttpPollingAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLLiveQuery*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, liveQuery, operation, executor);
}
inline void OculusStudios::GraphQL::Client::HttpPollingTransport::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpPollingTransport::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::HttpPollingTransport*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::HttpPollingTransport* OculusStudios::GraphQL::Client::HttpPollingTransport::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::HttpPollingTransport*>());
}
/// @brief Convert operator to "::OculusStudios::GraphQL::Client::IGraphQLClientTransport"
constexpr OculusStudios::GraphQL::Client::HttpPollingTransport::operator ::OculusStudios::GraphQL::Client::IGraphQLClientTransport*() noexcept {
  return static_cast<::OculusStudios::GraphQL::Client::IGraphQLClientTransport*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::Client::IGraphQLClientTransport"
constexpr ::OculusStudios::GraphQL::Client::IGraphQLClientTransport* OculusStudios::GraphQL::Client::HttpPollingTransport::i___OculusStudios__GraphQL__Client__IGraphQLClientTransport() noexcept {
  return static_cast<::OculusStudios::GraphQL::Client::IGraphQLClientTransport*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OculusStudios::GraphQL::Client::HttpPollingTransport::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* OculusStudios::GraphQL::Client::HttpPollingTransport::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpPollingTransport::HttpPollingTransport() {}
