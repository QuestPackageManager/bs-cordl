#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/BottomLevelLevelAccelStruct.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BottomLevelLevelAccelStruct)
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
struct BottomLevelLevelAccelStruct;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct, "UnityEngine.Rendering.RadeonRays", "BottomLevelLevelAccelStruct");
// Dependencies
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: true
// CS Name: UnityEngine.Rendering.RadeonRays.BottomLevelLevelAccelStruct
struct CORDL_TYPE BottomLevelLevelAccelStruct {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BottomLevelLevelAccelStruct();

  // Ctor Parameters [CppParam { name: "bvh", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "bvhOffset", ty: "uint32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "bvhLeaves", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "bvhLeavesOffset", ty:
  // "uint32_t", modifiers: "", def_value: None, comment: None }]
  constexpr BottomLevelLevelAccelStruct(::UnityEngine::GraphicsBuffer* bvh, uint32_t bvhOffset, ::UnityEngine::GraphicsBuffer* bvhLeaves, uint32_t bvhLeavesOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20422 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field bvh, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* bvh;

  /// @brief Field bvhOffset, offset: 0x8, size: 0x4, def value: None
  uint32_t bvhOffset;

  /// @brief Field bvhLeaves, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* bvhLeaves;

  /// @brief Field bvhLeavesOffset, offset: 0x18, size: 0x4, def value: None
  uint32_t bvhLeavesOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct, bvh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct, bvhOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct, bvhLeaves) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct, bvhLeavesOffset) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
