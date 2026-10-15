#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/AudioSettingsTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioSettingsTracker)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class ISettingsEventSender;
}
namespace BeatSaber::Settings {
struct AudioSettings;
}
// Forward declare root types
namespace BeatSaber::Analytics::Settings {
class AudioSettingsTracker;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Settings::AudioSettingsTracker*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::AudioSettingsTracker*, "BeatSaber.Analytics.Settings", "AudioSettingsTracker");
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.AudioSettingsTracker
class CORDL_TYPE AudioSettingsTracker : public ::System::Object {
public:
  // Declarations
  /// @brief Field _ambientVolumeScale, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__ambientVolumeScale, put = __cordl_internal_set__ambientVolumeScale)) float_t _ambientVolumeScale;

  /// @brief Field _hasSnapshot, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__hasSnapshot, put = __cordl_internal_set__hasSnapshot)) bool _hasSnapshot;

  /// @brief Field _sender, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sender, put = __cordl_internal_set__sender)) ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* _sender;

  /// @brief Field _volume, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__volume, put = __cordl_internal_set__volume)) float_t _volume;

  /// @brief Method DiffAndSend, addr 0x35063a4, size 0x448, virtual false, abstract: false, final false
  inline void DiffAndSend(::BeatSaber::Settings::AudioSettings s);

  static inline ::BeatSaber::Analytics::Settings::AudioSettingsTracker* New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

  /// @brief Method TakeSnapshot, addr 0x3506390, size 0x14, virtual false, abstract: false, final false
  inline void TakeSnapshot(::BeatSaber::Settings::AudioSettings s);

  constexpr float_t const& __cordl_internal_get__ambientVolumeScale() const;

  constexpr float_t& __cordl_internal_get__ambientVolumeScale();

  constexpr bool const& __cordl_internal_get__hasSnapshot() const;

  constexpr bool& __cordl_internal_get__hasSnapshot();

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const& __cordl_internal_get__sender() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& __cordl_internal_get__sender();

  constexpr float_t const& __cordl_internal_get__volume() const;

  constexpr float_t& __cordl_internal_get__volume();

  constexpr void __cordl_internal_set__ambientVolumeScale(float_t value);

  constexpr void __cordl_internal_set__hasSnapshot(bool value);

  constexpr void __cordl_internal_set__sender(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value);

  constexpr void __cordl_internal_set__volume(float_t value);

  /// @brief Method .ctor, addr 0x3506178, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioSettingsTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioSettingsTracker", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioSettingsTracker(AudioSettingsTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioSettingsTracker", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioSettingsTracker(AudioSettingsTracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22765 };

  /// @brief Field _sender, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* ____sender;

  /// @brief Field _hasSnapshot, offset: 0x18, size: 0x1, def value: None
  bool ____hasSnapshot;

  /// @brief Field _ambientVolumeScale, offset: 0x1c, size: 0x4, def value: None
  float_t ____ambientVolumeScale;

  /// @brief Field _volume, offset: 0x20, size: 0x4, def value: None
  float_t ____volume;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Settings::AudioSettingsTracker, ____sender) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::AudioSettingsTracker, ____hasSnapshot) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::AudioSettingsTracker, ____ambientVolumeScale) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::AudioSettingsTracker, ____volume) == 0x20, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Settings::AudioSettingsTracker) == 0x28, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
