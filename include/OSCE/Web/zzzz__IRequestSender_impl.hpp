#pragma once
// IWYU pragma private; include "OSCE/Web/IRequestSender.hpp"
#include "OSCE/Web/zzzz__IRequestSender_def.hpp"
#include "OSCE/Analytics/zzzz__GetIdParams_def.hpp"
#include "OSCE/Analytics/zzzz__LoggerAnalyticsBatch_def.hpp"
#include "OSCE/Web/zzzz__FailedPostRequest_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::OSCE::Web::IRequestSender.SendBatchRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OSCE::Web::IRequestSender::*)(::StringW, ::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*, ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*,
                                                      ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*)>(&::OSCE::Web::IRequestSender::SendBatchRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Web::IRequestSender*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Web::IRequestSender*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Web::IRequestSender.SendIdRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OSCE::Web::IRequestSender::*)(::StringW, ::StringW, ::OSCE::Analytics::GetIdParams, ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>*,
                                                      ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>*)>(&::OSCE::Web::IRequestSender::SendIdRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Web::IRequestSender*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Web::IRequestSender*>::get(), 1));
    return ___internal_method;
  }
};
inline void OSCE::Web::IRequestSender::SendBatchRequest(::StringW oculusGraphURL, ::StringW endpoint, ::OSCE::Analytics::LoggerAnalyticsBatch* batch,
                                                        ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed,
                                                        ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Web::IRequestSender*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oculusGraphURL, endpoint, batch, onSucceed, onFail);
}
inline void OSCE::Web::IRequestSender::SendIdRequest(::StringW oculusGraphURL, ::StringW endpoint, ::OSCE::Analytics::GetIdParams idRequest,
                                                     ::System::Action_2<::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*>* onSucceed,
                                                     ::System::Action_2<::System::Exception*, ::OSCE::Web::FailedPostRequest>* onFail) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Web::IRequestSender*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oculusGraphURL, endpoint, idRequest, onSucceed, onFail);
}
