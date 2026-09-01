#pragma once
// IWYU pragma private; include "OSCE\Web\REST.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OSCE/Web/zzzz__REST_def.hpp"
#include "OSCE/Analytics/zzzz__LoggerAnalyticsBatch_def.hpp"
#include "OSCE/Web/zzzz__FailedPostRequest_def.hpp"
#include "OSCE/Web/zzzz__REST_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Net/Http/zzzz__HttpClientHandler_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Net/Http/zzzz__StringContent_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__UriBuilder_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d::*)()>(&::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0x760;
  constexpr static std::size_t addrs = 0x5f37cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f38418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OSCE::Web::REST___c__DisplayClass10_0*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancelToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_client_5__2", ty:
// "::System::Net::Http::HttpClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_httpContent_5__3", ty: "::System::Net::Http::StringContent*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_uri_5__4", ty: "::System::Uri*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_result_5__5", ty: "::System::Net::Http::HttpResponseMessage*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Uri*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d::__c__DisplayClass10_0_REST___PostAsync_b__0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::OSCE::Web::REST___c__DisplayClass10_0* __4__this,
    ::System::Threading::CancellationToken cancelToken, ::System::Net::Http::HttpClient* _client_5__2, ::System::Net::Http::StringContent* _httpContent_5__3, ::System::Uri* _uri_5__4,
    ::System::Net::Http::HttpResponseMessage* _result_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Uri*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancelToken = cancelToken;
  this->_client_5__2 = _client_5__2;
  this->_httpContent_5__3 = _httpContent_5__3;
  this->_uri_5__4 = _uri_5__4;
  this->_result_5__5 = _result_5__5;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::OSCE::Web::__c__DisplayClass10_0_REST___PostAsync_b__0_d::__c__DisplayClass10_0_REST___PostAsync_b__0_d() {}
//  Writing Method size for method: ::OSCE::Web::REST___c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Web::REST___c__DisplayClass10_0::*)()>(&::OSCE::Web::REST___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f37bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::REST___c__DisplayClass10_0._PostAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::OSCE::Web::REST___c__DisplayClass10_0::*)(::System::Threading::CancellationToken)>(
    &::OSCE::Web::REST___c__DisplayClass10_0::_PostAsync_b__0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f37bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST___c__DisplayClass10_0*>(), { "<PostAsync>b__0", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
constexpr ::OSCE::Web::REST*& OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::OSCE::Web::REST* const& OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_set___4__this(::OSCE::Web::REST* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::StringW& OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_get_json() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___json;
}
constexpr ::StringW const& OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_get_json() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___json;
}
constexpr void OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_set_json(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___json = value;
}
constexpr ::StringW& OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_get_path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___path;
}
constexpr ::StringW const& OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_get_path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___path;
}
constexpr void OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_set_path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___path = value;
}
constexpr ::StringW& OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_get_auth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___auth;
}
constexpr ::StringW const& OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_get_auth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___auth;
}
constexpr void OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_set_auth(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___auth = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_get_queryParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queryParams;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* const& OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_get_queryParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queryParams;
}
constexpr void OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_set_queryParams(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___queryParams = value;
}
constexpr ::StringW& OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_get_response() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___response;
}
constexpr ::StringW const& OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_get_response() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___response;
}
constexpr void OSCE::Web::REST___c__DisplayClass10_0::__cordl_internal_set_response(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___response = value;
}
inline void OSCE::Web::REST___c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* OSCE::Web::REST___c__DisplayClass10_0::_PostAsync_b__0(::System::Threading::CancellationToken cancelToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST___c__DisplayClass10_0*>(), { "<PostAsync>b__0", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancelToken);
}
inline ::OSCE::Web::REST___c__DisplayClass10_0* OSCE::Web::REST___c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OSCE::Web::REST___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::OSCE::Web::REST___c__DisplayClass10_0::REST___c__DisplayClass10_0() {}
//  Writing Method size for method: ::OSCE::Web::REST__BuildQueryString_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Web::REST__BuildQueryString_d__12::*)()>(&::OSCE::Web::REST__BuildQueryString_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5f38484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST__BuildQueryString_d__12>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::REST__BuildQueryString_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Web::REST__BuildQueryString_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::OSCE::Web::REST__BuildQueryString_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f38798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST__BuildQueryString_d__12>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OSCE::Web::REST__BuildQueryString_d__12::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST__BuildQueryString_d__12>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OSCE::Web::REST__BuildQueryString_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST__BuildQueryString_d__12>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OSCE::Web::REST__BuildQueryString_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* OSCE::Web::REST__BuildQueryString_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "query", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "isFirstParameter", ty: "bool", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "__7__wrap1", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::OSCE::Web::REST__BuildQueryString_d__12::REST__BuildQueryString_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                                                  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* query, bool isFirstParameter,
                                                                                  ::StringW __7__wrap1, ::StringW __7__wrap2,
                                                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->query = query;
  this->isFirstParameter = isFirstParameter;
  this->__7__wrap1 = __7__wrap1;
  this->__7__wrap2 = __7__wrap2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OSCE::Web::REST__BuildQueryString_d__12::REST__BuildQueryString_d__12() {}
//  Writing Method size for method: ::OSCE::Web::REST__BuildUri_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Web::REST__BuildUri_d__11::*)()>(&::OSCE::Web::REST__BuildUri_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x5f38818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST__BuildUri_d__11>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::REST__BuildUri_d__11.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Web::REST__BuildUri_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::OSCE::Web::REST__BuildUri_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f38c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST__BuildUri_d__11>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OSCE::Web::REST__BuildUri_d__11::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST__BuildUri_d__11>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OSCE::Web::REST__BuildUri_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST__BuildUri_d__11>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OSCE::Web::REST__BuildUri_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* OSCE::Web::REST__BuildUri_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Uri*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "auth", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "query", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::OSCE::Web::REST__BuildUri_d__11::REST__BuildUri_d__11(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Uri*> __t__builder, ::StringW auth,
                                                                  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* query, ::StringW path, ::StringW __7__wrap1,
                                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->auth = auth;
  this->query = query;
  this->path = path;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OSCE::Web::REST__BuildUri_d__11::REST__BuildUri_d__11() {}
//  Writing Method size for method: ::OSCE::Web::REST__PostAsync_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Web::REST__PostAsync_d__10::*)()>(&::OSCE::Web::REST__PostAsync_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x5f38cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST__PostAsync_d__10>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::REST__PostAsync_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Web::REST__PostAsync_d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::OSCE::Web::REST__PostAsync_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f39168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST__PostAsync_d__10>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OSCE::Web::REST__PostAsync_d__10::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST__PostAsync_d__10>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OSCE::Web::REST__PostAsync_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST__PostAsync_d__10>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OSCE::Web::REST__PostAsync_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* OSCE::Web::REST__PostAsync_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OSCE::Web::REST*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "json", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "auth", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "queryParams", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "attempts", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancel", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__8__1", ty: "::OSCE::Web::REST___c__DisplayClass10_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchToSend", ty:
// "::OSCE::Analytics::LoggerAnalyticsBatch*", modifiers: "", def_value: Some("{}") }, CppParam { name: "onFail", ty: "::System::Action_2<::System::Exception*,::OSCE::Web::FailedPostRequest>*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "onSucceed", ty: "::System::Action_2<::StringW,::OSCE::Analytics::LoggerAnalyticsBatch*>*", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::OSCE::Web::REST__PostAsync_d__10::REST__PostAsync_d__10(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::OSCE::Web::REST* __4__this, ::StringW json, ::StringW path, ::StringW auth,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* queryParams, int32_t attempts, ::System::Threading::CancellationToken cancel, ::OSCE::Web::REST___c__DisplayClass10_0* __8__1,
    ::OSCE::Analytics::LoggerAnalyticsBatch* batchToSend, ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail,
    ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->json = json;
  this->path = path;
  this->auth = auth;
  this->queryParams = queryParams;
  this->attempts = attempts;
  this->cancel = cancel;
  this->__8__1 = __8__1;
  this->batchToSend = batchToSend;
  this->onFail = onFail;
  this->onSucceed = onSucceed;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OSCE::Web::REST__PostAsync_d__10::REST__PostAsync_d__10() {}
//  Writing Method size for method: ::OSCE::Web::REST__PostRequest_d__7.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Web::REST__PostRequest_d__7::*)()>(&::OSCE::Web::REST__PostRequest_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5f391e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST__PostRequest_d__7>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::REST__PostRequest_d__7.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Web::REST__PostRequest_d__7::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::OSCE::Web::REST__PostRequest_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3948c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST__PostRequest_d__7>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OSCE::Web::REST__PostRequest_d__7::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST__PostRequest_d__7>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OSCE::Web::REST__PostRequest_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST__PostRequest_d__7>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OSCE::Web::REST__PostRequest_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* OSCE::Web::REST__PostRequest_d__7::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "authToken", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "json", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchToSend", ty:
// "::OSCE::Analytics::LoggerAnalyticsBatch*", modifiers: "", def_value: Some("{}") }, CppParam { name: "onSucceed", ty: "::System::Action_2<::StringW,::OSCE::Analytics::LoggerAnalyticsBatch*>*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "onFail", ty: "::System::Action_2<::System::Exception*,::OSCE::Web::FailedPostRequest>*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "attempts", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "queryParams", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::OSCE::Web::REST__PostRequest_d__7::REST__PostRequest_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW path, ::StringW authToken,
                                                                      ::StringW json, ::OSCE::Analytics::LoggerAnalyticsBatch* batchToSend,
                                                                      ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed,
                                                                      ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail, int32_t attempts,
                                                                      ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* queryParams,
                                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->path = path;
  this->authToken = authToken;
  this->json = json;
  this->batchToSend = batchToSend;
  this->onSucceed = onSucceed;
  this->onFail = onFail;
  this->attempts = attempts;
  this->queryParams = queryParams;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OSCE::Web::REST__PostRequest_d__7::REST__PostRequest_d__7() {}
//  Writing Method size for method: ::OSCE::Web::REST._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Web::REST::*)()>(&::OSCE::Web::REST::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f375ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::REST.PostRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::StringW, ::StringW, ::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*, ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*,
    ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*, int32_t, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&::OSCE::Web::REST::PostRequest)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f373a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST*>(),
                                                { "PostRequest",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(),
                                                    ::i2c::type_of<::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*>(),
                                                    ::i2c::type_of<::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::REST.CreateClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::HttpClient* (::OSCE::Web::REST::*)()>(&::OSCE::Web::REST::CreateClient)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f37660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST*>(), { "CreateClient", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::REST.GetHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::HttpClientHandler* (::OSCE::Web::REST::*)()>(&::OSCE::Web::REST::GetHandler)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5f376d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST*>(), { "GetHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::REST.PostAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (
    ::OSCE::Web::REST::*)(::StringW, ::StringW, ::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*, ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*,
                          ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*, ::System::Threading::CancellationToken, int32_t,
                          ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&::OSCE::Web::REST::PostAsync)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5f37868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST*>(),
                                         { "PostAsync",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(),
                                             ::i2c::type_of<::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*>(),
                                             ::i2c::type_of<::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::REST.BuildUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Uri*>* (
    ::OSCE::Web::REST::*)(::StringW, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&::OSCE::Web::REST::BuildUri)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f379a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST*>(),
                            { "BuildUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::REST.BuildQueryString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (*)(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, bool)>(
    &::OSCE::Web::REST::BuildQueryString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f37a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST*>(),
                                                { "BuildQueryString", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Http::HttpClientHandler*& OSCE::Web::REST::__cordl_internal_get__handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr ::System::Net::Http::HttpClientHandler* const& OSCE::Web::REST::__cordl_internal_get__handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr void OSCE::Web::REST::__cordl_internal_set__handler(::System::Net::Http::HttpClientHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handler = value;
}
constexpr ::System::Diagnostics::Stopwatch*& OSCE::Web::REST::__cordl_internal_get__timer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timer;
}
constexpr ::System::Diagnostics::Stopwatch* const& OSCE::Web::REST::__cordl_internal_get__timer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timer;
}
constexpr void OSCE::Web::REST::__cordl_internal_set__timer(::System::Diagnostics::Stopwatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timer = value;
}
constexpr ::System::Object*& OSCE::Web::REST::__cordl_internal_get__lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
constexpr ::System::Object* const& OSCE::Web::REST::__cordl_internal_get__lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
constexpr void OSCE::Web::REST::__cordl_internal_set__lock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lock = value;
}
inline void OSCE::Web::REST::setStaticF__singleton(::OSCE::Web::REST* value) {
  ::cordl_internals::setStaticField<::OSCE::Web::REST*, "_singleton", ::OSCE::Web::REST*>(std::forward<::OSCE::Web::REST*>(value));
}
inline ::OSCE::Web::REST* OSCE::Web::REST::getStaticF__singleton() {
  return ::cordl_internals::getStaticField<::OSCE::Web::REST*, "_singleton", ::OSCE::Web::REST*>();
}
inline void OSCE::Web::REST::setStaticF__oculusUriBuilder(::System::UriBuilder* value) {
  ::cordl_internals::setStaticField<::System::UriBuilder*, "_oculusUriBuilder", ::OSCE::Web::REST*>(std::forward<::System::UriBuilder*>(value));
}
inline ::System::UriBuilder* OSCE::Web::REST::getStaticF__oculusUriBuilder() {
  return ::cordl_internals::getStaticField<::System::UriBuilder*, "_oculusUriBuilder", ::OSCE::Web::REST*>();
}
inline void OSCE::Web::REST::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OSCE::Web::REST::PostRequest(::StringW path, ::StringW authToken, ::StringW json, ::OSCE::Analytics::LoggerAnalyticsBatch* batchToSend,
                                         ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed,
                                         ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail, int32_t attempts,
                                         ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* queryParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST*>(),
                                              { "PostRequest",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(),
                                                  ::i2c::type_of<::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*>(),
                                                  ::i2c::type_of<::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, authToken, json, batchToSend, onSucceed, onFail, attempts, queryParams);
}
inline ::System::Net::Http::HttpClient* OSCE::Web::REST::CreateClient() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST*>(), { "CreateClient", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpClient*>(this, ___internal_method);
}
inline ::System::Net::Http::HttpClientHandler* OSCE::Web::REST::GetHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST*>(), { "GetHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpClientHandler*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* OSCE::Web::REST::PostAsync(::StringW path, ::StringW auth, ::StringW json, ::OSCE::Analytics::LoggerAnalyticsBatch* batchToSend,
                                                                                 ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed,
                                                                                 ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail,
                                                                                 ::System::Threading::CancellationToken cancel, int32_t attempts,
                                                                                 ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* queryParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST*>(),
                                              { "PostAsync",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(),
                                                  ::i2c::type_of<::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*>(),
                                                  ::i2c::type_of<::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, path, auth, json, batchToSend, onSucceed, onFail, cancel, attempts, queryParams);
}
inline ::System::Threading::Tasks::Task_1<::System::Uri*>* OSCE::Web::REST::BuildUri(::StringW path, ::StringW auth, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* query) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST*>(),
                          { "BuildUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Uri*>*>(this, ___internal_method, path, auth, query);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* OSCE::Web::REST::BuildQueryString(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* query, bool isFirstParameter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::REST*>(),
                                              { "BuildQueryString", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(nullptr, ___internal_method, query, isFirstParameter);
}
inline ::OSCE::Web::REST* OSCE::Web::REST::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OSCE::Web::REST*>());
}
// Ctor Parameters []
constexpr ::OSCE::Web::REST::REST() {}
