#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemCurveMode_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemGradientMode_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystem)
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Collision;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Emission;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Force;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Initial;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Lights;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Noise;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Seed4;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Seed;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Shape;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Trail;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct __JobsUtility__JobScheduleParameters;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::ParticleSystemJobs {
struct NativeParticleData;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct ParticleSystemCurveMode;
}
namespace UnityEngine {
struct ParticleSystemCustomData;
}
namespace UnityEngine {
struct ParticleSystemGradientMode;
}
namespace UnityEngine {
struct ParticleSystemScalingMode;
}
namespace UnityEngine {
struct ParticleSystemSimulationSpace;
}
namespace UnityEngine {
struct ParticleSystemStopBehavior;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct __ParticleSystem__CollisionModule;
}
namespace UnityEngine {
struct __ParticleSystem__ColorBySpeedModule;
}
namespace UnityEngine {
struct __ParticleSystem__ColorOverLifetimeModule;
}
namespace UnityEngine {
struct __ParticleSystem__CustomDataModule;
}
namespace UnityEngine {
struct __ParticleSystem__EmissionModule;
}
namespace UnityEngine {
struct __ParticleSystem__EmitParams;
}
namespace UnityEngine {
struct __ParticleSystem__ExternalForcesModule;
}
namespace UnityEngine {
struct __ParticleSystem__ForceOverLifetimeModule;
}
namespace UnityEngine {
struct __ParticleSystem__InheritVelocityModule;
}
namespace UnityEngine {
struct __ParticleSystem__LifetimeByEmitterSpeedModule;
}
namespace UnityEngine {
struct __ParticleSystem__LightsModule;
}
namespace UnityEngine {
struct __ParticleSystem__LimitVelocityOverLifetimeModule;
}
namespace UnityEngine {
struct __ParticleSystem__MainModule;
}
namespace UnityEngine {
struct __ParticleSystem__MinMaxCurve;
}
namespace UnityEngine {
struct __ParticleSystem__MinMaxGradient;
}
namespace UnityEngine {
struct __ParticleSystem__NoiseModule;
}
namespace UnityEngine {
struct __ParticleSystem__Particle;
}
namespace UnityEngine {
struct __ParticleSystem__PlaybackState;
}
namespace UnityEngine {
struct __ParticleSystem__RotationBySpeedModule;
}
namespace UnityEngine {
struct __ParticleSystem__RotationOverLifetimeModule;
}
namespace UnityEngine {
struct __ParticleSystem__ShapeModule;
}
namespace UnityEngine {
struct __ParticleSystem__SizeBySpeedModule;
}
namespace UnityEngine {
struct __ParticleSystem__SizeOverLifetimeModule;
}
namespace UnityEngine {
struct __ParticleSystem__SubEmittersModule;
}
namespace UnityEngine {
struct __ParticleSystem__TextureSheetAnimationModule;
}
namespace UnityEngine {
struct __ParticleSystem__TrailModule;
}
namespace UnityEngine {
struct __ParticleSystem__Trails;
}
namespace UnityEngine {
struct __ParticleSystem__TriggerModule;
}
namespace UnityEngine {
struct __ParticleSystem__VelocityOverLifetimeModule;
}
// Forward declare root types
namespace UnityEngine {
class ParticleSystem;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Collision;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Emission;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Force;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Initial;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Lights;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Noise;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Seed;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Seed4;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Shape;
}
namespace GlobalNamespace {
struct __ParticleSystem__PlaybackState__Trail;
}
namespace UnityEngine {
struct __ParticleSystem__CollisionModule;
}
namespace UnityEngine {
struct __ParticleSystem__ColorBySpeedModule;
}
namespace UnityEngine {
struct __ParticleSystem__ColorOverLifetimeModule;
}
namespace UnityEngine {
struct __ParticleSystem__CustomDataModule;
}
namespace UnityEngine {
struct __ParticleSystem__EmissionModule;
}
namespace UnityEngine {
struct __ParticleSystem__EmitParams;
}
namespace UnityEngine {
struct __ParticleSystem__ExternalForcesModule;
}
namespace UnityEngine {
struct __ParticleSystem__ForceOverLifetimeModule;
}
namespace UnityEngine {
struct __ParticleSystem__InheritVelocityModule;
}
namespace UnityEngine {
struct __ParticleSystem__LifetimeByEmitterSpeedModule;
}
namespace UnityEngine {
struct __ParticleSystem__LightsModule;
}
namespace UnityEngine {
struct __ParticleSystem__LimitVelocityOverLifetimeModule;
}
namespace UnityEngine {
struct __ParticleSystem__MainModule;
}
namespace UnityEngine {
struct __ParticleSystem__MinMaxCurve;
}
namespace UnityEngine {
struct __ParticleSystem__MinMaxGradient;
}
namespace UnityEngine {
struct __ParticleSystem__NoiseModule;
}
namespace UnityEngine {
struct __ParticleSystem__Particle;
}
namespace UnityEngine {
struct __ParticleSystem__PlaybackState;
}
namespace UnityEngine {
struct __ParticleSystem__RotationBySpeedModule;
}
namespace UnityEngine {
struct __ParticleSystem__RotationOverLifetimeModule;
}
namespace UnityEngine {
struct __ParticleSystem__ShapeModule;
}
namespace UnityEngine {
struct __ParticleSystem__SizeBySpeedModule;
}
namespace UnityEngine {
struct __ParticleSystem__SizeOverLifetimeModule;
}
namespace UnityEngine {
struct __ParticleSystem__SubEmittersModule;
}
namespace UnityEngine {
struct __ParticleSystem__TextureSheetAnimationModule;
}
namespace UnityEngine {
struct __ParticleSystem__TrailModule;
}
namespace UnityEngine {
struct __ParticleSystem__Trails;
}
namespace UnityEngine {
struct __ParticleSystem__TriggerModule;
}
namespace UnityEngine {
struct __ParticleSystem__VelocityOverLifetimeModule;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ParticleSystem);
MARK_VAL_T(::GlobalNamespace::__ParticleSystem__PlaybackState__Collision);
MARK_VAL_T(::GlobalNamespace::__ParticleSystem__PlaybackState__Emission);
MARK_VAL_T(::GlobalNamespace::__ParticleSystem__PlaybackState__Force);
MARK_VAL_T(::GlobalNamespace::__ParticleSystem__PlaybackState__Initial);
MARK_VAL_T(::GlobalNamespace::__ParticleSystem__PlaybackState__Lights);
MARK_VAL_T(::GlobalNamespace::__ParticleSystem__PlaybackState__Noise);
MARK_VAL_T(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed);
MARK_VAL_T(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4);
MARK_VAL_T(::GlobalNamespace::__ParticleSystem__PlaybackState__Shape);
MARK_VAL_T(::GlobalNamespace::__ParticleSystem__PlaybackState__Trail);
MARK_VAL_T(::UnityEngine::__ParticleSystem__CollisionModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__ColorBySpeedModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__ColorOverLifetimeModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__CustomDataModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__EmissionModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__EmitParams);
MARK_VAL_T(::UnityEngine::__ParticleSystem__ExternalForcesModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__ForceOverLifetimeModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__InheritVelocityModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__LightsModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__MainModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__MinMaxCurve);
MARK_VAL_T(::UnityEngine::__ParticleSystem__MinMaxGradient);
MARK_VAL_T(::UnityEngine::__ParticleSystem__NoiseModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__Particle);
MARK_VAL_T(::UnityEngine::__ParticleSystem__PlaybackState);
MARK_VAL_T(::UnityEngine::__ParticleSystem__RotationBySpeedModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__RotationOverLifetimeModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__ShapeModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__SizeBySpeedModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__SizeOverLifetimeModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__SubEmittersModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__TextureSheetAnimationModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__TrailModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__Trails);
MARK_VAL_T(::UnityEngine::__ParticleSystem__TriggerModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__VelocityOverLifetimeModule);
// Type: ::MainModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::MainModule
struct CORDL_TYPE __ParticleSystem__MainModule {
public:
  // Declarations
  __declspec(property(get = get_duration)) float_t duration;

  __declspec(property(get = get_gravityModifierMultiplier, put = set_gravityModifierMultiplier)) float_t gravityModifierMultiplier;

  __declspec(property(get = get_loop, put = set_loop)) bool loop;

  __declspec(property(get = get_maxParticles, put = set_maxParticles)) int32_t maxParticles;

  __declspec(property(get = get_playOnAwake, put = set_playOnAwake)) bool playOnAwake;

  __declspec(property(get = get_scalingMode, put = set_scalingMode))::UnityEngine::ParticleSystemScalingMode scalingMode;

  __declspec(property(get = get_simulationSpace, put = set_simulationSpace))::UnityEngine::ParticleSystemSimulationSpace simulationSpace;

  __declspec(property(get = get_simulationSpeed, put = set_simulationSpeed)) float_t simulationSpeed;

  __declspec(property(get = get_startColor, put = set_startColor))::UnityEngine::__ParticleSystem__MinMaxGradient startColor;

  __declspec(property(get = get_startDelayMultiplier, put = set_startDelayMultiplier)) float_t startDelayMultiplier;

  __declspec(property(put = set_startLifetime))::UnityEngine::__ParticleSystem__MinMaxCurve startLifetime;

  __declspec(property(get = get_startLifetimeMultiplier, put = set_startLifetimeMultiplier)) float_t startLifetimeMultiplier;

  __declspec(property(get = get_startRotationMultiplier, put = set_startRotationMultiplier)) float_t startRotationMultiplier;

  __declspec(property(get = get_startRotationXMultiplier, put = set_startRotationXMultiplier)) float_t startRotationXMultiplier;

  __declspec(property(get = get_startRotationYMultiplier, put = set_startRotationYMultiplier)) float_t startRotationYMultiplier;

  __declspec(property(get = get_startRotationZMultiplier, put = set_startRotationZMultiplier)) float_t startRotationZMultiplier;

  __declspec(property(get = get_startSizeMultiplier, put = set_startSizeMultiplier)) float_t startSizeMultiplier;

  __declspec(property(put = set_startSpeed))::UnityEngine::__ParticleSystem__MinMaxCurve startSpeed;

  __declspec(property(get = get_startSpeedMultiplier, put = set_startSpeedMultiplier)) float_t startSpeedMultiplier;

  /// @brief Method .ctor, addr 0x345434c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  /// @brief Method get_duration, addr 0x34549a8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_duration();

  /// @brief Method get_duration_Injected, addr 0x3455a6c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_duration_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_gravityModifierMultiplier, addr 0x3455640, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_gravityModifierMultiplier();

  /// @brief Method get_gravityModifierMultiplier_Injected, addr 0x3456100, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_gravityModifierMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_loop, addr 0x3454794, size 0x3c, virtual false, abstract: false, final false
  inline bool get_loop();

  /// @brief Method get_loop_Injected, addr 0x3455aa8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_loop_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_maxParticles, addr 0x3455750, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_maxParticles();

  /// @brief Method get_maxParticles_Injected, addr 0x3456390, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_maxParticles_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_playOnAwake, addr 0x34548a0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_playOnAwake();

  /// @brief Method get_playOnAwake_Injected, addr 0x3456310, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_playOnAwake_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_scalingMode, addr 0x3455960, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemScalingMode get_scalingMode();

  /// @brief Method get_scalingMode_Injected, addr 0x3456290, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ParticleSystemScalingMode get_scalingMode_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_simulationSpace, addr 0x3455858, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemSimulationSpace get_simulationSpace();

  /// @brief Method get_simulationSpace_Injected, addr 0x3456188, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ParticleSystemSimulationSpace get_simulationSpace_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_simulationSpeed, addr 0x3454a24, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_simulationSpeed();

  /// @brief Method get_simulationSpeed_Injected, addr 0x3456208, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_simulationSpeed_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_startColor, addr 0x3454fa4, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__MinMaxGradient get_startColor();

  /// @brief Method get_startColor_Injected, addr 0x3456078, size 0x44, virtual false, abstract: false, final false
  static inline void get_startColor_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxGradient> ret);

  /// @brief Method get_startDelayMultiplier, addr 0x3454680, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startDelayMultiplier();

  /// @brief Method get_startDelayMultiplier_Injected, addr 0x3455b28, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startDelayMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_startLifetimeMultiplier, addr 0x3455530, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startLifetimeMultiplier();

  /// @brief Method get_startLifetimeMultiplier_Injected, addr 0x3455c38, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startLifetimeMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_startRotationMultiplier, addr 0x3455124, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startRotationMultiplier();

  /// @brief Method get_startRotationMultiplier_Injected, addr 0x3455e58, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startRotationMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_startRotationXMultiplier, addr 0x34552a8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startRotationXMultiplier();

  /// @brief Method get_startRotationXMultiplier_Injected, addr 0x3455ee0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startRotationXMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_startRotationYMultiplier, addr 0x34552e4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startRotationYMultiplier();

  /// @brief Method get_startRotationYMultiplier_Injected, addr 0x3455f68, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startRotationYMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_startRotationZMultiplier, addr 0x3455320, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startRotationZMultiplier();

  /// @brief Method get_startRotationZMultiplier_Injected, addr 0x3455ff0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startRotationZMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_startSizeMultiplier, addr 0x3454e78, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startSizeMultiplier();

  /// @brief Method get_startSizeMultiplier_Injected, addr 0x3455dd0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startSizeMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_startSpeedMultiplier, addr 0x3454d68, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startSpeedMultiplier();

  /// @brief Method get_startSpeedMultiplier_Injected, addr 0x3455d48, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startSpeedMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method set_gravityModifierMultiplier, addr 0x34556c4, size 0x4c, virtual false, abstract: false, final false
  inline void set_gravityModifierMultiplier(float_t value);

  /// @brief Method set_gravityModifierMultiplier_Injected, addr 0x345613c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_gravityModifierMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value);

  /// @brief Method set_loop, addr 0x3454818, size 0x44, virtual false, abstract: false, final false
  inline void set_loop(bool value);

  /// @brief Method set_loop_Injected, addr 0x3455ae4, size 0x44, virtual false, abstract: false, final false
  static inline void set_loop_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, bool value);

  /// @brief Method set_maxParticles, addr 0x34557d4, size 0x44, virtual false, abstract: false, final false
  inline void set_maxParticles(int32_t value);

  /// @brief Method set_maxParticles_Injected, addr 0x34563cc, size 0x44, virtual false, abstract: false, final false
  static inline void set_maxParticles_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, int32_t value);

  /// @brief Method set_playOnAwake, addr 0x3454924, size 0x44, virtual false, abstract: false, final false
  inline void set_playOnAwake(bool value);

  /// @brief Method set_playOnAwake_Injected, addr 0x345634c, size 0x44, virtual false, abstract: false, final false
  static inline void set_playOnAwake_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, bool value);

  /// @brief Method set_scalingMode, addr 0x34559e4, size 0x44, virtual false, abstract: false, final false
  inline void set_scalingMode(::UnityEngine::ParticleSystemScalingMode value);

  /// @brief Method set_scalingMode_Injected, addr 0x34562cc, size 0x44, virtual false, abstract: false, final false
  static inline void set_scalingMode_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, ::UnityEngine::ParticleSystemScalingMode value);

  /// @brief Method set_simulationSpace, addr 0x34558dc, size 0x44, virtual false, abstract: false, final false
  inline void set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace value);

  /// @brief Method set_simulationSpace_Injected, addr 0x34561c4, size 0x44, virtual false, abstract: false, final false
  static inline void set_simulationSpace_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, ::UnityEngine::ParticleSystemSimulationSpace value);

  /// @brief Method set_simulationSpeed, addr 0x3454aa8, size 0x4c, virtual false, abstract: false, final false
  inline void set_simulationSpeed(float_t value);

  /// @brief Method set_simulationSpeed_Injected, addr 0x3456244, size 0x4c, virtual false, abstract: false, final false
  static inline void set_simulationSpeed_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value);

  /// @brief Method set_startColor, addr 0x34550a0, size 0x44, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::__ParticleSystem__MinMaxGradient value);

  /// @brief Method set_startColor_Injected, addr 0x34560bc, size 0x44, virtual false, abstract: false, final false
  static inline void set_startColor_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxGradient> value);

  /// @brief Method set_startDelayMultiplier, addr 0x3454704, size 0x4c, virtual false, abstract: false, final false
  inline void set_startDelayMultiplier(float_t value);

  /// @brief Method set_startDelayMultiplier_Injected, addr 0x3455b64, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startDelayMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value);

  /// @brief Method set_startLifetime, addr 0x3455bb0, size 0x44, virtual false, abstract: false, final false
  inline void set_startLifetime(::UnityEngine::__ParticleSystem__MinMaxCurve value);

  /// @brief Method set_startLifetimeMultiplier, addr 0x34555b4, size 0x4c, virtual false, abstract: false, final false
  inline void set_startLifetimeMultiplier(float_t value);

  /// @brief Method set_startLifetimeMultiplier_Injected, addr 0x3455c74, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startLifetimeMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value);

  /// @brief Method set_startLifetime_Injected, addr 0x3455bf4, size 0x44, virtual false, abstract: false, final false
  static inline void set_startLifetime_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve> value);

  /// @brief Method set_startRotationMultiplier, addr 0x34551a8, size 0x4c, virtual false, abstract: false, final false
  inline void set_startRotationMultiplier(float_t value);

  /// @brief Method set_startRotationMultiplier_Injected, addr 0x3455e94, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startRotationMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value);

  /// @brief Method set_startRotationXMultiplier, addr 0x345540c, size 0x4c, virtual false, abstract: false, final false
  inline void set_startRotationXMultiplier(float_t value);

  /// @brief Method set_startRotationXMultiplier_Injected, addr 0x3455f1c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startRotationXMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value);

  /// @brief Method set_startRotationYMultiplier, addr 0x3455458, size 0x4c, virtual false, abstract: false, final false
  inline void set_startRotationYMultiplier(float_t value);

  /// @brief Method set_startRotationYMultiplier_Injected, addr 0x3455fa4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startRotationYMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value);

  /// @brief Method set_startRotationZMultiplier, addr 0x34554a4, size 0x4c, virtual false, abstract: false, final false
  inline void set_startRotationZMultiplier(float_t value);

  /// @brief Method set_startRotationZMultiplier_Injected, addr 0x345602c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startRotationZMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value);

  /// @brief Method set_startSizeMultiplier, addr 0x3454efc, size 0x4c, virtual false, abstract: false, final false
  inline void set_startSizeMultiplier(float_t value);

  /// @brief Method set_startSizeMultiplier_Injected, addr 0x3455e0c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startSizeMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value);

  /// @brief Method set_startSpeed, addr 0x3455cc0, size 0x44, virtual false, abstract: false, final false
  inline void set_startSpeed(::UnityEngine::__ParticleSystem__MinMaxCurve value);

  /// @brief Method set_startSpeedMultiplier, addr 0x3454dec, size 0x4c, virtual false, abstract: false, final false
  inline void set_startSpeedMultiplier(float_t value);

  /// @brief Method set_startSpeedMultiplier_Injected, addr 0x3455d84, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startSpeedMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value);

  /// @brief Method set_startSpeed_Injected, addr 0x3455d04, size 0x44, virtual false, abstract: false, final false
  static inline void set_startSpeed_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__MainModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__MainModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__MainModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MainModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::EmissionModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::EmissionModule
struct CORDL_TYPE __ParticleSystem__EmissionModule {
public:
  // Declarations
  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  __declspec(property(put = set_rateOverTime))::UnityEngine::__ParticleSystem__MinMaxCurve rateOverTime;

  __declspec(property(get = get_rateOverTimeMultiplier)) float_t rateOverTimeMultiplier;

  /// @brief Method .ctor, addr 0x3454358, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  /// @brief Method get_enabled, addr 0x3454b38, size 0x3c, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_enabled_Injected, addr 0x3456410, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enabled_Injected(ByRef<::UnityEngine::__ParticleSystem__EmissionModule> _unity_self);

  /// @brief Method get_rateOverTimeMultiplier, addr 0x3454c40, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_rateOverTimeMultiplier();

  /// @brief Method get_rateOverTimeMultiplier_Injected, addr 0x34564d4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_rateOverTimeMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__EmissionModule> _unity_self);

  /// @brief Method set_enabled, addr 0x3454bbc, size 0x44, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method set_enabled_Injected, addr 0x345644c, size 0x44, virtual false, abstract: false, final false
  static inline void set_enabled_Injected(ByRef<::UnityEngine::__ParticleSystem__EmissionModule> _unity_self, bool value);

  /// @brief Method set_rateOverTime, addr 0x3454ce4, size 0x44, virtual false, abstract: false, final false
  inline void set_rateOverTime(::UnityEngine::__ParticleSystem__MinMaxCurve value);

  /// @brief Method set_rateOverTime_Injected, addr 0x3456490, size 0x44, virtual false, abstract: false, final false
  static inline void set_rateOverTime_Injected(ByRef<::UnityEngine::__ParticleSystem__EmissionModule> _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__EmissionModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__EmissionModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__EmissionModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmissionModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::ShapeModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::ShapeModule
struct CORDL_TYPE __ParticleSystem__ShapeModule {
public:
  // Declarations
  __declspec(property(get = get_meshRenderer, put = set_meshRenderer))::UnityW<::UnityEngine::MeshRenderer> meshRenderer;

  __declspec(property(put = set_rotation))::UnityEngine::Vector3 rotation;

  /// @brief Method .ctor, addr 0x3454364, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  /// @brief Method get_meshRenderer, addr 0x3456510, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::MeshRenderer> get_meshRenderer();

  /// @brief Method get_meshRenderer_Injected, addr 0x345654c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::MeshRenderer> get_meshRenderer_Injected(ByRef<::UnityEngine::__ParticleSystem__ShapeModule> _unity_self);

  /// @brief Method set_meshRenderer, addr 0x3456588, size 0x44, virtual false, abstract: false, final false
  inline void set_meshRenderer(::UnityEngine::MeshRenderer* value);

  /// @brief Method set_meshRenderer_Injected, addr 0x34565cc, size 0x44, virtual false, abstract: false, final false
  static inline void set_meshRenderer_Injected(ByRef<::UnityEngine::__ParticleSystem__ShapeModule> _unity_self, ::UnityEngine::MeshRenderer* value);

  /// @brief Method set_rotation, addr 0x3456610, size 0x54, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation_Injected, addr 0x3456664, size 0x44, virtual false, abstract: false, final false
  static inline void set_rotation_Injected(ByRef<::UnityEngine::__ParticleSystem__ShapeModule> _unity_self, ByRef<::UnityEngine::Vector3> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__ShapeModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__ShapeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__ShapeModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__ShapeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::VelocityOverLifetimeModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::VelocityOverLifetimeModule
struct CORDL_TYPE __ParticleSystem__VelocityOverLifetimeModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3454370, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__VelocityOverLifetimeModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__VelocityOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__VelocityOverLifetimeModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__VelocityOverLifetimeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::LimitVelocityOverLifetimeModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::LimitVelocityOverLifetimeModule
struct CORDL_TYPE __ParticleSystem__LimitVelocityOverLifetimeModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x345437c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__LimitVelocityOverLifetimeModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__LimitVelocityOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::InheritVelocityModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::InheritVelocityModule
struct CORDL_TYPE __ParticleSystem__InheritVelocityModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3454388, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__InheritVelocityModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__InheritVelocityModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__InheritVelocityModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__InheritVelocityModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::LifetimeByEmitterSpeedModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::LifetimeByEmitterSpeedModule
struct CORDL_TYPE __ParticleSystem__LifetimeByEmitterSpeedModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3454394, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__LifetimeByEmitterSpeedModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__LifetimeByEmitterSpeedModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::ForceOverLifetimeModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::ForceOverLifetimeModule
struct CORDL_TYPE __ParticleSystem__ForceOverLifetimeModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x34543a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__ForceOverLifetimeModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__ForceOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__ForceOverLifetimeModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__ForceOverLifetimeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::ColorOverLifetimeModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::ColorOverLifetimeModule
struct CORDL_TYPE __ParticleSystem__ColorOverLifetimeModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x34543ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__ColorOverLifetimeModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__ColorOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__ColorOverLifetimeModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__ColorOverLifetimeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::ColorBySpeedModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::ColorBySpeedModule
struct CORDL_TYPE __ParticleSystem__ColorBySpeedModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x34543b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__ColorBySpeedModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__ColorBySpeedModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__ColorBySpeedModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__ColorBySpeedModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::SizeOverLifetimeModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::SizeOverLifetimeModule
struct CORDL_TYPE __ParticleSystem__SizeOverLifetimeModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x34543c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__SizeOverLifetimeModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__SizeOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__SizeOverLifetimeModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__SizeOverLifetimeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::SizeBySpeedModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::SizeBySpeedModule
struct CORDL_TYPE __ParticleSystem__SizeBySpeedModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x34543d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__SizeBySpeedModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__SizeBySpeedModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__SizeBySpeedModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__SizeBySpeedModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::RotationOverLifetimeModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::RotationOverLifetimeModule
struct CORDL_TYPE __ParticleSystem__RotationOverLifetimeModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x34543dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__RotationOverLifetimeModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__RotationOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__RotationOverLifetimeModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__RotationOverLifetimeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::RotationBySpeedModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::RotationBySpeedModule
struct CORDL_TYPE __ParticleSystem__RotationBySpeedModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x34543e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__RotationBySpeedModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__RotationBySpeedModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__RotationBySpeedModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__RotationBySpeedModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::ExternalForcesModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::ExternalForcesModule
struct CORDL_TYPE __ParticleSystem__ExternalForcesModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x34543f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__ExternalForcesModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__ExternalForcesModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__ExternalForcesModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__ExternalForcesModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::NoiseModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::NoiseModule
struct CORDL_TYPE __ParticleSystem__NoiseModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3454400, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__NoiseModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__NoiseModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__NoiseModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__NoiseModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::CollisionModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::CollisionModule
struct CORDL_TYPE __ParticleSystem__CollisionModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x345440c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__CollisionModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__CollisionModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__CollisionModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__CollisionModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::TriggerModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::TriggerModule
struct CORDL_TYPE __ParticleSystem__TriggerModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3454418, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__TriggerModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__TriggerModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__TriggerModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__TriggerModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::SubEmittersModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::SubEmittersModule
struct CORDL_TYPE __ParticleSystem__SubEmittersModule {
public:
  // Declarations
  __declspec(property(get = get_subEmittersCount)) int32_t subEmittersCount;

  /// @brief Method GetSubEmitterSystem, addr 0x3456720, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ParticleSystem> GetSubEmitterSystem(int32_t index);

  /// @brief Method GetSubEmitterSystem_Injected, addr 0x3456764, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ParticleSystem> GetSubEmitterSystem_Injected(ByRef<::UnityEngine::__ParticleSystem__SubEmittersModule> _unity_self, int32_t index);

  /// @brief Method .ctor, addr 0x3454424, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  /// @brief Method get_subEmittersCount, addr 0x34566a8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_subEmittersCount();

  /// @brief Method get_subEmittersCount_Injected, addr 0x34566e4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_subEmittersCount_Injected(ByRef<::UnityEngine::__ParticleSystem__SubEmittersModule> _unity_self);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__SubEmittersModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__SubEmittersModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__SubEmittersModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__SubEmittersModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::TextureSheetAnimationModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::TextureSheetAnimationModule
struct CORDL_TYPE __ParticleSystem__TextureSheetAnimationModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3454430, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__TextureSheetAnimationModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__TextureSheetAnimationModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__TextureSheetAnimationModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__TextureSheetAnimationModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::LightsModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::LightsModule
struct CORDL_TYPE __ParticleSystem__LightsModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x345443c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__LightsModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__LightsModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__LightsModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__LightsModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::TrailModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::TrailModule
struct CORDL_TYPE __ParticleSystem__TrailModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3454448, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__TrailModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__TrailModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__TrailModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__TrailModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::CustomDataModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::CustomDataModule
struct CORDL_TYPE __ParticleSystem__CustomDataModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3454454, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__CustomDataModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__CustomDataModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__CustomDataModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__CustomDataModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::MinMaxCurve
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::MinMaxCurve
struct CORDL_TYPE __ParticleSystem__MinMaxCurve {
public:
  // Declarations
  __declspec(property(put = set_constantMax)) float_t constantMax;

  __declspec(property(put = set_constantMin)) float_t constantMin;

  /// @brief Method .ctor, addr 0x34567a8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t constant);

  /// @brief Method .ctor, addr 0x34567bc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(float_t min, float_t max);

  /// @brief Method op_Implicit, addr 0x3454cd0, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::__ParticleSystem__MinMaxCurve op_Implicit___UnityEngine____ParticleSystem__MinMaxCurve(float_t constant);

  /// @brief Method set_constantMax, addr 0x34567d8, size 0x8, virtual false, abstract: false, final false
  inline void set_constantMax(float_t value);

  /// @brief Method set_constantMin, addr 0x34567e0, size 0x8, virtual false, abstract: false, final false
  inline void set_constantMin(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__MinMaxCurve();

  // Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemCurveMode", modifiers: "", def_value: None }, CppParam { name: "m_CurveMultiplier", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_CurveMin", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None }, CppParam { name: "m_CurveMax", ty: "::UnityEngine::AnimationCurve*",
  // modifiers: "", def_value: None }, CppParam { name: "m_ConstantMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ConstantMax", ty: "float_t", modifiers: "", def_value:
  // None }]
  constexpr __ParticleSystem__MinMaxCurve(::UnityEngine::ParticleSystemCurveMode m_Mode, float_t m_CurveMultiplier, ::UnityEngine::AnimationCurve* m_CurveMin,
                                          ::UnityEngine::AnimationCurve* m_CurveMax, float_t m_ConstantMin, float_t m_ConstantMax) noexcept;

  /// @brief Field m_Mode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::ParticleSystemCurveMode m_Mode;

  /// @brief Field m_CurveMultiplier, offset: 0x4, size: 0x4, def value: None
  float_t m_CurveMultiplier;

  /// @brief Field m_CurveMin, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* m_CurveMin;

  /// @brief Field m_CurveMax, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* m_CurveMax;

  /// @brief Field m_ConstantMin, offset: 0x18, size: 0x4, def value: None
  float_t m_ConstantMin;

  /// @brief Field m_ConstantMax, offset: 0x1c, size: 0x4, def value: None
  float_t m_ConstantMax;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__MinMaxCurve, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MinMaxCurve, m_Mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MinMaxCurve, m_CurveMultiplier) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MinMaxCurve, m_CurveMin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MinMaxCurve, m_CurveMax) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MinMaxCurve, m_ConstantMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MinMaxCurve, m_ConstantMax) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::MinMaxGradient
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::MinMaxGradient
struct CORDL_TYPE __ParticleSystem__MinMaxGradient {
public:
  // Declarations
  __declspec(property(get = get_color))::UnityEngine::Color color;

  /// @brief Method .ctor, addr 0x34567e8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color color);

  /// @brief Method get_color, addr 0x345501c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method op_Implicit, addr 0x3455084, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::__ParticleSystem__MinMaxGradient op_Implicit___UnityEngine____ParticleSystem__MinMaxGradient(::UnityEngine::Color color);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__MinMaxGradient();

  // Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemGradientMode", modifiers: "", def_value: None }, CppParam { name: "m_GradientMin", ty: "::UnityEngine::Gradient*",
  // modifiers: "", def_value: None }, CppParam { name: "m_GradientMax", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "m_ColorMin", ty: "::UnityEngine::Color",
  // modifiers: "", def_value: None }, CppParam { name: "m_ColorMax", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__MinMaxGradient(::UnityEngine::ParticleSystemGradientMode m_Mode, ::UnityEngine::Gradient* m_GradientMin, ::UnityEngine::Gradient* m_GradientMax,
                                             ::UnityEngine::Color m_ColorMin, ::UnityEngine::Color m_ColorMax) noexcept;

  /// @brief Field m_Mode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::ParticleSystemGradientMode m_Mode;

  /// @brief Field m_GradientMin, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Gradient* m_GradientMin;

  /// @brief Field m_GradientMax, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Gradient* m_GradientMax;

  /// @brief Field m_ColorMin, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color m_ColorMin;

  /// @brief Field m_ColorMax, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color m_ColorMax;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__MinMaxGradient, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MinMaxGradient, m_Mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MinMaxGradient, m_GradientMin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MinMaxGradient, m_GradientMax) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MinMaxGradient, m_ColorMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__MinMaxGradient, m_ColorMax) == 0x28, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::Particle
// SizeInfo { instance_size: 132, native_size: 132, calculated_instance_size: 132, calculated_native_size: 148, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::Particle
struct CORDL_TYPE __ParticleSystem__Particle {
public:
  // Declarations
  __declspec(property(put = set_angularVelocity3D))::UnityEngine::Vector3 angularVelocity3D;

  __declspec(property(put = set_lifetime)) float_t lifetime;

  __declspec(property(put = set_position))::UnityEngine::Vector3 position;

  __declspec(property(put = set_randomSeed)) uint32_t randomSeed;

  __declspec(property(put = set_remainingLifetime)) float_t remainingLifetime;

  __declspec(property(put = set_rotation3D))::UnityEngine::Vector3 rotation3D;

  __declspec(property(put = set_startColor))::UnityEngine::Color32 startColor;

  __declspec(property(put = set_startLifetime)) float_t startLifetime;

  __declspec(property(put = set_startSize)) float_t startSize;

  __declspec(property(put = set_velocity))::UnityEngine::Vector3 velocity;

  /// @brief Method set_angularVelocity3D, addr 0x34545c0, size 0x2c, virtual false, abstract: false, final false
  inline void set_angularVelocity3D(::UnityEngine::Vector3 value);

  /// @brief Method set_lifetime, addr 0x3454578, size 0x8, virtual false, abstract: false, final false
  inline void set_lifetime(float_t value);

  /// @brief Method set_position, addr 0x3454560, size 0xc, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_randomSeed, addr 0x34545f4, size 0x8, virtual false, abstract: false, final false
  inline void set_randomSeed(uint32_t value);

  /// @brief Method set_remainingLifetime, addr 0x3456804, size 0x8, virtual false, abstract: false, final false
  inline void set_remainingLifetime(float_t value);

  /// @brief Method set_rotation3D, addr 0x3454594, size 0x2c, virtual false, abstract: false, final false
  inline void set_rotation3D(::UnityEngine::Vector3 value);

  /// @brief Method set_startColor, addr 0x34545ec, size 0x8, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::Color32 value);

  /// @brief Method set_startLifetime, addr 0x3454580, size 0x8, virtual false, abstract: false, final false
  inline void set_startLifetime(float_t value);

  /// @brief Method set_startSize, addr 0x3454588, size 0xc, virtual false, abstract: false, final false
  inline void set_startSize(float_t value);

  /// @brief Method set_velocity, addr 0x345456c, size 0xc, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__Particle();

  // Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "m_AnimatedVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_InitialVelocity", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "m_AxisOfRotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "m_AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_StartSize", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_StartColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "m_RandomSeed", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ParentRandomSeed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Lifetime", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_StartLifetime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_MeshIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_EmitAccumulator0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EmitAccumulator1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags",
  // ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__Particle(::UnityEngine::Vector3 m_Position, ::UnityEngine::Vector3 m_Velocity, ::UnityEngine::Vector3 m_AnimatedVelocity, ::UnityEngine::Vector3 m_InitialVelocity,
                                       ::UnityEngine::Vector3 m_AxisOfRotation, ::UnityEngine::Vector3 m_Rotation, ::UnityEngine::Vector3 m_AngularVelocity, ::UnityEngine::Vector3 m_StartSize,
                                       ::UnityEngine::Color32 m_StartColor, uint32_t m_RandomSeed, uint32_t m_ParentRandomSeed, float_t m_Lifetime, float_t m_StartLifetime, int32_t m_MeshIndex,
                                       float_t m_EmitAccumulator0, float_t m_EmitAccumulator1, uint32_t m_Flags) noexcept;

  /// @brief Field m_Position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Position;

  /// @brief Field m_Velocity, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Velocity;

  /// @brief Field m_AnimatedVelocity, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_AnimatedVelocity;

  /// @brief Field m_InitialVelocity, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_InitialVelocity;

  /// @brief Field m_AxisOfRotation, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_AxisOfRotation;

  /// @brief Field m_Rotation, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Rotation;

  /// @brief Field m_AngularVelocity, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_AngularVelocity;

  /// @brief Field m_StartSize, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_StartSize;

  /// @brief Field m_StartColor, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::Color32 m_StartColor;

  /// @brief Field m_RandomSeed, offset: 0x64, size: 0x4, def value: None
  uint32_t m_RandomSeed;

  /// @brief Field m_ParentRandomSeed, offset: 0x68, size: 0x4, def value: None
  uint32_t m_ParentRandomSeed;

  /// @brief Field m_Lifetime, offset: 0x6c, size: 0x4, def value: None
  float_t m_Lifetime;

  /// @brief Field m_StartLifetime, offset: 0x70, size: 0x4, def value: None
  float_t m_StartLifetime;

  /// @brief Field m_MeshIndex, offset: 0x74, size: 0x4, def value: None
  int32_t m_MeshIndex;

  /// @brief Field m_EmitAccumulator0, offset: 0x78, size: 0x4, def value: None
  float_t m_EmitAccumulator0;

  /// @brief Field m_EmitAccumulator1, offset: 0x7c, size: 0x4, def value: None
  float_t m_EmitAccumulator1;

  /// @brief Field m_Flags, offset: 0x80, size: 0x4, def value: None
  uint32_t m_Flags;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x84 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__Particle, 0x84>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_Velocity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_AnimatedVelocity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_InitialVelocity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_AxisOfRotation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_Rotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_AngularVelocity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_StartSize) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_StartColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_RandomSeed) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_ParentRandomSeed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_Lifetime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_StartLifetime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_MeshIndex) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_EmitAccumulator0) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_EmitAccumulator1) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Particle, m_Flags) == 0x80, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::EmitParams
// SizeInfo { instance_size: 144, native_size: 176, calculated_instance_size: 144, calculated_native_size: 159, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::EmitParams
struct CORDL_TYPE __ParticleSystem__EmitParams {
public:
  // Declarations
  __declspec(property(put = set_applyShapeToPosition)) bool applyShapeToPosition;

  __declspec(property(put = set_position))::UnityEngine::Vector3 position;

  __declspec(property(put = set_rotation3D))::UnityEngine::Vector3 rotation3D;

  __declspec(property(put = set_startColor))::UnityEngine::Color32 startColor;

  /// @brief Method set_applyShapeToPosition, addr 0x3456820, size 0xc, virtual false, abstract: false, final false
  inline void set_applyShapeToPosition(bool value);

  /// @brief Method set_position, addr 0x345680c, size 0x14, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation3D, addr 0x345682c, size 0x34, virtual false, abstract: false, final false
  inline void set_rotation3D(::UnityEngine::Vector3 value);

  /// @brief Method set_startColor, addr 0x3456860, size 0x10, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::Color32 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__EmitParams();

  // Ctor Parameters [CppParam { name: "m_Particle", ty: "::UnityEngine::__ParticleSystem__Particle", modifiers: "", def_value: None }, CppParam { name: "m_PositionSet", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "m_VelocitySet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_AxisOfRotationSet", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "m_RotationSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_AngularVelocitySet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartSizeSet", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartColorSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_RandomSeedSet", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "m_StartLifetimeSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_MeshIndexSet", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "m_ApplyShapeToPosition", ty: "bool", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__EmitParams(::UnityEngine::__ParticleSystem__Particle m_Particle, bool m_PositionSet, bool m_VelocitySet, bool m_AxisOfRotationSet, bool m_RotationSet,
                                         bool m_AngularVelocitySet, bool m_StartSizeSet, bool m_StartColorSet, bool m_RandomSeedSet, bool m_StartLifetimeSet, bool m_MeshIndexSet,
                                         bool m_ApplyShapeToPosition) noexcept;

  /// @brief Field m_Particle, offset: 0x0, size: 0x84, def value: None
  ::UnityEngine::__ParticleSystem__Particle m_Particle;

  /// @brief Field m_PositionSet, offset: 0x84, size: 0x1, def value: None
  bool m_PositionSet;

  /// @brief Field m_VelocitySet, offset: 0x85, size: 0x1, def value: None
  bool m_VelocitySet;

  /// @brief Field m_AxisOfRotationSet, offset: 0x86, size: 0x1, def value: None
  bool m_AxisOfRotationSet;

  /// @brief Field m_RotationSet, offset: 0x87, size: 0x1, def value: None
  bool m_RotationSet;

  /// @brief Field m_AngularVelocitySet, offset: 0x88, size: 0x1, def value: None
  bool m_AngularVelocitySet;

  /// @brief Field m_StartSizeSet, offset: 0x89, size: 0x1, def value: None
  bool m_StartSizeSet;

  /// @brief Field m_StartColorSet, offset: 0x8a, size: 0x1, def value: None
  bool m_StartColorSet;

  /// @brief Field m_RandomSeedSet, offset: 0x8b, size: 0x1, def value: None
  bool m_RandomSeedSet;

  /// @brief Field m_StartLifetimeSet, offset: 0x8c, size: 0x1, def value: None
  bool m_StartLifetimeSet;

  /// @brief Field m_MeshIndexSet, offset: 0x8d, size: 0x1, def value: None
  bool m_MeshIndexSet;

  /// @brief Field m_ApplyShapeToPosition, offset: 0x8e, size: 0x1, def value: None
  bool m_ApplyShapeToPosition;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__EmitParams, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_Particle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_PositionSet) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_VelocitySet) == 0x85, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_AxisOfRotationSet) == 0x86, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_RotationSet) == 0x87, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_AngularVelocitySet) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_StartSizeSet) == 0x89, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_StartColorSet) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_RandomSeedSet) == 0x8b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_StartLifetimeSet) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_MeshIndexSet) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__EmitParams, m_ApplyShapeToPosition) == 0x8e, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::Seed
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ParticleSystem::PlaybackState::Seed
struct CORDL_TYPE __ParticleSystem__PlaybackState__Seed {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__PlaybackState__Seed();

  // Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "z", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__PlaybackState__Seed(uint32_t x, uint32_t y, uint32_t z, uint32_t w) noexcept;

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  uint32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  uint32_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  uint32_t z;

  /// @brief Field w, offset: 0xc, size: 0x4, def value: None
  uint32_t w;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ParticleSystem__PlaybackState__Seed, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed, w) == 0xc, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Seed4
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ParticleSystem::PlaybackState::Seed4
struct CORDL_TYPE __ParticleSystem__PlaybackState__Seed4 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__PlaybackState__Seed4();

  // Ctor Parameters [CppParam { name: "x", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed", modifiers: "", def_value: None }, CppParam { name: "y", ty:
  // "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed", modifiers: "", def_value: None }, CppParam { name: "z", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed", modifiers: "",
  // def_value: None }, CppParam { name: "w", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__PlaybackState__Seed4(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed x, ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed y,
                                                   ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed z, ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed w) noexcept;

  /// @brief Field x, offset: 0x0, size: 0x10, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed x;

  /// @brief Field y, offset: 0x10, size: 0x10, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed y;

  /// @brief Field z, offset: 0x20, size: 0x10, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed z;

  /// @brief Field w, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed w;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4, y) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4, z) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4, w) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Emission
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ParticleSystem::PlaybackState::Emission
struct CORDL_TYPE __ParticleSystem__PlaybackState__Emission {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__PlaybackState__Emission();

  // Ctor Parameters [CppParam { name: "m_ParticleSpacing", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ToEmitAccumulator", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m_Random", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__PlaybackState__Emission(float_t m_ParticleSpacing, float_t m_ToEmitAccumulator, ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed m_Random) noexcept;

  /// @brief Field m_ParticleSpacing, offset: 0x0, size: 0x4, def value: None
  float_t m_ParticleSpacing;

  /// @brief Field m_ToEmitAccumulator, offset: 0x4, size: 0x4, def value: None
  float_t m_ToEmitAccumulator;

  /// @brief Field m_Random, offset: 0x8, size: 0x10, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed m_Random;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ParticleSystem__PlaybackState__Emission, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Emission, m_ParticleSpacing) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Emission, m_ToEmitAccumulator) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Emission, m_Random) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Initial
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ParticleSystem::PlaybackState::Initial
struct CORDL_TYPE __ParticleSystem__PlaybackState__Initial {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__PlaybackState__Initial();

  // Ctor Parameters [CppParam { name: "m_Random", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__PlaybackState__Initial(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4 m_Random) noexcept;

  /// @brief Field m_Random, offset: 0x0, size: 0x40, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4 m_Random;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ParticleSystem__PlaybackState__Initial, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Initial, m_Random) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Shape
// SizeInfo { instance_size: 92, native_size: 92, calculated_instance_size: 92, calculated_native_size: 108, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ParticleSystem::PlaybackState::Shape
struct CORDL_TYPE __ParticleSystem__PlaybackState__Shape {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__PlaybackState__Shape();

  // Ctor Parameters [CppParam { name: "m_Random", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4", modifiers: "", def_value: None }, CppParam { name: "m_RadiusTimer", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_RadiusTimerPrev", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ArcTimer", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "m_ArcTimerPrev", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_MeshSpawnTimer", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_MeshSpawnTimerPrev", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_OrderedMeshVertexIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__PlaybackState__Shape(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4 m_Random, float_t m_RadiusTimer, float_t m_RadiusTimerPrev, float_t m_ArcTimer,
                                                   float_t m_ArcTimerPrev, float_t m_MeshSpawnTimer, float_t m_MeshSpawnTimerPrev, int32_t m_OrderedMeshVertexIndex) noexcept;

  /// @brief Field m_Random, offset: 0x0, size: 0x40, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4 m_Random;

  /// @brief Field m_RadiusTimer, offset: 0x40, size: 0x4, def value: None
  float_t m_RadiusTimer;

  /// @brief Field m_RadiusTimerPrev, offset: 0x44, size: 0x4, def value: None
  float_t m_RadiusTimerPrev;

  /// @brief Field m_ArcTimer, offset: 0x48, size: 0x4, def value: None
  float_t m_ArcTimer;

  /// @brief Field m_ArcTimerPrev, offset: 0x4c, size: 0x4, def value: None
  float_t m_ArcTimerPrev;

  /// @brief Field m_MeshSpawnTimer, offset: 0x50, size: 0x4, def value: None
  float_t m_MeshSpawnTimer;

  /// @brief Field m_MeshSpawnTimerPrev, offset: 0x54, size: 0x4, def value: None
  float_t m_MeshSpawnTimerPrev;

  /// @brief Field m_OrderedMeshVertexIndex, offset: 0x58, size: 0x4, def value: None
  int32_t m_OrderedMeshVertexIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x5c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ParticleSystem__PlaybackState__Shape, 0x5c>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Shape, m_Random) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Shape, m_RadiusTimer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Shape, m_RadiusTimerPrev) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Shape, m_ArcTimer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Shape, m_ArcTimerPrev) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Shape, m_MeshSpawnTimer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Shape, m_MeshSpawnTimerPrev) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Shape, m_OrderedMeshVertexIndex) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Force
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ParticleSystem::PlaybackState::Force
struct CORDL_TYPE __ParticleSystem__PlaybackState__Force {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__PlaybackState__Force();

  // Ctor Parameters [CppParam { name: "m_Random", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__PlaybackState__Force(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4 m_Random) noexcept;

  /// @brief Field m_Random, offset: 0x0, size: 0x40, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4 m_Random;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ParticleSystem__PlaybackState__Force, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Force, m_Random) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Collision
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ParticleSystem::PlaybackState::Collision
struct CORDL_TYPE __ParticleSystem__PlaybackState__Collision {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__PlaybackState__Collision();

  // Ctor Parameters [CppParam { name: "m_Random", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__PlaybackState__Collision(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4 m_Random) noexcept;

  /// @brief Field m_Random, offset: 0x0, size: 0x40, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4 m_Random;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ParticleSystem__PlaybackState__Collision, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Collision, m_Random) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Noise
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ParticleSystem::PlaybackState::Noise
struct CORDL_TYPE __ParticleSystem__PlaybackState__Noise {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__PlaybackState__Noise();

  // Ctor Parameters [CppParam { name: "m_ScrollOffset", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__PlaybackState__Noise(float_t m_ScrollOffset) noexcept;

  /// @brief Field m_ScrollOffset, offset: 0x0, size: 0x4, def value: None
  float_t m_ScrollOffset;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ParticleSystem__PlaybackState__Noise, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Noise, m_ScrollOffset) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Lights
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ParticleSystem::PlaybackState::Lights
struct CORDL_TYPE __ParticleSystem__PlaybackState__Lights {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__PlaybackState__Lights();

  // Ctor Parameters [CppParam { name: "m_Random", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed", modifiers: "", def_value: None }, CppParam { name: "m_ParticleEmissionCounter", ty:
  // "float_t", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__PlaybackState__Lights(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed m_Random, float_t m_ParticleEmissionCounter) noexcept;

  /// @brief Field m_Random, offset: 0x0, size: 0x10, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed m_Random;

  /// @brief Field m_ParticleEmissionCounter, offset: 0x10, size: 0x4, def value: None
  float_t m_ParticleEmissionCounter;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ParticleSystem__PlaybackState__Lights, 0x14>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Lights, m_Random) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Lights, m_ParticleEmissionCounter) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Trail
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ParticleSystem::PlaybackState::Trail
struct CORDL_TYPE __ParticleSystem__PlaybackState__Trail {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__PlaybackState__Trail();

  // Ctor Parameters [CppParam { name: "m_Timer", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__PlaybackState__Trail(float_t m_Timer) noexcept;

  /// @brief Field m_Timer, offset: 0x0, size: 0x4, def value: None
  float_t m_Timer;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ParticleSystem__PlaybackState__Trail, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystem__PlaybackState__Trail, m_Timer) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlaybackState
// SizeInfo { instance_size: 352, native_size: 352, calculated_instance_size: 352, calculated_native_size: 368, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::PlaybackState
struct CORDL_TYPE __ParticleSystem__PlaybackState {
public:
  // Declarations
  using Collision = ::GlobalNamespace::__ParticleSystem__PlaybackState__Collision;

  using Emission = ::GlobalNamespace::__ParticleSystem__PlaybackState__Emission;

  using Force = ::GlobalNamespace::__ParticleSystem__PlaybackState__Force;

  using Initial = ::GlobalNamespace::__ParticleSystem__PlaybackState__Initial;

  using Lights = ::GlobalNamespace::__ParticleSystem__PlaybackState__Lights;

  using Noise = ::GlobalNamespace::__ParticleSystem__PlaybackState__Noise;

  using Seed = ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed;

  using Seed4 = ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4;

  using Shape = ::GlobalNamespace::__ParticleSystem__PlaybackState__Shape;

  using Trail = ::GlobalNamespace::__ParticleSystem__PlaybackState__Trail;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__PlaybackState();

  // Ctor Parameters [CppParam { name: "m_AccumulatedDt", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_StartDelay", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_PlaybackTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_RingBufferIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Emission", ty:
  // "::GlobalNamespace::__ParticleSystem__PlaybackState__Emission", modifiers: "", def_value: None }, CppParam { name: "m_Initial", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Initial",
  // modifiers: "", def_value: None }, CppParam { name: "m_Shape", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Shape", modifiers: "", def_value: None }, CppParam { name: "m_Force", ty:
  // "::GlobalNamespace::__ParticleSystem__PlaybackState__Force", modifiers: "", def_value: None }, CppParam { name: "m_Collision", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Collision",
  // modifiers: "", def_value: None }, CppParam { name: "m_Noise", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Noise", modifiers: "", def_value: None }, CppParam { name: "m_Lights", ty:
  // "::GlobalNamespace::__ParticleSystem__PlaybackState__Lights", modifiers: "", def_value: None }, CppParam { name: "m_Trail", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Trail",
  // modifiers: "", def_value: None }]
  constexpr __ParticleSystem__PlaybackState(float_t m_AccumulatedDt, float_t m_StartDelay, float_t m_PlaybackTime, int32_t m_RingBufferIndex,
                                            ::GlobalNamespace::__ParticleSystem__PlaybackState__Emission m_Emission, ::GlobalNamespace::__ParticleSystem__PlaybackState__Initial m_Initial,
                                            ::GlobalNamespace::__ParticleSystem__PlaybackState__Shape m_Shape, ::GlobalNamespace::__ParticleSystem__PlaybackState__Force m_Force,
                                            ::GlobalNamespace::__ParticleSystem__PlaybackState__Collision m_Collision, ::GlobalNamespace::__ParticleSystem__PlaybackState__Noise m_Noise,
                                            ::GlobalNamespace::__ParticleSystem__PlaybackState__Lights m_Lights, ::GlobalNamespace::__ParticleSystem__PlaybackState__Trail m_Trail) noexcept;

  /// @brief Field m_AccumulatedDt, offset: 0x0, size: 0x4, def value: None
  float_t m_AccumulatedDt;

  /// @brief Field m_StartDelay, offset: 0x4, size: 0x4, def value: None
  float_t m_StartDelay;

  /// @brief Field m_PlaybackTime, offset: 0x8, size: 0x4, def value: None
  float_t m_PlaybackTime;

  /// @brief Field m_RingBufferIndex, offset: 0xc, size: 0x4, def value: None
  int32_t m_RingBufferIndex;

  /// @brief Field m_Emission, offset: 0x10, size: 0x18, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Emission m_Emission;

  /// @brief Field m_Initial, offset: 0x28, size: 0x40, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Initial m_Initial;

  /// @brief Field m_Shape, offset: 0x68, size: 0x5c, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Shape m_Shape;

  /// @brief Field m_Force, offset: 0xc4, size: 0x40, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Force m_Force;

  /// @brief Field m_Collision, offset: 0x104, size: 0x40, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Collision m_Collision;

  /// @brief Field m_Noise, offset: 0x144, size: 0x4, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Noise m_Noise;

  /// @brief Field m_Lights, offset: 0x148, size: 0x14, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Lights m_Lights;

  /// @brief Field m_Trail, offset: 0x15c, size: 0x4, def value: None
  ::GlobalNamespace::__ParticleSystem__PlaybackState__Trail m_Trail;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x160 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__PlaybackState, 0x160>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__PlaybackState, m_AccumulatedDt) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__PlaybackState, m_StartDelay) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__PlaybackState, m_PlaybackTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__PlaybackState, m_RingBufferIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__PlaybackState, m_Emission) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__PlaybackState, m_Initial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__PlaybackState, m_Shape) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__PlaybackState, m_Force) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__PlaybackState, m_Collision) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__PlaybackState, m_Noise) == 0x144, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__PlaybackState, m_Lights) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__PlaybackState, m_Trail) == 0x15c, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::Trails
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ParticleSystem::Trails
struct CORDL_TYPE __ParticleSystem__Trails {
public:
  // Declarations
  /// @brief Method Allocate, addr 0x345360c, size 0x118, virtual false, abstract: false, final false
  inline void Allocate();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__Trails();

  // Ctor Parameters [CppParam { name: "positions", ty: "::System::Collections::Generic::List_1<::UnityEngine::Vector4>*", modifiers: "", def_value: None }, CppParam { name: "frontPositions", ty:
  // "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "backPositions", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "",
  // def_value: None }, CppParam { name: "positionCounts", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "maxTrailCount", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "maxPositionsPerTrailCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__Trails(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* positions, ::System::Collections::Generic::List_1<int32_t>* frontPositions,
                                     ::System::Collections::Generic::List_1<int32_t>* backPositions, ::System::Collections::Generic::List_1<int32_t>* positionCounts, int32_t maxTrailCount,
                                     int32_t maxPositionsPerTrailCount) noexcept;

  /// @brief Field positions, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* positions;

  /// @brief Field frontPositions, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* frontPositions;

  /// @brief Field backPositions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* backPositions;

  /// @brief Field positionCounts, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* positionCounts;

  /// @brief Field maxTrailCount, offset: 0x20, size: 0x4, def value: None
  int32_t maxTrailCount;

  /// @brief Field maxPositionsPerTrailCount, offset: 0x24, size: 0x4, def value: None
  int32_t maxPositionsPerTrailCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__Trails, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Trails, positions) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Trails, frontPositions) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Trails, backPositions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Trails, positionCounts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Trails, maxTrailCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__Trails, maxPositionsPerTrailCount) == 0x24, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::ParticleSystem
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ParticleSystem*
class CORDL_TYPE ParticleSystem : public ::UnityEngine::Component {
public:
  // Declarations
  using CollisionModule = ::UnityEngine::__ParticleSystem__CollisionModule;

  using ColorBySpeedModule = ::UnityEngine::__ParticleSystem__ColorBySpeedModule;

  using ColorOverLifetimeModule = ::UnityEngine::__ParticleSystem__ColorOverLifetimeModule;

  using CustomDataModule = ::UnityEngine::__ParticleSystem__CustomDataModule;

  using EmissionModule = ::UnityEngine::__ParticleSystem__EmissionModule;

  using EmitParams = ::UnityEngine::__ParticleSystem__EmitParams;

  using ExternalForcesModule = ::UnityEngine::__ParticleSystem__ExternalForcesModule;

  using ForceOverLifetimeModule = ::UnityEngine::__ParticleSystem__ForceOverLifetimeModule;

  using InheritVelocityModule = ::UnityEngine::__ParticleSystem__InheritVelocityModule;

  using LifetimeByEmitterSpeedModule = ::UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule;

  using LightsModule = ::UnityEngine::__ParticleSystem__LightsModule;

  using LimitVelocityOverLifetimeModule = ::UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule;

  using MainModule = ::UnityEngine::__ParticleSystem__MainModule;

  using MinMaxCurve = ::UnityEngine::__ParticleSystem__MinMaxCurve;

  using MinMaxGradient = ::UnityEngine::__ParticleSystem__MinMaxGradient;

  using NoiseModule = ::UnityEngine::__ParticleSystem__NoiseModule;

  using Particle = ::UnityEngine::__ParticleSystem__Particle;

  using PlaybackState = ::UnityEngine::__ParticleSystem__PlaybackState;

  using RotationBySpeedModule = ::UnityEngine::__ParticleSystem__RotationBySpeedModule;

  using RotationOverLifetimeModule = ::UnityEngine::__ParticleSystem__RotationOverLifetimeModule;

  using ShapeModule = ::UnityEngine::__ParticleSystem__ShapeModule;

  using SizeBySpeedModule = ::UnityEngine::__ParticleSystem__SizeBySpeedModule;

  using SizeOverLifetimeModule = ::UnityEngine::__ParticleSystem__SizeOverLifetimeModule;

  using SubEmittersModule = ::UnityEngine::__ParticleSystem__SubEmittersModule;

  using TextureSheetAnimationModule = ::UnityEngine::__ParticleSystem__TextureSheetAnimationModule;

  using TrailModule = ::UnityEngine::__ParticleSystem__TrailModule;

  using Trails = ::UnityEngine::__ParticleSystem__Trails;

  using TriggerModule = ::UnityEngine::__ParticleSystem__TriggerModule;

  using VelocityOverLifetimeModule = ::UnityEngine::__ParticleSystem__VelocityOverLifetimeModule;

  __declspec(property(get = get_automaticCullingEnabled)) bool automaticCullingEnabled;

  __declspec(property(get = get_collision))::UnityEngine::__ParticleSystem__CollisionModule collision;

  __declspec(property(get = get_colorBySpeed))::UnityEngine::__ParticleSystem__ColorBySpeedModule colorBySpeed;

  __declspec(property(get = get_colorOverLifetime))::UnityEngine::__ParticleSystem__ColorOverLifetimeModule colorOverLifetime;

  __declspec(property(get = get_customData))::UnityEngine::__ParticleSystem__CustomDataModule customData;

  __declspec(property(get = get_duration)) float_t duration;

  __declspec(property(get = get_emission))::UnityEngine::__ParticleSystem__EmissionModule emission;

  __declspec(property(get = get_emissionRate, put = set_emissionRate)) float_t emissionRate;

  __declspec(property(get = get_enableEmission, put = set_enableEmission)) bool enableEmission;

  __declspec(property(get = get_externalForces))::UnityEngine::__ParticleSystem__ExternalForcesModule externalForces;

  __declspec(property(get = get_forceOverLifetime))::UnityEngine::__ParticleSystem__ForceOverLifetimeModule forceOverLifetime;

  __declspec(property(get = get_gravityModifier, put = set_gravityModifier)) float_t gravityModifier;

  __declspec(property(get = get_inheritVelocity))::UnityEngine::__ParticleSystem__InheritVelocityModule inheritVelocity;

  __declspec(property(get = get_isEmitting)) bool isEmitting;

  __declspec(property(get = get_isPaused)) bool isPaused;

  __declspec(property(get = get_isPlaying)) bool isPlaying;

  __declspec(property(get = get_isStopped)) bool isStopped;

  __declspec(property(get = get_lifetimeByEmitterSpeed))::UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule lifetimeByEmitterSpeed;

  __declspec(property(get = get_lights))::UnityEngine::__ParticleSystem__LightsModule lights;

  __declspec(property(get = get_limitVelocityOverLifetime))::UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule limitVelocityOverLifetime;

  __declspec(property(get = get_loop, put = set_loop)) bool loop;

  __declspec(property(get = get_main))::UnityEngine::__ParticleSystem__MainModule main;

  __declspec(property(get = get_maxParticles, put = set_maxParticles)) int32_t maxParticles;

  __declspec(property(get = get_noise))::UnityEngine::__ParticleSystem__NoiseModule noise;

  __declspec(property(get = get_particleCount)) int32_t particleCount;

  __declspec(property(get = get_playOnAwake, put = set_playOnAwake)) bool playOnAwake;

  __declspec(property(get = get_playbackSpeed, put = set_playbackSpeed)) float_t playbackSpeed;

  __declspec(property(get = get_proceduralSimulationSupported)) bool proceduralSimulationSupported;

  __declspec(property(get = get_randomSeed, put = set_randomSeed)) uint32_t randomSeed;

  __declspec(property(get = get_rotationBySpeed))::UnityEngine::__ParticleSystem__RotationBySpeedModule rotationBySpeed;

  __declspec(property(get = get_rotationOverLifetime))::UnityEngine::__ParticleSystem__RotationOverLifetimeModule rotationOverLifetime;

  __declspec(property(get = get_scalingMode, put = set_scalingMode))::UnityEngine::ParticleSystemScalingMode scalingMode;

  __declspec(property(get = get_shape))::UnityEngine::__ParticleSystem__ShapeModule shape;

  __declspec(property(get = get_simulationSpace, put = set_simulationSpace))::UnityEngine::ParticleSystemSimulationSpace simulationSpace;

  __declspec(property(get = get_sizeBySpeed))::UnityEngine::__ParticleSystem__SizeBySpeedModule sizeBySpeed;

  __declspec(property(get = get_sizeOverLifetime))::UnityEngine::__ParticleSystem__SizeOverLifetimeModule sizeOverLifetime;

  __declspec(property(get = get_startColor, put = set_startColor))::UnityEngine::Color startColor;

  __declspec(property(get = get_startDelay, put = set_startDelay)) float_t startDelay;

  __declspec(property(get = get_startLifetime, put = set_startLifetime)) float_t startLifetime;

  __declspec(property(get = get_startRotation, put = set_startRotation)) float_t startRotation;

  __declspec(property(get = get_startRotation3D, put = set_startRotation3D))::UnityEngine::Vector3 startRotation3D;

  __declspec(property(get = get_startSize, put = set_startSize)) float_t startSize;

  __declspec(property(get = get_startSpeed, put = set_startSpeed)) float_t startSpeed;

  __declspec(property(get = get_subEmitters))::UnityEngine::__ParticleSystem__SubEmittersModule subEmitters;

  __declspec(property(get = get_textureSheetAnimation))::UnityEngine::__ParticleSystem__TextureSheetAnimationModule textureSheetAnimation;

  __declspec(property(get = get_time, put = set_time)) float_t time;

  __declspec(property(get = get_trails))::UnityEngine::__ParticleSystem__TrailModule trails;

  __declspec(property(get = get_trigger))::UnityEngine::__ParticleSystem__TriggerModule trigger;

  __declspec(property(get = get_useAutoRandomSeed, put = set_useAutoRandomSeed)) bool useAutoRandomSeed;

  __declspec(property(get = get_velocityOverLifetime))::UnityEngine::__ParticleSystem__VelocityOverLifetimeModule velocityOverLifetime;

  /// @brief Method AllocateAxisOfRotationAttribute, addr 0x3454030, size 0x3c, virtual false, abstract: false, final false
  inline void AllocateAxisOfRotationAttribute();

  /// @brief Method AllocateCustomDataAttribute, addr 0x34540a8, size 0x44, virtual false, abstract: false, final false
  inline void AllocateCustomDataAttribute(::UnityEngine::ParticleSystemCustomData stream);

  /// @brief Method AllocateMeshIndexAttribute, addr 0x345406c, size 0x3c, virtual false, abstract: false, final false
  inline void AllocateMeshIndexAttribute();

  /// @brief Method Clear, addr 0x3453be0, size 0x40, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clear, addr 0x3453b9c, size 0x44, virtual false, abstract: false, final false
  inline void Clear(bool withChildren);

  /// @brief Method CopyManagedJobData, addr 0x3454304, size 0x44, virtual false, abstract: false, final false
  static inline void CopyManagedJobData(::cordl_internals::Ptr<void> systemPtr, ByRef<::UnityEngine::ParticleSystemJobs::NativeParticleData> particleData);

  /// @brief Method Emit, addr 0x3453ca4, size 0x44, virtual false, abstract: false, final false
  inline void Emit(int32_t count);

  /// @brief Method Emit, addr 0x3453d2c, size 0x54, virtual false, abstract: false, final false
  inline void Emit(::UnityEngine::__ParticleSystem__EmitParams emitParams, int32_t count);

  /// @brief Method Emit, addr 0x34545fc, size 0x44, virtual false, abstract: false, final false
  inline void Emit(::UnityEngine::__ParticleSystem__Particle particle);

  /// @brief Method Emit, addr 0x345445c, size 0x104, virtual false, abstract: false, final false
  inline void Emit(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 velocity, float_t size, float_t lifetime, ::UnityEngine::Color32 color);

  /// @brief Method EmitOld_Internal, addr 0x3453dd4, size 0x44, virtual false, abstract: false, final false
  inline void EmitOld_Internal(ByRef<::UnityEngine::__ParticleSystem__Particle> particle);

  /// @brief Method Emit_Injected, addr 0x3453d80, size 0x54, virtual false, abstract: false, final false
  inline void Emit_Injected(ByRef<::UnityEngine::__ParticleSystem__EmitParams> emitParams, int32_t count);

  /// @brief Method Emit_Internal, addr 0x3453ce8, size 0x44, virtual false, abstract: false, final false
  inline void Emit_Internal(int32_t count);

  /// @brief Method GetCustomParticleData, addr 0x34533bc, size 0x54, virtual false, abstract: false, final false
  inline int32_t GetCustomParticleData(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* customData, ::UnityEngine::ParticleSystemCustomData streamIndex);

  /// @brief Method GetManagedJobData, addr 0x34540ec, size 0x3c, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> GetManagedJobData();

  /// @brief Method GetManagedJobHandle, addr 0x3454128, size 0x54, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle GetManagedJobHandle();

  /// @brief Method GetManagedJobHandle_Injected, addr 0x345417c, size 0x44, virtual false, abstract: false, final false
  inline void GetManagedJobHandle_Injected(ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method GetParticleCurrentColor, addr 0x3452e14, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 GetParticleCurrentColor(ByRef<::UnityEngine::__ParticleSystem__Particle> particle);

  /// @brief Method GetParticleCurrentColor_Injected, addr 0x3452e70, size 0x54, virtual false, abstract: false, final false
  inline void GetParticleCurrentColor_Injected(ByRef<::UnityEngine::__ParticleSystem__Particle> particle, ByRef<::UnityEngine::Color32> ret);

  /// @brief Method GetParticleCurrentSize, addr 0x3452d18, size 0x44, virtual false, abstract: false, final false
  inline float_t GetParticleCurrentSize(ByRef<::UnityEngine::__ParticleSystem__Particle> particle);

  /// @brief Method GetParticleCurrentSize3D, addr 0x3452d5c, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetParticleCurrentSize3D(ByRef<::UnityEngine::__ParticleSystem__Particle> particle);

  /// @brief Method GetParticleCurrentSize3D_Injected, addr 0x3452dc0, size 0x54, virtual false, abstract: false, final false
  inline void GetParticleCurrentSize3D_Injected(ByRef<::UnityEngine::__ParticleSystem__Particle> particle, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetParticleMeshIndex, addr 0x3452ec4, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetParticleMeshIndex(ByRef<::UnityEngine::__ParticleSystem__Particle> particle);

  /// @brief Method GetParticles, addr 0x34531ec, size 0x4c, virtual false, abstract: false, final false
  inline int32_t GetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles);

  /// @brief Method GetParticles, addr 0x3453194, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles, int32_t size);

  /// @brief Method GetParticles, addr 0x3453138, size 0x5c, virtual false, abstract: false, final false
  inline int32_t GetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles, int32_t size, int32_t offset);

  /// @brief Method GetParticles, addr 0x345335c, size 0xc, virtual false, abstract: false, final false
  inline int32_t GetParticles(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>> particles);

  /// @brief Method GetParticles, addr 0x3453354, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetParticles(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>> particles, int32_t size);

  /// @brief Method GetParticles, addr 0x34532a4, size 0xb0, virtual false, abstract: false, final false
  inline int32_t GetParticles(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>> particles, int32_t size, int32_t offset);

  /// @brief Method GetParticlesWithNativeArray, addr 0x3453238, size 0x6c, virtual false, abstract: false, final false
  inline int32_t GetParticlesWithNativeArray(void* particles, int32_t particlesLength, int32_t size, int32_t offset);

  /// @brief Method GetPlaybackState, addr 0x3453410, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__PlaybackState GetPlaybackState();

  /// @brief Method GetPlaybackState_Injected, addr 0x3453488, size 0x44, virtual false, abstract: false, final false
  inline void GetPlaybackState_Injected(ByRef<::UnityEngine::__ParticleSystem__PlaybackState> ret);

  /// @brief Method GetTrailDataInternal, addr 0x3453554, size 0x44, virtual false, abstract: false, final false
  inline void GetTrailDataInternal(ByRef<::UnityEngine::__ParticleSystem__Trails> trailData);

  /// @brief Method GetTrails, addr 0x3453598, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__Trails GetTrails();

  /// @brief Method GetTrails, addr 0x3453724, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetTrails(ByRef<::UnityEngine::__ParticleSystem__Trails> trailData);

  /// @brief Method IsAlive, addr 0x3453c64, size 0x40, virtual false, abstract: false, final false
  inline bool IsAlive();

  /// @brief Method IsAlive, addr 0x3453c20, size 0x44, virtual false, abstract: false, final false
  inline bool IsAlive(bool withChildren);

  static inline ::UnityEngine::ParticleSystem* New_ctor();

  /// @brief Method Pause, addr 0x3453a7c, size 0x40, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Pause, addr 0x3453a38, size 0x44, virtual false, abstract: false, final false
  inline void Pause(bool withChildren);

  /// @brief Method Play, addr 0x34539f8, size 0x40, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Play, addr 0x34539b4, size 0x44, virtual false, abstract: false, final false
  inline void Play(bool withChildren);

  /// @brief Method ResetPreMappedBufferMemory, addr 0x3453fc4, size 0x28, virtual false, abstract: false, final false
  static inline void ResetPreMappedBufferMemory();

  /// @brief Method ScheduleManagedJob, addr 0x3454254, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleManagedJob(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> additionalData);

  /// @brief Method ScheduleManagedJob_Injected, addr 0x34542b0, size 0x54, virtual false, abstract: false, final false
  static inline void ScheduleManagedJob_Injected(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> additionalData,
                                                 ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method SetCustomParticleData, addr 0x3453368, size 0x54, virtual false, abstract: false, final false
  inline void SetCustomParticleData(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* customData, ::UnityEngine::ParticleSystemCustomData streamIndex);

  /// @brief Method SetManagedJobHandle, addr 0x34541c0, size 0x50, virtual false, abstract: false, final false
  inline void SetManagedJobHandle(::Unity::Jobs::JobHandle handle);

  /// @brief Method SetManagedJobHandle_Injected, addr 0x3454210, size 0x44, virtual false, abstract: false, final false
  inline void SetManagedJobHandle_Injected(ByRef<::Unity::Jobs::JobHandle> handle);

  /// @brief Method SetMaximumPreMappedBufferCounts, addr 0x3453fec, size 0x44, virtual false, abstract: false, final false
  static inline void SetMaximumPreMappedBufferCounts(int32_t vertexBuffersCount, int32_t indexBuffersCount);

  /// @brief Method SetParticles, addr 0x3452fbc, size 0x4c, virtual false, abstract: false, final false
  inline void SetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles);

  /// @brief Method SetParticles, addr 0x3452f64, size 0x58, virtual false, abstract: false, final false
  inline void SetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles, int32_t size);

  /// @brief Method SetParticles, addr 0x3452f08, size 0x5c, virtual false, abstract: false, final false
  inline void SetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles, int32_t size, int32_t offset);

  /// @brief Method SetParticles, addr 0x345312c, size 0xc, virtual false, abstract: false, final false
  inline void SetParticles(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>> particles);

  /// @brief Method SetParticles, addr 0x3453124, size 0x8, virtual false, abstract: false, final false
  inline void SetParticles(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>> particles, int32_t size);

  /// @brief Method SetParticles, addr 0x3453074, size 0xb0, virtual false, abstract: false, final false
  inline void SetParticles(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>> particles, int32_t size, int32_t offset);

  /// @brief Method SetParticlesWithNativeArray, addr 0x3453008, size 0x6c, virtual false, abstract: false, final false
  inline void SetParticlesWithNativeArray(void* particles, int32_t particlesLength, int32_t size, int32_t offset);

  /// @brief Method SetPlaybackState, addr 0x34534cc, size 0x44, virtual false, abstract: false, final false
  inline void SetPlaybackState(::UnityEngine::__ParticleSystem__PlaybackState playbackState);

  /// @brief Method SetPlaybackState_Injected, addr 0x3453510, size 0x44, virtual false, abstract: false, final false
  inline void SetPlaybackState_Injected(ByRef<::UnityEngine::__ParticleSystem__PlaybackState> playbackState);

  /// @brief Method SetTrails, addr 0x34537a4, size 0x44, virtual false, abstract: false, final false
  inline void SetTrails(::UnityEngine::__ParticleSystem__Trails trailData);

  /// @brief Method SetTrails_Injected, addr 0x34537e8, size 0x44, virtual false, abstract: false, final false
  inline void SetTrails_Injected(ByRef<::UnityEngine::__ParticleSystem__Trails> trailData);

  /// @brief Method Simulate, addr 0x345395c, size 0x58, virtual false, abstract: false, final false
  inline void Simulate(float_t t);

  /// @brief Method Simulate, addr 0x3453900, size 0x5c, virtual false, abstract: false, final false
  inline void Simulate(float_t t, bool withChildren);

  /// @brief Method Simulate, addr 0x3453898, size 0x68, virtual false, abstract: false, final false
  inline void Simulate(float_t t, bool withChildren, bool restart);

  /// @brief Method Simulate, addr 0x345382c, size 0x6c, virtual false, abstract: false, final false
  inline void Simulate(float_t t, bool withChildren, bool restart, bool fixedTimeStep);

  /// @brief Method Stop, addr 0x3453b58, size 0x44, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Stop, addr 0x3453b10, size 0x48, virtual false, abstract: false, final false
  inline void Stop(bool withChildren);

  /// @brief Method Stop, addr 0x3453abc, size 0x54, virtual false, abstract: false, final false
  inline void Stop(bool withChildren, ::UnityEngine::ParticleSystemStopBehavior stopBehavior);

  /// @brief Method TriggerSubEmitter, addr 0x3453e18, size 0x48, virtual false, abstract: false, final false
  inline void TriggerSubEmitter(int32_t subEmitterIndex);

  /// @brief Method TriggerSubEmitter, addr 0x3453eb4, size 0x68, virtual false, abstract: false, final false
  inline void TriggerSubEmitter(int32_t subEmitterIndex, ByRef<::UnityEngine::__ParticleSystem__Particle> particle);

  /// @brief Method TriggerSubEmitter, addr 0x3453e60, size 0x54, virtual false, abstract: false, final false
  inline void TriggerSubEmitter(int32_t subEmitterIndex, ::System::Collections::Generic::List_1<::UnityEngine::__ParticleSystem__Particle>* particles);

  /// @brief Method TriggerSubEmitterForParticle, addr 0x3453f1c, size 0x54, virtual false, abstract: false, final false
  inline void TriggerSubEmitterForParticle(int32_t subEmitterIndex, ::UnityEngine::__ParticleSystem__Particle particle);

  /// @brief Method TriggerSubEmitterForParticle_Injected, addr 0x3453f70, size 0x54, virtual false, abstract: false, final false
  inline void TriggerSubEmitterForParticle_Injected(int32_t subEmitterIndex, ByRef<::UnityEngine::__ParticleSystem__Particle> particle);

  /// @brief Method .ctor, addr 0x3455a64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_automaticCullingEnabled, addr 0x3455a28, size 0x3c, virtual false, abstract: false, final false
  inline bool get_automaticCullingEnabled();

  /// @brief Method get_collision, addr 0x3454408, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__CollisionModule get_collision();

  /// @brief Method get_colorBySpeed, addr 0x34543b4, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__ColorBySpeedModule get_colorBySpeed();

  /// @brief Method get_colorOverLifetime, addr 0x34543a8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__ColorOverLifetimeModule get_colorOverLifetime();

  /// @brief Method get_customData, addr 0x3454450, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__CustomDataModule get_customData();

  /// @brief Method get_duration, addr 0x3454968, size 0x40, virtual false, abstract: false, final false
  inline float_t get_duration();

  /// @brief Method get_emission, addr 0x3454354, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__EmissionModule get_emission();

  /// @brief Method get_emissionRate, addr 0x3454c00, size 0x40, virtual false, abstract: false, final false
  inline float_t get_emissionRate();

  /// @brief Method get_enableEmission, addr 0x3454af4, size 0x44, virtual false, abstract: false, final false
  inline bool get_enableEmission();

  /// @brief Method get_externalForces, addr 0x34543f0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__ExternalForcesModule get_externalForces();

  /// @brief Method get_forceOverLifetime, addr 0x345439c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__ForceOverLifetimeModule get_forceOverLifetime();

  /// @brief Method get_gravityModifier, addr 0x3455600, size 0x40, virtual false, abstract: false, final false
  inline float_t get_gravityModifier();

  /// @brief Method get_inheritVelocity, addr 0x3454384, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__InheritVelocityModule get_inheritVelocity();

  /// @brief Method get_isEmitting, addr 0x3452a64, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isEmitting();

  /// @brief Method get_isPaused, addr 0x3452adc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPaused();

  /// @brief Method get_isPlaying, addr 0x3452a28, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method get_isStopped, addr 0x3452aa0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isStopped();

  /// @brief Method get_lifetimeByEmitterSpeed, addr 0x3454390, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule get_lifetimeByEmitterSpeed();

  /// @brief Method get_lights, addr 0x3454438, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__LightsModule get_lights();

  /// @brief Method get_limitVelocityOverLifetime, addr 0x3454378, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule get_limitVelocityOverLifetime();

  /// @brief Method get_loop, addr 0x3454750, size 0x44, virtual false, abstract: false, final false
  inline bool get_loop();

  /// @brief Method get_main, addr 0x3454348, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__MainModule get_main();

  /// @brief Method get_maxParticles, addr 0x3455710, size 0x40, virtual false, abstract: false, final false
  inline int32_t get_maxParticles();

  /// @brief Method get_noise, addr 0x34543fc, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__NoiseModule get_noise();

  /// @brief Method get_particleCount, addr 0x3452b18, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_particleCount();

  /// @brief Method get_playOnAwake, addr 0x345485c, size 0x44, virtual false, abstract: false, final false
  inline bool get_playOnAwake();

  /// @brief Method get_playbackSpeed, addr 0x34549e4, size 0x40, virtual false, abstract: false, final false
  inline float_t get_playbackSpeed();

  /// @brief Method get_proceduralSimulationSupported, addr 0x3452cdc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_proceduralSimulationSupported();

  /// @brief Method get_randomSeed, addr 0x3452bdc, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_randomSeed();

  /// @brief Method get_rotationBySpeed, addr 0x34543e4, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__RotationBySpeedModule get_rotationBySpeed();

  /// @brief Method get_rotationOverLifetime, addr 0x34543d8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__RotationOverLifetimeModule get_rotationOverLifetime();

  /// @brief Method get_scalingMode, addr 0x3455920, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemScalingMode get_scalingMode();

  /// @brief Method get_shape, addr 0x3454360, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__ShapeModule get_shape();

  /// @brief Method get_simulationSpace, addr 0x3455818, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemSimulationSpace get_simulationSpace();

  /// @brief Method get_sizeBySpeed, addr 0x34543cc, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__SizeBySpeedModule get_sizeBySpeed();

  /// @brief Method get_sizeOverLifetime, addr 0x34543c0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__SizeOverLifetimeModule get_sizeOverLifetime();

  /// @brief Method get_startColor, addr 0x3454f48, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_startColor();

  /// @brief Method get_startDelay, addr 0x3454640, size 0x40, virtual false, abstract: false, final false
  inline float_t get_startDelay();

  /// @brief Method get_startLifetime, addr 0x34554f0, size 0x40, virtual false, abstract: false, final false
  inline float_t get_startLifetime();

  /// @brief Method get_startRotation, addr 0x34550e4, size 0x40, virtual false, abstract: false, final false
  inline float_t get_startRotation();

  /// @brief Method get_startRotation3D, addr 0x34551f4, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_startRotation3D();

  /// @brief Method get_startSize, addr 0x3454e38, size 0x40, virtual false, abstract: false, final false
  inline float_t get_startSize();

  /// @brief Method get_startSpeed, addr 0x3454d28, size 0x40, virtual false, abstract: false, final false
  inline float_t get_startSpeed();

  /// @brief Method get_subEmitters, addr 0x3454420, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__SubEmittersModule get_subEmitters();

  /// @brief Method get_textureSheetAnimation, addr 0x345442c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__TextureSheetAnimationModule get_textureSheetAnimation();

  /// @brief Method get_time, addr 0x3452b54, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method get_trails, addr 0x3454444, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__TrailModule get_trails();

  /// @brief Method get_trigger, addr 0x3454414, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__TriggerModule get_trigger();

  /// @brief Method get_useAutoRandomSeed, addr 0x3452c5c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useAutoRandomSeed();

  /// @brief Method get_velocityOverLifetime, addr 0x345436c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__VelocityOverLifetimeModule get_velocityOverLifetime();

  /// @brief Method set_emissionRate, addr 0x3454c7c, size 0x54, virtual false, abstract: false, final false
  inline void set_emissionRate(float_t value);

  /// @brief Method set_enableEmission, addr 0x3454b74, size 0x48, virtual false, abstract: false, final false
  inline void set_enableEmission(bool value);

  /// @brief Method set_gravityModifier, addr 0x345567c, size 0x48, virtual false, abstract: false, final false
  inline void set_gravityModifier(float_t value);

  /// @brief Method set_loop, addr 0x34547d0, size 0x48, virtual false, abstract: false, final false
  inline void set_loop(bool value);

  /// @brief Method set_maxParticles, addr 0x345578c, size 0x48, virtual false, abstract: false, final false
  inline void set_maxParticles(int32_t value);

  /// @brief Method set_playOnAwake, addr 0x34548dc, size 0x48, virtual false, abstract: false, final false
  inline void set_playOnAwake(bool value);

  /// @brief Method set_playbackSpeed, addr 0x3454a60, size 0x48, virtual false, abstract: false, final false
  inline void set_playbackSpeed(float_t value);

  /// @brief Method set_randomSeed, addr 0x3452c18, size 0x44, virtual false, abstract: false, final false
  inline void set_randomSeed(uint32_t value);

  /// @brief Method set_scalingMode, addr 0x345599c, size 0x48, virtual false, abstract: false, final false
  inline void set_scalingMode(::UnityEngine::ParticleSystemScalingMode value);

  /// @brief Method set_simulationSpace, addr 0x3455894, size 0x48, virtual false, abstract: false, final false
  inline void set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace value);

  /// @brief Method set_startColor, addr 0x3455028, size 0x5c, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::Color value);

  /// @brief Method set_startDelay, addr 0x34546bc, size 0x48, virtual false, abstract: false, final false
  inline void set_startDelay(float_t value);

  /// @brief Method set_startLifetime, addr 0x345556c, size 0x48, virtual false, abstract: false, final false
  inline void set_startLifetime(float_t value);

  /// @brief Method set_startRotation, addr 0x3455160, size 0x48, virtual false, abstract: false, final false
  inline void set_startRotation(float_t value);

  /// @brief Method set_startRotation3D, addr 0x345535c, size 0xb0, virtual false, abstract: false, final false
  inline void set_startRotation3D(::UnityEngine::Vector3 value);

  /// @brief Method set_startSize, addr 0x3454eb4, size 0x48, virtual false, abstract: false, final false
  inline void set_startSize(float_t value);

  /// @brief Method set_startSpeed, addr 0x3454da4, size 0x48, virtual false, abstract: false, final false
  inline void set_startSpeed(float_t value);

  /// @brief Method set_time, addr 0x3452b90, size 0x4c, virtual false, abstract: false, final false
  inline void set_time(float_t value);

  /// @brief Method set_useAutoRandomSeed, addr 0x3452c98, size 0x44, virtual false, abstract: false, final false
  inline void set_useAutoRandomSeed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystem(ParticleSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystem(ParticleSystem const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ParticleSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem*, "UnityEngine", "ParticleSystem");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ParticleSystem__PlaybackState__Collision, "UnityEngine", "ParticleSystem/PlaybackState/Collision");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ParticleSystem__PlaybackState__Emission, "UnityEngine", "ParticleSystem/PlaybackState/Emission");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ParticleSystem__PlaybackState__Force, "UnityEngine", "ParticleSystem/PlaybackState/Force");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ParticleSystem__PlaybackState__Initial, "UnityEngine", "ParticleSystem/PlaybackState/Initial");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ParticleSystem__PlaybackState__Lights, "UnityEngine", "ParticleSystem/PlaybackState/Lights");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ParticleSystem__PlaybackState__Noise, "UnityEngine", "ParticleSystem/PlaybackState/Noise");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed, "UnityEngine", "ParticleSystem/PlaybackState/Seed");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4, "UnityEngine", "ParticleSystem/PlaybackState/Seed4");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ParticleSystem__PlaybackState__Shape, "UnityEngine", "ParticleSystem/PlaybackState/Shape");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ParticleSystem__PlaybackState__Trail, "UnityEngine", "ParticleSystem/PlaybackState/Trail");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__CollisionModule, "UnityEngine", "ParticleSystem/CollisionModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__ColorBySpeedModule, "UnityEngine", "ParticleSystem/ColorBySpeedModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__ColorOverLifetimeModule, "UnityEngine", "ParticleSystem/ColorOverLifetimeModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__CustomDataModule, "UnityEngine", "ParticleSystem/CustomDataModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__EmissionModule, "UnityEngine", "ParticleSystem/EmissionModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__EmitParams, "UnityEngine", "ParticleSystem/EmitParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__ExternalForcesModule, "UnityEngine", "ParticleSystem/ExternalForcesModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__ForceOverLifetimeModule, "UnityEngine", "ParticleSystem/ForceOverLifetimeModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__InheritVelocityModule, "UnityEngine", "ParticleSystem/InheritVelocityModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule, "UnityEngine", "ParticleSystem/LifetimeByEmitterSpeedModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__LightsModule, "UnityEngine", "ParticleSystem/LightsModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule, "UnityEngine", "ParticleSystem/LimitVelocityOverLifetimeModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__MainModule, "UnityEngine", "ParticleSystem/MainModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__MinMaxCurve, "UnityEngine", "ParticleSystem/MinMaxCurve");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__MinMaxGradient, "UnityEngine", "ParticleSystem/MinMaxGradient");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__NoiseModule, "UnityEngine", "ParticleSystem/NoiseModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__Particle, "UnityEngine", "ParticleSystem/Particle");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__PlaybackState, "UnityEngine", "ParticleSystem/PlaybackState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__RotationBySpeedModule, "UnityEngine", "ParticleSystem/RotationBySpeedModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__RotationOverLifetimeModule, "UnityEngine", "ParticleSystem/RotationOverLifetimeModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__ShapeModule, "UnityEngine", "ParticleSystem/ShapeModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__SizeBySpeedModule, "UnityEngine", "ParticleSystem/SizeBySpeedModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__SizeOverLifetimeModule, "UnityEngine", "ParticleSystem/SizeOverLifetimeModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__SubEmittersModule, "UnityEngine", "ParticleSystem/SubEmittersModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__TextureSheetAnimationModule, "UnityEngine", "ParticleSystem/TextureSheetAnimationModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__TrailModule, "UnityEngine", "ParticleSystem/TrailModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__Trails, "UnityEngine", "ParticleSystem/Trails");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__TriggerModule, "UnityEngine", "ParticleSystem/TriggerModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__VelocityOverLifetimeModule, "UnityEngine", "ParticleSystem/VelocityOverLifetimeModule");
