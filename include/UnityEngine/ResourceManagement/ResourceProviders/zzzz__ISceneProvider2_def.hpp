#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISceneProvider2)
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ISceneProvider;
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
// Type: UnityEngine.ResourceManagement.ResourceProviders::ISceneProvider2
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14006))
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::ISceneProvider2*
class CORDL_TYPE ISceneProvider2 {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider"
  constexpr operator ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider"
  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* i___UnityEngine__ResourceManagement__ResourceProviders__ISceneProvider() noexcept;

  /// @brief Method ReleaseScene, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  ReleaseScene(::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
               ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle,
               ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions);

  // Ctor Parameters [CppParam { name: "", ty: "ISceneProvider2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISceneProvider2(ISceneProvider2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISceneProvider2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISceneProvider2(ISceneProvider2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2*, "UnityEngine.ResourceManagement.ResourceProviders", "ISceneProvider2");
