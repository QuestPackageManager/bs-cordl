#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/SettingsTrackerFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SettingsTrackerFactory)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class ISettingsEventSender;
}
namespace BeatSaber::Analytics::Settings {
class AudioSettingsTracker;
}
namespace BeatSaber::Analytics::Settings {
class ColorsSettingsTracker;
}
namespace BeatSaber::Analytics::Settings {
class ControllerSettingsTracker;
}
namespace BeatSaber::Analytics::Settings {
class EnvironmentsSettingsTracker;
}
namespace BeatSaber::Analytics::Settings {
class GraphicsSettingsTracker;
}
namespace BeatSaber::Analytics::Settings {
class MiscSettingsTracker;
}
namespace BeatSaber::Analytics::Settings {
class PlayerSettingsTracker;
}
// Forward declare root types
namespace BeatSaber::Analytics::Settings {
class SettingsTrackerFactory;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Settings::SettingsTrackerFactory*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::SettingsTrackerFactory*, "BeatSaber.Analytics.Settings", "SettingsTrackerFactory");
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.SettingsTrackerFactory
class CORDL_TYPE SettingsTrackerFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateAudio, addr 0x3506128, size 0x50, virtual false, abstract: false, final false
  static inline ::BeatSaber::Analytics::Settings::AudioSettingsTracker* CreateAudio(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

  /// @brief Method CreateColors, addr 0x3506180, size 0x50, virtual false, abstract: false, final false
  static inline ::BeatSaber::Analytics::Settings::ColorsSettingsTracker* CreateColors(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

  /// @brief Method CreateController, addr 0x35061d8, size 0x50, virtual false, abstract: false, final false
  static inline ::BeatSaber::Analytics::Settings::ControllerSettingsTracker* CreateController(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

  /// @brief Method CreateEnvironments, addr 0x3506230, size 0x50, virtual false, abstract: false, final false
  static inline ::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker* CreateEnvironments(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

  /// @brief Method CreateGraphics, addr 0x3506288, size 0x50, virtual false, abstract: false, final false
  static inline ::BeatSaber::Analytics::Settings::GraphicsSettingsTracker* CreateGraphics(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

  /// @brief Method CreateMisc, addr 0x35062e0, size 0x50, virtual false, abstract: false, final false
  static inline ::BeatSaber::Analytics::Settings::MiscSettingsTracker* CreateMisc(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

  /// @brief Method CreatePlayer, addr 0x3506338, size 0x50, virtual false, abstract: false, final false
  static inline ::BeatSaber::Analytics::Settings::PlayerSettingsTracker* CreatePlayer(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsTrackerFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsTrackerFactory", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsTrackerFactory(SettingsTrackerFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsTrackerFactory", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsTrackerFactory(SettingsTrackerFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22764 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::Analytics::Settings::SettingsTrackerFactory) == 0x10, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
