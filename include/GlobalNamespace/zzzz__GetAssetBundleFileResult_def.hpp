#pragma once
// IWYU pragma private; include "GlobalNamespace/GetAssetBundleFileResult.hpp"
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
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GetAssetBundleFileResult
struct CORDL_TYPE GetAssetBundleFileResult {
public:
  // Declarations
  /// @brief Field Error, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_Error, put = setStaticF_Error)) ::GlobalNamespace::GetAssetBundleFileResult Error;

  /// @brief Method Success, addr 0x26d4a30, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::GetAssetBundleFileResult Success(::StringW assetBundlePath);

  /// @brief Method .ctor, addr 0x26d4a20, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool isError, ::StringW assetBundlePath);

  static inline ::GlobalNamespace::GetAssetBundleFileResult getStaticF_Error();

  static inline void setStaticF_Error(::GlobalNamespace::GetAssetBundleFileResult value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GetAssetBundleFileResult();

  // Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr GetAssetBundleFileResult(bool isError, ::StringW assetBundlePath) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13018 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field isError, offset: 0x0, size: 0x1, def value: None
  bool isError;

  /// @brief Field assetBundlePath, offset: 0x8, size: 0x8, def value: None
  ::StringW assetBundlePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetAssetBundleFileResult, isError) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetAssetBundleFileResult, assetBundlePath) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GetAssetBundleFileResult, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GetAssetBundleFileResult, "", "GetAssetBundleFileResult");
