#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AABB.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AABB)
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct AABB;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::AABB);
// Dependencies Unity.Mathematics.float3
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.AABB
struct CORDL_TYPE AABB {
public:
  // Declarations
  __declspec(property(get = get_max)) ::Unity::Mathematics::float3 max;

  __declspec(property(get = get_min)) ::Unity::Mathematics::float3 min;

  /// @brief Method RotateExtents, addr 0x6652ff0, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 RotateExtents(::Unity::Mathematics::float3 extents, ::Unity::Mathematics::float3 m0, ::Unity::Mathematics::float3 m1, ::Unity::Mathematics::float3 m2);

  /// @brief Method ToString, addr 0x6652f18, size 0xd8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Transform, addr 0x6653064, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::AABB Transform(::Unity::Mathematics::float4x4 transform, ::UnityEngine::Rendering::AABB localBounds);

  /// @brief Method get_max, addr 0x6652ef8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_max();

  /// @brief Method get_min, addr 0x6652ed8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_min();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AABB();

  // Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "extents", ty: "::Unity::Mathematics::float3", modifiers: "",
  // def_value: None }]
  constexpr AABB(::Unity::Mathematics::float3 center, ::Unity::Mathematics::float3 extents) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17561 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field center, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::float3 center;

  /// @brief Field extents, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::float3 extents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::AABB, center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AABB, extents) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AABB, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AABB, "UnityEngine.Rendering", "AABB");
