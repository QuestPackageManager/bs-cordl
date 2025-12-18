#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LightShadowCasterCullingInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BatchCullingProjectionType_def.hpp"
#include "UnityEngine/zzzz__RangeInt_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightShadowCasterCullingInfo)
// Forward declare root types
namespace UnityEngine::Rendering {
struct LightShadowCasterCullingInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LightShadowCasterCullingInfo);
// Dependencies UnityEngine.RangeInt, UnityEngine.Rendering.BatchCullingProjectionType
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LightShadowCasterCullingInfo
struct CORDL_TYPE LightShadowCasterCullingInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightShadowCasterCullingInfo();

  // Ctor Parameters [CppParam { name: "splitRange", ty: "::UnityEngine::RangeInt", modifiers: "", def_value: None }, CppParam { name: "projectionType", ty:
  // "::UnityEngine::Rendering::BatchCullingProjectionType", modifiers: "", def_value: None }, CppParam { name: "splitExclusionMask", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr LightShadowCasterCullingInfo(::UnityEngine::RangeInt splitRange, ::UnityEngine::Rendering::BatchCullingProjectionType projectionType, uint16_t splitExclusionMask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10777 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field splitRange, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::RangeInt splitRange;

  /// @brief Field projectionType, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchCullingProjectionType projectionType;

  /// @brief Field splitExclusionMask, offset: 0xc, size: 0x2, def value: None
  uint16_t splitExclusionMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LightShadowCasterCullingInfo, splitRange) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LightShadowCasterCullingInfo, projectionType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LightShadowCasterCullingInfo, splitExclusionMask) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LightShadowCasterCullingInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LightShadowCasterCullingInfo, "UnityEngine.Rendering", "LightShadowCasterCullingInfo");
