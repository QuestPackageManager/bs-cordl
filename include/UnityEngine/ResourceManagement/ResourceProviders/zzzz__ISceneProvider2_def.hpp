#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/ISceneProvider2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ISceneProvider_def.hpp"
CORDL_MODULE_EXPORT(ISceneProvider2)
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ISceneProvider2;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2);
// Dependencies UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider2
class CORDL_TYPE ISceneProvider2 {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider"
  constexpr operator ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*() noexcept;

  /// @brief Method ReleaseScene, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  ReleaseScene(::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
               ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle,
               ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions);

  /// @brief Convert to "::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider"
  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* i___UnityEngine__ResourceManagement__ResourceProviders__ISceneProvider() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ISceneProvider2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISceneProvider2(ISceneProvider2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15673 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2*, "UnityEngine.ResourceManagement.ResourceProviders", "ISceneProvider2");
