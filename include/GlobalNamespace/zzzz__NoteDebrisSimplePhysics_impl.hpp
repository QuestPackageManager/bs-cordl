#pragma once
#include "GlobalNamespace/zzzz__NoteDebrisPhysics_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisSimplePhysics_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSimplePhysics.get_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::NoteDebrisSimplePhysics::*)()>(
    &::GlobalNamespace::NoteDebrisSimplePhysics::get_position)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22d00c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSimplePhysics*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSimplePhysics*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSimplePhysics.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisSimplePhysics::*)()>(&::GlobalNamespace::NoteDebrisSimplePhysics::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22d00e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSimplePhysics*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSimplePhysics.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisSimplePhysics::*)()>(&::GlobalNamespace::NoteDebrisSimplePhysics::LateUpdate)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x22d0110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSimplePhysics*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSimplePhysics.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisSimplePhysics::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::NoteDebrisSimplePhysics::Init)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22d02ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSimplePhysics*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSimplePhysics*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSimplePhysics.AddVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisSimplePhysics::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::NoteDebrisSimplePhysics::AddVelocity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22d02d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSimplePhysics*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSimplePhysics*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSimplePhysics._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisSimplePhysics::*)()>(&::GlobalNamespace::NoteDebrisSimplePhysics::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d02f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSimplePhysics*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__currentForce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentForce;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__currentForce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentForce;
}
constexpr void GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_set__currentForce(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentForce = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__currentTorque() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTorque;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_get__currentTorque() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTorque;
}
constexpr void GlobalNamespace::NoteDebrisSimplePhysics::__cordl_internal_set__currentTorque(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentTorque = value;
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::UnityEngine::Vector3 GlobalNamespace::NoteDebrisSimplePhysics::get_position() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSimplePhysics*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteDebrisSimplePhysics::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSimplePhysics*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteDebrisSimplePhysics::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSimplePhysics*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteDebrisSimplePhysics::Init(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 torque) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSimplePhysics*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, force, torque);
}
inline void GlobalNamespace::NoteDebrisSimplePhysics::AddVelocity(::UnityEngine::Vector3 force) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSimplePhysics*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, force);
}
inline ::GlobalNamespace::NoteDebrisSimplePhysics* GlobalNamespace::NoteDebrisSimplePhysics::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoteDebrisSimplePhysics*>());
}
inline void GlobalNamespace::NoteDebrisSimplePhysics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSimplePhysics*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteDebrisSimplePhysics::NoteDebrisSimplePhysics() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
