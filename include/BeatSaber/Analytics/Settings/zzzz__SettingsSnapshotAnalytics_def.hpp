#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/SettingsSnapshotAnalytics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsSnapshotAnalytics)
namespace BeatSaber::Analytics::Gameplay {
class IGameplayEventsDispatcher;
}
namespace GlobalNamespace {
class IPlayerDataModel;
}
namespace GlobalNamespace {
class SettingsManager;
}
// Forward declare root types
namespace BeatSaber::Analytics::Settings {
class SettingsSnapshotAnalytics;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics*, "BeatSaber.Analytics.Settings", "SettingsSnapshotAnalytics");
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.SettingsSnapshotAnalytics
class CORDL_TYPE SettingsSnapshotAnalytics : public ::System::Object {
public:
  // Declarations
  /// @brief Field _dispatcher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dispatcher, put = __cordl_internal_set__dispatcher)) ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* _dispatcher;

  /// @brief Field _playerDataModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::GlobalNamespace::IPlayerDataModel* _playerDataModel;

  /// @brief Field _settingsManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  static inline ::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics* New_ctor(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* dispatcher,
                                                                                      ::GlobalNamespace::IPlayerDataModel* playerDataModel, ::GlobalNamespace::SettingsManager* settingsManager);

  /// @brief Method TodayInDays, addr 0x350bcd4, size 0x90, virtual false, abstract: false, final false
  static inline int32_t TodayInDays();

  /// @brief Method TrySendSnapshot, addr 0x350b834, size 0x4a0, virtual false, abstract: false, final false
  inline void TrySendSnapshot();

  constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* const& __cordl_internal_get__dispatcher() const;

  constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*& __cordl_internal_get__dispatcher();

  constexpr ::GlobalNamespace::IPlayerDataModel* const& __cordl_internal_get__playerDataModel() const;

  constexpr ::GlobalNamespace::IPlayerDataModel*& __cordl_internal_get__playerDataModel();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__dispatcher(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* value);

  constexpr void __cordl_internal_set__playerDataModel(::GlobalNamespace::IPlayerDataModel* value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x350b828, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* dispatcher, ::GlobalNamespace::IPlayerDataModel* playerDataModel, ::GlobalNamespace::SettingsManager* settingsManager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsSnapshotAnalytics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsSnapshotAnalytics", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsSnapshotAnalytics(SettingsSnapshotAnalytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsSnapshotAnalytics", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsSnapshotAnalytics(SettingsSnapshotAnalytics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22778 };

  /// @brief Field _dispatcher, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* ____dispatcher;

  /// @brief Field _playerDataModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IPlayerDataModel* ____playerDataModel;

  /// @brief Field _settingsManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics, ____dispatcher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics, ____playerDataModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics, ____settingsManager) == 0x20, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics) == 0x28, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
