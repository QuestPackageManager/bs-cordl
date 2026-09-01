#pragma once
// IWYU pragma private; include "OSCE\Web\IRequestSender.hpp"
#include "OSCE/Web/zzzz__IRequestSender_def.hpp"
#include "OSCE/Analytics/zzzz__GetIdParams_def.hpp"
#include "OSCE/Analytics/zzzz__LoggerAnalyticsBatch_def.hpp"
#include "OSCE/Web/zzzz__FailedPostRequest_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::OSCE::Web::IRequestSender.SendBatchRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::OSCE::Web::IRequestSender::*)(::StringW, ::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*, ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*,
                                                      ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*)>(&::OSCE::Web::IRequestSender::SendBatchRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Web::IRequestSender*>(), { ::i2c::class_of<::OSCE::Web::IRequestSender*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::IRequestSender.SendIdRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::OSCE::Web::IRequestSender::*)(::StringW, ::StringW, ::OSCE::Analytics::GetIdParams, ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*,
                                                      ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*)>(&::OSCE::Web::IRequestSender::SendIdRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Web::IRequestSender*>(), { ::i2c::class_of<::OSCE::Web::IRequestSender*>(), 1 }));
    return ___internal_method;
  }
};
inline void OSCE::Web::IRequestSender::SendBatchRequest(::StringW oculusGraphURL, ::StringW endpoint, ::OSCE::Analytics::LoggerAnalyticsBatch* batch,
                                                        ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed,
                                                        ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Web::IRequestSender*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oculusGraphURL, endpoint, batch, onSucceed, onFail);
}
inline void OSCE::Web::IRequestSender::SendIdRequest(::StringW oculusGraphURL, ::StringW endpoint, ::OSCE::Analytics::GetIdParams idRequest,
                                                     ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed,
                                                     ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Web::IRequestSender*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oculusGraphURL, endpoint, idRequest, onSucceed, onFail);
}
