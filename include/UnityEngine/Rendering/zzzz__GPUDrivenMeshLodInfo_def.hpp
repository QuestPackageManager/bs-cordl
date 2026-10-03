#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenMeshLodInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUDrivenMeshLodInfo)
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUDrivenMeshLodInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUDrivenMeshLodInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUDrivenMeshLodInfo, "UnityEngine.Rendering", "GPUDrivenMeshLodInfo");
// [UsedByNativeCode]
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUDrivenMeshLodInfo
struct CORDL_TYPE GPUDrivenMeshLodInfo {
public:
  // Declarations
  __declspec(property(get = get_lodSelectionActive)) bool lodSelectionActive;

  /// @brief Method get_lodSelectionActive, addr 0x6f8a2a4, size 0x10, virtual false, abstract: false, final false
  inline bool get_lodSelectionActive();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUDrivenMeshLodInfo();

  // Ctor Parameters [CppParam { name: "levelCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lodSlope", ty: "float_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "lodBias", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr GPUDrivenMeshLodInfo(int32_t levelCount, float_t lodSlope, float_t lodBias) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10492 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field levelCount, offset: 0x0, size: 0x4, def value: None
  int32_t levelCount;

  /// @brief Field lodSlope, offset: 0x4, size: 0x4, def value: None
  float_t lodSlope;

  /// @brief Field lodBias, offset: 0x8, size: 0x4, def value: None
  float_t lodBias;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenMeshLodInfo, levelCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenMeshLodInfo, lodSlope) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenMeshLodInfo, lodBias) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::GPUDrivenMeshLodInfo) == 0xc, "Size mismatch!");

} // namespace UnityEngine::Rendering
