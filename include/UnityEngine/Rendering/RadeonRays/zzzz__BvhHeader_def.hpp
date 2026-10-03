#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/BvhHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BvhHeader)
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
struct BvhHeader;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RadeonRays::BvhHeader);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::BvhHeader, "UnityEngine.Rendering.RadeonRays", "BvhHeader");
// Dependencies Unity.Mathematics.float3, Unity.Mathematics.uint3
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: true
// CS Name: UnityEngine.Rendering.RadeonRays.BvhHeader
struct CORDL_TYPE BvhHeader {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BvhHeader();

  // Ctor Parameters [CppParam { name: "internalNodeCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "leafNodeCount", ty: "uint32_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "root", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "unused", ty: "uint32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "globalAabbMin", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "globalAabbMax", ty:
  // "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "unused3", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "unused4", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value: None, comment: None }]
  constexpr BvhHeader(uint32_t internalNodeCount, uint32_t leafNodeCount, uint32_t root, uint32_t unused, ::Unity::Mathematics::float3 globalAabbMin, ::Unity::Mathematics::float3 globalAabbMax,
                      ::Unity::Mathematics::uint3 unused3, ::Unity::Mathematics::uint3 unused4) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20438 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field internalNodeCount, offset: 0x0, size: 0x4, def value: None
  uint32_t internalNodeCount;

  /// @brief Field leafNodeCount, offset: 0x4, size: 0x4, def value: None
  uint32_t leafNodeCount;

  /// @brief Field root, offset: 0x8, size: 0x4, def value: None
  uint32_t root;

  /// @brief Field unused, offset: 0xc, size: 0x4, def value: None
  uint32_t unused;

  /// @brief Field globalAabbMin, offset: 0x10, size: 0xc, def value: None
  ::Unity::Mathematics::float3 globalAabbMin;

  /// @brief Field globalAabbMax, offset: 0x1c, size: 0xc, def value: None
  ::Unity::Mathematics::float3 globalAabbMax;

  /// @brief Field unused3, offset: 0x28, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 unused3;

  /// @brief Field unused4, offset: 0x34, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 unused4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhHeader, internalNodeCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhHeader, leafNodeCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhHeader, root) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhHeader, unused) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhHeader, globalAabbMin) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhHeader, globalAabbMax) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhHeader, unused3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhHeader, unused4) == 0x34, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::BvhHeader) == 0x40, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
