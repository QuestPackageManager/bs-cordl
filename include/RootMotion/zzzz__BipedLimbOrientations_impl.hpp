#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/zzzz__BipedLimbOrientations_def.hpp"
#include "RootMotion/zzzz__BipedLimbOrientations_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::RootMotion::__BipedLimbOrientations__LimbOrientation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::__BipedLimbOrientations__LimbOrientation::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::__BipedLimbOrientations__LimbOrientation::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1236054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::__BipedLimbOrientations__LimbOrientation*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& RootMotion::__BipedLimbOrientations__LimbOrientation::__get_upperBoneForwardAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upperBoneForwardAxis;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::__BipedLimbOrientations__LimbOrientation::__get_upperBoneForwardAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upperBoneForwardAxis;
}
constexpr void RootMotion::__BipedLimbOrientations__LimbOrientation::__set_upperBoneForwardAxis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___upperBoneForwardAxis = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::__BipedLimbOrientations__LimbOrientation::__get_lowerBoneForwardAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lowerBoneForwardAxis;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::__BipedLimbOrientations__LimbOrientation::__get_lowerBoneForwardAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lowerBoneForwardAxis;
}
constexpr void RootMotion::__BipedLimbOrientations__LimbOrientation::__set_lowerBoneForwardAxis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lowerBoneForwardAxis = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::__BipedLimbOrientations__LimbOrientation::__get_lastBoneLeftAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastBoneLeftAxis;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::__BipedLimbOrientations__LimbOrientation::__get_lastBoneLeftAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastBoneLeftAxis;
}
constexpr void RootMotion::__BipedLimbOrientations__LimbOrientation::__set_lastBoneLeftAxis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastBoneLeftAxis = value;
}
inline ::RootMotion::__BipedLimbOrientations__LimbOrientation*
RootMotion::__BipedLimbOrientations__LimbOrientation::New_ctor(::UnityEngine::Vector3 upperBoneForwardAxis, ::UnityEngine::Vector3 lowerBoneForwardAxis, ::UnityEngine::Vector3 lastBoneLeftAxis) {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::__BipedLimbOrientations__LimbOrientation*>(upperBoneForwardAxis, lowerBoneForwardAxis, lastBoneLeftAxis));
}
inline void RootMotion::__BipedLimbOrientations__LimbOrientation::_ctor(::UnityEngine::Vector3 upperBoneForwardAxis, ::UnityEngine::Vector3 lowerBoneForwardAxis,
                                                                        ::UnityEngine::Vector3 lastBoneLeftAxis) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::__BipedLimbOrientations__LimbOrientation*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, upperBoneForwardAxis, lowerBoneForwardAxis, lastBoneLeftAxis);
}
// Ctor Parameters []
constexpr ::RootMotion::__BipedLimbOrientations__LimbOrientation::__BipedLimbOrientations__LimbOrientation() {}
//  Writing Method size for method: ::RootMotion::BipedLimbOrientations._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::BipedLimbOrientations::*)(
    ::RootMotion::__BipedLimbOrientations__LimbOrientation*, ::RootMotion::__BipedLimbOrientations__LimbOrientation*, ::RootMotion::__BipedLimbOrientations__LimbOrientation*,
    ::RootMotion::__BipedLimbOrientations__LimbOrientation*)>(&::RootMotion::BipedLimbOrientations::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1235d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedLimbOrientations*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedLimbOrientations__LimbOrientation*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedLimbOrientations__LimbOrientation*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedLimbOrientations__LimbOrientation*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedLimbOrientations__LimbOrientation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedLimbOrientations.get_UMA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::BipedLimbOrientations* (*)()>(&::RootMotion::BipedLimbOrientations::get_UMA)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x1235da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedLimbOrientations*>::get(), "get_UMA",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedLimbOrientations.get_MaxBiped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::BipedLimbOrientations* (*)()>(&::RootMotion::BipedLimbOrientations::get_MaxBiped)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x12360c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedLimbOrientations*>::get(), "get_MaxBiped",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::RootMotion::__BipedLimbOrientations__LimbOrientation*& RootMotion::BipedLimbOrientations::__get_leftArm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftArm;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::__BipedLimbOrientations__LimbOrientation*> const& RootMotion::BipedLimbOrientations::__get_leftArm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftArm;
}
constexpr void RootMotion::BipedLimbOrientations::__set_leftArm(::RootMotion::__BipedLimbOrientations__LimbOrientation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftArm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::__BipedLimbOrientations__LimbOrientation*& RootMotion::BipedLimbOrientations::__get_rightArm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightArm;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::__BipedLimbOrientations__LimbOrientation*> const& RootMotion::BipedLimbOrientations::__get_rightArm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightArm;
}
constexpr void RootMotion::BipedLimbOrientations::__set_rightArm(::RootMotion::__BipedLimbOrientations__LimbOrientation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightArm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::__BipedLimbOrientations__LimbOrientation*& RootMotion::BipedLimbOrientations::__get_leftLeg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftLeg;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::__BipedLimbOrientations__LimbOrientation*> const& RootMotion::BipedLimbOrientations::__get_leftLeg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftLeg;
}
constexpr void RootMotion::BipedLimbOrientations::__set_leftLeg(::RootMotion::__BipedLimbOrientations__LimbOrientation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftLeg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::__BipedLimbOrientations__LimbOrientation*& RootMotion::BipedLimbOrientations::__get_rightLeg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightLeg;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::__BipedLimbOrientations__LimbOrientation*> const& RootMotion::BipedLimbOrientations::__get_rightLeg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightLeg;
}
constexpr void RootMotion::BipedLimbOrientations::__set_rightLeg(::RootMotion::__BipedLimbOrientations__LimbOrientation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightLeg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::RootMotion::BipedLimbOrientations* RootMotion::BipedLimbOrientations::New_ctor(::RootMotion::__BipedLimbOrientations__LimbOrientation* leftArm,
                                                                                        ::RootMotion::__BipedLimbOrientations__LimbOrientation* rightArm,
                                                                                        ::RootMotion::__BipedLimbOrientations__LimbOrientation* leftLeg,
                                                                                        ::RootMotion::__BipedLimbOrientations__LimbOrientation* rightLeg) {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::BipedLimbOrientations*>(leftArm, rightArm, leftLeg, rightLeg));
}
inline void RootMotion::BipedLimbOrientations::_ctor(::RootMotion::__BipedLimbOrientations__LimbOrientation* leftArm, ::RootMotion::__BipedLimbOrientations__LimbOrientation* rightArm,
                                                     ::RootMotion::__BipedLimbOrientations__LimbOrientation* leftLeg, ::RootMotion::__BipedLimbOrientations__LimbOrientation* rightLeg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedLimbOrientations*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedLimbOrientations__LimbOrientation*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedLimbOrientations__LimbOrientation*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedLimbOrientations__LimbOrientation*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedLimbOrientations__LimbOrientation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, leftArm, rightArm, leftLeg, rightLeg);
}
inline ::RootMotion::BipedLimbOrientations* RootMotion::BipedLimbOrientations::get_UMA() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedLimbOrientations*>::get(), "get_UMA",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::BipedLimbOrientations*, false>(nullptr, ___internal_method);
}
inline ::RootMotion::BipedLimbOrientations* RootMotion::BipedLimbOrientations::get_MaxBiped() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedLimbOrientations*>::get(), "get_MaxBiped",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::BipedLimbOrientations*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::BipedLimbOrientations::BipedLimbOrientations() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
