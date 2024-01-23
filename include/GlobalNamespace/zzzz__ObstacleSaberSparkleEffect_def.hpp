#pragma once
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
// Type: ::ObstacleSaberSparkleEffect
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(15883))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4958))
// CS Name: ::ObstacleSaberSparkleEffect*
class CORDL_TYPE ObstacleSaberSparkleEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _sparkleParticleSystem, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sparkleParticleSystem, put = __cordl_internal_set__sparkleParticleSystem))::UnityW<::UnityEngine::ParticleSystem> _sparkleParticleSystem;

  /// @brief Field _burnParticleSystem, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__burnParticleSystem, put = __cordl_internal_set__burnParticleSystem))::UnityW<::UnityEngine::ParticleSystem> _burnParticleSystem;

  /// @brief Field _sparkleParticleSystemEmissionModule, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sparkleParticleSystemEmissionModule,
                      put = __cordl_internal_set__sparkleParticleSystemEmissionModule))::UnityEngine::__ParticleSystem__EmissionModule _sparkleParticleSystemEmissionModule;

  /// @brief Field _burnParticleSystemEmissionModule, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__burnParticleSystemEmissionModule,
                      put = __cordl_internal_set__burnParticleSystemEmissionModule))::UnityEngine::__ParticleSystem__EmissionModule _burnParticleSystemEmissionModule;

  __declspec(property(put = set_color))::UnityEngine::Color color;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__sparkleParticleSystem();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__sparkleParticleSystem() const;

  constexpr void __cordl_internal_set__sparkleParticleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__burnParticleSystem();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__burnParticleSystem() const;

  constexpr void __cordl_internal_set__burnParticleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr ::UnityEngine::__ParticleSystem__EmissionModule& __cordl_internal_get__sparkleParticleSystemEmissionModule();

  constexpr ::UnityEngine::__ParticleSystem__EmissionModule const& __cordl_internal_get__sparkleParticleSystemEmissionModule() const;

  constexpr void __cordl_internal_set__sparkleParticleSystemEmissionModule(::UnityEngine::__ParticleSystem__EmissionModule value);

  constexpr ::UnityEngine::__ParticleSystem__EmissionModule& __cordl_internal_get__burnParticleSystemEmissionModule();

  constexpr ::UnityEngine::__ParticleSystem__EmissionModule const& __cordl_internal_get__burnParticleSystemEmissionModule() const;

  constexpr void __cordl_internal_set__burnParticleSystemEmissionModule(::UnityEngine::__ParticleSystem__EmissionModule value);

  /// @brief Method set_color, addr 0x23a4274, size 0xfc, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method Awake, addr 0x23aec1c, size 0x5c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method SetPositionAndRotation, addr 0x23a4dcc, size 0x78, virtual false, abstract: false, final false
  inline void SetPositionAndRotation(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot);

  /// @brief Method StartEmission, addr 0x23a4e44, size 0x54, virtual false, abstract: false, final false
  inline void StartEmission();

  /// @brief Method StopEmission, addr 0x23a4e98, size 0x68, virtual false, abstract: false, final false
  inline void StopEmission();

  static inline ::GlobalNamespace::ObstacleSaberSparkleEffect* New_ctor();

  /// @brief Method .ctor, addr 0x23aec78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSparkleEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleSaberSparkleEffect(ObstacleSaberSparkleEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSparkleEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleSaberSparkleEffect(ObstacleSaberSparkleEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleSaberSparkleEffect();

public:
  /// @brief Field _sparkleParticleSystem, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____sparkleParticleSystem;

  /// @brief Field _burnParticleSystem, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____burnParticleSystem;

  /// @brief Field _sparkleParticleSystemEmissionModule, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::__ParticleSystem__EmissionModule ____sparkleParticleSystemEmissionModule;

  /// @brief Field _burnParticleSystemEmissionModule, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::__ParticleSystem__EmissionModule ____burnParticleSystemEmissionModule;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleSaberSparkleEffect, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffect, ____sparkleParticleSystem) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffect, ____burnParticleSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffect, ____sparkleParticleSystemEmissionModule) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffect, ____burnParticleSystemEmissionModule) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleSaberSparkleEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleSaberSparkleEffect*, "", "ObstacleSaberSparkleEffect");
