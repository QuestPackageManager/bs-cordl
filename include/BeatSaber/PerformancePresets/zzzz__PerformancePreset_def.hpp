#pragma once
// IWYU pragma private; include "BeatSaber/PerformancePresets/PerformancePreset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/PerformancePresets/zzzz__BloomPrepassTextureEffectPreset_def.hpp"
#include "BeatSaber/PerformancePresets/zzzz__MainEffectPreset_def.hpp"
#include "BeatSaber/PerformancePresets/zzzz__MirrorQualityPreset_def.hpp"
#include "BeatSaber/PerformancePresets/zzzz__ObstaclesQuality_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformancePreset)
namespace BeatSaber::PerformancePresets {
struct BloomPrepassTextureEffectPreset;
}
namespace BeatSaber::PerformancePresets {
class EnvironmentOverride;
}
namespace BeatSaber::PerformancePresets {
struct MainEffectPreset;
}
namespace BeatSaber::PerformancePresets {
struct MirrorQualityPreset;
}
namespace BeatSaber::PerformancePresets {
struct ObstaclesQuality;
}
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
  /// @brief Field _antiAliasingLevel, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__antiAliasingLevel, put = __cordl_internal_set__antiAliasingLevel)) int32_t _antiAliasingLevel;

  /// @brief Field _bloomPrePassTextureEffect, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__bloomPrePassTextureEffect,
                      put = __cordl_internal_set__bloomPrePassTextureEffect))::BeatSaber::PerformancePresets::BloomPrepassTextureEffectPreset _bloomPrePassTextureEffect;

  /// @brief Field _burnMarkTrails, offset 0x52, size 0x1
  __declspec(property(get = __cordl_internal_get__burnMarkTrails, put = __cordl_internal_set__burnMarkTrails)) bool _burnMarkTrails;

  /// @brief Field _dataVersion, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__dataVersion, put = __cordl_internal_set__dataVersion)) uint32_t _dataVersion;

  /// @brief Field _defaultAudioLatency, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultAudioLatency, put = __cordl_internal_set__defaultAudioLatency)) float_t _defaultAudioLatency;

  /// @brief Field _depthTexture, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__depthTexture, put = __cordl_internal_set__depthTexture)) bool _depthTexture;

  /// @brief Field _environmentOverrides, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentOverrides,
                      put = __cordl_internal_set__environmentOverrides))::ArrayW<::BeatSaber::PerformancePresets::EnvironmentOverride*,
                                                                                 ::Array<::BeatSaber::PerformancePresets::EnvironmentOverride*>*> _environmentOverrides;

  /// @brief Field _mainEffectGraphics, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__mainEffectGraphics, put = __cordl_internal_set__mainEffectGraphics))::BeatSaber::PerformancePresets::MainEffectPreset _mainEffectGraphics;

  /// @brief Field _maxNumberOfCutSoundEffects, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__maxNumberOfCutSoundEffects, put = __cordl_internal_set__maxNumberOfCutSoundEffects)) int32_t _maxNumberOfCutSoundEffects;

  /// @brief Field _maxQueuedFrames, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__maxQueuedFrames, put = __cordl_internal_set__maxQueuedFrames)) int32_t _maxQueuedFrames;

  /// @brief Field _maxShockwaveParticles, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__maxShockwaveParticles, put = __cordl_internal_set__maxShockwaveParticles)) int32_t _maxShockwaveParticles;

  /// @brief Field _menuVRResolutionScaleMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__menuVRResolutionScaleMultiplier, put = __cordl_internal_set__menuVRResolutionScaleMultiplier)) float_t _menuVRResolutionScaleMultiplier;

  /// @brief Field _mirrorGraphics, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__mirrorGraphics, put = __cordl_internal_set__mirrorGraphics))::BeatSaber::PerformancePresets::MirrorQualityPreset _mirrorGraphics;

  /// @brief Field _obstaclesQuality, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__obstaclesQuality, put = __cordl_internal_set__obstaclesQuality))::BeatSaber::PerformancePresets::ObstaclesQuality _obstaclesQuality;

  /// @brief Field _presetName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__presetName, put = __cordl_internal_set__presetName))::StringW _presetName;

  /// @brief Field _presetNameLocalizationTag, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__presetNameLocalizationTag, put = __cordl_internal_set__presetNameLocalizationTag))::StringW _presetNameLocalizationTag;

  /// @brief Field _questSettings, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__questSettings, put = __cordl_internal_set__questSettings))::BeatSaber::PerformancePresets::QuestPerformanceSettings* _questSettings;

  /// @brief Field _renderViewportScale, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__renderViewportScale, put = __cordl_internal_set__renderViewportScale)) float_t _renderViewportScale;

  /// @brief Field _screenDisplacementEffects, offset 0x53, size 0x1
  __declspec(property(get = __cordl_internal_get__screenDisplacementEffects, put = __cordl_internal_set__screenDisplacementEffects)) bool _screenDisplacementEffects;

  /// @brief Field _smokeGraphics, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__smokeGraphics, put = __cordl_internal_set__smokeGraphics)) bool _smokeGraphics;

  /// @brief Field _targetFramerate, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__targetFramerate, put = __cordl_internal_set__targetFramerate)) float_t _targetFramerate;

  /// @brief Field _vSyncCount, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__vSyncCount, put = __cordl_internal_set__vSyncCount)) int32_t _vSyncCount;

  /// @brief Field _vrResolutionScale, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__vrResolutionScale, put = __cordl_internal_set__vrResolutionScale)) float_t _vrResolutionScale;

  __declspec(property(get = get_antiAliasingLevel)) int32_t antiAliasingLevel;

  __declspec(property(get = get_bloomPrePassTextureEffect))::BeatSaber::PerformancePresets::BloomPrepassTextureEffectPreset bloomPrePassTextureEffect;

  __declspec(property(get = get_burnMarkTrails)) bool burnMarkTrails;

  __declspec(property(get = get_dataVersion)) uint32_t dataVersion;

  __declspec(property(get = get_defaultAudioLatency)) float_t defaultAudioLatency;

  __declspec(property(get = get_depthTexture)) bool depthTexture;

  __declspec(
      property(get = get_environmentOverrides))::ArrayW<::BeatSaber::PerformancePresets::EnvironmentOverride*, ::Array<::BeatSaber::PerformancePresets::EnvironmentOverride*>*> environmentOverrides;

  __declspec(property(get = get_mainEffectGraphics))::BeatSaber::PerformancePresets::MainEffectPreset mainEffectGraphics;

  __declspec(property(get = get_maxNumberOfCutSoundEffects)) int32_t maxNumberOfCutSoundEffects;

  __declspec(property(get = get_maxQueuedFrames)) int32_t maxQueuedFrames;

  __declspec(property(get = get_maxShockwaveParticles)) int32_t maxShockwaveParticles;

  __declspec(property(get = get_menuVRResolutionScaleMultiplier)) float_t menuVRResolutionScaleMultiplier;

  __declspec(property(get = get_mirrorGraphics))::BeatSaber::PerformancePresets::MirrorQualityPreset mirrorGraphics;

  __declspec(property(get = get_obstaclesQuality))::BeatSaber::PerformancePresets::ObstaclesQuality obstaclesQuality;

  __declspec(property(get = get_presetName))::StringW presetName;

  __declspec(property(get = get_presetNameLocalizationTag))::StringW presetNameLocalizationTag;

  __declspec(property(get = get_questSettings))::BeatSaber::PerformancePresets::QuestPerformanceSettings* questSettings;

  __declspec(property(get = get_renderViewportScale)) float_t renderViewportScale;

  __declspec(property(get = get_screenDisplacementEffects)) bool screenDisplacementEffects;

  __declspec(property(get = get_smokeGraphics)) bool smokeGraphics;

  __declspec(property(get = get_targetFramerate)) float_t targetFramerate;

  __declspec(property(get = get_vSyncCount)) int32_t vSyncCount;

  __declspec(property(get = get_vrResolutionScale)) float_t vrResolutionScale;

  static inline ::BeatSaber::PerformancePresets::PerformancePreset* New_ctor();

  constexpr int32_t const& __cordl_internal_get__antiAliasingLevel() const;

  constexpr int32_t& __cordl_internal_get__antiAliasingLevel();

  constexpr ::BeatSaber::PerformancePresets::BloomPrepassTextureEffectPreset const& __cordl_internal_get__bloomPrePassTextureEffect() const;

  constexpr ::BeatSaber::PerformancePresets::BloomPrepassTextureEffectPreset& __cordl_internal_get__bloomPrePassTextureEffect();

  constexpr bool const& __cordl_internal_get__burnMarkTrails() const;

  constexpr bool& __cordl_internal_get__burnMarkTrails();

  constexpr uint32_t const& __cordl_internal_get__dataVersion() const;

  constexpr uint32_t& __cordl_internal_get__dataVersion();

  constexpr float_t const& __cordl_internal_get__defaultAudioLatency() const;

  constexpr float_t& __cordl_internal_get__defaultAudioLatency();

  constexpr bool const& __cordl_internal_get__depthTexture() const;

  constexpr bool& __cordl_internal_get__depthTexture();

  constexpr ::ArrayW<::BeatSaber::PerformancePresets::EnvironmentOverride*, ::Array<::BeatSaber::PerformancePresets::EnvironmentOverride*>*> const& __cordl_internal_get__environmentOverrides() const;

  constexpr ::ArrayW<::BeatSaber::PerformancePresets::EnvironmentOverride*, ::Array<::BeatSaber::PerformancePresets::EnvironmentOverride*>*>& __cordl_internal_get__environmentOverrides();

  constexpr ::BeatSaber::PerformancePresets::MainEffectPreset const& __cordl_internal_get__mainEffectGraphics() const;

  constexpr ::BeatSaber::PerformancePresets::MainEffectPreset& __cordl_internal_get__mainEffectGraphics();

  constexpr int32_t const& __cordl_internal_get__maxNumberOfCutSoundEffects() const;

  constexpr int32_t& __cordl_internal_get__maxNumberOfCutSoundEffects();

  constexpr int32_t const& __cordl_internal_get__maxQueuedFrames() const;

  constexpr int32_t& __cordl_internal_get__maxQueuedFrames();

  constexpr int32_t const& __cordl_internal_get__maxShockwaveParticles() const;

  constexpr int32_t& __cordl_internal_get__maxShockwaveParticles();

  constexpr float_t const& __cordl_internal_get__menuVRResolutionScaleMultiplier() const;

  constexpr float_t& __cordl_internal_get__menuVRResolutionScaleMultiplier();

  constexpr ::BeatSaber::PerformancePresets::MirrorQualityPreset const& __cordl_internal_get__mirrorGraphics() const;

  constexpr ::BeatSaber::PerformancePresets::MirrorQualityPreset& __cordl_internal_get__mirrorGraphics();

  constexpr ::BeatSaber::PerformancePresets::ObstaclesQuality const& __cordl_internal_get__obstaclesQuality() const;

  constexpr ::BeatSaber::PerformancePresets::ObstaclesQuality& __cordl_internal_get__obstaclesQuality();

  constexpr ::StringW const& __cordl_internal_get__presetName() const;

  constexpr ::StringW& __cordl_internal_get__presetName();

  constexpr ::StringW const& __cordl_internal_get__presetNameLocalizationTag() const;

  constexpr ::StringW& __cordl_internal_get__presetNameLocalizationTag();

  constexpr ::BeatSaber::PerformancePresets::QuestPerformanceSettings*& __cordl_internal_get__questSettings();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::PerformancePresets::QuestPerformanceSettings*> const& __cordl_internal_get__questSettings() const;

  constexpr float_t const& __cordl_internal_get__renderViewportScale() const;

  constexpr float_t& __cordl_internal_get__renderViewportScale();

  constexpr bool const& __cordl_internal_get__screenDisplacementEffects() const;

  constexpr bool& __cordl_internal_get__screenDisplacementEffects();

  constexpr bool const& __cordl_internal_get__smokeGraphics() const;

  constexpr bool& __cordl_internal_get__smokeGraphics();

  constexpr float_t const& __cordl_internal_get__targetFramerate() const;

  constexpr float_t& __cordl_internal_get__targetFramerate();

  constexpr int32_t const& __cordl_internal_get__vSyncCount() const;

  constexpr int32_t& __cordl_internal_get__vSyncCount();

  constexpr float_t const& __cordl_internal_get__vrResolutionScale() const;

  constexpr float_t& __cordl_internal_get__vrResolutionScale();

  constexpr void __cordl_internal_set__antiAliasingLevel(int32_t value);

  constexpr void __cordl_internal_set__bloomPrePassTextureEffect(::BeatSaber::PerformancePresets::BloomPrepassTextureEffectPreset value);

  constexpr void __cordl_internal_set__burnMarkTrails(bool value);

  constexpr void __cordl_internal_set__dataVersion(uint32_t value);

  constexpr void __cordl_internal_set__defaultAudioLatency(float_t value);

  constexpr void __cordl_internal_set__depthTexture(bool value);

  constexpr void __cordl_internal_set__environmentOverrides(::ArrayW<::BeatSaber::PerformancePresets::EnvironmentOverride*, ::Array<::BeatSaber::PerformancePresets::EnvironmentOverride*>*> value);

  constexpr void __cordl_internal_set__mainEffectGraphics(::BeatSaber::PerformancePresets::MainEffectPreset value);

  constexpr void __cordl_internal_set__maxNumberOfCutSoundEffects(int32_t value);

  constexpr void __cordl_internal_set__maxQueuedFrames(int32_t value);

  constexpr void __cordl_internal_set__maxShockwaveParticles(int32_t value);

  constexpr void __cordl_internal_set__menuVRResolutionScaleMultiplier(float_t value);

  constexpr void __cordl_internal_set__mirrorGraphics(::BeatSaber::PerformancePresets::MirrorQualityPreset value);

  constexpr void __cordl_internal_set__obstaclesQuality(::BeatSaber::PerformancePresets::ObstaclesQuality value);

  constexpr void __cordl_internal_set__presetName(::StringW value);

  constexpr void __cordl_internal_set__presetNameLocalizationTag(::StringW value);

  constexpr void __cordl_internal_set__questSettings(::BeatSaber::PerformancePresets::QuestPerformanceSettings* value);

  constexpr void __cordl_internal_set__renderViewportScale(float_t value);

  constexpr void __cordl_internal_set__screenDisplacementEffects(bool value);

  constexpr void __cordl_internal_set__smokeGraphics(bool value);

  constexpr void __cordl_internal_set__targetFramerate(float_t value);

  constexpr void __cordl_internal_set__vSyncCount(int32_t value);

  constexpr void __cordl_internal_set__vrResolutionScale(float_t value);

  /// @brief Method .ctor, addr 0x1074150, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_antiAliasingLevel, addr 0x1074250, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_antiAliasingLevel();

  /// @brief Method get_bloomPrePassTextureEffect, addr 0x1074280, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::PerformancePresets::BloomPrepassTextureEffectPreset get_bloomPrePassTextureEffect();

  /// @brief Method get_burnMarkTrails, addr 0x1074298, size 0x8, virtual false, abstract: false, final false
  inline bool get_burnMarkTrails();

  /// @brief Method get_dataVersion, addr 0x1074220, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_dataVersion();

  /// @brief Method get_defaultAudioLatency, addr 0x10742b8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_defaultAudioLatency();

  /// @brief Method get_depthTexture, addr 0x1074290, size 0x8, virtual false, abstract: false, final false
  inline bool get_depthTexture();

  /// @brief Method get_environmentOverrides, addr 0x10742d0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::BeatSaber::PerformancePresets::EnvironmentOverride*, ::Array<::BeatSaber::PerformancePresets::EnvironmentOverride*>*> get_environmentOverrides();

  /// @brief Method get_mainEffectGraphics, addr 0x1074278, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::PerformancePresets::MainEffectPreset get_mainEffectGraphics();

  /// @brief Method get_maxNumberOfCutSoundEffects, addr 0x10742b0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxNumberOfCutSoundEffects();

  /// @brief Method get_maxQueuedFrames, addr 0x1074268, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxQueuedFrames();

  /// @brief Method get_maxShockwaveParticles, addr 0x10742a8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxShockwaveParticles();

  /// @brief Method get_menuVRResolutionScaleMultiplier, addr 0x1074248, size 0x8, virtual false, abstract: false, final false
  inline float_t get_menuVRResolutionScaleMultiplier();

  /// @brief Method get_mirrorGraphics, addr 0x1074270, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::PerformancePresets::MirrorQualityPreset get_mirrorGraphics();

  /// @brief Method get_obstaclesQuality, addr 0x10742c0, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::PerformancePresets::ObstaclesQuality get_obstaclesQuality();

  /// @brief Method get_presetName, addr 0x1074228, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_presetName();

  /// @brief Method get_presetNameLocalizationTag, addr 0x1074230, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_presetNameLocalizationTag();

  /// @brief Method get_questSettings, addr 0x10742c8, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::PerformancePresets::QuestPerformanceSettings* get_questSettings();

  /// @brief Method get_renderViewportScale, addr 0x1074238, size 0x8, virtual false, abstract: false, final false
  inline float_t get_renderViewportScale();

  /// @brief Method get_screenDisplacementEffects, addr 0x10742a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_screenDisplacementEffects();

  /// @brief Method get_smokeGraphics, addr 0x1074288, size 0x8, virtual false, abstract: false, final false
  inline bool get_smokeGraphics();

  /// @brief Method get_targetFramerate, addr 0x1074258, size 0x8, virtual false, abstract: false, final false
  inline float_t get_targetFramerate();

  /// @brief Method get_vSyncCount, addr 0x1074260, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_vSyncCount();

  /// @brief Method get_vrResolutionScale, addr 0x1074240, size 0x8, virtual false, abstract: false, final false
  inline float_t get_vrResolutionScale();

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

  /// @brief Field _dataVersion, offset: 0x10, size: 0x4, def value: None
  uint32_t ____dataVersion;

  /// @brief Field _presetName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____presetName;

  /// @brief Field _presetNameLocalizationTag, offset: 0x20, size: 0x8, def value: None
  ::StringW ____presetNameLocalizationTag;

  /// @brief Field _renderViewportScale, offset: 0x28, size: 0x4, def value: None
  float_t ____renderViewportScale;

  /// @brief Field _vrResolutionScale, offset: 0x2c, size: 0x4, def value: None
  float_t ____vrResolutionScale;

  /// @brief Field _menuVRResolutionScaleMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t ____menuVRResolutionScaleMultiplier;

  /// @brief Field _antiAliasingLevel, offset: 0x34, size: 0x4, def value: None
  int32_t ____antiAliasingLevel;

  /// @brief Field _targetFramerate, offset: 0x38, size: 0x4, def value: None
  float_t ____targetFramerate;

  /// @brief Field _vSyncCount, offset: 0x3c, size: 0x4, def value: None
  int32_t ____vSyncCount;

  /// @brief Field _maxQueuedFrames, offset: 0x40, size: 0x4, def value: None
  int32_t ____maxQueuedFrames;

  /// @brief Field _mirrorGraphics, offset: 0x44, size: 0x4, def value: None
  ::BeatSaber::PerformancePresets::MirrorQualityPreset ____mirrorGraphics;

  /// @brief Field _mainEffectGraphics, offset: 0x48, size: 0x4, def value: None
  ::BeatSaber::PerformancePresets::MainEffectPreset ____mainEffectGraphics;

  /// @brief Field _bloomPrePassTextureEffect, offset: 0x4c, size: 0x4, def value: None
  ::BeatSaber::PerformancePresets::BloomPrepassTextureEffectPreset ____bloomPrePassTextureEffect;

  /// @brief Field _smokeGraphics, offset: 0x50, size: 0x1, def value: None
  bool ____smokeGraphics;

  /// @brief Field _depthTexture, offset: 0x51, size: 0x1, def value: None
  bool ____depthTexture;

  /// @brief Field _burnMarkTrails, offset: 0x52, size: 0x1, def value: None
  bool ____burnMarkTrails;

  /// @brief Field _screenDisplacementEffects, offset: 0x53, size: 0x1, def value: None
  bool ____screenDisplacementEffects;

  /// @brief Field _maxShockwaveParticles, offset: 0x54, size: 0x4, def value: None
  int32_t ____maxShockwaveParticles;

  /// @brief Field _maxNumberOfCutSoundEffects, offset: 0x58, size: 0x4, def value: None
  int32_t ____maxNumberOfCutSoundEffects;

  /// @brief Field _defaultAudioLatency, offset: 0x5c, size: 0x4, def value: None
  float_t ____defaultAudioLatency;

  /// @brief Field _obstaclesQuality, offset: 0x60, size: 0x4, def value: None
  ::BeatSaber::PerformancePresets::ObstaclesQuality ____obstaclesQuality;

  /// @brief Field _questSettings, offset: 0x68, size: 0x8, def value: None
  ::BeatSaber::PerformancePresets::QuestPerformanceSettings* ____questSettings;

  /// @brief Field _environmentOverrides, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::BeatSaber::PerformancePresets::EnvironmentOverride*, ::Array<::BeatSaber::PerformancePresets::EnvironmentOverride*>*> ____environmentOverrides;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::PerformancePresets::PerformancePreset, 0x78>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____dataVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____presetName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____presetNameLocalizationTag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____renderViewportScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____vrResolutionScale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____menuVRResolutionScaleMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____antiAliasingLevel) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____targetFramerate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____vSyncCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____maxQueuedFrames) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____mirrorGraphics) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____mainEffectGraphics) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____bloomPrePassTextureEffect) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____smokeGraphics) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____depthTexture) == 0x51, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____burnMarkTrails) == 0x52, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____screenDisplacementEffects) == 0x53, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____maxShockwaveParticles) == 0x54, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____maxNumberOfCutSoundEffects) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____defaultAudioLatency) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____obstaclesQuality) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____questSettings) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PerformancePreset, ____environmentOverrides) == 0x70, "Offset mismatch!");

} // namespace BeatSaber::PerformancePresets
NEED_NO_BOX(::BeatSaber::PerformancePresets::PerformancePreset);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::PerformancePresets::PerformancePreset*, "BeatSaber.PerformancePresets", "PerformancePreset");
