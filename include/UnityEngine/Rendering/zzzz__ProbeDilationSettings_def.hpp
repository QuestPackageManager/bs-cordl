#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeDilationSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeDilationSettings)
namespace UnityEngine::Rendering {
struct ProbeVolumeBakingProcessSettings_SettingsVersion;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ProbeDilationSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ProbeDilationSettings);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeDilationSettings
struct CORDL_TYPE ProbeDilationSettings {
public:
  // Declarations
  /// @brief Method SetDefaults, addr 0x6572fe0, size 0x20, virtual false, abstract: false, final false
  inline void SetDefaults();

  /// @brief Method UpgradeFromTo, addr 0x6573000, size 0x4, virtual false, abstract: false, final false
  inline void UpgradeFromTo(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion from, ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion to);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeDilationSettings();

  // Ctor Parameters [CppParam { name: "enableDilation", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "dilationDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "dilationValidityThreshold", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "dilationIterations", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "squaredDistWeighting", ty: "bool", modifiers: "", def_value: None }]
  constexpr ProbeDilationSettings(bool enableDilation, float_t dilationDistance, float_t dilationValidityThreshold, int32_t dilationIterations, bool squaredDistWeighting) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12099 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field enableDilation, offset: 0x0, size: 0x1, def value: None
  bool enableDilation;

  /// @brief Field dilationDistance, offset: 0x4, size: 0x4, def value: None
  float_t dilationDistance;

  /// @brief Field dilationValidityThreshold, offset: 0x8, size: 0x4, def value: None
  float_t dilationValidityThreshold;

  /// @brief Field dilationIterations, offset: 0xc, size: 0x4, def value: None
  int32_t dilationIterations;

  /// @brief Field squaredDistWeighting, offset: 0x10, size: 0x1, def value: None
  bool squaredDistWeighting;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeDilationSettings, enableDilation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeDilationSettings, dilationDistance) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeDilationSettings, dilationValidityThreshold) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeDilationSettings, dilationIterations) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeDilationSettings, squaredDistWeighting) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeDilationSettings, 0x14>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeDilationSettings, "UnityEngine.Rendering", "ProbeDilationSettings");
