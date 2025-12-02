#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VirtualOffsetSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VirtualOffsetSettings)
namespace UnityEngine::Rendering {
struct ProbeVolumeBakingProcessSettings_SettingsVersion;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct VirtualOffsetSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::VirtualOffsetSettings);
// Dependencies UnityEngine.LayerMask
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.VirtualOffsetSettings
struct CORDL_TYPE VirtualOffsetSettings {
public:
  // Declarations
  /// @brief Method SetDefaults, addr 0x6573004, size 0x20, virtual false, abstract: false, final false
  inline void SetDefaults();

  /// @brief Method UpgradeFromTo, addr 0x6573024, size 0x24, virtual false, abstract: false, final false
  inline void UpgradeFromTo(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion from, ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion to);

  // Ctor Parameters []
  // @brief default ctor
  constexpr VirtualOffsetSettings();

  // Ctor Parameters [CppParam { name: "useVirtualOffset", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "validityThreshold", ty: "float_t", modifiers: "", def_value: None }, CppParam
  // { name: "outOfGeoOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "searchMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rayOriginBias",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "collisionMask", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: None }]
  constexpr VirtualOffsetSettings(bool useVirtualOffset, float_t validityThreshold, float_t outOfGeoOffset, float_t searchMultiplier, float_t rayOriginBias,
                                  ::UnityEngine::LayerMask collisionMask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12100 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field useVirtualOffset, offset: 0x0, size: 0x1, def value: None
  bool useVirtualOffset;

  /// @brief Field validityThreshold, offset: 0x4, size: 0x4, def value: None
  float_t validityThreshold;

  /// @brief Field outOfGeoOffset, offset: 0x8, size: 0x4, def value: None
  float_t outOfGeoOffset;

  /// @brief Field searchMultiplier, offset: 0xc, size: 0x4, def value: None
  float_t searchMultiplier;

  /// @brief Field rayOriginBias, offset: 0x10, size: 0x4, def value: None
  float_t rayOriginBias;

  /// @brief Field collisionMask, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::LayerMask collisionMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VirtualOffsetSettings, useVirtualOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VirtualOffsetSettings, validityThreshold) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VirtualOffsetSettings, outOfGeoOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VirtualOffsetSettings, searchMultiplier) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VirtualOffsetSettings, rayOriginBias) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VirtualOffsetSettings, collisionMask) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VirtualOffsetSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VirtualOffsetSettings, "UnityEngine.Rendering", "VirtualOffsetSettings");
