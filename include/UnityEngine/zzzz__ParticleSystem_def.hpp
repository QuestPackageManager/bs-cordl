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
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystem)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobsUtility_JobScheduleParameters;
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
struct ParticleSystemCustomData;
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
struct ParticleSystem_CollisionModule;
}
namespace UnityEngine {
struct ParticleSystem_ColorBySpeedModule;
}
namespace UnityEngine {
struct ParticleSystem_ColorOverLifetimeModule;
}
namespace UnityEngine {
struct ParticleSystem_CustomDataModule;
}
namespace UnityEngine {
struct ParticleSystem_EmissionModule;
}
namespace UnityEngine {
struct ParticleSystem_EmitParams;
}
namespace UnityEngine {
struct ParticleSystem_ExternalForcesModule;
}
namespace UnityEngine {
struct ParticleSystem_ForceOverLifetimeModule;
}
namespace UnityEngine {
struct ParticleSystem_InheritVelocityModule;
}
namespace UnityEngine {
struct ParticleSystem_LifetimeByEmitterSpeedModule;
}
namespace UnityEngine {
struct ParticleSystem_LightsModule;
}
namespace UnityEngine {
struct ParticleSystem_LimitVelocityOverLifetimeModule;
}
namespace UnityEngine {
struct ParticleSystem_MainModule;
}
namespace UnityEngine {
struct ParticleSystem_MinMaxCurve;
}
namespace UnityEngine {
struct ParticleSystem_MinMaxGradient;
}
namespace UnityEngine {
struct ParticleSystem_NoiseModule;
}
namespace UnityEngine {
struct ParticleSystem_Particle;
}
namespace UnityEngine {
struct ParticleSystem_PlaybackState;
}
namespace UnityEngine {
struct ParticleSystem_RotationBySpeedModule;
}
namespace UnityEngine {
struct ParticleSystem_RotationOverLifetimeModule;
}
namespace UnityEngine {
struct ParticleSystem_ShapeModule;
}
namespace UnityEngine {
struct ParticleSystem_SizeBySpeedModule;
}
namespace UnityEngine {
struct ParticleSystem_SizeOverLifetimeModule;
}
namespace UnityEngine {
struct ParticleSystem_SubEmittersModule;
}
namespace UnityEngine {
struct ParticleSystem_TextureSheetAnimationModule;
}
namespace UnityEngine {
struct ParticleSystem_TrailModule;
}
namespace UnityEngine {
struct ParticleSystem_Trails;
}
namespace UnityEngine {
struct ParticleSystem_TriggerModule;
}
namespace UnityEngine {
struct ParticleSystem_VelocityOverLifetimeModule;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Collision;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Emission;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Force;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Initial;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Lights;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Noise;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Seed4;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Seed;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Shape;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Trail;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct ParticleSystem_CollisionModule;
}
namespace UnityEngine {
struct ParticleSystem_ColorBySpeedModule;
}
namespace UnityEngine {
struct ParticleSystem_ColorOverLifetimeModule;
}
namespace UnityEngine {
struct ParticleSystem_CustomDataModule;
}
namespace UnityEngine {
struct ParticleSystem_EmissionModule;
}
namespace UnityEngine {
struct ParticleSystem_EmitParams;
}
namespace UnityEngine {
struct ParticleSystem_ExternalForcesModule;
}
namespace UnityEngine {
struct ParticleSystem_ForceOverLifetimeModule;
}
namespace UnityEngine {
struct ParticleSystem_InheritVelocityModule;
}
namespace UnityEngine {
struct ParticleSystem_LifetimeByEmitterSpeedModule;
}
namespace UnityEngine {
struct ParticleSystem_LightsModule;
}
namespace UnityEngine {
struct ParticleSystem_LimitVelocityOverLifetimeModule;
}
namespace UnityEngine {
struct ParticleSystem_MainModule;
}
namespace UnityEngine {
struct ParticleSystem_MinMaxCurve;
}
namespace UnityEngine {
struct ParticleSystem_MinMaxGradient;
}
namespace UnityEngine {
struct ParticleSystem_NoiseModule;
}
namespace UnityEngine {
struct ParticleSystem_Particle;
}
namespace UnityEngine {
struct ParticleSystem_PlaybackState;
}
namespace UnityEngine {
struct ParticleSystem_RotationBySpeedModule;
}
namespace UnityEngine {
struct ParticleSystem_RotationOverLifetimeModule;
}
namespace UnityEngine {
struct ParticleSystem_ShapeModule;
}
namespace UnityEngine {
struct ParticleSystem_SizeBySpeedModule;
}
namespace UnityEngine {
struct ParticleSystem_SizeOverLifetimeModule;
}
namespace UnityEngine {
struct ParticleSystem_SubEmittersModule;
}
namespace UnityEngine {
struct ParticleSystem_TextureSheetAnimationModule;
}
namespace UnityEngine {
struct ParticleSystem_TrailModule;
}
namespace UnityEngine {
struct ParticleSystem_Trails;
}
namespace UnityEngine {
struct ParticleSystem_TriggerModule;
}
namespace UnityEngine {
struct ParticleSystem_VelocityOverLifetimeModule;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Collision;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Emission;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Force;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Initial;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Lights;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Noise;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Seed;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Seed4;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Shape;
}
namespace UnityEngine {
struct PlaybackState_ParticleSystem_Trail;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ParticleSystem);
MARK_VAL_T(::UnityEngine::ParticleSystem_CollisionModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_ColorBySpeedModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_ColorOverLifetimeModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_CustomDataModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_EmissionModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_EmitParams);
MARK_VAL_T(::UnityEngine::ParticleSystem_ExternalForcesModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_ForceOverLifetimeModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_InheritVelocityModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_LightsModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_MainModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_MinMaxCurve);
MARK_VAL_T(::UnityEngine::ParticleSystem_MinMaxGradient);
MARK_VAL_T(::UnityEngine::ParticleSystem_NoiseModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_Particle);
MARK_VAL_T(::UnityEngine::ParticleSystem_PlaybackState);
MARK_VAL_T(::UnityEngine::ParticleSystem_RotationBySpeedModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_RotationOverLifetimeModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_ShapeModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_SizeBySpeedModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_SizeOverLifetimeModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_SubEmittersModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_TextureSheetAnimationModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_TrailModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_Trails);
MARK_VAL_T(::UnityEngine::ParticleSystem_TriggerModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule);
MARK_VAL_T(::UnityEngine::PlaybackState_ParticleSystem_Collision);
MARK_VAL_T(::UnityEngine::PlaybackState_ParticleSystem_Emission);
MARK_VAL_T(::UnityEngine::PlaybackState_ParticleSystem_Force);
MARK_VAL_T(::UnityEngine::PlaybackState_ParticleSystem_Initial);
MARK_VAL_T(::UnityEngine::PlaybackState_ParticleSystem_Lights);
MARK_VAL_T(::UnityEngine::PlaybackState_ParticleSystem_Noise);
MARK_VAL_T(::UnityEngine::PlaybackState_ParticleSystem_Seed);
MARK_VAL_T(::UnityEngine::PlaybackState_ParticleSystem_Seed4);
MARK_VAL_T(::UnityEngine::PlaybackState_ParticleSystem_Shape);
MARK_VAL_T(::UnityEngine::PlaybackState_ParticleSystem_Trail);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/MainModule
struct CORDL_TYPE ParticleSystem_MainModule {
public:
  // Declarations
  __declspec(property(get = get_duration)) float_t duration;

  __declspec(property(get = get_gravityModifierMultiplier, put = set_gravityModifierMultiplier)) float_t gravityModifierMultiplier;

  __declspec(property(get = get_loop, put = set_loop)) bool loop;

  __declspec(property(get = get_maxParticles, put = set_maxParticles)) int32_t maxParticles;

  __declspec(property(get = get_playOnAwake, put = set_playOnAwake)) bool playOnAwake;

  __declspec(property(get = get_scalingMode, put = set_scalingMode)) ::UnityEngine::ParticleSystemScalingMode scalingMode;

  __declspec(property(get = get_simulationSpace, put = set_simulationSpace)) ::UnityEngine::ParticleSystemSimulationSpace simulationSpace;

  __declspec(property(get = get_simulationSpeed, put = set_simulationSpeed)) float_t simulationSpeed;

  __declspec(property(get = get_startColor, put = set_startColor)) ::UnityEngine::ParticleSystem_MinMaxGradient startColor;

  __declspec(property(get = get_startDelayMultiplier, put = set_startDelayMultiplier)) float_t startDelayMultiplier;

  __declspec(property(put = set_startLifetime)) ::UnityEngine::ParticleSystem_MinMaxCurve startLifetime;

  __declspec(property(get = get_startLifetimeMultiplier, put = set_startLifetimeMultiplier)) float_t startLifetimeMultiplier;

  __declspec(property(get = get_startRotationMultiplier, put = set_startRotationMultiplier)) float_t startRotationMultiplier;

  __declspec(property(get = get_startRotationXMultiplier, put = set_startRotationXMultiplier)) float_t startRotationXMultiplier;

  __declspec(property(get = get_startRotationYMultiplier, put = set_startRotationYMultiplier)) float_t startRotationYMultiplier;

  __declspec(property(get = get_startRotationZMultiplier, put = set_startRotationZMultiplier)) float_t startRotationZMultiplier;

  __declspec(property(get = get_startSizeMultiplier, put = set_startSizeMultiplier)) float_t startSizeMultiplier;

  __declspec(property(put = set_startSpeed)) ::UnityEngine::ParticleSystem_MinMaxCurve startSpeed;

  __declspec(property(get = get_startSpeedMultiplier, put = set_startSpeedMultiplier)) float_t startSpeedMultiplier;

  /// @brief Method .ctor, addr 0x48ede04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  /// @brief Method get_duration, addr 0x48eb368, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_duration();

  /// @brief Method get_duration_Injected, addr 0x48edf18, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_duration_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self);

  /// @brief Method get_gravityModifierMultiplier, addr 0x48ec004, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_gravityModifierMultiplier();

  /// @brief Method get_gravityModifierMultiplier_Injected, addr 0x48ee5ac, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_gravityModifierMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self);

  /// @brief Method get_loop, addr 0x48eb154, size 0x3c, virtual false, abstract: false, final false
  inline bool get_loop();

  /// @brief Method get_loop_Injected, addr 0x48edf54, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_loop_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self);

  /// @brief Method get_maxParticles, addr 0x48ec114, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_maxParticles();

  /// @brief Method get_maxParticles_Injected, addr 0x48ee83c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_maxParticles_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self);

  /// @brief Method get_playOnAwake, addr 0x48eb260, size 0x3c, virtual false, abstract: false, final false
  inline bool get_playOnAwake();

  /// @brief Method get_playOnAwake_Injected, addr 0x48ee7bc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_playOnAwake_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self);

  /// @brief Method get_scalingMode, addr 0x48ec324, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemScalingMode get_scalingMode();

  /// @brief Method get_scalingMode_Injected, addr 0x48ee73c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ParticleSystemScalingMode get_scalingMode_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self);

  /// @brief Method get_simulationSpace, addr 0x48ec21c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemSimulationSpace get_simulationSpace();

  /// @brief Method get_simulationSpace_Injected, addr 0x48ee634, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ParticleSystemSimulationSpace get_simulationSpace_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self);

  /// @brief Method get_simulationSpeed, addr 0x48eb3e4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_simulationSpeed();

  /// @brief Method get_simulationSpeed_Injected, addr 0x48ee6b4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_simulationSpeed_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self);

  /// @brief Method get_startColor, addr 0x48eb968, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_MinMaxGradient get_startColor();

  /// @brief Method get_startColor_Injected, addr 0x48ee524, size 0x44, virtual false, abstract: false, final false
  static inline void get_startColor_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, ::ByRef<::UnityEngine::ParticleSystem_MinMaxGradient> ret);

  /// @brief Method get_startDelayMultiplier, addr 0x48eb040, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startDelayMultiplier();

  /// @brief Method get_startDelayMultiplier_Injected, addr 0x48edfd4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startDelayMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self);

  /// @brief Method get_startLifetimeMultiplier, addr 0x48ebef4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startLifetimeMultiplier();

  /// @brief Method get_startLifetimeMultiplier_Injected, addr 0x48ee0e4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startLifetimeMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self);

  /// @brief Method get_startRotationMultiplier, addr 0x48ebae8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startRotationMultiplier();

  /// @brief Method get_startRotationMultiplier_Injected, addr 0x48ee304, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startRotationMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self);

  /// @brief Method get_startRotationXMultiplier, addr 0x48ebc6c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startRotationXMultiplier();

  /// @brief Method get_startRotationXMultiplier_Injected, addr 0x48ee38c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startRotationXMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self);

  /// @brief Method get_startRotationYMultiplier, addr 0x48ebca8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startRotationYMultiplier();

  /// @brief Method get_startRotationYMultiplier_Injected, addr 0x48ee414, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startRotationYMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self);

  /// @brief Method get_startRotationZMultiplier, addr 0x48ebce4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startRotationZMultiplier();

  /// @brief Method get_startRotationZMultiplier_Injected, addr 0x48ee49c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startRotationZMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self);

  /// @brief Method get_startSizeMultiplier, addr 0x48eb83c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startSizeMultiplier();

  /// @brief Method get_startSizeMultiplier_Injected, addr 0x48ee27c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startSizeMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self);

  /// @brief Method get_startSpeedMultiplier, addr 0x48eb72c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startSpeedMultiplier();

  /// @brief Method get_startSpeedMultiplier_Injected, addr 0x48ee1f4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startSpeedMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self);

  /// @brief Method set_gravityModifierMultiplier, addr 0x48ec088, size 0x4c, virtual false, abstract: false, final false
  inline void set_gravityModifierMultiplier(float_t value);

  /// @brief Method set_gravityModifierMultiplier_Injected, addr 0x48ee5e8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_gravityModifierMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, float_t value);

  /// @brief Method set_loop, addr 0x48eb1d8, size 0x44, virtual false, abstract: false, final false
  inline void set_loop(bool value);

  /// @brief Method set_loop_Injected, addr 0x48edf90, size 0x44, virtual false, abstract: false, final false
  static inline void set_loop_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, bool value);

  /// @brief Method set_maxParticles, addr 0x48ec198, size 0x44, virtual false, abstract: false, final false
  inline void set_maxParticles(int32_t value);

  /// @brief Method set_maxParticles_Injected, addr 0x48ee878, size 0x44, virtual false, abstract: false, final false
  static inline void set_maxParticles_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, int32_t value);

  /// @brief Method set_playOnAwake, addr 0x48eb2e4, size 0x44, virtual false, abstract: false, final false
  inline void set_playOnAwake(bool value);

  /// @brief Method set_playOnAwake_Injected, addr 0x48ee7f8, size 0x44, virtual false, abstract: false, final false
  static inline void set_playOnAwake_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, bool value);

  /// @brief Method set_scalingMode, addr 0x48ec3a8, size 0x44, virtual false, abstract: false, final false
  inline void set_scalingMode(::UnityEngine::ParticleSystemScalingMode value);

  /// @brief Method set_scalingMode_Injected, addr 0x48ee778, size 0x44, virtual false, abstract: false, final false
  static inline void set_scalingMode_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, ::UnityEngine::ParticleSystemScalingMode value);

  /// @brief Method set_simulationSpace, addr 0x48ec2a0, size 0x44, virtual false, abstract: false, final false
  inline void set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace value);

  /// @brief Method set_simulationSpace_Injected, addr 0x48ee670, size 0x44, virtual false, abstract: false, final false
  static inline void set_simulationSpace_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, ::UnityEngine::ParticleSystemSimulationSpace value);

  /// @brief Method set_simulationSpeed, addr 0x48eb468, size 0x4c, virtual false, abstract: false, final false
  inline void set_simulationSpeed(float_t value);

  /// @brief Method set_simulationSpeed_Injected, addr 0x48ee6f0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_simulationSpeed_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, float_t value);

  /// @brief Method set_startColor, addr 0x48eba64, size 0x44, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::ParticleSystem_MinMaxGradient value);

  /// @brief Method set_startColor_Injected, addr 0x48ee568, size 0x44, virtual false, abstract: false, final false
  static inline void set_startColor_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, ::ByRef<::UnityEngine::ParticleSystem_MinMaxGradient> value);

  /// @brief Method set_startDelayMultiplier, addr 0x48eb0c4, size 0x4c, virtual false, abstract: false, final false
  inline void set_startDelayMultiplier(float_t value);

  /// @brief Method set_startDelayMultiplier_Injected, addr 0x48ee010, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startDelayMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, float_t value);

  /// @brief Method set_startLifetime, addr 0x48ee05c, size 0x44, virtual false, abstract: false, final false
  inline void set_startLifetime(::UnityEngine::ParticleSystem_MinMaxCurve value);

  /// @brief Method set_startLifetimeMultiplier, addr 0x48ebf78, size 0x4c, virtual false, abstract: false, final false
  inline void set_startLifetimeMultiplier(float_t value);

  /// @brief Method set_startLifetimeMultiplier_Injected, addr 0x48ee120, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startLifetimeMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, float_t value);

  /// @brief Method set_startLifetime_Injected, addr 0x48ee0a0, size 0x44, virtual false, abstract: false, final false
  static inline void set_startLifetime_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, ::ByRef<::UnityEngine::ParticleSystem_MinMaxCurve> value);

  /// @brief Method set_startRotationMultiplier, addr 0x48ebb6c, size 0x4c, virtual false, abstract: false, final false
  inline void set_startRotationMultiplier(float_t value);

  /// @brief Method set_startRotationMultiplier_Injected, addr 0x48ee340, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startRotationMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, float_t value);

  /// @brief Method set_startRotationXMultiplier, addr 0x48ebdd0, size 0x4c, virtual false, abstract: false, final false
  inline void set_startRotationXMultiplier(float_t value);

  /// @brief Method set_startRotationXMultiplier_Injected, addr 0x48ee3c8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startRotationXMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, float_t value);

  /// @brief Method set_startRotationYMultiplier, addr 0x48ebe1c, size 0x4c, virtual false, abstract: false, final false
  inline void set_startRotationYMultiplier(float_t value);

  /// @brief Method set_startRotationYMultiplier_Injected, addr 0x48ee450, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startRotationYMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, float_t value);

  /// @brief Method set_startRotationZMultiplier, addr 0x48ebe68, size 0x4c, virtual false, abstract: false, final false
  inline void set_startRotationZMultiplier(float_t value);

  /// @brief Method set_startRotationZMultiplier_Injected, addr 0x48ee4d8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startRotationZMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, float_t value);

  /// @brief Method set_startSizeMultiplier, addr 0x48eb8c0, size 0x4c, virtual false, abstract: false, final false
  inline void set_startSizeMultiplier(float_t value);

  /// @brief Method set_startSizeMultiplier_Injected, addr 0x48ee2b8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startSizeMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, float_t value);

  /// @brief Method set_startSpeed, addr 0x48ee16c, size 0x44, virtual false, abstract: false, final false
  inline void set_startSpeed(::UnityEngine::ParticleSystem_MinMaxCurve value);

  /// @brief Method set_startSpeedMultiplier, addr 0x48eb7b0, size 0x4c, virtual false, abstract: false, final false
  inline void set_startSpeedMultiplier(float_t value);

  /// @brief Method set_startSpeedMultiplier_Injected, addr 0x48ee230, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startSpeedMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, float_t value);

  /// @brief Method set_startSpeed_Injected, addr 0x48ee1b0, size 0x44, virtual false, abstract: false, final false
  static inline void set_startSpeed_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule> _unity_self, ::ByRef<::UnityEngine::ParticleSystem_MinMaxCurve> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_MainModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_MainModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17238 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_MainModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_MainModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/EmissionModule
struct CORDL_TYPE ParticleSystem_EmissionModule {
public:
  // Declarations
  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  __declspec(property(put = set_rateOverTime)) ::UnityEngine::ParticleSystem_MinMaxCurve rateOverTime;

  __declspec(property(get = get_rateOverTimeMultiplier)) float_t rateOverTimeMultiplier;

  /// @brief Method .ctor, addr 0x48ede0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  /// @brief Method get_enabled, addr 0x48eb4fc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_enabled_Injected, addr 0x48ee8bc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enabled_Injected(::ByRef<::UnityEngine::ParticleSystem_EmissionModule> _unity_self);

  /// @brief Method get_rateOverTimeMultiplier, addr 0x48eb604, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_rateOverTimeMultiplier();

  /// @brief Method get_rateOverTimeMultiplier_Injected, addr 0x48ee980, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_rateOverTimeMultiplier_Injected(::ByRef<::UnityEngine::ParticleSystem_EmissionModule> _unity_self);

  /// @brief Method set_enabled, addr 0x48eb580, size 0x44, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method set_enabled_Injected, addr 0x48ee8f8, size 0x44, virtual false, abstract: false, final false
  static inline void set_enabled_Injected(::ByRef<::UnityEngine::ParticleSystem_EmissionModule> _unity_self, bool value);

  /// @brief Method set_rateOverTime, addr 0x48eb6a8, size 0x44, virtual false, abstract: false, final false
  inline void set_rateOverTime(::UnityEngine::ParticleSystem_MinMaxCurve value);

  /// @brief Method set_rateOverTime_Injected, addr 0x48ee93c, size 0x44, virtual false, abstract: false, final false
  static inline void set_rateOverTime_Injected(::ByRef<::UnityEngine::ParticleSystem_EmissionModule> _unity_self, ::ByRef<::UnityEngine::ParticleSystem_MinMaxCurve> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_EmissionModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_EmissionModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17239 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_EmissionModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_EmissionModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/ShapeModule
struct CORDL_TYPE ParticleSystem_ShapeModule {
public:
  // Declarations
  __declspec(property(get = get_meshRenderer, put = set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer> meshRenderer;

  __declspec(property(put = set_rotation)) ::UnityEngine::Vector3 rotation;

  /// @brief Method .ctor, addr 0x48ede18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  /// @brief Method get_meshRenderer, addr 0x48ee9bc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::MeshRenderer> get_meshRenderer();

  /// @brief Method get_meshRenderer_Injected, addr 0x48ee9f8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::MeshRenderer> get_meshRenderer_Injected(::ByRef<::UnityEngine::ParticleSystem_ShapeModule> _unity_self);

  /// @brief Method set_meshRenderer, addr 0x48eea34, size 0x44, virtual false, abstract: false, final false
  inline void set_meshRenderer(::UnityEngine::MeshRenderer* value);

  /// @brief Method set_meshRenderer_Injected, addr 0x48eea78, size 0x44, virtual false, abstract: false, final false
  static inline void set_meshRenderer_Injected(::ByRef<::UnityEngine::ParticleSystem_ShapeModule> _unity_self, ::UnityEngine::MeshRenderer* value);

  /// @brief Method set_rotation, addr 0x48eeabc, size 0x54, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation_Injected, addr 0x48eeb10, size 0x44, virtual false, abstract: false, final false
  static inline void set_rotation_Injected(::ByRef<::UnityEngine::ParticleSystem_ShapeModule> _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_ShapeModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_ShapeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17240 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_ShapeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_ShapeModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/CollisionModule
struct CORDL_TYPE ParticleSystem_CollisionModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48edec0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_CollisionModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_CollisionModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17241 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_CollisionModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_CollisionModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/TriggerModule
struct CORDL_TYPE ParticleSystem_TriggerModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48edecc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_TriggerModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_TriggerModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17242 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_TriggerModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_TriggerModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/SubEmittersModule
struct CORDL_TYPE ParticleSystem_SubEmittersModule {
public:
  // Declarations
  __declspec(property(get = get_subEmittersCount)) int32_t subEmittersCount;

  /// @brief Method GetSubEmitterSystem, addr 0x48eebcc, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ParticleSystem> GetSubEmitterSystem(int32_t index);

  /// @brief Method GetSubEmitterSystem_Injected, addr 0x48eec10, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ParticleSystem> GetSubEmitterSystem_Injected(::ByRef<::UnityEngine::ParticleSystem_SubEmittersModule> _unity_self, int32_t index);

  /// @brief Method .ctor, addr 0x48eded8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  /// @brief Method get_subEmittersCount, addr 0x48eeb54, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_subEmittersCount();

  /// @brief Method get_subEmittersCount_Injected, addr 0x48eeb90, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_subEmittersCount_Injected(::ByRef<::UnityEngine::ParticleSystem_SubEmittersModule> _unity_self);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_SubEmittersModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_SubEmittersModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17243 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_SubEmittersModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_SubEmittersModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct CORDL_TYPE ParticleSystem_TextureSheetAnimationModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48edee4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_TextureSheetAnimationModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_TextureSheetAnimationModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17244 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_TextureSheetAnimationModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_TextureSheetAnimationModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Color32, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/Particle
struct CORDL_TYPE ParticleSystem_Particle {
public:
  // Declarations
  __declspec(property(put = set_angularVelocity3D)) ::UnityEngine::Vector3 angularVelocity3D;

  __declspec(property(put = set_lifetime)) float_t lifetime;

  __declspec(property(put = set_position)) ::UnityEngine::Vector3 position;

  __declspec(property(put = set_randomSeed)) uint32_t randomSeed;

  __declspec(property(put = set_remainingLifetime)) float_t remainingLifetime;

  __declspec(property(put = set_rotation3D)) ::UnityEngine::Vector3 rotation3D;

  __declspec(property(put = set_startColor)) ::UnityEngine::Color32 startColor;

  __declspec(property(put = set_startLifetime)) float_t startLifetime;

  __declspec(property(put = set_startSize)) float_t startSize;

  __declspec(property(put = set_velocity)) ::UnityEngine::Vector3 velocity;

  /// @brief Method set_angularVelocity3D, addr 0x48eaf38, size 0x2c, virtual false, abstract: false, final false
  inline void set_angularVelocity3D(::UnityEngine::Vector3 value);

  /// @brief Method set_lifetime, addr 0x48eaef0, size 0x8, virtual false, abstract: false, final false
  inline void set_lifetime(float_t value);

  /// @brief Method set_position, addr 0x48eaed8, size 0xc, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_randomSeed, addr 0x48eaf6c, size 0x8, virtual false, abstract: false, final false
  inline void set_randomSeed(uint32_t value);

  /// @brief Method set_remainingLifetime, addr 0x48eec54, size 0x8, virtual false, abstract: false, final false
  inline void set_remainingLifetime(float_t value);

  /// @brief Method set_rotation3D, addr 0x48eaf0c, size 0x2c, virtual false, abstract: false, final false
  inline void set_rotation3D(::UnityEngine::Vector3 value);

  /// @brief Method set_startColor, addr 0x48eaf64, size 0x8, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::Color32 value);

  /// @brief Method set_startLifetime, addr 0x48eaef8, size 0x8, virtual false, abstract: false, final false
  inline void set_startLifetime(float_t value);

  /// @brief Method set_startSize, addr 0x48eaf00, size 0xc, virtual false, abstract: false, final false
  inline void set_startSize(float_t value);

  /// @brief Method set_velocity, addr 0x48eaee4, size 0xc, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_Particle();

  // Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "m_AnimatedVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_InitialVelocity", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "m_AxisOfRotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "m_AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_StartSize", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_StartColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "m_RandomSeed", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ParentRandomSeed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Lifetime", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_StartLifetime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_MeshIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_EmitAccumulator0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EmitAccumulator1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags",
  // ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr ParticleSystem_Particle(::UnityEngine::Vector3 m_Position, ::UnityEngine::Vector3 m_Velocity, ::UnityEngine::Vector3 m_AnimatedVelocity, ::UnityEngine::Vector3 m_InitialVelocity,
                                    ::UnityEngine::Vector3 m_AxisOfRotation, ::UnityEngine::Vector3 m_Rotation, ::UnityEngine::Vector3 m_AngularVelocity, ::UnityEngine::Vector3 m_StartSize,
                                    ::UnityEngine::Color32 m_StartColor, uint32_t m_RandomSeed, uint32_t m_ParentRandomSeed, float_t m_Lifetime, float_t m_StartLifetime, int32_t m_MeshIndex,
                                    float_t m_EmitAccumulator0, float_t m_EmitAccumulator1, uint32_t m_Flags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17245 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x84 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_Velocity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_AnimatedVelocity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_InitialVelocity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_AxisOfRotation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_Rotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_AngularVelocity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_StartSize) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_StartColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_RandomSeed) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_ParentRandomSeed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_Lifetime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_StartLifetime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_MeshIndex) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_EmitAccumulator0) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_EmitAccumulator1) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_Flags) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_Particle, 0x84>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.ParticleSystemCurveMode
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/MinMaxCurve
struct CORDL_TYPE ParticleSystem_MinMaxCurve {
public:
  // Declarations
  __declspec(property(put = set_constantMax)) float_t constantMax;

  __declspec(property(put = set_constantMin)) float_t constantMin;

  /// @brief Method .ctor, addr 0x48eec5c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t constant);

  /// @brief Method .ctor, addr 0x48eec70, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(float_t min, float_t max);

  /// @brief Method op_Implicit, addr 0x48eb694, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::ParticleSystem_MinMaxCurve op_Implicit___UnityEngine__ParticleSystem_MinMaxCurve(float_t constant);

  /// @brief Method set_constantMax, addr 0x48eec8c, size 0x8, virtual false, abstract: false, final false
  inline void set_constantMax(float_t value);

  /// @brief Method set_constantMin, addr 0x48eec94, size 0x8, virtual false, abstract: false, final false
  inline void set_constantMin(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_MinMaxCurve();

  // Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemCurveMode", modifiers: "", def_value: None }, CppParam { name: "m_CurveMultiplier", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_CurveMin", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None }, CppParam { name: "m_CurveMax", ty: "::UnityEngine::AnimationCurve*",
  // modifiers: "", def_value: None }, CppParam { name: "m_ConstantMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ConstantMax", ty: "float_t", modifiers: "", def_value:
  // None }]
  constexpr ParticleSystem_MinMaxCurve(::UnityEngine::ParticleSystemCurveMode m_Mode, float_t m_CurveMultiplier, ::UnityEngine::AnimationCurve* m_CurveMin, ::UnityEngine::AnimationCurve* m_CurveMax,
                                       float_t m_ConstantMin, float_t m_ConstantMax) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17246 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurve, m_Mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurve, m_CurveMultiplier) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurve, m_CurveMin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurve, m_CurveMax) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurve, m_ConstantMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurve, m_ConstantMax) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_MinMaxCurve, 0x20>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Color, UnityEngine.ParticleSystemGradientMode
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/MinMaxGradient
struct CORDL_TYPE ParticleSystem_MinMaxGradient {
public:
  // Declarations
  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  /// @brief Method .ctor, addr 0x48eec9c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color color);

  /// @brief Method get_color, addr 0x48eb9e0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method op_Implicit, addr 0x48eba48, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ParticleSystem_MinMaxGradient op_Implicit___UnityEngine__ParticleSystem_MinMaxGradient(::UnityEngine::Color color);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_MinMaxGradient();

  // Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemGradientMode", modifiers: "", def_value: None }, CppParam { name: "m_GradientMin", ty: "::UnityEngine::Gradient*",
  // modifiers: "", def_value: None }, CppParam { name: "m_GradientMax", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "m_ColorMin", ty: "::UnityEngine::Color",
  // modifiers: "", def_value: None }, CppParam { name: "m_ColorMax", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
  constexpr ParticleSystem_MinMaxGradient(::UnityEngine::ParticleSystemGradientMode m_Mode, ::UnityEngine::Gradient* m_GradientMin, ::UnityEngine::Gradient* m_GradientMax,
                                          ::UnityEngine::Color m_ColorMin, ::UnityEngine::Color m_ColorMax) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17247 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradient, m_Mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradient, m_GradientMin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradient, m_GradientMax) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradient, m_ColorMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradient, m_ColorMax) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_MinMaxGradient, 0x38>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.ParticleSystem::Particle
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/EmitParams
struct CORDL_TYPE ParticleSystem_EmitParams {
public:
  // Declarations
  __declspec(property(put = set_applyShapeToPosition)) bool applyShapeToPosition;

  __declspec(property(put = set_position)) ::UnityEngine::Vector3 position;

  __declspec(property(put = set_rotation3D)) ::UnityEngine::Vector3 rotation3D;

  __declspec(property(put = set_startColor)) ::UnityEngine::Color32 startColor;

  /// @brief Method set_applyShapeToPosition, addr 0x48eeccc, size 0xc, virtual false, abstract: false, final false
  inline void set_applyShapeToPosition(bool value);

  /// @brief Method set_position, addr 0x48eecb8, size 0x14, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation3D, addr 0x48eecd8, size 0x34, virtual false, abstract: false, final false
  inline void set_rotation3D(::UnityEngine::Vector3 value);

  /// @brief Method set_startColor, addr 0x48eed0c, size 0x10, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::Color32 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_EmitParams();

  // Ctor Parameters [CppParam { name: "m_Particle", ty: "::UnityEngine::ParticleSystem_Particle", modifiers: "", def_value: None }, CppParam { name: "m_PositionSet", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "m_VelocitySet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_AxisOfRotationSet", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "m_RotationSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_AngularVelocitySet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartSizeSet", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartColorSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_RandomSeedSet", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "m_StartLifetimeSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_MeshIndexSet", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "m_ApplyShapeToPosition", ty: "bool", modifiers: "", def_value: None }]
  constexpr ParticleSystem_EmitParams(::UnityEngine::ParticleSystem_Particle m_Particle, bool m_PositionSet, bool m_VelocitySet, bool m_AxisOfRotationSet, bool m_RotationSet,
                                      bool m_AngularVelocitySet, bool m_StartSizeSet, bool m_StartColorSet, bool m_RandomSeedSet, bool m_StartLifetimeSet, bool m_MeshIndexSet,
                                      bool m_ApplyShapeToPosition) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17248 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  /// @brief Field m_Particle, offset: 0x0, size: 0x84, def value: None
  ::UnityEngine::ParticleSystem_Particle m_Particle;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_Particle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_PositionSet) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_VelocitySet) == 0x85, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_AxisOfRotationSet) == 0x86, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_RotationSet) == 0x87, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_AngularVelocitySet) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_StartSizeSet) == 0x89, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_StartColorSet) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_RandomSeedSet) == 0x8b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_StartLifetimeSet) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_MeshIndexSet) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_ApplyShapeToPosition) == 0x8e, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_EmitParams, 0x90>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState/Seed
struct CORDL_TYPE PlaybackState_ParticleSystem_Seed {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaybackState_ParticleSystem_Seed();

  // Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "z", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr PlaybackState_ParticleSystem_Seed(uint32_t x, uint32_t y, uint32_t z, uint32_t w) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17249 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  uint32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  uint32_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  uint32_t z;

  /// @brief Field w, offset: 0xc, size: 0x4, def value: None
  uint32_t w;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Seed, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Seed, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Seed, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Seed, w) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PlaybackState_ParticleSystem_Seed, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.ParticleSystem::PlaybackState::Seed
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState/Seed4
struct CORDL_TYPE PlaybackState_ParticleSystem_Seed4 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaybackState_ParticleSystem_Seed4();

  // Ctor Parameters [CppParam { name: "x", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: None }, CppParam { name: "y", ty:
  // "::UnityEngine::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: None }, CppParam { name: "z", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: None
  // }, CppParam { name: "w", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: None }]
  constexpr PlaybackState_ParticleSystem_Seed4(::UnityEngine::PlaybackState_ParticleSystem_Seed x, ::UnityEngine::PlaybackState_ParticleSystem_Seed y,
                                               ::UnityEngine::PlaybackState_ParticleSystem_Seed z, ::UnityEngine::PlaybackState_ParticleSystem_Seed w) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17250 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field x, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Seed x;

  /// @brief Field y, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Seed y;

  /// @brief Field z, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Seed z;

  /// @brief Field w, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Seed w;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Seed4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Seed4, y) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Seed4, z) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Seed4, w) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PlaybackState_ParticleSystem_Seed4, 0x40>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.ParticleSystem::PlaybackState::Seed
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState/Emission
struct CORDL_TYPE PlaybackState_ParticleSystem_Emission {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaybackState_ParticleSystem_Emission();

  // Ctor Parameters [CppParam { name: "m_ParticleSpacing", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ToEmitAccumulator", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m_Random", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: None }]
  constexpr PlaybackState_ParticleSystem_Emission(float_t m_ParticleSpacing, float_t m_ToEmitAccumulator, ::UnityEngine::PlaybackState_ParticleSystem_Seed m_Random) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17251 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_ParticleSpacing, offset: 0x0, size: 0x4, def value: None
  float_t m_ParticleSpacing;

  /// @brief Field m_ToEmitAccumulator, offset: 0x4, size: 0x4, def value: None
  float_t m_ToEmitAccumulator;

  /// @brief Field m_Random, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Seed m_Random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Emission, m_ParticleSpacing) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Emission, m_ToEmitAccumulator) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Emission, m_Random) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PlaybackState_ParticleSystem_Emission, 0x18>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.ParticleSystem::PlaybackState::Seed4
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState/Initial
struct CORDL_TYPE PlaybackState_ParticleSystem_Initial {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaybackState_ParticleSystem_Initial();

  // Ctor Parameters [CppParam { name: "m_Random", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed4", modifiers: "", def_value: None }]
  constexpr PlaybackState_ParticleSystem_Initial(::UnityEngine::PlaybackState_ParticleSystem_Seed4 m_Random) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17252 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field m_Random, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Seed4 m_Random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Initial, m_Random) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PlaybackState_ParticleSystem_Initial, 0x40>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.ParticleSystem::PlaybackState::Seed4
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState/Shape
struct CORDL_TYPE PlaybackState_ParticleSystem_Shape {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaybackState_ParticleSystem_Shape();

  // Ctor Parameters [CppParam { name: "m_Random", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed4", modifiers: "", def_value: None }, CppParam { name: "m_RadiusTimer", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_RadiusTimerPrev", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ArcTimer", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "m_ArcTimerPrev", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_MeshSpawnTimer", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_MeshSpawnTimerPrev", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_OrderedMeshVertexIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlaybackState_ParticleSystem_Shape(::UnityEngine::PlaybackState_ParticleSystem_Seed4 m_Random, float_t m_RadiusTimer, float_t m_RadiusTimerPrev, float_t m_ArcTimer, float_t m_ArcTimerPrev,
                                               float_t m_MeshSpawnTimer, float_t m_MeshSpawnTimerPrev, int32_t m_OrderedMeshVertexIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17253 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x5c };

  /// @brief Field m_Random, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Seed4 m_Random;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Shape, m_Random) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Shape, m_RadiusTimer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Shape, m_RadiusTimerPrev) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Shape, m_ArcTimer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Shape, m_ArcTimerPrev) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Shape, m_MeshSpawnTimer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Shape, m_MeshSpawnTimerPrev) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Shape, m_OrderedMeshVertexIndex) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PlaybackState_ParticleSystem_Shape, 0x5c>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.ParticleSystem::PlaybackState::Seed4
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState/Force
struct CORDL_TYPE PlaybackState_ParticleSystem_Force {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaybackState_ParticleSystem_Force();

  // Ctor Parameters [CppParam { name: "m_Random", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed4", modifiers: "", def_value: None }]
  constexpr PlaybackState_ParticleSystem_Force(::UnityEngine::PlaybackState_ParticleSystem_Seed4 m_Random) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17254 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field m_Random, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Seed4 m_Random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Force, m_Random) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PlaybackState_ParticleSystem_Force, 0x40>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.ParticleSystem::PlaybackState::Seed4
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState/Collision
struct CORDL_TYPE PlaybackState_ParticleSystem_Collision {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaybackState_ParticleSystem_Collision();

  // Ctor Parameters [CppParam { name: "m_Random", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed4", modifiers: "", def_value: None }]
  constexpr PlaybackState_ParticleSystem_Collision(::UnityEngine::PlaybackState_ParticleSystem_Seed4 m_Random) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17255 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field m_Random, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Seed4 m_Random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Collision, m_Random) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PlaybackState_ParticleSystem_Collision, 0x40>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState/Noise
struct CORDL_TYPE PlaybackState_ParticleSystem_Noise {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaybackState_ParticleSystem_Noise();

  // Ctor Parameters [CppParam { name: "m_ScrollOffset", ty: "float_t", modifiers: "", def_value: None }]
  constexpr PlaybackState_ParticleSystem_Noise(float_t m_ScrollOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17256 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_ScrollOffset, offset: 0x0, size: 0x4, def value: None
  float_t m_ScrollOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Noise, m_ScrollOffset) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PlaybackState_ParticleSystem_Noise, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.ParticleSystem::PlaybackState::Seed
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState/Lights
struct CORDL_TYPE PlaybackState_ParticleSystem_Lights {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaybackState_ParticleSystem_Lights();

  // Ctor Parameters [CppParam { name: "m_Random", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: None }, CppParam { name: "m_ParticleEmissionCounter", ty:
  // "float_t", modifiers: "", def_value: None }]
  constexpr PlaybackState_ParticleSystem_Lights(::UnityEngine::PlaybackState_ParticleSystem_Seed m_Random, float_t m_ParticleEmissionCounter) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17257 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field m_Random, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Seed m_Random;

  /// @brief Field m_ParticleEmissionCounter, offset: 0x10, size: 0x4, def value: None
  float_t m_ParticleEmissionCounter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Lights, m_Random) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Lights, m_ParticleEmissionCounter) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PlaybackState_ParticleSystem_Lights, 0x14>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState/Trail
struct CORDL_TYPE PlaybackState_ParticleSystem_Trail {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaybackState_ParticleSystem_Trail();

  // Ctor Parameters [CppParam { name: "m_Timer", ty: "float_t", modifiers: "", def_value: None }]
  constexpr PlaybackState_ParticleSystem_Trail(float_t m_Timer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17258 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Timer, offset: 0x0, size: 0x4, def value: None
  float_t m_Timer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PlaybackState_ParticleSystem_Trail, m_Timer) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PlaybackState_ParticleSystem_Trail, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.ParticleSystem::PlaybackState::Collision, UnityEngine.ParticleSystem::PlaybackState::Emission, UnityEngine.ParticleSystem::PlaybackState::Force,
// UnityEngine.ParticleSystem::PlaybackState::Initial, UnityEngine.ParticleSystem::PlaybackState::Lights, UnityEngine.ParticleSystem::PlaybackState::Noise,
// UnityEngine.ParticleSystem::PlaybackState::Shape, UnityEngine.ParticleSystem::PlaybackState::Trail
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState
struct CORDL_TYPE ParticleSystem_PlaybackState {
public:
  // Declarations
  using Collision = ::UnityEngine::PlaybackState_ParticleSystem_Collision;

  using Emission = ::UnityEngine::PlaybackState_ParticleSystem_Emission;

  using Force = ::UnityEngine::PlaybackState_ParticleSystem_Force;

  using Initial = ::UnityEngine::PlaybackState_ParticleSystem_Initial;

  using Lights = ::UnityEngine::PlaybackState_ParticleSystem_Lights;

  using Noise = ::UnityEngine::PlaybackState_ParticleSystem_Noise;

  using Seed = ::UnityEngine::PlaybackState_ParticleSystem_Seed;

  using Seed4 = ::UnityEngine::PlaybackState_ParticleSystem_Seed4;

  using Shape = ::UnityEngine::PlaybackState_ParticleSystem_Shape;

  using Trail = ::UnityEngine::PlaybackState_ParticleSystem_Trail;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_PlaybackState();

  // Ctor Parameters [CppParam { name: "m_AccumulatedDt", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_StartDelay", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_PlaybackTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_RingBufferIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Emission", ty:
  // "::UnityEngine::PlaybackState_ParticleSystem_Emission", modifiers: "", def_value: None }, CppParam { name: "m_Initial", ty: "::UnityEngine::PlaybackState_ParticleSystem_Initial", modifiers: "",
  // def_value: None }, CppParam { name: "m_Shape", ty: "::UnityEngine::PlaybackState_ParticleSystem_Shape", modifiers: "", def_value: None }, CppParam { name: "m_Force", ty:
  // "::UnityEngine::PlaybackState_ParticleSystem_Force", modifiers: "", def_value: None }, CppParam { name: "m_Collision", ty: "::UnityEngine::PlaybackState_ParticleSystem_Collision", modifiers: "",
  // def_value: None }, CppParam { name: "m_Noise", ty: "::UnityEngine::PlaybackState_ParticleSystem_Noise", modifiers: "", def_value: None }, CppParam { name: "m_Lights", ty:
  // "::UnityEngine::PlaybackState_ParticleSystem_Lights", modifiers: "", def_value: None }, CppParam { name: "m_Trail", ty: "::UnityEngine::PlaybackState_ParticleSystem_Trail", modifiers: "",
  // def_value: None }]
  constexpr ParticleSystem_PlaybackState(float_t m_AccumulatedDt, float_t m_StartDelay, float_t m_PlaybackTime, int32_t m_RingBufferIndex,
                                         ::UnityEngine::PlaybackState_ParticleSystem_Emission m_Emission, ::UnityEngine::PlaybackState_ParticleSystem_Initial m_Initial,
                                         ::UnityEngine::PlaybackState_ParticleSystem_Shape m_Shape, ::UnityEngine::PlaybackState_ParticleSystem_Force m_Force,
                                         ::UnityEngine::PlaybackState_ParticleSystem_Collision m_Collision, ::UnityEngine::PlaybackState_ParticleSystem_Noise m_Noise,
                                         ::UnityEngine::PlaybackState_ParticleSystem_Lights m_Lights, ::UnityEngine::PlaybackState_ParticleSystem_Trail m_Trail) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17259 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x160 };

  /// @brief Field m_AccumulatedDt, offset: 0x0, size: 0x4, def value: None
  float_t m_AccumulatedDt;

  /// @brief Field m_StartDelay, offset: 0x4, size: 0x4, def value: None
  float_t m_StartDelay;

  /// @brief Field m_PlaybackTime, offset: 0x8, size: 0x4, def value: None
  float_t m_PlaybackTime;

  /// @brief Field m_RingBufferIndex, offset: 0xc, size: 0x4, def value: None
  int32_t m_RingBufferIndex;

  /// @brief Field m_Emission, offset: 0x10, size: 0x18, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Emission m_Emission;

  /// @brief Field m_Initial, offset: 0x28, size: 0x40, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Initial m_Initial;

  /// @brief Field m_Shape, offset: 0x68, size: 0x5c, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Shape m_Shape;

  /// @brief Field m_Force, offset: 0xc4, size: 0x40, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Force m_Force;

  /// @brief Field m_Collision, offset: 0x104, size: 0x40, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Collision m_Collision;

  /// @brief Field m_Noise, offset: 0x144, size: 0x4, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Noise m_Noise;

  /// @brief Field m_Lights, offset: 0x148, size: 0x14, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Lights m_Lights;

  /// @brief Field m_Trail, offset: 0x15c, size: 0x4, def value: None
  ::UnityEngine::PlaybackState_ParticleSystem_Trail m_Trail;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_PlaybackState, m_AccumulatedDt) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_PlaybackState, m_StartDelay) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_PlaybackState, m_PlaybackTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_PlaybackState, m_RingBufferIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_PlaybackState, m_Emission) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_PlaybackState, m_Initial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_PlaybackState, m_Shape) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_PlaybackState, m_Force) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_PlaybackState, m_Collision) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_PlaybackState, m_Noise) == 0x144, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_PlaybackState, m_Lights) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_PlaybackState, m_Trail) == 0x15c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_PlaybackState, 0x160>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/Trails
struct CORDL_TYPE ParticleSystem_Trails {
public:
  // Declarations
  /// @brief Method Allocate, addr 0x48ed048, size 0x164, virtual false, abstract: false, final false
  inline void Allocate();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_Trails();

  // Ctor Parameters [CppParam { name: "positions", ty: "::System::Collections::Generic::List_1<::UnityEngine::Vector4>*", modifiers: "", def_value: None }, CppParam { name: "frontPositions", ty:
  // "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "backPositions", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "",
  // def_value: None }, CppParam { name: "positionCounts", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "textureOffsets", ty:
  // "::System::Collections::Generic::List_1<float_t>*", modifiers: "", def_value: None }, CppParam { name: "maxTrailCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "maxPositionsPerTrailCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParticleSystem_Trails(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* positions, ::System::Collections::Generic::List_1<int32_t>* frontPositions,
                                  ::System::Collections::Generic::List_1<int32_t>* backPositions, ::System::Collections::Generic::List_1<int32_t>* positionCounts,
                                  ::System::Collections::Generic::List_1<float_t>* textureOffsets, int32_t maxTrailCount, int32_t maxPositionsPerTrailCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17260 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field positions, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* positions;

  /// @brief Field frontPositions, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* frontPositions;

  /// @brief Field backPositions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* backPositions;

  /// @brief Field positionCounts, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* positionCounts;

  /// @brief Field textureOffsets, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* textureOffsets;

  /// @brief Field maxTrailCount, offset: 0x28, size: 0x4, def value: None
  int32_t maxTrailCount;

  /// @brief Field maxPositionsPerTrailCount, offset: 0x2c, size: 0x4, def value: None
  int32_t maxPositionsPerTrailCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_Trails, positions) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Trails, frontPositions) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Trails, backPositions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Trails, positionCounts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Trails, textureOffsets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Trails, maxTrailCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Trails, maxPositionsPerTrailCount) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_Trails, 0x30>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/VelocityOverLifetimeModule
struct CORDL_TYPE ParticleSystem_VelocityOverLifetimeModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48ede24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_VelocityOverLifetimeModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_VelocityOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17261 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
struct CORDL_TYPE ParticleSystem_LimitVelocityOverLifetimeModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48ede30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_LimitVelocityOverLifetimeModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_LimitVelocityOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17262 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/InheritVelocityModule
struct CORDL_TYPE ParticleSystem_InheritVelocityModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48ede3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_InheritVelocityModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_InheritVelocityModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17263 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_InheritVelocityModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_InheritVelocityModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/LifetimeByEmitterSpeedModule
struct CORDL_TYPE ParticleSystem_LifetimeByEmitterSpeedModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48ede48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_LifetimeByEmitterSpeedModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_LifetimeByEmitterSpeedModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17264 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/ForceOverLifetimeModule
struct CORDL_TYPE ParticleSystem_ForceOverLifetimeModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48ede54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_ForceOverLifetimeModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_ForceOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17265 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_ForceOverLifetimeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_ForceOverLifetimeModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/ColorOverLifetimeModule
struct CORDL_TYPE ParticleSystem_ColorOverLifetimeModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48ede60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_ColorOverLifetimeModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_ColorOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17266 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_ColorOverLifetimeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_ColorOverLifetimeModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/ColorBySpeedModule
struct CORDL_TYPE ParticleSystem_ColorBySpeedModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48ede6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_ColorBySpeedModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_ColorBySpeedModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17267 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_ColorBySpeedModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_ColorBySpeedModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/SizeOverLifetimeModule
struct CORDL_TYPE ParticleSystem_SizeOverLifetimeModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48ede78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_SizeOverLifetimeModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_SizeOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17268 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_SizeOverLifetimeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_SizeOverLifetimeModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/SizeBySpeedModule
struct CORDL_TYPE ParticleSystem_SizeBySpeedModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48ede84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_SizeBySpeedModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_SizeBySpeedModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17269 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_SizeBySpeedModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_SizeBySpeedModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/RotationOverLifetimeModule
struct CORDL_TYPE ParticleSystem_RotationOverLifetimeModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48ede90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_RotationOverLifetimeModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_RotationOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17270 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_RotationOverLifetimeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_RotationOverLifetimeModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/RotationBySpeedModule
struct CORDL_TYPE ParticleSystem_RotationBySpeedModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48ede9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_RotationBySpeedModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_RotationBySpeedModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17271 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_RotationBySpeedModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_RotationBySpeedModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/ExternalForcesModule
struct CORDL_TYPE ParticleSystem_ExternalForcesModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48edea8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_ExternalForcesModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_ExternalForcesModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17272 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_ExternalForcesModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_ExternalForcesModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/NoiseModule
struct CORDL_TYPE ParticleSystem_NoiseModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48edeb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_NoiseModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_NoiseModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17273 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_NoiseModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_NoiseModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/LightsModule
struct CORDL_TYPE ParticleSystem_LightsModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48edef0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_LightsModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_LightsModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17274 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_LightsModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_LightsModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/TrailModule
struct CORDL_TYPE ParticleSystem_TrailModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48edefc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_TrailModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_TrailModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17275 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_TrailModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_TrailModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/CustomDataModule
struct CORDL_TYPE ParticleSystem_CustomDataModule {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48edf08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem_CustomDataModule();

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
  constexpr ParticleSystem_CustomDataModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17276 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_CustomDataModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_CustomDataModule, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ParticleSystem
class CORDL_TYPE ParticleSystem : public ::UnityEngine::Component {
public:
  // Declarations
  using CollisionModule = ::UnityEngine::ParticleSystem_CollisionModule;

  using ColorBySpeedModule = ::UnityEngine::ParticleSystem_ColorBySpeedModule;

  using ColorOverLifetimeModule = ::UnityEngine::ParticleSystem_ColorOverLifetimeModule;

  using CustomDataModule = ::UnityEngine::ParticleSystem_CustomDataModule;

  using EmissionModule = ::UnityEngine::ParticleSystem_EmissionModule;

  using EmitParams = ::UnityEngine::ParticleSystem_EmitParams;

  using ExternalForcesModule = ::UnityEngine::ParticleSystem_ExternalForcesModule;

  using ForceOverLifetimeModule = ::UnityEngine::ParticleSystem_ForceOverLifetimeModule;

  using InheritVelocityModule = ::UnityEngine::ParticleSystem_InheritVelocityModule;

  using LifetimeByEmitterSpeedModule = ::UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule;

  using LightsModule = ::UnityEngine::ParticleSystem_LightsModule;

  using LimitVelocityOverLifetimeModule = ::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule;

  using MainModule = ::UnityEngine::ParticleSystem_MainModule;

  using MinMaxCurve = ::UnityEngine::ParticleSystem_MinMaxCurve;

  using MinMaxGradient = ::UnityEngine::ParticleSystem_MinMaxGradient;

  using NoiseModule = ::UnityEngine::ParticleSystem_NoiseModule;

  using Particle = ::UnityEngine::ParticleSystem_Particle;

  using PlaybackState = ::UnityEngine::ParticleSystem_PlaybackState;

  using RotationBySpeedModule = ::UnityEngine::ParticleSystem_RotationBySpeedModule;

  using RotationOverLifetimeModule = ::UnityEngine::ParticleSystem_RotationOverLifetimeModule;

  using ShapeModule = ::UnityEngine::ParticleSystem_ShapeModule;

  using SizeBySpeedModule = ::UnityEngine::ParticleSystem_SizeBySpeedModule;

  using SizeOverLifetimeModule = ::UnityEngine::ParticleSystem_SizeOverLifetimeModule;

  using SubEmittersModule = ::UnityEngine::ParticleSystem_SubEmittersModule;

  using TextureSheetAnimationModule = ::UnityEngine::ParticleSystem_TextureSheetAnimationModule;

  using TrailModule = ::UnityEngine::ParticleSystem_TrailModule;

  using Trails = ::UnityEngine::ParticleSystem_Trails;

  using TriggerModule = ::UnityEngine::ParticleSystem_TriggerModule;

  using VelocityOverLifetimeModule = ::UnityEngine::ParticleSystem_VelocityOverLifetimeModule;

  __declspec(property(get = get_automaticCullingEnabled)) bool automaticCullingEnabled;

  __declspec(property(get = get_collision)) ::UnityEngine::ParticleSystem_CollisionModule collision;

  __declspec(property(get = get_colorBySpeed)) ::UnityEngine::ParticleSystem_ColorBySpeedModule colorBySpeed;

  __declspec(property(get = get_colorOverLifetime)) ::UnityEngine::ParticleSystem_ColorOverLifetimeModule colorOverLifetime;

  __declspec(property(get = get_customData)) ::UnityEngine::ParticleSystem_CustomDataModule customData;

  __declspec(property(get = get_duration)) float_t duration;

  __declspec(property(get = get_emission)) ::UnityEngine::ParticleSystem_EmissionModule emission;

  __declspec(property(get = get_emissionRate, put = set_emissionRate)) float_t emissionRate;

  __declspec(property(get = get_enableEmission, put = set_enableEmission)) bool enableEmission;

  __declspec(property(get = get_externalForces)) ::UnityEngine::ParticleSystem_ExternalForcesModule externalForces;

  __declspec(property(get = get_forceOverLifetime)) ::UnityEngine::ParticleSystem_ForceOverLifetimeModule forceOverLifetime;

  __declspec(property(get = get_gravityModifier, put = set_gravityModifier)) float_t gravityModifier;

  __declspec(property(get = get_has3DParticleRotations)) bool has3DParticleRotations;

  __declspec(property(get = get_hasNonUniformParticleSizes)) bool hasNonUniformParticleSizes;

  __declspec(property(get = get_inheritVelocity)) ::UnityEngine::ParticleSystem_InheritVelocityModule inheritVelocity;

  __declspec(property(get = get_isEmitting)) bool isEmitting;

  __declspec(property(get = get_isPaused)) bool isPaused;

  __declspec(property(get = get_isPlaying)) bool isPlaying;

  __declspec(property(get = get_isStopped)) bool isStopped;

  __declspec(property(get = get_lifetimeByEmitterSpeed)) ::UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule lifetimeByEmitterSpeed;

  __declspec(property(get = get_lights)) ::UnityEngine::ParticleSystem_LightsModule lights;

  __declspec(property(get = get_limitVelocityOverLifetime)) ::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule limitVelocityOverLifetime;

  __declspec(property(get = get_loop, put = set_loop)) bool loop;

  __declspec(property(get = get_main)) ::UnityEngine::ParticleSystem_MainModule main;

  __declspec(property(get = get_maxParticles, put = set_maxParticles)) int32_t maxParticles;

  __declspec(property(get = get_noise)) ::UnityEngine::ParticleSystem_NoiseModule noise;

  __declspec(property(get = get_particleCount)) int32_t particleCount;

  __declspec(property(get = get_playOnAwake, put = set_playOnAwake)) bool playOnAwake;

  __declspec(property(get = get_playbackSpeed, put = set_playbackSpeed)) float_t playbackSpeed;

  __declspec(property(get = get_proceduralSimulationSupported)) bool proceduralSimulationSupported;

  __declspec(property(get = get_randomSeed, put = set_randomSeed)) uint32_t randomSeed;

  __declspec(property(get = get_rotationBySpeed)) ::UnityEngine::ParticleSystem_RotationBySpeedModule rotationBySpeed;

  __declspec(property(get = get_rotationOverLifetime)) ::UnityEngine::ParticleSystem_RotationOverLifetimeModule rotationOverLifetime;

  __declspec(property(get = get_scalingMode, put = set_scalingMode)) ::UnityEngine::ParticleSystemScalingMode scalingMode;

  __declspec(property(get = get_shape)) ::UnityEngine::ParticleSystem_ShapeModule shape;

  __declspec(property(get = get_simulationSpace, put = set_simulationSpace)) ::UnityEngine::ParticleSystemSimulationSpace simulationSpace;

  __declspec(property(get = get_sizeBySpeed)) ::UnityEngine::ParticleSystem_SizeBySpeedModule sizeBySpeed;

  __declspec(property(get = get_sizeOverLifetime)) ::UnityEngine::ParticleSystem_SizeOverLifetimeModule sizeOverLifetime;

  __declspec(property(get = get_startColor, put = set_startColor)) ::UnityEngine::Color startColor;

  __declspec(property(get = get_startDelay, put = set_startDelay)) float_t startDelay;

  __declspec(property(get = get_startLifetime, put = set_startLifetime)) float_t startLifetime;

  __declspec(property(get = get_startRotation, put = set_startRotation)) float_t startRotation;

  __declspec(property(get = get_startRotation3D, put = set_startRotation3D)) ::UnityEngine::Vector3 startRotation3D;

  __declspec(property(get = get_startSize, put = set_startSize)) float_t startSize;

  __declspec(property(get = get_startSpeed, put = set_startSpeed)) float_t startSpeed;

  __declspec(property(get = get_subEmitters)) ::UnityEngine::ParticleSystem_SubEmittersModule subEmitters;

  __declspec(property(get = get_textureSheetAnimation)) ::UnityEngine::ParticleSystem_TextureSheetAnimationModule textureSheetAnimation;

  __declspec(property(get = get_time, put = set_time)) float_t time;

  __declspec(property(get = get_totalTime)) float_t totalTime;

  __declspec(property(get = get_trails)) ::UnityEngine::ParticleSystem_TrailModule trails;

  __declspec(property(get = get_trigger)) ::UnityEngine::ParticleSystem_TriggerModule trigger;

  __declspec(property(get = get_useAutoRandomSeed, put = set_useAutoRandomSeed)) bool useAutoRandomSeed;

  __declspec(property(get = get_velocityOverLifetime)) ::UnityEngine::ParticleSystem_VelocityOverLifetimeModule velocityOverLifetime;

  /// @brief Method AllocateAxisOfRotationAttribute, addr 0x48eda74, size 0x3c, virtual false, abstract: false, final false
  inline void AllocateAxisOfRotationAttribute();

  /// @brief Method AllocateCustomDataAttribute, addr 0x48edaec, size 0x44, virtual false, abstract: false, final false
  inline void AllocateCustomDataAttribute(::UnityEngine::ParticleSystemCustomData stream);

  /// @brief Method AllocateMeshIndexAttribute, addr 0x48edab0, size 0x3c, virtual false, abstract: false, final false
  inline void AllocateMeshIndexAttribute();

  /// @brief Method Clear, addr 0x48ed668, size 0x40, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clear, addr 0x48ed624, size 0x44, virtual false, abstract: false, final false
  inline void Clear(bool withChildren);

  /// @brief Method CopyManagedJobData, addr 0x48eddc0, size 0x44, virtual false, abstract: false, final false
  static inline void CopyManagedJobData(::cordl_internals::Ptr<void> systemPtr, ::ByRef<::UnityEngine::ParticleSystemJobs::NativeParticleData> particleData);

  /// @brief Method Emit, addr 0x48ed72c, size 0x44, virtual false, abstract: false, final false
  inline void Emit(int32_t count);

  /// @brief Method Emit, addr 0x48ed7b4, size 0x54, virtual false, abstract: false, final false
  inline void Emit(::UnityEngine::ParticleSystem_EmitParams emitParams, int32_t count);

  /// @brief Method Emit, addr 0x48eafb8, size 0x44, virtual false, abstract: false, final false
  inline void Emit(::UnityEngine::ParticleSystem_Particle particle);

  /// @brief Method Emit, addr 0x48eadd4, size 0x104, virtual false, abstract: false, final false
  inline void Emit(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 velocity, float_t size, float_t lifetime, ::UnityEngine::Color32 color);

  /// @brief Method EmitOld_Internal, addr 0x48eaf74, size 0x44, virtual false, abstract: false, final false
  inline void EmitOld_Internal(::ByRef<::UnityEngine::ParticleSystem_Particle> particle);

  /// @brief Method Emit_Injected, addr 0x48ed808, size 0x54, virtual false, abstract: false, final false
  inline void Emit_Injected(::ByRef<::UnityEngine::ParticleSystem_EmitParams> emitParams, int32_t count);

  /// @brief Method Emit_Internal, addr 0x48ed770, size 0x44, virtual false, abstract: false, final false
  inline void Emit_Internal(int32_t count);

  /// @brief Method GetCustomParticleData, addr 0x48ecdf8, size 0x54, virtual false, abstract: false, final false
  inline int32_t GetCustomParticleData(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* customData, ::UnityEngine::ParticleSystemCustomData streamIndex);

  /// @brief Method GetManagedJobData, addr 0x48edba8, size 0x3c, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> GetManagedJobData();

  /// @brief Method GetManagedJobHandle, addr 0x48edbe4, size 0x54, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle GetManagedJobHandle();

  /// @brief Method GetManagedJobHandle_Injected, addr 0x48edc38, size 0x44, virtual false, abstract: false, final false
  inline void GetManagedJobHandle_Injected(::ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method GetParticleCurrentColor, addr 0x48ec850, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 GetParticleCurrentColor(::ByRef<::UnityEngine::ParticleSystem_Particle> particle);

  /// @brief Method GetParticleCurrentColor_Injected, addr 0x48ec8ac, size 0x54, virtual false, abstract: false, final false
  inline void GetParticleCurrentColor_Injected(::ByRef<::UnityEngine::ParticleSystem_Particle> particle, ::ByRef<::UnityEngine::Color32> ret);

  /// @brief Method GetParticleCurrentSize, addr 0x48ec754, size 0x44, virtual false, abstract: false, final false
  inline float_t GetParticleCurrentSize(::ByRef<::UnityEngine::ParticleSystem_Particle> particle);

  /// @brief Method GetParticleCurrentSize3D, addr 0x48ec798, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetParticleCurrentSize3D(::ByRef<::UnityEngine::ParticleSystem_Particle> particle);

  /// @brief Method GetParticleCurrentSize3D_Injected, addr 0x48ec7fc, size 0x54, virtual false, abstract: false, final false
  inline void GetParticleCurrentSize3D_Injected(::ByRef<::UnityEngine::ParticleSystem_Particle> particle, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetParticleMeshIndex, addr 0x48ec900, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetParticleMeshIndex(::ByRef<::UnityEngine::ParticleSystem_Particle> particle);

  /// @brief Method GetParticles, addr 0x48ecc28, size 0x4c, virtual false, abstract: false, final false
  inline int32_t GetParticles(::ByRef<::ArrayW<::UnityEngine::ParticleSystem_Particle, ::Array<::UnityEngine::ParticleSystem_Particle>*>> particles);

  /// @brief Method GetParticles, addr 0x48ecbd0, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetParticles(::ByRef<::ArrayW<::UnityEngine::ParticleSystem_Particle, ::Array<::UnityEngine::ParticleSystem_Particle>*>> particles, int32_t size);

  /// @brief Method GetParticles, addr 0x48ecb74, size 0x5c, virtual false, abstract: false, final false
  inline int32_t GetParticles(::ByRef<::ArrayW<::UnityEngine::ParticleSystem_Particle, ::Array<::UnityEngine::ParticleSystem_Particle>*>> particles, int32_t size, int32_t offset);

  /// @brief Method GetParticles, addr 0x48ecd98, size 0xc, virtual false, abstract: false, final false
  inline int32_t GetParticles(::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>> particles);

  /// @brief Method GetParticles, addr 0x48ecd90, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetParticles(::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>> particles, int32_t size);

  /// @brief Method GetParticles, addr 0x48ecce0, size 0xb0, virtual false, abstract: false, final false
  inline int32_t GetParticles(::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>> particles, int32_t size, int32_t offset);

  /// @brief Method GetParticlesWithNativeArray, addr 0x48ecc74, size 0x6c, virtual false, abstract: false, final false
  inline int32_t GetParticlesWithNativeArray(::System::IntPtr particles, int32_t particlesLength, int32_t size, int32_t offset);

  /// @brief Method GetPlaybackState, addr 0x48ece4c, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_PlaybackState GetPlaybackState();

  /// @brief Method GetPlaybackState_Injected, addr 0x48ecec4, size 0x44, virtual false, abstract: false, final false
  inline void GetPlaybackState_Injected(::ByRef<::UnityEngine::ParticleSystem_PlaybackState> ret);

  /// @brief Method GetTrailDataInternal, addr 0x48ecf90, size 0x44, virtual false, abstract: false, final false
  inline void GetTrailDataInternal(::ByRef<::UnityEngine::ParticleSystem_Trails> trailData);

  /// @brief Method GetTrails, addr 0x48ecfd4, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_Trails GetTrails();

  /// @brief Method GetTrails, addr 0x48ed1ac, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetTrails(::ByRef<::UnityEngine::ParticleSystem_Trails> trailData);

  /// @brief Method IsAlive, addr 0x48ed6ec, size 0x40, virtual false, abstract: false, final false
  inline bool IsAlive();

  /// @brief Method IsAlive, addr 0x48ed6a8, size 0x44, virtual false, abstract: false, final false
  inline bool IsAlive(bool withChildren);

  static inline ::UnityEngine::ParticleSystem* New_ctor();

  /// @brief Method Pause, addr 0x48ed504, size 0x40, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Pause, addr 0x48ed4c0, size 0x44, virtual false, abstract: false, final false
  inline void Pause(bool withChildren);

  /// @brief Method Play, addr 0x48ed480, size 0x40, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Play, addr 0x48ed43c, size 0x44, virtual false, abstract: false, final false
  inline void Play(bool withChildren);

  /// @brief Method ResetPreMappedBufferMemory, addr 0x48eda08, size 0x28, virtual false, abstract: false, final false
  static inline void ResetPreMappedBufferMemory();

  /// @brief Method ScheduleManagedJob, addr 0x48edd10, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleManagedJob(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> additionalData);

  /// @brief Method ScheduleManagedJob_Injected, addr 0x48edd6c, size 0x54, virtual false, abstract: false, final false
  static inline void ScheduleManagedJob_Injected(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, ::cordl_internals::Ptr<void> additionalData,
                                                 ::ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method SetCustomParticleData, addr 0x48ecda4, size 0x54, virtual false, abstract: false, final false
  inline void SetCustomParticleData(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* customData, ::UnityEngine::ParticleSystemCustomData streamIndex);

  /// @brief Method SetManagedJobHandle, addr 0x48edc7c, size 0x50, virtual false, abstract: false, final false
  inline void SetManagedJobHandle(::Unity::Jobs::JobHandle handle);

  /// @brief Method SetManagedJobHandle_Injected, addr 0x48edccc, size 0x44, virtual false, abstract: false, final false
  inline void SetManagedJobHandle_Injected(::ByRef<::Unity::Jobs::JobHandle> handle);

  /// @brief Method SetMaximumPreMappedBufferCounts, addr 0x48eda30, size 0x44, virtual false, abstract: false, final false
  static inline void SetMaximumPreMappedBufferCounts(int32_t vertexBuffersCount, int32_t indexBuffersCount);

  /// @brief Method SetParticles, addr 0x48ec9f8, size 0x4c, virtual false, abstract: false, final false
  inline void SetParticles(::ByRef<::ArrayW<::UnityEngine::ParticleSystem_Particle, ::Array<::UnityEngine::ParticleSystem_Particle>*>> particles);

  /// @brief Method SetParticles, addr 0x48ec9a0, size 0x58, virtual false, abstract: false, final false
  inline void SetParticles(::ByRef<::ArrayW<::UnityEngine::ParticleSystem_Particle, ::Array<::UnityEngine::ParticleSystem_Particle>*>> particles, int32_t size);

  /// @brief Method SetParticles, addr 0x48ec944, size 0x5c, virtual false, abstract: false, final false
  inline void SetParticles(::ByRef<::ArrayW<::UnityEngine::ParticleSystem_Particle, ::Array<::UnityEngine::ParticleSystem_Particle>*>> particles, int32_t size, int32_t offset);

  /// @brief Method SetParticles, addr 0x48ecb68, size 0xc, virtual false, abstract: false, final false
  inline void SetParticles(::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>> particles);

  /// @brief Method SetParticles, addr 0x48ecb60, size 0x8, virtual false, abstract: false, final false
  inline void SetParticles(::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>> particles, int32_t size);

  /// @brief Method SetParticles, addr 0x48ecab0, size 0xb0, virtual false, abstract: false, final false
  inline void SetParticles(::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>> particles, int32_t size, int32_t offset);

  /// @brief Method SetParticlesWithNativeArray, addr 0x48eca44, size 0x6c, virtual false, abstract: false, final false
  inline void SetParticlesWithNativeArray(::System::IntPtr particles, int32_t particlesLength, int32_t size, int32_t offset);

  /// @brief Method SetPlaybackState, addr 0x48ecf08, size 0x44, virtual false, abstract: false, final false
  inline void SetPlaybackState(::UnityEngine::ParticleSystem_PlaybackState playbackState);

  /// @brief Method SetPlaybackState_Injected, addr 0x48ecf4c, size 0x44, virtual false, abstract: false, final false
  inline void SetPlaybackState_Injected(::ByRef<::UnityEngine::ParticleSystem_PlaybackState> playbackState);

  /// @brief Method SetTrails, addr 0x48ed22c, size 0x44, virtual false, abstract: false, final false
  inline void SetTrails(::UnityEngine::ParticleSystem_Trails trailData);

  /// @brief Method SetTrails_Injected, addr 0x48ed270, size 0x44, virtual false, abstract: false, final false
  inline void SetTrails_Injected(::ByRef<::UnityEngine::ParticleSystem_Trails> trailData);

  /// @brief Method Simulate, addr 0x48ed3e4, size 0x58, virtual false, abstract: false, final false
  inline void Simulate(float_t t);

  /// @brief Method Simulate, addr 0x48ed388, size 0x5c, virtual false, abstract: false, final false
  inline void Simulate(float_t t, bool withChildren);

  /// @brief Method Simulate, addr 0x48ed320, size 0x68, virtual false, abstract: false, final false
  inline void Simulate(float_t t, bool withChildren, bool restart);

  /// @brief Method Simulate, addr 0x48ed2b4, size 0x6c, virtual false, abstract: false, final false
  inline void Simulate(float_t t, bool withChildren, bool restart, bool fixedTimeStep);

  /// @brief Method Stop, addr 0x48ed5e0, size 0x44, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Stop, addr 0x48ed598, size 0x48, virtual false, abstract: false, final false
  inline void Stop(bool withChildren);

  /// @brief Method Stop, addr 0x48ed544, size 0x54, virtual false, abstract: false, final false
  inline void Stop(bool withChildren, ::UnityEngine::ParticleSystemStopBehavior stopBehavior);

  /// @brief Method TriggerSubEmitter, addr 0x48ed85c, size 0x48, virtual false, abstract: false, final false
  inline void TriggerSubEmitter(int32_t subEmitterIndex);

  /// @brief Method TriggerSubEmitter, addr 0x48ed8f8, size 0x68, virtual false, abstract: false, final false
  inline void TriggerSubEmitter(int32_t subEmitterIndex, ::ByRef<::UnityEngine::ParticleSystem_Particle> particle);

  /// @brief Method TriggerSubEmitter, addr 0x48ed8a4, size 0x54, virtual false, abstract: false, final false
  inline void TriggerSubEmitter(int32_t subEmitterIndex, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>* particles);

  /// @brief Method TriggerSubEmitterForParticle, addr 0x48ed960, size 0x54, virtual false, abstract: false, final false
  inline void TriggerSubEmitterForParticle(int32_t subEmitterIndex, ::UnityEngine::ParticleSystem_Particle particle);

  /// @brief Method TriggerSubEmitterForParticle_Injected, addr 0x48ed9b4, size 0x54, virtual false, abstract: false, final false
  inline void TriggerSubEmitterForParticle_Injected(int32_t subEmitterIndex, ::ByRef<::UnityEngine::ParticleSystem_Particle> particle);

  /// @brief Method .ctor, addr 0x48edf10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_automaticCullingEnabled, addr 0x48ec3ec, size 0x3c, virtual false, abstract: false, final false
  inline bool get_automaticCullingEnabled();

  /// @brief Method get_collision, addr 0x48edebc, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_CollisionModule get_collision();

  /// @brief Method get_colorBySpeed, addr 0x48ede68, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_ColorBySpeedModule get_colorBySpeed();

  /// @brief Method get_colorOverLifetime, addr 0x48ede5c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_ColorOverLifetimeModule get_colorOverLifetime();

  /// @brief Method get_customData, addr 0x48edf04, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_CustomDataModule get_customData();

  /// @brief Method get_duration, addr 0x48eb328, size 0x40, virtual false, abstract: false, final false
  inline float_t get_duration();

  /// @brief Method get_emission, addr 0x48eb4f8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_EmissionModule get_emission();

  /// @brief Method get_emissionRate, addr 0x48eb5c4, size 0x40, virtual false, abstract: false, final false
  inline float_t get_emissionRate();

  /// @brief Method get_enableEmission, addr 0x48eb4b4, size 0x44, virtual false, abstract: false, final false
  inline bool get_enableEmission();

  /// @brief Method get_externalForces, addr 0x48edea4, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_ExternalForcesModule get_externalForces();

  /// @brief Method get_forceOverLifetime, addr 0x48ede50, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_ForceOverLifetimeModule get_forceOverLifetime();

  /// @brief Method get_gravityModifier, addr 0x48ebfc4, size 0x40, virtual false, abstract: false, final false
  inline float_t get_gravityModifier();

  /// @brief Method get_has3DParticleRotations, addr 0x48edb30, size 0x3c, virtual false, abstract: false, final false
  inline bool get_has3DParticleRotations();

  /// @brief Method get_hasNonUniformParticleSizes, addr 0x48edb6c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasNonUniformParticleSizes();

  /// @brief Method get_inheritVelocity, addr 0x48ede38, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_InheritVelocityModule get_inheritVelocity();

  /// @brief Method get_isEmitting, addr 0x48ec4a0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isEmitting();

  /// @brief Method get_isPaused, addr 0x48ec518, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPaused();

  /// @brief Method get_isPlaying, addr 0x48ec464, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method get_isStopped, addr 0x48ec4dc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isStopped();

  /// @brief Method get_lifetimeByEmitterSpeed, addr 0x48ede44, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule get_lifetimeByEmitterSpeed();

  /// @brief Method get_lights, addr 0x48edeec, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_LightsModule get_lights();

  /// @brief Method get_limitVelocityOverLifetime, addr 0x48ede2c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule get_limitVelocityOverLifetime();

  /// @brief Method get_loop, addr 0x48eb110, size 0x44, virtual false, abstract: false, final false
  inline bool get_loop();

  /// @brief Method get_main, addr 0x48eb03c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_MainModule get_main();

  /// @brief Method get_maxParticles, addr 0x48ec0d4, size 0x40, virtual false, abstract: false, final false
  inline int32_t get_maxParticles();

  /// @brief Method get_noise, addr 0x48edeb0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_NoiseModule get_noise();

  /// @brief Method get_particleCount, addr 0x48ec554, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_particleCount();

  /// @brief Method get_playOnAwake, addr 0x48eb21c, size 0x44, virtual false, abstract: false, final false
  inline bool get_playOnAwake();

  /// @brief Method get_playbackSpeed, addr 0x48eb3a4, size 0x40, virtual false, abstract: false, final false
  inline float_t get_playbackSpeed();

  /// @brief Method get_proceduralSimulationSupported, addr 0x48ec428, size 0x3c, virtual false, abstract: false, final false
  inline bool get_proceduralSimulationSupported();

  /// @brief Method get_randomSeed, addr 0x48ec654, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_randomSeed();

  /// @brief Method get_rotationBySpeed, addr 0x48ede98, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_RotationBySpeedModule get_rotationBySpeed();

  /// @brief Method get_rotationOverLifetime, addr 0x48ede8c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_RotationOverLifetimeModule get_rotationOverLifetime();

  /// @brief Method get_scalingMode, addr 0x48ec2e4, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemScalingMode get_scalingMode();

  /// @brief Method get_shape, addr 0x48ede14, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_ShapeModule get_shape();

  /// @brief Method get_simulationSpace, addr 0x48ec1dc, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemSimulationSpace get_simulationSpace();

  /// @brief Method get_sizeBySpeed, addr 0x48ede80, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_SizeBySpeedModule get_sizeBySpeed();

  /// @brief Method get_sizeOverLifetime, addr 0x48ede74, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_SizeOverLifetimeModule get_sizeOverLifetime();

  /// @brief Method get_startColor, addr 0x48eb90c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_startColor();

  /// @brief Method get_startDelay, addr 0x48eaffc, size 0x40, virtual false, abstract: false, final false
  inline float_t get_startDelay();

  /// @brief Method get_startLifetime, addr 0x48ebeb4, size 0x40, virtual false, abstract: false, final false
  inline float_t get_startLifetime();

  /// @brief Method get_startRotation, addr 0x48ebaa8, size 0x40, virtual false, abstract: false, final false
  inline float_t get_startRotation();

  /// @brief Method get_startRotation3D, addr 0x48ebbb8, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_startRotation3D();

  /// @brief Method get_startSize, addr 0x48eb7fc, size 0x40, virtual false, abstract: false, final false
  inline float_t get_startSize();

  /// @brief Method get_startSpeed, addr 0x48eb6ec, size 0x40, virtual false, abstract: false, final false
  inline float_t get_startSpeed();

  /// @brief Method get_subEmitters, addr 0x48eded4, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_SubEmittersModule get_subEmitters();

  /// @brief Method get_textureSheetAnimation, addr 0x48edee0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_TextureSheetAnimationModule get_textureSheetAnimation();

  /// @brief Method get_time, addr 0x48ec590, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method get_totalTime, addr 0x48ec618, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_totalTime();

  /// @brief Method get_trails, addr 0x48edef8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_TrailModule get_trails();

  /// @brief Method get_trigger, addr 0x48edec8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_TriggerModule get_trigger();

  /// @brief Method get_useAutoRandomSeed, addr 0x48ec6d4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useAutoRandomSeed();

  /// @brief Method get_velocityOverLifetime, addr 0x48ede20, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem_VelocityOverLifetimeModule get_velocityOverLifetime();

  /// @brief Method set_emissionRate, addr 0x48eb640, size 0x54, virtual false, abstract: false, final false
  inline void set_emissionRate(float_t value);

  /// @brief Method set_enableEmission, addr 0x48eb538, size 0x48, virtual false, abstract: false, final false
  inline void set_enableEmission(bool value);

  /// @brief Method set_gravityModifier, addr 0x48ec040, size 0x48, virtual false, abstract: false, final false
  inline void set_gravityModifier(float_t value);

  /// @brief Method set_loop, addr 0x48eb190, size 0x48, virtual false, abstract: false, final false
  inline void set_loop(bool value);

  /// @brief Method set_maxParticles, addr 0x48ec150, size 0x48, virtual false, abstract: false, final false
  inline void set_maxParticles(int32_t value);

  /// @brief Method set_playOnAwake, addr 0x48eb29c, size 0x48, virtual false, abstract: false, final false
  inline void set_playOnAwake(bool value);

  /// @brief Method set_playbackSpeed, addr 0x48eb420, size 0x48, virtual false, abstract: false, final false
  inline void set_playbackSpeed(float_t value);

  /// @brief Method set_randomSeed, addr 0x48ec690, size 0x44, virtual false, abstract: false, final false
  inline void set_randomSeed(uint32_t value);

  /// @brief Method set_scalingMode, addr 0x48ec360, size 0x48, virtual false, abstract: false, final false
  inline void set_scalingMode(::UnityEngine::ParticleSystemScalingMode value);

  /// @brief Method set_simulationSpace, addr 0x48ec258, size 0x48, virtual false, abstract: false, final false
  inline void set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace value);

  /// @brief Method set_startColor, addr 0x48eb9ec, size 0x5c, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::Color value);

  /// @brief Method set_startDelay, addr 0x48eb07c, size 0x48, virtual false, abstract: false, final false
  inline void set_startDelay(float_t value);

  /// @brief Method set_startLifetime, addr 0x48ebf30, size 0x48, virtual false, abstract: false, final false
  inline void set_startLifetime(float_t value);

  /// @brief Method set_startRotation, addr 0x48ebb24, size 0x48, virtual false, abstract: false, final false
  inline void set_startRotation(float_t value);

  /// @brief Method set_startRotation3D, addr 0x48ebd20, size 0xb0, virtual false, abstract: false, final false
  inline void set_startRotation3D(::UnityEngine::Vector3 value);

  /// @brief Method set_startSize, addr 0x48eb878, size 0x48, virtual false, abstract: false, final false
  inline void set_startSize(float_t value);

  /// @brief Method set_startSpeed, addr 0x48eb768, size 0x48, virtual false, abstract: false, final false
  inline void set_startSpeed(float_t value);

  /// @brief Method set_time, addr 0x48ec5cc, size 0x4c, virtual false, abstract: false, final false
  inline void set_time(float_t value);

  /// @brief Method set_useAutoRandomSeed, addr 0x48ec710, size 0x44, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17277 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ParticleSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem*, "UnityEngine", "ParticleSystem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_CollisionModule, "UnityEngine", "ParticleSystem/CollisionModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_ColorBySpeedModule, "UnityEngine", "ParticleSystem/ColorBySpeedModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_ColorOverLifetimeModule, "UnityEngine", "ParticleSystem/ColorOverLifetimeModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_CustomDataModule, "UnityEngine", "ParticleSystem/CustomDataModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_EmissionModule, "UnityEngine", "ParticleSystem/EmissionModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_EmitParams, "UnityEngine", "ParticleSystem/EmitParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_ExternalForcesModule, "UnityEngine", "ParticleSystem/ExternalForcesModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_ForceOverLifetimeModule, "UnityEngine", "ParticleSystem/ForceOverLifetimeModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_InheritVelocityModule, "UnityEngine", "ParticleSystem/InheritVelocityModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule, "UnityEngine", "ParticleSystem/LifetimeByEmitterSpeedModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_LightsModule, "UnityEngine", "ParticleSystem/LightsModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, "UnityEngine", "ParticleSystem/LimitVelocityOverLifetimeModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_MainModule, "UnityEngine", "ParticleSystem/MainModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_MinMaxCurve, "UnityEngine", "ParticleSystem/MinMaxCurve");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_MinMaxGradient, "UnityEngine", "ParticleSystem/MinMaxGradient");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_NoiseModule, "UnityEngine", "ParticleSystem/NoiseModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_Particle, "UnityEngine", "ParticleSystem/Particle");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_PlaybackState, "UnityEngine", "ParticleSystem/PlaybackState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_RotationBySpeedModule, "UnityEngine", "ParticleSystem/RotationBySpeedModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_RotationOverLifetimeModule, "UnityEngine", "ParticleSystem/RotationOverLifetimeModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_ShapeModule, "UnityEngine", "ParticleSystem/ShapeModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_SizeBySpeedModule, "UnityEngine", "ParticleSystem/SizeBySpeedModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_SizeOverLifetimeModule, "UnityEngine", "ParticleSystem/SizeOverLifetimeModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_SubEmittersModule, "UnityEngine", "ParticleSystem/SubEmittersModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_TextureSheetAnimationModule, "UnityEngine", "ParticleSystem/TextureSheetAnimationModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_TrailModule, "UnityEngine", "ParticleSystem/TrailModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_Trails, "UnityEngine", "ParticleSystem/Trails");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_TriggerModule, "UnityEngine", "ParticleSystem/TriggerModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, "UnityEngine", "ParticleSystem/VelocityOverLifetimeModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlaybackState_ParticleSystem_Collision, "UnityEngine", "ParticleSystem/PlaybackState/Collision");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlaybackState_ParticleSystem_Emission, "UnityEngine", "ParticleSystem/PlaybackState/Emission");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlaybackState_ParticleSystem_Force, "UnityEngine", "ParticleSystem/PlaybackState/Force");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlaybackState_ParticleSystem_Initial, "UnityEngine", "ParticleSystem/PlaybackState/Initial");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlaybackState_ParticleSystem_Lights, "UnityEngine", "ParticleSystem/PlaybackState/Lights");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlaybackState_ParticleSystem_Noise, "UnityEngine", "ParticleSystem/PlaybackState/Noise");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlaybackState_ParticleSystem_Seed, "UnityEngine", "ParticleSystem/PlaybackState/Seed");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlaybackState_ParticleSystem_Seed4, "UnityEngine", "ParticleSystem/PlaybackState/Seed4");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlaybackState_ParticleSystem_Shape, "UnityEngine", "ParticleSystem/PlaybackState/Shape");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlaybackState_ParticleSystem_Trail, "UnityEngine", "ParticleSystem/PlaybackState/Trail");
