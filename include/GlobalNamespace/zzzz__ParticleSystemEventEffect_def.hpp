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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(14724)),
// TypeDefinitionIndex(TypeDefinitionIndex(15882))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4967)) CS Name: ::ParticleSystemEventEffect*
class CORDL_TYPE ParticleSystemEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lightColor0, offset 0x18, size 0x8
  __declspec(property(get = __get__lightColor0, put = __set__lightColor0))::GlobalNamespace::ColorSO* _lightColor0;

  /// @brief Field _lightColor1, offset 0x20, size 0x8
  __declspec(property(get = __get__lightColor1, put = __set__lightColor1))::GlobalNamespace::ColorSO* _lightColor1;

  /// @brief Field _highlightColor0, offset 0x28, size 0x8
  __declspec(property(get = __get__highlightColor0, put = __set__highlightColor0))::GlobalNamespace::ColorSO* _highlightColor0;

  /// @brief Field _highlightColor1, offset 0x30, size 0x8
  __declspec(property(get = __get__highlightColor1, put = __set__highlightColor1))::GlobalNamespace::ColorSO* _highlightColor1;

  /// @brief Field _lightOnStart, offset 0x38, size 0x1
  __declspec(property(get = __get__lightOnStart, put = __set__lightOnStart)) bool _lightOnStart;

  /// @brief Field _colorEvent, offset 0x3c, size 0x4
  __declspec(property(get = __get__colorEvent, put = __set__colorEvent))::GlobalNamespace::BasicBeatmapEventType _colorEvent;

  /// @brief Field _particleSystem, offset 0x40, size 0x8
  __declspec(property(get = __get__particleSystem, put = __set__particleSystem))::UnityEngine::ParticleSystem* _particleSystem;

  /// @brief Field _beatmapCallbacksController, offset 0x48, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _lightIsOn, offset 0x50, size 0x1
  __declspec(property(get = __get__lightIsOn, put = __set__lightIsOn)) bool _lightIsOn;

  /// @brief Field _offColor, offset 0x54, size 0x10
  __declspec(property(get = __get__offColor, put = __set__offColor))::UnityEngine::Color _offColor;

  /// @brief Field _highlightValue, offset 0x64, size 0x4
  __declspec(property(get = __get__highlightValue, put = __set__highlightValue)) float_t _highlightValue;

  /// @brief Field _afterHighlightColor, offset 0x68, size 0x10
  __declspec(property(get = __get__afterHighlightColor, put = __set__afterHighlightColor))::UnityEngine::Color _afterHighlightColor;

  /// @brief Field _highlightColor, offset 0x78, size 0x10
  __declspec(property(get = __get__highlightColor, put = __set__highlightColor))::UnityEngine::Color _highlightColor;

  /// @brief Field kFadeSpeed, offset 0x88, size 0x4
  __declspec(property(get = __get_kFadeSpeed, put = __set_kFadeSpeed)) float_t kFadeSpeed;

  /// @brief Field _mainModule, offset 0x90, size 0x8
  __declspec(property(get = __get__mainModule, put = __set__mainModule))::UnityEngine::__ParticleSystem__MainModule _mainModule;

  /// @brief Field _particles, offset 0x98, size 0x8
  __declspec(property(get = __get__particles, put = __set__particles))::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> _particles;

  /// @brief Field _particleColor, offset 0xa0, size 0x10
  __declspec(property(get = __get__particleColor, put = __set__particleColor))::UnityEngine::Color _particleColor;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0xb0, size 0x8
  __declspec(property(get = __get__beatmapDataCallbackWrapper, put = __set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  constexpr ::GlobalNamespace::ColorSO*& __get__lightColor0();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__lightColor0() const;

  constexpr void __set__lightColor0(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__lightColor1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__lightColor1() const;

  constexpr void __set__lightColor1(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__highlightColor0();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__highlightColor0() const;

  constexpr void __set__highlightColor0(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__highlightColor1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__highlightColor1() const;

  constexpr void __set__highlightColor1(::GlobalNamespace::ColorSO* value);

  constexpr bool& __get__lightOnStart();

  constexpr bool const& __get__lightOnStart() const;

  constexpr void __set__lightOnStart(bool value);

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__colorEvent();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__colorEvent() const;

  constexpr void __set__colorEvent(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr ::UnityEngine::ParticleSystem*& __get__particleSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__particleSystem() const;

  constexpr void __set__particleSystem(::UnityEngine::ParticleSystem* value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr bool& __get__lightIsOn();

  constexpr bool const& __get__lightIsOn() const;

  constexpr void __set__lightIsOn(bool value);

  constexpr ::UnityEngine::Color& __get__offColor();

  constexpr ::UnityEngine::Color const& __get__offColor() const;

  constexpr void __set__offColor(::UnityEngine::Color value);

  constexpr float_t& __get__highlightValue();

  constexpr float_t const& __get__highlightValue() const;

  constexpr void __set__highlightValue(float_t value);

  constexpr ::UnityEngine::Color& __get__afterHighlightColor();

  constexpr ::UnityEngine::Color const& __get__afterHighlightColor() const;

  constexpr void __set__afterHighlightColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__highlightColor();

  constexpr ::UnityEngine::Color const& __get__highlightColor() const;

  constexpr void __set__highlightColor(::UnityEngine::Color value);

  constexpr float_t& __get_kFadeSpeed();

  constexpr float_t const& __get_kFadeSpeed() const;

  constexpr void __set_kFadeSpeed(float_t value);

  constexpr ::UnityEngine::__ParticleSystem__MainModule& __get__mainModule();

  constexpr ::UnityEngine::__ParticleSystem__MainModule const& __get__mainModule() const;

  constexpr void __set__mainModule(::UnityEngine::__ParticleSystem__MainModule value);

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>& __get__particles();

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> const& __get__particles() const;

  constexpr void __set__particles(::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> value);

  constexpr ::UnityEngine::Color& __get__particleColor();

  constexpr ::UnityEngine::Color const& __get__particleColor() const;

  constexpr void __set__particleColor(::UnityEngine::Color value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__beatmapDataCallbackWrapper() const;

  constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  /// @brief Method Start, addr 0x23b0324, size 0x1d8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23b08bc, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Update, addr 0x23b08d8, size 0xcc, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method HandleBeatmapEvent, addr 0x23b09a4, size 0x1cc, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method RefreshParticles, addr 0x23b04fc, size 0x3c0, virtual false, abstract: false, final false
  inline void RefreshParticles();

  static inline ::GlobalNamespace::ParticleSystemEventEffect* New_ctor();

  /// @brief Method .ctor, addr 0x23b0b70, size 0x18, virtual false, abstract: false, final false
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
  ::GlobalNamespace::ColorSO* ____lightColor0;

  /// @brief Field _lightColor1, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____lightColor1;

  /// @brief Field _highlightColor0, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____highlightColor0;

  /// @brief Field _highlightColor1, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____highlightColor1;

  /// @brief Field _lightOnStart, offset: 0x38, size: 0x1, def value: None
  bool ____lightOnStart;

  /// @brief Field _colorEvent, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____colorEvent;

  /// @brief Field _particleSystem, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* ____particleSystem;

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
