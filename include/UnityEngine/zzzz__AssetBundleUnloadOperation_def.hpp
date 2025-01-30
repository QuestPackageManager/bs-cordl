#pragma once
// IWYU pragma private; include "UnityEngine/AssetBundleUnloadOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
CORDL_MODULE_EXPORT(AssetBundleUnloadOperation)
// Forward declare root types
namespace UnityEngine {
class AssetBundleUnloadOperation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetBundleUnloadOperation);
// Dependencies UnityEngine.AsyncOperation
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetBundleUnloadOperation
class CORDL_TYPE AssetBundleUnloadOperation : public ::UnityEngine::AsyncOperation {
public:
  // Declarations
  static inline ::UnityEngine::AssetBundleUnloadOperation* New_ctor();

  /// @brief Method WaitForCompletion, addr 0x4859d2c, size 0x3c, virtual false, abstract: false, final false
  inline void WaitForCompletion();

  /// @brief Method .ctor, addr 0x4859d68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleUnloadOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleUnloadOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleUnloadOperation(AssetBundleUnloadOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleUnloadOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleUnloadOperation(AssetBundleUnloadOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18824 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetBundleUnloadOperation, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AssetBundleUnloadOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetBundleUnloadOperation*, "UnityEngine", "AssetBundleUnloadOperation");
