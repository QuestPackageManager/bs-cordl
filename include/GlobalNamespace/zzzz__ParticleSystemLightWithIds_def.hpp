#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleSystemLightWithIds.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ParticleSystemLightWithIds)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct ParticleSystem_Particle;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemLightWithIds;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemLightWithIds);
// Dependencies RuntimeLightWithIds, UnityEngine.ParticleSystem::MainModule
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParticleSystemLightWithIds
class CORDL_TYPE ParticleSystemLightWithIds : public ::GlobalNamespace::RuntimeLightWithIds {
public:
  // Declarations
  /// @brief Field _mainModule, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__mainModule, put = __cordl_internal_set__mainModule)) ::UnityEngine::ParticleSystem_MainModule _mainModule;

  /// @brief Field _minAlpha, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__minAlpha, put = __cordl_internal_set__minAlpha)) float_t _minAlpha;

  /// @brief Field _particleSystem, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystem, put = __cordl_internal_set__particleSystem)) ::UnityW<::UnityEngine::ParticleSystem> _particleSystem;

  /// @brief Field _particles, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__particles, put = __cordl_internal_set__particles)) ::ArrayW<::UnityEngine::ParticleSystem_Particle, ::Array<::UnityEngine::ParticleSystem_Particle>*>
      _particles;

  /// @brief Field _setColorOnly, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__setColorOnly, put = __cordl_internal_set__setColorOnly)) bool _setColorOnly;

  /// @brief Field _setOnlyOnce, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__setOnlyOnce, put = __cordl_internal_set__setOnlyOnce)) bool _setOnlyOnce;

  /// @brief Method Awake, addr 0x56bc638, size 0x9c, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method ColorWasSet, addr 0x56bc6d4, size 0x17c, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::ParticleSystemLightWithIds* New_ctor();

  constexpr ::UnityEngine::ParticleSystem_MainModule const& __cordl_internal_get__mainModule() const;

  constexpr ::UnityEngine::ParticleSystem_MainModule& __cordl_internal_get__mainModule();

  constexpr float_t const& __cordl_internal_get__minAlpha() const;

  constexpr float_t& __cordl_internal_get__minAlpha();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem();

  constexpr ::ArrayW<::UnityEngine::ParticleSystem_Particle, ::Array<::UnityEngine::ParticleSystem_Particle>*> const& __cordl_internal_get__particles() const;

  constexpr ::ArrayW<::UnityEngine::ParticleSystem_Particle, ::Array<::UnityEngine::ParticleSystem_Particle>*>& __cordl_internal_get__particles();

  constexpr bool const& __cordl_internal_get__setColorOnly() const;

  constexpr bool& __cordl_internal_get__setColorOnly();

  constexpr bool const& __cordl_internal_get__setOnlyOnce() const;

  constexpr bool& __cordl_internal_get__setOnlyOnce();

  constexpr void __cordl_internal_set__mainModule(::UnityEngine::ParticleSystem_MainModule value);

  constexpr void __cordl_internal_set__minAlpha(float_t value);

  constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__particles(::ArrayW<::UnityEngine::ParticleSystem_Particle, ::Array<::UnityEngine::ParticleSystem_Particle>*> value);

  constexpr void __cordl_internal_set__setColorOnly(bool value);

  constexpr void __cordl_internal_set__setOnlyOnce(bool value);

  /// @brief Method .ctor, addr 0x56bc850, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemLightWithIds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemLightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemLightWithIds(ParticleSystemLightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemLightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemLightWithIds(ParticleSystemLightWithIds const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19740 };

  /// @brief Field _particleSystem, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____particleSystem;

  /// @brief Field _setOnlyOnce, offset: 0x58, size: 0x1, def value: None
  bool ____setOnlyOnce;

  /// @brief Field _setColorOnly, offset: 0x59, size: 0x1, def value: None
  bool ____setColorOnly;

  /// @brief Field _minAlpha, offset: 0x5c, size: 0x4, def value: None
  float_t ____minAlpha;

  /// @brief Field _mainModule, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem_MainModule ____mainModule;

  /// @brief Field _particles, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ParticleSystem_Particle, ::Array<::UnityEngine::ParticleSystem_Particle>*> ____particles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithIds, ____particleSystem) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithIds, ____setOnlyOnce) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithIds, ____setColorOnly) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithIds, ____minAlpha) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithIds, ____mainModule) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithIds, ____particles) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemLightWithIds, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParticleSystemLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemLightWithIds*, "", "ParticleSystemLightWithIds");
