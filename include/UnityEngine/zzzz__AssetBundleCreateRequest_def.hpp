#pragma once
// IWYU pragma private; include "UnityEngine/AssetBundleCreateRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
CORDL_MODULE_EXPORT(AssetBundleCreateRequest)
namespace UnityEngine {
class AssetBundle;
}
// Forward declare root types
namespace UnityEngine {
class AssetBundleCreateRequest;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetBundleCreateRequest);
// Type: UnityEngine::AssetBundleCreateRequest
// SizeInfo { instance_size: 32, native_size: 16, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AssetBundleCreateRequest*
class CORDL_TYPE AssetBundleCreateRequest : public ::UnityEngine::AsyncOperation {
public:
  // Declarations
  __declspec(property(get = get_assetBundle)) ::UnityW<::UnityEngine::AssetBundle> assetBundle;

  static inline ::UnityEngine::AssetBundleCreateRequest* New_ctor();

  /// @brief Method .ctor, addr 0x47f5720, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetBundle, addr 0x47f56e4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AssetBundle> get_assetBundle();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleCreateRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleCreateRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleCreateRequest(AssetBundleCreateRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleCreateRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleCreateRequest(AssetBundleCreateRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18736 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetBundleCreateRequest, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AssetBundleCreateRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetBundleCreateRequest*, "UnityEngine", "AssetBundleCreateRequest");
