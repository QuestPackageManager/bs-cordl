#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRBoneCapsule.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRBoneCapsule_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRBoneCapsule.get_BoneIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::GlobalNamespace::OVRBoneCapsule::*)()>(&::GlobalNamespace::OVRBoneCapsule::get_BoneIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(), { "get_BoneIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoneCapsule.set_BoneIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBoneCapsule::*)(int16_t)>(&::GlobalNamespace::OVRBoneCapsule::set_BoneIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(), { "set_BoneIndex", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoneCapsule.get_CapsuleRigidbody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::GlobalNamespace::OVRBoneCapsule::*)()>(&::GlobalNamespace::OVRBoneCapsule::get_CapsuleRigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(), { "get_CapsuleRigidbody", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoneCapsule.set_CapsuleRigidbody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBoneCapsule::*)(::UnityEngine::Rigidbody*)>(&::GlobalNamespace::OVRBoneCapsule::set_CapsuleRigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(), { "set_CapsuleRigidbody", {}, { ::i2c::type_of<::UnityEngine::Rigidbody*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoneCapsule.get_CapsuleCollider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::CapsuleCollider> (::GlobalNamespace::OVRBoneCapsule::*)()>(&::GlobalNamespace::OVRBoneCapsule::get_CapsuleCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(), { "get_CapsuleCollider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoneCapsule.set_CapsuleCollider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBoneCapsule::*)(::UnityEngine::CapsuleCollider*)>(&::GlobalNamespace::OVRBoneCapsule::set_CapsuleCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(), { "set_CapsuleCollider", {}, { ::i2c::type_of<::UnityEngine::CapsuleCollider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoneCapsule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBoneCapsule::*)()>(&::GlobalNamespace::OVRBoneCapsule::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f11330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoneCapsule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBoneCapsule::*)(int16_t, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*)>(
    &::GlobalNamespace::OVRBoneCapsule::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f11ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(),
                                                { ".ctor", {}, { ::i2c::type_of<int16_t>(), ::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::UnityEngine::CapsuleCollider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoneCapsule.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBoneCapsule::*)()>(&::GlobalNamespace::OVRBoneCapsule::Cleanup)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f11288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
constexpr int16_t& GlobalNamespace::OVRBoneCapsule::__cordl_internal_get__BoneIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BoneIndex_k__BackingField;
}
constexpr int16_t const& GlobalNamespace::OVRBoneCapsule::__cordl_internal_get__BoneIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BoneIndex_k__BackingField;
}
constexpr void GlobalNamespace::OVRBoneCapsule::__cordl_internal_set__BoneIndex_k__BackingField(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BoneIndex_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::OVRBoneCapsule::__cordl_internal_get__CapsuleRigidbody_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CapsuleRigidbody_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::OVRBoneCapsule::__cordl_internal_get__CapsuleRigidbody_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CapsuleRigidbody_k__BackingField;
}
constexpr void GlobalNamespace::OVRBoneCapsule::__cordl_internal_set__CapsuleRigidbody_k__BackingField(::UnityW<::UnityEngine::Rigidbody> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CapsuleRigidbody_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& GlobalNamespace::OVRBoneCapsule::__cordl_internal_get__CapsuleCollider_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CapsuleCollider_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& GlobalNamespace::OVRBoneCapsule::__cordl_internal_get__CapsuleCollider_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CapsuleCollider_k__BackingField;
}
constexpr void GlobalNamespace::OVRBoneCapsule::__cordl_internal_set__CapsuleCollider_k__BackingField(::UnityW<::UnityEngine::CapsuleCollider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CapsuleCollider_k__BackingField = value;
}
inline int16_t GlobalNamespace::OVRBoneCapsule::get_BoneIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(), { "get_BoneIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRBoneCapsule::set_BoneIndex(int16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(), { "set_BoneIndex", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Rigidbody> GlobalNamespace::OVRBoneCapsule::get_CapsuleRigidbody() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(), { "get_CapsuleRigidbody", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRBoneCapsule::set_CapsuleRigidbody(::UnityEngine::Rigidbody* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(), { "set_CapsuleRigidbody", {}, { ::i2c::type_of<::UnityEngine::Rigidbody*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::CapsuleCollider> GlobalNamespace::OVRBoneCapsule::get_CapsuleCollider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(), { "get_CapsuleCollider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::CapsuleCollider>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRBoneCapsule::set_CapsuleCollider(::UnityEngine::CapsuleCollider* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(), { "set_CapsuleCollider", {}, { ::i2c::type_of<::UnityEngine::CapsuleCollider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRBoneCapsule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRBoneCapsule::_ctor(int16_t boneIndex, ::UnityEngine::Rigidbody* capsuleRigidBody, ::UnityEngine::CapsuleCollider* capsuleCollider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(),
                                              { ".ctor", {}, { ::i2c::type_of<int16_t>(), ::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::UnityEngine::CapsuleCollider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boneIndex, capsuleRigidBody, capsuleCollider);
}
inline void GlobalNamespace::OVRBoneCapsule::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBoneCapsule*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRBoneCapsule* GlobalNamespace::OVRBoneCapsule::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRBoneCapsule*>());
}
inline ::GlobalNamespace::OVRBoneCapsule* GlobalNamespace::OVRBoneCapsule::New_ctor(int16_t boneIndex, ::UnityEngine::Rigidbody* capsuleRigidBody, ::UnityEngine::CapsuleCollider* capsuleCollider) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRBoneCapsule*>(boneIndex, capsuleRigidBody, capsuleCollider));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRBoneCapsule::OVRBoneCapsule() {}
