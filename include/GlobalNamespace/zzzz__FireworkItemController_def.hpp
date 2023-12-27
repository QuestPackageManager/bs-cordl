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
class __FireworkItemController___FireCoroutine_d__29;
}
namespace UnityEngine {
class Gradient;
}
namespace GlobalNamespace {
class __FireworkItemController__Pool;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
template <typename T> class RandomObjectPicker_1;
}
namespace GlobalNamespace {
class DirectionalLight;
}
namespace GlobalNamespace {
class __FireworkItemController__FireworkItemParticleSystem;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4843))
// CS Name: ::FireworkItemController::FireworkItemParticleSystem*
class CORDL_TYPE __FireworkItemController__FireworkItemParticleSystem : public ::System::Object {
public:
  // Declarations
  /// @brief Field _particleSystem, offset 0x10, size 0x8
  __declspec(property(get = __get__particleSystem, put = __set__particleSystem))::UnityEngine::ParticleSystem* _particleSystem;

  /// @brief Field _isSubemitter, offset 0x18, size 0x1
  __declspec(property(get = __get__isSubemitter, put = __set__isSubemitter)) bool _isSubemitter;

  /// @brief Field _useMainColor, offset 0x19, size 0x1
  __declspec(property(get = __get__useMainColor, put = __set__useMainColor)) bool _useMainColor;

  /// @brief Field _useOwnGradient, offset 0x1a, size 0x1
  __declspec(property(get = __get__useOwnGradient, put = __set__useOwnGradient)) bool _useOwnGradient;

  /// @brief Field _particleColorGradient, offset 0x20, size 0x8
  __declspec(property(get = __get__particleColorGradient, put = __set__particleColorGradient))::UnityEngine::Gradient* _particleColorGradient;

  /// @brief Field _randomizeSpeed, offset 0x28, size 0x1
  __declspec(property(get = __get__randomizeSpeed, put = __set__randomizeSpeed)) bool _randomizeSpeed;

  constexpr ::UnityEngine::ParticleSystem*& __get__particleSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__particleSystem() const;

  constexpr void __set__particleSystem(::UnityEngine::ParticleSystem* value);

  constexpr bool& __get__isSubemitter();

  constexpr bool const& __get__isSubemitter() const;

  constexpr void __set__isSubemitter(bool value);

  constexpr bool& __get__useMainColor();

  constexpr bool const& __get__useMainColor() const;

  constexpr void __set__useMainColor(bool value);

  constexpr bool& __get__useOwnGradient();

  constexpr bool const& __get__useOwnGradient() const;

  constexpr void __set__useOwnGradient(bool value);

  constexpr ::UnityEngine::Gradient*& __get__particleColorGradient();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& __get__particleColorGradient() const;

  constexpr void __set__particleColorGradient(::UnityEngine::Gradient* value);

  constexpr bool& __get__randomizeSpeed();

  constexpr bool const& __get__randomizeSpeed() const;

  constexpr void __set__randomizeSpeed(bool value);

  static inline ::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem* New_ctor();

  /// @brief Method .ctor addr 0x23975e8 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__FireworkItemController__FireworkItemParticleSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FireworkItemController__FireworkItemParticleSystem(__FireworkItemController__FireworkItemParticleSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FireworkItemController__FireworkItemParticleSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FireworkItemController__FireworkItemParticleSystem(__FireworkItemController__FireworkItemParticleSystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FireworkItemController__FireworkItemParticleSystem();

public:
  /// @brief Field _particleSystem, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* ____particleSystem;

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

} // namespace GlobalNamespace
// Type: ::FireworkItemController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4846))
// CS Name: ::FireworkItemController*
class CORDL_TYPE FireworkItemController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _FireCoroutine_d__29 = ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29;

  using Pool = ::GlobalNamespace::__FireworkItemController__Pool;

  using FireworkItemParticleSystem = ::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem;

  /// @brief Field _particleSystems, offset 0x18, size 0x8
  __declspec(property(get = __get__particleSystems, put = __set__particleSystems))::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*,
                                                                                           ::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*> _particleSystems;

  /// @brief Field _lights, offset 0x20, size 0x8
  __declspec(property(get = __get__lights, put = __set__lights))::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> _lights;

  /// @brief Field _audioSource, offset 0x28, size 0x8
  __declspec(property(get = __get__audioSource, put = __set__audioSource))::UnityEngine::AudioSource* _audioSource;

  /// @brief Field _lightFlashDuration, offset 0x30, size 0x4
  __declspec(property(get = __get__lightFlashDuration, put = __set__lightFlashDuration)) float_t _lightFlashDuration;

  /// @brief Field _lightIntensityCurve, offset 0x38, size 0x8
  __declspec(property(get = __get__lightIntensityCurve, put = __set__lightIntensityCurve))::UnityEngine::AnimationCurve* _lightIntensityCurve;

  /// @brief Field _lightIntensityMultiplier, offset 0x40, size 0x4
  __declspec(property(get = __get__lightIntensityMultiplier, put = __set__lightIntensityMultiplier)) float_t _lightIntensityMultiplier;

  /// @brief Field _randomizeColor, offset 0x44, size 0x1
  __declspec(property(get = __get__randomizeColor, put = __set__randomizeColor)) bool _randomizeColor;

  /// @brief Field _lightsColor, offset 0x48, size 0x10
  __declspec(property(get = __get__lightsColor, put = __set__lightsColor))::UnityEngine::Color _lightsColor;

  /// @brief Field _lightsColorGradient, offset 0x58, size 0x8
  __declspec(property(get = __get__lightsColorGradient, put = __set__lightsColorGradient))::UnityEngine::Gradient* _lightsColorGradient;

  /// @brief Field _randomizeSpeed, offset 0x60, size 0x1
  __declspec(property(get = __get__randomizeSpeed, put = __set__randomizeSpeed)) bool _randomizeSpeed;

  /// @brief Field _minSpeedMultiplier, offset 0x64, size 0x4
  __declspec(property(get = __get__minSpeedMultiplier, put = __set__minSpeedMultiplier)) float_t _minSpeedMultiplier;

  /// @brief Field _maxSpeedMultiplier, offset 0x68, size 0x4
  __declspec(property(get = __get__maxSpeedMultiplier, put = __set__maxSpeedMultiplier)) float_t _maxSpeedMultiplier;

  /// @brief Field _explosionClips, offset 0x70, size 0x8
  __declspec(property(get = __get__explosionClips, put = __set__explosionClips))::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> _explosionClips;

  /// @brief Field _randomAudioPicker, offset 0x78, size 0x8
  __declspec(property(get = __get__randomAudioPicker, put = __set__randomAudioPicker))::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* _randomAudioPicker;

  /// @brief Field _directionalLight, offset 0x80, size 0x8
  __declspec(property(get = __get__directionalLight, put = __set__directionalLight))::GlobalNamespace::DirectionalLight* _directionalLight;

  /// @brief Field _directionalLightIntensity, offset 0x88, size 0x4
  __declspec(property(get = __get__directionalLightIntensity, put = __set__directionalLightIntensity)) float_t _directionalLightIntensity;

  /// @brief Field _initialized, offset 0x8c, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  /// @brief Field didFinishEvent, offset 0x90, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action_1<::GlobalNamespace::FireworkItemController*>* didFinishEvent;

  __declspec(property(put = set_directionalLight))::GlobalNamespace::DirectionalLight* directionalLight;

  __declspec(property(put = set_directionalLightIntensity)) float_t directionalLightIntensity;

  constexpr ::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*, ::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*>&
  __get__particleSystems();

  constexpr ::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*, ::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*> const&
  __get__particleSystems() const;

  constexpr void
  __set__particleSystems(::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*, ::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>& __get__lights();

  constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const& __get__lights() const;

  constexpr void __set__lights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> value);

  constexpr ::UnityEngine::AudioSource*& __get__audioSource();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__audioSource() const;

  constexpr void __set__audioSource(::UnityEngine::AudioSource* value);

  constexpr float_t& __get__lightFlashDuration();

  constexpr float_t const& __get__lightFlashDuration() const;

  constexpr void __set__lightFlashDuration(float_t value);

  constexpr ::UnityEngine::AnimationCurve*& __get__lightIntensityCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__lightIntensityCurve() const;

  constexpr void __set__lightIntensityCurve(::UnityEngine::AnimationCurve* value);

  constexpr float_t& __get__lightIntensityMultiplier();

  constexpr float_t const& __get__lightIntensityMultiplier() const;

  constexpr void __set__lightIntensityMultiplier(float_t value);

  constexpr bool& __get__randomizeColor();

  constexpr bool const& __get__randomizeColor() const;

  constexpr void __set__randomizeColor(bool value);

  constexpr ::UnityEngine::Color& __get__lightsColor();

  constexpr ::UnityEngine::Color const& __get__lightsColor() const;

  constexpr void __set__lightsColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Gradient*& __get__lightsColorGradient();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& __get__lightsColorGradient() const;

  constexpr void __set__lightsColorGradient(::UnityEngine::Gradient* value);

  constexpr bool& __get__randomizeSpeed();

  constexpr bool const& __get__randomizeSpeed() const;

  constexpr void __set__randomizeSpeed(bool value);

  constexpr float_t& __get__minSpeedMultiplier();

  constexpr float_t const& __get__minSpeedMultiplier() const;

  constexpr void __set__minSpeedMultiplier(float_t value);

  constexpr float_t& __get__maxSpeedMultiplier();

  constexpr float_t const& __get__maxSpeedMultiplier() const;

  constexpr void __set__maxSpeedMultiplier(float_t value);

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*>& __get__explosionClips();

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> const& __get__explosionClips() const;

  constexpr void __set__explosionClips(::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> value);

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*& __get__randomAudioPicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> const& __get__randomAudioPicker() const;

  constexpr void __set__randomAudioPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* value);

  constexpr ::GlobalNamespace::DirectionalLight*& __get__directionalLight();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DirectionalLight*> const& __get__directionalLight() const;

  constexpr void __set__directionalLight(::GlobalNamespace::DirectionalLight* value);

  constexpr float_t& __get__directionalLightIntensity();

  constexpr float_t const& __get__directionalLightIntensity() const;

  constexpr void __set__directionalLightIntensity(float_t value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  constexpr ::System::Action_1<::GlobalNamespace::FireworkItemController*>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::FireworkItemController*>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::FireworkItemController*>* value);

  /// @brief Method set_directionalLight addr 0x2396ddc size 0x8 virtual false final false
  inline void set_directionalLight(::GlobalNamespace::DirectionalLight* value);

  /// @brief Method set_directionalLightIntensity addr 0x2396de4 size 0x8 virtual false final false
  inline void set_directionalLightIntensity(float_t value);

  /// @brief Method add_didFinishEvent addr 0x2396dec size 0xb0 virtual false final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::FireworkItemController*>* value);

  /// @brief Method remove_didFinishEvent addr 0x2396e9c size 0xb0 virtual false final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::FireworkItemController*>* value);

  /// @brief Method Awake addr 0x2396f4c size 0x84 virtual false final false
  inline void Awake();

  /// @brief Method OnDisable addr 0x2396fd0 size 0x58 virtual false final false
  inline void OnDisable();

  /// @brief Method Fire addr 0x2397128 size 0x20 virtual false final false
  inline void Fire();

  /// @brief Method FireCoroutine addr 0x2397148 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* FireCoroutine();

  /// @brief Method SetLightsColor addr 0x2397028 size 0x100 virtual false final false
  inline void SetLightsColor(float_t intensity);

  /// @brief Method PlayExplosionSound addr 0x23971d8 size 0xdc virtual false final false
  inline void PlayExplosionSound();

  /// @brief Method InitializeParticleSystem addr 0x23972b4 size 0x314 virtual false final false
  inline void InitializeParticleSystem();

  static inline ::GlobalNamespace::FireworkItemController* New_ctor();

  /// @brief Method .ctor addr 0x23975c8 size 0x20 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FireworkItemController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FireworkItemController(FireworkItemController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FireworkItemController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FireworkItemController(FireworkItemController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FireworkItemController();

public:
  /// @brief Field _particleSystems, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*, ::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*> ____particleSystems;

  /// @brief Field _lights, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> ____lights;

  /// @brief Field _audioSource, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____audioSource;

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
  ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> ____explosionClips;

  /// @brief Field _randomAudioPicker, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* ____randomAudioPicker;

  /// @brief Field _directionalLight, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::DirectionalLight* ____directionalLight;

  /// @brief Field _directionalLightIntensity, offset: 0x88, size: 0x4, def value: None
  float_t ____directionalLightIntensity;

  /// @brief Field _initialized, offset: 0x8c, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field didFinishEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::FireworkItemController*>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FireworkItemController, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11050)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 307 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4846))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4844)) CS Name: ::FireworkItemController::Pool*
class CORDL_TYPE __FireworkItemController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::FireworkItemController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__FireworkItemController__Pool* New_ctor();

  /// @brief Method .ctor addr 0x23975f8 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__FireworkItemController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FireworkItemController__Pool(__FireworkItemController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FireworkItemController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FireworkItemController__Pool(__FireworkItemController__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FireworkItemController__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FireworkItemController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<FireCoroutine>d__29
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4845))
// CS Name: ::FireworkItemController::<FireCoroutine>d__29*
class CORDL_TYPE __FireworkItemController___FireCoroutine_d__29 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::FireworkItemController* __4__this;

  /// @brief Field <soundTimeToCenter>5__2, offset 0x28, size 0x4
  __declspec(property(get = __get__soundTimeToCenter_5__2, put = __set__soundTimeToCenter_5__2)) float_t _soundTimeToCenter_5__2;

  /// @brief Field <elapsedTime>5__3, offset 0x2c, size 0x4
  __declspec(property(get = __get__elapsedTime_5__3, put = __set__elapsedTime_5__3)) float_t _elapsedTime_5__3;

  /// @brief Field <explosionSoundFired>5__4, offset 0x30, size 0x1
  __declspec(property(get = __get__explosionSoundFired_5__4, put = __set__explosionSoundFired_5__4)) bool _explosionSoundFired_5__4;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::FireworkItemController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworkItemController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::FireworkItemController* value);

  constexpr float_t& __get__soundTimeToCenter_5__2();

  constexpr float_t const& __get__soundTimeToCenter_5__2() const;

  constexpr void __set__soundTimeToCenter_5__2(float_t value);

  constexpr float_t& __get__elapsedTime_5__3();

  constexpr float_t const& __get__elapsedTime_5__3() const;

  constexpr void __set__elapsedTime_5__3(float_t value);

  constexpr bool& __get__explosionSoundFired_5__4();

  constexpr bool const& __get__explosionSoundFired_5__4() const;

  constexpr void __set__explosionSoundFired_5__4(bool value);

  static inline ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x23971b0 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2397640 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2397644 size 0x230 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2397874 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x239787c size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x23978bc size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__FireworkItemController___FireCoroutine_d__29", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FireworkItemController___FireCoroutine_d__29(__FireworkItemController___FireCoroutine_d__29&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FireworkItemController___FireCoroutine_d__29", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FireworkItemController___FireCoroutine_d__29(__FireworkItemController___FireCoroutine_d__29 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FireworkItemController___FireCoroutine_d__29();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::FireworkItemController* _____4__this;

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FireworkItemController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FireworkItemController*, "", "FireworkItemController");
NEED_NO_BOX(::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*, "", "FireworkItemController/FireworkItemParticleSystem");
NEED_NO_BOX(::GlobalNamespace::__FireworkItemController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FireworkItemController__Pool*, "", "FireworkItemController/Pool");
NEED_NO_BOX(::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*, "", "FireworkItemController/<FireCoroutine>d__29");
