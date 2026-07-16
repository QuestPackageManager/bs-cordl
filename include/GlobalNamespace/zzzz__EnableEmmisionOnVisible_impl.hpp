#pragma once
// IWYU pragma private; include "GlobalNamespace/EnableEmmisionOnVisible.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__EnableEmmisionOnVisible_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnableEmmisionOnVisible.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableEmmisionOnVisible::*)()>(&::GlobalNamespace::EnableEmmisionOnVisible::Awake)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5858b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableEmmisionOnVisible*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableEmmisionOnVisible.OnBecameVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableEmmisionOnVisible::*)()>(&::GlobalNamespace::EnableEmmisionOnVisible::OnBecameVisible)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5858c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableEmmisionOnVisible*>(), { "OnBecameVisible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableEmmisionOnVisible.OnBecameInvisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableEmmisionOnVisible::*)()>(&::GlobalNamespace::EnableEmmisionOnVisible::OnBecameInvisible)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5858d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableEmmisionOnVisible*>(), { "OnBecameInvisible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableEmmisionOnVisible._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableEmmisionOnVisible::*)()>(&::GlobalNamespace::EnableEmmisionOnVisible::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5858db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableEmmisionOnVisible*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& GlobalNamespace::EnableEmmisionOnVisible::__cordl_internal_get__particleSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystems;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& GlobalNamespace::EnableEmmisionOnVisible::__cordl_internal_get__particleSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystems;
}
constexpr void GlobalNamespace::EnableEmmisionOnVisible::__cordl_internal_set__particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleSystems = value;
}
constexpr ::ArrayW<::UnityEngine::ParticleSystem_EmissionModule>& GlobalNamespace::EnableEmmisionOnVisible::__cordl_internal_get__emmisionModules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emmisionModules;
}
constexpr ::ArrayW<::UnityEngine::ParticleSystem_EmissionModule> const& GlobalNamespace::EnableEmmisionOnVisible::__cordl_internal_get__emmisionModules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emmisionModules;
}
constexpr void GlobalNamespace::EnableEmmisionOnVisible::__cordl_internal_set__emmisionModules(::ArrayW<::UnityEngine::ParticleSystem_EmissionModule> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____emmisionModules = value;
}
inline void GlobalNamespace::EnableEmmisionOnVisible::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableEmmisionOnVisible*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnableEmmisionOnVisible::OnBecameVisible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableEmmisionOnVisible*>(), { "OnBecameVisible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnableEmmisionOnVisible::OnBecameInvisible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableEmmisionOnVisible*>(), { "OnBecameInvisible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnableEmmisionOnVisible::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableEmmisionOnVisible*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnableEmmisionOnVisible* GlobalNamespace::EnableEmmisionOnVisible::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnableEmmisionOnVisible*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnableEmmisionOnVisible::EnableEmmisionOnVisible() {}
