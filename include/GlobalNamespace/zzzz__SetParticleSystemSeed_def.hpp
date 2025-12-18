#pragma once
// IWYU pragma private; include "GlobalNamespace/SetParticleSystemSeed.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SetParticleSystemSeed)
namespace GlobalNamespace {
class DeterminismConfig;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class SetParticleSystemSeed;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetParticleSystemSeed);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetParticleSystemSeed
class CORDL_TYPE SetParticleSystemSeed : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _determinismConfig, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__determinismConfig, put = __cordl_internal_set__determinismConfig)) ::GlobalNamespace::DeterminismConfig* _determinismConfig;

  /// @brief Field _particleSystem, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystem, put = __cordl_internal_set__particleSystem)) ::UnityW<::UnityEngine::ParticleSystem> _particleSystem;

  /// @brief Field _seed, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__seed, put = __cordl_internal_set__seed)) uint32_t _seed;

  /// @brief Field _useRandom, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__useRandom, put = __cordl_internal_set__useRandom)) bool _useRandom;

  /// @brief Method ApplySeed, addr 0x57da9ac, size 0x20, virtual false, abstract: false, final false
  inline void ApplySeed();

  /// @brief Method GetSeed, addr 0x57daa9c, size 0x48, virtual false, abstract: false, final false
  inline uint32_t GetSeed();

  /// @brief Method HandleDeterminismSync, addr 0x57daae4, size 0x20, virtual false, abstract: false, final false
  inline void HandleDeterminismSync(bool _);

  static inline ::GlobalNamespace::SetParticleSystemSeed* New_ctor();

  /// @brief Method OnDestroy, addr 0x57da9cc, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x57da820, size 0x18c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::DeterminismConfig* const& __cordl_internal_get__determinismConfig() const;

  constexpr ::GlobalNamespace::DeterminismConfig*& __cordl_internal_get__determinismConfig();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem();

  constexpr uint32_t const& __cordl_internal_get__seed() const;

  constexpr uint32_t& __cordl_internal_get__seed();

  constexpr bool const& __cordl_internal_get__useRandom() const;

  constexpr bool& __cordl_internal_get__useRandom();

  constexpr void __cordl_internal_set__determinismConfig(::GlobalNamespace::DeterminismConfig* value);

  constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__seed(uint32_t value);

  constexpr void __cordl_internal_set__useRandom(bool value);

  /// @brief Method .ctor, addr 0x57dab04, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetParticleSystemSeed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetParticleSystemSeed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetParticleSystemSeed(SetParticleSystemSeed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetParticleSystemSeed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetParticleSystemSeed(SetParticleSystemSeed const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5804 };

  /// @brief Field _determinismConfig, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DeterminismConfig* ____determinismConfig;

  /// @brief Field _particleSystem, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____particleSystem;

  /// @brief Field _useRandom, offset: 0x30, size: 0x1, def value: None
  bool ____useRandom;

  /// @brief Field _seed, offset: 0x34, size: 0x4, def value: None
  uint32_t ____seed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetParticleSystemSeed, ____determinismConfig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetParticleSystemSeed, ____particleSystem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetParticleSystemSeed, ____useRandom) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetParticleSystemSeed, ____seed) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetParticleSystemSeed, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetParticleSystemSeed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetParticleSystemSeed*, "", "SetParticleSystemSeed");
