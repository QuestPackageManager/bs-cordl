#pragma once
#include "RootMotion/FinalIK/zzzz__IKSolverLimb_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverTrigonometric_impl.hpp"
#include "UnityEngine/zzzz__AvatarIKGoal_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverLimb_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverLimb_def.hpp"
#include "UnityEngine/zzzz__AvatarIKGoal_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier::__IKSolverLimb__BendModifier(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier::__IKSolverLimb__BendModifier() {}
constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier RootMotion::FinalIK::__IKSolverLimb__BendModifier::Animation{ static_cast<int32_t>(0x0) };
constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier RootMotion::FinalIK::__IKSolverLimb__BendModifier::Target{ static_cast<int32_t>(0x1) };
constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier RootMotion::FinalIK::__IKSolverLimb__BendModifier::Parent{ static_cast<int32_t>(0x2) };
constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier RootMotion::FinalIK::__IKSolverLimb__BendModifier::Arm{ static_cast<int32_t>(0x3) };
constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier RootMotion::FinalIK::__IKSolverLimb__BendModifier::Goal{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverLimb__AxisDirection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverLimb__AxisDirection::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__IKSolverLimb__AxisDirection::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x13713fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
inline void RootMotion::FinalIK::__IKSolverLimb__AxisDirection::_ctor(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 axis) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, direction, axis);
}
// Ctor Parameters [CppParam { name: "direction", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "axis", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "dot", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::FinalIK::__IKSolverLimb__AxisDirection::__IKSolverLimb__AxisDirection(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 axis, float_t dot) noexcept {
  this->direction = direction;
  this->axis = axis;
  this->dot = dot;
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__IKSolverLimb__AxisDirection::__IKSolverLimb__AxisDirection() {}
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb.MaintainRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverLimb::*)()>(&::RootMotion::FinalIK::IKSolverLimb::MaintainRotation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1370010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(), "MaintainRotation",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb.MaintainBend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverLimb::*)()>(&::RootMotion::FinalIK::IKSolverLimb::MaintainBend)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1370054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(), "MaintainBend",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb.OnInitiateVirtual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverLimb::*)()>(&::RootMotion::FinalIK::IKSolverLimb::OnInitiateVirtual)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x13700c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb.OnUpdateVirtual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverLimb::*)()>(&::RootMotion::FinalIK::IKSolverLimb::OnUpdateVirtual)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1370608;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb.OnPostSolveVirtual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverLimb::*)()>(&::RootMotion::FinalIK::IKSolverLimb::OnPostSolveVirtual)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1371124;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverLimb::*)()>(&::RootMotion::FinalIK::IKSolverLimb::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x13711cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverLimb::*)(::UnityEngine::AvatarIKGoal)>(
    &::RootMotion::FinalIK::IKSolverLimb::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1371360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AvatarIKGoal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb.get_axisDirections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> (::RootMotion::FinalIK::IKSolverLimb::*)()>(
        &::RootMotion::FinalIK::IKSolverLimb::get_axisDirections)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x13713e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                                                                               "get_axisDirections", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb.StoreAxisDirections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::RootMotion::FinalIK::IKSolverLimb::*)(ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>>)>(
        &::RootMotion::FinalIK::IKSolverLimb::StoreAxisDirections)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x137041c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(), "StoreAxisDirections", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                       ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb.GetModifiedBendNormal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::IKSolverLimb::*)()>(
    &::RootMotion::FinalIK::IKSolverLimb::GetModifiedBendNormal)> {
  constexpr static std::size_t size = 0xa60;
  constexpr static std::size_t addrs = 0x13706c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                                                                               "GetModifiedBendNormal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AvatarIKGoal& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_goal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goal;
}
constexpr ::UnityEngine::AvatarIKGoal const& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_goal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goal;
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__cordl_internal_set_goal(::UnityEngine::AvatarIKGoal value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___goal = value;
}
constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_bendModifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendModifier;
}
constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier const& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_bendModifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendModifier;
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__cordl_internal_set_bendModifier(::RootMotion::FinalIK::__IKSolverLimb__BendModifier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bendModifier = value;
}
constexpr float_t& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_maintainRotationWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintainRotationWeight;
}
constexpr float_t const& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_maintainRotationWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintainRotationWeight;
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__cordl_internal_set_maintainRotationWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maintainRotationWeight = value;
}
constexpr float_t& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_bendModifierWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendModifierWeight;
}
constexpr float_t const& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_bendModifierWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendModifierWeight;
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__cordl_internal_set_bendModifierWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bendModifierWeight = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_bendGoal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendGoal;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_bendGoal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendGoal;
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__cordl_internal_set_bendGoal(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bendGoal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_maintainBendFor1Frame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintainBendFor1Frame;
}
constexpr bool const& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_maintainBendFor1Frame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintainBendFor1Frame;
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__cordl_internal_set_maintainBendFor1Frame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maintainBendFor1Frame = value;
}
constexpr bool& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_maintainRotationFor1Frame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintainRotationFor1Frame;
}
constexpr bool const& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_maintainRotationFor1Frame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintainRotationFor1Frame;
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__cordl_internal_set_maintainRotationFor1Frame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maintainRotationFor1Frame = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_defaultRootRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultRootRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_defaultRootRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultRootRotation;
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__cordl_internal_set_defaultRootRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultRootRotation = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_parentDefaultRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentDefaultRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_parentDefaultRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentDefaultRotation;
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__cordl_internal_set_parentDefaultRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parentDefaultRotation = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_bone3RotationBeforeSolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone3RotationBeforeSolve;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_bone3RotationBeforeSolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone3RotationBeforeSolve;
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__cordl_internal_set_bone3RotationBeforeSolve(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bone3RotationBeforeSolve = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_maintainRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintainRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_maintainRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintainRotation;
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__cordl_internal_set_maintainRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maintainRotation = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_bone3DefaultRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone3DefaultRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_bone3DefaultRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone3DefaultRotation;
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__cordl_internal_set_bone3DefaultRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bone3DefaultRotation = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get__bendNormal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bendNormal;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get__bendNormal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bendNormal;
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__cordl_internal_set__bendNormal(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bendNormal = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_animationNormal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationNormal;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_animationNormal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationNormal;
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__cordl_internal_set_animationNormal(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___animationNormal = value;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>&
RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_axisDirectionsLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axisDirectionsLeft;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> const&
RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_axisDirectionsLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axisDirectionsLeft;
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__cordl_internal_set_axisDirectionsLeft(
    ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___axisDirectionsLeft)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>&
RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_axisDirectionsRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axisDirectionsRight;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> const&
RootMotion::FinalIK::IKSolverLimb::__cordl_internal_get_axisDirectionsRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axisDirectionsRight;
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__cordl_internal_set_axisDirectionsRight(
    ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___axisDirectionsRight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::IKSolverLimb::MaintainRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(), "MaintainRotation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverLimb::MaintainBend() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(), "MaintainBend",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverLimb::OnInitiateVirtual() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverLimb::OnUpdateVirtual() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverLimb::OnPostSolveVirtual() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::IKSolverLimb* RootMotion::FinalIK::IKSolverLimb::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::IKSolverLimb*>());
}
inline void RootMotion::FinalIK::IKSolverLimb::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::IKSolverLimb* RootMotion::FinalIK::IKSolverLimb::New_ctor(::UnityEngine::AvatarIKGoal goal) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::IKSolverLimb*>(goal));
}
inline void RootMotion::FinalIK::IKSolverLimb::_ctor(::UnityEngine::AvatarIKGoal goal) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AvatarIKGoal>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, goal);
}
inline ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> RootMotion::FinalIK::IKSolverLimb::get_axisDirections() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(), "get_axisDirections",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>, false>(this,
                                                                                                                                                                                    ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverLimb::StoreAxisDirections(
    ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>> axisDirections) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(), "StoreAxisDirections", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, axisDirections);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKSolverLimb::GetModifiedBendNormal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                                                                             "GetModifiedBendNormal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::IKSolverLimb::IKSolverLimb() {}
