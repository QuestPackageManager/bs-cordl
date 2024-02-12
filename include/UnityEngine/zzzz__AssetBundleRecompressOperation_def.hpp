#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
CORDL_MODULE_EXPORT(AssetBundleRecompressOperation)
// Forward declare root types
namespace UnityEngine {
class AssetBundleRecompressOperation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetBundleRecompressOperation);
// Type: UnityEngine::AssetBundleRecompressOperation
// SizeInfo { instance_size: 32, native_size: 16, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8945))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16214))
// CS Name: ::UnityEngine::AssetBundleRecompressOperation*
class CORDL_TYPE AssetBundleRecompressOperation : public ::UnityEngine::AsyncOperation {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleRecompressOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleRecompressOperation(AssetBundleRecompressOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleRecompressOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleRecompressOperation(AssetBundleRecompressOperation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleRecompressOperation();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetBundleRecompressOperation, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AssetBundleRecompressOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetBundleRecompressOperation*, "UnityEngine", "AssetBundleRecompressOperation");
