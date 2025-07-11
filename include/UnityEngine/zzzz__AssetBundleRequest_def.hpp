#pragma once
// IWYU pragma private; include "UnityEngine/AssetBundleRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ResourceRequest_def.hpp"
CORDL_MODULE_EXPORT(AssetBundleRequest)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AssetBundleRequest;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetBundleRequest);
// Dependencies UnityEngine.ResourceRequest
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetBundleRequest
class CORDL_TYPE AssetBundleRequest : public ::UnityEngine::ResourceRequest {
public:
  // Declarations
  __declspec(property(get = get_allAssets)) ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> allAssets;

  __declspec(property(get = get_asset)) ::UnityW<::UnityEngine::Object> asset;

  /// @brief Method GetResult, addr 0x485809c, size 0x3c, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> GetResult();

  static inline ::UnityEngine::AssetBundleRequest* New_ctor();

  /// @brief Method .ctor, addr 0x4858120, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allAssets, addr 0x48580e4, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> get_allAssets();

  /// @brief Method get_asset, addr 0x48580d8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_asset();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleRequest(AssetBundleRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleRequest(AssetBundleRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18847 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetBundleRequest, 0x30>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AssetBundleRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetBundleRequest*, "UnityEngine", "AssetBundleRequest");
