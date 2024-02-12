#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class ParticleSystem;
}
namespace UnityEngine {
struct __ParticleSystem__Particle;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemEventEffect);
// Type: ::ParticleSystemEventEffect
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969)), TypeDefinitionIndex(TypeDefinitionIndex(8995)), TypeDefinitionIndex(TypeDefinitionIndex(15042)),
// TypeDefinitionIndex(TypeDefinitionIndex(15108))] Self: TypeDefinitionIndex(TypeDefinitionIndex(4321)) CS Name: ::ParticleSystemEventEffect*
class CORDL_TYPE ParticleSystemEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lightColor0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightColor0, put = __cordl_internal_set__lightColor0))::UnityW<::GlobalNamespace::ColorSO> _lightColor0;

  /// @brief Field _lightColor1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightColor1, put = __cordl_internal_set__lightColor1))::UnityW<::GlobalNamespace::ColorSO> _lightColor1;

  /// @brief Field _highlightColor0, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightColor0, put = __cordl_internal_set__highlightColor0))::UnityW<::GlobalNamespace::ColorSO> _highlightColor0;

  /// @brief Field _highlightColor1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightColor1, put = __cordl_internal_set__highlightColor1))::UnityW<::GlobalNamespace::ColorSO> _highlightColor1;

  /// @brief Field _lightOnStart, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__lightOnStart, put = __cordl_internal_set__lightOnStart)) bool _lightOnStart;

  /// @brief Field _colorEvent, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__colorEvent, put = __cordl_internal_set__colorEvent))::GlobalNamespace::BasicBeatmapEventType _colorEvent;

  /// @brief Field _particleSystem, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystem, put = __cordl_internal_set__particleSystem))::UnityW<::UnityEngine::ParticleSystem> _particleSystem;

  /// @brief Field _beatmapCallbacksController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _lightIsOn, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__lightIsOn, put = __cordl_internal_set__lightIsOn)) bool _lightIsOn;

  /// @brief Field _offColor, offset 0x54, size 0x10
  __declspec(property(get = __cordl_internal_get__offColor, put = __cordl_internal_set__offColor))::UnityEngine::Color _offColor;

  /// @brief Field _highlightValue, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__highlightValue, put = __cordl_internal_set__highlightValue)) float_t _highlightValue;

  /// @brief Field _afterHighlightColor, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__afterHighlightColor, put = __cordl_internal_set__afterHighlightColor))::UnityEngine::Color _afterHighlightColor;

  /// @brief Field _highlightColor, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get__highlightColor, put = __cordl_internal_set__highlightColor))::UnityEngine::Color _highlightColor;

  /// @brief Field kFadeSpeed, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_kFadeSpeed, put = __cordl_internal_set_kFadeSpeed)) float_t kFadeSpeed;

  /// @brief Field _mainModule, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__mainModule, put = __cordl_internal_set__mainModule))::UnityEngine::__ParticleSystem__MainModule _mainModule;

  /// @brief Field _particles, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__particles,
                      put = __cordl_internal_set__particles))::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> _particles;

  /// @brief Field _particleColor, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get__particleColor, put = __cordl_internal_set__particleColor))::UnityEngine::Color _particleColor;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__lightColor0();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__lightColor0() const;

  constexpr void __cordl_internal_set__lightColor0(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__lightColor1();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__lightColor1() const;

  constexpr void __cordl_internal_set__lightColor1(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__highlightColor0();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__highlightColor0() const;

  constexpr void __cordl_internal_set__highlightColor0(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__highlightColor1();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__highlightColor1() const;

  constexpr void __cordl_internal_set__highlightColor1(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr bool& __cordl_internal_get__lightOnStart();

  constexpr bool const& __cordl_internal_get__lightOnStart() const;

  constexpr void __cordl_internal_set__lightOnStart(bool value);

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__colorEvent();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__colorEvent() const;

  constexpr void __cordl_internal_set__colorEvent(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

  constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr bool& __cordl_internal_get__lightIsOn();

  constexpr bool const& __cordl_internal_get__lightIsOn() const;

  constexpr void __cordl_internal_set__lightIsOn(bool value);

  constexpr ::UnityEngine::Color& __cordl_internal_get__offColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__offColor() const;

  constexpr void __cordl_internal_set__offColor(::UnityEngine::Color value);

  constexpr float_t& __cordl_internal_get__highlightValue();

  constexpr float_t const& __cordl_internal_get__highlightValue() const;

  constexpr void __cordl_internal_set__highlightValue(float_t value);

  constexpr ::UnityEngine::Color& __cordl_internal_get__afterHighlightColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__afterHighlightColor() const;

  constexpr void __cordl_internal_set__afterHighlightColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __cordl_internal_get__highlightColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__highlightColor() const;

  constexpr void __cordl_internal_set__highlightColor(::UnityEngine::Color value);

  constexpr float_t& __cordl_internal_get_kFadeSpeed();

  constexpr float_t const& __cordl_internal_get_kFadeSpeed() const;

  constexpr void __cordl_internal_set_kFadeSpeed(float_t value);

  constexpr ::UnityEngine::__ParticleSystem__MainModule& __cordl_internal_get__mainModule();

  constexpr ::UnityEngine::__ParticleSystem__MainModule const& __cordl_internal_get__mainModule() const;

  constexpr void __cordl_internal_set__mainModule(::UnityEngine::__ParticleSystem__MainModule value);

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>& __cordl_internal_get__particles();

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> const& __cordl_internal_get__particles() const;

  constexpr void __cordl_internal_set__particles(::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> value);

  constexpr ::UnityEngine::Color& __cordl_internal_get__particleColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__particleColor() const;

  constexpr void __cordl_internal_set__particleColor(::UnityEngine::Color value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  /// @brief Method Start, addr 0x2370458, size 0x1d8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23709f0, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Update, addr 0x2370a0c, size 0xcc, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method HandleBeatmapEvent, addr 0x2370ad8, size 0x1cc, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method RefreshParticles, addr 0x2370630, size 0x3c0, virtual false, abstract: false, final false
  inline void RefreshParticles();

  static inline ::GlobalNamespace::ParticleSystemEventEffect* New_ctor();

  /// @brief Method .ctor, addr 0x2370ca4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemEventEffect(ParticleSystemEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemEventEffect(ParticleSystemEventEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemEventEffect();

public:
  /// @brief Field _lightColor0, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____lightColor0;

  /// @brief Field _lightColor1, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____lightColor1;

  /// @brief Field _highlightColor0, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____highlightColor0;

  /// @brief Field _highlightColor1, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____highlightColor1;

  /// @brief Field _lightOnStart, offset: 0x38, size: 0x1, def value: None
  bool ____lightOnStart;

  /// @brief Field _colorEvent, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____colorEvent;

  /// @brief Field _particleSystem, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____particleSystem;

  /// @brief Field _beatmapCallbacksController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _lightIsOn, offset: 0x50, size: 0x1, def value: None
  bool ____lightIsOn;

  /// @brief Field _offColor, offset: 0x54, size: 0x10, def value: None
  ::UnityEngine::Color ____offColor;

  /// @brief Field _highlightValue, offset: 0x64, size: 0x4, def value: None
  float_t ____highlightValue;

  /// @brief Field _afterHighlightColor, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ____afterHighlightColor;

  /// @brief Field _highlightColor, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Color ____highlightColor;

  /// @brief Field kFadeSpeed, offset: 0x88, size: 0x4, def value: None
  float_t ___kFadeSpeed;

  /// @brief Field _mainModule, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::__ParticleSystem__MainModule ____mainModule;

  /// @brief Field _particles, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> ____particles;

  /// @brief Field _particleColor, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Color ____particleColor;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemEventEffect, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____lightColor0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____lightColor1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____highlightColor0) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____highlightColor1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____lightOnStart) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____colorEvent) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____particleSystem) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____beatmapCallbacksController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____lightIsOn) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____offColor) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____highlightValue) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____afterHighlightColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____highlightColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ___kFadeSpeed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____mainModule) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____particles) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____particleColor) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventEffect, ____beatmapDataCallbackWrapper) == 0xb0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParticleSystemEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemEventEffect*, "", "ParticleSystemEventEffect");
