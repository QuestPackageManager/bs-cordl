#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/zzzz__WebRequestQueueOperation_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::WebRequestQueueOperation.get_IsDone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::WebRequestQueueOperation::*)()>(
    &::UnityEngine::ResourceManagement::WebRequestQueueOperation::get_IsDone)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a4c1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>::get(), "get_IsDone",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::WebRequestQueueOperation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::WebRequestQueueOperation::*)(::UnityEngine::Networking::UnityWebRequest*)>(
    &::UnityEngine::ResourceManagement::WebRequestQueueOperation::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a4c1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::WebRequestQueueOperation.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::WebRequestQueueOperation::*)(
    ::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&::UnityEngine::ResourceManagement::WebRequestQueueOperation::Complete)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a4c224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>::get(), "Complete", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::ResourceManagement::WebRequestQueueOperation::__get_m_Completed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Completed;
}
constexpr bool const& UnityEngine::ResourceManagement::WebRequestQueueOperation::__get_m_Completed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Completed;
}
constexpr void UnityEngine::ResourceManagement::WebRequestQueueOperation::__set_m_Completed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Completed = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& UnityEngine::ResourceManagement::WebRequestQueueOperation::__get_Result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Result;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequestAsyncOperation*> const& UnityEngine::ResourceManagement::WebRequestQueueOperation::__get_Result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Result;
}
constexpr void UnityEngine::ResourceManagement::WebRequestQueueOperation::__set_Result(::UnityEngine::Networking::UnityWebRequestAsyncOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>*& UnityEngine::ResourceManagement::WebRequestQueueOperation::__get_OnComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnComplete;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>*> const&
UnityEngine::ResourceManagement::WebRequestQueueOperation::__get_OnComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnComplete;
}
constexpr void UnityEngine::ResourceManagement::WebRequestQueueOperation::__set_OnComplete(::System::Action_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& UnityEngine::ResourceManagement::WebRequestQueueOperation::__get_m_WebRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequest;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequest*> const& UnityEngine::ResourceManagement::WebRequestQueueOperation::__get_m_WebRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequest;
}
constexpr void UnityEngine::ResourceManagement::WebRequestQueueOperation::__set_m_WebRequest(::UnityEngine::Networking::UnityWebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WebRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::ResourceManagement::WebRequestQueueOperation::get_IsDone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>::get(), "get_IsDone",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::WebRequestQueueOperation* UnityEngine::ResourceManagement::WebRequestQueueOperation::New_ctor(::UnityEngine::Networking::UnityWebRequest* request) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>(request));
}
inline void UnityEngine::ResourceManagement::WebRequestQueueOperation::_ctor(::UnityEngine::Networking::UnityWebRequest* request) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
inline void UnityEngine::ResourceManagement::WebRequestQueueOperation::Complete(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>::get(), "Complete", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncOp);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation::WebRequestQueueOperation() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
