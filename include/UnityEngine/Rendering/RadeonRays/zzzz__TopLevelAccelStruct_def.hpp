#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/TopLevelAccelStruct.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TopLevelAccelStruct)
namespace System {
class IDisposable;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
struct TopLevelAccelStruct;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct, "UnityEngine.Rendering.RadeonRays", "TopLevelAccelStruct");
// Dependencies UnityEngine.GraphicsBuffer::Target
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: true
// CS Name: UnityEngine.Rendering.RadeonRays.TopLevelAccelStruct
struct CORDL_TYPE TopLevelAccelStruct {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6dfc520, size 0x34, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TopLevelAccelStruct();

  // Ctor Parameters [CppParam { name: "topLevelBvh", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottomLevelBvhs", ty:
  // "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceInfos", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "instanceCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
  constexpr TopLevelAccelStruct(::UnityEngine::GraphicsBuffer* topLevelBvh, ::UnityEngine::GraphicsBuffer* bottomLevelBvhs, ::UnityEngine::GraphicsBuffer* instanceInfos,
                                uint32_t instanceCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20425 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field instanceInfoTarget value: I32(16)
  static ::UnityEngine::GraphicsBuffer_Target const instanceInfoTarget;

  /// @brief Field topLevelBvhTarget value: I32(16)
  static ::UnityEngine::GraphicsBuffer_Target const topLevelBvhTarget;

  /// @brief Field topLevelBvh, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* topLevelBvh;

  /// @brief Field bottomLevelBvhs, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* bottomLevelBvhs;

  /// @brief Field instanceInfos, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* instanceInfos;

  /// @brief Field instanceCount, offset: 0x18, size: 0x4, def value: None
  uint32_t instanceCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct, topLevelBvh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct, bottomLevelBvhs) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct, instanceInfos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct, instanceCount) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
