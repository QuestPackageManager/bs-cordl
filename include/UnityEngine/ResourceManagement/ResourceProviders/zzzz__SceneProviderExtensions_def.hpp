#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SceneProviderExtensions)
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
class SceneProviderExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::SceneProviderExtensions);
// Type: UnityEngine.ResourceManagement.ResourceProviders::SceneProviderExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14007))
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::SceneProviderExtensions*
class CORDL_TYPE SceneProviderExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ReleaseScene, addr 0x2bd753c, size 0x1f8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  ReleaseScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* provider, ::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
               ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle,
               ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions);

  // Ctor Parameters [CppParam { name: "", ty: "SceneProviderExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneProviderExtensions(SceneProviderExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneProviderExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneProviderExtensions(SceneProviderExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneProviderExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::SceneProviderExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::SceneProviderExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::SceneProviderExtensions*, "UnityEngine.ResourceManagement.ResourceProviders", "SceneProviderExtensions");
