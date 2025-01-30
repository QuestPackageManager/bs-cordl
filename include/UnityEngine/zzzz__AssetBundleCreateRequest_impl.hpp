#pragma once
// IWYU pragma private; include "UnityEngine/AssetBundleCreateRequest.hpp"
#include "UnityEngine/zzzz__AsyncOperation_impl.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
//  Writing Method size for method: ::UnityEngine::AssetBundleCreateRequest.get_assetBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AssetBundle> (::UnityEngine::AssetBundleCreateRequest::*)()>(
    &::UnityEngine::AssetBundleCreateRequest::get_assetBundle)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4859c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetBundleCreateRequest*>::get(),
                                                                               "get_assetBundle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundleCreateRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AssetBundleCreateRequest::*)()>(&::UnityEngine::AssetBundleCreateRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4859c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetBundleCreateRequest*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::AssetBundle> UnityEngine::AssetBundleCreateRequest::get_assetBundle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetBundleCreateRequest*>::get(), "get_assetBundle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AssetBundle>, false>(this, ___internal_method);
}
inline void UnityEngine::AssetBundleCreateRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetBundleCreateRequest*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::AssetBundleCreateRequest* UnityEngine::AssetBundleCreateRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AssetBundleCreateRequest*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AssetBundleCreateRequest::AssetBundleCreateRequest() {}
