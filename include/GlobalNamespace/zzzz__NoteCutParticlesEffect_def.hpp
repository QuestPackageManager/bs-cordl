#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteCutParticlesEffect)
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutParticlesEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteCutParticlesEffect);
// Type: ::NoteCutParticlesEffect
// SizeInfo { instance_size: 560, native_size: -1, calculated_instance_size: 560, calculated_native_size: 560, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15884)), TypeDefinitionIndex(TypeDefinitionIndex(15886)), TypeDefinitionIndex(TypeDefinitionIndex(15889)),
// TypeDefinitionIndex(TypeDefinitionIndex(15882)), TypeDefinitionIndex(TypeDefinitionIndex(10225))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4871)) CS Name: ::NoteCutParticlesEffect*
class CORDL_TYPE NoteCutParticlesEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _sparklesPS, offset 0x18, size 0x8
  __declspec(property(get = __get__sparklesPS, put = __set__sparklesPS))::UnityEngine::ParticleSystem* _sparklesPS;

  /// @brief Field _explosionPS, offset 0x20, size 0x8
  __declspec(property(get = __get__explosionPS, put = __set__explosionPS))::UnityEngine::ParticleSystem* _explosionPS;

  /// @brief Field _explosionCorePS, offset 0x28, size 0x8
  __declspec(property(get = __get__explosionCorePS, put = __set__explosionCorePS))::UnityEngine::ParticleSystem* _explosionCorePS;

  /// @brief Field _explosionPrePassBloomPS, offset 0x30, size 0x8
  __declspec(property(get = __get__explosionPrePassBloomPS, put = __set__explosionPrePassBloomPS))::UnityEngine::ParticleSystem* _explosionPrePassBloomPS;

  /// @brief Field _sparklesPSEmitParams, offset 0x38, size 0x90
  __declspec(property(get = __get__sparklesPSEmitParams, put = __set__sparklesPSEmitParams))::UnityEngine::__ParticleSystem__EmitParams _sparklesPSEmitParams;

  /// @brief Field _sparklesPSMainModule, offset 0xc8, size 0x8
  __declspec(property(get = __get__sparklesPSMainModule, put = __set__sparklesPSMainModule))::UnityEngine::__ParticleSystem__MainModule _sparklesPSMainModule;

  /// @brief Field _sparklesPSShapeModule, offset 0xd0, size 0x8
  __declspec(property(get = __get__sparklesPSShapeModule, put = __set__sparklesPSShapeModule))::UnityEngine::__ParticleSystem__ShapeModule _sparklesPSShapeModule;

  /// @brief Field _sparklesLifetimeMinMaxCurve, offset 0xd8, size 0x20
  __declspec(property(get = __get__sparklesLifetimeMinMaxCurve, put = __set__sparklesLifetimeMinMaxCurve))::UnityEngine::__ParticleSystem__MinMaxCurve _sparklesLifetimeMinMaxCurve;

  /// @brief Field _explosionPSEmitParams, offset 0xf8, size 0x90
  __declspec(property(get = __get__explosionPSEmitParams, put = __set__explosionPSEmitParams))::UnityEngine::__ParticleSystem__EmitParams _explosionPSEmitParams;

  /// @brief Field _explosionCorePSEmitParams, offset 0x188, size 0x90
  __declspec(property(get = __get__explosionCorePSEmitParams, put = __set__explosionCorePSEmitParams))::UnityEngine::__ParticleSystem__EmitParams _explosionCorePSEmitParams;

  /// @brief Field _explosionCorePSMainModule, offset 0x218, size 0x8
  __declspec(property(get = __get__explosionCorePSMainModule, put = __set__explosionCorePSMainModule))::UnityEngine::__ParticleSystem__MainModule _explosionCorePSMainModule;

  /// @brief Field _explosionCorePSShapeModule, offset 0x220, size 0x8
  __declspec(property(get = __get__explosionCorePSShapeModule, put = __set__explosionCorePSShapeModule))::UnityEngine::__ParticleSystem__ShapeModule _explosionCorePSShapeModule;

  /// @brief Field _explosionPrePassBloomPSShapeModule, offset 0x228, size 0x8
  __declspec(property(get = __get__explosionPrePassBloomPSShapeModule,
                      put = __set__explosionPrePassBloomPSShapeModule))::UnityEngine::__ParticleSystem__ShapeModule _explosionPrePassBloomPSShapeModule;

  constexpr ::UnityEngine::ParticleSystem*& __get__sparklesPS();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__sparklesPS() const;

  constexpr void __set__sparklesPS(::UnityEngine::ParticleSystem* value);

  constexpr ::UnityEngine::ParticleSystem*& __get__explosionPS();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__explosionPS() const;

  constexpr void __set__explosionPS(::UnityEngine::ParticleSystem* value);

  constexpr ::UnityEngine::ParticleSystem*& __get__explosionCorePS();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__explosionCorePS() const;

  constexpr void __set__explosionCorePS(::UnityEngine::ParticleSystem* value);

  constexpr ::UnityEngine::ParticleSystem*& __get__explosionPrePassBloomPS();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__explosionPrePassBloomPS() const;

  constexpr void __set__explosionPrePassBloomPS(::UnityEngine::ParticleSystem* value);

  constexpr ::UnityEngine::__ParticleSystem__EmitParams& __get__sparklesPSEmitParams();

  constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __get__sparklesPSEmitParams() const;

  constexpr void __set__sparklesPSEmitParams(::UnityEngine::__ParticleSystem__EmitParams value);

  constexpr ::UnityEngine::__ParticleSystem__MainModule& __get__sparklesPSMainModule();

  constexpr ::UnityEngine::__ParticleSystem__MainModule const& __get__sparklesPSMainModule() const;

  constexpr void __set__sparklesPSMainModule(::UnityEngine::__ParticleSystem__MainModule value);

  constexpr ::UnityEngine::__ParticleSystem__ShapeModule& __get__sparklesPSShapeModule();

  constexpr ::UnityEngine::__ParticleSystem__ShapeModule const& __get__sparklesPSShapeModule() const;

  constexpr void __set__sparklesPSShapeModule(::UnityEngine::__ParticleSystem__ShapeModule value);

  constexpr ::UnityEngine::__ParticleSystem__MinMaxCurve& __get__sparklesLifetimeMinMaxCurve();

  constexpr ::UnityEngine::__ParticleSystem__MinMaxCurve const& __get__sparklesLifetimeMinMaxCurve() const;

  constexpr void __set__sparklesLifetimeMinMaxCurve(::UnityEngine::__ParticleSystem__MinMaxCurve value);

  constexpr ::UnityEngine::__ParticleSystem__EmitParams& __get__explosionPSEmitParams();

  constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __get__explosionPSEmitParams() const;

  constexpr void __set__explosionPSEmitParams(::UnityEngine::__ParticleSystem__EmitParams value);

  constexpr ::UnityEngine::__ParticleSystem__EmitParams& __get__explosionCorePSEmitParams();

  constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __get__explosionCorePSEmitParams() const;

  constexpr void __set__explosionCorePSEmitParams(::UnityEngine::__ParticleSystem__EmitParams value);

  constexpr ::UnityEngine::__ParticleSystem__MainModule& __get__explosionCorePSMainModule();

  constexpr ::UnityEngine::__ParticleSystem__MainModule const& __get__explosionCorePSMainModule() const;

  constexpr void __set__explosionCorePSMainModule(::UnityEngine::__ParticleSystem__MainModule value);

  constexpr ::UnityEngine::__ParticleSystem__ShapeModule& __get__explosionCorePSShapeModule();

  constexpr ::UnityEngine::__ParticleSystem__ShapeModule const& __get__explosionCorePSShapeModule() const;

  constexpr void __set__explosionCorePSShapeModule(::UnityEngine::__ParticleSystem__ShapeModule value);

  constexpr ::UnityEngine::__ParticleSystem__ShapeModule& __get__explosionPrePassBloomPSShapeModule();

  constexpr ::UnityEngine::__ParticleSystem__ShapeModule const& __get__explosionPrePassBloomPSShapeModule() const;

  constexpr void __set__explosionPrePassBloomPSShapeModule(::UnityEngine::__ParticleSystem__ShapeModule value);

  /// @brief Method Awake, addr 0x239a95c, size 0x148, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method SpawnParticles, addr 0x239aaa4, size 0x4b0, virtual false, abstract: false, final false
  inline void SpawnParticles(::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal, ::UnityEngine::Vector3 saberDir, float_t saberSpeed, ::UnityEngine::Vector3 noteMovementVec,
                             ::UnityEngine::Color32 color, int32_t sparkleParticlesCount, int32_t explosionParticlesCount, float_t lifetimeMultiplier);

  static inline ::GlobalNamespace::NoteCutParticlesEffect* New_ctor();

  /// @brief Method .ctor, addr 0x239af54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutParticlesEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutParticlesEffect(NoteCutParticlesEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutParticlesEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutParticlesEffect(NoteCutParticlesEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutParticlesEffect();

public:
  /// @brief Field _sparklesPS, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* ____sparklesPS;

  /// @brief Field _explosionPS, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* ____explosionPS;

  /// @brief Field _explosionCorePS, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* ____explosionCorePS;

  /// @brief Field _explosionPrePassBloomPS, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* ____explosionPrePassBloomPS;

  /// @brief Field _sparklesPSEmitParams, offset: 0x38, size: 0x90, def value: None
  ::UnityEngine::__ParticleSystem__EmitParams ____sparklesPSEmitParams;

  /// @brief Field _sparklesPSMainModule, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::__ParticleSystem__MainModule ____sparklesPSMainModule;

  /// @brief Field _sparklesPSShapeModule, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::__ParticleSystem__ShapeModule ____sparklesPSShapeModule;

  /// @brief Field _sparklesLifetimeMinMaxCurve, offset: 0xd8, size: 0x20, def value: None
  ::UnityEngine::__ParticleSystem__MinMaxCurve ____sparklesLifetimeMinMaxCurve;

  /// @brief Field _explosionPSEmitParams, offset: 0xf8, size: 0x90, def value: None
  ::UnityEngine::__ParticleSystem__EmitParams ____explosionPSEmitParams;

  /// @brief Field _explosionCorePSEmitParams, offset: 0x188, size: 0x90, def value: None
  ::UnityEngine::__ParticleSystem__EmitParams ____explosionCorePSEmitParams;

  /// @brief Field _explosionCorePSMainModule, offset: 0x218, size: 0x8, def value: None
  ::UnityEngine::__ParticleSystem__MainModule ____explosionCorePSMainModule;

  /// @brief Field _explosionCorePSShapeModule, offset: 0x220, size: 0x8, def value: None
  ::UnityEngine::__ParticleSystem__ShapeModule ____explosionCorePSShapeModule;

  /// @brief Field _explosionPrePassBloomPSShapeModule, offset: 0x228, size: 0x8, def value: None
  ::UnityEngine::__ParticleSystem__ShapeModule ____explosionPrePassBloomPSShapeModule;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutParticlesEffect, 0x230>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____sparklesPS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____explosionPS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____explosionCorePS) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____explosionPrePassBloomPS) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____sparklesPSEmitParams) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____sparklesPSMainModule) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____sparklesPSShapeModule) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____sparklesLifetimeMinMaxCurve) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____explosionPSEmitParams) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____explosionCorePSEmitParams) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____explosionCorePSMainModule) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____explosionCorePSShapeModule) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____explosionPrePassBloomPSShapeModule) == 0x228, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteCutParticlesEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutParticlesEffect*, "", "NoteCutParticlesEffect");
