#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/Transform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Transform)
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
struct Transform;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RadeonRays::Transform);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::Transform, "UnityEngine.Rendering.RadeonRays", "Transform");
// Dependencies Unity.Mathematics.float4
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: true
// CS Name: UnityEngine.Rendering.RadeonRays.Transform
struct CORDL_TYPE Transform {
public:
  // Declarations
  /// @brief Method Identity, addr 0x6dfcf14, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RadeonRays::Transform Identity();

  /// @brief Method Inverse, addr 0x6dfd0ec, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RadeonRays::Transform Inverse();

  /// @brief Method Scale, addr 0x6dfcf78, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RadeonRays::Transform Scale(::Unity::Mathematics::float3 scale);

  /// @brief Method TRS, addr 0x6dfcf98, size 0x154, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RadeonRays::Transform TRS(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::float3 rotation, ::Unity::Mathematics::float3 scale);

  /// @brief Method Translation, addr 0x6dfcf3c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RadeonRays::Transform Translation(::Unity::Mathematics::float3 translation);

  /// @brief Method .ctor, addr 0x6dfcef8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4 row0, ::Unity::Mathematics::float4 row1, ::Unity::Mathematics::float4 row2);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Transform();

  // Ctor Parameters [CppParam { name: "row0", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }, CppParam { name: "row1", ty: "::Unity::Mathematics::float4",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "row2", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }]
  constexpr Transform(::Unity::Mathematics::float4 row0, ::Unity::Mathematics::float4 row1, ::Unity::Mathematics::float4 row2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20436 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field row0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::float4 row0;

  /// @brief Field row1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::float4 row1;

  /// @brief Field row2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::float4 row2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::Transform, row0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::Transform, row1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::Transform, row2) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::Transform) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
