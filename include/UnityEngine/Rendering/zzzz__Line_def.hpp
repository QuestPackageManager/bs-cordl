#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Line.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Line)
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct Line;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Line);
// Dependencies Unity.Mathematics.float3
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.Line
struct CORDL_TYPE Line {
public:
  // Declarations
  /// @brief Method LineOfPlaneIntersectingPlane, addr 0x66584e4, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Line LineOfPlaneIntersectingPlane(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method PlaneContainingLineAndPoint, addr 0x6658544, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 PlaneContainingLineAndPoint(::UnityEngine::Rendering::Line a, ::Unity::Mathematics::float3 b);

  /// @brief Method PlaneContainingLineWithNormalPerpendicularToVector, addr 0x66585a0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 PlaneContainingLineWithNormalPerpendicularToVector(::UnityEngine::Rendering::Line a, ::Unity::Mathematics::float3 b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Line();

  // Ctor Parameters [CppParam { name: "m", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "t", ty: "::Unity::Mathematics::float3", modifiers: "", def_value:
  // None }]
  constexpr Line(::Unity::Mathematics::float3 m, ::Unity::Mathematics::float3 t) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17576 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::float3 m;

  /// @brief Field t, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::float3 t;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Line, m) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Line, t) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Line, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Line, "UnityEngine.Rendering", "Line");
