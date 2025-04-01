#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutParticlesEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteCutParticlesEffect)
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutParticlesEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteCutParticlesEffect);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem::EmitParams, UnityEngine.ParticleSystem::MainModule, UnityEngine.ParticleSystem::MinMaxCurve,
// UnityEngine.ParticleSystem::ShapeModule
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteCutParticlesEffect
class CORDL_TYPE NoteCutParticlesEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _explosionCorePS, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__explosionCorePS, put = __cordl_internal_set__explosionCorePS)) ::UnityW<::UnityEngine::ParticleSystem> _explosionCorePS;

  /// @brief Field _explosionCorePSEmitParams, offset 0x190, size 0x90
  __declspec(property(get = __cordl_internal_get__explosionCorePSEmitParams,
                      put = __cordl_internal_set__explosionCorePSEmitParams)) ::UnityEngine::ParticleSystem_EmitParams _explosionCorePSEmitParams;

  /// @brief Field _explosionCorePSMainModule, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get__explosionCorePSMainModule,
                      put = __cordl_internal_set__explosionCorePSMainModule)) ::UnityEngine::ParticleSystem_MainModule _explosionCorePSMainModule;

  /// @brief Field _explosionCorePSShapeModule, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get__explosionCorePSShapeModule,
                      put = __cordl_internal_set__explosionCorePSShapeModule)) ::UnityEngine::ParticleSystem_ShapeModule _explosionCorePSShapeModule;

  /// @brief Field _explosionPS, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__explosionPS, put = __cordl_internal_set__explosionPS)) ::UnityW<::UnityEngine::ParticleSystem> _explosionPS;

  /// @brief Field _explosionPSEmitParams, offset 0x100, size 0x90
  __declspec(property(get = __cordl_internal_get__explosionPSEmitParams, put = __cordl_internal_set__explosionPSEmitParams)) ::UnityEngine::ParticleSystem_EmitParams _explosionPSEmitParams;

  /// @brief Field _explosionPrePassBloomPS, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__explosionPrePassBloomPS, put = __cordl_internal_set__explosionPrePassBloomPS)) ::UnityW<::UnityEngine::ParticleSystem> _explosionPrePassBloomPS;

  /// @brief Field _explosionPrePassBloomPSShapeModule, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get__explosionPrePassBloomPSShapeModule,
                      put = __cordl_internal_set__explosionPrePassBloomPSShapeModule)) ::UnityEngine::ParticleSystem_ShapeModule _explosionPrePassBloomPSShapeModule;

  /// @brief Field _sparklesLifetimeMinMaxCurve, offset 0xe0, size 0x20
  __declspec(property(get = __cordl_internal_get__sparklesLifetimeMinMaxCurve,
                      put = __cordl_internal_set__sparklesLifetimeMinMaxCurve)) ::UnityEngine::ParticleSystem_MinMaxCurve _sparklesLifetimeMinMaxCurve;

  /// @brief Field _sparklesPS, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sparklesPS, put = __cordl_internal_set__sparklesPS)) ::UnityW<::UnityEngine::ParticleSystem> _sparklesPS;

  /// @brief Field _sparklesPSEmitParams, offset 0x40, size 0x90
  __declspec(property(get = __cordl_internal_get__sparklesPSEmitParams, put = __cordl_internal_set__sparklesPSEmitParams)) ::UnityEngine::ParticleSystem_EmitParams _sparklesPSEmitParams;

  /// @brief Field _sparklesPSMainModule, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__sparklesPSMainModule, put = __cordl_internal_set__sparklesPSMainModule)) ::UnityEngine::ParticleSystem_MainModule _sparklesPSMainModule;

  /// @brief Field _sparklesPSShapeModule, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__sparklesPSShapeModule, put = __cordl_internal_set__sparklesPSShapeModule)) ::UnityEngine::ParticleSystem_ShapeModule _sparklesPSShapeModule;

  /// @brief Method Awake, addr 0x3b7fc04, size 0x20c, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::NoteCutParticlesEffect* New_ctor();

  /// @brief Method SpawnParticles, addr 0x3b7fe10, size 0x4b0, virtual false, abstract: false, final false
  inline void SpawnParticles(::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal, ::UnityEngine::Vector3 saberDir, float_t saberSpeed, ::UnityEngine::Vector3 noteMovementVec,
                             ::UnityEngine::Color32 color, int32_t sparkleParticlesCount, int32_t explosionParticlesCount, float_t lifetimeMultiplier);

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__explosionCorePS() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__explosionCorePS();

  constexpr ::UnityEngine::ParticleSystem_EmitParams const& __cordl_internal_get__explosionCorePSEmitParams() const;

  constexpr ::UnityEngine::ParticleSystem_EmitParams& __cordl_internal_get__explosionCorePSEmitParams();

  constexpr ::UnityEngine::ParticleSystem_MainModule const& __cordl_internal_get__explosionCorePSMainModule() const;

  constexpr ::UnityEngine::ParticleSystem_MainModule& __cordl_internal_get__explosionCorePSMainModule();

  constexpr ::UnityEngine::ParticleSystem_ShapeModule const& __cordl_internal_get__explosionCorePSShapeModule() const;

  constexpr ::UnityEngine::ParticleSystem_ShapeModule& __cordl_internal_get__explosionCorePSShapeModule();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__explosionPS() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__explosionPS();

  constexpr ::UnityEngine::ParticleSystem_EmitParams const& __cordl_internal_get__explosionPSEmitParams() const;

  constexpr ::UnityEngine::ParticleSystem_EmitParams& __cordl_internal_get__explosionPSEmitParams();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__explosionPrePassBloomPS() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__explosionPrePassBloomPS();

  constexpr ::UnityEngine::ParticleSystem_ShapeModule const& __cordl_internal_get__explosionPrePassBloomPSShapeModule() const;

  constexpr ::UnityEngine::ParticleSystem_ShapeModule& __cordl_internal_get__explosionPrePassBloomPSShapeModule();

  constexpr ::UnityEngine::ParticleSystem_MinMaxCurve const& __cordl_internal_get__sparklesLifetimeMinMaxCurve() const;

  constexpr ::UnityEngine::ParticleSystem_MinMaxCurve& __cordl_internal_get__sparklesLifetimeMinMaxCurve();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__sparklesPS() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__sparklesPS();

  constexpr ::UnityEngine::ParticleSystem_EmitParams const& __cordl_internal_get__sparklesPSEmitParams() const;

  constexpr ::UnityEngine::ParticleSystem_EmitParams& __cordl_internal_get__sparklesPSEmitParams();

  constexpr ::UnityEngine::ParticleSystem_MainModule const& __cordl_internal_get__sparklesPSMainModule() const;

  constexpr ::UnityEngine::ParticleSystem_MainModule& __cordl_internal_get__sparklesPSMainModule();

  constexpr ::UnityEngine::ParticleSystem_ShapeModule const& __cordl_internal_get__sparklesPSShapeModule() const;

  constexpr ::UnityEngine::ParticleSystem_ShapeModule& __cordl_internal_get__sparklesPSShapeModule();

  constexpr void __cordl_internal_set__explosionCorePS(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__explosionCorePSEmitParams(::UnityEngine::ParticleSystem_EmitParams value);

  constexpr void __cordl_internal_set__explosionCorePSMainModule(::UnityEngine::ParticleSystem_MainModule value);

  constexpr void __cordl_internal_set__explosionCorePSShapeModule(::UnityEngine::ParticleSystem_ShapeModule value);

  constexpr void __cordl_internal_set__explosionPS(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__explosionPSEmitParams(::UnityEngine::ParticleSystem_EmitParams value);

  constexpr void __cordl_internal_set__explosionPrePassBloomPS(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__explosionPrePassBloomPSShapeModule(::UnityEngine::ParticleSystem_ShapeModule value);

  constexpr void __cordl_internal_set__sparklesLifetimeMinMaxCurve(::UnityEngine::ParticleSystem_MinMaxCurve value);

  constexpr void __cordl_internal_set__sparklesPS(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__sparklesPSEmitParams(::UnityEngine::ParticleSystem_EmitParams value);

  constexpr void __cordl_internal_set__sparklesPSMainModule(::UnityEngine::ParticleSystem_MainModule value);

  constexpr void __cordl_internal_set__sparklesPSShapeModule(::UnityEngine::ParticleSystem_ShapeModule value);

  /// @brief Method .ctor, addr 0x3b802c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutParticlesEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteCutParticlesEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutParticlesEffect(NoteCutParticlesEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutParticlesEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutParticlesEffect(NoteCutParticlesEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4233 };

  /// @brief Field _sparklesPS, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____sparklesPS;

  /// @brief Field _explosionPS, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____explosionPS;

  /// @brief Field _explosionCorePS, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____explosionCorePS;

  /// @brief Field _explosionPrePassBloomPS, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____explosionPrePassBloomPS;

  /// @brief Field _sparklesPSEmitParams, offset: 0x40, size: 0x90, def value: None
  ::UnityEngine::ParticleSystem_EmitParams ____sparklesPSEmitParams;

  /// @brief Field _sparklesPSMainModule, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem_MainModule ____sparklesPSMainModule;

  /// @brief Field _sparklesPSShapeModule, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem_ShapeModule ____sparklesPSShapeModule;

  /// @brief Field _sparklesLifetimeMinMaxCurve, offset: 0xe0, size: 0x20, def value: None
  ::UnityEngine::ParticleSystem_MinMaxCurve ____sparklesLifetimeMinMaxCurve;

  /// @brief Field _explosionPSEmitParams, offset: 0x100, size: 0x90, def value: None
  ::UnityEngine::ParticleSystem_EmitParams ____explosionPSEmitParams;

  /// @brief Field _explosionCorePSEmitParams, offset: 0x190, size: 0x90, def value: None
  ::UnityEngine::ParticleSystem_EmitParams ____explosionCorePSEmitParams;

  /// @brief Field _explosionCorePSMainModule, offset: 0x220, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem_MainModule ____explosionCorePSMainModule;

  /// @brief Field _explosionCorePSShapeModule, offset: 0x228, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem_ShapeModule ____explosionCorePSShapeModule;

  /// @brief Field _explosionPrePassBloomPSShapeModule, offset: 0x230, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem_ShapeModule ____explosionPrePassBloomPSShapeModule;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____sparklesPS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____explosionPS) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____explosionCorePS) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____explosionPrePassBloomPS) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____sparklesPSEmitParams) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____sparklesPSMainModule) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____sparklesPSShapeModule) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____sparklesLifetimeMinMaxCurve) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____explosionPSEmitParams) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____explosionCorePSEmitParams) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____explosionCorePSMainModule) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____explosionCorePSShapeModule) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutParticlesEffect, ____explosionPrePassBloomPSShapeModule) == 0x230, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutParticlesEffect, 0x238>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteCutParticlesEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutParticlesEffect*, "", "NoteCutParticlesEffect");
