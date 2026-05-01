#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/MockGraphQLClient_1.hpp"
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
  ::cordl_internals::setStaticField<::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*>::get>(
      std::forward<::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*>(value));
}
template <typename T, typename TDomainModel>
inline ::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>* BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*>::get>();
}
template <typename T, typename TDomainModel>
inline void BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>::setStaticF___9__12_0(::System::Func_2<::System::Threading::Tasks::Task_1<T>*, TDomainModel>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<T>*, TDomainModel>*, "<>9__12_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*>::get>(
      std::forward<::System::Func_2<::System::Threading::Tasks::Task_1<T>*, TDomainModel>*>(value));
}
template <typename T, typename TDomainModel>
inline ::System::Func_2<::System::Threading::Tasks::Task_1<T>*, TDomainModel>* BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<T>*, TDomainModel>*, "<>9__12_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*>::get>();
}
template <typename T, typename TDomainModel> inline void BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TDomainModel> inline TDomainModel BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>::_Query_b__12_0(::System::Threading::Tasks::Task_1<T>* result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*>::get(), "<Query>b__12_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<TDomainModel, false>(this, ___internal_method, result);
}
template <typename T, typename TDomainModel>
inline ::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>* BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GraphQL::MockGraphQLClient_1___c__12_1<T, TDomainModel>*>());
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
  ::cordl_internals::setInstanceField(this, &this->___QueryResult, value);
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
  ::cordl_internals::setInstanceField(this, &this->___QueryCompletionSource, value);
}
template <typename T>
inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::Initialize(::StringW endpoint, ::StringW accessToken, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* customAppHeaders,
                                                                   ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* logger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endpoint, accessToken, customAppHeaders, logger);
}
template <typename T> inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::OnApplicationResumed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>::get(),
                                                                             "OnApplicationResumed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::OnApplicationSuspended() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>::get(),
                                                                             "OnApplicationSuspended", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::PauseRequestQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>::get(),
                                                                             "PauseRequestQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::ResumeRequestQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>::get(),
                                                                             "ResumeRequestQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::SetApplicationOffline() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>::get(),
                                                                             "SetApplicationOffline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::SetApplicationOnline() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>::get(),
                                                                             "SetApplicationOnline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Threading::Tasks::Task* BeatSaber::GraphQL::MockGraphQLClient_1<T>::ResetRequestForUserInitiatedRetryAsync(::OculusStudios::GraphQL::ClientInterface::Request* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>::get(), "ResetRequestForUserInitiatedRetryAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::Request*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, request);
}
template <typename T> inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::Update(float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deltaTime);
}
template <typename T>
template <typename TDomainModel>
inline ::System::Threading::Tasks::Task_1<TDomainModel>* BeatSaber::GraphQL::MockGraphQLClient_1<T>::Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest* request) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>::get(), "Query",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDomainModel>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::IQueryRequest*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDomainModel>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TDomainModel>*, false>(this, ___internal_method, request);
}
template <typename T>
template <typename TDomainModel, typename TViewModel>
inline ::System::Threading::Tasks::Task_1<TViewModel>* BeatSaber::GraphQL::MockGraphQLClient_1<T>::Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest* request) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>::get(), "Query",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDomainModel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TViewModel>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::IQueryRequest*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDomainModel>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TViewModel>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TViewModel>*, false>(this, ___internal_method, request);
}
template <typename T>
template <typename TDomainModel>
inline ::System::Threading::Tasks::Task_1<TDomainModel>* BeatSaber::GraphQL::MockGraphQLClient_1<T>::Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest* request) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>::get(), "Mutate",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDomainModel>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::IMutationRequest*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDomainModel>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TDomainModel>*, false>(this, ___internal_method, request);
}
template <typename T>
template <typename TDomainModel, typename TViewModel>
inline ::System::Threading::Tasks::Task_1<TViewModel>* BeatSaber::GraphQL::MockGraphQLClient_1<T>::Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest* request) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>::get(), "Mutate",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDomainModel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TViewModel>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::GraphQL::ClientInterface::IMutationRequest*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDomainModel>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TViewModel>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TViewModel>*, false>(this, ___internal_method, request);
}
template <typename T> inline void BeatSaber::GraphQL::MockGraphQLClient_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::BeatSaber::GraphQL::MockGraphQLClient_1<T>* BeatSaber::GraphQL::MockGraphQLClient_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GraphQL::MockGraphQLClient_1<T>*>());
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
