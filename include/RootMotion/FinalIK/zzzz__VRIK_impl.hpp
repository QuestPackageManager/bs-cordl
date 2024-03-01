#pragma once
#include "RootMotion/FinalIK/zzzz__IK_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/FinalIK/zzzz__VRIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverVR_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "RootMotion/FinalIK/zzzz__VRIK_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__VRIK__References.GetTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> (
    ::RootMotion::FinalIK::__VRIK__References::*)()>(&::RootMotion::FinalIK::__VRIK__References::GetTransforms)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x132c9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIK__References*>::get(),
                                                                               "GetTransforms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__VRIK__References.get_isFilled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::__VRIK__References::*)()>(&::RootMotion::FinalIK::__VRIK__References::get_isFilled)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x132c3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIK__References*>::get(),
                                                                               "get_isFilled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__VRIK__References.get_isEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::__VRIK__References::*)()>(&::RootMotion::FinalIK::__VRIK__References::get_isEmpty)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x132c040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIK__References*>::get(), "get_isEmpty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__VRIK__References.AutoDetectReferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Transform*, ByRef<::RootMotion::FinalIK::__VRIK__References*>)>(
    &::RootMotion::FinalIK::__VRIK__References::AutoDetectReferences)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x132bc18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIK__References*>::get(), "AutoDetectReferences", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::FinalIK::__VRIK__References*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__VRIK__References._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__VRIK__References::*)()>(&::RootMotion::FinalIK::__VRIK__References::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x132c9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIK__References*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_root(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___root)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_pelvis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvis;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_pelvis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvis;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_pelvis(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pelvis)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_spine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spine;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_spine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spine;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_spine(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___spine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_chest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chest;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_chest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chest;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_chest(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_neck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___neck;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_neck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___neck;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_neck(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___neck)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___head;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___head;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_head(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___head)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_leftShoulder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftShoulder;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_leftShoulder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftShoulder;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_leftShoulder(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftShoulder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_leftUpperArm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftUpperArm;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_leftUpperArm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftUpperArm;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_leftUpperArm(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftUpperArm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_leftForearm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftForearm;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_leftForearm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftForearm;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_leftForearm(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftForearm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_leftHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_leftHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHand;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_leftHand(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_rightShoulder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightShoulder;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_rightShoulder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightShoulder;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_rightShoulder(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightShoulder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_rightUpperArm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightUpperArm;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_rightUpperArm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightUpperArm;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_rightUpperArm(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightUpperArm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_rightForearm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightForearm;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_rightForearm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightForearm;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_rightForearm(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightForearm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_rightHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_rightHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHand;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_rightHand(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_leftThigh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftThigh;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_leftThigh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftThigh;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_leftThigh(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftThigh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_leftCalf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftCalf;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_leftCalf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftCalf;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_leftCalf(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftCalf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_leftFoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftFoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_leftFoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftFoot;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_leftFoot(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftFoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_leftToes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftToes;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_leftToes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftToes;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_leftToes(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftToes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_rightThigh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightThigh;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_rightThigh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightThigh;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_rightThigh(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightThigh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_rightCalf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightCalf;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_rightCalf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightCalf;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_rightCalf(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightCalf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_rightFoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightFoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_rightFoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightFoot;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_rightFoot(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightFoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_rightToes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightToes;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__VRIK__References::__cordl_internal_get_rightToes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightToes;
}
constexpr void RootMotion::FinalIK::__VRIK__References::__cordl_internal_set_rightToes(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightToes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> RootMotion::FinalIK::__VRIK__References::GetTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIK__References*>::get(), "GetTransforms",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::__VRIK__References::get_isFilled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIK__References*>::get(), "get_isFilled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::__VRIK__References::get_isEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIK__References*>::get(), "get_isEmpty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::__VRIK__References::AutoDetectReferences(::UnityEngine::Transform* root, ByRef<::RootMotion::FinalIK::__VRIK__References*> references) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIK__References*>::get(), "AutoDetectReferences", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::FinalIK::__VRIK__References*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, root, references);
}
inline ::RootMotion::FinalIK::__VRIK__References* RootMotion::FinalIK::__VRIK__References::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__VRIK__References*>());
}
inline void RootMotion::FinalIK::__VRIK__References::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIK__References*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__VRIK__References::__VRIK__References() {}
//  Writing Method size for method: ::RootMotion::FinalIK::VRIK.OpenUserManual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::VRIK::*)()>(&::RootMotion::FinalIK::VRIK::OpenUserManual)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x132bb30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIK.OpenScriptReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::VRIK::*)()>(&::RootMotion::FinalIK::VRIK::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x132bb74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIK.OpenSetupTutorial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::VRIK::*)()>(&::RootMotion::FinalIK::VRIK::OpenSetupTutorial)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x132bbb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), "OpenSetupTutorial",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIK.AutoDetectReferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::VRIK::*)()>(&::RootMotion::FinalIK::VRIK::AutoDetectReferences)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x132bbfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), "AutoDetectReferences",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIK.GuessHandOrientations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::VRIK::*)()>(&::RootMotion::FinalIK::VRIK::GuessHandOrientations)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x132bfa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), "GuessHandOrientations",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIK.GetIKSolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKSolver* (::RootMotion::FinalIK::VRIK::*)()>(&::RootMotion::FinalIK::VRIK::GetIKSolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x132bfcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIK.InitiateSolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::VRIK::*)()>(&::RootMotion::FinalIK::VRIK::InitiateSolver)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x132bfd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIK.UpdateSolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::VRIK::*)()>(&::RootMotion::FinalIK::VRIK::UpdateSolver)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x132c7b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIK._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::VRIK::*)()>(&::RootMotion::FinalIK::VRIK::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x132c948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::RootMotion::FinalIK::__VRIK__References*& RootMotion::FinalIK::VRIK::__cordl_internal_get_references() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___references;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__VRIK__References*> const& RootMotion::FinalIK::VRIK::__cordl_internal_get_references() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___references;
}
constexpr void RootMotion::FinalIK::VRIK::__cordl_internal_set_references(::RootMotion::FinalIK::__VRIK__References* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___references)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::IKSolverVR*& RootMotion::FinalIK::VRIK::__cordl_internal_get_solver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___solver;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverVR*> const& RootMotion::FinalIK::VRIK::__cordl_internal_get_solver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___solver;
}
constexpr void RootMotion::FinalIK::VRIK::__cordl_internal_set_solver(::RootMotion::FinalIK::IKSolverVR* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___solver)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::VRIK::OpenUserManual() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::VRIK::OpenScriptReference() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::VRIK::OpenSetupTutorial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), "OpenSetupTutorial",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::VRIK::AutoDetectReferences() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), "AutoDetectReferences",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::VRIK::GuessHandOrientations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), "GuessHandOrientations",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::IKSolver* RootMotion::FinalIK::VRIK::GetIKSolver() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::IKSolver*, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::VRIK::InitiateSolver() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::VRIK::UpdateSolver() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::VRIK* RootMotion::FinalIK::VRIK::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::VRIK*>());
}
inline void RootMotion::FinalIK::VRIK::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIK*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::VRIK::VRIK() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
