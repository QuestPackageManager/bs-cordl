#pragma once
// IWYU pragma private; include "OSCE/Web/DefaultRequestSender.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OSCE/Web/zzzz__DefaultRequestSender_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
#include "OSCE/Analytics/zzzz__GetIdParams_def.hpp"
#include "OSCE/Analytics/zzzz__LoggerAnalyticsBatch_def.hpp"
#include "OSCE/Web/zzzz__FailedPostRequest_def.hpp"
#include "OSCE/Web/zzzz__IRequestSender_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::OSCE::Web::DefaultRequestSender._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Web::DefaultRequestSender::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::OSCE::Web::DefaultRequestSender::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d88b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Web::DefaultRequestSender*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::DefaultRequestSender.SendBatchRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OSCE::Web::DefaultRequestSender::*)(::StringW, ::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*, ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*,
                                                            ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*)>(&::OSCE::Web::DefaultRequestSender::SendBatchRequest)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5d88b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Web::DefaultRequestSender*>::get(), "SendBatchRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::LoggerAnalyticsBatch*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::DefaultRequestSender.SendIdRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OSCE::Web::DefaultRequestSender::*)(::StringW, ::StringW, ::OSCE::Analytics::GetIdParams, ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*,
                                                            ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*)>(&::OSCE::Web::DefaultRequestSender::SendIdRequest)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5d88da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Web::DefaultRequestSender*>::get(), "SendIdRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::GetIdParams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& OSCE::Web::DefaultRequestSender::__cordl_internal_get__instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& OSCE::Web::DefaultRequestSender::__cordl_internal_get__instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
constexpr void OSCE::Web::DefaultRequestSender::__cordl_internal_set__instance(::UnityW<::OSCE::Analytics::AnalyticsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OSCE::Web::DefaultRequestSender::_ctor(::OSCE::Analytics::AnalyticsManager* instance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Web::DefaultRequestSender*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
inline void OSCE::Web::DefaultRequestSender::SendBatchRequest(::StringW oculusGraphURL, ::StringW endpoint, ::OSCE::Analytics::LoggerAnalyticsBatch* batch,
                                                              ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed,
                                                              ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Web::DefaultRequestSender*>::get(), "SendBatchRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::LoggerAnalyticsBatch*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oculusGraphURL, endpoint, batch, onSucceed, onFail);
}
inline void OSCE::Web::DefaultRequestSender::SendIdRequest(::StringW oculusGraphURL, ::StringW endpoint, ::OSCE::Analytics::GetIdParams idRequest,
                                                           ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed,
                                                           ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Web::DefaultRequestSender*>::get(), "SendIdRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::GetIdParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oculusGraphURL, endpoint, idRequest, onSucceed, onFail);
}
inline ::OSCE::Web::DefaultRequestSender* OSCE::Web::DefaultRequestSender::New_ctor(::OSCE::Analytics::AnalyticsManager* instance) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OSCE::Web::DefaultRequestSender*>(instance));
}
/// @brief Convert operator to "::OSCE::Web::IRequestSender"
constexpr OSCE::Web::DefaultRequestSender::operator ::OSCE::Web::IRequestSender*() noexcept {
  return static_cast<::OSCE::Web::IRequestSender*>(static_cast<void*>(this));
}
/// @brief Convert to "::OSCE::Web::IRequestSender"
constexpr ::OSCE::Web::IRequestSender* OSCE::Web::DefaultRequestSender::i___OSCE__Web__IRequestSender() noexcept {
  return static_cast<::OSCE::Web::IRequestSender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OSCE::Web::DefaultRequestSender::DefaultRequestSender() {}
