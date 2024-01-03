#pragma once
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
struct ParticleSystemGradientMode;
}
namespace UnityEngine {
struct ParticleSystemStopBehavior;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct __ParticleSystem__EmissionModule;
}
namespace UnityEngine {
struct __ParticleSystem__EmitParams;
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
struct __ParticleSystem__Particle;
}
namespace UnityEngine {
struct __ParticleSystem__ShapeModule;
}
namespace UnityEngine {
struct __ParticleSystem__SubEmittersModule;
}
// Forward declare root types
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct __ParticleSystem__EmissionModule;
}
namespace UnityEngine {
struct __ParticleSystem__EmitParams;
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
struct __ParticleSystem__Particle;
}
namespace UnityEngine {
struct __ParticleSystem__ShapeModule;
}
namespace UnityEngine {
struct __ParticleSystem__SubEmittersModule;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ParticleSystem);
MARK_VAL_T(::UnityEngine::__ParticleSystem__EmissionModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__EmitParams);
MARK_VAL_T(::UnityEngine::__ParticleSystem__MainModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__MinMaxCurve);
MARK_VAL_T(::UnityEngine::__ParticleSystem__MinMaxGradient);
MARK_VAL_T(::UnityEngine::__ParticleSystem__Particle);
MARK_VAL_T(::UnityEngine::__ParticleSystem__ShapeModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__SubEmittersModule);
// Type: ::MainModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15882))
// CS Name: ::ParticleSystem::MainModule
struct CORDL_TYPE __ParticleSystem__MainModule {
public:
  // Declarations
  __declspec(property(get = get_duration)) float_t duration;

  __declspec(property(get = get_loop)) bool loop;

  __declspec(property(put = set_startLifetime))::UnityEngine::__ParticleSystem__MinMaxCurve startLifetime;

  __declspec(property(put = set_startSpeed))::UnityEngine::__ParticleSystem__MinMaxCurve startSpeed;

  __declspec(property(get = get_startSpeedMultiplier, put = set_startSpeedMultiplier)) float_t startSpeedMultiplier;

  __declspec(property(get = get_startColor, put = set_startColor))::UnityEngine::__ParticleSystem__MinMaxGradient startColor;

  __declspec(property(put = set_simulationSpeed)) float_t simulationSpeed;

  __declspec(property(get = get_maxParticles, put = set_maxParticles)) int32_t maxParticles;

  /// @brief Method .ctor, addr 0x2d10d9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  /// @brief Method get_duration, addr 0x2d10fb4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_duration();

  /// @brief Method get_loop, addr 0x2d1102c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_loop();

  /// @brief Method set_startLifetime, addr 0x2d110a4, size 0x44, virtual false, abstract: false, final false
  inline void set_startLifetime(::UnityEngine::__ParticleSystem__MinMaxCurve value);

  /// @brief Method set_startSpeed, addr 0x2d1112c, size 0x44, virtual false, abstract: false, final false
  inline void set_startSpeed(::UnityEngine::__ParticleSystem__MinMaxCurve value);

  /// @brief Method get_startSpeedMultiplier, addr 0x2d111b4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startSpeedMultiplier();

  /// @brief Method set_startSpeedMultiplier, addr 0x2d1122c, size 0x4c, virtual false, abstract: false, final false
  inline void set_startSpeedMultiplier(float_t value);

  /// @brief Method get_startColor, addr 0x2d112c4, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__MinMaxGradient get_startColor();

  /// @brief Method set_startColor, addr 0x2d11380, size 0x44, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::__ParticleSystem__MinMaxGradient value);

  /// @brief Method set_simulationSpeed, addr 0x2d11408, size 0x4c, virtual false, abstract: false, final false
  inline void set_simulationSpeed(float_t value);

  /// @brief Method get_maxParticles, addr 0x2d114a0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_maxParticles();

  /// @brief Method set_maxParticles, addr 0x2d11518, size 0x44, virtual false, abstract: false, final false
  inline void set_maxParticles(int32_t value);

  /// @brief Method get_duration_Injected, addr 0x2d10ff0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_duration_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method get_loop_Injected, addr 0x2d11068, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_loop_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method set_startLifetime_Injected, addr 0x2d110e8, size 0x44, virtual false, abstract: false, final false
  static inline void set_startLifetime_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve> value);

  /// @brief Method set_startSpeed_Injected, addr 0x2d11170, size 0x44, virtual false, abstract: false, final false
  static inline void set_startSpeed_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve> value);

  /// @brief Method get_startSpeedMultiplier_Injected, addr 0x2d111f0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startSpeedMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method set_startSpeedMultiplier_Injected, addr 0x2d11278, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startSpeedMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value);

  /// @brief Method get_startColor_Injected, addr 0x2d1133c, size 0x44, virtual false, abstract: false, final false
  static inline void get_startColor_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxGradient> ret);

  /// @brief Method set_startColor_Injected, addr 0x2d113c4, size 0x44, virtual false, abstract: false, final false
  static inline void set_startColor_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxGradient> value);

  /// @brief Method set_simulationSpeed_Injected, addr 0x2d11454, size 0x4c, virtual false, abstract: false, final false
  static inline void set_simulationSpeed_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value);

  /// @brief Method get_maxParticles_Injected, addr 0x2d114dc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_maxParticles_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self);

  /// @brief Method set_maxParticles_Injected, addr 0x2d1155c, size 0x44, virtual false, abstract: false, final false
  static inline void set_maxParticles_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, int32_t value);

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityEngine::ParticleSystem*", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__MainModule(::UnityEngine::ParticleSystem* m_ParticleSystem) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__MainModule();

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* m_ParticleSystem;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15883))
// CS Name: ::ParticleSystem::EmissionModule
struct CORDL_TYPE __ParticleSystem__EmissionModule {
public:
  // Declarations
  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  /// @brief Method .ctor, addr 0x2d10da8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  /// @brief Method get_enabled, addr 0x2d115a0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method set_enabled, addr 0x2d11618, size 0x44, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method get_enabled_Injected, addr 0x2d115dc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enabled_Injected(ByRef<::UnityEngine::__ParticleSystem__EmissionModule> _unity_self);

  /// @brief Method set_enabled_Injected, addr 0x2d1165c, size 0x44, virtual false, abstract: false, final false
  static inline void set_enabled_Injected(ByRef<::UnityEngine::__ParticleSystem__EmissionModule> _unity_self, bool value);

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityEngine::ParticleSystem*", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__EmissionModule(::UnityEngine::ParticleSystem* m_ParticleSystem) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__EmissionModule();

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* m_ParticleSystem;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15884))
// CS Name: ::ParticleSystem::ShapeModule
struct CORDL_TYPE __ParticleSystem__ShapeModule {
public:
  // Declarations
  __declspec(property(get = get_meshRenderer, put = set_meshRenderer))::UnityEngine::MeshRenderer* meshRenderer;

  __declspec(property(put = set_rotation))::UnityEngine::Vector3 rotation;

  /// @brief Method .ctor, addr 0x2d10db4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  /// @brief Method get_meshRenderer, addr 0x2d116a0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshRenderer* get_meshRenderer();

  /// @brief Method set_meshRenderer, addr 0x2d11718, size 0x44, virtual false, abstract: false, final false
  inline void set_meshRenderer(::UnityEngine::MeshRenderer* value);

  /// @brief Method set_rotation, addr 0x2d117a0, size 0x54, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Vector3 value);

  /// @brief Method get_meshRenderer_Injected, addr 0x2d116dc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::MeshRenderer* get_meshRenderer_Injected(ByRef<::UnityEngine::__ParticleSystem__ShapeModule> _unity_self);

  /// @brief Method set_meshRenderer_Injected, addr 0x2d1175c, size 0x44, virtual false, abstract: false, final false
  static inline void set_meshRenderer_Injected(ByRef<::UnityEngine::__ParticleSystem__ShapeModule> _unity_self, ::UnityEngine::MeshRenderer* value);

  /// @brief Method set_rotation_Injected, addr 0x2d117f4, size 0x44, virtual false, abstract: false, final false
  static inline void set_rotation_Injected(ByRef<::UnityEngine::__ParticleSystem__ShapeModule> _unity_self, ByRef<::UnityEngine::Vector3> value);

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityEngine::ParticleSystem*", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__ShapeModule(::UnityEngine::ParticleSystem* m_ParticleSystem) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__ShapeModule();

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__ShapeModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__ShapeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::SubEmittersModule
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15885))
// CS Name: ::ParticleSystem::SubEmittersModule
struct CORDL_TYPE __ParticleSystem__SubEmittersModule {
public:
  // Declarations
  __declspec(property(get = get_subEmittersCount)) int32_t subEmittersCount;

  /// @brief Method .ctor, addr 0x2d10dc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ParticleSystem* particleSystem);

  /// @brief Method get_subEmittersCount, addr 0x2d11838, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_subEmittersCount();

  /// @brief Method GetSubEmitterSystem, addr 0x2d118b0, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystem* GetSubEmitterSystem(int32_t index);

  /// @brief Method get_subEmittersCount_Injected, addr 0x2d11874, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_subEmittersCount_Injected(ByRef<::UnityEngine::__ParticleSystem__SubEmittersModule> _unity_self);

  /// @brief Method GetSubEmitterSystem_Injected, addr 0x2d118f4, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::ParticleSystem* GetSubEmitterSystem_Injected(ByRef<::UnityEngine::__ParticleSystem__SubEmittersModule> _unity_self, int32_t index);

  // Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityEngine::ParticleSystem*", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__SubEmittersModule(::UnityEngine::ParticleSystem* m_ParticleSystem) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__SubEmittersModule();

  /// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* m_ParticleSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__SubEmittersModule, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ParticleSystem__SubEmittersModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::MinMaxCurve
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15892))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15886))
// CS Name: ::ParticleSystem::MinMaxCurve
struct CORDL_TYPE __ParticleSystem__MinMaxCurve {
public:
  // Declarations
  __declspec(property(put = set_constantMax)) float_t constantMax;

  __declspec(property(put = set_constantMin)) float_t constantMin;

  /// @brief Method .ctor, addr 0x2d11938, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t constant);

  /// @brief Method .ctor, addr 0x2d1194c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(float_t min, float_t max);

  /// @brief Method set_constantMax, addr 0x2d11968, size 0x8, virtual false, abstract: false, final false
  inline void set_constantMax(float_t value);

  /// @brief Method set_constantMin, addr 0x2d11970, size 0x8, virtual false, abstract: false, final false
  inline void set_constantMin(float_t value);

  /// @brief Method op_Implicit, addr 0x2d11978, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::__ParticleSystem__MinMaxCurve op_Implicit___UnityEngine____ParticleSystem__MinMaxCurve(float_t constant);

  // Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemCurveMode", modifiers: "", def_value: None }, CppParam { name: "m_CurveMultiplier", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_CurveMin", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None }, CppParam { name: "m_CurveMax", ty: "::UnityEngine::AnimationCurve*",
  // modifiers: "", def_value: None }, CppParam { name: "m_ConstantMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ConstantMax", ty: "float_t", modifiers: "", def_value:
  // None }]
  constexpr __ParticleSystem__MinMaxCurve(::UnityEngine::ParticleSystemCurveMode m_Mode, float_t m_CurveMultiplier, ::UnityEngine::AnimationCurve* m_CurveMin,
                                          ::UnityEngine::AnimationCurve* m_CurveMax, float_t m_ConstantMin, float_t m_ConstantMax) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__MinMaxCurve();

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15893)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15887))
// CS Name: ::ParticleSystem::MinMaxGradient
struct CORDL_TYPE __ParticleSystem__MinMaxGradient {
public:
  // Declarations
  __declspec(property(get = get_color))::UnityEngine::Color color;

  /// @brief Method .ctor, addr 0x2d1198c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color color);

  /// @brief Method get_color, addr 0x2d119a8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method op_Implicit, addr 0x2d119b4, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::__ParticleSystem__MinMaxGradient op_Implicit___UnityEngine____ParticleSystem__MinMaxGradient(::UnityEngine::Color color);

  // Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemGradientMode", modifiers: "", def_value: None }, CppParam { name: "m_GradientMin", ty: "::UnityEngine::Gradient*",
  // modifiers: "", def_value: None }, CppParam { name: "m_GradientMax", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "m_ColorMin", ty: "::UnityEngine::Color",
  // modifiers: "", def_value: None }, CppParam { name: "m_ColorMax", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__MinMaxGradient(::UnityEngine::ParticleSystemGradientMode m_Mode, ::UnityEngine::Gradient* m_GradientMin, ::UnityEngine::Gradient* m_GradientMax,
                                             ::UnityEngine::Color m_ColorMin, ::UnityEngine::Color m_ColorMax) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__MinMaxGradient();

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10250)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15888))
// CS Name: ::ParticleSystem::Particle
struct CORDL_TYPE __ParticleSystem__Particle {
public:
  // Declarations
  __declspec(property(put = set_position))::UnityEngine::Vector3 position;

  __declspec(property(put = set_velocity))::UnityEngine::Vector3 velocity;

  __declspec(property(put = set_remainingLifetime)) float_t remainingLifetime;

  __declspec(property(put = set_startLifetime)) float_t startLifetime;

  __declspec(property(put = set_startColor))::UnityEngine::Color32 startColor;

  __declspec(property(put = set_randomSeed)) uint32_t randomSeed;

  __declspec(property(put = set_startSize)) float_t startSize;

  __declspec(property(put = set_rotation3D))::UnityEngine::Vector3 rotation3D;

  __declspec(property(put = set_angularVelocity3D))::UnityEngine::Vector3 angularVelocity3D;

  __declspec(property(put = set_lifetime)) float_t lifetime;

  /// @brief Method set_position, addr 0x2d10ecc, size 0xc, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_velocity, addr 0x2d10ed8, size 0xc, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

  /// @brief Method set_remainingLifetime, addr 0x2d119d0, size 0x8, virtual false, abstract: false, final false
  inline void set_remainingLifetime(float_t value);

  /// @brief Method set_startLifetime, addr 0x2d10eec, size 0x8, virtual false, abstract: false, final false
  inline void set_startLifetime(float_t value);

  /// @brief Method set_startColor, addr 0x2d10f58, size 0x8, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::Color32 value);

  /// @brief Method set_randomSeed, addr 0x2d10f60, size 0x8, virtual false, abstract: false, final false
  inline void set_randomSeed(uint32_t value);

  /// @brief Method set_startSize, addr 0x2d10ef4, size 0xc, virtual false, abstract: false, final false
  inline void set_startSize(float_t value);

  /// @brief Method set_rotation3D, addr 0x2d10f00, size 0x2c, virtual false, abstract: false, final false
  inline void set_rotation3D(::UnityEngine::Vector3 value);

  /// @brief Method set_angularVelocity3D, addr 0x2d10f2c, size 0x2c, virtual false, abstract: false, final false
  inline void set_angularVelocity3D(::UnityEngine::Vector3 value);

  /// @brief Method set_lifetime, addr 0x2d10ee4, size 0x8, virtual false, abstract: false, final false
  inline void set_lifetime(float_t value);

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

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__Particle();

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15888))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15889))
// CS Name: ::ParticleSystem::EmitParams
struct CORDL_TYPE __ParticleSystem__EmitParams {
public:
  // Declarations
  __declspec(property(put = set_position))::UnityEngine::Vector3 position;

  __declspec(property(put = set_applyShapeToPosition)) bool applyShapeToPosition;

  __declspec(property(put = set_rotation3D))::UnityEngine::Vector3 rotation3D;

  __declspec(property(put = set_startColor))::UnityEngine::Color32 startColor;

  /// @brief Method set_position, addr 0x2d119d8, size 0x14, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_applyShapeToPosition, addr 0x2d119ec, size 0xc, virtual false, abstract: false, final false
  inline void set_applyShapeToPosition(bool value);

  /// @brief Method set_rotation3D, addr 0x2d119f8, size 0x34, virtual false, abstract: false, final false
  inline void set_rotation3D(::UnityEngine::Vector3 value);

  /// @brief Method set_startColor, addr 0x2d11a2c, size 0x10, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::Color32 value);

  // Ctor Parameters [CppParam { name: "m_Particle", ty: "::UnityEngine::__ParticleSystem__Particle", modifiers: "", def_value: None }, CppParam { name: "m_PositionSet", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "m_VelocitySet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_AxisOfRotationSet", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "m_RotationSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_AngularVelocitySet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartSizeSet", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartColorSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_RandomSeedSet", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "m_StartLifetimeSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_MeshIndexSet", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "m_ApplyShapeToPosition", ty: "bool", modifiers: "", def_value: None }]
  constexpr __ParticleSystem__EmitParams(::UnityEngine::__ParticleSystem__Particle m_Particle, bool m_PositionSet, bool m_VelocitySet, bool m_AxisOfRotationSet, bool m_RotationSet,
                                         bool m_AngularVelocitySet, bool m_StartSizeSet, bool m_StartColorSet, bool m_RandomSeedSet, bool m_StartLifetimeSet, bool m_MeshIndexSet,
                                         bool m_ApplyShapeToPosition) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystem__EmitParams();

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
// Type: UnityEngine::ParticleSystem
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10238))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15890))
// CS Name: ::UnityEngine::ParticleSystem*
class CORDL_TYPE ParticleSystem : public ::UnityEngine::Component {
public:
  // Declarations
  using EmitParams = ::UnityEngine::__ParticleSystem__EmitParams;

  using Particle = ::UnityEngine::__ParticleSystem__Particle;

  using MinMaxGradient = ::UnityEngine::__ParticleSystem__MinMaxGradient;

  using MinMaxCurve = ::UnityEngine::__ParticleSystem__MinMaxCurve;

  using SubEmittersModule = ::UnityEngine::__ParticleSystem__SubEmittersModule;

  using ShapeModule = ::UnityEngine::__ParticleSystem__ShapeModule;

  using EmissionModule = ::UnityEngine::__ParticleSystem__EmissionModule;

  using MainModule = ::UnityEngine::__ParticleSystem__MainModule;

  __declspec(property(get = get_particleCount)) int32_t particleCount;

  __declspec(property(get = get_time)) float_t time;

  __declspec(property(put = set_randomSeed)) uint32_t randomSeed;

  __declspec(property(get = get_useAutoRandomSeed, put = set_useAutoRandomSeed)) bool useAutoRandomSeed;

  __declspec(property(get = get_main))::UnityEngine::__ParticleSystem__MainModule main;

  __declspec(property(get = get_emission))::UnityEngine::__ParticleSystem__EmissionModule emission;

  __declspec(property(get = get_shape))::UnityEngine::__ParticleSystem__ShapeModule shape;

  __declspec(property(get = get_subEmitters))::UnityEngine::__ParticleSystem__SubEmittersModule subEmitters;

  /// @brief Method get_particleCount, addr 0x2d10640, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_particleCount();

  /// @brief Method get_time, addr 0x2d1067c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method set_randomSeed, addr 0x2d106b8, size 0x44, virtual false, abstract: false, final false
  inline void set_randomSeed(uint32_t value);

  /// @brief Method get_useAutoRandomSeed, addr 0x2d106fc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useAutoRandomSeed();

  /// @brief Method set_useAutoRandomSeed, addr 0x2d10738, size 0x44, virtual false, abstract: false, final false
  inline void set_useAutoRandomSeed(bool value);

  /// @brief Method SetParticles, addr 0x2d1077c, size 0x5c, virtual false, abstract: false, final false
  inline void SetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles, int32_t size, int32_t offset);

  /// @brief Method SetParticles, addr 0x2d107d8, size 0x58, virtual false, abstract: false, final false
  inline void SetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles, int32_t size);

  /// @brief Method GetParticles, addr 0x2d10830, size 0x5c, virtual false, abstract: false, final false
  inline int32_t GetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles, int32_t size, int32_t offset);

  /// @brief Method GetParticles, addr 0x2d1088c, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles, int32_t size);

  /// @brief Method Simulate, addr 0x2d108e4, size 0x6c, virtual false, abstract: false, final false
  inline void Simulate(float_t t, bool withChildren, bool restart, bool fixedTimeStep);

  /// @brief Method Simulate, addr 0x2d10950, size 0x68, virtual false, abstract: false, final false
  inline void Simulate(float_t t, bool withChildren, bool restart);

  /// @brief Method Play, addr 0x2d109b8, size 0x44, virtual false, abstract: false, final false
  inline void Play(bool withChildren);

  /// @brief Method Play, addr 0x2d109fc, size 0x40, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Pause, addr 0x2d10a3c, size 0x44, virtual false, abstract: false, final false
  inline void Pause(bool withChildren);

  /// @brief Method Pause, addr 0x2d10a80, size 0x40, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Stop, addr 0x2d10ac0, size 0x54, virtual false, abstract: false, final false
  inline void Stop(bool withChildren, ::UnityEngine::ParticleSystemStopBehavior stopBehavior);

  /// @brief Method Stop, addr 0x2d10b14, size 0x48, virtual false, abstract: false, final false
  inline void Stop(bool withChildren);

  /// @brief Method Stop, addr 0x2d10b5c, size 0x44, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Clear, addr 0x2d10ba0, size 0x44, virtual false, abstract: false, final false
  inline void Clear(bool withChildren);

  /// @brief Method Clear, addr 0x2d10be4, size 0x40, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Emit, addr 0x2d10c24, size 0x44, virtual false, abstract: false, final false
  inline void Emit(int32_t count);

  /// @brief Method Emit_Internal, addr 0x2d10c68, size 0x44, virtual false, abstract: false, final false
  inline void Emit_Internal(int32_t count);

  /// @brief Method Emit, addr 0x2d10cac, size 0x54, virtual false, abstract: false, final false
  inline void Emit(::UnityEngine::__ParticleSystem__EmitParams emitParams, int32_t count);

  /// @brief Method EmitOld_Internal, addr 0x2d10d54, size 0x44, virtual false, abstract: false, final false
  inline void EmitOld_Internal(ByRef<::UnityEngine::__ParticleSystem__Particle> particle);

  /// @brief Method get_main, addr 0x2d10d98, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__MainModule get_main();

  /// @brief Method get_emission, addr 0x2d10da4, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__EmissionModule get_emission();

  /// @brief Method get_shape, addr 0x2d10db0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__ShapeModule get_shape();

  /// @brief Method get_subEmitters, addr 0x2d10dbc, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::__ParticleSystem__SubEmittersModule get_subEmitters();

  /// @brief Method Emit, addr 0x2d10dc8, size 0x104, virtual false, abstract: false, final false
  inline void Emit(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 velocity, float_t size, float_t lifetime, ::UnityEngine::Color32 color);

  /// @brief Method Emit, addr 0x2d10f68, size 0x44, virtual false, abstract: false, final false
  inline void Emit(::UnityEngine::__ParticleSystem__Particle particle);

  static inline ::UnityEngine::ParticleSystem* New_ctor();

  /// @brief Method .ctor, addr 0x2d10fac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Emit_Injected, addr 0x2d10d00, size 0x54, virtual false, abstract: false, final false
  inline void Emit_Injected(ByRef<::UnityEngine::__ParticleSystem__EmitParams> emitParams, int32_t count);

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystem(ParticleSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystem(ParticleSystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystem();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ParticleSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem*, "UnityEngine", "ParticleSystem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__EmissionModule, "UnityEngine", "ParticleSystem/EmissionModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__EmitParams, "UnityEngine", "ParticleSystem/EmitParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__MainModule, "UnityEngine", "ParticleSystem/MainModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__MinMaxCurve, "UnityEngine", "ParticleSystem/MinMaxCurve");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__MinMaxGradient, "UnityEngine", "ParticleSystem/MinMaxGradient");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__Particle, "UnityEngine", "ParticleSystem/Particle");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__ShapeModule, "UnityEngine", "ParticleSystem/ShapeModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__SubEmittersModule, "UnityEngine", "ParticleSystem/SubEmittersModule");
