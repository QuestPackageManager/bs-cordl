#pragma once
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_impl.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__Amplifier_def.hpp"
#include "RootMotion/FinalIK/zzzz__Amplifier_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBodyBiped_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__Amplifier__Body__EffectorLink._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Amplifier__Body__EffectorLink::*)()>(
    &::GlobalNamespace::__Amplifier__Body__EffectorLink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x136dac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Amplifier__Body__EffectorLink*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& GlobalNamespace::__Amplifier__Body__EffectorLink::__cordl_internal_get_effector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effector;
}
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& GlobalNamespace::__Amplifier__Body__EffectorLink::__cordl_internal_get_effector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effector;
}
constexpr void GlobalNamespace::__Amplifier__Body__EffectorLink::__cordl_internal_set_effector(::RootMotion::FinalIK::FullBodyBipedEffector value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___effector = value;
}
constexpr float_t& GlobalNamespace::__Amplifier__Body__EffectorLink::__cordl_internal_get_weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr float_t const& GlobalNamespace::__Amplifier__Body__EffectorLink::__cordl_internal_get_weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr void GlobalNamespace::__Amplifier__Body__EffectorLink::__cordl_internal_set_weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___weight = value;
}
inline ::GlobalNamespace::__Amplifier__Body__EffectorLink* GlobalNamespace::__Amplifier__Body__EffectorLink::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__Amplifier__Body__EffectorLink*>());
}
inline void GlobalNamespace::__Amplifier__Body__EffectorLink::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Amplifier__Body__EffectorLink*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Amplifier__Body__EffectorLink::__Amplifier__Body__EffectorLink() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__Amplifier__Body.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Amplifier__Body::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped*, float_t, float_t)>(
    &::RootMotion::FinalIK::__Amplifier__Body::Update)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x136d768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Amplifier__Body*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Amplifier__Body.Multiply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__Amplifier__Body::Multiply)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x136da98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Amplifier__Body*>::get(), "Multiply", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Amplifier__Body._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Amplifier__Body::*)()>(&::RootMotion::FinalIK::__Amplifier__Body::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x136daa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Amplifier__Body*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr void RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_relativeTo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relativeTo;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_relativeTo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relativeTo;
}
constexpr void RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_set_relativeTo(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___relativeTo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*, ::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*>&
RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_effectorLinks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectorLinks;
}
constexpr ::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*, ::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*> const&
RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_effectorLinks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectorLinks;
}
constexpr void RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_set_effectorLinks(
    ::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*, ::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___effectorLinks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_verticalWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalWeight;
}
constexpr float_t const& RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_verticalWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalWeight;
}
constexpr void RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_set_verticalWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___verticalWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_horizontalWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___horizontalWeight;
}
constexpr float_t const& RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_horizontalWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___horizontalWeight;
}
constexpr void RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_set_horizontalWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___horizontalWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_speed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___speed;
}
constexpr float_t const& RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_speed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___speed;
}
constexpr void RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_set_speed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___speed = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_lastRelativePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRelativePos;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_lastRelativePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRelativePos;
}
constexpr void RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_set_lastRelativePos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastRelativePos = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_smoothDelta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothDelta;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_smoothDelta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothDelta;
}
constexpr void RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_set_smoothDelta(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothDelta = value;
}
constexpr bool& RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_firstUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstUpdate;
}
constexpr bool const& RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_get_firstUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstUpdate;
}
constexpr void RootMotion::FinalIK::__Amplifier__Body::__cordl_internal_set_firstUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstUpdate = value;
}
inline void RootMotion::FinalIK::__Amplifier__Body::Update(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float_t w, float_t deltaTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Amplifier__Body*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, solver, w, deltaTime);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__Amplifier__Body::Multiply(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Amplifier__Body*>::get(), "Multiply", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, v1, v2);
}
inline ::RootMotion::FinalIK::__Amplifier__Body* RootMotion::FinalIK::__Amplifier__Body::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__Amplifier__Body*>());
}
inline void RootMotion::FinalIK::__Amplifier__Body::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Amplifier__Body*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__Amplifier__Body::__Amplifier__Body() {}
//  Writing Method size for method: ::RootMotion::FinalIK::Amplifier.OnModifyOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Amplifier::*)()>(&::RootMotion::FinalIK::Amplifier::OnModifyOffset)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x136d618;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Amplifier*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Amplifier*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Amplifier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Amplifier::*)()>(&::RootMotion::FinalIK::Amplifier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x136da78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Amplifier*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*, ::Array<::RootMotion::FinalIK::__Amplifier__Body*>*>& RootMotion::FinalIK::Amplifier::__cordl_internal_get_bodies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodies;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*, ::Array<::RootMotion::FinalIK::__Amplifier__Body*>*> const& RootMotion::FinalIK::Amplifier::__cordl_internal_get_bodies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodies;
}
constexpr void RootMotion::FinalIK::Amplifier::__cordl_internal_set_bodies(::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*, ::Array<::RootMotion::FinalIK::__Amplifier__Body*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bodies)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::Amplifier::OnModifyOffset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Amplifier*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::Amplifier* RootMotion::FinalIK::Amplifier::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::Amplifier*>());
}
inline void RootMotion::FinalIK::Amplifier::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Amplifier*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::Amplifier::Amplifier() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
