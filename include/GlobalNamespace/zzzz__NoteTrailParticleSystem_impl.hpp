#pragma once
// IWYU pragma private; include "GlobalNamespace\NoteTrailParticleSystem.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__NoteTrailParticleSystem_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteTrailParticleSystem.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteTrailParticleSystem::*)()>(&::GlobalNamespace::NoteTrailParticleSystem::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59862ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailParticleSystem*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailParticleSystem.Emit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteTrailParticleSystem::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t)>(
    &::GlobalNamespace::NoteTrailParticleSystem::Emit)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x59862fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailParticleSystem*>(),
                                                             { "Emit", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailParticleSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteTrailParticleSystem::*)()>(&::GlobalNamespace::NoteTrailParticleSystem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5986400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailParticleSystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::NoteTrailParticleSystem::__cordl_internal_get__particleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::NoteTrailParticleSystem::__cordl_internal_get__particleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystem;
}
constexpr void GlobalNamespace::NoteTrailParticleSystem::__cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleSystem = value;
}
constexpr ::UnityEngine::ParticleSystem_EmitParams& GlobalNamespace::NoteTrailParticleSystem::__cordl_internal_get__emitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emitParams;
}
constexpr ::UnityEngine::ParticleSystem_EmitParams const& GlobalNamespace::NoteTrailParticleSystem::__cordl_internal_get__emitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emitParams;
}
constexpr void GlobalNamespace::NoteTrailParticleSystem::__cordl_internal_set__emitParams(::UnityEngine::ParticleSystem_EmitParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____emitParams = value;
}
inline void GlobalNamespace::NoteTrailParticleSystem::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailParticleSystem*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteTrailParticleSystem::Emit(::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailParticleSystem*>(),
                                                           { "Emit", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startPos, endPos, count);
}
inline void GlobalNamespace::NoteTrailParticleSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailParticleSystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteTrailParticleSystem* GlobalNamespace::NoteTrailParticleSystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteTrailParticleSystem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteTrailParticleSystem::NoteTrailParticleSystem() {}
