#pragma once
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IAssetBundleResource_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource.GetAssetBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AssetBundle> (
    ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource::GetAssetBundle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>::get(), 0));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::AssetBundle> UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource::GetAssetBundle() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AssetBundle>, false>(this, ___internal_method);
}
