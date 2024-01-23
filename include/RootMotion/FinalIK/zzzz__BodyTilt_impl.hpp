#pragma once
#include "RootMotion/FinalIK/zzzz__OffsetModifier_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__BodyTilt_def.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetPose_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::BodyTilt.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::BodyTilt::*)()>(&::RootMotion::FinalIK::BodyTilt::Start)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1294a2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::BodyTilt.OnModifyOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::BodyTilt::*)()>(&::RootMotion::FinalIK::BodyTilt::OnModifyOffset)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x1294a94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::BodyTilt._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::BodyTilt::*)()>(&::RootMotion::FinalIK::BodyTilt::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1294d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& RootMotion::FinalIK::BodyTilt::__cordl_internal_get_tiltSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tiltSpeed;
}
constexpr float_t const& RootMotion::FinalIK::BodyTilt::__cordl_internal_get_tiltSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tiltSpeed;
}
constexpr void RootMotion::FinalIK::BodyTilt::__cordl_internal_set_tiltSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tiltSpeed = value;
}
constexpr float_t& RootMotion::FinalIK::BodyTilt::__cordl_internal_get_tiltSensitivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tiltSensitivity;
}
constexpr float_t const& RootMotion::FinalIK::BodyTilt::__cordl_internal_get_tiltSensitivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tiltSensitivity;
}
constexpr void RootMotion::FinalIK::BodyTilt::__cordl_internal_set_tiltSensitivity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tiltSensitivity = value;
}
constexpr ::UnityW<::RootMotion::FinalIK::OffsetPose>& RootMotion::FinalIK::BodyTilt::__cordl_internal_get_poseLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poseLeft;
}
constexpr ::UnityW<::RootMotion::FinalIK::OffsetPose> const& RootMotion::FinalIK::BodyTilt::__cordl_internal_get_poseLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poseLeft;
}
constexpr void RootMotion::FinalIK::BodyTilt::__cordl_internal_set_poseLeft(::UnityW<::RootMotion::FinalIK::OffsetPose> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___poseLeft)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::RootMotion::FinalIK::OffsetPose>& RootMotion::FinalIK::BodyTilt::__cordl_internal_get_poseRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poseRight;
}
constexpr ::UnityW<::RootMotion::FinalIK::OffsetPose> const& RootMotion::FinalIK::BodyTilt::__cordl_internal_get_poseRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poseRight;
}
constexpr void RootMotion::FinalIK::BodyTilt::__cordl_internal_set_poseRight(::UnityW<::RootMotion::FinalIK::OffsetPose> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___poseRight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::BodyTilt::__cordl_internal_get_tiltAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tiltAngle;
}
constexpr float_t const& RootMotion::FinalIK::BodyTilt::__cordl_internal_get_tiltAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tiltAngle;
}
constexpr void RootMotion::FinalIK::BodyTilt::__cordl_internal_set_tiltAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tiltAngle = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::BodyTilt::__cordl_internal_get_lastForward() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastForward;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::BodyTilt::__cordl_internal_get_lastForward() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastForward;
}
constexpr void RootMotion::FinalIK::BodyTilt::__cordl_internal_set_lastForward(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastForward = value;
}
inline void RootMotion::FinalIK::BodyTilt::Start() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::BodyTilt::OnModifyOffset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::BodyTilt* RootMotion::FinalIK::BodyTilt::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::BodyTilt*>());
}
inline void RootMotion::FinalIK::BodyTilt::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::BodyTilt::BodyTilt() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
