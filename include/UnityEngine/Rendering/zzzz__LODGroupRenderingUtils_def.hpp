#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupRenderingUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LODGroupRenderingUtils)
namespace UnityEngine::Rendering {
struct LODParameters;
}
namespace UnityEngine {
class LODGroup;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class LODGroupRenderingUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::LODGroupRenderingUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupRenderingUtils*, "UnityEngine.Rendering", "LODGroupRenderingUtils");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupRenderingUtils
class CORDL_TYPE LODGroupRenderingUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method CalculateFOVHalfAngle, addr 0x682c958, size 0x18, virtual false, abstract: false, final false
  static inline float_t CalculateFOVHalfAngle(float_t fieldOfView);

  /// @brief Method CalculateLODDistance, addr 0x682b894, size 0x8, virtual false, abstract: false, final false
  static inline float_t CalculateLODDistance(float_t relativeScreenHeight, float_t size);

  /// @brief Method CalculatePerspectiveDistance, addr 0x682c9c4, size 0x2c, virtual false, abstract: false, final false
  static inline float_t CalculatePerspectiveDistance(::UnityEngine::Vector3 objPosition, ::UnityEngine::Vector3 camPosition, float_t sqrScreenRelativeMetric);

  /// @brief Method CalculateScreenRelativeMetric, addr 0x682c970, size 0x54, virtual false, abstract: false, final false
  static inline float_t CalculateScreenRelativeMetric(::UnityEngine::Rendering::LODParameters lodParams, float_t lodBias);

  /// @brief Method CalculateSqrPerspectiveDistance, addr 0x682c9f0, size 0x28, virtual false, abstract: false, final false
  static inline float_t CalculateSqrPerspectiveDistance(::UnityEngine::Vector3 objPosition, ::UnityEngine::Vector3 camPosition, float_t sqrScreenRelativeMetric);

  /// @brief Method GetWorldReferencePoint, addr 0x682ca18, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetWorldReferencePoint(::UnityEngine::LODGroup* lodGroup);

  /// @brief Method GetWorldSpaceScale, addr 0x682ca5c, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetWorldSpaceScale(::UnityEngine::LODGroup* lodGroup);

  /// @brief Method GetWorldSpaceSize, addr 0x682caa0, size 0x38, virtual false, abstract: false, final false
  static inline float_t GetWorldSpaceSize(::UnityEngine::LODGroup* lodGroup);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroupRenderingUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LODGroupRenderingUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LODGroupRenderingUtils(LODGroupRenderingUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LODGroupRenderingUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LODGroupRenderingUtils(LODGroupRenderingUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17732 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LODGroupRenderingUtils) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
