#pragma once
// IWYU pragma private; include "Unity/Mathematics/Geometry/Plane.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Plane)
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
// Forward declare root types
namespace Unity::Mathematics::Geometry {
struct Plane;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::Geometry::Plane);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::Geometry::Plane, "Unity.Mathematics.Geometry", "Plane");
// [DebuggerDisplay("{Normal}, {Distance}")]
// [Il2CppEagerStaticClassConstruction]
// Dependencies Unity.Mathematics.float4
namespace Unity::Mathematics::Geometry {
// Is value type: true
// CS Name: Unity.Mathematics.Geometry.Plane
struct CORDL_TYPE Plane {
public:
  // Declarations
  __declspec(property(get = get_Distance, put = set_Distance)) float_t Distance;

  __declspec(property(get = get_Flipped)) ::Unity::Mathematics::Geometry::Plane Flipped;

  __declspec(property(get = get_Normal, put = set_Normal)) ::Unity::Mathematics::float3 Normal;

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// @brief Method CheckPlaneIsNormalized, addr 0x6a4f364, size 0x1640, virtual false, abstract: false, final false
  inline void CheckPlaneIsNormalized();

  /// @brief Method CreateFromUnitNormalAndDistance, addr 0x6a4f15c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::Geometry::Plane CreateFromUnitNormalAndDistance(::Unity::Mathematics::float3 unitNormal, float_t distance);

  /// @brief Method CreateFromUnitNormalAndPointInPlane, addr 0x6a4f160, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::Geometry::Plane CreateFromUnitNormalAndPointInPlane(::Unity::Mathematics::float3 unitNormal, ::Unity::Mathematics::float3 pointInPlane);

  /// @brief Method Normalize, addr 0x6a4f1a4, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::Geometry::Plane Normalize(::Unity::Mathematics::Geometry::Plane plane);

  /// @brief Method Normalize, addr 0x6a4f244, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 Normalize(::Unity::Mathematics::float4 planeCoefficients);

  /// @brief Method Projection, addr 0x6a4f308, size 0x3c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 Projection(::Unity::Mathematics::float3 point);

  /// @brief Method SignedDistanceToPoint, addr 0x6a4f2e4, size 0x24, virtual false, abstract: false, final false
  inline float_t SignedDistanceToPoint(::Unity::Mathematics::float3 point);

  /// @brief Method .ctor, addr 0x6a4ee04, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(float_t coefficientA, float_t coefficientB, float_t coefficientC, float_t coefficientD);

  /// @brief Method .ctor, addr 0x6a4eeb4, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 normal, float_t distance);

  /// @brief Method .ctor, addr 0x6a4ef64, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 normal, ::Unity::Mathematics::float3 pointInPlane);

  /// @brief Method .ctor, addr 0x6a4f048, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 vector1InPlane, ::Unity::Mathematics::float3 vector2InPlane, ::Unity::Mathematics::float3 pointInPlane);

  /// @brief Method get_Distance, addr 0x6a4f194, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Distance();

  /// @brief Method get_Flipped, addr 0x6a4f344, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::Geometry::Plane get_Flipped();

  /// @brief Method get_Normal, addr 0x6a4f17c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_Normal();

  /// @brief Method op_Implicit, addr 0x6a4f360, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Implicit___Unity__Mathematics__float4(::Unity::Mathematics::Geometry::Plane plane);

  /// @brief Method set_Distance, addr 0x6a4f19c, size 0x8, virtual false, abstract: false, final false
  inline void set_Distance(float_t value);

  /// @brief Method set_Normal, addr 0x6a4f188, size 0xc, virtual false, abstract: false, final false
  inline void set_Normal(::Unity::Mathematics::float3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Plane();

  // Ctor Parameters [CppParam { name: "NormalAndDistance", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }]
  constexpr Plane(::Unity::Mathematics::float4 NormalAndDistance) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13458 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field NormalAndDistance, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::float4 NormalAndDistance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::Geometry::Plane, NormalAndDistance) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::Geometry::Plane) == 0x10, "Size mismatch!");

} // namespace Unity::Mathematics::Geometry
