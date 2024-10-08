#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CullingSplit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingSplit)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CullingSplit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CullingSplit);
// Type: UnityEngine.Rendering::CullingSplit
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::CullingSplit
struct CORDL_TYPE CullingSplit {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CullingSplit();

  // Ctor Parameters [CppParam { name: "sphereCenter", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "sphereRadius", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "cullingPlaneOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cullingPlaneCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "cascadeBlendCullingFactor", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "nearPlane", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cullingMatrix", ty:
  // "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }]
  constexpr CullingSplit(::UnityEngine::Vector3 sphereCenter, float_t sphereRadius, int32_t cullingPlaneOffset, int32_t cullingPlaneCount, float_t cascadeBlendCullingFactor, float_t nearPlane,
                         ::UnityEngine::Matrix4x4 cullingMatrix) noexcept;

  /// @brief Field sphereCenter, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 sphereCenter;

  /// @brief Field sphereRadius, offset: 0xc, size: 0x4, def value: None
  float_t sphereRadius;

  /// @brief Field cullingPlaneOffset, offset: 0x10, size: 0x4, def value: None
  int32_t cullingPlaneOffset;

  /// @brief Field cullingPlaneCount, offset: 0x14, size: 0x4, def value: None
  int32_t cullingPlaneCount;

  /// @brief Field cascadeBlendCullingFactor, offset: 0x18, size: 0x4, def value: None
  float_t cascadeBlendCullingFactor;

  /// @brief Field nearPlane, offset: 0x1c, size: 0x4, def value: None
  float_t nearPlane;

  /// @brief Field cullingMatrix, offset: 0x20, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 cullingMatrix;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11210 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CullingSplit, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingSplit, sphereCenter) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingSplit, sphereRadius) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingSplit, cullingPlaneOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingSplit, cullingPlaneCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingSplit, cascadeBlendCullingFactor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingSplit, nearPlane) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingSplit, cullingMatrix) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CullingSplit, "UnityEngine.Rendering", "CullingSplit");
