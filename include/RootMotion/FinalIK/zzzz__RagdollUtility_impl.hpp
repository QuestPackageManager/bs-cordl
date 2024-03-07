#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AnimatorUpdateMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__RagdollUtility_def.hpp"
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
#include "RootMotion/FinalIK/zzzz__RagdollUtility_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Joint_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__RagdollUtility__Rigidbone._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__RagdollUtility__Rigidbone::*)(::UnityEngine::Rigidbody*)>(
    &::RootMotion::FinalIK::__RagdollUtility__Rigidbone::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x13910ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__RagdollUtility__Rigidbone.RecordVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__RagdollUtility__Rigidbone::*)()>(
    &::RootMotion::FinalIK::__RagdollUtility__Rigidbone::RecordVelocity)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1391bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>::get(),
                                                                               "RecordVelocity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__RagdollUtility__Rigidbone.WakeUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__RagdollUtility__Rigidbone::*)(float_t, float_t)>(
    &::RootMotion::FinalIK::__RagdollUtility__Rigidbone::WakeUp)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x13919b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>::get(), "WakeUp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_set_r(::UnityW<::UnityEngine::Rigidbody> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___r)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_set_t(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___t)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Collider>& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_collider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_collider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collider;
}
constexpr void RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_set_collider(::UnityW<::UnityEngine::Collider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___collider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Joint>& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_joint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joint;
}
constexpr ::UnityW<::UnityEngine::Joint> const& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_joint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joint;
}
constexpr void RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_set_joint(::UnityW<::UnityEngine::Joint> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___joint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_set_c(::UnityW<::UnityEngine::Rigidbody> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___c)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_updateAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateAnchor;
}
constexpr bool const& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_updateAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateAnchor;
}
constexpr void RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_set_updateAnchor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___updateAnchor = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_deltaPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deltaPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_deltaPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deltaPosition;
}
constexpr void RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_set_deltaPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deltaPosition = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_deltaRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deltaRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_deltaRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deltaRotation;
}
constexpr void RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_set_deltaRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deltaRotation = value;
}
constexpr float_t& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_deltaTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deltaTime;
}
constexpr float_t const& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_deltaTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deltaTime;
}
constexpr void RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_set_deltaTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deltaTime = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_lastPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_lastPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPosition;
}
constexpr void RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_set_lastPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastPosition = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_lastRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_get_lastRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRotation;
}
constexpr void RootMotion::FinalIK::__RagdollUtility__Rigidbone::__cordl_internal_set_lastRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastRotation = value;
}
inline ::RootMotion::FinalIK::__RagdollUtility__Rigidbone* RootMotion::FinalIK::__RagdollUtility__Rigidbone::New_ctor(::UnityEngine::Rigidbody* r) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>(r));
}
inline void RootMotion::FinalIK::__RagdollUtility__Rigidbone::_ctor(::UnityEngine::Rigidbody* r) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, r);
}
inline void RootMotion::FinalIK::__RagdollUtility__Rigidbone::RecordVelocity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>::get(),
                                                                             "RecordVelocity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__RagdollUtility__Rigidbone::WakeUp(float_t velocityWeight, float_t angularVelocityWeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>::get(), "WakeUp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, velocityWeight, angularVelocityWeight);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__RagdollUtility__Rigidbone::__RagdollUtility__Rigidbone() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__RagdollUtility__Child._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__RagdollUtility__Child::*)(::UnityEngine::Transform*)>(
    &::RootMotion::FinalIK::__RagdollUtility__Child::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1391200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility__Child*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__RagdollUtility__Child.FixTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__RagdollUtility__Child::*)(float_t)>(
    &::RootMotion::FinalIK::__RagdollUtility__Child::FixTransform)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1391d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility__Child*>::get(), "FixTransform",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__RagdollUtility__Child.StoreLocalState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__RagdollUtility__Child::*)()>(
    &::RootMotion::FinalIK::__RagdollUtility__Child::StoreLocalState)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1391cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility__Child*>::get(),
                                                                               "StoreLocalState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__RagdollUtility__Child::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__RagdollUtility__Child::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void RootMotion::FinalIK::__RagdollUtility__Child::__cordl_internal_set_t(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___t)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__RagdollUtility__Child::__cordl_internal_get_localPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__RagdollUtility__Child::__cordl_internal_get_localPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localPosition;
}
constexpr void RootMotion::FinalIK::__RagdollUtility__Child::__cordl_internal_set_localPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localPosition = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__RagdollUtility__Child::__cordl_internal_get_localRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__RagdollUtility__Child::__cordl_internal_get_localRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localRotation;
}
constexpr void RootMotion::FinalIK::__RagdollUtility__Child::__cordl_internal_set_localRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localRotation = value;
}
inline ::RootMotion::FinalIK::__RagdollUtility__Child* RootMotion::FinalIK::__RagdollUtility__Child::New_ctor(::UnityEngine::Transform* transform) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__RagdollUtility__Child*>(transform));
}
inline void RootMotion::FinalIK::__RagdollUtility__Child::_ctor(::UnityEngine::Transform* transform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility__Child*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform);
}
inline void RootMotion::FinalIK::__RagdollUtility__Child::FixTransform(float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility__Child*>::get(), "FixTransform",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, weight);
}
inline void RootMotion::FinalIK::__RagdollUtility__Child::StoreLocalState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility__Child*>::get(),
                                                                             "StoreLocalState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__RagdollUtility__Child::__RagdollUtility__Child() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::*)(int32_t)>(
    &::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x139125c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::*)()>(
    &::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x139202c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::*)()>(
    &::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1392030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::*)()>(
    &::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1392210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::*)()>(
    &::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1392218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::*)()>(
    &::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1392258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::RootMotion::FinalIK::RagdollUtility>& RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::RootMotion::FinalIK::RagdollUtility> const& RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::__cordl_internal_set___4__this(::UnityW<::RootMotion::FinalIK::RagdollUtility> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21* RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21*>(__1__state));
}
inline void RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__RagdollUtility___DisableRagdollSmooth_d__21::__RagdollUtility___DisableRagdollSmooth_d__21() {}
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.EnableRagdoll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::EnableRagdoll)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1390b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "EnableRagdoll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.DisableRagdoll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::DisableRagdoll)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1390b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "DisableRagdoll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::Start)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x1390ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.DisableRagdollSmooth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::RootMotion::FinalIK::RagdollUtility::*)()>(
    &::RootMotion::FinalIK::RagdollUtility::DisableRagdollSmooth)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1390c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(),
                                                                               "DisableRagdollSmooth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::Update)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x1391284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::FixedUpdate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x13914ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "FixedUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::LateUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x139154c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.AfterLastIK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::AfterLastIK)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x139173c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "AfterLastIK",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.AfterAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::AfterAnimation)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x13915bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "AfterAnimation",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.OnFinalPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::OnFinalPose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1391708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "OnFinalPose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.RagdollEnabler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::RagdollEnabler)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x13917bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "RagdollEnabler",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.get_isRagdoll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::get_isRagdoll)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1390b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "get_isRagdoll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.RecordVelocities
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::RecordVelocities)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1391760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(),
                                                                               "RecordVelocities", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.get_ikUsed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::get_ikUsed)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x13915e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "get_ikUsed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.StoreLocalState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::StoreLocalState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1390bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "StoreLocalState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.FixTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)(float_t)>(&::RootMotion::FinalIK::RagdollUtility::FixTransforms)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x13914e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "FixTransforms", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::OnDestroy)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1391e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1391f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::RootMotion::FinalIK::IK>& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_ik() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ik;
}
constexpr ::UnityW<::RootMotion::FinalIK::IK> const& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_ik() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ik;
}
constexpr void RootMotion::FinalIK::RagdollUtility::__cordl_internal_set_ik(::UnityW<::RootMotion::FinalIK::IK> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ik)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_ragdollToAnimationTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ragdollToAnimationTime;
}
constexpr float_t const& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_ragdollToAnimationTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ragdollToAnimationTime;
}
constexpr void RootMotion::FinalIK::RagdollUtility::__cordl_internal_set_ragdollToAnimationTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ragdollToAnimationTime = value;
}
constexpr bool& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_applyIkOnRagdoll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___applyIkOnRagdoll;
}
constexpr bool const& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_applyIkOnRagdoll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___applyIkOnRagdoll;
}
constexpr void RootMotion::FinalIK::RagdollUtility::__cordl_internal_set_applyIkOnRagdoll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___applyIkOnRagdoll = value;
}
constexpr float_t& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_applyVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___applyVelocity;
}
constexpr float_t const& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_applyVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___applyVelocity;
}
constexpr void RootMotion::FinalIK::RagdollUtility::__cordl_internal_set_applyVelocity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___applyVelocity = value;
}
constexpr float_t& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_applyAngularVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___applyAngularVelocity;
}
constexpr float_t const& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_applyAngularVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___applyAngularVelocity;
}
constexpr void RootMotion::FinalIK::RagdollUtility::__cordl_internal_set_applyAngularVelocity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___applyAngularVelocity = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_animator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_animator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animator;
}
constexpr void RootMotion::FinalIK::RagdollUtility::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___animator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>*>&
RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_rigidbones() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rigidbones;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>*> const&
RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_rigidbones() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rigidbones;
}
constexpr void RootMotion::FinalIK::RagdollUtility::__cordl_internal_set_rigidbones(
    ::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Rigidbone*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rigidbones)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Child*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Child*>*>& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_children() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___children;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Child*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Child*>*> const&
RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_children() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___children;
}
constexpr void
RootMotion::FinalIK::RagdollUtility::__cordl_internal_set_children(::ArrayW<::RootMotion::FinalIK::__RagdollUtility__Child*, ::Array<::RootMotion::FinalIK::__RagdollUtility__Child*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___children)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_enableRagdollFlag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableRagdollFlag;
}
constexpr bool const& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_enableRagdollFlag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableRagdollFlag;
}
constexpr void RootMotion::FinalIK::RagdollUtility::__cordl_internal_set_enableRagdollFlag(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableRagdollFlag = value;
}
constexpr ::UnityEngine::AnimatorUpdateMode& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_animatorUpdateMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animatorUpdateMode;
}
constexpr ::UnityEngine::AnimatorUpdateMode const& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_animatorUpdateMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animatorUpdateMode;
}
constexpr void RootMotion::FinalIK::RagdollUtility::__cordl_internal_set_animatorUpdateMode(::UnityEngine::AnimatorUpdateMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___animatorUpdateMode = value;
}
constexpr ::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*>& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_allIKComponents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allIKComponents;
}
constexpr ::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> const& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_allIKComponents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allIKComponents;
}
constexpr void RootMotion::FinalIK::RagdollUtility::__cordl_internal_set_allIKComponents(::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___allIKComponents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<bool, ::Array<bool>*>& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_fixTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixTransforms;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_fixTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixTransforms;
}
constexpr void RootMotion::FinalIK::RagdollUtility::__cordl_internal_set_fixTransforms(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fixTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_ragdollWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ragdollWeight;
}
constexpr float_t const& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_ragdollWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ragdollWeight;
}
constexpr void RootMotion::FinalIK::RagdollUtility::__cordl_internal_set_ragdollWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ragdollWeight = value;
}
constexpr float_t& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_ragdollWeightV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ragdollWeightV;
}
constexpr float_t const& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_ragdollWeightV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ragdollWeightV;
}
constexpr void RootMotion::FinalIK::RagdollUtility::__cordl_internal_set_ragdollWeightV(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ragdollWeightV = value;
}
constexpr bool& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_fixedFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixedFrame;
}
constexpr bool const& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_fixedFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixedFrame;
}
constexpr void RootMotion::FinalIK::RagdollUtility::__cordl_internal_set_fixedFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fixedFrame = value;
}
constexpr ::ArrayW<bool, ::Array<bool>*>& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_disabledIKComponents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disabledIKComponents;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& RootMotion::FinalIK::RagdollUtility::__cordl_internal_get_disabledIKComponents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disabledIKComponents;
}
constexpr void RootMotion::FinalIK::RagdollUtility::__cordl_internal_set_disabledIKComponents(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___disabledIKComponents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::RagdollUtility::EnableRagdoll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "EnableRagdoll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::RagdollUtility::DisableRagdoll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "DisableRagdoll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::RagdollUtility::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* RootMotion::FinalIK::RagdollUtility::DisableRagdollSmooth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(),
                                                                             "DisableRagdollSmooth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::RagdollUtility::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::RagdollUtility::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "FixedUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::RagdollUtility::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::RagdollUtility::AfterLastIK() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "AfterLastIK",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::RagdollUtility::AfterAnimation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "AfterAnimation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::RagdollUtility::OnFinalPose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "OnFinalPose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::RagdollUtility::RagdollEnabler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "RagdollEnabler",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::RagdollUtility::get_isRagdoll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "get_isRagdoll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::RagdollUtility::RecordVelocities() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "RecordVelocities",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::RagdollUtility::get_ikUsed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "get_ikUsed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::RagdollUtility::StoreLocalState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "StoreLocalState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::RagdollUtility::FixTransforms(float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "FixTransforms",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, weight);
}
inline void RootMotion::FinalIK::RagdollUtility::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::RagdollUtility* RootMotion::FinalIK::RagdollUtility::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::RagdollUtility*>());
}
inline void RootMotion::FinalIK::RagdollUtility::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::RagdollUtility::RagdollUtility() {}
