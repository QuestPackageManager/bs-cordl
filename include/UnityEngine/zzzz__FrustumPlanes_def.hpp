#pragma once
// IWYU pragma private; include "UnityEngine/FrustumPlanes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(FrustumPlanes)
// Forward declare root types
namespace UnityEngine {
struct FrustumPlanes;
}
// Write type traits
MARK_VAL_T(::UnityEngine::FrustumPlanes);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.FrustumPlanes
struct CORDL_TYPE FrustumPlanes {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr FrustumPlanes();

  // Ctor Parameters [CppParam { name: "left", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "right", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bottom",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "top", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "zNear", ty: "float_t", modifiers: "", def_value: None
  // }, CppParam { name: "zFar", ty: "float_t", modifiers: "", def_value: None }]
  constexpr FrustumPlanes(float_t left, float_t right, float_t bottom, float_t top, float_t zNear, float_t zFar) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10234 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field left, offset: 0x0, size: 0x4, def value: None
  float_t left;

  /// @brief Field right, offset: 0x4, size: 0x4, def value: None
  float_t right;

  /// @brief Field bottom, offset: 0x8, size: 0x4, def value: None
  float_t bottom;

  /// @brief Field top, offset: 0xc, size: 0x4, def value: None
  float_t top;

  /// @brief Field zNear, offset: 0x10, size: 0x4, def value: None
  float_t zNear;

  /// @brief Field zFar, offset: 0x14, size: 0x4, def value: None
  float_t zFar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::FrustumPlanes, left) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrustumPlanes, right) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrustumPlanes, bottom) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrustumPlanes, top) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrustumPlanes, zNear) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrustumPlanes, zFar) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::FrustumPlanes, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FrustumPlanes, "UnityEngine", "FrustumPlanes");
