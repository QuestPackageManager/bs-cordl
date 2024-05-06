#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ParticleSystemLightWithId)
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
class ParticleSystemLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemLightWithId);
// Type: ::ParticleSystemLightWithId
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ParticleSystemLightWithId*
class CORDL_TYPE ParticleSystemLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _intensity, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  /// @brief Field _mainModule, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__mainModule, put = __cordl_internal_set__mainModule))::UnityEngine::__ParticleSystem__MainModule _mainModule;

  /// @brief Field _minAlpha, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__minAlpha, put = __cordl_internal_set__minAlpha)) float_t _minAlpha;

  /// @brief Field _particleSystem, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystem, put = __cordl_internal_set__particleSystem))::UnityW<::UnityEngine::ParticleSystem> _particleSystem;

  /// @brief Field _particles, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__particles,
                      put = __cordl_internal_set__particles))::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> _particles;

  /// @brief Field _setColorOnly, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__setColorOnly, put = __cordl_internal_set__setColorOnly)) bool _setColorOnly;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  /// @brief Field setOnlyOnce, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_setOnlyOnce, put = __cordl_internal_set_setOnlyOnce)) bool setOnlyOnce;

  /// @brief Method Awake, addr 0x24f4c84, size 0x78, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ColorWasSet, addr 0x24f4cfc, size 0x464, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::ParticleSystemLightWithId* New_ctor();

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr ::UnityEngine::__ParticleSystem__MainModule const& __cordl_internal_get__mainModule() const;

  constexpr ::UnityEngine::__ParticleSystem__MainModule& __cordl_internal_get__mainModule();

  constexpr float_t const& __cordl_internal_get__minAlpha() const;

  constexpr float_t& __cordl_internal_get__minAlpha();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem();

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> const& __cordl_internal_get__particles() const;

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>& __cordl_internal_get__particles();

  constexpr bool const& __cordl_internal_get__setColorOnly() const;

  constexpr bool& __cordl_internal_get__setColorOnly();

  constexpr bool const& __cordl_internal_get_setOnlyOnce() const;

  constexpr bool& __cordl_internal_get_setOnlyOnce();

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr void __cordl_internal_set__mainModule(::UnityEngine::__ParticleSystem__MainModule value);

  constexpr void __cordl_internal_set__minAlpha(float_t value);

  constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__particles(::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> value);

  constexpr void __cordl_internal_set__setColorOnly(bool value);

  constexpr void __cordl_internal_set_setOnlyOnce(bool value);

  /// @brief Method .ctor, addr 0x24f5160, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0x24f4c28, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemLightWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemLightWithId(ParticleSystemLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemLightWithId(ParticleSystemLightWithId const&) = delete;

  /// @brief Field _particleSystem, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____particleSystem;

  /// @brief Field setOnlyOnce, offset: 0x38, size: 0x1, def value: None
  bool ___setOnlyOnce;

  /// @brief Field _setColorOnly, offset: 0x39, size: 0x1, def value: None
  bool ____setColorOnly;

  /// @brief Field _intensity, offset: 0x3c, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _minAlpha, offset: 0x40, size: 0x4, def value: None
  float_t ____minAlpha;

  /// @brief Field _mainModule, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::__ParticleSystem__MainModule ____mainModule;

  /// @brief Field _particles, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> ____particles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemLightWithId, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithId, ____particleSystem) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithId, ___setOnlyOnce) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithId, ____setColorOnly) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithId, ____intensity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithId, ____minAlpha) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithId, ____mainModule) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemLightWithId, ____particles) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParticleSystemLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemLightWithId*, "", "ParticleSystemLightWithId");
