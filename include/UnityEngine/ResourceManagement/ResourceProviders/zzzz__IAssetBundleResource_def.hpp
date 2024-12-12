#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/IAssetBundleResource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAssetBundleResource)
namespace UnityEngine {
class AssetBundle;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IAssetBundleResource;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource);
// Dependencies
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.IAssetBundleResource
class CORDL_TYPE IAssetBundleResource {
public:
  // Declarations
  /// @brief Method GetAssetBundle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::AssetBundle> GetAssetBundle();

  // Ctor Parameters [CppParam { name: "", ty: "IAssetBundleResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAssetBundleResource(IAssetBundleResource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15646 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*, "UnityEngine.ResourceManagement.ResourceProviders", "IAssetBundleResource");
