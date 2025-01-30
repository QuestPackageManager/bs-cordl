#pragma once
// IWYU pragma private; include "Unity/Mathematics/Geometry/Plane.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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

  /// @brief Method CheckPlaneIsNormalized, addr 0x46723f4, size 0x224, virtual false, abstract: false, final false
  inline void CheckPlaneIsNormalized();

  /// @brief Method CreateFromUnitNormalAndDistance, addr 0x4672204, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::Geometry::Plane CreateFromUnitNormalAndDistance(::Unity::Mathematics::float3 unitNormal, float_t distance);

  /// @brief Method CreateFromUnitNormalAndPointInPlane, addr 0x4672208, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::Geometry::Plane CreateFromUnitNormalAndPointInPlane(::Unity::Mathematics::float3 unitNormal, ::Unity::Mathematics::float3 pointInPlane);

  /// @brief Method Normalize, addr 0x467224c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::Geometry::Plane Normalize(::Unity::Mathematics::Geometry::Plane plane);

  /// @brief Method Normalize, addr 0x46722e0, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 Normalize(::Unity::Mathematics::float4 planeCoefficients);

  /// @brief Method Projection, addr 0x4672398, size 0x3c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 Projection(::Unity::Mathematics::float3 point);

  /// @brief Method SignedDistanceToPoint, addr 0x4672374, size 0x24, virtual false, abstract: false, final false
  inline float_t SignedDistanceToPoint(::Unity::Mathematics::float3 point);

  /// @brief Method .ctor, addr 0x4671ef0, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(float_t coefficientA, float_t coefficientB, float_t coefficientC, float_t coefficientD);

  /// @brief Method .ctor, addr 0x4671f98, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 normal, float_t distance);

  /// @brief Method .ctor, addr 0x4672040, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 normal, ::Unity::Mathematics::float3 pointInPlane);

  /// @brief Method .ctor, addr 0x4672110, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 vector1InPlane, ::Unity::Mathematics::float3 vector2InPlane, ::Unity::Mathematics::float3 pointInPlane);

  /// @brief Method get_Distance, addr 0x467223c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Distance();

  /// @brief Method get_Flipped, addr 0x46723d4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::Geometry::Plane get_Flipped();

  /// @brief Method get_Normal, addr 0x4672224, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_Normal();

  /// @brief Method op_Implicit, addr 0x46723f0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 op_Implicit___Unity__Mathematics__float4(::Unity::Mathematics::Geometry::Plane plane);

  /// @brief Method set_Distance, addr 0x4672244, size 0x8, virtual false, abstract: false, final false
  inline void set_Distance(float_t value);

  /// @brief Method set_Normal, addr 0x4672230, size 0xc, virtual false, abstract: false, final false
  inline void set_Normal(::Unity::Mathematics::float3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Plane();

  // Ctor Parameters [CppParam { name: "NormalAndDistance", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }]
  constexpr Plane(::Unity::Mathematics::float4 NormalAndDistance) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10032 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field NormalAndDistance, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::float4 NormalAndDistance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::Geometry::Plane, NormalAndDistance) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::Geometry::Plane, 0x10>, "Size mismatch!");

} // namespace Unity::Mathematics::Geometry
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::Geometry::Plane, "Unity.Mathematics.Geometry", "Plane");
