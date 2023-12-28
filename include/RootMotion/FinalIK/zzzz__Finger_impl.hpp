#pragma once
#include "RootMotion/FinalIK/zzzz__Finger_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__Finger_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverLimb_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/FinalIK/zzzz__Finger_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::FinalIK::__Finger__DOF::__Finger__DOF(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__Finger__DOF::__Finger__DOF() {}
constexpr ::RootMotion::FinalIK::__Finger__DOF RootMotion::FinalIK::__Finger__DOF::One{ static_cast<int32_t>(0x0) };
constexpr ::RootMotion::FinalIK::__Finger__DOF RootMotion::FinalIK::__Finger__DOF::Three{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::RootMotion::FinalIK::Finger.get_initiated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Finger::*)()>(&::RootMotion::FinalIK::Finger::get_initiated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1242be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "get_initiated",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Finger.set_initiated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Finger::*)(bool)>(&::RootMotion::FinalIK::Finger::set_initiated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1242bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "set_initiated", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Finger.get_IKPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::Finger::*)()>(&::RootMotion::FinalIK::Finger::get_IKPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1242bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "get_IKPosition",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Finger.set_IKPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Finger::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::Finger::set_IKPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1242c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "set_IKPosition", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Finger.get_IKRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::Finger::*)()>(&::RootMotion::FinalIK::Finger::get_IKRotation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1242c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "get_IKRotation",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Finger.set_IKRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Finger::*)(::UnityEngine::Quaternion)>(&::RootMotion::FinalIK::Finger::set_IKRotation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1242c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "set_IKRotation", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Finger.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Finger::*)(ByRef<::StringW>)>(&::RootMotion::FinalIK::Finger::IsValid)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1242c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "IsValid", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Finger.Initiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Finger::*)(::UnityEngine::Transform*, int32_t)>(
    &::RootMotion::FinalIK::Finger::Initiate)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x1242d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "Initiate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Finger.FixTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Finger::*)()>(&::RootMotion::FinalIK::Finger::FixTransforms)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1243244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "FixTransforms",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Finger.StoreDefaultLocalState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Finger::*)()>(&::RootMotion::FinalIK::Finger::StoreDefaultLocalState)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1243310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "StoreDefaultLocalState",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Finger.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Finger::*)(float_t)>(&::RootMotion::FinalIK::Finger::Update)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0x12433c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "Update", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Finger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Finger::*)()>(&::RootMotion::FinalIK::Finger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1243a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& RootMotion::FinalIK::Finger::__get_weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr float_t const& RootMotion::FinalIK::Finger::__get_weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr void RootMotion::FinalIK::Finger::__set_weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___weight = value;
}
constexpr float_t& RootMotion::FinalIK::Finger::__get_rotationWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationWeight;
}
constexpr float_t const& RootMotion::FinalIK::Finger::__get_rotationWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationWeight;
}
constexpr void RootMotion::FinalIK::Finger::__set_rotationWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationWeight = value;
}
constexpr ::RootMotion::FinalIK::__Finger__DOF& RootMotion::FinalIK::Finger::__get_rotationDOF() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationDOF;
}
constexpr ::RootMotion::FinalIK::__Finger__DOF const& RootMotion::FinalIK::Finger::__get_rotationDOF() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationDOF;
}
constexpr void RootMotion::FinalIK::Finger::__set_rotationDOF(::RootMotion::FinalIK::__Finger__DOF value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationDOF = value;
}
constexpr bool& RootMotion::FinalIK::Finger::__get_fixBone1Twist() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixBone1Twist;
}
constexpr bool const& RootMotion::FinalIK::Finger::__get_fixBone1Twist() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixBone1Twist;
}
constexpr void RootMotion::FinalIK::Finger::__set_fixBone1Twist(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fixBone1Twist = value;
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::Finger::__get_bone1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone1;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::Finger::__get_bone1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone1;
}
constexpr void RootMotion::FinalIK::Finger::__set_bone1(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bone1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::Finger::__get_bone2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone2;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::Finger::__get_bone2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone2;
}
constexpr void RootMotion::FinalIK::Finger::__set_bone2(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bone2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::Finger::__get_bone3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone3;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::Finger::__get_bone3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone3;
}
constexpr void RootMotion::FinalIK::Finger::__set_bone3(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bone3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::Finger::__get_tip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::Finger::__get_tip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tip;
}
constexpr void RootMotion::FinalIK::Finger::__set_tip(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::Finger::__get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::Finger::__get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void RootMotion::FinalIK::Finger::__set_target(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& RootMotion::FinalIK::Finger::__get__initiated_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initiated_k__BackingField;
}
constexpr bool const& RootMotion::FinalIK::Finger::__get__initiated_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initiated_k__BackingField;
}
constexpr void RootMotion::FinalIK::Finger::__set__initiated_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initiated_k__BackingField = value;
}
constexpr ::RootMotion::FinalIK::IKSolverLimb*& RootMotion::FinalIK::Finger::__get_solver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___solver;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLimb*> const& RootMotion::FinalIK::Finger::__get_solver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___solver;
}
constexpr void RootMotion::FinalIK::Finger::__set_solver(::RootMotion::FinalIK::IKSolverLimb* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___solver)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::Finger::__get_bone3RelativeToTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone3RelativeToTarget;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::Finger::__get_bone3RelativeToTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone3RelativeToTarget;
}
constexpr void RootMotion::FinalIK::Finger::__set_bone3RelativeToTarget(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bone3RelativeToTarget = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Finger::__get_bone3DefaultLocalPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone3DefaultLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Finger::__get_bone3DefaultLocalPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone3DefaultLocalPosition;
}
constexpr void RootMotion::FinalIK::Finger::__set_bone3DefaultLocalPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bone3DefaultLocalPosition = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::Finger::__get_bone3DefaultLocalRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone3DefaultLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::Finger::__get_bone3DefaultLocalRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone3DefaultLocalRotation;
}
constexpr void RootMotion::FinalIK::Finger::__set_bone3DefaultLocalRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bone3DefaultLocalRotation = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Finger::__get_bone1Axis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone1Axis;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Finger::__get_bone1Axis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone1Axis;
}
constexpr void RootMotion::FinalIK::Finger::__set_bone1Axis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bone1Axis = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Finger::__get_tipAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tipAxis;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Finger::__get_tipAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tipAxis;
}
constexpr void RootMotion::FinalIK::Finger::__set_tipAxis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tipAxis = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Finger::__get_bone1TwistAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone1TwistAxis;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Finger::__get_bone1TwistAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone1TwistAxis;
}
constexpr void RootMotion::FinalIK::Finger::__set_bone1TwistAxis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bone1TwistAxis = value;
}
inline bool RootMotion::FinalIK::Finger::get_initiated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "get_initiated",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Finger::set_initiated(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "set_initiated", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::Finger::get_IKPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "get_IKPosition",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Finger::set_IKPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "set_IKPosition", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion RootMotion::FinalIK::Finger::get_IKRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "get_IKRotation",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Finger::set_IKRotation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "set_IKRotation", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool RootMotion::FinalIK::Finger::IsValid(ByRef<::StringW> errorMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "IsValid", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, errorMessage);
}
inline void RootMotion::FinalIK::Finger::Initiate(::UnityEngine::Transform* hand, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "Initiate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hand, index);
}
inline void RootMotion::FinalIK::Finger::FixTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "FixTransforms",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Finger::StoreDefaultLocalState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "StoreDefaultLocalState",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Finger::Update(float_t masterWeight) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), "Update", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, masterWeight);
}
inline ::RootMotion::FinalIK::Finger* RootMotion::FinalIK::Finger::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::Finger*>());
}
inline void RootMotion::FinalIK::Finger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Finger*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::Finger::Finger() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
