#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceOcclusionCullerShaderVariables.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceOcclusionCullerShaderVariables)
// Forward declare root types
namespace UnityEngine::Rendering {
struct InstanceOcclusionCullerShaderVariables;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceOcclusionCullerShaderVariables
struct CORDL_TYPE InstanceOcclusionCullerShaderVariables {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceOcclusionCullerShaderVariables();

  // Ctor Parameters [CppParam { name: "_DrawInfoAllocIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_DrawInfoCount", ty: "uint32_t", modifiers: "", def_value: None },
  // CppParam { name: "_InstanceInfoAllocIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_InstanceInfoCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "_BoundingSphereInstanceDataAddress", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_DebugCounterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "_InstanceMultiplierShift", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_InstanceOcclusionCullerPad0", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InstanceOcclusionCullerShaderVariables(uint32_t _DrawInfoAllocIndex, uint32_t _DrawInfoCount, uint32_t _InstanceInfoAllocIndex, uint32_t _InstanceInfoCount,
                                                   int32_t _BoundingSphereInstanceDataAddress, int32_t _DebugCounterIndex, int32_t _InstanceMultiplierShift,
                                                   int32_t _InstanceOcclusionCullerPad0) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17703 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field _DrawInfoAllocIndex, offset: 0x0, size: 0x4, def value: None
  uint32_t _DrawInfoAllocIndex;

  /// @brief Field _DrawInfoCount, offset: 0x4, size: 0x4, def value: None
  uint32_t _DrawInfoCount;

  /// @brief Field _InstanceInfoAllocIndex, offset: 0x8, size: 0x4, def value: None
  uint32_t _InstanceInfoAllocIndex;

  /// @brief Field _InstanceInfoCount, offset: 0xc, size: 0x4, def value: None
  uint32_t _InstanceInfoCount;

  /// @brief Field _BoundingSphereInstanceDataAddress, offset: 0x10, size: 0x4, def value: None
  int32_t _BoundingSphereInstanceDataAddress;

  /// @brief Field _DebugCounterIndex, offset: 0x14, size: 0x4, def value: None
  int32_t _DebugCounterIndex;

  /// @brief Field _InstanceMultiplierShift, offset: 0x18, size: 0x4, def value: None
  int32_t _InstanceMultiplierShift;

  /// @brief Field _InstanceOcclusionCullerPad0, offset: 0x1c, size: 0x4, def value: None
  int32_t _InstanceOcclusionCullerPad0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables, _DrawInfoAllocIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables, _DrawInfoCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables, _InstanceInfoAllocIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables, _InstanceInfoCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables, _BoundingSphereInstanceDataAddress) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables, _DebugCounterIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables, _InstanceMultiplierShift) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables, _InstanceOcclusionCullerPad0) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables, "UnityEngine.Rendering", "InstanceOcclusionCullerShaderVariables");
