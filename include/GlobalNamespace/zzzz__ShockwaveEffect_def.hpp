#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ShockwaveEffect)
namespace GlobalNamespace {
class IntSO;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ShockwaveEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShockwaveEffect);
// Type: ::ShockwaveEffect
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 188, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(15889))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4882))
// CS Name: ::ShockwaveEffect*
class CORDL_TYPE ShockwaveEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _shockwavePS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__shockwavePS, put = __cordl_internal_set__shockwavePS))::UnityW<::UnityEngine::ParticleSystem> _shockwavePS;

  /// @brief Field _maxShockwaveParticles, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__maxShockwaveParticles, put = __cordl_internal_set__maxShockwaveParticles))::UnityW<::GlobalNamespace::IntSO> _maxShockwaveParticles;

  /// @brief Field _shockwavePSEmitParams, offset 0x28, size 0x90
  __declspec(property(get = __cordl_internal_get__shockwavePSEmitParams, put = __cordl_internal_set__shockwavePSEmitParams))::UnityEngine::__ParticleSystem__EmitParams _shockwavePSEmitParams;

  /// @brief Field _prevShockwaveParticleSpawnTime, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get__prevShockwaveParticleSpawnTime, put = __cordl_internal_set__prevShockwaveParticleSpawnTime)) float_t _prevShockwaveParticleSpawnTime;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__shockwavePS();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__shockwavePS() const;

  constexpr void __cordl_internal_set__shockwavePS(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr ::UnityW<::GlobalNamespace::IntSO>& __cordl_internal_get__maxShockwaveParticles();

  constexpr ::UnityW<::GlobalNamespace::IntSO> const& __cordl_internal_get__maxShockwaveParticles() const;

  constexpr void __cordl_internal_set__maxShockwaveParticles(::UnityW<::GlobalNamespace::IntSO> value);

  constexpr ::UnityEngine::__ParticleSystem__EmitParams& __cordl_internal_get__shockwavePSEmitParams();

  constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __cordl_internal_get__shockwavePSEmitParams() const;

  constexpr void __cordl_internal_set__shockwavePSEmitParams(::UnityEngine::__ParticleSystem__EmitParams value);

  constexpr float_t& __cordl_internal_get__prevShockwaveParticleSpawnTime();

  constexpr float_t const& __cordl_internal_get__prevShockwaveParticleSpawnTime() const;

  constexpr void __cordl_internal_set__prevShockwaveParticleSpawnTime(float_t value);

  /// @brief Method Start, addr 0x23a0adc, size 0x11c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method SpawnShockwave, addr 0x23a0bf8, size 0xd4, virtual false, abstract: false, final false
  inline void SpawnShockwave(::UnityEngine::Vector3 pos);

  static inline ::GlobalNamespace::ShockwaveEffect* New_ctor();

  /// @brief Method .ctor, addr 0x23a0ccc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ShockwaveEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShockwaveEffect(ShockwaveEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShockwaveEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShockwaveEffect(ShockwaveEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShockwaveEffect();

public:
  /// @brief Field _shockwavePS, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____shockwavePS;

  /// @brief Field _maxShockwaveParticles, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::IntSO> ____maxShockwaveParticles;

  /// @brief Field _shockwavePSEmitParams, offset: 0x28, size: 0x90, def value: None
  ::UnityEngine::__ParticleSystem__EmitParams ____shockwavePSEmitParams;

  /// @brief Field _prevShockwaveParticleSpawnTime, offset: 0xb8, size: 0x4, def value: None
  float_t ____prevShockwaveParticleSpawnTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShockwaveEffect, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ShockwaveEffect, ____shockwavePS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShockwaveEffect, ____maxShockwaveParticles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShockwaveEffect, ____shockwavePSEmitParams) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShockwaveEffect, ____prevShockwaveParticleSpawnTime) == 0xb8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShockwaveEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShockwaveEffect*, "", "ShockwaveEffect");
