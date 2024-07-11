#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstFireEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FireEffect_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BurstFireEffect)
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
namespace Tweening {
class FloatTween;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class BurstFireEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BurstFireEffect);
// Type: ::BurstFireEffect
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BurstFireEffect*
class CORDL_TYPE BurstFireEffect : public ::GlobalNamespace::FireEffect {
public:
  // Declarations
  /// @brief Field _audioTimeSource, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _bloomFadeOutCurve, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomFadeOutCurve, put = __cordl_internal_set__bloomFadeOutCurve))::UnityEngine::AnimationCurve* _bloomFadeOutCurve;

  /// @brief Field _fadeOutDuration, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeOutDuration, put = __cordl_internal_set__fadeOutDuration)) float_t _fadeOutDuration;

  /// @brief Field _fadeOutTween, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeOutTween, put = __cordl_internal_set__fadeOutTween))::Tweening::FloatTween* _fadeOutTween;

  /// @brief Field _flipbookFadeOutCurve, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__flipbookFadeOutCurve, put = __cordl_internal_set__flipbookFadeOutCurve))::UnityEngine::AnimationCurve* _flipbookFadeOutCurve;

  /// @brief Field _songTimeTweeningManager, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__songTimeTweeningManager, put = __cordl_internal_set__songTimeTweeningManager))::UnityW<::Tweening::SongTimeTweeningManager> _songTimeTweeningManager;

  /// @brief Method Awake, addr 0x106b008, size 0x124, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method EndEffect, addr 0x106b504, size 0x2c, virtual false, abstract: false, final false
  inline void EndEffect();

  /// @brief Method HandleColorChangeBeatmapEvent, addr 0x106b3d0, size 0x134, virtual true, abstract: false, final false
  inline void HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* e);

  static inline ::GlobalNamespace::BurstFireEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x106b314, size 0x90, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetInitialValues, addr 0x106b264, size 0xb0, virtual false, abstract: false, final false
  inline void SetInitialValues();

  /// @brief Method Start, addr 0x106b12c, size 0x18, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method StartEffect, addr 0x106b530, size 0xd8, virtual false, abstract: false, final false
  inline void StartEffect(float_t time);

  /// @brief Method UpdateFadeOutProgress, addr 0x106b694, size 0x194, virtual false, abstract: false, final false
  inline void UpdateFadeOutProgress(float_t fadeOutProgress);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__bloomFadeOutCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__bloomFadeOutCurve() const;

  constexpr float_t const& __cordl_internal_get__fadeOutDuration() const;

  constexpr float_t& __cordl_internal_get__fadeOutDuration();

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__fadeOutTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __cordl_internal_get__fadeOutTween() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__flipbookFadeOutCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__flipbookFadeOutCurve() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& __cordl_internal_get__songTimeTweeningManager() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& __cordl_internal_get__songTimeTweeningManager();

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__bloomFadeOutCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__fadeOutDuration(float_t value);

  constexpr void __cordl_internal_set__fadeOutTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__flipbookFadeOutCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__songTimeTweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x106b8e8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstFireEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstFireEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstFireEffect(BurstFireEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstFireEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstFireEffect(BurstFireEffect const&) = delete;

  /// @brief Field _fadeOutDuration, offset: 0x80, size: 0x4, def value: None
  float_t ____fadeOutDuration;

  /// @brief Field _flipbookFadeOutCurve, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____flipbookFadeOutCurve;

  /// @brief Field _bloomFadeOutCurve, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____bloomFadeOutCurve;

  /// @brief Field _audioTimeSource, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _songTimeTweeningManager, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::Tweening::SongTimeTweeningManager> ____songTimeTweeningManager;

  /// @brief Field _fadeOutTween, offset: 0xa8, size: 0x8, def value: None
  ::Tweening::FloatTween* ____fadeOutTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BurstFireEffect, 0xb0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstFireEffect, ____fadeOutDuration) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstFireEffect, ____flipbookFadeOutCurve) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstFireEffect, ____bloomFadeOutCurve) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstFireEffect, ____audioTimeSource) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstFireEffect, ____songTimeTweeningManager) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstFireEffect, ____fadeOutTween) == 0xa8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BurstFireEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BurstFireEffect*, "", "BurstFireEffect");
