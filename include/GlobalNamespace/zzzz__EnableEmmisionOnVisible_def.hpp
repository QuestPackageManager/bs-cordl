#pragma once
// IWYU pragma private; include "GlobalNamespace\EnableEmmisionOnVisible.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(EnableEmmisionOnVisible)
// Forward declare root types
namespace GlobalNamespace {
class EnableEmmisionOnVisible;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EnableEmmisionOnVisible*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnableEmmisionOnVisible*, "", "EnableEmmisionOnVisible");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem, UnityEngine.ParticleSystem::EmissionModule
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnableEmmisionOnVisible
class CORDL_TYPE EnableEmmisionOnVisible : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _emmisionModules, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__emmisionModules, put = __cordl_internal_set__emmisionModules)) ::ArrayW<::UnityEngine::ParticleSystem_EmissionModule> _emmisionModules;

  /// @brief Field _particleSystems, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystems, put = __cordl_internal_set__particleSystems)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> _particleSystems;

  /// @brief Method Awake, addr 0x5856160, size 0x108, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::EnableEmmisionOnVisible* New_ctor();

  /// @brief Method OnBecameInvisible, addr 0x5856310, size 0xa8, virtual false, abstract: false, final false
  inline void OnBecameInvisible();

  /// @brief Method OnBecameVisible, addr 0x5856268, size 0xa8, virtual false, abstract: false, final false
  inline void OnBecameVisible();

  constexpr ::ArrayW<::UnityEngine::ParticleSystem_EmissionModule> const& __cordl_internal_get__emmisionModules() const;

  constexpr ::ArrayW<::UnityEngine::ParticleSystem_EmissionModule>& __cordl_internal_get__emmisionModules();

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& __cordl_internal_get__particleSystems() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& __cordl_internal_get__particleSystems();

  constexpr void __cordl_internal_set__emmisionModules(::ArrayW<::UnityEngine::ParticleSystem_EmissionModule> value);

  constexpr void __cordl_internal_set__particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> value);

  /// @brief Method .ctor, addr 0x58563b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnableEmmisionOnVisible();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnableEmmisionOnVisible", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnableEmmisionOnVisible(EnableEmmisionOnVisible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnableEmmisionOnVisible", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnableEmmisionOnVisible(EnableEmmisionOnVisible const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21407 };

  /// @brief Field _particleSystems, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> ____particleSystems;

  /// @brief Field _emmisionModules, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ParticleSystem_EmissionModule> ____emmisionModules;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnableEmmisionOnVisible, ____particleSystems) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnableEmmisionOnVisible, ____emmisionModules) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EnableEmmisionOnVisible) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
