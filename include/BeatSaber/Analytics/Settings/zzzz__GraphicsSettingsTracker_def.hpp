#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/GraphicsSettingsTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsSettingsTracker)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class ISettingsEventSender;
}
namespace BeatSaber::Settings {
struct QualitySettings;
}
// Forward declare root types
namespace BeatSaber::Analytics::Settings {
class GraphicsSettingsTracker;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker*, "BeatSaber.Analytics.Settings", "GraphicsSettingsTracker");
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.GraphicsSettingsTracker
class CORDL_TYPE GraphicsSettingsTracker : public ::System::Object {
public:
  // Declarations
  /// @brief Field _antiAliasingLevel, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__antiAliasingLevel, put = __cordl_internal_set__antiAliasingLevel)) int32_t _antiAliasingLevel;

  /// @brief Field _bloom, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bloom, put = __cordl_internal_set__bloom)) ::StringW _bloom;

  /// @brief Field _burnMarkTrails, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__burnMarkTrails, put = __cordl_internal_set__burnMarkTrails)) bool _burnMarkTrails;

  /// @brief Field _hasSnapshot, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__hasSnapshot, put = __cordl_internal_set__hasSnapshot)) bool _hasSnapshot;

  /// @brief Field _mainEffect, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffect, put = __cordl_internal_set__mainEffect)) ::StringW _mainEffect;

  /// @brief Field _maxNumberOfCutSoundEffects, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__maxNumberOfCutSoundEffects, put = __cordl_internal_set__maxNumberOfCutSoundEffects)) int32_t _maxNumberOfCutSoundEffects;

  /// @brief Field _maxQueuedFrames, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxQueuedFrames, put = __cordl_internal_set__maxQueuedFrames)) int32_t _maxQueuedFrames;

  /// @brief Field _maxShockwaveParticles, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__maxShockwaveParticles, put = __cordl_internal_set__maxShockwaveParticles)) int32_t _maxShockwaveParticles;

  /// @brief Field _menuVRResolutionScaleMultiplier, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__menuVRResolutionScaleMultiplier, put = __cordl_internal_set__menuVRResolutionScaleMultiplier)) float_t _menuVRResolutionScaleMultiplier;

  /// @brief Field _mirror, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__mirror, put = __cordl_internal_set__mirror)) ::StringW _mirror;

  /// @brief Field _obstacles, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacles, put = __cordl_internal_set__obstacles)) ::StringW _obstacles;

  /// @brief Field _renderViewportScale, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__renderViewportScale, put = __cordl_internal_set__renderViewportScale)) float_t _renderViewportScale;

  /// @brief Field _screenDisplacementEffects, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get__screenDisplacementEffects, put = __cordl_internal_set__screenDisplacementEffects)) bool _screenDisplacementEffects;

  /// @brief Field _sender, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sender, put = __cordl_internal_set__sender)) ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* _sender;

  /// @brief Field _smokeGraphics, offset 0x5d, size 0x1
  __declspec(property(get = __cordl_internal_get__smokeGraphics, put = __cordl_internal_set__smokeGraphics)) bool _smokeGraphics;

  /// @brief Field _targetFramerate, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__targetFramerate, put = __cordl_internal_set__targetFramerate)) int32_t _targetFramerate;

  /// @brief Field _vSyncCount, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__vSyncCount, put = __cordl_internal_set__vSyncCount)) int32_t _vSyncCount;

  /// @brief Field _vrResolutionScale, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__vrResolutionScale, put = __cordl_internal_set__vrResolutionScale)) float_t _vrResolutionScale;

  /// @brief Method DiffAndSend, addr 0x350739c, size 0x1828, virtual false, abstract: false, final false
  inline void DiffAndSend(::BeatSaber::Settings::QualitySettings s);

  static inline ::BeatSaber::Analytics::Settings::GraphicsSettingsTracker* New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

  /// @brief Method TakeSnapshot, addr 0x35071cc, size 0x1d0, virtual false, abstract: false, final false
  inline void TakeSnapshot(::BeatSaber::Settings::QualitySettings s);

  constexpr int32_t const& __cordl_internal_get__antiAliasingLevel() const;

  constexpr int32_t& __cordl_internal_get__antiAliasingLevel();

  constexpr ::StringW const& __cordl_internal_get__bloom() const;

  constexpr ::StringW& __cordl_internal_get__bloom();

  constexpr bool const& __cordl_internal_get__burnMarkTrails() const;

  constexpr bool& __cordl_internal_get__burnMarkTrails();

  constexpr bool const& __cordl_internal_get__hasSnapshot() const;

  constexpr bool& __cordl_internal_get__hasSnapshot();

  constexpr ::StringW const& __cordl_internal_get__mainEffect() const;

  constexpr ::StringW& __cordl_internal_get__mainEffect();

  constexpr int32_t const& __cordl_internal_get__maxNumberOfCutSoundEffects() const;

  constexpr int32_t& __cordl_internal_get__maxNumberOfCutSoundEffects();

  constexpr int32_t const& __cordl_internal_get__maxQueuedFrames() const;

  constexpr int32_t& __cordl_internal_get__maxQueuedFrames();

  constexpr int32_t const& __cordl_internal_get__maxShockwaveParticles() const;

  constexpr int32_t& __cordl_internal_get__maxShockwaveParticles();

  constexpr float_t const& __cordl_internal_get__menuVRResolutionScaleMultiplier() const;

  constexpr float_t& __cordl_internal_get__menuVRResolutionScaleMultiplier();

  constexpr ::StringW const& __cordl_internal_get__mirror() const;

  constexpr ::StringW& __cordl_internal_get__mirror();

  constexpr ::StringW const& __cordl_internal_get__obstacles() const;

  constexpr ::StringW& __cordl_internal_get__obstacles();

  constexpr float_t const& __cordl_internal_get__renderViewportScale() const;

  constexpr float_t& __cordl_internal_get__renderViewportScale();

  constexpr bool const& __cordl_internal_get__screenDisplacementEffects() const;

  constexpr bool& __cordl_internal_get__screenDisplacementEffects();

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const& __cordl_internal_get__sender() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& __cordl_internal_get__sender();

  constexpr bool const& __cordl_internal_get__smokeGraphics() const;

  constexpr bool& __cordl_internal_get__smokeGraphics();

  constexpr int32_t const& __cordl_internal_get__targetFramerate() const;

  constexpr int32_t& __cordl_internal_get__targetFramerate();

  constexpr int32_t const& __cordl_internal_get__vSyncCount() const;

  constexpr int32_t& __cordl_internal_get__vSyncCount();

  constexpr float_t const& __cordl_internal_get__vrResolutionScale() const;

  constexpr float_t& __cordl_internal_get__vrResolutionScale();

  constexpr void __cordl_internal_set__antiAliasingLevel(int32_t value);

  constexpr void __cordl_internal_set__bloom(::StringW value);

  constexpr void __cordl_internal_set__burnMarkTrails(bool value);

  constexpr void __cordl_internal_set__hasSnapshot(bool value);

  constexpr void __cordl_internal_set__mainEffect(::StringW value);

  constexpr void __cordl_internal_set__maxNumberOfCutSoundEffects(int32_t value);

  constexpr void __cordl_internal_set__maxQueuedFrames(int32_t value);

  constexpr void __cordl_internal_set__maxShockwaveParticles(int32_t value);

  constexpr void __cordl_internal_set__menuVRResolutionScaleMultiplier(float_t value);

  constexpr void __cordl_internal_set__mirror(::StringW value);

  constexpr void __cordl_internal_set__obstacles(::StringW value);

  constexpr void __cordl_internal_set__renderViewportScale(float_t value);

  constexpr void __cordl_internal_set__screenDisplacementEffects(bool value);

  constexpr void __cordl_internal_set__sender(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value);

  constexpr void __cordl_internal_set__smokeGraphics(bool value);

  constexpr void __cordl_internal_set__targetFramerate(int32_t value);

  constexpr void __cordl_internal_set__vSyncCount(int32_t value);

  constexpr void __cordl_internal_set__vrResolutionScale(float_t value);

  /// @brief Method .ctor, addr 0x35062d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsSettingsTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphicsSettingsTracker", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicsSettingsTracker(GraphicsSettingsTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicsSettingsTracker", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicsSettingsTracker(GraphicsSettingsTracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22769 };

  /// @brief Field _sender, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* ____sender;

  /// @brief Field _hasSnapshot, offset: 0x18, size: 0x1, def value: None
  bool ____hasSnapshot;

  /// @brief Field _antiAliasingLevel, offset: 0x1c, size: 0x4, def value: None
  int32_t ____antiAliasingLevel;

  /// @brief Field _bloom, offset: 0x20, size: 0x8, def value: None
  ::StringW ____bloom;

  /// @brief Field _burnMarkTrails, offset: 0x28, size: 0x1, def value: None
  bool ____burnMarkTrails;

  /// @brief Field _mainEffect, offset: 0x30, size: 0x8, def value: None
  ::StringW ____mainEffect;

  /// @brief Field _maxNumberOfCutSoundEffects, offset: 0x38, size: 0x4, def value: None
  int32_t ____maxNumberOfCutSoundEffects;

  /// @brief Field _maxQueuedFrames, offset: 0x3c, size: 0x4, def value: None
  int32_t ____maxQueuedFrames;

  /// @brief Field _maxShockwaveParticles, offset: 0x40, size: 0x4, def value: None
  int32_t ____maxShockwaveParticles;

  /// @brief Field _menuVRResolutionScaleMultiplier, offset: 0x44, size: 0x4, def value: None
  float_t ____menuVRResolutionScaleMultiplier;

  /// @brief Field _mirror, offset: 0x48, size: 0x8, def value: None
  ::StringW ____mirror;

  /// @brief Field _obstacles, offset: 0x50, size: 0x8, def value: None
  ::StringW ____obstacles;

  /// @brief Field _renderViewportScale, offset: 0x58, size: 0x4, def value: None
  float_t ____renderViewportScale;

  /// @brief Field _screenDisplacementEffects, offset: 0x5c, size: 0x1, def value: None
  bool ____screenDisplacementEffects;

  /// @brief Field _smokeGraphics, offset: 0x5d, size: 0x1, def value: None
  bool ____smokeGraphics;

  /// @brief Field _targetFramerate, offset: 0x60, size: 0x4, def value: None
  int32_t ____targetFramerate;

  /// @brief Field _vSyncCount, offset: 0x64, size: 0x4, def value: None
  int32_t ____vSyncCount;

  /// @brief Field _vrResolutionScale, offset: 0x68, size: 0x4, def value: None
  float_t ____vrResolutionScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____sender) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____hasSnapshot) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____antiAliasingLevel) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____bloom) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____burnMarkTrails) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____mainEffect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____maxNumberOfCutSoundEffects) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____maxQueuedFrames) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____maxShockwaveParticles) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____menuVRResolutionScaleMultiplier) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____mirror) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____obstacles) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____renderViewportScale) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____screenDisplacementEffects) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____smokeGraphics) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____targetFramerate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____vSyncCount) == 0x64, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker, ____vrResolutionScale) == 0x68, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker) == 0x70, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
