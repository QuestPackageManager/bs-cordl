#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleSystemEventEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ParticleSystemEventEffect)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class ColorSO;
}
namespace UnityEngine {
struct ParticleSystem_Particle;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemEventEffect);
// Dependencies BasicBeatmapEventType, UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem::MainModule
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParticleSystemEventEffect
class CORDL_TYPE ParticleSystemEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _afterHighlightColor, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get__afterHighlightColor, put = __cordl_internal_set__afterHighlightColor)) ::UnityEngine::Color _afterHighlightColor;

  /// @brief Field _beatmapCallbacksController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _colorEvent, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__colorEvent, put = __cordl_internal_set__colorEvent)) ::GlobalNamespace::BasicBeatmapEventType _colorEvent;

  /// @brief Field _highlightColor, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get__highlightColor, put = __cordl_internal_set__highlightColor)) ::UnityEngine::Color _highlightColor;

  /// @brief Field _highlightColor0, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightColor0, put = __cordl_internal_set__highlightColor0)) ::UnityW<::GlobalNamespace::ColorSO> _highlightColor0;

  /// @brief Field _highlightColor1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightColor1, put = __cordl_internal_set__highlightColor1)) ::UnityW<::GlobalNamespace::ColorSO> _highlightColor1;

  /// @brief Field _highlightValue, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__highlightValue, put = __cordl_internal_set__highlightValue)) float_t _highlightValue;

  /// @brief Field _lightColor0, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightColor0, put = __cordl_internal_set__lightColor0)) ::UnityW<::GlobalNamespace::ColorSO> _lightColor0;

  /// @brief Field _lightColor1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lightColor1, put = __cordl_internal_set__lightColor1)) ::UnityW<::GlobalNamespace::ColorSO> _lightColor1;

  /// @brief Field _lightIsOn, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__lightIsOn, put = __cordl_internal_set__lightIsOn)) bool _lightIsOn;

  /// @brief Field _lightOnStart, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__lightOnStart, put = __cordl_internal_set__lightOnStart)) bool _lightOnStart;

  /// @brief Field _mainModule, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__mainModule, put = __cordl_internal_set__mainModule)) ::UnityEngine::ParticleSystem_MainModule _mainModule;

  /// @brief Field _offColor, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get__offColor, put = __cordl_internal_set__offColor)) ::UnityEngine::Color _offColor;

  /// @brief Field _particleColor, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get__particleColor, put = __cordl_internal_set__particleColor)) ::UnityEngine::Color _particleColor;

  /// @brief Field _particleSystem, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystem, put = __cordl_internal_set__particleSystem)) ::UnityW<::UnityEngine::ParticleSystem> _particleSystem;

  /// @brief Field _particles, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__particles, put = __cordl_internal_set__particles)) ::ArrayW<::UnityEngine::ParticleSystem_Particle, ::Array<::UnityEngine::ParticleSystem_Particle>*>
      _particles;

  /// @brief Field kFadeSpeed, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_kFadeSpeed, put = __cordl_internal_set_kFadeSpeed)) float_t kFadeSpeed;

  /// @brief Method HandleBeatmapEvent, addr 0x3b98568, size 0x1c4, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::ParticleSystemEventEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b98484, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshParticles, addr 0x3b9835c, size 0x128, virtual false, abstract: false, final false
  inline void RefreshParticles();

  /// @brief Method Start, addr 0x3b98180, size 0x1dc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3b984a0, size 0xc8, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__afterHighlightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__afterHighlightColor();

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__colorEvent() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__colorEvent();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__highlightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__highlightColor();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__highlightColor0() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__highlightColor0();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__highlightColor1() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__highlightColor1();

  constexpr float_t const& __cordl_internal_get__highlightValue() const;

  constexpr float_t& __cordl_internal_get__highlightValue();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__lightColor0() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__lightColor0();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__lightColor1() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__lightColor1();

  constexpr bool const& __cordl_internal_get__lightIsOn() const;

  constexpr bool& __cordl_internal_get__lightIsOn();

  constexpr bool const& __cordl_internal_get__lightOnStart() const;

  constexpr bool& __cordl_internal_get__lightOnStart();

  constexpr ::UnityEngine::ParticleSystem_MainModule const& __cordl_internal_get__mainModule() const;

  constexpr ::UnityEngine::ParticleSystem_MainModule& __cordl_internal_get__mainModule();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__offColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__offColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__particleColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__particleColor();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem();

  constexpr ::ArrayW<::UnityEngine::ParticleSystem_Particle, ::Array<::UnityEngine::ParticleSystem_Particle>*> const& __cordl_internal_get__particles() const;

  constexpr ::ArrayW<::UnityEngine::ParticleSystem_Particle, ::Array<::UnityEngine::ParticleSystem_Particle>*>& __cordl_internal_get__particles();

  constexpr float_t const& __cordl_internal_get_kFadeSpeed() const;

  constexpr float_t& __cordl_internal_get_kFadeSpeed();

  constexpr void __cordl_internal_set__afterHighlightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__colorEvent(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__highlightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__highlightColor0(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__highlightColor1(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__highlightValue(float_t value);

  constexpr void __cordl_internal_set__lightColor0(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__lightColor1(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__lightIsOn(bool value);

  constexpr void __cordl_internal_set__lightOnStart(bool value);

  constexpr void __cordl_internal_set__mainModule(::UnityEngine::ParticleSystem_MainModule value);

  constexpr void __cordl_internal_set__offColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__particleColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__particles(::ArrayW<::UnityEngine::ParticleSystem_Particle, ::Array<::UnityEngine::ParticleSystem_Particle>*> value);

  constexpr void __cordl_internal_set_kFadeSpeed(float_t value);

  /// @brief Method .ctor, addr 0x3b9872c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemEventEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemEventEffect(ParticleSystemEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemEventEffect(ParticleSystemEventEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4335 };

  /// @brief Field _lightColor0, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____lightColor0;

  /// @brief Field _lightColor1, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____lightColor1;

  /// @brief Field _highlightColor0, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____highlightColor0;

  /// @brief Field _highlightColor1, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____highlightColor1;

  /// @brief Field _lightOnStart, offset: 0x40, size: 0x1, def value: None
  bool ____lightOnStart;

  /// @brief Field _colorEvent, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____colorEvent;

  /// @brief Field _particleSystem, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____particleSystem;

  /// @brief Field _beatmapCallbacksController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _lightIsOn, offset: 0x58, size: 0x1, def value: None
  bool ____lightIsOn;

  /// @brief Field _offColor, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Color ____offColor;

  /// @brief Field _highlightValue, offset: 0x6c, size: 0x4, def value: None
  float_t ____highlightValue;

  /// @brief Field _afterHighlightColor, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Color ____afterHighlightColor;

  /// @brief Field _highlightColor, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Color ____highlightColor;

  /// @brief Field kFadeSpeed, offset: 0x90, size: 0x4, def value: None
  float_t ___kFadeSpeed;

  /// @brief Field _mainModule, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem_MainModule ____mainModule;

  /// @brief Field _particles, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ParticleSystem_Particle, ::Array<::UnityEngine::ParticleSystem_Particle>*> ____particles;

  /// @brief Field _particleColor, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Color ____particleColor;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____lightColor0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____lightColor1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____highlightColor0) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____highlightColor1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____lightOnStart) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____colorEvent) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____particleSystem) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____beatmapCallbacksController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____lightIsOn) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____offColor) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____highlightValue) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____afterHighlightColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____highlightColor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ___kFadeSpeed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____mainModule) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____particles) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____particleColor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____beatmapDataCallbackWrapper) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemEventEffect, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParticleSystemEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemEventEffect*, "", "ParticleSystemEventEffect");
