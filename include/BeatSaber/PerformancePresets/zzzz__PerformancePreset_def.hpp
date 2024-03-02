#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/PerformancePresets/zzzz__ObstaclesQuality_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformancePreset)
namespace BeatSaber::PerformancePresets {
class QuestPerformanceSettings;
}
// Forward declare root types
namespace BeatSaber::PerformancePresets {
class PerformancePreset;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::PerformancePresets::PerformancePreset);
// Type: BeatSaber.PerformancePresets::PerformancePreset
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::PerformancePresets {
// Is value type: false
// CS Name: ::BeatSaber.PerformancePresets::PerformancePreset*
class CORDL_TYPE PerformancePreset : public ::System::Object {
public:
  // Declarations
  /// @brief Field antiAliasingLevel, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_antiAliasingLevel, put = __cordl_internal_set_antiAliasingLevel)) int32_t antiAliasingLevel;

  /// @brief Field bloomGraphics, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_bloomGraphics, put = __cordl_internal_set_bloomGraphics)) int32_t bloomGraphics;

  /// @brief Field burnMarkTrails, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_burnMarkTrails, put = __cordl_internal_set_burnMarkTrails)) bool burnMarkTrails;

  /// @brief Field dataVersion, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_dataVersion, put = __cordl_internal_set_dataVersion)) uint32_t dataVersion;

  /// @brief Field defaultAudioLatency, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultAudioLatency, put = __cordl_internal_set_defaultAudioLatency)) double_t defaultAudioLatency;

  /// @brief Field mainEffectGraphics, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_mainEffectGraphics, put = __cordl_internal_set_mainEffectGraphics)) int32_t mainEffectGraphics;

  /// @brief Field maxNumberOfCutSoundEffects, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_maxNumberOfCutSoundEffects, put = __cordl_internal_set_maxNumberOfCutSoundEffects)) int32_t maxNumberOfCutSoundEffects;

  /// @brief Field maxQueuedFrames, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_maxQueuedFrames, put = __cordl_internal_set_maxQueuedFrames)) int32_t maxQueuedFrames;

  /// @brief Field maxShockwaveParticles, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_maxShockwaveParticles, put = __cordl_internal_set_maxShockwaveParticles)) int32_t maxShockwaveParticles;

  /// @brief Field menuVRResolutionScaleMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_menuVRResolutionScaleMultiplier, put = __cordl_internal_set_menuVRResolutionScaleMultiplier)) float_t menuVRResolutionScaleMultiplier;

  /// @brief Field mirrorGraphics, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_mirrorGraphics, put = __cordl_internal_set_mirrorGraphics)) int32_t mirrorGraphics;

  /// @brief Field obstaclesQuality, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_obstaclesQuality, put = __cordl_internal_set_obstaclesQuality))::BeatSaber::PerformancePresets::ObstaclesQuality obstaclesQuality;

  /// @brief Field presetName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_presetName, put = __cordl_internal_set_presetName))::StringW presetName;

  /// @brief Field presetNameLocalizationTag, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_presetNameLocalizationTag, put = __cordl_internal_set_presetNameLocalizationTag))::StringW presetNameLocalizationTag;

  /// @brief Field questSettings, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_questSettings, put = __cordl_internal_set_questSettings))::BeatSaber::PerformancePresets::QuestPerformanceSettings* questSettings;

  /// @brief Field renderViewportScale, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_renderViewportScale, put = __cordl_internal_set_renderViewportScale)) float_t renderViewportScale;

  /// @brief Field screenDisplacementEffects, offset 0x52, size 0x1
  __declspec(property(get = __cordl_internal_get_screenDisplacementEffects, put = __cordl_internal_set_screenDisplacementEffects)) bool screenDisplacementEffects;

  /// @brief Field smokeGraphics, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_smokeGraphics, put = __cordl_internal_set_smokeGraphics)) bool smokeGraphics;

  /// @brief Field targetFramerate, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_targetFramerate, put = __cordl_internal_set_targetFramerate)) float_t targetFramerate;

  /// @brief Field vSyncCount, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_vSyncCount, put = __cordl_internal_set_vSyncCount)) int32_t vSyncCount;

  /// @brief Field vrResolutionScale, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_vrResolutionScale, put = __cordl_internal_set_vrResolutionScale)) float_t vrResolutionScale;

  static inline ::BeatSaber::PerformancePresets::PerformancePreset* New_ctor();

  constexpr int32_t const& __cordl_internal_get_antiAliasingLevel() const;

  constexpr int32_t& __cordl_internal_get_antiAliasingLevel();

  constexpr int32_t const& __cordl_internal_get_bloomGraphics() const;

  constexpr int32_t& __cordl_internal_get_bloomGraphics();

  constexpr bool const& __cordl_internal_get_burnMarkTrails() const;

  constexpr bool& __cordl_internal_get_burnMarkTrails();

  constexpr uint32_t const& __cordl_internal_get_dataVersion() const;

  constexpr uint32_t& __cordl_internal_get_dataVersion();

  constexpr double_t const& __cordl_internal_get_defaultAudioLatency() const;

  constexpr double_t& __cordl_internal_get_defaultAudioLatency();

  constexpr int32_t const& __cordl_internal_get_mainEffectGraphics() const;

  constexpr int32_t& __cordl_internal_get_mainEffectGraphics();

  constexpr int32_t const& __cordl_internal_get_maxNumberOfCutSoundEffects() const;

  constexpr int32_t& __cordl_internal_get_maxNumberOfCutSoundEffects();

  constexpr int32_t const& __cordl_internal_get_maxQueuedFrames() const;

  constexpr int32_t& __cordl_internal_get_maxQueuedFrames();

  constexpr int32_t const& __cordl_internal_get_maxShockwaveParticles() const;

  constexpr int32_t& __cordl_internal_get_maxShockwaveParticles();

  constexpr float_t const& __cordl_internal_get_menuVRResolutionScaleMultiplier() const;

  constexpr float_t& __cordl_internal_get_menuVRResolutionScaleMultiplier();

  constexpr int32_t const& __cordl_internal_get_mirrorGraphics() const;

  constexpr int32_t& __cordl_internal_get_mirrorGraphics();

  constexpr ::BeatSaber::PerformancePresets::ObstaclesQuality const& __cordl_internal_get_obstaclesQuality() const;

  constexpr ::BeatSaber::PerformancePresets::ObstaclesQuality& __cordl_internal_get_obstaclesQuality();

  constexpr ::StringW const& __cordl_internal_get_presetName() const;

  constexpr ::StringW& __cordl_internal_get_presetName();

  constexpr ::StringW const& __cordl_internal_get_presetNameLocalizationTag() const;

  constexpr ::StringW& __cordl_internal_get_presetNameLocalizationTag();

  constexpr ::BeatSaber::PerformancePresets::QuestPerformanceSettings*& __cordl_internal_get_questSettings();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::PerformancePresets::QuestPerformanceSettings*> const& __cordl_internal_get_questSettings() const;

  constexpr float_t const& __cordl_internal_get_renderViewportScale() const;

  constexpr float_t& __cordl_internal_get_renderViewportScale();

  constexpr bool const& __cordl_internal_get_screenDisplacementEffects() const;

  constexpr bool& __cordl_internal_get_screenDisplacementEffects();

  constexpr bool const& __cordl_internal_get_smokeGraphics() const;

  constexpr bool& __cordl_internal_get_smokeGraphics();

  constexpr float_t const& __cordl_internal_get_targetFramerate() const;

  constexpr float_t& __cordl_internal_get_targetFramerate();

  constexpr int32_t const& __cordl_internal_get_vSyncCount() const;

  constexpr int32_t& __cordl_internal_get_vSyncCount();

  constexpr float_t const& __cordl_internal_get_vrResolutionScale() const;

  constexpr float_t& __cordl_internal_get_vrResolutionScale();

  constexpr void __cordl_internal_set_antiAliasingLevel(int32_t value);

  constexpr void __cordl_internal_set_bloomGraphics(int32_t value);

  constexpr void __cordl_internal_set_burnMarkTrails(bool value);

  constexpr void __cordl_internal_set_dataVersion(uint32_t value);

  constexpr void __cordl_internal_set_defaultAudioLatency(double_t value);

  constexpr void __cordl_internal_set_mainEffectGraphics(int32_t value);

  constexpr void __cordl_internal_set_maxNumberOfCutSoundEffects(int32_t value);

  constexpr void __cordl_internal_set_maxQueuedFrames(int32_t value);

  constexpr void __cordl_internal_set_maxShockwaveParticles(int32_t value);

  constexpr void __cordl_internal_set_menuVRResolutionScaleMultiplier(float_t value);

  constexpr void __cordl_internal_set_mirrorGraphics(int32_t value);

  constexpr void __cordl_internal_set_obstaclesQuality(::BeatSaber::PerformancePresets::ObstaclesQuality value);

  constexpr void __cordl_internal_set_presetName(::StringW value);

  constexpr void __cordl_internal_set_presetNameLocalizationTag(::StringW value);

  constexpr void __cordl_internal_set_questSettings(::BeatSaber::PerformancePresets::QuestPerformanceSettings* value);

  constexpr void __cordl_internal_set_renderViewportScale(float_t value);

  constexpr void __cordl_internal_set_screenDisplacementEffects(bool value);

  constexpr void __cordl_internal_set_smokeGraphics(bool value);

  constexpr void __cordl_internal_set_targetFramerate(float_t value);

  constexpr void __cordl_internal_set_vSyncCount(int32_t value);

  constexpr void __cordl_internal_set_vrResolutionScale(float_t value);

  /// @brief Method .ctor, addr 0xe81714, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformancePreset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformancePreset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformancePreset(PerformancePreset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformancePreset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformancePreset(PerformancePreset const&) = delete;

  /// @brief Field dataVersion, offset: 0x10, size: 0x4, def value: None
  uint32_t ___dataVersion;

  /// @brief Field presetName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___presetName;

  /// @brief Field presetNameLocalizationTag, offset: 0x20, size: 0x8, def value: None
  ::StringW ___presetNameLocalizationTag;

  /// @brief Field renderViewportScale, offset: 0x28, size: 0x4, def value: None
  float_t ___renderViewportScale;

  /// @brief Field vrResolutionScale, offset: 0x2c, size: 0x4, def value: None
  float_t ___vrResolutionScale;

  /// @brief Field menuVRResolutionScaleMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t ___menuVRResolutionScaleMultiplier;

  /// @brief Field antiAliasingLevel, offset: 0x34, size: 0x4, def value: None
  int32_t ___antiAliasingLevel;

  /// @brief Field targetFramerate, offset: 0x38, size: 0x4, def value: None
  float_t ___targetFramerate;

  /// @brief Field vSyncCount, offset: 0x3c, size: 0x4, def value: None
  int32_t ___vSyncCount;

  /// @brief Field maxQueuedFrames, offset: 0x40, size: 0x4, def value: None
  int32_t ___maxQueuedFrames;

  /// @brief Field mirrorGraphics, offset: 0x44, size: 0x4, def value: None
  int32_t ___mirrorGraphics;

  /// @brief Field mainEffectGraphics, offset: 0x48, size: 0x4, def value: None
  int32_t ___mainEffectGraphics;

  /// @brief Field bloomGraphics, offset: 0x4c, size: 0x4, def value: None
  int32_t ___bloomGraphics;

  /// @brief Field smokeGraphics, offset: 0x50, size: 0x1, def value: None
  bool ___smokeGraphics;

  /// @brief Field burnMarkTrails, offset: 0x51, size: 0x1, def value: None
  bool ___burnMarkTrails;

  /// @brief Field screenDisplacementEffects, offset: 0x52, size: 0x1, def value: None
  bool ___screenDisplacementEffects;

  /// @brief Field maxShockwaveParticles, offset: 0x54, size: 0x4, def value: None
  int32_t ___maxShockwaveParticles;

  /// @brief Field maxNumberOfCutSoundEffects, offset: 0x58, size: 0x4, def value: None
  int32_t ___maxNumberOfCutSoundEffects;

  /// @brief Field defaultAudioLatency, offset: 0x60, size: 0x8, def value: None
  double_t ___defaultAudioLatency;

  /// @brief Field obstaclesQuality, offset: 0x68, size: 0x4, def value: None
  ::BeatSaber::PerformancePresets::ObstaclesQuality ___obstaclesQuality;

  /// @brief Field questSettings, offset: 0x70, size: 0x8, def value: None
  ::BeatSaber::PerformancePresets::QuestPerformanceSettings* ___questSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::PerformancePresets::PerformancePreset, 0x78>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___dataVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___presetName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___presetNameLocalizationTag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___renderViewportScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___vrResolutionScale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___menuVRResolutionScaleMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___antiAliasingLevel) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___targetFramerate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___vSyncCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___maxQueuedFrames) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___mirrorGraphics) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___mainEffectGraphics) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___bloomGraphics) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___smokeGraphics) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___burnMarkTrails) == 0x51, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___screenDisplacementEffects) == 0x52, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___maxShockwaveParticles) == 0x54, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___maxNumberOfCutSoundEffects) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___defaultAudioLatency) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___obstaclesQuality) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ___questSettings) == 0x70, "Offset mismatch!");

} // namespace BeatSaber::PerformancePresets
NEED_NO_BOX(::BeatSaber::PerformancePresets::PerformancePreset);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::PerformancePresets::PerformancePreset*, "BeatSaber.PerformancePresets", "PerformancePreset");
