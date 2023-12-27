#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GetAssetBundleFileResult)
// Forward declare root types
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GetAssetBundleFileResult);
// Type: ::GetAssetBundleFileResult
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4413))
// CS Name: ::GetAssetBundleFileResult
struct CORDL_TYPE GetAssetBundleFileResult {
public:
  // Declarations
  /// @brief Method .ctor addr 0x234cdc8 size 0x10 virtual false final false
  inline void _ctor(bool isError, ::StringW assetBundlePath);

  // Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr GetAssetBundleFileResult(bool isError, ::StringW assetBundlePath) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GetAssetBundleFileResult();

  /// @brief Field isError, offset: 0x0, size: 0x1, def value: None
  bool isError;

  /// @brief Field assetBundlePath, offset: 0x8, size: 0x8, def value: None
  ::StringW assetBundlePath;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GetAssetBundleFileResult, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GetAssetBundleFileResult, "", "GetAssetBundleFileResult");
