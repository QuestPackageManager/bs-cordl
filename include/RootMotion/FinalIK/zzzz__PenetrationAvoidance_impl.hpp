#pragma once
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_impl.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__PenetrationAvoidance_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBodyBiped_def.hpp"
#include "RootMotion/FinalIK/zzzz__PenetrationAvoidance_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::*)()>(
    &::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x139c614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::__cordl_internal_get_effector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effector;
}
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::__cordl_internal_get_effector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effector;
}
constexpr void GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::__cordl_internal_set_effector(::RootMotion::FinalIK::FullBodyBipedEffector value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___effector = value;
}
constexpr float_t& GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::__cordl_internal_get_weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr float_t const& GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::__cordl_internal_get_weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr void GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::__cordl_internal_set_weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___weight = value;
}
inline ::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink* GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>());
}
inline void GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::__PenetrationAvoidance__Avoider__EffectorLink() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__PenetrationAvoidance__Avoider.Solve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__PenetrationAvoidance__Avoider::*)(
    ::RootMotion::FinalIK::IKSolverFullBodyBiped*, float_t)>(&::RootMotion::FinalIK::__PenetrationAvoidance__Avoider::Solve)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x139c038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>::get(), "Solve", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__PenetrationAvoidance__Avoider.GetOffsetTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__PenetrationAvoidance__Avoider::*)(
    ::RootMotion::FinalIK::IKSolverFullBodyBiped*)>(&::RootMotion::FinalIK::__PenetrationAvoidance__Avoider::GetOffsetTarget)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x139c1d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>::get(), "GetOffsetTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__PenetrationAvoidance__Avoider.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__PenetrationAvoidance__Avoider::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__PenetrationAvoidance__Avoider::Raycast)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x139c2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>::get(), "Raycast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__PenetrationAvoidance__Avoider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__PenetrationAvoidance__Avoider::*)()>(
    &::RootMotion::FinalIK::__PenetrationAvoidance__Avoider::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x139c600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_raycastFrom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycastFrom;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const&
RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_raycastFrom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycastFrom;
}
constexpr void
RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_set_raycastFrom(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___raycastFrom)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_raycastTo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycastTo;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_raycastTo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycastTo;
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_set_raycastTo(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___raycastTo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_raycastRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycastRadius;
}
constexpr float_t const& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_raycastRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycastRadius;
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_set_raycastRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___raycastRadius = value;
}
constexpr ::ArrayW<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*, ::Array<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>*>&
RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_effectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectors;
}
constexpr ::ArrayW<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*, ::Array<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>*> const&
RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_effectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectors;
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_set_effectors(
    ::ArrayW<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*, ::Array<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___effectors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_smoothTimeIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothTimeIn;
}
constexpr float_t const& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_smoothTimeIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothTimeIn;
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_set_smoothTimeIn(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothTimeIn = value;
}
constexpr float_t& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_smoothTimeOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothTimeOut;
}
constexpr float_t const& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_smoothTimeOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothTimeOut;
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_set_smoothTimeOut(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothTimeOut = value;
}
constexpr ::UnityEngine::LayerMask& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_layers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layers;
}
constexpr ::UnityEngine::LayerMask const& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_layers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layers;
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_set_layers(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layers = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_set_offset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_offsetTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetTarget;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_offsetTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetTarget;
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_set_offsetTarget(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offsetTarget = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_offsetV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetV;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_get_offsetV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetV;
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__cordl_internal_set_offsetV(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offsetV = value;
}
inline void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::Solve(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>::get(), "Solve", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, solver, weight);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__PenetrationAvoidance__Avoider::GetOffsetTarget(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>::get(), "GetOffsetTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, solver);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__PenetrationAvoidance__Avoider::Raycast(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>::get(), "Raycast", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, from, to);
}
inline ::RootMotion::FinalIK::__PenetrationAvoidance__Avoider* RootMotion::FinalIK::__PenetrationAvoidance__Avoider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>());
}
inline void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__PenetrationAvoidance__Avoider() {}
//  Writing Method size for method: ::RootMotion::FinalIK::PenetrationAvoidance.OnModifyOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::PenetrationAvoidance::*)()>(
    &::RootMotion::FinalIK::PenetrationAvoidance::OnModifyOffset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x139bfc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::PenetrationAvoidance*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::PenetrationAvoidance*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::PenetrationAvoidance._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::PenetrationAvoidance::*)()>(&::RootMotion::FinalIK::PenetrationAvoidance::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x139c1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::PenetrationAvoidance*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*, ::Array<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>*>&
RootMotion::FinalIK::PenetrationAvoidance::__cordl_internal_get_avoiders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avoiders;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*, ::Array<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>*> const&
RootMotion::FinalIK::PenetrationAvoidance::__cordl_internal_get_avoiders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avoiders;
}
constexpr void RootMotion::FinalIK::PenetrationAvoidance::__cordl_internal_set_avoiders(
    ::ArrayW<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*, ::Array<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___avoiders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::PenetrationAvoidance::OnModifyOffset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::PenetrationAvoidance*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::PenetrationAvoidance* RootMotion::FinalIK::PenetrationAvoidance::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::PenetrationAvoidance*>());
}
inline void RootMotion::FinalIK::PenetrationAvoidance::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::PenetrationAvoidance*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::PenetrationAvoidance::PenetrationAvoidance() {}
