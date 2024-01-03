#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerSpecificSettings)
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
struct NoteJumpDurationTypeSettings;
}
namespace GlobalNamespace {
struct ArcVisibilityType;
}
namespace GlobalNamespace {
struct EnvironmentEffectsFilterPreset;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerSpecificSettings);
// Type: ::PlayerSpecificSettings
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 391 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4729 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2448)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4748 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4736 }), TypeDefinitionIndex(TypeDefinitionIndex(4622)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2448), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(4606)), TypeDefinitionIndex(TypeDefinitionIndex(4621))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4659)) CS
// Name: ::PlayerSpecificSettings*
class CORDL_TYPE PlayerSpecificSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field _leftHanded, offset 0x10, size 0x1
  __declspec(property(get = __get__leftHanded, put = __set__leftHanded)) bool _leftHanded;

  /// @brief Field _playerHeight, offset 0x14, size 0x4
  __declspec(property(get = __get__playerHeight, put = __set__playerHeight)) float_t _playerHeight;

  /// @brief Field _automaticPlayerHeight, offset 0x18, size 0x1
  __declspec(property(get = __get__automaticPlayerHeight, put = __set__automaticPlayerHeight)) bool _automaticPlayerHeight;

  /// @brief Field _sfxVolume, offset 0x1c, size 0x4
  __declspec(property(get = __get__sfxVolume, put = __set__sfxVolume)) float_t _sfxVolume;

  /// @brief Field _reduceDebris, offset 0x20, size 0x1
  __declspec(property(get = __get__reduceDebris, put = __set__reduceDebris)) bool _reduceDebris;

  /// @brief Field _noTextsAndHuds, offset 0x21, size 0x1
  __declspec(property(get = __get__noTextsAndHuds, put = __set__noTextsAndHuds)) bool _noTextsAndHuds;

  /// @brief Field _noFailEffects, offset 0x22, size 0x1
  __declspec(property(get = __get__noFailEffects, put = __set__noFailEffects)) bool _noFailEffects;

  /// @brief Field _advancedHud, offset 0x23, size 0x1
  __declspec(property(get = __get__advancedHud, put = __set__advancedHud)) bool _advancedHud;

  /// @brief Field _autoRestart, offset 0x24, size 0x1
  __declspec(property(get = __get__autoRestart, put = __set__autoRestart)) bool _autoRestart;

  /// @brief Field _saberTrailIntensity, offset 0x28, size 0x4
  __declspec(property(get = __get__saberTrailIntensity, put = __set__saberTrailIntensity)) float_t _saberTrailIntensity;

  /// @brief Field _noteJumpDurationTypeSettings, offset 0x2c, size 0x4
  __declspec(property(get = __get__noteJumpDurationTypeSettings, put = __set__noteJumpDurationTypeSettings))::GlobalNamespace::NoteJumpDurationTypeSettings _noteJumpDurationTypeSettings;

  /// @brief Field _noteJumpFixedDuration, offset 0x30, size 0x4
  __declspec(property(get = __get__noteJumpFixedDuration, put = __set__noteJumpFixedDuration)) float_t _noteJumpFixedDuration;

  /// @brief Field _noteJumpStartBeatOffset, offset 0x34, size 0x4
  __declspec(property(get = __get__noteJumpStartBeatOffset, put = __set__noteJumpStartBeatOffset)) float_t _noteJumpStartBeatOffset;

  /// @brief Field _hideNoteSpawnEffect, offset 0x38, size 0x1
  __declspec(property(get = __get__hideNoteSpawnEffect, put = __set__hideNoteSpawnEffect)) bool _hideNoteSpawnEffect;

  /// @brief Field _adaptiveSfx, offset 0x39, size 0x1
  __declspec(property(get = __get__adaptiveSfx, put = __set__adaptiveSfx)) bool _adaptiveSfx;

  /// @brief Field _arcsHapticFeedback, offset 0x3a, size 0x1
  __declspec(property(get = __get__arcsHapticFeedback, put = __set__arcsHapticFeedback)) bool _arcsHapticFeedback;

  /// @brief Field _arcsVisible, offset 0x3c, size 0x4
  __declspec(property(get = __get__arcsVisible, put = __set__arcsVisible))::GlobalNamespace::ArcVisibilityType _arcsVisible;

  /// @brief Field _environmentEffectsFilterDefaultPreset, offset 0x40, size 0x4
  __declspec(property(get = __get__environmentEffectsFilterDefaultPreset,
                      put = __set__environmentEffectsFilterDefaultPreset))::GlobalNamespace::EnvironmentEffectsFilterPreset _environmentEffectsFilterDefaultPreset;

  /// @brief Field _environmentEffectsFilterExpertPlusPreset, offset 0x44, size 0x4
  __declspec(property(get = __get__environmentEffectsFilterExpertPlusPreset,
                      put = __set__environmentEffectsFilterExpertPlusPreset))::GlobalNamespace::EnvironmentEffectsFilterPreset _environmentEffectsFilterExpertPlusPreset;

  /// @brief Field _headsetHapticIntensity, offset 0x48, size 0x4
  __declspec(property(get = __get__headsetHapticIntensity, put = __set__headsetHapticIntensity)) float_t _headsetHapticIntensity;

  __declspec(property(get = get_leftHanded)) bool leftHanded;

  __declspec(property(get = get_playerHeight)) float_t playerHeight;

  __declspec(property(get = get_automaticPlayerHeight)) bool automaticPlayerHeight;

  __declspec(property(get = get_sfxVolume)) float_t sfxVolume;

  __declspec(property(get = get_reduceDebris)) bool reduceDebris;

  __declspec(property(get = get_noTextsAndHuds)) bool noTextsAndHuds;

  __declspec(property(get = get_noFailEffects)) bool noFailEffects;

  __declspec(property(get = get_advancedHud)) bool advancedHud;

  __declspec(property(get = get_autoRestart)) bool autoRestart;

  __declspec(property(get = get_saberTrailIntensity)) float_t saberTrailIntensity;

  __declspec(property(get = get_noteJumpDurationTypeSettings))::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings;

  __declspec(property(get = get_noteJumpFixedDuration)) float_t noteJumpFixedDuration;

  __declspec(property(get = get_noteJumpStartBeatOffset)) float_t noteJumpStartBeatOffset;

  __declspec(property(get = get_hideNoteSpawnEffect)) bool hideNoteSpawnEffect;

  __declspec(property(get = get_adaptiveSfx)) bool adaptiveSfx;

  __declspec(property(get = get_arcsHapticFeedback)) bool arcsHapticFeedback;

  __declspec(property(get = get_arcVisibility))::GlobalNamespace::ArcVisibilityType arcVisibility;

  __declspec(property(get = get_environmentEffectsFilterDefaultPreset))::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterDefaultPreset;

  __declspec(property(get = get_environmentEffectsFilterExpertPlusPreset))::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterExpertPlusPreset;

  __declspec(property(get = get_headsetHapticIntensity)) float_t headsetHapticIntensity;

  constexpr bool& __get__leftHanded();

  constexpr bool const& __get__leftHanded() const;

  constexpr void __set__leftHanded(bool value);

  constexpr float_t& __get__playerHeight();

  constexpr float_t const& __get__playerHeight() const;

  constexpr void __set__playerHeight(float_t value);

  constexpr bool& __get__automaticPlayerHeight();

  constexpr bool const& __get__automaticPlayerHeight() const;

  constexpr void __set__automaticPlayerHeight(bool value);

  constexpr float_t& __get__sfxVolume();

  constexpr float_t const& __get__sfxVolume() const;

  constexpr void __set__sfxVolume(float_t value);

  constexpr bool& __get__reduceDebris();

  constexpr bool const& __get__reduceDebris() const;

  constexpr void __set__reduceDebris(bool value);

  constexpr bool& __get__noTextsAndHuds();

  constexpr bool const& __get__noTextsAndHuds() const;

  constexpr void __set__noTextsAndHuds(bool value);

  constexpr bool& __get__noFailEffects();

  constexpr bool const& __get__noFailEffects() const;

  constexpr void __set__noFailEffects(bool value);

  constexpr bool& __get__advancedHud();

  constexpr bool const& __get__advancedHud() const;

  constexpr void __set__advancedHud(bool value);

  constexpr bool& __get__autoRestart();

  constexpr bool const& __get__autoRestart() const;

  constexpr void __set__autoRestart(bool value);

  constexpr float_t& __get__saberTrailIntensity();

  constexpr float_t const& __get__saberTrailIntensity() const;

  constexpr void __set__saberTrailIntensity(float_t value);

  constexpr ::GlobalNamespace::NoteJumpDurationTypeSettings& __get__noteJumpDurationTypeSettings();

  constexpr ::GlobalNamespace::NoteJumpDurationTypeSettings const& __get__noteJumpDurationTypeSettings() const;

  constexpr void __set__noteJumpDurationTypeSettings(::GlobalNamespace::NoteJumpDurationTypeSettings value);

  constexpr float_t& __get__noteJumpFixedDuration();

  constexpr float_t const& __get__noteJumpFixedDuration() const;

  constexpr void __set__noteJumpFixedDuration(float_t value);

  constexpr float_t& __get__noteJumpStartBeatOffset();

  constexpr float_t const& __get__noteJumpStartBeatOffset() const;

  constexpr void __set__noteJumpStartBeatOffset(float_t value);

  constexpr bool& __get__hideNoteSpawnEffect();

  constexpr bool const& __get__hideNoteSpawnEffect() const;

  constexpr void __set__hideNoteSpawnEffect(bool value);

  constexpr bool& __get__adaptiveSfx();

  constexpr bool const& __get__adaptiveSfx() const;

  constexpr void __set__adaptiveSfx(bool value);

  constexpr bool& __get__arcsHapticFeedback();

  constexpr bool const& __get__arcsHapticFeedback() const;

  constexpr void __set__arcsHapticFeedback(bool value);

  constexpr ::GlobalNamespace::ArcVisibilityType& __get__arcsVisible();

  constexpr ::GlobalNamespace::ArcVisibilityType const& __get__arcsVisible() const;

  constexpr void __set__arcsVisible(::GlobalNamespace::ArcVisibilityType value);

  constexpr ::GlobalNamespace::EnvironmentEffectsFilterPreset& __get__environmentEffectsFilterDefaultPreset();

  constexpr ::GlobalNamespace::EnvironmentEffectsFilterPreset const& __get__environmentEffectsFilterDefaultPreset() const;

  constexpr void __set__environmentEffectsFilterDefaultPreset(::GlobalNamespace::EnvironmentEffectsFilterPreset value);

  constexpr ::GlobalNamespace::EnvironmentEffectsFilterPreset& __get__environmentEffectsFilterExpertPlusPreset();

  constexpr ::GlobalNamespace::EnvironmentEffectsFilterPreset const& __get__environmentEffectsFilterExpertPlusPreset() const;

  constexpr void __set__environmentEffectsFilterExpertPlusPreset(::GlobalNamespace::EnvironmentEffectsFilterPreset value);

  constexpr float_t& __get__headsetHapticIntensity();

  constexpr float_t const& __get__headsetHapticIntensity() const;

  constexpr void __set__headsetHapticIntensity(float_t value);

  /// @brief Method get_leftHanded, addr 0x2372acc, size 0x8, virtual false, abstract: false, final false
  inline bool get_leftHanded();

  /// @brief Method get_playerHeight, addr 0x2372ad4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_playerHeight();

  /// @brief Method get_automaticPlayerHeight, addr 0x2372adc, size 0x8, virtual false, abstract: false, final false
  inline bool get_automaticPlayerHeight();

  /// @brief Method get_sfxVolume, addr 0x2372ae4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sfxVolume();

  /// @brief Method get_reduceDebris, addr 0x2372aec, size 0x8, virtual false, abstract: false, final false
  inline bool get_reduceDebris();

  /// @brief Method get_noTextsAndHuds, addr 0x2372af4, size 0x8, virtual false, abstract: false, final false
  inline bool get_noTextsAndHuds();

  /// @brief Method get_noFailEffects, addr 0x2372afc, size 0x8, virtual false, abstract: false, final false
  inline bool get_noFailEffects();

  /// @brief Method get_advancedHud, addr 0x2372b04, size 0x8, virtual false, abstract: false, final false
  inline bool get_advancedHud();

  /// @brief Method get_autoRestart, addr 0x2372b0c, size 0x8, virtual false, abstract: false, final false
  inline bool get_autoRestart();

  /// @brief Method get_saberTrailIntensity, addr 0x2372b14, size 0x8, virtual false, abstract: false, final false
  inline float_t get_saberTrailIntensity();

  /// @brief Method get_noteJumpDurationTypeSettings, addr 0x2372b1c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteJumpDurationTypeSettings get_noteJumpDurationTypeSettings();

  /// @brief Method get_noteJumpFixedDuration, addr 0x2372b24, size 0x8, virtual false, abstract: false, final false
  inline float_t get_noteJumpFixedDuration();

  /// @brief Method get_noteJumpStartBeatOffset, addr 0x2372b2c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_noteJumpStartBeatOffset();

  /// @brief Method get_hideNoteSpawnEffect, addr 0x2372b34, size 0x8, virtual false, abstract: false, final false
  inline bool get_hideNoteSpawnEffect();

  /// @brief Method get_adaptiveSfx, addr 0x2372b3c, size 0x8, virtual false, abstract: false, final false
  inline bool get_adaptiveSfx();

  /// @brief Method get_arcsHapticFeedback, addr 0x2372b44, size 0x8, virtual false, abstract: false, final false
  inline bool get_arcsHapticFeedback();

  /// @brief Method get_arcVisibility, addr 0x2372b4c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ArcVisibilityType get_arcVisibility();

  /// @brief Method get_environmentEffectsFilterDefaultPreset, addr 0x2372b54, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentEffectsFilterPreset get_environmentEffectsFilterDefaultPreset();

  /// @brief Method get_environmentEffectsFilterExpertPlusPreset, addr 0x2372b5c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentEffectsFilterPreset get_environmentEffectsFilterExpertPlusPreset();

  /// @brief Method get_headsetHapticIntensity, addr 0x2372b64, size 0x8, virtual false, abstract: false, final false
  inline float_t get_headsetHapticIntensity();

  static inline ::GlobalNamespace::PlayerSpecificSettings* New_ctor();

  /// @brief Method .ctor, addr 0x2372b6c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::PlayerSpecificSettings* New_ctor(bool leftHanded, float_t playerHeight, bool automaticPlayerHeight, float_t sfxVolume, bool reduceDebris, bool noTextsAndHuds,
                                                                    bool noFailEffects, bool advancedHud, bool autoRestart, float_t saberTrailIntensity,
                                                                    ::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings, float_t noteJumpFixedDuration,
                                                                    float_t noteJumpStartBeatOffset, bool hideNoteSpawnEffect, bool adaptiveSfx, bool arcsHapticFeedback,
                                                                    ::GlobalNamespace::ArcVisibilityType arcsVisible,
                                                                    ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterDefaultPreset,
                                                                    ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterExpertPlusPreset, float_t headsetHapticIntensity);

  /// @brief Method .ctor, addr 0x2372be4, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(bool leftHanded, float_t playerHeight, bool automaticPlayerHeight, float_t sfxVolume, bool reduceDebris, bool noTextsAndHuds, bool noFailEffects, bool advancedHud,
                    bool autoRestart, float_t saberTrailIntensity, ::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings, float_t noteJumpFixedDuration,
                    float_t noteJumpStartBeatOffset, bool hideNoteSpawnEffect, bool adaptiveSfx, bool arcsHapticFeedback, ::GlobalNamespace::ArcVisibilityType arcsVisible,
                    ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterDefaultPreset, ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterExpertPlusPreset,
                    float_t headsetHapticIntensity);

  /// @brief Method CopyWith, addr 0x2372d0c, size 0x3d4, virtual false, abstract: false, final false
  /// @param leftHanded: ::System::Nullable_1<bool> (default: {})
  /// @param playerHeight: ::System::Nullable_1<float_t> (default: {})
  /// @param automaticPlayerHeight: ::System::Nullable_1<bool> (default: {})
  /// @param sfxVolume: ::System::Nullable_1<float_t> (default: {})
  /// @param reduceDebris: ::System::Nullable_1<bool> (default: {})
  /// @param noTextsAndHuds: ::System::Nullable_1<bool> (default: {})
  /// @param noFailEffects: ::System::Nullable_1<bool> (default: {})
  /// @param advancedHud: ::System::Nullable_1<bool> (default: {})
  /// @param autoRestart: ::System::Nullable_1<bool> (default: {})
  /// @param saberTrailIntensity: ::System::Nullable_1<float_t> (default: {})
  /// @param noteJumpDurationTypeSettings: ::System::Nullable_1<::GlobalNamespace::NoteJumpDurationTypeSettings> (default: {})
  /// @param noteJumpFixedDuration: ::System::Nullable_1<float_t> (default: {})
  /// @param noteJumpStartBeatOffset: ::System::Nullable_1<float_t> (default: {})
  /// @param hideNoteSpawnEffect: ::System::Nullable_1<bool> (default: {})
  /// @param adaptiveSfx: ::System::Nullable_1<bool> (default: {})
  /// @param arcsHapticFeedback: ::System::Nullable_1<bool> (default: {})
  /// @param arcsVisible: ::System::Nullable_1<::GlobalNamespace::ArcVisibilityType> (default: {})
  /// @param environmentEffectsFilterDefaultPreset: ::System::Nullable_1<::GlobalNamespace::EnvironmentEffectsFilterPreset> (default: {})
  /// @param environmentEffectsFilterExpertPlusPreset: ::System::Nullable_1<::GlobalNamespace::EnvironmentEffectsFilterPreset> (default: {})
  /// @param headsetHapticIntensity: ::System::Nullable_1<float_t> (default: {})
  inline ::GlobalNamespace::PlayerSpecificSettings*
  CopyWith(::System::Nullable_1<bool> leftHanded = {}, ::System::Nullable_1<float_t> playerHeight = {}, ::System::Nullable_1<bool> automaticPlayerHeight = {},
           ::System::Nullable_1<float_t> sfxVolume = {}, ::System::Nullable_1<bool> reduceDebris = {}, ::System::Nullable_1<bool> noTextsAndHuds = {}, ::System::Nullable_1<bool> noFailEffects = {},
           ::System::Nullable_1<bool> advancedHud = {}, ::System::Nullable_1<bool> autoRestart = {}, ::System::Nullable_1<float_t> saberTrailIntensity = {},
           ::System::Nullable_1<::GlobalNamespace::NoteJumpDurationTypeSettings> noteJumpDurationTypeSettings = {}, ::System::Nullable_1<float_t> noteJumpFixedDuration = {},
           ::System::Nullable_1<float_t> noteJumpStartBeatOffset = {}, ::System::Nullable_1<bool> hideNoteSpawnEffect = {}, ::System::Nullable_1<bool> adaptiveSfx = {},
           ::System::Nullable_1<bool> arcsHapticFeedback = {}, ::System::Nullable_1<::GlobalNamespace::ArcVisibilityType> arcsVisible = {},
           ::System::Nullable_1<::GlobalNamespace::EnvironmentEffectsFilterPreset> environmentEffectsFilterDefaultPreset = {},
           ::System::Nullable_1<::GlobalNamespace::EnvironmentEffectsFilterPreset> environmentEffectsFilterExpertPlusPreset = {}, ::System::Nullable_1<float_t> headsetHapticIntensity = {});

  /// @brief Method GetEnvironmentEffectsFilterPreset, addr 0x23730e0, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentEffectsFilterPreset GetEnvironmentEffectsFilterPreset(::GlobalNamespace::BeatmapDifficulty difficulty);

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSpecificSettings(PlayerSpecificSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSpecificSettings(PlayerSpecificSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSpecificSettings();

public:
  /// @brief Field _leftHanded, offset: 0x10, size: 0x1, def value: None
  bool ____leftHanded;

  /// @brief Field _playerHeight, offset: 0x14, size: 0x4, def value: None
  float_t ____playerHeight;

  /// @brief Field _automaticPlayerHeight, offset: 0x18, size: 0x1, def value: None
  bool ____automaticPlayerHeight;

  /// @brief Field _sfxVolume, offset: 0x1c, size: 0x4, def value: None
  float_t ____sfxVolume;

  /// @brief Field _reduceDebris, offset: 0x20, size: 0x1, def value: None
  bool ____reduceDebris;

  /// @brief Field _noTextsAndHuds, offset: 0x21, size: 0x1, def value: None
  bool ____noTextsAndHuds;

  /// @brief Field _noFailEffects, offset: 0x22, size: 0x1, def value: None
  bool ____noFailEffects;

  /// @brief Field _advancedHud, offset: 0x23, size: 0x1, def value: None
  bool ____advancedHud;

  /// @brief Field _autoRestart, offset: 0x24, size: 0x1, def value: None
  bool ____autoRestart;

  /// @brief Field _saberTrailIntensity, offset: 0x28, size: 0x4, def value: None
  float_t ____saberTrailIntensity;

  /// @brief Field _noteJumpDurationTypeSettings, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::NoteJumpDurationTypeSettings ____noteJumpDurationTypeSettings;

  /// @brief Field _noteJumpFixedDuration, offset: 0x30, size: 0x4, def value: None
  float_t ____noteJumpFixedDuration;

  /// @brief Field _noteJumpStartBeatOffset, offset: 0x34, size: 0x4, def value: None
  float_t ____noteJumpStartBeatOffset;

  /// @brief Field _hideNoteSpawnEffect, offset: 0x38, size: 0x1, def value: None
  bool ____hideNoteSpawnEffect;

  /// @brief Field _adaptiveSfx, offset: 0x39, size: 0x1, def value: None
  bool ____adaptiveSfx;

  /// @brief Field _arcsHapticFeedback, offset: 0x3a, size: 0x1, def value: None
  bool ____arcsHapticFeedback;

  /// @brief Field _arcsVisible, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::ArcVisibilityType ____arcsVisible;

  /// @brief Field _environmentEffectsFilterDefaultPreset, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentEffectsFilterPreset ____environmentEffectsFilterDefaultPreset;

  /// @brief Field _environmentEffectsFilterExpertPlusPreset, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentEffectsFilterPreset ____environmentEffectsFilterExpertPlusPreset;

  /// @brief Field _headsetHapticIntensity, offset: 0x48, size: 0x4, def value: None
  float_t ____headsetHapticIntensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSpecificSettings, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____leftHanded) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____playerHeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____automaticPlayerHeight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____sfxVolume) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____reduceDebris) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____noTextsAndHuds) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____noFailEffects) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____advancedHud) == 0x23, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____autoRestart) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____saberTrailIntensity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____noteJumpDurationTypeSettings) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____noteJumpFixedDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____noteJumpStartBeatOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____hideNoteSpawnEffect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____adaptiveSfx) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____arcsHapticFeedback) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____arcsVisible) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____environmentEffectsFilterDefaultPreset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____environmentEffectsFilterExpertPlusPreset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings, ____headsetHapticIntensity) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerSpecificSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSpecificSettings*, "", "PlayerSpecificSettings");
