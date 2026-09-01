#pragma once
// IWYU pragma private; include "GlobalNamespace\ObstacleSaberSparkleEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleSaberSparkleEffect_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffect.set_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleSaberSparkleEffect::*)(::UnityEngine::Color)>(&::GlobalNamespace::ObstacleSaberSparkleEffect::set_color)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x599e5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffect*>(), { "set_color", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffect.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleSaberSparkleEffect::*)()>(&::GlobalNamespace::ObstacleSaberSparkleEffect::Awake)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x599e648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffect*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffect.SetPositionAndRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleSaberSparkleEffect::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::GlobalNamespace::ObstacleSaberSparkleEffect::SetPositionAndRotation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x599e6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffect*>(),
                                                             { "SetPositionAndRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffect.IsEmitting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ObstacleSaberSparkleEffect::*)()>(&::GlobalNamespace::ObstacleSaberSparkleEffect::IsEmitting)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x599e748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffect*>(), { "IsEmitting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffect.StartEmission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleSaberSparkleEffect::*)()>(&::GlobalNamespace::ObstacleSaberSparkleEffect::StartEmission)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x599e784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffect*>(), { "StartEmission", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffect.StopEmission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleSaberSparkleEffect::*)()>(&::GlobalNamespace::ObstacleSaberSparkleEffect::StopEmission)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x599e824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffect*>(), { "StopEmission", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleSaberSparkleEffect::*)()>(&::GlobalNamespace::ObstacleSaberSparkleEffect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599e8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::ObstacleSaberSparkleEffect::__cordl_internal_get__sparkleParticleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparkleParticleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::ObstacleSaberSparkleEffect::__cordl_internal_get__sparkleParticleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparkleParticleSystem;
}
constexpr void GlobalNamespace::ObstacleSaberSparkleEffect::__cordl_internal_set__sparkleParticleSystem(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sparkleParticleSystem = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::ObstacleSaberSparkleEffect::__cordl_internal_get__burnParticleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burnParticleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::ObstacleSaberSparkleEffect::__cordl_internal_get__burnParticleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burnParticleSystem;
}
constexpr void GlobalNamespace::ObstacleSaberSparkleEffect::__cordl_internal_set__burnParticleSystem(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____burnParticleSystem = value;
}
constexpr ::UnityEngine::ParticleSystem_EmissionModule& GlobalNamespace::ObstacleSaberSparkleEffect::__cordl_internal_get__sparkleParticleSystemEmissionModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparkleParticleSystemEmissionModule;
}
constexpr ::UnityEngine::ParticleSystem_EmissionModule const& GlobalNamespace::ObstacleSaberSparkleEffect::__cordl_internal_get__sparkleParticleSystemEmissionModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparkleParticleSystemEmissionModule;
}
constexpr void GlobalNamespace::ObstacleSaberSparkleEffect::__cordl_internal_set__sparkleParticleSystemEmissionModule(::UnityEngine::ParticleSystem_EmissionModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sparkleParticleSystemEmissionModule = value;
}
constexpr ::UnityEngine::ParticleSystem_EmissionModule& GlobalNamespace::ObstacleSaberSparkleEffect::__cordl_internal_get__burnParticleSystemEmissionModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burnParticleSystemEmissionModule;
}
constexpr ::UnityEngine::ParticleSystem_EmissionModule const& GlobalNamespace::ObstacleSaberSparkleEffect::__cordl_internal_get__burnParticleSystemEmissionModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burnParticleSystemEmissionModule;
}
constexpr void GlobalNamespace::ObstacleSaberSparkleEffect::__cordl_internal_set__burnParticleSystemEmissionModule(::UnityEngine::ParticleSystem_EmissionModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____burnParticleSystemEmissionModule = value;
}
inline void GlobalNamespace::ObstacleSaberSparkleEffect::set_color(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffect*>(), { "set_color", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ObstacleSaberSparkleEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffect*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleSaberSparkleEffect::SetPositionAndRotation(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffect*>(),
                                                           { "SetPositionAndRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline bool GlobalNamespace::ObstacleSaberSparkleEffect::IsEmitting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffect*>(), { "IsEmitting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleSaberSparkleEffect::StartEmission() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffect*>(), { "StartEmission", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleSaberSparkleEffect::StopEmission() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffect*>(), { "StopEmission", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleSaberSparkleEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ObstacleSaberSparkleEffect* GlobalNamespace::ObstacleSaberSparkleEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObstacleSaberSparkleEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleSaberSparkleEffect::ObstacleSaberSparkleEffect() {}
