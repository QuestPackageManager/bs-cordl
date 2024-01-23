#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BombExplosionEffect)
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BombExplosionEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BombExplosionEffect);
// Type: ::BombExplosionEffect
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 336, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(15889))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4838))
// CS Name: ::BombExplosionEffect*
class CORDL_TYPE BombExplosionEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _debrisPS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__debrisPS, put = __cordl_internal_set__debrisPS))::UnityW<::UnityEngine::ParticleSystem> _debrisPS;

  /// @brief Field _explosionPS, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__explosionPS, put = __cordl_internal_set__explosionPS))::UnityW<::UnityEngine::ParticleSystem> _explosionPS;

  /// @brief Field _debrisCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__debrisCount, put = __cordl_internal_set__debrisCount)) int32_t _debrisCount;

  /// @brief Field _explosionParticlesCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__explosionParticlesCount, put = __cordl_internal_set__explosionParticlesCount)) int32_t _explosionParticlesCount;

  /// @brief Field _emitParams, offset 0x30, size 0x90
  __declspec(property(get = __cordl_internal_get__emitParams, put = __cordl_internal_set__emitParams))::UnityEngine::__ParticleSystem__EmitParams _emitParams;

  /// @brief Field _explosionPSEmitParams, offset 0xc0, size 0x90
  __declspec(property(get = __cordl_internal_get__explosionPSEmitParams, put = __cordl_internal_set__explosionPSEmitParams))::UnityEngine::__ParticleSystem__EmitParams _explosionPSEmitParams;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__debrisPS();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__debrisPS() const;

  constexpr void __cordl_internal_set__debrisPS(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__explosionPS();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__explosionPS() const;

  constexpr void __cordl_internal_set__explosionPS(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr int32_t& __cordl_internal_get__debrisCount();

  constexpr int32_t const& __cordl_internal_get__debrisCount() const;

  constexpr void __cordl_internal_set__debrisCount(int32_t value);

  constexpr int32_t& __cordl_internal_get__explosionParticlesCount();

  constexpr int32_t const& __cordl_internal_get__explosionParticlesCount() const;

  constexpr void __cordl_internal_set__explosionParticlesCount(int32_t value);

  constexpr ::UnityEngine::__ParticleSystem__EmitParams& __cordl_internal_get__emitParams();

  constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __cordl_internal_get__emitParams() const;

  constexpr void __cordl_internal_set__emitParams(::UnityEngine::__ParticleSystem__EmitParams value);

  constexpr ::UnityEngine::__ParticleSystem__EmitParams& __cordl_internal_get__explosionPSEmitParams();

  constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __cordl_internal_get__explosionPSEmitParams() const;

  constexpr void __cordl_internal_set__explosionPSEmitParams(::UnityEngine::__ParticleSystem__EmitParams value);

  /// @brief Method Awake, addr 0x2396730, size 0x2c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method SpawnExplosion, addr 0x239675c, size 0xbc, virtual false, abstract: false, final false
  inline void SpawnExplosion(::UnityEngine::Vector3 pos);

  static inline ::GlobalNamespace::BombExplosionEffect* New_ctor();

  /// @brief Method .ctor, addr 0x2396818, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BombExplosionEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BombExplosionEffect(BombExplosionEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BombExplosionEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BombExplosionEffect(BombExplosionEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BombExplosionEffect();

public:
  /// @brief Field _debrisPS, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____debrisPS;

  /// @brief Field _explosionPS, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____explosionPS;

  /// @brief Field _debrisCount, offset: 0x28, size: 0x4, def value: None
  int32_t ____debrisCount;

  /// @brief Field _explosionParticlesCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ____explosionParticlesCount;

  /// @brief Field _emitParams, offset: 0x30, size: 0x90, def value: None
  ::UnityEngine::__ParticleSystem__EmitParams ____emitParams;

  /// @brief Field _explosionPSEmitParams, offset: 0xc0, size: 0x90, def value: None
  ::UnityEngine::__ParticleSystem__EmitParams ____explosionPSEmitParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BombExplosionEffect, 0x150>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BombExplosionEffect, ____debrisPS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombExplosionEffect, ____explosionPS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombExplosionEffect, ____debrisCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombExplosionEffect, ____explosionParticlesCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombExplosionEffect, ____emitParams) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombExplosionEffect, ____explosionPSEmitParams) == 0xc0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BombExplosionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BombExplosionEffect*, "", "BombExplosionEffect");
