#pragma once
// IWYU pragma private; include "OSCE\Web\DefaultRequestSender.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Web::DefaultRequestSender::*)(::OSCE::Analytics::AnalyticsManager*)>(&::OSCE::Web::DefaultRequestSender::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3727c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::DefaultRequestSender*>(), { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::DefaultRequestSender.SendBatchRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::OSCE::Web::DefaultRequestSender::*)(::StringW, ::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*, ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*,
                                                            ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*)>(&::OSCE::Web::DefaultRequestSender::SendBatchRequest)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5f37284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::DefaultRequestSender*>(),
                                                             { "SendBatchRequest",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(),
                                                                 ::i2c::type_of<::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*>(),
                                                                 ::i2c::type_of<::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::DefaultRequestSender.SendIdRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::OSCE::Web::DefaultRequestSender::*)(::StringW, ::StringW, ::OSCE::Analytics::GetIdParams, ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*,
                                                            ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*)>(&::OSCE::Web::DefaultRequestSender::SendIdRequest)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5f37494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OSCE::Web::DefaultRequestSender*>(), { "SendIdRequest",
                                                                                     {},
                                                                                     { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::OSCE::Analytics::GetIdParams>(),
                                                                                       ::i2c::type_of<::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*>(),
                                                                                       ::i2c::type_of<::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*>() } })));
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
  this->____instance = value;
}
inline void OSCE::Web::DefaultRequestSender::_ctor(::OSCE::Analytics::AnalyticsManager* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::DefaultRequestSender*>(), { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void OSCE::Web::DefaultRequestSender::SendBatchRequest(::StringW oculusGraphURL, ::StringW endpoint, ::OSCE::Analytics::LoggerAnalyticsBatch* batch,
                                                              ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed,
                                                              ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::DefaultRequestSender*>(),
                                                           { "SendBatchRequest",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::OSCE::Analytics::LoggerAnalyticsBatch*>(),
                                                               ::i2c::type_of<::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*>(),
                                                               ::i2c::type_of<::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oculusGraphURL, endpoint, batch, onSucceed, onFail);
}
inline void OSCE::Web::DefaultRequestSender::SendIdRequest(::StringW oculusGraphURL, ::StringW endpoint, ::OSCE::Analytics::GetIdParams idRequest,
                                                           ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed,
                                                           ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::DefaultRequestSender*>(),
                                                                                         { "SendIdRequest",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::OSCE::Analytics::GetIdParams>(),
                                                                                             ::i2c::type_of<::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*>(),
                                                                                             ::i2c::type_of<::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oculusGraphURL, endpoint, idRequest, onSucceed, onFail);
}
inline ::OSCE::Web::DefaultRequestSender* OSCE::Web::DefaultRequestSender::New_ctor(::OSCE::Analytics::AnalyticsManager* instance) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OSCE::Web::DefaultRequestSender*>(instance));
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
