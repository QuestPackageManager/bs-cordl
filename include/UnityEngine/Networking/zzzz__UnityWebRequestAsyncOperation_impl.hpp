#pragma once
#include "UnityEngine/zzzz__AsyncOperation_impl.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAsyncOperation.get_webRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (::UnityEngine::Networking::UnityWebRequestAsyncOperation::*)()>(
    &::UnityEngine::Networking::UnityWebRequestAsyncOperation::get_webRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ead9cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get(),
                                                                               "get_webRequest", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAsyncOperation.set_webRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequestAsyncOperation::*)(::UnityEngine::Networking::UnityWebRequest*)>(
    &::UnityEngine::Networking::UnityWebRequestAsyncOperation::set_webRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ead9d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get(), "set_webRequest", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAsyncOperation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequestAsyncOperation::*)()>(
    &::UnityEngine::Networking::UnityWebRequestAsyncOperation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ead9dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Networking::UnityWebRequest*& UnityEngine::Networking::UnityWebRequestAsyncOperation::__get__webRequest_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____webRequest_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequest*> const& UnityEngine::Networking::UnityWebRequestAsyncOperation::__get__webRequest_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____webRequest_k__BackingField;
}
constexpr void UnityEngine::Networking::UnityWebRequestAsyncOperation::__set__webRequest_k__BackingField(::UnityEngine::Networking::UnityWebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____webRequest_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequestAsyncOperation::get_webRequest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get(),
                                                                             "get_webRequest", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*, false>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequestAsyncOperation::set_webRequest(::UnityEngine::Networking::UnityWebRequest* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get(), "set_webRequest", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* UnityEngine::Networking::UnityWebRequestAsyncOperation::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>());
}
inline void UnityEngine::Networking::UnityWebRequestAsyncOperation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation::UnityWebRequestAsyncOperation() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
