#pragma once
// IWYU pragma private; include "BeatSaber/PerformancePresets/CustomPerformancePreset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/PerformancePresets/zzzz__PerformancePreset_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomPerformancePreset)
namespace BGLib::SaveDataCore {
class ISerializableSaveData;
}
namespace BeatSaber::PerformancePresets {
struct BloomPrepassTextureEffectPreset;
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
// Forward declare root types
namespace BeatSaber::PerformancePresets {
class CustomPerformancePreset;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::PerformancePresets::CustomPerformancePreset);
// Type: BeatSaber.PerformancePresets::CustomPerformancePreset
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 121, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace BeatSaber::PerformancePresets {
// Is value type: false
// CS Name: ::BeatSaber.PerformancePresets::CustomPerformancePreset*
class CORDL_TYPE CustomPerformancePreset : public ::BeatSaber::PerformancePresets::PerformancePreset {
public:
  // Declarations
  /// @brief Field <isDirty>k__BackingField, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__isDirty_k__BackingField, put = __cordl_internal_set__isDirty_k__BackingField)) bool _isDirty_k__BackingField;

  __declspec(property(get = get_antiAliasingLevel, put = set_antiAliasingLevel)) int32_t antiAliasingLevel;

  __declspec(property(get = get_bloomPrePassTextureEffect, put = set_bloomPrePassTextureEffect))::BeatSaber::PerformancePresets::BloomPrepassTextureEffectPreset bloomPrePassTextureEffect;

  __declspec(property(get = get_burnMarkTrails, put = set_burnMarkTrails)) bool burnMarkTrails;

  __declspec(property(get = get_defaultAudioLatency, put = set_defaultAudioLatency)) float_t defaultAudioLatency;

  __declspec(property(get = get_depthTexture, put = set_depthTexture)) bool depthTexture;

  __declspec(property(get = get_isDirty, put = set_isDirty)) bool isDirty;

  __declspec(property(get = get_mainEffectGraphics, put = set_mainEffectGraphics))::BeatSaber::PerformancePresets::MainEffectPreset mainEffectGraphics;

  __declspec(property(get = get_maxNumberOfCutSoundEffects, put = set_maxNumberOfCutSoundEffects)) int32_t maxNumberOfCutSoundEffects;

  __declspec(property(get = get_maxQueuedFrames, put = set_maxQueuedFrames)) int32_t maxQueuedFrames;

  __declspec(property(get = get_maxShockwaveParticles, put = set_maxShockwaveParticles)) int32_t maxShockwaveParticles;

  __declspec(property(get = get_menuVRResolutionScaleMultiplier, put = set_menuVRResolutionScaleMultiplier)) float_t menuVRResolutionScaleMultiplier;

  __declspec(property(get = get_mirrorGraphics, put = set_mirrorGraphics))::BeatSaber::PerformancePresets::MirrorQualityPreset mirrorGraphics;

  __declspec(property(get = get_obstaclesQuality, put = set_obstaclesQuality))::BeatSaber::PerformancePresets::ObstaclesQuality obstaclesQuality;

  __declspec(property(get = get_presetName, put = set_presetName))::StringW presetName;

  __declspec(property(get = get_renderViewportScale, put = set_renderViewportScale)) float_t renderViewportScale;

  __declspec(property(get = get_screenDisplacementEffects, put = set_screenDisplacementEffects)) bool screenDisplacementEffects;

  __declspec(property(get = get_smokeGraphics, put = set_smokeGraphics)) bool smokeGraphics;

  __declspec(property(get = get_targetFramerate, put = set_targetFramerate)) float_t targetFramerate;

  __declspec(property(get = get_vSyncCount, put = set_vSyncCount)) int32_t vSyncCount;

  __declspec(property(get = get_vrResolutionScale, put = set_vrResolutionScale)) float_t vrResolutionScale;

  /// @brief Convert operator to "::BGLib::SaveDataCore::ISerializableSaveData"
  constexpr operator ::BGLib::SaveDataCore::ISerializableSaveData*() noexcept;

  static inline ::BeatSaber::PerformancePresets::CustomPerformancePreset* New_ctor();

  constexpr bool const& __cordl_internal_get__isDirty_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isDirty_k__BackingField();

  constexpr void __cordl_internal_set__isDirty_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x106d4b0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_antiAliasingLevel, addr 0x106d338, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_antiAliasingLevel();

  /// @brief Method get_bloomPrePassTextureEffect, addr 0x106d3c8, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::PerformancePresets::BloomPrepassTextureEffectPreset get_bloomPrePassTextureEffect();

  /// @brief Method get_burnMarkTrails, addr 0x106d418, size 0x8, virtual false, abstract: false, final false
  inline bool get_burnMarkTrails();

  /// @brief Method get_defaultAudioLatency, addr 0x106d480, size 0x8, virtual false, abstract: false, final false
  inline float_t get_defaultAudioLatency();

  /// @brief Method get_depthTexture, addr 0x106d3fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_depthTexture();

  /// @brief Method get_isDirty, addr 0x106d2c4, size 0x8, virtual true, abstract: false, final true
  inline bool get_isDirty();

  /// @brief Method get_mainEffectGraphics, addr 0x106d3b0, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::PerformancePresets::MainEffectPreset get_mainEffectGraphics();

  /// @brief Method get_maxNumberOfCutSoundEffects, addr 0x106d468, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxNumberOfCutSoundEffects();

  /// @brief Method get_maxQueuedFrames, addr 0x106d380, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxQueuedFrames();

  /// @brief Method get_maxShockwaveParticles, addr 0x106d450, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxShockwaveParticles();

  /// @brief Method get_menuVRResolutionScaleMultiplier, addr 0x106d320, size 0x8, virtual false, abstract: false, final false
  inline float_t get_menuVRResolutionScaleMultiplier();

  /// @brief Method get_mirrorGraphics, addr 0x106d398, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::PerformancePresets::MirrorQualityPreset get_mirrorGraphics();

  /// @brief Method get_obstaclesQuality, addr 0x106d498, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::PerformancePresets::ObstaclesQuality get_obstaclesQuality();

  /// @brief Method get_presetName, addr 0x106d2d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_presetName();

  /// @brief Method get_renderViewportScale, addr 0x106d2f0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_renderViewportScale();

  /// @brief Method get_screenDisplacementEffects, addr 0x106d434, size 0x8, virtual false, abstract: false, final false
  inline bool get_screenDisplacementEffects();

  /// @brief Method get_smokeGraphics, addr 0x106d3e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_smokeGraphics();

  /// @brief Method get_targetFramerate, addr 0x106d350, size 0x8, virtual false, abstract: false, final false
  inline float_t get_targetFramerate();

  /// @brief Method get_vSyncCount, addr 0x106d368, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_vSyncCount();

  /// @brief Method get_vrResolutionScale, addr 0x106d308, size 0x8, virtual false, abstract: false, final false
  inline float_t get_vrResolutionScale();

  /// @brief Convert to "::BGLib::SaveDataCore::ISerializableSaveData"
  constexpr ::BGLib::SaveDataCore::ISerializableSaveData* i___BGLib__SaveDataCore__ISerializableSaveData() noexcept;

  /// @brief Method set_antiAliasingLevel, addr 0x106d340, size 0x10, virtual false, abstract: false, final false
  inline void set_antiAliasingLevel(int32_t value);

  /// @brief Method set_bloomPrePassTextureEffect, addr 0x106d3d0, size 0x10, virtual false, abstract: false, final false
  inline void set_bloomPrePassTextureEffect(::BeatSaber::PerformancePresets::BloomPrepassTextureEffectPreset value);

  /// @brief Method set_burnMarkTrails, addr 0x106d420, size 0x14, virtual false, abstract: false, final false
  inline void set_burnMarkTrails(bool value);

  /// @brief Method set_defaultAudioLatency, addr 0x106d488, size 0x10, virtual false, abstract: false, final false
  inline void set_defaultAudioLatency(float_t value);

  /// @brief Method set_depthTexture, addr 0x106d404, size 0x14, virtual false, abstract: false, final false
  inline void set_depthTexture(bool value);

  /// @brief Method set_isDirty, addr 0x106d2cc, size 0xc, virtual true, abstract: false, final true
  inline void set_isDirty(bool value);

  /// @brief Method set_mainEffectGraphics, addr 0x106d3b8, size 0x10, virtual false, abstract: false, final false
  inline void set_mainEffectGraphics(::BeatSaber::PerformancePresets::MainEffectPreset value);

  /// @brief Method set_maxNumberOfCutSoundEffects, addr 0x106d470, size 0x10, virtual false, abstract: false, final false
  inline void set_maxNumberOfCutSoundEffects(int32_t value);

  /// @brief Method set_maxQueuedFrames, addr 0x106d388, size 0x10, virtual false, abstract: false, final false
  inline void set_maxQueuedFrames(int32_t value);

  /// @brief Method set_maxShockwaveParticles, addr 0x106d458, size 0x10, virtual false, abstract: false, final false
  inline void set_maxShockwaveParticles(int32_t value);

  /// @brief Method set_menuVRResolutionScaleMultiplier, addr 0x106d328, size 0x10, virtual false, abstract: false, final false
  inline void set_menuVRResolutionScaleMultiplier(float_t value);

  /// @brief Method set_mirrorGraphics, addr 0x106d3a0, size 0x10, virtual false, abstract: false, final false
  inline void set_mirrorGraphics(::BeatSaber::PerformancePresets::MirrorQualityPreset value);

  /// @brief Method set_obstaclesQuality, addr 0x106d4a0, size 0x10, virtual false, abstract: false, final false
  inline void set_obstaclesQuality(::BeatSaber::PerformancePresets::ObstaclesQuality value);

  /// @brief Method set_presetName, addr 0x106d2e0, size 0x10, virtual false, abstract: false, final false
  inline void set_presetName(::StringW value);

  /// @brief Method set_renderViewportScale, addr 0x106d2f8, size 0x10, virtual false, abstract: false, final false
  inline void set_renderViewportScale(float_t value);

  /// @brief Method set_screenDisplacementEffects, addr 0x106d43c, size 0x14, virtual false, abstract: false, final false
  inline void set_screenDisplacementEffects(bool value);

  /// @brief Method set_smokeGraphics, addr 0x106d3e8, size 0x14, virtual false, abstract: false, final false
  inline void set_smokeGraphics(bool value);

  /// @brief Method set_targetFramerate, addr 0x106d358, size 0x10, virtual false, abstract: false, final false
  inline void set_targetFramerate(float_t value);

  /// @brief Method set_vSyncCount, addr 0x106d370, size 0x10, virtual false, abstract: false, final false
  inline void set_vSyncCount(int32_t value);

  /// @brief Method set_vrResolutionScale, addr 0x106d310, size 0x10, virtual false, abstract: false, final false
  inline void set_vrResolutionScale(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomPerformancePreset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomPerformancePreset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomPerformancePreset(CustomPerformancePreset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomPerformancePreset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomPerformancePreset(CustomPerformancePreset const&) = delete;

  /// @brief Field <isDirty>k__BackingField, offset: 0x78, size: 0x1, def value: None
  bool ____isDirty_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::PerformancePresets::CustomPerformancePreset, 0x80>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::CustomPerformancePreset, ____isDirty_k__BackingField) == 0x78, "Offset mismatch!");

} // namespace BeatSaber::PerformancePresets
NEED_NO_BOX(::BeatSaber::PerformancePresets::CustomPerformancePreset);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::PerformancePresets::CustomPerformancePreset*, "BeatSaber.PerformancePresets", "CustomPerformancePreset");
