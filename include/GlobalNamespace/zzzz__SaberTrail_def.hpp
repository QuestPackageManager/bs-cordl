#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberTrail.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SaberTrail)
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
namespace GlobalNamespace {
class DeterminismConfig;
}
namespace GlobalNamespace {
class IBladeMovementData;
}
namespace GlobalNamespace {
class SaberTrailRenderer;
}
namespace GlobalNamespace {
class TimeHelper;
}
namespace GlobalNamespace {
class TrailElementCollection;
}
namespace UnityEngine {
struct Color;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberTrail;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberTrail);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaberTrail
class CORDL_TYPE SaberTrail : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _color, offset 0x64, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _colorOverwrite, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__colorOverwrite, put = __cordl_internal_set__colorOverwrite)) bool _colorOverwrite;

  /// @brief Field _container, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _determinismConfig, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__determinismConfig, put = __cordl_internal_set__determinismConfig)) ::GlobalNamespace::DeterminismConfig* _determinismConfig;

  /// @brief Field _forcedColor, offset 0x54, size 0x10
  __declspec(property(get = __cordl_internal_get__forcedColor, put = __cordl_internal_set__forcedColor)) ::UnityEngine::Color _forcedColor;

  /// @brief Field _framesPassed, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__framesPassed, put = __cordl_internal_set__framesPassed)) int32_t _framesPassed;

  /// @brief Field _framesToScaleCheck, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get__framesToScaleCheck, put = __cordl_internal_set__framesToScaleCheck)) int32_t _framesToScaleCheck;

  /// @brief Field _granularity, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__granularity, put = __cordl_internal_set__granularity)) int32_t _granularity;

  /// @brief Field _inited, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get__inited, put = __cordl_internal_set__inited)) bool _inited;

  /// @brief Field _lastTrailElementTime, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__lastTrailElementTime, put = __cordl_internal_set__lastTrailElementTime)) float_t _lastTrailElementTime;

  /// @brief Field _lastZScale, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__lastZScale, put = __cordl_internal_set__lastZScale)) float_t _lastZScale;

  /// @brief Field _movementData, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__movementData, put = __cordl_internal_set__movementData)) ::GlobalNamespace::IBladeMovementData* _movementData;

  /// @brief Field _sampleStep, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__sampleStep, put = __cordl_internal_set__sampleStep)) float_t _sampleStep;

  /// @brief Field _samplingFrequency, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__samplingFrequency, put = __cordl_internal_set__samplingFrequency)) int32_t _samplingFrequency;

  /// @brief Field _timeHelper, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__timeHelper, put = __cordl_internal_set__timeHelper)) ::UnityW<::GlobalNamespace::TimeHelper> _timeHelper;

  /// @brief Field _trailDuration, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__trailDuration, put = __cordl_internal_set__trailDuration)) float_t _trailDuration;

  /// @brief Field _trailElementCollection, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__trailElementCollection, put = __cordl_internal_set__trailElementCollection)) ::GlobalNamespace::TrailElementCollection* _trailElementCollection;

  /// @brief Field _trailRenderer, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__trailRenderer, put = __cordl_internal_set__trailRenderer)) ::UnityW<::GlobalNamespace::SaberTrailRenderer> _trailRenderer;

  /// @brief Field _trailRendererPrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__trailRendererPrefab, put = __cordl_internal_set__trailRendererPrefab)) ::UnityW<::GlobalNamespace::SaberTrailRenderer> _trailRendererPrefab;

  /// @brief Field _whiteSectionMaxDuration, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__whiteSectionMaxDuration, put = __cordl_internal_set__whiteSectionMaxDuration)) float_t _whiteSectionMaxDuration;

  /// @brief Method GetTrailWidth, addr 0x5d36df4, size 0x8c, virtual false, abstract: false, final false
  inline float_t GetTrailWidth(::GlobalNamespace::BladeMovementDataElement lastAddedData);

  /// @brief Method HandleDeterminismSet, addr 0x5d36e80, size 0x14, virtual false, abstract: false, final false
  inline void HandleDeterminismSet(bool isDeterministic);

  /// @brief Method Init, addr 0x5d369c4, size 0x29c, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method LateUpdate, addr 0x5d37008, size 0x3fc, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::SaberTrail* New_ctor();

  /// @brief Method OnDestroy, addr 0x5d37970, size 0xac, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x5d3784c, size 0x124, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDrawGizmosSelected, addr 0x5d37a1c, size 0x214, virtual false, abstract: false, final false
  inline void OnDrawGizmosSelected();

  /// @brief Method OnEnable, addr 0x5d37700, size 0x14c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ResetTrailData, addr 0x5d36e94, size 0xe4, virtual false, abstract: false, final false
  inline void ResetTrailData();

  /// @brief Method Setup, addr 0x5d369a4, size 0x20, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Color color, ::GlobalNamespace::IBladeMovementData* movementData);

  /// @brief Method Start, addr 0x5d368a4, size 0x100, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr bool const& __cordl_internal_get__colorOverwrite() const;

  constexpr bool& __cordl_internal_get__colorOverwrite();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::GlobalNamespace::DeterminismConfig* const& __cordl_internal_get__determinismConfig() const;

  constexpr ::GlobalNamespace::DeterminismConfig*& __cordl_internal_get__determinismConfig();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__forcedColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__forcedColor();

  constexpr int32_t const& __cordl_internal_get__framesPassed() const;

  constexpr int32_t& __cordl_internal_get__framesPassed();

  constexpr int32_t const& __cordl_internal_get__framesToScaleCheck() const;

  constexpr int32_t& __cordl_internal_get__framesToScaleCheck();

  constexpr int32_t const& __cordl_internal_get__granularity() const;

  constexpr int32_t& __cordl_internal_get__granularity();

  constexpr bool const& __cordl_internal_get__inited() const;

  constexpr bool& __cordl_internal_get__inited();

  constexpr float_t const& __cordl_internal_get__lastTrailElementTime() const;

  constexpr float_t& __cordl_internal_get__lastTrailElementTime();

  constexpr float_t const& __cordl_internal_get__lastZScale() const;

  constexpr float_t& __cordl_internal_get__lastZScale();

  constexpr ::GlobalNamespace::IBladeMovementData* const& __cordl_internal_get__movementData() const;

  constexpr ::GlobalNamespace::IBladeMovementData*& __cordl_internal_get__movementData();

  constexpr float_t const& __cordl_internal_get__sampleStep() const;

  constexpr float_t& __cordl_internal_get__sampleStep();

  constexpr int32_t const& __cordl_internal_get__samplingFrequency() const;

  constexpr int32_t& __cordl_internal_get__samplingFrequency();

  constexpr ::UnityW<::GlobalNamespace::TimeHelper> const& __cordl_internal_get__timeHelper() const;

  constexpr ::UnityW<::GlobalNamespace::TimeHelper>& __cordl_internal_get__timeHelper();

  constexpr float_t const& __cordl_internal_get__trailDuration() const;

  constexpr float_t& __cordl_internal_get__trailDuration();

  constexpr ::GlobalNamespace::TrailElementCollection* const& __cordl_internal_get__trailElementCollection() const;

  constexpr ::GlobalNamespace::TrailElementCollection*& __cordl_internal_get__trailElementCollection();

  constexpr ::UnityW<::GlobalNamespace::SaberTrailRenderer> const& __cordl_internal_get__trailRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::SaberTrailRenderer>& __cordl_internal_get__trailRenderer();

  constexpr ::UnityW<::GlobalNamespace::SaberTrailRenderer> const& __cordl_internal_get__trailRendererPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::SaberTrailRenderer>& __cordl_internal_get__trailRendererPrefab();

  constexpr float_t const& __cordl_internal_get__whiteSectionMaxDuration() const;

  constexpr float_t& __cordl_internal_get__whiteSectionMaxDuration();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__colorOverwrite(bool value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__determinismConfig(::GlobalNamespace::DeterminismConfig* value);

  constexpr void __cordl_internal_set__forcedColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__framesPassed(int32_t value);

  constexpr void __cordl_internal_set__framesToScaleCheck(int32_t value);

  constexpr void __cordl_internal_set__granularity(int32_t value);

  constexpr void __cordl_internal_set__inited(bool value);

  constexpr void __cordl_internal_set__lastTrailElementTime(float_t value);

  constexpr void __cordl_internal_set__lastZScale(float_t value);

  constexpr void __cordl_internal_set__movementData(::GlobalNamespace::IBladeMovementData* value);

  constexpr void __cordl_internal_set__sampleStep(float_t value);

  constexpr void __cordl_internal_set__samplingFrequency(int32_t value);

  constexpr void __cordl_internal_set__timeHelper(::UnityW<::GlobalNamespace::TimeHelper> value);

  constexpr void __cordl_internal_set__trailDuration(float_t value);

  constexpr void __cordl_internal_set__trailElementCollection(::GlobalNamespace::TrailElementCollection* value);

  constexpr void __cordl_internal_set__trailRenderer(::UnityW<::GlobalNamespace::SaberTrailRenderer> value);

  constexpr void __cordl_internal_set__trailRendererPrefab(::UnityW<::GlobalNamespace::SaberTrailRenderer> value);

  constexpr void __cordl_internal_set__whiteSectionMaxDuration(float_t value);

  /// @brief Method .ctor, addr 0x5d37c30, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberTrail();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaberTrail", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberTrail(SaberTrail&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberTrail", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberTrail(SaberTrail const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22785 };

  /// @brief Field kIgnoredFramesCount offset 0xffffffff size 0x4
  static constexpr int32_t kIgnoredFramesCount{ static_cast<int32_t>(0x4) };

  /// @brief Field kScaleCheckFramesInterval offset 0xffffffff size 0x4
  static constexpr int32_t kScaleCheckFramesInterval{ static_cast<int32_t>(0xa) };

  /// @brief Field kSnapshotCapacityMargin offset 0xffffffff size 0x4
  static constexpr int32_t kSnapshotCapacityMargin{ static_cast<int32_t>(0x3) };

  /// @brief Field _timeHelper, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TimeHelper> ____timeHelper;

  /// @brief Field _container, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _determinismConfig, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::DeterminismConfig* ____determinismConfig;

  /// @brief Field _trailRendererPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberTrailRenderer> ____trailRendererPrefab;

  /// @brief Field _trailDuration, offset: 0x40, size: 0x4, def value: None
  float_t ____trailDuration;

  /// @brief Field _samplingFrequency, offset: 0x44, size: 0x4, def value: None
  int32_t ____samplingFrequency;

  /// @brief Field _granularity, offset: 0x48, size: 0x4, def value: None
  int32_t ____granularity;

  /// @brief Field _whiteSectionMaxDuration, offset: 0x4c, size: 0x4, def value: None
  float_t ____whiteSectionMaxDuration;

  /// @brief Field _colorOverwrite, offset: 0x50, size: 0x1, def value: None
  bool ____colorOverwrite;

  /// @brief Field _forcedColor, offset: 0x54, size: 0x10, def value: None
  ::UnityEngine::Color ____forcedColor;

  /// @brief Field _color, offset: 0x64, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _movementData, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::IBladeMovementData* ____movementData;

  /// @brief Field _lastTrailElementTime, offset: 0x80, size: 0x4, def value: None
  float_t ____lastTrailElementTime;

  /// @brief Field _trailRenderer, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberTrailRenderer> ____trailRenderer;

  /// @brief Field _trailElementCollection, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::TrailElementCollection* ____trailElementCollection;

  /// @brief Field _sampleStep, offset: 0x98, size: 0x4, def value: None
  float_t ____sampleStep;

  /// @brief Field _framesPassed, offset: 0x9c, size: 0x4, def value: None
  int32_t ____framesPassed;

  /// @brief Field _lastZScale, offset: 0xa0, size: 0x4, def value: None
  float_t ____lastZScale;

  /// @brief Field _framesToScaleCheck, offset: 0xa4, size: 0x4, def value: None
  int32_t ____framesToScaleCheck;

  /// @brief Field _inited, offset: 0xa8, size: 0x1, def value: None
  bool ____inited;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaberTrail, ____timeHelper) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____container) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____determinismConfig) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____trailRendererPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____trailDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____samplingFrequency) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____granularity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____whiteSectionMaxDuration) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____colorOverwrite) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____forcedColor) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____color) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____movementData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____lastTrailElementTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____trailRenderer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____trailElementCollection) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____sampleStep) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____framesPassed) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____lastZScale) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____framesToScaleCheck) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____inited) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberTrail, 0xb0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberTrail);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberTrail*, "", "SaberTrail");
