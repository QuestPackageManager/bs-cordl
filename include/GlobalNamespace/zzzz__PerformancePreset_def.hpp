#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObstaclesQuality_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformancePreset)
namespace GlobalNamespace {
class QuestPerformanceSettings;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformancePreset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerformancePreset);
// Type: ::PerformancePreset
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4442)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4443))
// CS Name: ::PerformancePreset*
class CORDL_TYPE PerformancePreset : public ::System::Object {
public:
  // Declarations
  /// @brief Field dataVersion, offset 0x10, size 0x4
  __declspec(property(get = __get_dataVersion, put = __set_dataVersion)) uint32_t dataVersion;

  /// @brief Field presetName, offset 0x18, size 0x8
  __declspec(property(get = __get_presetName, put = __set_presetName))::StringW presetName;

  /// @brief Field presetNameLocalizationTag, offset 0x20, size 0x8
  __declspec(property(get = __get_presetNameLocalizationTag, put = __set_presetNameLocalizationTag))::StringW presetNameLocalizationTag;

  /// @brief Field renderViewportScale, offset 0x28, size 0x4
  __declspec(property(get = __get_renderViewportScale, put = __set_renderViewportScale)) float_t renderViewportScale;

  /// @brief Field vrResolutionScale, offset 0x2c, size 0x4
  __declspec(property(get = __get_vrResolutionScale, put = __set_vrResolutionScale)) float_t vrResolutionScale;

  /// @brief Field menuVRResolutionScaleMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __get_menuVRResolutionScaleMultiplier, put = __set_menuVRResolutionScaleMultiplier)) float_t menuVRResolutionScaleMultiplier;

  /// @brief Field antiAliasingLevel, offset 0x34, size 0x4
  __declspec(property(get = __get_antiAliasingLevel, put = __set_antiAliasingLevel)) int32_t antiAliasingLevel;

  /// @brief Field targetFramerate, offset 0x38, size 0x4
  __declspec(property(get = __get_targetFramerate, put = __set_targetFramerate)) float_t targetFramerate;

  /// @brief Field vSyncCount, offset 0x3c, size 0x4
  __declspec(property(get = __get_vSyncCount, put = __set_vSyncCount)) int32_t vSyncCount;

  /// @brief Field maxQueuedFrames, offset 0x40, size 0x4
  __declspec(property(get = __get_maxQueuedFrames, put = __set_maxQueuedFrames)) int32_t maxQueuedFrames;

  /// @brief Field mirrorGraphics, offset 0x44, size 0x4
  __declspec(property(get = __get_mirrorGraphics, put = __set_mirrorGraphics)) int32_t mirrorGraphics;

  /// @brief Field mainEffectGraphics, offset 0x48, size 0x4
  __declspec(property(get = __get_mainEffectGraphics, put = __set_mainEffectGraphics)) int32_t mainEffectGraphics;

  /// @brief Field bloomGraphics, offset 0x4c, size 0x4
  __declspec(property(get = __get_bloomGraphics, put = __set_bloomGraphics)) int32_t bloomGraphics;

  /// @brief Field smokeGraphics, offset 0x50, size 0x1
  __declspec(property(get = __get_smokeGraphics, put = __set_smokeGraphics)) bool smokeGraphics;

  /// @brief Field burnMarkTrails, offset 0x51, size 0x1
  __declspec(property(get = __get_burnMarkTrails, put = __set_burnMarkTrails)) bool burnMarkTrails;

  /// @brief Field screenDisplacementEffects, offset 0x52, size 0x1
  __declspec(property(get = __get_screenDisplacementEffects, put = __set_screenDisplacementEffects)) bool screenDisplacementEffects;

  /// @brief Field maxShockwaveParticles, offset 0x54, size 0x4
  __declspec(property(get = __get_maxShockwaveParticles, put = __set_maxShockwaveParticles)) int32_t maxShockwaveParticles;

  /// @brief Field maxNumberOfCutSoundEffects, offset 0x58, size 0x4
  __declspec(property(get = __get_maxNumberOfCutSoundEffects, put = __set_maxNumberOfCutSoundEffects)) int32_t maxNumberOfCutSoundEffects;

  /// @brief Field obstaclesQuality, offset 0x5c, size 0x4
  __declspec(property(get = __get_obstaclesQuality, put = __set_obstaclesQuality))::GlobalNamespace::ObstaclesQuality obstaclesQuality;

  /// @brief Field questSettings, offset 0x60, size 0x8
  __declspec(property(get = __get_questSettings, put = __set_questSettings))::GlobalNamespace::QuestPerformanceSettings* questSettings;

  constexpr uint32_t& __get_dataVersion();

  constexpr uint32_t const& __get_dataVersion() const;

  constexpr void __set_dataVersion(uint32_t value);

  constexpr ::StringW& __get_presetName();

  constexpr ::StringW const& __get_presetName() const;

  constexpr void __set_presetName(::StringW value);

  constexpr ::StringW& __get_presetNameLocalizationTag();

  constexpr ::StringW const& __get_presetNameLocalizationTag() const;

  constexpr void __set_presetNameLocalizationTag(::StringW value);

  constexpr float_t& __get_renderViewportScale();

  constexpr float_t const& __get_renderViewportScale() const;

  constexpr void __set_renderViewportScale(float_t value);

  constexpr float_t& __get_vrResolutionScale();

  constexpr float_t const& __get_vrResolutionScale() const;

  constexpr void __set_vrResolutionScale(float_t value);

  constexpr float_t& __get_menuVRResolutionScaleMultiplier();

  constexpr float_t const& __get_menuVRResolutionScaleMultiplier() const;

  constexpr void __set_menuVRResolutionScaleMultiplier(float_t value);

  constexpr int32_t& __get_antiAliasingLevel();

  constexpr int32_t const& __get_antiAliasingLevel() const;

  constexpr void __set_antiAliasingLevel(int32_t value);

  constexpr float_t& __get_targetFramerate();

  constexpr float_t const& __get_targetFramerate() const;

  constexpr void __set_targetFramerate(float_t value);

  constexpr int32_t& __get_vSyncCount();

  constexpr int32_t const& __get_vSyncCount() const;

  constexpr void __set_vSyncCount(int32_t value);

  constexpr int32_t& __get_maxQueuedFrames();

  constexpr int32_t const& __get_maxQueuedFrames() const;

  constexpr void __set_maxQueuedFrames(int32_t value);

  constexpr int32_t& __get_mirrorGraphics();

  constexpr int32_t const& __get_mirrorGraphics() const;

  constexpr void __set_mirrorGraphics(int32_t value);

  constexpr int32_t& __get_mainEffectGraphics();

  constexpr int32_t const& __get_mainEffectGraphics() const;

  constexpr void __set_mainEffectGraphics(int32_t value);

  constexpr int32_t& __get_bloomGraphics();

  constexpr int32_t const& __get_bloomGraphics() const;

  constexpr void __set_bloomGraphics(int32_t value);

  constexpr bool& __get_smokeGraphics();

  constexpr bool const& __get_smokeGraphics() const;

  constexpr void __set_smokeGraphics(bool value);

  constexpr bool& __get_burnMarkTrails();

  constexpr bool const& __get_burnMarkTrails() const;

  constexpr void __set_burnMarkTrails(bool value);

  constexpr bool& __get_screenDisplacementEffects();

  constexpr bool const& __get_screenDisplacementEffects() const;

  constexpr void __set_screenDisplacementEffects(bool value);

  constexpr int32_t& __get_maxShockwaveParticles();

  constexpr int32_t const& __get_maxShockwaveParticles() const;

  constexpr void __set_maxShockwaveParticles(int32_t value);

  constexpr int32_t& __get_maxNumberOfCutSoundEffects();

  constexpr int32_t const& __get_maxNumberOfCutSoundEffects() const;

  constexpr void __set_maxNumberOfCutSoundEffects(int32_t value);

  constexpr ::GlobalNamespace::ObstaclesQuality& __get_obstaclesQuality();

  constexpr ::GlobalNamespace::ObstaclesQuality const& __get_obstaclesQuality() const;

  constexpr void __set_obstaclesQuality(::GlobalNamespace::ObstaclesQuality value);

  constexpr ::GlobalNamespace::QuestPerformanceSettings*& __get_questSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::QuestPerformanceSettings*> const& __get_questSettings() const;

  constexpr void __set_questSettings(::GlobalNamespace::QuestPerformanceSettings* value);

  static inline ::GlobalNamespace::PerformancePreset* New_ctor();

  /// @brief Method .ctor addr 0x234fd78 size 0xbc virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PerformancePreset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformancePreset(PerformancePreset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformancePreset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformancePreset(PerformancePreset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformancePreset();

public:
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

  /// @brief Field obstaclesQuality, offset: 0x5c, size: 0x4, def value: None
  ::GlobalNamespace::ObstaclesQuality ___obstaclesQuality;

  /// @brief Field questSettings, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::QuestPerformanceSettings* ___questSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformancePreset, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformancePreset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformancePreset*, "", "PerformancePreset");
