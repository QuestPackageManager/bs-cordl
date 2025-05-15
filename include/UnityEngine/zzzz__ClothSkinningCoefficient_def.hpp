#pragma once
// IWYU pragma private; include "UnityEngine/ClothSkinningCoefficient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ClothSkinningCoefficient)
// Forward declare root types
namespace UnityEngine {
struct ClothSkinningCoefficient;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ClothSkinningCoefficient);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ClothSkinningCoefficient
struct CORDL_TYPE ClothSkinningCoefficient {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClothSkinningCoefficient();

  // Ctor Parameters [CppParam { name: "maxDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "collisionSphereDistance", ty: "float_t", modifiers: "", def_value: None }]
  constexpr ClothSkinningCoefficient(float_t maxDistance, float_t collisionSphereDistance) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18813 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field maxDistance, offset: 0x0, size: 0x4, def value: None
  float_t maxDistance;

  /// @brief Field collisionSphereDistance, offset: 0x4, size: 0x4, def value: None
  float_t collisionSphereDistance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ClothSkinningCoefficient, maxDistance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ClothSkinningCoefficient, collisionSphereDistance) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ClothSkinningCoefficient, 0x8>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ClothSkinningCoefficient, "UnityEngine", "ClothSkinningCoefficient");
