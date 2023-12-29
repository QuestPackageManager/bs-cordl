#pragma once
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
// Type: UnityEngine.ResourceManagement.ResourceProviders::IAssetBundleResource
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14261))
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::IAssetBundleResource*
class CORDL_TYPE IAssetBundleResource {
public:
  // Declarations
  /// @brief Method GetAssetBundle addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::AssetBundle* GetAssetBundle();

  // Ctor Parameters [CppParam { name: "", ty: "IAssetBundleResource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAssetBundleResource(IAssetBundleResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAssetBundleResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAssetBundleResource(IAssetBundleResource const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*, "UnityEngine.ResourceManagement.ResourceProviders", "IAssetBundleResource");
