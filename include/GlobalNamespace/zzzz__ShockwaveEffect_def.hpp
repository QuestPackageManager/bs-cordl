#pragma once
// IWYU pragma private; include "GlobalNamespace/ShockwaveEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ShockwaveEffect)
namespace GlobalNamespace {
class SettingsManager;
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
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem::EmitParams
namespace GlobalNamespace {
// Is value type: false
// CS Name: ShockwaveEffect
class CORDL_TYPE ShockwaveEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _prevShockwaveParticleSpawnTime, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get__prevShockwaveParticleSpawnTime, put = __cordl_internal_set__prevShockwaveParticleSpawnTime)) float_t _prevShockwaveParticleSpawnTime;

  /// @brief Field _settingsManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _shockwavePS, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__shockwavePS, put = __cordl_internal_set__shockwavePS)) ::UnityW<::UnityEngine::ParticleSystem> _shockwavePS;

  /// @brief Field _shockwavePSEmitParams, offset 0x30, size 0x90
  __declspec(property(get = __cordl_internal_get__shockwavePSEmitParams, put = __cordl_internal_set__shockwavePSEmitParams)) ::UnityEngine::ParticleSystem_EmitParams _shockwavePSEmitParams;

  static inline ::GlobalNamespace::ShockwaveEffect* New_ctor();

  /// @brief Method SpawnShockwave, addr 0x3b840cc, size 0xd4, virtual false, abstract: false, final false
  inline void SpawnShockwave(::UnityEngine::Vector3 pos);

  /// @brief Method Start, addr 0x3b83f8c, size 0x140, virtual false, abstract: false, final false
  inline void Start();

  constexpr float_t const& __cordl_internal_get__prevShockwaveParticleSpawnTime() const;

  constexpr float_t& __cordl_internal_get__prevShockwaveParticleSpawnTime();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__shockwavePS() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__shockwavePS();

  constexpr ::UnityEngine::ParticleSystem_EmitParams const& __cordl_internal_get__shockwavePSEmitParams() const;

  constexpr ::UnityEngine::ParticleSystem_EmitParams& __cordl_internal_get__shockwavePSEmitParams();

  constexpr void __cordl_internal_set__prevShockwaveParticleSpawnTime(float_t value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__shockwavePS(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__shockwavePSEmitParams(::UnityEngine::ParticleSystem_EmitParams value);

  /// @brief Method .ctor, addr 0x3b841a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShockwaveEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShockwaveEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShockwaveEffect(ShockwaveEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShockwaveEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShockwaveEffect(ShockwaveEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4235 };

  /// @brief Field _shockwavePS, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____shockwavePS;

  /// @brief Field _settingsManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _shockwavePSEmitParams, offset: 0x30, size: 0x90, def value: None
  ::UnityEngine::ParticleSystem_EmitParams ____shockwavePSEmitParams;

  /// @brief Field _prevShockwaveParticleSpawnTime, offset: 0xc0, size: 0x4, def value: None
  float_t ____prevShockwaveParticleSpawnTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShockwaveEffect, ____shockwavePS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShockwaveEffect, ____settingsManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShockwaveEffect, ____shockwavePSEmitParams) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShockwaveEffect, ____prevShockwaveParticleSpawnTime) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShockwaveEffect, 0xc8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShockwaveEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShockwaveEffect*, "", "ShockwaveEffect");
