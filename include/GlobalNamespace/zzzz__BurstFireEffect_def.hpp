#pragma once
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
class SongTimeTweeningManager;
}
namespace Tweening {
class FloatTween;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4007))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4005))
// CS Name: ::BurstFireEffect*
class CORDL_TYPE BurstFireEffect : public ::GlobalNamespace::FireEffect {
public:
  // Declarations
  /// @brief Field _fadeOutDuration, offset 0x80, size 0x4
  __declspec(property(get = __get__fadeOutDuration, put = __set__fadeOutDuration)) float_t _fadeOutDuration;

  /// @brief Field _flipbookFadeOutCurve, offset 0x88, size 0x8
  __declspec(property(get = __get__flipbookFadeOutCurve, put = __set__flipbookFadeOutCurve))::UnityEngine::AnimationCurve* _flipbookFadeOutCurve;

  /// @brief Field _bloomFadeOutCurve, offset 0x90, size 0x8
  __declspec(property(get = __get__bloomFadeOutCurve, put = __set__bloomFadeOutCurve))::UnityEngine::AnimationCurve* _bloomFadeOutCurve;

  /// @brief Field _audioTimeSource, offset 0x98, size 0x8
  __declspec(property(get = __get__audioTimeSource, put = __set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _songTimeTweeningManager, offset 0xa0, size 0x8
  __declspec(property(get = __get__songTimeTweeningManager, put = __set__songTimeTweeningManager))::Tweening::SongTimeTweeningManager* _songTimeTweeningManager;

  /// @brief Field _fadeOutTween, offset 0xa8, size 0x8
  __declspec(property(get = __get__fadeOutTween, put = __set__fadeOutTween))::Tweening::FloatTween* _fadeOutTween;

  constexpr float_t& __get__fadeOutDuration();

  constexpr float_t const& __get__fadeOutDuration() const;

  constexpr void __set__fadeOutDuration(float_t value);

  constexpr ::UnityEngine::AnimationCurve*& __get__flipbookFadeOutCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__flipbookFadeOutCurve() const;

  constexpr void __set__flipbookFadeOutCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get__bloomFadeOutCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__bloomFadeOutCurve() const;

  constexpr void __set__bloomFadeOutCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSource() const;

  constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::Tweening::SongTimeTweeningManager*& __get__songTimeTweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> const& __get__songTimeTweeningManager() const;

  constexpr void __set__songTimeTweeningManager(::Tweening::SongTimeTweeningManager* value);

  constexpr ::Tweening::FloatTween*& __get__fadeOutTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __get__fadeOutTween() const;

  constexpr void __set__fadeOutTween(::Tweening::FloatTween* value);

  /// @brief Method Awake addr 0x222102c size 0x124 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x2221150 size 0x18 virtual true final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x2221338 size 0x9c virtual true final false
  inline void OnDestroy();

  /// @brief Method HandleColorChangeBeatmapEvent addr 0x22213f0 size 0x134 virtual true final false
  inline void HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* e);

  /// @brief Method StartEffect addr 0x2221550 size 0xd4 virtual false final false
  inline void StartEffect(float_t time);

  /// @brief Method EndEffect addr 0x2221524 size 0x2c virtual false final false
  inline void EndEffect();

  /// @brief Method SetInitialValues addr 0x2221288 size 0xb0 virtual false final false
  inline void SetInitialValues();

  /// @brief Method UpdateFadeOutProgress addr 0x22216b0 size 0x194 virtual false final false
  inline void UpdateFadeOutProgress(float_t fadeOutProgress);

  static inline ::GlobalNamespace::BurstFireEffect* New_ctor();

  /// @brief Method .ctor addr 0x22218b4 size 0x84 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BurstFireEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstFireEffect(BurstFireEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstFireEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstFireEffect(BurstFireEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstFireEffect();

public:
  /// @brief Field _fadeOutDuration, offset: 0x80, size: 0x4, def value: None
  float_t ____fadeOutDuration;

  /// @brief Field _flipbookFadeOutCurve, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____flipbookFadeOutCurve;

  /// @brief Field _bloomFadeOutCurve, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____bloomFadeOutCurve;

  /// @brief Field _audioTimeSource, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _songTimeTweeningManager, offset: 0xa0, size: 0x8, def value: None
  ::Tweening::SongTimeTweeningManager* ____songTimeTweeningManager;

  /// @brief Field _fadeOutTween, offset: 0xa8, size: 0x8, def value: None
  ::Tweening::FloatTween* ____fadeOutTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BurstFireEffect, 0xb0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BurstFireEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BurstFireEffect*, "", "BurstFireEffect");
