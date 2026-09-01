#pragma once
// IWYU pragma private; include "BeatSaber\GraphQL\MockGraphQLClient_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/GraphQL/zzzz__MockGraphQLClient_1_def.hpp"
#include "BeatSaber/GraphQL/zzzz__MockGraphQLClient_1_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLClientEvents_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLClient_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IMutationRequest_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IQueryRequest_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__Request_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename T, typename TDomainModel>
inline void BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>::setStaticF___9(::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>* value) {
  ::cordl_internals::setStaticField<::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*, "<>9", ::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*>(
      std::forward<::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*>(value));
}
template <typename T, typename TDomainModel>
inline ::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>* BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*, "<>9", ::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*>();
}
template <typename T, typename TDomainModel>
inline void BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>::setStaticF___9__12_0(::System::Func_2<::System::Threading::Tasks::Task_1<T>*, TDomainModel>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<T>*, TDomainModel>*, "<>9__12_0", ::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*>(
      std::forward<::System::Func_2<::System::Threading::Tasks::Task_1<T>*, TDomainModel>*>(value));
}
template <typename T, typename TDomainModel>
inline ::System::Func_2<::System::Threading::Tasks::Task_1<T>*, TDomainModel>* BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<T>*, TDomainModel>*, "<>9__12_0",
                                           ::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*>();
}
template <typename T, typename TDomainModel> inline void BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T, typename TDomainModel> inline TDomainModel BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>::_Query_b__12_0(::System::Threading::Tasks::Task_1<T>* result) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*>(),
                                                                                         { "<Query>b__12_0", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<TDomainModel>(this, ___internal_method, result);
}
template <typename T, typename TDomainModel>
inline ::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>* BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*>());
}
// Ctor Parameters []
template <typename T, typename TDomainModel> constexpr ::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>::MockGraphQLClient_1___c__12_1() {}
template <typename T> constexpr T& BeatSaber::GraphQL::MockGraphQLClient_1<T>::__cordl_internal_get_QueryResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QueryResult;
}
template <typename T> constexpr T const& BeatSaber::GraphQL::MockGraphQLClient_1<T>::__cordl_internal_get_QueryResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QueryResult;
}
template <typename T> constexpr void BeatSaber::GraphQL::MockGraphQLClient_1<T>::__cordl_internal_set_QueryResult(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___QueryResult = value;
}
template <typename T> constexpr int32_t& BeatSaber::GraphQL::MockGraphQLClient_1<T>::__cordl_internal_get_RequestCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequestCount;
}
template <typename T> constexpr int32_t const& BeatSaber::GraphQL::MockGraphQLClient_1<T>::__cordl_internal_get_RequestCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequestCount;
}
template <typename T> constexpr void BeatSaber::GraphQL::MockGraphQLClient_1<T>::__cordl_internal_set_RequestCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RequestCount = value;
}
template <typename T> constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& BeatSaber::GraphQL::MockGraphQLClient_1<T>::__cordl_internal_get_QueryCompletionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QueryCompletionSource;
}
template <typename T> constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* const& BeatSaber::GraphQL::MockGraphQLClient_1<T>::__cordl_internal_get_QueryCompletionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QueryCompletionSource;
}
template <typename T> constexpr void BeatSaber::GraphQL::MockGraphQLClient_1<T>::__cordl_internal_set_QueryCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___QueryCompletionSource = value;
}
template <typename T>
inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::Initialize(::StringW endpoint, ::StringW accessToken, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* customAppHeaders,
                                                                   ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* logger) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>(),
                                              { "Initialize",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(),
                                                  ::i2c::type_of<::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endpoint, accessToken, customAppHeaders, logger);
}
template <typename T> inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::OnApplicationResumed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>(), { "OnApplicationResumed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::OnApplicationSuspended() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>(), { "OnApplicationSuspended", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::PauseRequestQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>(), { "PauseRequestQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::ResumeRequestQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>(), { "ResumeRequestQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::SetApplicationOffline() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>(), { "SetApplicationOffline", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::SetApplicationOnline() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>(), { "SetApplicationOnline", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline ::System::Threading::Tasks::Task* BeatSaber::GraphQL::MockGraphQLClient_1<T>::ResetRequestForUserInitiatedRetryAsync(::OculusStudios::GraphQL::ClientInterface::Request* request) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>(),
                                                           { "ResetRequestForUserInitiatedRetryAsync", {}, { ::i2c::type_of<::OculusStudios::GraphQL::ClientInterface::Request*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, request);
}
template <typename T> inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::Update(float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>(), { "Update", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
template <typename T>
template <typename TDomainModel>
inline ::System::Threading::Tasks::Task_1<TDomainModel>* BeatSaber::GraphQL::MockGraphQLClient_1<T>::Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest* request) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>(),
                                                           { "Query", { ::i2c::class_of<TDomainModel>() }, { ::i2c::type_of<::OculusStudios::GraphQL::ClientInterface::IQueryRequest*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDomainModel>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TDomainModel>*>(this, ___internal_method, request);
}
template <typename T>
template <typename TDomainModel, typename TViewModel>
inline ::System::Threading::Tasks::Task_1<TViewModel>* BeatSaber::GraphQL::MockGraphQLClient_1<T>::Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest* request) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>(),
                          { "Query", { ::i2c::class_of<TDomainModel>(), ::i2c::class_of<TViewModel>() }, { ::i2c::type_of<::OculusStudios::GraphQL::ClientInterface::IQueryRequest*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDomainModel>(), ::i2c::class_of<TViewModel>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TViewModel>*>(this, ___internal_method, request);
}
template <typename T>
template <typename TDomainModel>
inline ::System::Threading::Tasks::Task_1<TDomainModel>* BeatSaber::GraphQL::MockGraphQLClient_1<T>::Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest* request) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>(),
                                                           { "Mutate", { ::i2c::class_of<TDomainModel>() }, { ::i2c::type_of<::OculusStudios::GraphQL::ClientInterface::IMutationRequest*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDomainModel>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TDomainModel>*>(this, ___internal_method, request);
}
template <typename T>
template <typename TDomainModel, typename TViewModel>
inline ::System::Threading::Tasks::Task_1<TViewModel>* BeatSaber::GraphQL::MockGraphQLClient_1<T>::Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest* request) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>(),
                          { "Mutate", { ::i2c::class_of<TDomainModel>(), ::i2c::class_of<TViewModel>() }, { ::i2c::type_of<::OculusStudios::GraphQL::ClientInterface::IMutationRequest*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDomainModel>(), ::i2c::class_of<TViewModel>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TViewModel>*>(this, ___internal_method, request);
}
template <typename T> inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::BeatSaber::GraphQL::MockGraphQLClient_1<T>* BeatSaber::GraphQL::MockGraphQLClient_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>());
}
/// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLClient"
template <typename T> constexpr BeatSaber::GraphQL::MockGraphQLClient_1<T>::operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLClient"
template <typename T>
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* BeatSaber::GraphQL::MockGraphQLClient_1<T>::i___OculusStudios__GraphQL__ClientInterface__IGraphQLClient() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::BeatSaber::GraphQL::MockGraphQLClient_1<T>::MockGraphQLClient_1() {}
