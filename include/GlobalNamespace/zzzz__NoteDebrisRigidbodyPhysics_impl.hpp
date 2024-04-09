#pragma once
#include "GlobalNamespace/zzzz__NoteDebrisPhysics_impl.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisRigidbodyPhysics_def.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisSimplePhysics_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisRigidbodyPhysics.get_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::NoteDebrisRigidbodyPhysics::*)()>(
    &::GlobalNamespace::NoteDebrisRigidbodyPhysics::get_position)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25214fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisRigidbodyPhysics.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisRigidbodyPhysics::*)()>(
    &::GlobalNamespace::NoteDebrisRigidbodyPhysics::FixedUpdate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2521518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                                                                               "FixedUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisRigidbodyPhysics.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisRigidbodyPhysics::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::NoteDebrisRigidbodyPhysics::Init)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2521560;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisRigidbodyPhysics.AddVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisRigidbodyPhysics::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::NoteDebrisRigidbodyPhysics::AddVelocity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2521624;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisRigidbodyPhysics._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisRigidbodyPhysics::*)()>(&::GlobalNamespace::NoteDebrisRigidbodyPhysics::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2521684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::NoteDebrisRigidbodyPhysics::__cordl_internal_get__rigidbody() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::NoteDebrisRigidbodyPhysics::__cordl_internal_get__rigidbody() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rigidbody;
}
constexpr void GlobalNamespace::NoteDebrisRigidbodyPhysics::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rigidbody)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::NoteDebrisSimplePhysics>& GlobalNamespace::NoteDebrisRigidbodyPhysics::__cordl_internal_get__simplePhysics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simplePhysics;
}
constexpr ::UnityW<::GlobalNamespace::NoteDebrisSimplePhysics> const& GlobalNamespace::NoteDebrisRigidbodyPhysics::__cordl_internal_get__simplePhysics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simplePhysics;
}
constexpr void GlobalNamespace::NoteDebrisRigidbodyPhysics::__cordl_internal_set__simplePhysics(::UnityW<::GlobalNamespace::NoteDebrisSimplePhysics> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____simplePhysics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::NoteDebrisRigidbodyPhysics::__cordl_internal_get__firstUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstUpdate;
}
constexpr bool const& GlobalNamespace::NoteDebrisRigidbodyPhysics::__cordl_internal_get__firstUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstUpdate;
}
constexpr void GlobalNamespace::NoteDebrisRigidbodyPhysics::__cordl_internal_set__firstUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstUpdate = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::NoteDebrisRigidbodyPhysics::get_position() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteDebrisRigidbodyPhysics::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                                                                             "FixedUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteDebrisRigidbodyPhysics::Init(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 torque) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, force, torque);
}
inline void GlobalNamespace::NoteDebrisRigidbodyPhysics::AddVelocity(::UnityEngine::Vector3 force) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, force);
}
inline ::GlobalNamespace::NoteDebrisRigidbodyPhysics* GlobalNamespace::NoteDebrisRigidbodyPhysics::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>());
}
inline void GlobalNamespace::NoteDebrisRigidbodyPhysics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteDebrisRigidbodyPhysics::NoteDebrisRigidbodyPhysics() {}
