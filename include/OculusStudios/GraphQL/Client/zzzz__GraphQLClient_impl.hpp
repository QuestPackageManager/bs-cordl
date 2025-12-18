#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLClient.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLClient_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLClient_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequest_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLResponseStream_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__IGraphQLClientTransport_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MinimalMainThreadExecutor_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MutationRequest_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__QueryRequest_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLClientEvents_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLClient_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IMutationRequest_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IQueryRequest_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IRequestWithResultConversion_2_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__RequestState_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__Request_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TBackend>
constexpr ::OculusStudios::GraphQL::Client::QueryRequest*& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
template <typename TBackend>
constexpr ::OculusStudios::GraphQL::Client::QueryRequest* const& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
template <typename TBackend>
constexpr void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>::__cordl_internal_set_request(::OculusStudios::GraphQL::Client::QueryRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___request, value);
}
template <typename TBackend> inline void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBackend> inline void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>::_Query_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>*>::get(),
                                               "<Query>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBackend>
inline ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>* OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>*>());
}
// Ctor Parameters []
template <typename TBackend> constexpr ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>::GraphQLClient___c__DisplayClass24_0_1() {}
template <typename TBackend>
constexpr ::OculusStudios::GraphQL::Client::QueryRequest*& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
template <typename TBackend>
constexpr ::OculusStudios::GraphQL::Client::QueryRequest* const& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
template <typename TBackend>
constexpr void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>::__cordl_internal_set_request(::OculusStudios::GraphQL::Client::QueryRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___request, value);
}
template <typename TBackend>
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient*& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TBackend>
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient* const& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TBackend>
constexpr void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>::__cordl_internal_set___4__this(::OculusStudios::GraphQL::Client::GraphQLClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename TBackend> inline void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBackend>
inline ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>* OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>*>());
}
// Ctor Parameters []
template <typename TBackend> constexpr ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>::GraphQLClient___c__DisplayClass26_0_1() {}
template <typename TBackend> constexpr ::System::Object*& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>::__cordl_internal_get_resultObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultObject;
}
template <typename TBackend> constexpr ::System::Object* const& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>::__cordl_internal_get_resultObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultObject;
}
template <typename TBackend> constexpr void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>::__cordl_internal_set_resultObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___resultObject, value);
}
template <typename TBackend>
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>*&
OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
template <typename TBackend>
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>* const&
OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
template <typename TBackend>
constexpr void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>::__cordl_internal_set_CS$__8__locals1(
    ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___CS$__8__locals1, value);
}
template <typename TBackend> inline void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBackend> inline void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>::_InternalQueryData_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>*>::get(),
                                               "<InternalQueryData>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBackend>
inline ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>* OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>*>());
}
// Ctor Parameters []
template <typename TBackend> constexpr ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>::GraphQLClient___c__DisplayClass26_1_1() {}
template <typename TBackend> constexpr ::System::Exception*& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1<TBackend>::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
template <typename TBackend> constexpr ::System::Exception* const& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1<TBackend>::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
template <typename TBackend> constexpr void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1<TBackend>::__cordl_internal_set_e(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___e, value);
}
template <typename TBackend>
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>*&
OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1<TBackend>::__cordl_internal_get_CS$__8__locals2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals2;
}
template <typename TBackend>
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>* const&
OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1<TBackend>::__cordl_internal_get_CS$__8__locals2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals2;
}
template <typename TBackend>
constexpr void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1<TBackend>::__cordl_internal_set_CS$__8__locals2(
    ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___CS$__8__locals2, value);
}
template <typename TBackend> inline void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1<TBackend>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1<TBackend>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBackend> inline void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1<TBackend>::_InternalQueryData_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1<TBackend>*>::get(),
                                               "<InternalQueryData>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBackend>
inline ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1<TBackend>* OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1<TBackend>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1<TBackend>*>());
}
// Ctor Parameters []
template <typename TBackend> constexpr ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1<TBackend>::GraphQLClient___c__DisplayClass26_2_1() {}
template <typename TBackend>
constexpr ::OculusStudios::GraphQL::Client::MutationRequest*& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
template <typename TBackend>
constexpr ::OculusStudios::GraphQL::Client::MutationRequest* const& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
template <typename TBackend>
constexpr void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>::__cordl_internal_set_request(::OculusStudios::GraphQL::Client::MutationRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___request, value);
}
template <typename TBackend> inline void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBackend> inline void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>::_Mutate_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>*>::get(),
                                               "<Mutate>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBackend>
inline ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>* OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>*>());
}
// Ctor Parameters []
template <typename TBackend> constexpr ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>::GraphQLClient___c__DisplayClass27_0_1() {}
template <typename T> constexpr ::OculusStudios::GraphQL::Client::MutationRequest*& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
template <typename T>
constexpr ::OculusStudios::GraphQL::Client::MutationRequest* const& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
template <typename T> constexpr void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>::__cordl_internal_set_request(::OculusStudios::GraphQL::Client::MutationRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___request, value);
}
template <typename T> constexpr ::OculusStudios::GraphQL::Client::GraphQLClient*& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient* const& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>::__cordl_internal_set___4__this(::OculusStudios::GraphQL::Client::GraphQLClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename T> constexpr ::System::Object*& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>::__cordl_internal_get_resultObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultObject;
}
template <typename T> constexpr ::System::Object* const& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>::__cordl_internal_get_resultObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultObject;
}
template <typename T> constexpr void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>::__cordl_internal_set_resultObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___resultObject, value);
}
template <typename T> inline void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>::_InternalMutateData_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>*>::get(),
                                               "<InternalMutateData>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>* OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>::GraphQLClient___c__DisplayClass29_0_1() {}
template <typename T> constexpr ::OculusStudios::GraphQL::Client::GraphQLClient*& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient* const& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>::__cordl_internal_set___4__this(::OculusStudios::GraphQL::Client::GraphQLClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename T> constexpr ::System::Exception*& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
template <typename T> constexpr ::System::Exception* const& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
template <typename T> constexpr void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>::__cordl_internal_set_e(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___e, value);
}
template <typename T> constexpr ::OculusStudios::GraphQL::Client::MutationRequest*& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
template <typename T>
constexpr ::OculusStudios::GraphQL::Client::MutationRequest* const& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
template <typename T> constexpr void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>::__cordl_internal_set_request(::OculusStudios::GraphQL::Client::MutationRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___request, value);
}
template <typename T> inline void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>::_ErrorOutMutation_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>*>::get(),
                                               "<ErrorOutMutation>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>* OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>::GraphQLClient___c__DisplayClass31_0_1() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d72028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0._ExecuteAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>* (
    ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0::*)()>(&::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0::_ExecuteAsync_b__0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d7202c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0*>::get(),
                                                 "<ExecuteAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient*& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient* const& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0::__cordl_internal_set___4__this(::OculusStudios::GraphQL::Client::GraphQLClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::GraphQL::Client::GraphQLRequest*& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::OculusStudios::GraphQL::Client::GraphQLRequest* const& OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0::__cordl_internal_set_request(::OculusStudios::GraphQL::Client::GraphQLRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>* OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0::_ExecuteAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0*>::get(),
                                               "<ExecuteAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>*, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0* OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0::GraphQLClient___c__DisplayClass32_0() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5d720e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d72498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "request", ty: "::OculusStudios::GraphQL::ClientInterface::Request*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "requestId",
// ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34::GraphQLClient__CleanupRequestAsync_d__34(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::OculusStudios::GraphQL::ClientInterface::Request* request,
    ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this, int64_t requestId, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->request = request;
  this->__4__this = __4__this;
  this->requestId = requestId;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34::GraphQLClient__CleanupRequestAsync_d__34() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x5d72504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d72984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "request", ty: "::OculusStudios::GraphQL::Client::GraphQLRequest*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32::GraphQLClient__ExecuteAsync_d__32(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __t__builder,
    ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this, ::OculusStudios::GraphQL::Client::GraphQLRequest* request,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->request = request;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32::GraphQLClient__ExecuteAsync_d__32() {}
template <typename T> inline void OculusStudios::GraphQL::Client::GraphQLClient__InternalMutateData_d__29_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__InternalMutateData_d__29_1<T>>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void OculusStudios::GraphQL::Client::GraphQLClient__InternalMutateData_d__29_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__InternalMutateData_d__29_1<T>>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr OculusStudios::GraphQL::Client::GraphQLClient__InternalMutateData_d__29_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::GraphQLClient__InternalMutateData_d__29_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "request", ty: "::OculusStudios::GraphQL::Client::MutationRequest*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty:
// "::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "::System::Object*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_mutateTask_5__4", ty:
// "::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_timeoutTask_5__5", ty:
// "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__InternalMutateData_d__29_1<T>::GraphQLClient__InternalMutateData_d__29_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::OculusStudios::GraphQL::Client::MutationRequest* request,
    ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this, ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>* __8__1, ::System::Object* __7__wrap1, int32_t __7__wrap2,
    ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>* _mutateTask_5__4, ::System::Threading::Tasks::Task* _timeoutTask_5__5,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->request = request;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__7__wrap1 = __7__wrap1;
  this->__7__wrap2 = __7__wrap2;
  this->_mutateTask_5__4 = _mutateTask_5__4;
  this->_timeoutTask_5__5 = _timeoutTask_5__5;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
template <typename T> constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__InternalMutateData_d__29_1<T>::GraphQLClient__InternalMutateData_d__29_1() {}
template <typename TBackend> inline void OculusStudios::GraphQL::Client::GraphQLClient__InternalQueryData_d__26_1<TBackend>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__InternalQueryData_d__26_1<TBackend>>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBackend>
inline void OculusStudios::GraphQL::Client::GraphQLClient__InternalQueryData_d__26_1<TBackend>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__InternalQueryData_d__26_1<TBackend>>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TBackend> constexpr OculusStudios::GraphQL::Client::GraphQLClient__InternalQueryData_d__26_1<TBackend>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TBackend>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::GraphQLClient__InternalQueryData_d__26_1<TBackend>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "request", ty: "::OculusStudios::GraphQL::Client::QueryRequest*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty:
// "::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__2", ty:
// "::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "::System::Object*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_queryTask_5__4", ty:
// "::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_timeoutTask_5__5", ty:
// "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
template <typename TBackend>
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__InternalQueryData_d__26_1<TBackend>::GraphQLClient__InternalQueryData_d__26_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::OculusStudios::GraphQL::Client::QueryRequest* request,
    ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this, ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>* __8__1,
    ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>* __8__2, ::System::Object* __7__wrap1, int32_t __7__wrap2,
    ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>* _queryTask_5__4, ::System::Threading::Tasks::Task* _timeoutTask_5__5,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->request = request;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__8__2 = __8__2;
  this->__7__wrap1 = __7__wrap1;
  this->__7__wrap2 = __7__wrap2;
  this->_queryTask_5__4 = _queryTask_5__4;
  this->_timeoutTask_5__5 = _timeoutTask_5__5;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
template <typename TBackend> constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__InternalQueryData_d__26_1<TBackend>::GraphQLClient__InternalQueryData_d__26_1() {}
template <typename TBackend> inline void OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__27_1<TBackend>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__27_1<TBackend>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBackend>
inline void OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__27_1<TBackend>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__27_1<TBackend>>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TBackend> constexpr OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__27_1<TBackend>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TBackend>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__27_1<TBackend>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TBackend>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "requestBase", ty: "::OculusStudios::GraphQL::ClientInterface::IMutationRequest*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_requestId_5__2", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*>", modifiers: "", def_value: Some("{}") }]
template <typename TBackend>
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__27_1<TBackend>::GraphQLClient__Mutate_d__27_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TBackend> __t__builder, ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this,
    ::OculusStudios::GraphQL::ClientInterface::IMutationRequest* requestBase, ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>* __8__1, int64_t _requestId_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->requestBase = requestBase;
  this->__8__1 = __8__1;
  this->_requestId_5__2 = _requestId_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
template <typename TBackend> constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__27_1<TBackend>::GraphQLClient__Mutate_d__27_1() {}
template <typename TBackend, typename TFrontend> inline void OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__28_2<TBackend, TFrontend>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__28_2<TBackend, TFrontend>>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBackend, typename TFrontend>
inline void OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__28_2<TBackend, TFrontend>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__28_2<TBackend, TFrontend>>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TBackend, typename TFrontend>
constexpr OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__28_2<TBackend, TFrontend>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TBackend, typename TFrontend>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__28_2<TBackend, TFrontend>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TFrontend>", modifiers: "", def_value: Some("{}") }, CppParam { name: "requestBase", ty:
// "::OculusStudios::GraphQL::ClientInterface::IMutationRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_result_5__2", ty: "TBackend", modifiers: "", def_value: Some("{}") }, CppParam { name: "_conversion_5__3", ty:
// "::OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2<TBackend,TFrontend>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<TBackend>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TFrontend>", modifiers: "", def_value: Some("{}") }]
template <typename TBackend, typename TFrontend>
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__28_2<TBackend, TFrontend>::GraphQLClient__Mutate_d__28_2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TFrontend> __t__builder, ::OculusStudios::GraphQL::ClientInterface::IMutationRequest* requestBase,
    ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this, TBackend _result_5__2, ::OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2<TBackend, TFrontend>* _conversion_5__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<TBackend> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<TFrontend> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->requestBase = requestBase;
  this->__4__this = __4__this;
  this->_result_5__2 = _result_5__2;
  this->_conversion_5__3 = _conversion_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
template <typename TBackend, typename TFrontend> constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__28_2<TBackend, TFrontend>::GraphQLClient__Mutate_d__28_2() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5d72a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d72d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "requestId", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23::GraphQLClient__ProcessRequest_d__23(int32_t __1__state,
                                                                                                                     ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                                     ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this, int64_t requestId,
                                                                                                                     ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->requestId = requestId;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23::GraphQLClient__ProcessRequest_d__23() {}
template <typename TBackend> inline void OculusStudios::GraphQL::Client::GraphQLClient__Query_d__24_1<TBackend>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__Query_d__24_1<TBackend>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBackend>
inline void OculusStudios::GraphQL::Client::GraphQLClient__Query_d__24_1<TBackend>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__Query_d__24_1<TBackend>>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TBackend> constexpr OculusStudios::GraphQL::Client::GraphQLClient__Query_d__24_1<TBackend>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TBackend>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* OculusStudios::GraphQL::Client::GraphQLClient__Query_d__24_1<TBackend>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TBackend>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "requestBase", ty: "::OculusStudios::GraphQL::ClientInterface::IQueryRequest*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_requestId_5__2", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*>", modifiers: "", def_value: Some("{}") }]
template <typename TBackend>
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__Query_d__24_1<TBackend>::GraphQLClient__Query_d__24_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TBackend> __t__builder, ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this,
    ::OculusStudios::GraphQL::ClientInterface::IQueryRequest* requestBase, ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>* __8__1, int64_t _requestId_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->requestBase = requestBase;
  this->__8__1 = __8__1;
  this->_requestId_5__2 = _requestId_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
template <typename TBackend> constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__Query_d__24_1<TBackend>::GraphQLClient__Query_d__24_1() {}
template <typename TBackend, typename TFrontend> inline void OculusStudios::GraphQL::Client::GraphQLClient__Query_d__25_2<TBackend, TFrontend>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__Query_d__25_2<TBackend, TFrontend>>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBackend, typename TFrontend>
inline void OculusStudios::GraphQL::Client::GraphQLClient__Query_d__25_2<TBackend, TFrontend>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__Query_d__25_2<TBackend, TFrontend>>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TBackend, typename TFrontend>
constexpr OculusStudios::GraphQL::Client::GraphQLClient__Query_d__25_2<TBackend, TFrontend>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TBackend, typename TFrontend>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::GraphQLClient__Query_d__25_2<TBackend, TFrontend>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TFrontend>", modifiers: "", def_value: Some("{}") }, CppParam { name: "requestBase", ty:
// "::OculusStudios::GraphQL::ClientInterface::IQueryRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_result_5__2", ty: "TBackend", modifiers: "", def_value: Some("{}") }, CppParam { name: "_conversion_5__3", ty:
// "::OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2<TBackend,TFrontend>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<TBackend>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TFrontend>", modifiers: "", def_value: Some("{}") }]
template <typename TBackend, typename TFrontend>
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__Query_d__25_2<TBackend, TFrontend>::GraphQLClient__Query_d__25_2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TFrontend> __t__builder, ::OculusStudios::GraphQL::ClientInterface::IQueryRequest* requestBase,
    ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this, TBackend _result_5__2, ::OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2<TBackend, TFrontend>* _conversion_5__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<TBackend> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<TFrontend> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->requestBase = requestBase;
  this->__4__this = __4__this;
  this->_result_5__2 = _result_5__2;
  this->_conversion_5__3 = _conversion_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
template <typename TBackend, typename TFrontend> constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__Query_d__25_2<TBackend, TFrontend>::GraphQLClient__Query_d__25_2() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36::MoveNext)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5d72df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d73120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "request", ty: "::OculusStudios::GraphQL::ClientInterface::Request*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_tries_5__2", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this,
    ::OculusStudios::GraphQL::ClientInterface::Request* request, uint32_t _tries_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->request = request;
  this->_tries_5__2 = _tries_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36() {}
template <typename T> inline void OculusStudios::GraphQL::Client::GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1<T>>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void OculusStudios::GraphQL::Client::GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1<T>>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr OculusStudios::GraphQL::Client::GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "request", ty: "::OculusStudios::GraphQL::Client::MutationRequest*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "e", ty:
// "::System::Exception*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1<T>::GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::OculusStudios::GraphQL::Client::MutationRequest* request,
    ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this, ::System::Exception* e, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->request = request;
  this->__4__this = __4__this;
  this->e = e;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1<T>::GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5d7318c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d73408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_pauseTickCounter_5__2",
// ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::CancellationToken cancellationToken,
    ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this, int64_t _pauseTickCounter_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->_pauseTickCounter_5__2 = _pauseTickCounter_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient.add_onRequestCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(
    &::OculusStudios::GraphQL::Client::GraphQLClient::add_onRequestCreated)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d707fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "add_onRequestCreated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient.remove_onRequestCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(
    &::OculusStudios::GraphQL::Client::GraphQLClient::remove_onRequestCreated)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d708dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "remove_onRequestCreated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient.OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient::*)(
    ::StringW, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*)>(
    &::OculusStudios::GraphQL::Client::GraphQLClient::OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Initialize)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5d709bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "OculusStudios.GraphQL.ClientInterface.IGraphQLClient.Initialize",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient::*)(float_t)>(
    &::OculusStudios::GraphQL::Client::GraphQLClient::Update)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x5d70be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient.ProcessRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::OculusStudios::GraphQL::Client::GraphQLClient::*)(int64_t)>(
    &::OculusStudios::GraphQL::Client::GraphQLClient::ProcessRequest)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d71348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "ProcessRequest",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient.ExecuteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>* (
    ::OculusStudios::GraphQL::Client::GraphQLClient::*)(::OculusStudios::GraphQL::Client::GraphQLRequest*)>(&::OculusStudios::GraphQL::Client::GraphQLClient::ExecuteAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d7140c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "ExecuteAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient.CleanupRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient::*)(
    int64_t, ::OculusStudios::GraphQL::ClientInterface::Request*)>(&::OculusStudios::GraphQL::Client::GraphQLClient::CleanupRequest)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d714fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "CleanupRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::Request*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient.CleanupRequestAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::OculusStudios::GraphQL::Client::GraphQLClient::*)(int64_t, ::OculusStudios::GraphQL::ClientInterface::Request*)>(&::OculusStudios::GraphQL::Client::GraphQLClient::CleanupRequestAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d71574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "CleanupRequestAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::Request*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient.WaitUntilRequestQueueIsResumed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::OculusStudios::GraphQL::Client::GraphQLClient::*)(::System::Threading::CancellationToken, ::StringW)>(&::OculusStudios::GraphQL::Client::GraphQLClient::WaitUntilRequestQueueIsResumed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d71638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "WaitUntilRequestQueueIsResumed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient.ResetRequestForUserInitiatedRetryAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::OculusStudios::GraphQL::Client::GraphQLClient::*)(::OculusStudios::GraphQL::ClientInterface::Request*)>(
        &::OculusStudios::GraphQL::Client::GraphQLClient::ResetRequestForUserInitiatedRetryAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d716f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "ResetRequestForUserInitiatedRetryAsync",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::Request*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient.PauseRequestQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLClient::PauseRequestQueue)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d717b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(),
                                                                               "PauseRequestQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient.ResumeRequestQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLClient::ResumeRequestQueue)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d718c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(),
                                                                               "ResumeRequestQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient.OnApplicationSuspended
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLClient::OnApplicationSuspended)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5d719c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(),
                                                                               "OnApplicationSuspended", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient.OnApplicationResumed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLClient::OnApplicationResumed)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5d71af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(),
                                                                               "OnApplicationResumed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient.LogRequestState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient::*)(
    int64_t, ::OculusStudios::GraphQL::ClientInterface::RequestState)>(&::OculusStudios::GraphQL::Client::GraphQLClient::LogRequestState)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5d71c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "LogRequestState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::RequestState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient.SetApplicationOnline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLClient::SetApplicationOnline)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d71e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(),
                                                                               "SetApplicationOnline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient.SetApplicationOffline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLClient::SetApplicationOffline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d71e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(),
                                                                               "SetApplicationOffline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLClient::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLClient::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5d71e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::GraphQL::Client::IGraphQLClientTransport*& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_requestResponseTransport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestResponseTransport;
}
constexpr ::OculusStudios::GraphQL::Client::IGraphQLClientTransport* const& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_requestResponseTransport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestResponseTransport;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_set_requestResponseTransport(::OculusStudios::GraphQL::Client::IGraphQLClientTransport* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestResponseTransport)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_externalEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalEvents;
}
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* const& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_externalEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalEvents;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_set_externalEvents(::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___externalEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialized;
}
constexpr bool const& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialized;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_set_initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initialized = value;
}
constexpr bool& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_requestQueuePaused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestQueuePaused;
}
constexpr bool const& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_requestQueuePaused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestQueuePaused;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_set_requestQueuePaused(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestQueuePaused = value;
}
constexpr bool& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_applicationSuspended() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___applicationSuspended;
}
constexpr bool const& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_applicationSuspended() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___applicationSuspended;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_set_applicationSuspended(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___applicationSuspended = value;
}
constexpr bool& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_applicationOnline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___applicationOnline;
}
constexpr bool const& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_applicationOnline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___applicationOnline;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_set_applicationOnline(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___applicationOnline = value;
}
constexpr int64_t& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_pendingRequestId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pendingRequestId;
}
constexpr int64_t const& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_pendingRequestId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pendingRequestId;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_set_pendingRequestId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pendingRequestId = value;
}
constexpr int64_t& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_asyncAccessViolations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncAccessViolations;
}
constexpr int64_t const& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_asyncAccessViolations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncAccessViolations;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_set_asyncAccessViolations(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___asyncAccessViolations = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_gameActiveTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameActiveTask;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* const& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_gameActiveTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameActiveTask;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_set_gameActiveTask(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameActiveTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_mainThreadExecutor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainThreadExecutor;
}
constexpr ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* const& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_mainThreadExecutor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainThreadExecutor;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_set_mainThreadExecutor(::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mainThreadExecutor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<int64_t>*& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_requestQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestQueue;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<int64_t>* const& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_requestQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestQueue;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_set_requestQueue(::System::Collections::Concurrent::ConcurrentQueue_1<int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int64_t, ::OculusStudios::GraphQL::ClientInterface::Request*>*&
OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_pendingRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pendingRequests;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int64_t, ::OculusStudios::GraphQL::ClientInterface::Request*>* const&
OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_pendingRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pendingRequests;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_set_pendingRequests(
    ::System::Collections::Concurrent::ConcurrentDictionary_2<int64_t, ::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pendingRequests)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<int64_t>*& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_inProgressRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inProgressRequests;
}
constexpr ::System::Collections::Generic::HashSet_1<int64_t>* const& OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_get_inProgressRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inProgressRequests;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLClient::__cordl_internal_set_inProgressRequests(::System::Collections::Generic::HashSet_1<int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inProgressRequests)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OculusStudios::GraphQL::Client::GraphQLClient::setStaticF_onRequestCreated(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*, "onRequestCreated",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get>(
      std::forward<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>(value));
}
inline ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* OculusStudios::GraphQL::Client::GraphQLClient::getStaticF_onRequestCreated() {
  return ::cordl_internals::getStaticField<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*, "onRequestCreated",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get>();
}
inline void OculusStudios::GraphQL::Client::GraphQLClient::add_onRequestCreated(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "add_onRequestCreated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void OculusStudios::GraphQL::Client::GraphQLClient::remove_onRequestCreated(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "remove_onRequestCreated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void
OculusStudios::GraphQL::Client::GraphQLClient::OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Initialize(::StringW endpoint, ::StringW accessToken,
                                                                                                               ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* customAppHeaders,
                                                                                                               ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* logger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "OculusStudios.GraphQL.ClientInterface.IGraphQLClient.Initialize",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endpoint, accessToken, customAppHeaders, logger);
}
inline void OculusStudios::GraphQL::Client::GraphQLClient::Update(float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deltaTime);
}
inline ::System::Threading::Tasks::Task* OculusStudios::GraphQL::Client::GraphQLClient::ProcessRequest(int64_t requestId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "ProcessRequest",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, requestId);
}
template <typename TBackend>
inline ::System::Threading::Tasks::Task_1<TBackend>* OculusStudios::GraphQL::Client::GraphQLClient::Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest* requestBase) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "Query",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBackend>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::IQueryRequest*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBackend>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TBackend>*, false>(this, ___internal_method, requestBase);
}
template <typename TBackend, typename TFrontend>
inline ::System::Threading::Tasks::Task_1<TFrontend>* OculusStudios::GraphQL::Client::GraphQLClient::Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest* requestBase) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "Query",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBackend>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFrontend>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::IQueryRequest*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBackend>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFrontend>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TFrontend>*, false>(this, ___internal_method, requestBase);
}
template <typename TBackend> inline void OculusStudios::GraphQL::Client::GraphQLClient::InternalQueryData(::OculusStudios::GraphQL::Client::QueryRequest* request) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "InternalQueryData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBackend>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::QueryRequest*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBackend>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
template <typename TBackend>
inline ::System::Threading::Tasks::Task_1<TBackend>* OculusStudios::GraphQL::Client::GraphQLClient::Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest* requestBase) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "Mutate",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBackend>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::IMutationRequest*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBackend>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TBackend>*, false>(this, ___internal_method, requestBase);
}
template <typename TBackend, typename TFrontend>
inline ::System::Threading::Tasks::Task_1<TFrontend>* OculusStudios::GraphQL::Client::GraphQLClient::Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest* requestBase) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "Mutate",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBackend>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFrontend>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::IMutationRequest*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBackend>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFrontend>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TFrontend>*, false>(this, ___internal_method, requestBase);
}
template <typename T> inline void OculusStudios::GraphQL::Client::GraphQLClient::InternalMutateData(::OculusStudios::GraphQL::Client::MutationRequest* request) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "InternalMutateData",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::MutationRequest*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
template <typename T>
inline ::System::Threading::Tasks::Task* OculusStudios::GraphQL::Client::GraphQLClient::RetryOrErrorOutMutationAsync(::OculusStudios::GraphQL::Client::MutationRequest* request,
                                                                                                                     ::System::Exception* e) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "RetryOrErrorOutMutationAsync",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::MutationRequest*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, request, e);
}
template <typename T> inline void OculusStudios::GraphQL::Client::GraphQLClient::ErrorOutMutation(::OculusStudios::GraphQL::Client::MutationRequest* request, ::System::Exception* e) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "ErrorOutMutation",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::MutationRequest*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, e);
}
inline ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>*
OculusStudios::GraphQL::Client::GraphQLClient::ExecuteAsync(::OculusStudios::GraphQL::Client::GraphQLRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "ExecuteAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::Client::GraphQLRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>*, false>(this, ___internal_method, request);
}
inline void OculusStudios::GraphQL::Client::GraphQLClient::CleanupRequest(int64_t requestId, ::OculusStudios::GraphQL::ClientInterface::Request* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "CleanupRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::Request*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestId, request);
}
inline ::System::Threading::Tasks::Task* OculusStudios::GraphQL::Client::GraphQLClient::CleanupRequestAsync(int64_t requestId, ::OculusStudios::GraphQL::ClientInterface::Request* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "CleanupRequestAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::Request*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, requestId, request);
}
inline ::System::Threading::Tasks::Task* OculusStudios::GraphQL::Client::GraphQLClient::WaitUntilRequestQueueIsResumed(::System::Threading::CancellationToken cancellationToken,
                                                                                                                       ::StringW operationType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "WaitUntilRequestQueueIsResumed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken, operationType);
}
inline ::System::Threading::Tasks::Task* OculusStudios::GraphQL::Client::GraphQLClient::ResetRequestForUserInitiatedRetryAsync(::OculusStudios::GraphQL::ClientInterface::Request* request) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "ResetRequestForUserInitiatedRetryAsync",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::Request*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, request);
}
inline void OculusStudios::GraphQL::Client::GraphQLClient::PauseRequestQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(),
                                                                             "PauseRequestQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLClient::ResumeRequestQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(),
                                                                             "ResumeRequestQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLClient::OnApplicationSuspended() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(),
                                                                             "OnApplicationSuspended", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLClient::OnApplicationResumed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(),
                                                                             "OnApplicationResumed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLClient::LogRequestState(int64_t requestId, ::OculusStudios::GraphQL::ClientInterface::RequestState requestState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), "LogRequestState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::RequestState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestId, requestState);
}
inline void OculusStudios::GraphQL::Client::GraphQLClient::SetApplicationOnline() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(),
                                                                             "SetApplicationOnline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLClient::SetApplicationOffline() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(),
                                                                             "SetApplicationOffline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLClient*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::GraphQLClient* OculusStudios::GraphQL::Client::GraphQLClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLClient*>());
}
/// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLClient"
constexpr OculusStudios::GraphQL::Client::GraphQLClient::operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLClient"
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* OculusStudios::GraphQL::Client::GraphQLClient::i___OculusStudios__GraphQL__ClientInterface__IGraphQLClient() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLClient::GraphQLClient() {}
