#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKConstraintBend_def.hpp"
#include "RootMotion/zzzz__Warning_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::IKConstraintBend.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::RootMotion::FinalIK::IKConstraintBend::*)(::RootMotion::FinalIK::IKSolverFullBody*, ::RootMotion::__Warning__Logger*)>(&::RootMotion::FinalIK::IKConstraintBend::IsValid)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x1257abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "IsValid", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBody*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__Warning__Logger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKConstraintBend.get_initiated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::IKConstraintBend::*)()>(&::RootMotion::FinalIK::IKConstraintBend::get_initiated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1257c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "get_initiated",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKConstraintBend.set_initiated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKConstraintBend::*)(bool)>(&::RootMotion::FinalIK::IKConstraintBend::set_initiated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1257c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "set_initiated", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKConstraintBend._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKConstraintBend::*)()>(&::RootMotion::FinalIK::IKConstraintBend::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1254c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKConstraintBend._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::RootMotion::FinalIK::IKConstraintBend::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::RootMotion::FinalIK::IKConstraintBend::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1257ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKConstraintBend.SetBones
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKConstraintBend::*)(
    ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::RootMotion::FinalIK::IKConstraintBend::SetBones)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x12557b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "SetBones", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKConstraintBend.Initiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKConstraintBend::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(
    &::RootMotion::FinalIK::IKConstraintBend::Initiate)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x12557c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "Initiate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBody*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKConstraintBend.SetLimbOrientation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKConstraintBend::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::IKConstraintBend::SetLimbOrientation)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x1257e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "SetLimbOrientation", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKConstraintBend.LimitBend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKConstraintBend::*)(float_t, float_t)>(
    &::RootMotion::FinalIK::IKConstraintBend::LimitBend)> {
  constexpr static std::size_t size = 0x13c8;
  constexpr static std::size_t addrs = 0x12581d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "LimitBend", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKConstraintBend.GetDir
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::IKConstraintBend::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(
    &::RootMotion::FinalIK::IKConstraintBend::GetDir)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x1256790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "GetDir", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBody*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKConstraintBend.OrthoToLimb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::IKConstraintBend::*)(
    ::RootMotion::FinalIK::IKSolverFullBody*, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::IKConstraintBend::OrthoToLimb)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1257d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "OrthoToLimb", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBody*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKConstraintBend.OrthoToBone1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::IKConstraintBend::*)(
    ::RootMotion::FinalIK::IKSolverFullBody*, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::IKConstraintBend::OrthoToBone1)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1257dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "OrthoToBone1", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBody*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::IKConstraintBend::__get_bone1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bone1;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::IKConstraintBend::__get_bone1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bone1;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set_bone1(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bone1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::IKConstraintBend::__get_bone2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bone2;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::IKConstraintBend::__get_bone2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bone2;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set_bone2(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bone2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::IKConstraintBend::__get_bone3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bone3;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::IKConstraintBend::__get_bone3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bone3;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set_bone3(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bone3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::IKConstraintBend::__get_bendGoal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bendGoal;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::IKConstraintBend::__get_bendGoal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bendGoal;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set_bendGoal(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bendGoal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKConstraintBend::__get_direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___direction;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKConstraintBend::__get_direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___direction;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set_direction(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___direction = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::IKConstraintBend::__get_rotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rotationOffset;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::IKConstraintBend::__get_rotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rotationOffset;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set_rotationOffset(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___rotationOffset = value;
}
constexpr float_t& RootMotion::FinalIK::IKConstraintBend::__get_weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___weight;
}
constexpr float_t const& RootMotion::FinalIK::IKConstraintBend::__get_weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___weight;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set_weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___weight = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKConstraintBend::__get_defaultLocalDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultLocalDirection;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKConstraintBend::__get_defaultLocalDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultLocalDirection;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set_defaultLocalDirection(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___defaultLocalDirection = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKConstraintBend::__get_defaultChildDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultChildDirection;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKConstraintBend::__get_defaultChildDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultChildDirection;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set_defaultChildDirection(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___defaultChildDirection = value;
}
constexpr float_t& RootMotion::FinalIK::IKConstraintBend::__get_clampF() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___clampF;
}
constexpr float_t const& RootMotion::FinalIK::IKConstraintBend::__get_clampF() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___clampF;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set_clampF(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___clampF = value;
}
constexpr int32_t& RootMotion::FinalIK::IKConstraintBend::__get_chainIndex1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___chainIndex1;
}
constexpr int32_t const& RootMotion::FinalIK::IKConstraintBend::__get_chainIndex1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___chainIndex1;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set_chainIndex1(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___chainIndex1 = value;
}
constexpr int32_t& RootMotion::FinalIK::IKConstraintBend::__get_nodeIndex1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nodeIndex1;
}
constexpr int32_t const& RootMotion::FinalIK::IKConstraintBend::__get_nodeIndex1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nodeIndex1;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set_nodeIndex1(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___nodeIndex1 = value;
}
constexpr int32_t& RootMotion::FinalIK::IKConstraintBend::__get_chainIndex2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___chainIndex2;
}
constexpr int32_t const& RootMotion::FinalIK::IKConstraintBend::__get_chainIndex2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___chainIndex2;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set_chainIndex2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___chainIndex2 = value;
}
constexpr int32_t& RootMotion::FinalIK::IKConstraintBend::__get_nodeIndex2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nodeIndex2;
}
constexpr int32_t const& RootMotion::FinalIK::IKConstraintBend::__get_nodeIndex2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nodeIndex2;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set_nodeIndex2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___nodeIndex2 = value;
}
constexpr int32_t& RootMotion::FinalIK::IKConstraintBend::__get_chainIndex3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___chainIndex3;
}
constexpr int32_t const& RootMotion::FinalIK::IKConstraintBend::__get_chainIndex3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___chainIndex3;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set_chainIndex3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___chainIndex3 = value;
}
constexpr int32_t& RootMotion::FinalIK::IKConstraintBend::__get_nodeIndex3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nodeIndex3;
}
constexpr int32_t const& RootMotion::FinalIK::IKConstraintBend::__get_nodeIndex3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nodeIndex3;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set_nodeIndex3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___nodeIndex3 = value;
}
constexpr bool& RootMotion::FinalIK::IKConstraintBend::__get__initiated_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initiated_k__BackingField;
}
constexpr bool const& RootMotion::FinalIK::IKConstraintBend::__get__initiated_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initiated_k__BackingField;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set__initiated_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____initiated_k__BackingField = value;
}
constexpr bool& RootMotion::FinalIK::IKConstraintBend::__get_limbOrientationsSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___limbOrientationsSet;
}
constexpr bool const& RootMotion::FinalIK::IKConstraintBend::__get_limbOrientationsSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___limbOrientationsSet;
}
constexpr void RootMotion::FinalIK::IKConstraintBend::__set_limbOrientationsSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___limbOrientationsSet = value;
}
inline bool RootMotion::FinalIK::IKConstraintBend::IsValid(::RootMotion::FinalIK::IKSolverFullBody* solver, ::RootMotion::__Warning__Logger* logger) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "IsValid", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBody*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__Warning__Logger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, solver, logger);
}
inline bool RootMotion::FinalIK::IKConstraintBend::get_initiated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "get_initiated",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKConstraintBend::set_initiated(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "set_initiated", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::RootMotion::FinalIK::IKConstraintBend* RootMotion::FinalIK::IKConstraintBend::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::IKConstraintBend*>());
}
inline void RootMotion::FinalIK::IKConstraintBend::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::IKConstraintBend* RootMotion::FinalIK::IKConstraintBend::New_ctor(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3) {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::IKConstraintBend*>(bone1, bone2, bone3));
}
inline void RootMotion::FinalIK::IKConstraintBend::_ctor(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bone1, bone2, bone3);
}
inline void RootMotion::FinalIK::IKConstraintBend::SetBones(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "SetBones", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bone1, bone2, bone3);
}
inline void RootMotion::FinalIK::IKConstraintBend::Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "Initiate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBody*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, solver);
}
inline void RootMotion::FinalIK::IKConstraintBend::SetLimbOrientation(::UnityEngine::Vector3 upper, ::UnityEngine::Vector3 lower, ::UnityEngine::Vector3 last) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "SetLimbOrientation", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, upper, lower, last);
}
inline void RootMotion::FinalIK::IKConstraintBend::LimitBend(float_t solverWeight, float_t positionWeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "LimitBend", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, solverWeight, positionWeight);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKConstraintBend::GetDir(::RootMotion::FinalIK::IKSolverFullBody* solver) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "GetDir", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBody*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, solver);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKConstraintBend::OrthoToLimb(::RootMotion::FinalIK::IKSolverFullBody* solver, ::UnityEngine::Vector3 tangent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "OrthoToLimb", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBody*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, solver, tangent);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKConstraintBend::OrthoToBone1(::RootMotion::FinalIK::IKSolverFullBody* solver, ::UnityEngine::Vector3 tangent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKConstraintBend*>::get(), "OrthoToBone1", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBody*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, solver, tangent);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::IKConstraintBend::IKConstraintBend() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
