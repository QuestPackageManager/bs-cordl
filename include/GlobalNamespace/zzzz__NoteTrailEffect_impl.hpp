#pragma once
// IWYU pragma private; include "GlobalNamespace\NoteTrailEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteTrailEffect_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
#include "GlobalNamespace/zzzz__NoteTrailParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::Awake)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x599e244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailEffect*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x599e380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailEffect*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::Update)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x599e514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailEffect*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect.HandleNoteMovementDidInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::HandleNoteMovementDidInit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x599e578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailEffect*>(), { "HandleNoteMovementDidInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect.HandleNoteDidStartJump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::HandleNoteDidStartJump)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x599e584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailEffect*>(), { "HandleNoteDidStartJump", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x599e590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::NoteTrailEffect::__cordl_internal_get__particlesPerFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particlesPerFrame;
}
constexpr int32_t const& GlobalNamespace::NoteTrailEffect::__cordl_internal_get__particlesPerFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particlesPerFrame;
}
constexpr void GlobalNamespace::NoteTrailEffect::__cordl_internal_set__particlesPerFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particlesPerFrame = value;
}
constexpr float_t& GlobalNamespace::NoteTrailEffect::__cordl_internal_get__maxSpawnDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxSpawnDistance;
}
constexpr float_t const& GlobalNamespace::NoteTrailEffect::__cordl_internal_get__maxSpawnDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxSpawnDistance;
}
constexpr void GlobalNamespace::NoteTrailEffect::__cordl_internal_set__maxSpawnDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxSpawnDistance = value;
}
constexpr ::UnityW<::GlobalNamespace::NoteMovement>& GlobalNamespace::NoteTrailEffect::__cordl_internal_get__noteMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteMovement;
}
constexpr ::UnityW<::GlobalNamespace::NoteMovement> const& GlobalNamespace::NoteTrailEffect::__cordl_internal_get__noteMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteMovement;
}
constexpr void GlobalNamespace::NoteTrailEffect::__cordl_internal_set__noteMovement(::UnityW<::GlobalNamespace::NoteMovement> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteMovement = value;
}
constexpr ::UnityW<::GlobalNamespace::NoteTrailParticleSystem>& GlobalNamespace::NoteTrailEffect::__cordl_internal_get__noteTrailParticleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteTrailParticleSystem;
}
constexpr ::UnityW<::GlobalNamespace::NoteTrailParticleSystem> const& GlobalNamespace::NoteTrailEffect::__cordl_internal_get__noteTrailParticleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteTrailParticleSystem;
}
constexpr void GlobalNamespace::NoteTrailEffect::__cordl_internal_set__noteTrailParticleSystem(::UnityW<::GlobalNamespace::NoteTrailParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteTrailParticleSystem = value;
}
inline void GlobalNamespace::NoteTrailEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailEffect*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteTrailEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailEffect*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteTrailEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailEffect*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteTrailEffect::HandleNoteMovementDidInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailEffect*>(), { "HandleNoteMovementDidInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteTrailEffect::HandleNoteDidStartJump() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailEffect*>(), { "HandleNoteDidStartJump", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteTrailEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteTrailEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteTrailEffect* GlobalNamespace::NoteTrailEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteTrailEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteTrailEffect::NoteTrailEffect() {}
