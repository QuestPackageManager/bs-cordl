#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssetLoadMode)
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct AssetLoadMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode);
// Type: UnityEngine.ResourceManagement.ResourceProviders::AssetLoadMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::AssetLoadMode
struct CORDL_TYPE AssetLoadMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AssetLoadMode_Unwrapped
  enum struct __AssetLoadMode_Unwrapped : int32_t {
    __E_RequestedAssetAndDependencies = static_cast<int32_t>(0x0),
    __E_AllPackedAssetsAndDependencies = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AssetLoadMode_Unwrapped() const noexcept {
    return static_cast<__AssetLoadMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__AssetLoadMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetLoadMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AssetLoadMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllPackedAssetsAndDependencies value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode const AllPackedAssetsAndDependencies;

  /// @brief Field RequestedAssetAndDependencies value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode const RequestedAssetAndDependencies;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode, "UnityEngine.ResourceManagement.ResourceProviders", "AssetLoadMode");
