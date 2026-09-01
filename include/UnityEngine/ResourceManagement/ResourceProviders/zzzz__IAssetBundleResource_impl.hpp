#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\ResourceProviders\IAssetBundleResource.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IAssetBundleResource_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource.GetAssetBundle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AssetBundle> (::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource::GetAssetBundle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::AssetBundle> UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource::GetAssetBundle() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AssetBundle>>(this, ___internal_method);
}
