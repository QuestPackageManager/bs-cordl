#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ParticleSystemLightWithIds)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct __ParticleSystem__Particle;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemLightWithIds;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemLightWithIds);
// Type: ::ParticleSystemLightWithIds
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14446)), TypeDefinitionIndex(TypeDefinitionIndex(15042))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14443))
// CS Name: ::ParticleSystemLightWithIds*
class CORDL_TYPE ParticleSystemLightWithIds : public ::GlobalNamespace::RuntimeLightWithIds {
public:
  // Declarations
  /// @brief Field _particleSystem, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystem, put = __cordl_internal_set__particleSystem))::UnityW<::UnityEngine::ParticleSystem> _particleSystem;

  /// @brief Field _setOnlyOnce, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__setOnlyOnce, put = __cordl_internal_set__setOnlyOnce)) bool _setOnlyOnce;

  /// @brief Field _setColorOnly, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__setColorOnly, put = __cordl_internal_set__setColorOnly)) bool _setColorOnly;

  /// @brief Field _minAlpha, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__minAlpha, put = __cordl_internal_set__minAlpha)) float_t _minAlpha;

  /// @brief Field _mainModule, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__mainModule, put = __cordl_internal_set__mainModule))::UnityEngine::__ParticleSystem__MainModule _mainModule;

  /// @brief Field _particles, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__particles,
                      put = __cordl_internal_set__particles))::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> _particles;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

  constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr bool& __cordl_internal_get__setOnlyOnce();

  constexpr bool const& __cordl_internal_get__setOnlyOnce() const;

  constexpr void __cordl_internal_set__setOnlyOnce(bool value);

  constexpr bool& __cordl_internal_get__setColorOnly();

  constexpr bool const& __cordl_internal_get__setColorOnly() const;

  constexpr void __cordl_internal_set__setColorOnly(bool value);

  constexpr float_t& __cordl_internal_get__minAlpha();

  constexpr float_t const& __cordl_internal_get__minAlpha() const;

  constexpr void __cordl_internal_set__minAlpha(float_t value);

  constexpr ::UnityEngine::__ParticleSystem__MainModule& __cordl_internal_get__mainModule();

  constexpr ::UnityEngine::__ParticleSystem__MainModule const& __cordl_internal_get__mainModule() const;

  constexpr void __cordl_internal_set__mainModule(::UnityEngine::__ParticleSystem__MainModule value);

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>& __cordl_internal_get__particles();

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> const& __cordl_internal_get__particles() const;

  constexpr void __cordl_internal_set__particles(::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> value);

  /// @brief Method Awake, addr 0x21a6bc0, size 0x80, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method ColorWasSet, addr 0x21a6c40, size 0x460, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::ParticleSystemLightWithIds* New_ctor();

  /// @brief Method .ctor, addr 0x21a70a0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemLightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemLightWithIds(ParticleSystemLightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemLightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemLightWithIds(ParticleSystemLightWithIds const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemLightWithIds();

public:
  /// @brief Field _particleSystem, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____particleSystem;

  /// @brief Field _setOnlyOnce, offset: 0x50, size: 0x1, def value: None
  bool ____setOnlyOnce;

  /// @brief Field _setColorOnly, offset: 0x51, size: 0x1, def value: None
  bool ____setColorOnly;

  /// @brief Field _minAlpha, offset: 0x54, size: 0x4, def value: None
  float_t ____minAlpha;

  /// @brief Field _mainModule, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::__ParticleSystem__MainModule ____mainModule;

  /// @brief Field _particles, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> ____particles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemLightWithIds, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithIds, ____particleSystem) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithIds, ____setOnlyOnce) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithIds, ____setColorOnly) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithIds, ____minAlpha) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithIds, ____mainModule) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithIds, ____particles) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParticleSystemLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemLightWithIds*, "", "ParticleSystemLightWithIds");
