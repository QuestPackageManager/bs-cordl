#pragma once
// IWYU pragma private; include "UnityEngine/MeshColliderCookingOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshColliderCookingOptions)
// Forward declare root types
namespace UnityEngine {
struct MeshColliderCookingOptions;
}
// Write type traits
MARK_VAL_T(::UnityEngine::MeshColliderCookingOptions);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.MeshColliderCookingOptions
struct CORDL_TYPE MeshColliderCookingOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MeshColliderCookingOptions_Unwrapped
  enum struct __MeshColliderCookingOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_InflateConvexMesh = static_cast<int32_t>(0x1),
    __E_CookForFasterSimulation = static_cast<int32_t>(0x2),
    __E_EnableMeshCleaning = static_cast<int32_t>(0x4),
    __E_WeldColocatedVertices = static_cast<int32_t>(0x8),
    __E_UseFastMidphase = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MeshColliderCookingOptions_Unwrapped() const noexcept {
    return static_cast<__MeshColliderCookingOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshColliderCookingOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MeshColliderCookingOptions(int32_t value__) noexcept;

  /// @brief Field CookForFasterSimulation value: I32(2)
  static ::UnityEngine::MeshColliderCookingOptions const CookForFasterSimulation;

  /// @brief Field EnableMeshCleaning value: I32(4)
  static ::UnityEngine::MeshColliderCookingOptions const EnableMeshCleaning;

  /// @brief Field InflateConvexMesh value: I32(1)
  static ::UnityEngine::MeshColliderCookingOptions const InflateConvexMesh;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::MeshColliderCookingOptions const None;

  /// @brief Field UseFastMidphase value: I32(16)
  static ::UnityEngine::MeshColliderCookingOptions const UseFastMidphase;

  /// @brief Field WeldColocatedVertices value: I32(8)
  static ::UnityEngine::MeshColliderCookingOptions const WeldColocatedVertices;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15710 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::MeshColliderCookingOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::MeshColliderCookingOptions, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MeshColliderCookingOptions, "UnityEngine", "MeshColliderCookingOptions");
