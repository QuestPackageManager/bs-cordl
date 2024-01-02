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
struct __ParticleSystem__Particle;
}
namespace UnityEngine {
class ParticleSystem;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542)), TypeDefinitionIndex(TypeDefinitionIndex(15882))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14548))
// CS Name: ::ParticleSystemLightWithId*
class CORDL_TYPE ParticleSystemLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _particleSystem, offset 0x30, size 0x8
  __declspec(property(get = __get__particleSystem, put = __set__particleSystem))::UnityEngine::ParticleSystem* _particleSystem;

  /// @brief Field setOnlyOnce, offset 0x38, size 0x1
  __declspec(property(get = __get_setOnlyOnce, put = __set_setOnlyOnce)) bool setOnlyOnce;

  /// @brief Field _setColorOnly, offset 0x39, size 0x1
  __declspec(property(get = __get__setColorOnly, put = __set__setColorOnly)) bool _setColorOnly;

  /// @brief Field _intensity, offset 0x3c, size 0x4
  __declspec(property(get = __get__intensity, put = __set__intensity)) float_t _intensity;

  /// @brief Field _minAlpha, offset 0x40, size 0x4
  __declspec(property(get = __get__minAlpha, put = __set__minAlpha)) float_t _minAlpha;

  /// @brief Field _mainModule, offset 0x48, size 0x8
  __declspec(property(get = __get__mainModule, put = __set__mainModule))::UnityEngine::__ParticleSystem__MainModule _mainModule;

  /// @brief Field _particles, offset 0x50, size 0x8
  __declspec(property(get = __get__particles, put = __set__particles))::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> _particles;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  constexpr ::UnityEngine::ParticleSystem*& __get__particleSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__particleSystem() const;

  constexpr void __set__particleSystem(::UnityEngine::ParticleSystem* value);

  constexpr bool& __get_setOnlyOnce();

  constexpr bool const& __get_setOnlyOnce() const;

  constexpr void __set_setOnlyOnce(bool value);

  constexpr bool& __get__setColorOnly();

  constexpr bool const& __get__setColorOnly() const;

  constexpr void __set__setColorOnly(bool value);

  constexpr float_t& __get__intensity();

  constexpr float_t const& __get__intensity() const;

  constexpr void __set__intensity(float_t value);

  constexpr float_t& __get__minAlpha();

  constexpr float_t const& __get__minAlpha() const;

  constexpr void __set__minAlpha(float_t value);

  constexpr ::UnityEngine::__ParticleSystem__MainModule& __get__mainModule();

  constexpr ::UnityEngine::__ParticleSystem__MainModule const& __get__mainModule() const;

  constexpr void __set__mainModule(::UnityEngine::__ParticleSystem__MainModule value);

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>& __get__particles();

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> const& __get__particles() const;

  constexpr void __set__particles(::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> value);

  /// @brief Method get_color, addr 0x2111ec8, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method Awake, addr 0x2111f24, size 0x78, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ColorWasSet, addr 0x2111f9c, size 0x464, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::ParticleSystemLightWithId* New_ctor();

  /// @brief Method .ctor, addr 0x2112400, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemLightWithId(ParticleSystemLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemLightWithId(ParticleSystemLightWithId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemLightWithId();

public:
  /// @brief Field _particleSystem, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* ____particleSystem;

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
