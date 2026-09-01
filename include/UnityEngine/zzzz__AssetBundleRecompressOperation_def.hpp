#pragma once
// IWYU pragma private; include "UnityEngine\AssetBundleRecompressOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
CORDL_MODULE_EXPORT(AssetBundleRecompressOperation)
// Forward declare root types
namespace UnityEngine {
class AssetBundleRecompressOperation;
}
// Write type traits
MARK_REF_T(::UnityEngine::AssetBundleRecompressOperation*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AssetBundleRecompressOperation*, "UnityEngine", "AssetBundleRecompressOperation");
// Dependencies UnityEngine.AsyncOperation
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetBundleRecompressOperation
class CORDL_TYPE AssetBundleRecompressOperation : public ::UnityEngine::AsyncOperation {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleRecompressOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleRecompressOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleRecompressOperation(AssetBundleRecompressOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleRecompressOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleRecompressOperation(AssetBundleRecompressOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23095 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AssetBundleRecompressOperation) == 0x20, "Size mismatch!");

} // namespace UnityEngine
