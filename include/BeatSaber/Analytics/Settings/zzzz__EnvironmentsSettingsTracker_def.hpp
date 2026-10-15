#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/EnvironmentsSettingsTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentsSettingsTracker)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class ISettingsEventSender;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
// Forward declare root types
namespace BeatSaber::Analytics::Settings {
class EnvironmentsSettingsTracker;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker*, "BeatSaber.Analytics.Settings", "EnvironmentsSettingsTracker");
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.EnvironmentsSettingsTracker
class CORDL_TYPE EnvironmentsSettingsTracker : public ::System::Object {
public:
  // Declarations
  /// @brief Field _hasSnapshot, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__hasSnapshot, put = __cordl_internal_set__hasSnapshot)) bool _hasSnapshot;

  /// @brief Field _overrideEnvironments, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideEnvironments, put = __cordl_internal_set__overrideEnvironments)) bool _overrideEnvironments;

  /// @brief Field _sender, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sender, put = __cordl_internal_set__sender)) ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* _sender;

  /// @brief Method DiffAndSend, addr 0x3506f54, size 0x278, virtual false, abstract: false, final false
  inline void DiffAndSend(::GlobalNamespace::OverrideEnvironmentSettings* s);

  static inline ::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker* New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

  /// @brief Method TakeSnapshot, addr 0x3506f34, size 0x20, virtual false, abstract: false, final false
  inline void TakeSnapshot(::GlobalNamespace::OverrideEnvironmentSettings* s);

  constexpr bool const& __cordl_internal_get__hasSnapshot() const;

  constexpr bool& __cordl_internal_get__hasSnapshot();

  constexpr bool const& __cordl_internal_get__overrideEnvironments() const;

  constexpr bool& __cordl_internal_get__overrideEnvironments();

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const& __cordl_internal_get__sender() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& __cordl_internal_get__sender();

  constexpr void __cordl_internal_set__hasSnapshot(bool value);

  constexpr void __cordl_internal_set__overrideEnvironments(bool value);

  constexpr void __cordl_internal_set__sender(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value);

  /// @brief Method .ctor, addr 0x3506280, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentsSettingsTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentsSettingsTracker", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentsSettingsTracker(EnvironmentsSettingsTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentsSettingsTracker", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentsSettingsTracker(EnvironmentsSettingsTracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22768 };

  /// @brief Field _sender, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* ____sender;

  /// @brief Field _hasSnapshot, offset: 0x18, size: 0x1, def value: None
  bool ____hasSnapshot;

  /// @brief Field _overrideEnvironments, offset: 0x19, size: 0x1, def value: None
  bool ____overrideEnvironments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker, ____sender) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker, ____hasSnapshot) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker, ____overrideEnvironments) == 0x19, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker) == 0x20, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
