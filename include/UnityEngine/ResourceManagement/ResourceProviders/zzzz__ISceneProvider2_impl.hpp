#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/ISceneProvider2.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ISceneProvider2_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ISceneProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2.ReleaseScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>,
    ::UnityEngine::SceneManagement::UnloadSceneOptions)>(&::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2::ReleaseScene)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider"
constexpr UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2::operator ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider"
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*
UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2::i___UnityEngine__ResourceManagement__ResourceProviders__ISceneProvider() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>(static_cast<void*>(this));
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2::ReleaseScene(
    ::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle,
    ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      this, ___internal_method, resourceManager, sceneLoadHandle, unloadOptions);
}
