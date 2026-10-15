#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/PlayerSettingsTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerSettingsTracker)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class ISettingsEventSender;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
// Forward declare root types
namespace BeatSaber::Analytics::Settings {
class PlayerSettingsTracker;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Settings::PlayerSettingsTracker*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::PlayerSettingsTracker*, "BeatSaber.Analytics.Settings", "PlayerSettingsTracker");
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.PlayerSettingsTracker
class CORDL_TYPE PlayerSettingsTracker : public ::System::Object {
public:
  // Declarations
  /// @brief Field _adaptiveSfx, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__adaptiveSfx, put = __cordl_internal_set__adaptiveSfx)) bool _adaptiveSfx;

  /// @brief Field _advancedHud, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get__advancedHud, put = __cordl_internal_set__advancedHud)) bool _advancedHud;

  /// @brief Field _arcVisibility, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__arcVisibility, put = __cordl_internal_set__arcVisibility)) ::StringW _arcVisibility;

  /// @brief Field _arcsHapticFeedback, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__arcsHapticFeedback, put = __cordl_internal_set__arcsHapticFeedback)) bool _arcsHapticFeedback;

  /// @brief Field _autoRestart, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__autoRestart, put = __cordl_internal_set__autoRestart)) bool _autoRestart;

  /// @brief Field _environmentEffectsFilterDefaultPreset, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentEffectsFilterDefaultPreset,
                      put = __cordl_internal_set__environmentEffectsFilterDefaultPreset)) ::StringW _environmentEffectsFilterDefaultPreset;

  /// @brief Field _environmentEffectsFilterExpertPlusPreset, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentEffectsFilterExpertPlusPreset,
                      put = __cordl_internal_set__environmentEffectsFilterExpertPlusPreset)) ::StringW _environmentEffectsFilterExpertPlusPreset;

  /// @brief Field _hasSnapshot, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__hasSnapshot, put = __cordl_internal_set__hasSnapshot)) bool _hasSnapshot;

  /// @brief Field _headsetHapticIntensity, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__headsetHapticIntensity, put = __cordl_internal_set__headsetHapticIntensity)) float_t _headsetHapticIntensity;

  /// @brief Field _hideNoteSpawnEffect, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__hideNoteSpawnEffect, put = __cordl_internal_set__hideNoteSpawnEffect)) bool _hideNoteSpawnEffect;

  /// @brief Field _leftHanded, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get__leftHanded, put = __cordl_internal_set__leftHanded)) bool _leftHanded;

  /// @brief Field _noFailEffects, offset 0x46, size 0x1
  __declspec(property(get = __cordl_internal_get__noFailEffects, put = __cordl_internal_set__noFailEffects)) bool _noFailEffects;

  /// @brief Field _noTextsAndHuds, offset 0x47, size 0x1
  __declspec(property(get = __cordl_internal_get__noTextsAndHuds, put = __cordl_internal_set__noTextsAndHuds)) bool _noTextsAndHuds;

  /// @brief Field _noteJumpDurationTypeSettings, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__noteJumpDurationTypeSettings, put = __cordl_internal_set__noteJumpDurationTypeSettings)) ::StringW _noteJumpDurationTypeSettings;

  /// @brief Field _noteJumpFixedDuration, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__noteJumpFixedDuration, put = __cordl_internal_set__noteJumpFixedDuration)) float_t _noteJumpFixedDuration;

  /// @brief Field _noteJumpStartBeatOffset, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__noteJumpStartBeatOffset, put = __cordl_internal_set__noteJumpStartBeatOffset)) float_t _noteJumpStartBeatOffset;

  /// @brief Field _playerHeight, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__playerHeight, put = __cordl_internal_set__playerHeight)) float_t _playerHeight;

  /// @brief Field _reduceDebris, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get__reduceDebris, put = __cordl_internal_set__reduceDebris)) bool _reduceDebris;

  /// @brief Field _saberTrailIntensity, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__saberTrailIntensity, put = __cordl_internal_set__saberTrailIntensity)) float_t _saberTrailIntensity;

  /// @brief Field _sender, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sender, put = __cordl_internal_set__sender)) ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* _sender;

  /// @brief Field _sfxVolume, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__sfxVolume, put = __cordl_internal_set__sfxVolume)) float_t _sfxVolume;

  /// @brief Method DiffAndSend, addr 0x3509148, size 0x198c, virtual false, abstract: false, final false
  inline void DiffAndSend(::GlobalNamespace::PlayerSpecificSettings* s);

  static inline ::BeatSaber::Analytics::Settings::PlayerSettingsTracker* New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

  /// @brief Method TakeSnapshot, addr 0x3508f6c, size 0x1dc, virtual false, abstract: false, final false
  inline void TakeSnapshot(::GlobalNamespace::PlayerSpecificSettings* s);

  constexpr bool const& __cordl_internal_get__adaptiveSfx() const;

  constexpr bool& __cordl_internal_get__adaptiveSfx();

  constexpr bool const& __cordl_internal_get__advancedHud() const;

  constexpr bool& __cordl_internal_get__advancedHud();

  constexpr ::StringW const& __cordl_internal_get__arcVisibility() const;

  constexpr ::StringW& __cordl_internal_get__arcVisibility();

  constexpr bool const& __cordl_internal_get__arcsHapticFeedback() const;

  constexpr bool& __cordl_internal_get__arcsHapticFeedback();

  constexpr bool const& __cordl_internal_get__autoRestart() const;

  constexpr bool& __cordl_internal_get__autoRestart();

  constexpr ::StringW const& __cordl_internal_get__environmentEffectsFilterDefaultPreset() const;

  constexpr ::StringW& __cordl_internal_get__environmentEffectsFilterDefaultPreset();

  constexpr ::StringW const& __cordl_internal_get__environmentEffectsFilterExpertPlusPreset() const;

  constexpr ::StringW& __cordl_internal_get__environmentEffectsFilterExpertPlusPreset();

  constexpr bool const& __cordl_internal_get__hasSnapshot() const;

  constexpr bool& __cordl_internal_get__hasSnapshot();

  constexpr float_t const& __cordl_internal_get__headsetHapticIntensity() const;

  constexpr float_t& __cordl_internal_get__headsetHapticIntensity();

  constexpr bool const& __cordl_internal_get__hideNoteSpawnEffect() const;

  constexpr bool& __cordl_internal_get__hideNoteSpawnEffect();

  constexpr bool const& __cordl_internal_get__leftHanded() const;

  constexpr bool& __cordl_internal_get__leftHanded();

  constexpr bool const& __cordl_internal_get__noFailEffects() const;

  constexpr bool& __cordl_internal_get__noFailEffects();

  constexpr bool const& __cordl_internal_get__noTextsAndHuds() const;

  constexpr bool& __cordl_internal_get__noTextsAndHuds();

  constexpr ::StringW const& __cordl_internal_get__noteJumpDurationTypeSettings() const;

  constexpr ::StringW& __cordl_internal_get__noteJumpDurationTypeSettings();

  constexpr float_t const& __cordl_internal_get__noteJumpFixedDuration() const;

  constexpr float_t& __cordl_internal_get__noteJumpFixedDuration();

  constexpr float_t const& __cordl_internal_get__noteJumpStartBeatOffset() const;

  constexpr float_t& __cordl_internal_get__noteJumpStartBeatOffset();

  constexpr float_t const& __cordl_internal_get__playerHeight() const;

  constexpr float_t& __cordl_internal_get__playerHeight();

  constexpr bool const& __cordl_internal_get__reduceDebris() const;

  constexpr bool& __cordl_internal_get__reduceDebris();

  constexpr float_t const& __cordl_internal_get__saberTrailIntensity() const;

  constexpr float_t& __cordl_internal_get__saberTrailIntensity();

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const& __cordl_internal_get__sender() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& __cordl_internal_get__sender();

  constexpr float_t const& __cordl_internal_get__sfxVolume() const;

  constexpr float_t& __cordl_internal_get__sfxVolume();

  constexpr void __cordl_internal_set__adaptiveSfx(bool value);

  constexpr void __cordl_internal_set__advancedHud(bool value);

  constexpr void __cordl_internal_set__arcVisibility(::StringW value);

  constexpr void __cordl_internal_set__arcsHapticFeedback(bool value);

  constexpr void __cordl_internal_set__autoRestart(bool value);

  constexpr void __cordl_internal_set__environmentEffectsFilterDefaultPreset(::StringW value);

  constexpr void __cordl_internal_set__environmentEffectsFilterExpertPlusPreset(::StringW value);

  constexpr void __cordl_internal_set__hasSnapshot(bool value);

  constexpr void __cordl_internal_set__headsetHapticIntensity(float_t value);

  constexpr void __cordl_internal_set__hideNoteSpawnEffect(bool value);

  constexpr void __cordl_internal_set__leftHanded(bool value);

  constexpr void __cordl_internal_set__noFailEffects(bool value);

  constexpr void __cordl_internal_set__noTextsAndHuds(bool value);

  constexpr void __cordl_internal_set__noteJumpDurationTypeSettings(::StringW value);

  constexpr void __cordl_internal_set__noteJumpFixedDuration(float_t value);

  constexpr void __cordl_internal_set__noteJumpStartBeatOffset(float_t value);

  constexpr void __cordl_internal_set__playerHeight(float_t value);

  constexpr void __cordl_internal_set__reduceDebris(bool value);

  constexpr void __cordl_internal_set__saberTrailIntensity(float_t value);

  constexpr void __cordl_internal_set__sender(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value);

  constexpr void __cordl_internal_set__sfxVolume(float_t value);

  /// @brief Method .ctor, addr 0x3506388, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSettingsTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSettingsTracker", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSettingsTracker(PlayerSettingsTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSettingsTracker", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSettingsTracker(PlayerSettingsTracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22771 };

  /// @brief Field _sender, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* ____sender;

  /// @brief Field _hasSnapshot, offset: 0x18, size: 0x1, def value: None
  bool ____hasSnapshot;

  /// @brief Field _adaptiveSfx, offset: 0x19, size: 0x1, def value: None
  bool ____adaptiveSfx;

  /// @brief Field _advancedHud, offset: 0x1a, size: 0x1, def value: None
  bool ____advancedHud;

  /// @brief Field _arcVisibility, offset: 0x20, size: 0x8, def value: None
  ::StringW ____arcVisibility;

  /// @brief Field _arcsHapticFeedback, offset: 0x28, size: 0x1, def value: None
  bool ____arcsHapticFeedback;

  /// @brief Field _autoRestart, offset: 0x29, size: 0x1, def value: None
  bool ____autoRestart;

  /// @brief Field _environmentEffectsFilterDefaultPreset, offset: 0x30, size: 0x8, def value: None
  ::StringW ____environmentEffectsFilterDefaultPreset;

  /// @brief Field _environmentEffectsFilterExpertPlusPreset, offset: 0x38, size: 0x8, def value: None
  ::StringW ____environmentEffectsFilterExpertPlusPreset;

  /// @brief Field _headsetHapticIntensity, offset: 0x40, size: 0x4, def value: None
  float_t ____headsetHapticIntensity;

  /// @brief Field _hideNoteSpawnEffect, offset: 0x44, size: 0x1, def value: None
  bool ____hideNoteSpawnEffect;

  /// @brief Field _leftHanded, offset: 0x45, size: 0x1, def value: None
  bool ____leftHanded;

  /// @brief Field _noFailEffects, offset: 0x46, size: 0x1, def value: None
  bool ____noFailEffects;

  /// @brief Field _noTextsAndHuds, offset: 0x47, size: 0x1, def value: None
  bool ____noTextsAndHuds;

  /// @brief Field _noteJumpDurationTypeSettings, offset: 0x48, size: 0x8, def value: None
  ::StringW ____noteJumpDurationTypeSettings;

  /// @brief Field _noteJumpFixedDuration, offset: 0x50, size: 0x4, def value: None
  float_t ____noteJumpFixedDuration;

  /// @brief Field _noteJumpStartBeatOffset, offset: 0x54, size: 0x4, def value: None
  float_t ____noteJumpStartBeatOffset;

  /// @brief Field _playerHeight, offset: 0x58, size: 0x4, def value: None
  float_t ____playerHeight;

  /// @brief Field _reduceDebris, offset: 0x5c, size: 0x1, def value: None
  bool ____reduceDebris;

  /// @brief Field _saberTrailIntensity, offset: 0x60, size: 0x4, def value: None
  float_t ____saberTrailIntensity;

  /// @brief Field _sfxVolume, offset: 0x64, size: 0x4, def value: None
  float_t ____sfxVolume;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____sender) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____hasSnapshot) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____adaptiveSfx) == 0x19, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____advancedHud) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____arcVisibility) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____arcsHapticFeedback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____autoRestart) == 0x29, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____environmentEffectsFilterDefaultPreset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____environmentEffectsFilterExpertPlusPreset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____headsetHapticIntensity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____hideNoteSpawnEffect) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____leftHanded) == 0x45, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____noFailEffects) == 0x46, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____noTextsAndHuds) == 0x47, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____noteJumpDurationTypeSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____noteJumpFixedDuration) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____noteJumpStartBeatOffset) == 0x54, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____playerHeight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____reduceDebris) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____saberTrailIntensity) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker, ____sfxVolume) == 0x64, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Settings::PlayerSettingsTracker) == 0x68, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
