#pragma once
// IWYU pragma private; include "GlobalNamespace/ObstacleSaberSparkleEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
CORDL_MODULE_EXPORT(ObstacleSaberSparkleEffect)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleSaberSparkleEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleSaberSparkleEffect);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem::EmissionModule
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObstacleSaberSparkleEffect
class CORDL_TYPE ObstacleSaberSparkleEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _burnParticleSystem, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__burnParticleSystem, put = __cordl_internal_set__burnParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem> _burnParticleSystem;

  /// @brief Field _burnParticleSystemEmissionModule, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__burnParticleSystemEmissionModule,
                      put = __cordl_internal_set__burnParticleSystemEmissionModule)) ::UnityEngine::ParticleSystem_EmissionModule _burnParticleSystemEmissionModule;

  /// @brief Field _sparkleParticleSystem, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sparkleParticleSystem, put = __cordl_internal_set__sparkleParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem> _sparkleParticleSystem;

  /// @brief Field _sparkleParticleSystemEmissionModule, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sparkleParticleSystemEmissionModule,
                      put = __cordl_internal_set__sparkleParticleSystemEmissionModule)) ::UnityEngine::ParticleSystem_EmissionModule _sparkleParticleSystemEmissionModule;

  __declspec(property(put = set_color)) ::UnityEngine::Color color;

  /// @brief Method Awake, addr 0x3b96a78, size 0x5c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method IsEmitting, addr 0x3b8b910, size 0xc, virtual false, abstract: false, final false
  inline bool IsEmitting();

  static inline ::GlobalNamespace::ObstacleSaberSparkleEffect* New_ctor();

  /// @brief Method SetPositionAndRotation, addr 0x3b8bc78, size 0x78, virtual false, abstract: false, final false
  inline void SetPositionAndRotation(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot);

  /// @brief Method StartEmission, addr 0x3b8bcf0, size 0x54, virtual false, abstract: false, final false
  inline void StartEmission();

  /// @brief Method StopEmission, addr 0x3b8bd44, size 0x78, virtual false, abstract: false, final false
  inline void StopEmission();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__burnParticleSystem() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__burnParticleSystem();

  constexpr ::UnityEngine::ParticleSystem_EmissionModule const& __cordl_internal_get__burnParticleSystemEmissionModule() const;

  constexpr ::UnityEngine::ParticleSystem_EmissionModule& __cordl_internal_get__burnParticleSystemEmissionModule();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__sparkleParticleSystem() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__sparkleParticleSystem();

  constexpr ::UnityEngine::ParticleSystem_EmissionModule const& __cordl_internal_get__sparkleParticleSystemEmissionModule() const;

  constexpr ::UnityEngine::ParticleSystem_EmissionModule& __cordl_internal_get__sparkleParticleSystemEmissionModule();

  constexpr void __cordl_internal_set__burnParticleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__burnParticleSystemEmissionModule(::UnityEngine::ParticleSystem_EmissionModule value);

  constexpr void __cordl_internal_set__sparkleParticleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__sparkleParticleSystemEmissionModule(::UnityEngine::ParticleSystem_EmissionModule value);

  /// @brief Method .ctor, addr 0x3b96ad4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_color, addr 0x3b8b558, size 0xfc, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleSaberSparkleEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSparkleEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleSaberSparkleEffect(ObstacleSaberSparkleEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSparkleEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleSaberSparkleEffect(ObstacleSaberSparkleEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4326 };

  /// @brief Field _sparkleParticleSystem, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____sparkleParticleSystem;

  /// @brief Field _burnParticleSystem, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____burnParticleSystem;

  /// @brief Field _sparkleParticleSystemEmissionModule, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem_EmissionModule ____sparkleParticleSystemEmissionModule;

  /// @brief Field _burnParticleSystemEmissionModule, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem_EmissionModule ____burnParticleSystemEmissionModule;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffect, ____sparkleParticleSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffect, ____burnParticleSystem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffect, ____sparkleParticleSystemEmissionModule) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffect, ____burnParticleSystemEmissionModule) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleSaberSparkleEffect, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleSaberSparkleEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleSaberSparkleEffect*, "", "ObstacleSaberSparkleEffect");
