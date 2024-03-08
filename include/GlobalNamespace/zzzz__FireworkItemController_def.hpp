#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FireworkItemController)
namespace GlobalNamespace {
class DirectionalLight;
}
namespace GlobalNamespace {
template <typename T> class RandomObjectPicker_1;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace GlobalNamespace {
class __FireworkItemController__FireworkItemParticleSystem;
}
namespace GlobalNamespace {
class __FireworkItemController__Pool;
}
namespace GlobalNamespace {
class __FireworkItemController___FireCoroutine_d__29;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class FireworkItemController;
}
namespace GlobalNamespace {
class __FireworkItemController__FireworkItemParticleSystem;
}
namespace GlobalNamespace {
class __FireworkItemController__Pool;
}
namespace GlobalNamespace {
class __FireworkItemController___FireCoroutine_d__29;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FireworkItemController);
MARK_REF_PTR_T(::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem);
MARK_REF_PTR_T(::GlobalNamespace::__FireworkItemController__Pool);
MARK_REF_PTR_T(::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29);
// Type: ::FireworkItemParticleSystem
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FireworkItemController::FireworkItemParticleSystem*
class CORDL_TYPE __FireworkItemController__FireworkItemParticleSystem : public ::System::Object {
public:
  // Declarations
  /// @brief Field _isSubemitter, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isSubemitter, put = __cordl_internal_set__isSubemitter)) bool _isSubemitter;

  /// @brief Field _particleColorGradient, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__particleColorGradient, put = __cordl_internal_set__particleColorGradient))::UnityEngine::Gradient* _particleColorGradient;

  /// @brief Field _particleSystem, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystem, put = __cordl_internal_set__particleSystem))::UnityW<::UnityEngine::ParticleSystem> _particleSystem;

  /// @brief Field _randomizeSpeed, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__randomizeSpeed, put = __cordl_internal_set__randomizeSpeed)) bool _randomizeSpeed;

  /// @brief Field _useMainColor, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__useMainColor, put = __cordl_internal_set__useMainColor)) bool _useMainColor;

  /// @brief Field _useOwnGradient, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get__useOwnGradient, put = __cordl_internal_set__useOwnGradient)) bool _useOwnGradient;

  static inline ::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem* New_ctor();

  constexpr bool const& __cordl_internal_get__isSubemitter() const;

  constexpr bool& __cordl_internal_get__isSubemitter();

  constexpr ::UnityEngine::Gradient*& __cordl_internal_get__particleColorGradient();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& __cordl_internal_get__particleColorGradient() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem();

  constexpr bool const& __cordl_internal_get__randomizeSpeed() const;

  constexpr bool& __cordl_internal_get__randomizeSpeed();

  constexpr bool const& __cordl_internal_get__useMainColor() const;

  constexpr bool& __cordl_internal_get__useMainColor();

  constexpr bool const& __cordl_internal_get__useOwnGradient() const;

  constexpr bool& __cordl_internal_get__useOwnGradient();

  constexpr void __cordl_internal_set__isSubemitter(bool value);

  constexpr void __cordl_internal_set__particleColorGradient(::UnityEngine::Gradient* value);

  constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__randomizeSpeed(bool value);

  constexpr void __cordl_internal_set__useMainColor(bool value);

  constexpr void __cordl_internal_set__useOwnGradient(bool value);

  /// @brief Method .ctor, addr 0x248d61c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FireworkItemController__FireworkItemParticleSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FireworkItemController__FireworkItemParticleSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FireworkItemController__FireworkItemParticleSystem(__FireworkItemController__FireworkItemParticleSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FireworkItemController__FireworkItemParticleSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FireworkItemController__FireworkItemParticleSystem(__FireworkItemController__FireworkItemParticleSystem const&) = delete;

  /// @brief Field _particleSystem, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____particleSystem;

  /// @brief Field _isSubemitter, offset: 0x18, size: 0x1, def value: None
  bool ____isSubemitter;

  /// @brief Field _useMainColor, offset: 0x19, size: 0x1, def value: None
  bool ____useMainColor;

  /// @brief Field _useOwnGradient, offset: 0x1a, size: 0x1, def value: None
  bool ____useOwnGradient;

  /// @brief Field _particleColorGradient, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Gradient* ____particleColorGradient;

  /// @brief Field _randomizeSpeed, offset: 0x28, size: 0x1, def value: None
  bool ____randomizeSpeed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem, ____particleSystem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem, ____isSubemitter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem, ____useMainColor) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem, ____useOwnGradient) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem, ____particleColorGradient) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem, ____randomizeSpeed) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FireworkItemController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FireworkItemController*
class CORDL_TYPE FireworkItemController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using FireworkItemParticleSystem = ::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem;

  using Pool = ::GlobalNamespace::__FireworkItemController__Pool;

  using _FireCoroutine_d__29 = ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29;

  /// @brief Field _audioSource, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource))::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _directionalLight, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__directionalLight, put = __cordl_internal_set__directionalLight))::UnityW<::GlobalNamespace::DirectionalLight> _directionalLight;

  /// @brief Field _directionalLightIntensity, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__directionalLightIntensity, put = __cordl_internal_set__directionalLightIntensity)) float_t _directionalLightIntensity;

  /// @brief Field _explosionClips, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__explosionClips,
                      put = __cordl_internal_set__explosionClips))::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> _explosionClips;

  /// @brief Field _initialized, offset 0x8c, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _lightFlashDuration, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__lightFlashDuration, put = __cordl_internal_set__lightFlashDuration)) float_t _lightFlashDuration;

  /// @brief Field _lightIntensityCurve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lightIntensityCurve, put = __cordl_internal_set__lightIntensityCurve))::UnityEngine::AnimationCurve* _lightIntensityCurve;

  /// @brief Field _lightIntensityMultiplier, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__lightIntensityMultiplier, put = __cordl_internal_set__lightIntensityMultiplier)) float_t _lightIntensityMultiplier;

  /// @brief Field _lights, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lights,
                      put = __cordl_internal_set__lights))::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> _lights;

  /// @brief Field _lightsColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__lightsColor, put = __cordl_internal_set__lightsColor))::UnityEngine::Color _lightsColor;

  /// @brief Field _lightsColorGradient, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__lightsColorGradient, put = __cordl_internal_set__lightsColorGradient))::UnityEngine::Gradient* _lightsColorGradient;

  /// @brief Field _maxSpeedMultiplier, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__maxSpeedMultiplier, put = __cordl_internal_set__maxSpeedMultiplier)) float_t _maxSpeedMultiplier;

  /// @brief Field _minSpeedMultiplier, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__minSpeedMultiplier, put = __cordl_internal_set__minSpeedMultiplier)) float_t _minSpeedMultiplier;

  /// @brief Field _particleSystems, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystems,
                      put = __cordl_internal_set__particleSystems))::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*,
                                                                            ::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*> _particleSystems;

  /// @brief Field _randomAudioPicker, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__randomAudioPicker,
                      put = __cordl_internal_set__randomAudioPicker))::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* _randomAudioPicker;

  /// @brief Field _randomizeColor, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__randomizeColor, put = __cordl_internal_set__randomizeColor)) bool _randomizeColor;

  /// @brief Field _randomizeSpeed, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__randomizeSpeed, put = __cordl_internal_set__randomizeSpeed)) bool _randomizeSpeed;

  /// @brief Field didFinishEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent))::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>* didFinishEvent;

  __declspec(property(put = set_directionalLight))::UnityW<::GlobalNamespace::DirectionalLight> directionalLight;

  __declspec(property(put = set_directionalLightIntensity)) float_t directionalLightIntensity;

  /// @brief Method Awake, addr 0x248cf80, size 0x84, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Fire, addr 0x248d15c, size 0x20, virtual false, abstract: false, final false
  inline void Fire();

  /// @brief Method FireCoroutine, addr 0x248d17c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* FireCoroutine();

  /// @brief Method InitializeParticleSystem, addr 0x248d2e8, size 0x314, virtual false, abstract: false, final false
  inline void InitializeParticleSystem();

  static inline ::GlobalNamespace::FireworkItemController* New_ctor();

  /// @brief Method OnDisable, addr 0x248d004, size 0x58, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method PlayExplosionSound, addr 0x248d20c, size 0xdc, virtual false, abstract: false, final false
  inline void PlayExplosionSound();

  /// @brief Method SetLightsColor, addr 0x248d05c, size 0x100, virtual false, abstract: false, final false
  inline void SetLightsColor(float_t intensity);

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr ::UnityW<::GlobalNamespace::DirectionalLight> const& __cordl_internal_get__directionalLight() const;

  constexpr ::UnityW<::GlobalNamespace::DirectionalLight>& __cordl_internal_get__directionalLight();

  constexpr float_t const& __cordl_internal_get__directionalLightIntensity() const;

  constexpr float_t& __cordl_internal_get__directionalLightIntensity();

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> const& __cordl_internal_get__explosionClips() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>& __cordl_internal_get__explosionClips();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr float_t const& __cordl_internal_get__lightFlashDuration() const;

  constexpr float_t& __cordl_internal_get__lightFlashDuration();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__lightIntensityCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__lightIntensityCurve() const;

  constexpr float_t const& __cordl_internal_get__lightIntensityMultiplier() const;

  constexpr float_t& __cordl_internal_get__lightIntensityMultiplier();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> const& __cordl_internal_get__lights() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>& __cordl_internal_get__lights();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__lightsColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__lightsColor();

  constexpr ::UnityEngine::Gradient*& __cordl_internal_get__lightsColorGradient();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& __cordl_internal_get__lightsColorGradient() const;

  constexpr float_t const& __cordl_internal_get__maxSpeedMultiplier() const;

  constexpr float_t& __cordl_internal_get__maxSpeedMultiplier();

  constexpr float_t const& __cordl_internal_get__minSpeedMultiplier() const;

  constexpr float_t& __cordl_internal_get__minSpeedMultiplier();

  constexpr ::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*, ::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*> const&
  __cordl_internal_get__particleSystems() const;

  constexpr ::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*, ::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*>&
  __cordl_internal_get__particleSystems();

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get__randomAudioPicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*> const& __cordl_internal_get__randomAudioPicker() const;

  constexpr bool const& __cordl_internal_get__randomizeColor() const;

  constexpr bool& __cordl_internal_get__randomizeColor();

  constexpr bool const& __cordl_internal_get__randomizeSpeed() const;

  constexpr bool& __cordl_internal_get__randomizeSpeed();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>*> const& __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__directionalLight(::UnityW<::GlobalNamespace::DirectionalLight> value);

  constexpr void __cordl_internal_set__directionalLightIntensity(float_t value);

  constexpr void __cordl_internal_set__explosionClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__lightFlashDuration(float_t value);

  constexpr void __cordl_internal_set__lightIntensityCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__lightIntensityMultiplier(float_t value);

  constexpr void __cordl_internal_set__lights(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> value);

  constexpr void __cordl_internal_set__lightsColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__lightsColorGradient(::UnityEngine::Gradient* value);

  constexpr void __cordl_internal_set__maxSpeedMultiplier(float_t value);

  constexpr void __cordl_internal_set__minSpeedMultiplier(float_t value);

  constexpr void __cordl_internal_set__particleSystems(
      ::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*, ::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*> value);

  constexpr void __cordl_internal_set__randomAudioPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* value);

  constexpr void __cordl_internal_set__randomizeColor(bool value);

  constexpr void __cordl_internal_set__randomizeSpeed(bool value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>* value);

  /// @brief Method .ctor, addr 0x248d5fc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x248ce20, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>* value);

  /// @brief Method remove_didFinishEvent, addr 0x248ced0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>* value);

  /// @brief Method set_directionalLight, addr 0x248ce10, size 0x8, virtual false, abstract: false, final false
  inline void set_directionalLight(::GlobalNamespace::DirectionalLight* value);

  /// @brief Method set_directionalLightIntensity, addr 0x248ce18, size 0x8, virtual false, abstract: false, final false
  inline void set_directionalLightIntensity(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FireworkItemController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FireworkItemController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FireworkItemController(FireworkItemController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FireworkItemController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FireworkItemController(FireworkItemController const&) = delete;

  /// @brief Field _particleSystems, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*, ::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*> ____particleSystems;

  /// @brief Field _lights, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> ____lights;

  /// @brief Field _audioSource, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _lightFlashDuration, offset: 0x30, size: 0x4, def value: None
  float_t ____lightFlashDuration;

  /// @brief Field _lightIntensityCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____lightIntensityCurve;

  /// @brief Field _lightIntensityMultiplier, offset: 0x40, size: 0x4, def value: None
  float_t ____lightIntensityMultiplier;

  /// @brief Field _randomizeColor, offset: 0x44, size: 0x1, def value: None
  bool ____randomizeColor;

  /// @brief Field _lightsColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____lightsColor;

  /// @brief Field _lightsColorGradient, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Gradient* ____lightsColorGradient;

  /// @brief Field _randomizeSpeed, offset: 0x60, size: 0x1, def value: None
  bool ____randomizeSpeed;

  /// @brief Field _minSpeedMultiplier, offset: 0x64, size: 0x4, def value: None
  float_t ____minSpeedMultiplier;

  /// @brief Field _maxSpeedMultiplier, offset: 0x68, size: 0x4, def value: None
  float_t ____maxSpeedMultiplier;

  /// @brief Field _explosionClips, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> ____explosionClips;

  /// @brief Field _randomAudioPicker, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* ____randomAudioPicker;

  /// @brief Field _directionalLight, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DirectionalLight> ____directionalLight;

  /// @brief Field _directionalLightIntensity, offset: 0x88, size: 0x4, def value: None
  float_t ____directionalLightIntensity;

  /// @brief Field _initialized, offset: 0x8c, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field didFinishEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FireworkItemController, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ____particleSystems) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ____lights) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ____audioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ____lightFlashDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ____lightIntensityCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ____lightIntensityMultiplier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ____randomizeColor) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ____lightsColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ____lightsColorGradient) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ____randomizeSpeed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ____minSpeedMultiplier) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ____maxSpeedMultiplier) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ____explosionClips) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ____randomAudioPicker) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ____directionalLight) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ____directionalLightIntensity) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ____initialized) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItemController, ___didFinishEvent) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FireworkItemController::Pool*
class CORDL_TYPE __FireworkItemController__Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::FireworkItemController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__FireworkItemController__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x248d62c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FireworkItemController__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FireworkItemController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FireworkItemController__Pool(__FireworkItemController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FireworkItemController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FireworkItemController__Pool(__FireworkItemController__Pool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FireworkItemController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<FireCoroutine>d__29
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FireworkItemController::<FireCoroutine>d__29*
class CORDL_TYPE __FireworkItemController___FireCoroutine_d__29 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::FireworkItemController> __4__this;

  /// @brief Field <elapsedTime>5__3, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__3, put = __cordl_internal_set__elapsedTime_5__3)) float_t _elapsedTime_5__3;

  /// @brief Field <explosionSoundFired>5__4, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__explosionSoundFired_5__4, put = __cordl_internal_set__explosionSoundFired_5__4)) bool _explosionSoundFired_5__4;

  /// @brief Field <soundTimeToCenter>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__soundTimeToCenter_5__2, put = __cordl_internal_set__soundTimeToCenter_5__2)) float_t _soundTimeToCenter_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x248d678, size 0x230, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x248d8a8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x248d8b0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x248d8f0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x248d674, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::FireworkItemController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::FireworkItemController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__3() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__3();

  constexpr bool const& __cordl_internal_get__explosionSoundFired_5__4() const;

  constexpr bool& __cordl_internal_get__explosionSoundFired_5__4();

  constexpr float_t const& __cordl_internal_get__soundTimeToCenter_5__2() const;

  constexpr float_t& __cordl_internal_get__soundTimeToCenter_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FireworkItemController> value);

  constexpr void __cordl_internal_set__elapsedTime_5__3(float_t value);

  constexpr void __cordl_internal_set__explosionSoundFired_5__4(bool value);

  constexpr void __cordl_internal_set__soundTimeToCenter_5__2(float_t value);

  /// @brief Method .ctor, addr 0x248d1e4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FireworkItemController___FireCoroutine_d__29();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FireworkItemController___FireCoroutine_d__29", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FireworkItemController___FireCoroutine_d__29(__FireworkItemController___FireCoroutine_d__29&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FireworkItemController___FireCoroutine_d__29", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FireworkItemController___FireCoroutine_d__29(__FireworkItemController___FireCoroutine_d__29 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FireworkItemController> _____4__this;

  /// @brief Field <soundTimeToCenter>5__2, offset: 0x28, size: 0x4, def value: None
  float_t ____soundTimeToCenter_5__2;

  /// @brief Field <elapsedTime>5__3, offset: 0x2c, size: 0x4, def value: None
  float_t ____elapsedTime_5__3;

  /// @brief Field <explosionSoundFired>5__4, offset: 0x30, size: 0x1, def value: None
  bool ____explosionSoundFired_5__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29, ____soundTimeToCenter_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29, ____elapsedTime_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29, ____explosionSoundFired_5__4) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FireworkItemController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FireworkItemController*, "", "FireworkItemController");
NEED_NO_BOX(::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*, "", "FireworkItemController/FireworkItemParticleSystem");
NEED_NO_BOX(::GlobalNamespace::__FireworkItemController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FireworkItemController__Pool*, "", "FireworkItemController/Pool");
NEED_NO_BOX(::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*, "", "FireworkItemController/<FireCoroutine>d__29");
