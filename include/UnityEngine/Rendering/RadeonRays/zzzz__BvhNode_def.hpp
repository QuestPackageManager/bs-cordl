#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/BvhNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BvhNode)
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
struct BvhNode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RadeonRays::BvhNode);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::BvhNode, "UnityEngine.Rendering.RadeonRays", "BvhNode");
// Dependencies Unity.Mathematics.float3
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: true
// CS Name: UnityEngine.Rendering.RadeonRays.BvhNode
struct CORDL_TYPE BvhNode {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BvhNode();

  // Ctor Parameters [CppParam { name: "child0", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "child1", ty: "uint32_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "parent", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "update", ty: "uint32_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "aabb0_min", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "aabb0_max", ty: "::Unity::Mathematics::float3", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "aabb1_min", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "aabb1_max", ty:
  // "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }]
  constexpr BvhNode(uint32_t child0, uint32_t child1, uint32_t parent, uint32_t update, ::Unity::Mathematics::float3 aabb0_min, ::Unity::Mathematics::float3 aabb0_max,
                    ::Unity::Mathematics::float3 aabb1_min, ::Unity::Mathematics::float3 aabb1_max) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20437 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field child0, offset: 0x0, size: 0x4, def value: None
  uint32_t child0;

  /// @brief Field child1, offset: 0x4, size: 0x4, def value: None
  uint32_t child1;

  /// @brief Field parent, offset: 0x8, size: 0x4, def value: None
  uint32_t parent;

  /// @brief Field update, offset: 0xc, size: 0x4, def value: None
  uint32_t update;

  /// @brief Field aabb0_min, offset: 0x10, size: 0xc, def value: None
  ::Unity::Mathematics::float3 aabb0_min;

  /// @brief Field aabb0_max, offset: 0x1c, size: 0xc, def value: None
  ::Unity::Mathematics::float3 aabb0_max;

  /// @brief Field aabb1_min, offset: 0x28, size: 0xc, def value: None
  ::Unity::Mathematics::float3 aabb1_min;

  /// @brief Field aabb1_max, offset: 0x34, size: 0xc, def value: None
  ::Unity::Mathematics::float3 aabb1_max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhNode, child0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhNode, child1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhNode, parent) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhNode, update) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhNode, aabb0_min) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhNode, aabb0_max) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhNode, aabb1_min) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhNode, aabb1_max) == 0x34, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::BvhNode) == 0x40, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
