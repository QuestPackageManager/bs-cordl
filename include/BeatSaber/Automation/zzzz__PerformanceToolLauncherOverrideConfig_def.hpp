#pragma once
// IWYU pragma private; include "BeatSaber\Automation\PerformanceToolLauncherOverrideConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PerformanceToolLauncherOverrideConfig)
// Forward declare root types
namespace BeatSaber::Automation {
struct PerformanceToolLauncherOverrideConfig;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig);
DEFINE_IL2CPP_CLASS(::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig, "BeatSaber.Automation", "PerformanceToolLauncherOverrideConfig");
// Dependencies
namespace BeatSaber::Automation {
// Is value type: true
// CS Name: BeatSaber.Automation.PerformanceToolLauncherOverrideConfig
struct CORDL_TYPE PerformanceToolLauncherOverrideConfig {
public:
  // Declarations
  /// @brief Field kDefault, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_kDefault, put = setStaticF_kDefault)) ::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig kDefault;

  static inline ::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig getStaticF_kDefault();

  static inline void setStaticF_kDefault(::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceToolLauncherOverrideConfig();

  // Ctor Parameters [CppParam { name: "enableAutoplay", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "enableRecording", ty: "bool", modifiers: "", def_value: None }]
  constexpr PerformanceToolLauncherOverrideConfig(bool enableAutoplay, bool enableRecording) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23727 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field enableAutoplay, offset: 0x0, size: 0x1, def value: None
  bool enableAutoplay;

  /// @brief Field enableRecording, offset: 0x1, size: 0x1, def value: None
  bool enableRecording;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig, enableAutoplay) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig, enableRecording) == 0x1, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig) == 0x2, "Size mismatch!");

} // namespace BeatSaber::Automation
