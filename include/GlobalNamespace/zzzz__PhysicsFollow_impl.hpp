#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PhysicsFollow_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Rigidbody2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhysicsFollow.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PhysicsFollow::*)()>(&::GlobalNamespace::PhysicsFollow::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1f98010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PhysicsFollow*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhysicsFollow.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PhysicsFollow::*)()>(&::GlobalNamespace::PhysicsFollow::FixedUpdate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1f980a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PhysicsFollow*>::get(), "FixedUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhysicsFollow._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PhysicsFollow::*)()>(&::GlobalNamespace::PhysicsFollow::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1f98180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PhysicsFollow*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& GlobalNamespace::PhysicsFollow::__get__targetTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::PhysicsFollow::__get__targetTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTransform;
}
constexpr void GlobalNamespace::PhysicsFollow::__set__targetTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PhysicsFollow::__get__offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PhysicsFollow::__get__offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr void GlobalNamespace::PhysicsFollow::__set__offset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____offset = value;
}
constexpr float_t& GlobalNamespace::PhysicsFollow::__get__friction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____friction;
}
constexpr float_t const& GlobalNamespace::PhysicsFollow::__get__friction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____friction;
}
constexpr void GlobalNamespace::PhysicsFollow::__set__friction(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____friction = value;
}
constexpr float_t& GlobalNamespace::PhysicsFollow::__get__elasticity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elasticity;
}
constexpr float_t const& GlobalNamespace::PhysicsFollow::__get__elasticity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elasticity;
}
constexpr void GlobalNamespace::PhysicsFollow::__set__elasticity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elasticity = value;
}
constexpr ::UnityEngine::Rigidbody2D*& GlobalNamespace::PhysicsFollow::__get__rigidBody2D() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rigidBody2D;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody2D*> const& GlobalNamespace::PhysicsFollow::__get__rigidBody2D() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rigidBody2D;
}
constexpr void GlobalNamespace::PhysicsFollow::__set__rigidBody2D(::UnityEngine::Rigidbody2D* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rigidBody2D)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PhysicsFollow::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PhysicsFollow*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PhysicsFollow::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PhysicsFollow*>::get(), "FixedUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PhysicsFollow* GlobalNamespace::PhysicsFollow::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PhysicsFollow*>());
}
inline void GlobalNamespace::PhysicsFollow::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PhysicsFollow*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhysicsFollow::PhysicsFollow() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
