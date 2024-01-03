#pragma once
#include "UnityEngine/zzzz__AsyncOperation_impl.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
//  Writing Method size for method: ::UnityEngine::AssetBundleCreateRequest.get_assetBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AssetBundle* (::UnityEngine::AssetBundleCreateRequest::*)()>(
    &::UnityEngine::AssetBundleCreateRequest::get_assetBundle)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2c99f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetBundleCreateRequest*>::get(),
                                                                               "get_assetBundle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundleCreateRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AssetBundleCreateRequest::*)()>(&::UnityEngine::AssetBundleCreateRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c99f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetBundleCreateRequest*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::AssetBundle* UnityEngine::AssetBundleCreateRequest::get_assetBundle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetBundleCreateRequest*>::get(), "get_assetBundle",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundle*, false>(this, ___internal_method);
}
inline ::UnityEngine::AssetBundleCreateRequest* UnityEngine::AssetBundleCreateRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::AssetBundleCreateRequest*>());
}
inline void UnityEngine::AssetBundleCreateRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetBundleCreateRequest*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AssetBundleCreateRequest::AssetBundleCreateRequest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
