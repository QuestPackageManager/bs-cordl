#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/ControllerSettingsTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ControllerSettingsTracker)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class ISettingsEventSender;
}
namespace BeatSaber::Settings {
struct ControllerSettings;
}
// Forward declare root types
namespace BeatSaber::Analytics::Settings {
class ControllerSettingsTracker;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Settings::ControllerSettingsTracker*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::ControllerSettingsTracker*, "BeatSaber.Analytics.Settings", "ControllerSettingsTracker");
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.ControllerSettingsTracker
class CORDL_TYPE ControllerSettingsTracker : public ::System::Object {
public:
  // Declarations
  /// @brief Field _hapticFeedback, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__hapticFeedback, put = __cordl_internal_set__hapticFeedback)) bool _hapticFeedback;

  /// @brief Field _hasSnapshot, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__hasSnapshot, put = __cordl_internal_set__hasSnapshot)) bool _hasSnapshot;

  /// @brief Field _sender, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sender, put = __cordl_internal_set__sender)) ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* _sender;

  /// @brief Method DiffAndSend, addr 0x3506cb8, size 0x27c, virtual false, abstract: false, final false
  inline void DiffAndSend(::BeatSaber::Settings::ControllerSettings s);

  static inline ::BeatSaber::Analytics::Settings::ControllerSettingsTracker* New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

  /// @brief Method TakeSnapshot, addr 0x3506ca0, size 0x18, virtual false, abstract: false, final false
  inline void TakeSnapshot(::BeatSaber::Settings::ControllerSettings s);

  constexpr bool const& __cordl_internal_get__hapticFeedback() const;

  constexpr bool& __cordl_internal_get__hapticFeedback();

  constexpr bool const& __cordl_internal_get__hasSnapshot() const;

  constexpr bool& __cordl_internal_get__hasSnapshot();

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const& __cordl_internal_get__sender() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& __cordl_internal_get__sender();

  constexpr void __cordl_internal_set__hapticFeedback(bool value);

  constexpr void __cordl_internal_set__hasSnapshot(bool value);

  constexpr void __cordl_internal_set__sender(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value);

  /// @brief Method .ctor, addr 0x3506228, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerSettingsTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControllerSettingsTracker", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControllerSettingsTracker(ControllerSettingsTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControllerSettingsTracker", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControllerSettingsTracker(ControllerSettingsTracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22767 };

  /// @brief Field _sender, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* ____sender;

  /// @brief Field _hasSnapshot, offset: 0x18, size: 0x1, def value: None
  bool ____hasSnapshot;

  /// @brief Field _hapticFeedback, offset: 0x19, size: 0x1, def value: None
  bool ____hapticFeedback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Settings::ControllerSettingsTracker, ____sender) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::ControllerSettingsTracker, ____hasSnapshot) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::ControllerSettingsTracker, ____hapticFeedback) == 0x19, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Settings::ControllerSettingsTracker) == 0x20, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
