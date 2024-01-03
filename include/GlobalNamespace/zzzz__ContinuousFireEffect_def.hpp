#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FireEffect_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ContinuousFireEffect)
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class ContinuousFireEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ContinuousFireEffect);
// Type: ::ContinuousFireEffect
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4007))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4006))
// CS Name: ::ContinuousFireEffect*
class CORDL_TYPE ContinuousFireEffect : public ::GlobalNamespace::FireEffect {
public:
  // Declarations
  /// @brief Field _fadeInDuration, offset 0x80, size 0x4
  __declspec(property(get = __get__fadeInDuration, put = __set__fadeInDuration)) float_t _fadeInDuration;

  /// @brief Field _fadeOutDuration, offset 0x84, size 0x4
  __declspec(property(get = __get__fadeOutDuration, put = __set__fadeOutDuration)) float_t _fadeOutDuration;

  /// @brief Field _sustainDuration, offset 0x88, size 0x4
  __declspec(property(get = __get__sustainDuration, put = __set__sustainDuration)) float_t _sustainDuration;

  /// @brief Field _flipbookSustainCurve, offset 0x90, size 0x8
  __declspec(property(get = __get__flipbookSustainCurve, put = __set__flipbookSustainCurve))::UnityEngine::AnimationCurve* _flipbookSustainCurve;

  /// @brief Field _bloomSustainCurve, offset 0x98, size 0x8
  __declspec(property(get = __get__bloomSustainCurve, put = __set__bloomSustainCurve))::UnityEngine::AnimationCurve* _bloomSustainCurve;

  /// @brief Field _audioTimeSource, offset 0xa0, size 0x8
  __declspec(property(get = __get__audioTimeSource, put = __set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _fadeInEndTime, offset 0xa8, size 0x4
  __declspec(property(get = __get__fadeInEndTime, put = __set__fadeInEndTime)) float_t _fadeInEndTime;

  /// @brief Field _fadeOutStartTime, offset 0xac, size 0x4
  __declspec(property(get = __get__fadeOutStartTime, put = __set__fadeOutStartTime)) float_t _fadeOutStartTime;

  /// @brief Field _effectStartTime, offset 0xb0, size 0x4
  __declspec(property(get = __get__effectStartTime, put = __set__effectStartTime)) float_t _effectStartTime;

  /// @brief Field _effectEndTime, offset 0xb4, size 0x4
  __declspec(property(get = __get__effectEndTime, put = __set__effectEndTime)) float_t _effectEndTime;

  /// @brief Field _lastSustainProgress, offset 0xb8, size 0x4
  __declspec(property(get = __get__lastSustainProgress, put = __set__lastSustainProgress)) float_t _lastSustainProgress;

  /// @brief Field _lastFadeOutProgress, offset 0xbc, size 0x4
  __declspec(property(get = __get__lastFadeOutProgress, put = __set__lastFadeOutProgress)) float_t _lastFadeOutProgress;

  constexpr float_t& __get__fadeInDuration();

  constexpr float_t const& __get__fadeInDuration() const;

  constexpr void __set__fadeInDuration(float_t value);

  constexpr float_t& __get__fadeOutDuration();

  constexpr float_t const& __get__fadeOutDuration() const;

  constexpr void __set__fadeOutDuration(float_t value);

  constexpr float_t& __get__sustainDuration();

  constexpr float_t const& __get__sustainDuration() const;

  constexpr void __set__sustainDuration(float_t value);

  constexpr ::UnityEngine::AnimationCurve*& __get__flipbookSustainCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__flipbookSustainCurve() const;

  constexpr void __set__flipbookSustainCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get__bloomSustainCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__bloomSustainCurve() const;

  constexpr void __set__bloomSustainCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSource() const;

  constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr float_t& __get__fadeInEndTime();

  constexpr float_t const& __get__fadeInEndTime() const;

  constexpr void __set__fadeInEndTime(float_t value);

  constexpr float_t& __get__fadeOutStartTime();

  constexpr float_t const& __get__fadeOutStartTime() const;

  constexpr void __set__fadeOutStartTime(float_t value);

  constexpr float_t& __get__effectStartTime();

  constexpr float_t const& __get__effectStartTime() const;

  constexpr void __set__effectStartTime(float_t value);

  constexpr float_t& __get__effectEndTime();

  constexpr float_t const& __get__effectEndTime() const;

  constexpr void __set__effectEndTime(float_t value);

  constexpr float_t& __get__lastSustainProgress();

  constexpr float_t const& __get__lastSustainProgress() const;

  constexpr void __set__lastSustainProgress(float_t value);

  constexpr float_t& __get__lastFadeOutProgress();

  constexpr float_t const& __get__lastFadeOutProgress() const;

  constexpr void __set__lastFadeOutProgress(float_t value);

  /// @brief Method Start, addr 0x222195c, size 0x28, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2221a2c, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method HandleColorChangeBeatmapEvent, addr 0x2221bd8, size 0x13c, virtual true, abstract: false, final false
  inline void HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* e);

  /// @brief Method SetInitialValues, addr 0x2221984, size 0xa8, virtual false, abstract: false, final false
  inline void SetInitialValues();

  /// @brief Method StartEffect, addr 0x2221d38, size 0xe0, virtual false, abstract: false, final false
  inline void StartEffect(float_t startTime, float_t endTime);

  /// @brief Method EndEffect, addr 0x2221d14, size 0x24, virtual false, abstract: false, final false
  inline void EndEffect();

  /// @brief Method UpdateEffect, addr 0x2221a30, size 0x1a8, virtual false, abstract: false, final false
  inline void UpdateEffect();

  /// @brief Method UpdateRenderers, addr 0x2221e18, size 0x15c, virtual false, abstract: false, final false
  inline void UpdateRenderers(float_t flipBookAlpha, float_t bloomAlpha);

  static inline ::GlobalNamespace::ContinuousFireEffect* New_ctor();

  /// @brief Method .ctor, addr 0x2221f74, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ContinuousFireEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContinuousFireEffect(ContinuousFireEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContinuousFireEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContinuousFireEffect(ContinuousFireEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContinuousFireEffect();

public:
  /// @brief Field _fadeInDuration, offset: 0x80, size: 0x4, def value: None
  float_t ____fadeInDuration;

  /// @brief Field _fadeOutDuration, offset: 0x84, size: 0x4, def value: None
  float_t ____fadeOutDuration;

  /// @brief Field _sustainDuration, offset: 0x88, size: 0x4, def value: None
  float_t ____sustainDuration;

  /// @brief Field _flipbookSustainCurve, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____flipbookSustainCurve;

  /// @brief Field _bloomSustainCurve, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____bloomSustainCurve;

  /// @brief Field _audioTimeSource, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _fadeInEndTime, offset: 0xa8, size: 0x4, def value: None
  float_t ____fadeInEndTime;

  /// @brief Field _fadeOutStartTime, offset: 0xac, size: 0x4, def value: None
  float_t ____fadeOutStartTime;

  /// @brief Field _effectStartTime, offset: 0xb0, size: 0x4, def value: None
  float_t ____effectStartTime;

  /// @brief Field _effectEndTime, offset: 0xb4, size: 0x4, def value: None
  float_t ____effectEndTime;

  /// @brief Field _lastSustainProgress, offset: 0xb8, size: 0x4, def value: None
  float_t ____lastSustainProgress;

  /// @brief Field _lastFadeOutProgress, offset: 0xbc, size: 0x4, def value: None
  float_t ____lastFadeOutProgress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ContinuousFireEffect, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____fadeInDuration) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____fadeOutDuration) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____sustainDuration) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____flipbookSustainCurve) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____bloomSustainCurve) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____audioTimeSource) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____fadeInEndTime) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____fadeOutStartTime) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____effectStartTime) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____effectEndTime) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____lastSustainProgress) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____lastFadeOutProgress) == 0xbc, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ContinuousFireEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ContinuousFireEffect*, "", "ContinuousFireEffect");
