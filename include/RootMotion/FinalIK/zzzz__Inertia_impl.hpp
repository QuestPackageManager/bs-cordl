#pragma once
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_impl.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__Inertia_def.hpp"
#include "RootMotion/FinalIK/zzzz__Inertia_def.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBodyBiped_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__Inertia__Body__EffectorLink._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Inertia__Body__EffectorLink::*)()>(
    &::GlobalNamespace::__Inertia__Body__EffectorLink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12971b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Inertia__Body__EffectorLink*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& GlobalNamespace::__Inertia__Body__EffectorLink::__get_effector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___effector;
}
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& GlobalNamespace::__Inertia__Body__EffectorLink::__get_effector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___effector;
}
constexpr void GlobalNamespace::__Inertia__Body__EffectorLink::__set_effector(::RootMotion::FinalIK::FullBodyBipedEffector value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___effector = value;
}
constexpr float_t& GlobalNamespace::__Inertia__Body__EffectorLink::__get_weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___weight;
}
constexpr float_t const& GlobalNamespace::__Inertia__Body__EffectorLink::__get_weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___weight;
}
constexpr void GlobalNamespace::__Inertia__Body__EffectorLink::__set_weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___weight = value;
}
inline ::GlobalNamespace::__Inertia__Body__EffectorLink* GlobalNamespace::__Inertia__Body__EffectorLink::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__Inertia__Body__EffectorLink*>());
}
inline void GlobalNamespace::__Inertia__Body__EffectorLink::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Inertia__Body__EffectorLink*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Inertia__Body__EffectorLink::__Inertia__Body__EffectorLink() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__Inertia__Body.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Inertia__Body::*)()>(&::RootMotion::FinalIK::__Inertia__Body::Reset)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1296cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Inertia__Body*>::get(), "Reset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Inertia__Body.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Inertia__Body::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped*, float_t, float_t)>(
    &::RootMotion::FinalIK::__Inertia__Body::Update)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x1296e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Inertia__Body*>::get(), "Update", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Inertia__Body._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Inertia__Body::*)()>(&::RootMotion::FinalIK::__Inertia__Body::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1297194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Inertia__Body*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::__Inertia__Body::__get_transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::__Inertia__Body::__get_transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___transform;
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__Inertia__Body__EffectorLink*, ::Array<::GlobalNamespace::__Inertia__Body__EffectorLink*>*>& RootMotion::FinalIK::__Inertia__Body::__get_effectorLinks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___effectorLinks;
}
constexpr ::ArrayW<::GlobalNamespace::__Inertia__Body__EffectorLink*, ::Array<::GlobalNamespace::__Inertia__Body__EffectorLink*>*> const&
RootMotion::FinalIK::__Inertia__Body::__get_effectorLinks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___effectorLinks;
}
constexpr void
RootMotion::FinalIK::__Inertia__Body::__set_effectorLinks(::ArrayW<::GlobalNamespace::__Inertia__Body__EffectorLink*, ::Array<::GlobalNamespace::__Inertia__Body__EffectorLink*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___effectorLinks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::__Inertia__Body::__get_speed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___speed;
}
constexpr float_t const& RootMotion::FinalIK::__Inertia__Body::__get_speed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___speed;
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_speed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___speed = value;
}
constexpr float_t& RootMotion::FinalIK::__Inertia__Body::__get_acceleration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___acceleration;
}
constexpr float_t const& RootMotion::FinalIK::__Inertia__Body::__get_acceleration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___acceleration;
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_acceleration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___acceleration = value;
}
constexpr float_t& RootMotion::FinalIK::__Inertia__Body::__get_matchVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___matchVelocity;
}
constexpr float_t const& RootMotion::FinalIK::__Inertia__Body::__get_matchVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___matchVelocity;
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_matchVelocity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___matchVelocity = value;
}
constexpr float_t& RootMotion::FinalIK::__Inertia__Body::__get_gravity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___gravity;
}
constexpr float_t const& RootMotion::FinalIK::__Inertia__Body::__get_gravity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___gravity;
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_gravity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___gravity = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Inertia__Body::__get_delta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___delta;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Inertia__Body::__get_delta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___delta;
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_delta(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___delta = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Inertia__Body::__get_lazyPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lazyPoint;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Inertia__Body::__get_lazyPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lazyPoint;
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_lazyPoint(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lazyPoint = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Inertia__Body::__get_direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___direction;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Inertia__Body::__get_direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___direction;
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_direction(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___direction = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Inertia__Body::__get_lastPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Inertia__Body::__get_lastPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastPosition;
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_lastPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lastPosition = value;
}
constexpr bool& RootMotion::FinalIK::__Inertia__Body::__get_firstUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___firstUpdate;
}
constexpr bool const& RootMotion::FinalIK::__Inertia__Body::__get_firstUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___firstUpdate;
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_firstUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___firstUpdate = value;
}
inline void RootMotion::FinalIK::__Inertia__Body::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Inertia__Body*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Inertia__Body::Update(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float_t weight, float_t deltaTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Inertia__Body*>::get(), "Update", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, solver, weight, deltaTime);
}
inline ::RootMotion::FinalIK::__Inertia__Body* RootMotion::FinalIK::__Inertia__Body::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__Inertia__Body*>());
}
inline void RootMotion::FinalIK::__Inertia__Body::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Inertia__Body*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__Inertia__Body::__Inertia__Body() {}
//  Writing Method size for method: ::RootMotion::FinalIK::Inertia.ResetBodies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Inertia::*)()>(&::RootMotion::FinalIK::Inertia::ResetBodies)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1296c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Inertia*>::get(), "ResetBodies",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Inertia.OnModifyOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Inertia::*)()>(&::RootMotion::FinalIK::Inertia::OnModifyOffset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1296d94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Inertia*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Inertia*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Inertia._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Inertia::*)()>(&::RootMotion::FinalIK::Inertia::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1297184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Inertia*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::RootMotion::FinalIK::__Inertia__Body*, ::Array<::RootMotion::FinalIK::__Inertia__Body*>*>& RootMotion::FinalIK::Inertia::__get_bodies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bodies;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__Inertia__Body*, ::Array<::RootMotion::FinalIK::__Inertia__Body*>*> const& RootMotion::FinalIK::Inertia::__get_bodies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bodies;
}
constexpr void RootMotion::FinalIK::Inertia::__set_bodies(::ArrayW<::RootMotion::FinalIK::__Inertia__Body*, ::Array<::RootMotion::FinalIK::__Inertia__Body*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bodies)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*, ::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*>& RootMotion::FinalIK::Inertia::__get_limits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___limits;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*, ::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*> const& RootMotion::FinalIK::Inertia::__get_limits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___limits;
}
constexpr void RootMotion::FinalIK::Inertia::__set_limits(::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*, ::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___limits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::Inertia::ResetBodies() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Inertia*>::get(), "ResetBodies",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Inertia::OnModifyOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Inertia*>::get(), "OnModifyOffset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::Inertia* RootMotion::FinalIK::Inertia::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::Inertia*>());
}
inline void RootMotion::FinalIK::Inertia::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Inertia*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::Inertia::Inertia() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
