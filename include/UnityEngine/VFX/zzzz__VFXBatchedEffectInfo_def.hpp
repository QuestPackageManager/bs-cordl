#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXBatchedEffectInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXBatchedEffectInfo)
namespace UnityEngine::VFX {
class VisualEffectAsset;
}
// Forward declare root types
namespace UnityEngine::VFX {
struct VFXBatchedEffectInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::VFXBatchedEffectInfo);
// Dependencies
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VFXBatchedEffectInfo
struct CORDL_TYPE VFXBatchedEffectInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXBatchedEffectInfo();

  // Ctor Parameters [CppParam { name: "vfxAsset", ty: "::UnityW<::UnityEngine::VFX::VisualEffectAsset>", modifiers: "", def_value: None }, CppParam { name: "activeBatchCount", ty: "uint32_t",
  // modifiers: "", def_value: None }, CppParam { name: "inactiveBatchCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "activeInstanceCount", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "unbatchedInstanceCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "totalInstanceCapacity", ty: "uint32_t", modifiers: "", def_value:
  // None }, CppParam { name: "maxInstancePerBatchCapacity", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "totalGPUSizeInBytes", ty: "uint64_t", modifiers: "", def_value: None },
  // CppParam { name: "totalCPUSizeInBytes", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr VFXBatchedEffectInfo(::UnityW<::UnityEngine::VFX::VisualEffectAsset> vfxAsset, uint32_t activeBatchCount, uint32_t inactiveBatchCount, uint32_t activeInstanceCount,
                                 uint32_t unbatchedInstanceCount, uint32_t totalInstanceCapacity, uint32_t maxInstancePerBatchCapacity, uint64_t totalGPUSizeInBytes,
                                 uint64_t totalCPUSizeInBytes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22583 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field vfxAsset, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::VFX::VisualEffectAsset> vfxAsset;

  /// @brief Field activeBatchCount, offset: 0x8, size: 0x4, def value: None
  uint32_t activeBatchCount;

  /// @brief Field inactiveBatchCount, offset: 0xc, size: 0x4, def value: None
  uint32_t inactiveBatchCount;

  /// @brief Field activeInstanceCount, offset: 0x10, size: 0x4, def value: None
  uint32_t activeInstanceCount;

  /// @brief Field unbatchedInstanceCount, offset: 0x14, size: 0x4, def value: None
  uint32_t unbatchedInstanceCount;

  /// @brief Field totalInstanceCapacity, offset: 0x18, size: 0x4, def value: None
  uint32_t totalInstanceCapacity;

  /// @brief Field maxInstancePerBatchCapacity, offset: 0x1c, size: 0x4, def value: None
  uint32_t maxInstancePerBatchCapacity;

  /// @brief Field totalGPUSizeInBytes, offset: 0x20, size: 0x8, def value: None
  uint64_t totalGPUSizeInBytes;

  /// @brief Field totalCPUSizeInBytes, offset: 0x28, size: 0x8, def value: None
  uint64_t totalCPUSizeInBytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXBatchedEffectInfo, vfxAsset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXBatchedEffectInfo, activeBatchCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXBatchedEffectInfo, inactiveBatchCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXBatchedEffectInfo, activeInstanceCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXBatchedEffectInfo, unbatchedInstanceCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXBatchedEffectInfo, totalInstanceCapacity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXBatchedEffectInfo, maxInstancePerBatchCapacity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXBatchedEffectInfo, totalGPUSizeInBytes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXBatchedEffectInfo, totalCPUSizeInBytes) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::VFX::VFXBatchedEffectInfo, 0x30>, "Size mismatch!");

} // namespace UnityEngine::VFX
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VFXBatchedEffectInfo, "UnityEngine.VFX", "VFXBatchedEffectInfo");
