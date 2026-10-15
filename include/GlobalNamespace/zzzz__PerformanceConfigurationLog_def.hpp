#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceConfigurationLog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PerformanceConfigurationLog)
namespace BeatSaber::Automation {
class RecPlayBehaviourState;
}
namespace BeatSaber::Settings {
struct Settings;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace GlobalNamespace {
class PerformanceConfigurationStats;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceConfigurationLog;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PerformanceConfigurationLog*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerformanceConfigurationLog*, "", "PerformanceConfigurationLog");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerformanceConfigurationLog
class CORDL_TYPE PerformanceConfigurationLog : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x5d46888, size 0x268, virtual false, abstract: false, final false
  static inline ::StringW Create(/* [IsReadOnly] */ ::by_ref<::BeatSaber::Settings::Settings const> settings, ::GlobalNamespace::PlayerSpecificSettings* playerSettings,
                                 ::GlobalNamespace::GameplayModifierMask modifiers, ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData,
                                 ::BeatSaber::Automation::RecPlayBehaviourState* recPlayState, ::GlobalNamespace::PerformanceConfigurationStats* stats, ::StringW warning);

  /// @brief Method LogApplicationInfo, addr 0x5d470a0, size 0x588, virtual false, abstract: false, final false
  static inline void LogApplicationInfo(::System::Text::StringBuilder* sb);

  /// @brief Method LogApplicationState, addr 0x5d47628, size 0x2b0, virtual false, abstract: false, final false
  static inline void LogApplicationState(::System::Text::StringBuilder* sb);

  /// @brief Method LogDynamicStates, addr 0x5d48fe0, size 0x1d4, virtual false, abstract: false, final false
  static inline void LogDynamicStates(::System::Text::StringBuilder* sb, ::GlobalNamespace::PerformanceConfigurationStats* stats);

  /// @brief Method LogEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void LogEntry(::System::Text::StringBuilder* sb, ::StringW category, ::StringW name, T value);

  /// @brief Method LogGraphicsInfo, addr 0x5d478d8, size 0x140, virtual false, abstract: false, final false
  static inline void LogGraphicsInfo(::System::Text::StringBuilder* sb);

  /// @brief Method LogLevelSettings, addr 0x5d48e04, size 0x1dc, virtual false, abstract: false, final false
  static inline void LogLevelSettings(::System::Text::StringBuilder* sb, ::GlobalNamespace::GameplayModifierMask modifiers, ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData);

  /// @brief Method LogOculusXrInfo, addr 0x5d47e40, size 0x4, virtual false, abstract: false, final false
  static inline void LogOculusXrInfo(::System::Text::StringBuilder* sb);

  /// @brief Method LogOpenXrInfo, addr 0x5d47e44, size 0x138, virtual false, abstract: false, final false
  static inline void LogOpenXrInfo(::System::Text::StringBuilder* sb);

  /// @brief Method LogOvrInfo, addr 0x5d47e3c, size 0x4, virtual false, abstract: false, final false
  static inline void LogOvrInfo(::System::Text::StringBuilder* sb);

  /// @brief Method LogPlayerSettings, addr 0x5d48978, size 0x48c, virtual false, abstract: false, final false
  static inline void LogPlayerSettings(::System::Text::StringBuilder* sb, ::GlobalNamespace::PlayerSpecificSettings* playerSettings);

  /// @brief Method LogSettings, addr 0x5d47f7c, size 0x9fc, virtual false, abstract: false, final false
  static inline void LogSettings(::System::Text::StringBuilder* sb, /* [IsReadOnly] */ ::by_ref<::BeatSaber::Settings::Settings const> settings,
                                 ::BeatSaber::Automation::RecPlayBehaviourState* recPlayState);

  /// @brief Method LogSystemInfo, addr 0x5d46af0, size 0x5b0, virtual false, abstract: false, final false
  static inline void LogSystemInfo(::System::Text::StringBuilder* sb);

  /// @brief Method LogXrInfo, addr 0x5d47a18, size 0x424, virtual false, abstract: false, final false
  static inline void LogXrInfo(::System::Text::StringBuilder* sb);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceConfigurationLog();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceConfigurationLog", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceConfigurationLog(PerformanceConfigurationLog&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceConfigurationLog", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceConfigurationLog(PerformanceConfigurationLog const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6735 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PerformanceConfigurationLog) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
