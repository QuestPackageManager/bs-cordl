#pragma once
// IWYU pragma private; include "GlobalNamespace\NoteDebrisSimplePhysics.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisPhysics_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisSimplePhysics_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSimplePhysics.get_currentLinearVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::NoteDebrisSimplePhysics::*)()>(
    &::GlobalNamespace::NoteDebrisSimplePhysics::get_currentLinearVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58d55d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebrisSimplePhysics*>(), { "get_currentLinearVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSimplePhysics.get_currentAngularVelocityDegrees
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::NoteDebrisSimplePhysics::*)()>(
    &::GlobalNamespace::NoteDebrisSimplePhysics::get_currentAngularVelocityDegrees)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58d55e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebrisSimplePhysics*>(), { "get_currentAngularVelocityDegrees", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSimplePhysics.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteDebrisSimplePhysics::*)()>(&::GlobalNamespace::NoteDebrisSimplePhysics::Awake)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58d55f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebrisSimplePhysics*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSimplePhysics.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteDebrisSimplePhysics::*)()>(&::GlobalNamespace::NoteDebrisSimplePhysics::LateUpdate)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x58d5300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebrisSimplePhysics*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSimplePhysics.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteDebrisSimplePhysics::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, bool)>(
    &::GlobalNamespace::NoteDebrisSimplePhysics::Init)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58d5668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebrisSimplePhysics*>(), { ::i2c::class_of<::GlobalNamespace::NoteDebrisSimplePhysics*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSimplePhysics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteDebrisSimplePhysics::*)()>(&::GlobalNamespace::NoteDebrisSimplePhysics::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d571c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebrisSimplePhysics*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__currentLinearVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentLinearVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__currentLinearVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentLinearVelocity;
}
constexpr void GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_set__currentLinearVelocity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentLinearVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__currentAngularVelocityDegrees() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentAngularVelocityDegrees;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__currentAngularVelocityDegrees() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentAngularVelocityDegrees;
}
constexpr void GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_set__currentAngularVelocityDegrees(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentAngularVelocityDegrees = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__gravity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gravity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__gravity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gravity;
}
constexpr void GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_set__gravity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gravity = value;
}
constexpr bool& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__firstUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstUpdate;
}
constexpr bool const& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__firstUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstUpdate;
}
constexpr void GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_set__firstUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstUpdate = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr void GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_set__position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation;
}
constexpr void GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_set__rotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotation = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::NoteDebrisSimplePhysics::get_currentLinearVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebrisSimplePhysics*>(), { "get_currentLinearVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::NoteDebrisSimplePhysics::get_currentAngularVelocityDegrees() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebrisSimplePhysics*>(), { "get_currentAngularVelocityDegrees", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::NoteDebrisSimplePhysics::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebrisSimplePhysics*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteDebrisSimplePhysics::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebrisSimplePhysics*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteDebrisSimplePhysics::Init(::UnityEngine::Vector3 linearVelocity, ::UnityEngine::Vector3 angularVelocity, bool forceOnlySimplePhysics) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteDebrisSimplePhysics*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linearVelocity, angularVelocity, forceOnlySimplePhysics);
}
inline void GlobalNamespace::NoteDebrisSimplePhysics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebrisSimplePhysics*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteDebrisSimplePhysics* GlobalNamespace::NoteDebrisSimplePhysics::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteDebrisSimplePhysics*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteDebrisSimplePhysics::NoteDebrisSimplePhysics() {}
