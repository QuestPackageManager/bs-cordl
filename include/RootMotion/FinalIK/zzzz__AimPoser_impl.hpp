#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__AimPoser_def.hpp"
#include "RootMotion/FinalIK/zzzz__AimPoser_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__AimPoser__Pose.IsInDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::__AimPoser__Pose::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__AimPoser__Pose::IsInDirection)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x1293fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__AimPoser__Pose*>::get(), "IsInDirection", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__AimPoser__Pose.SetAngleBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__AimPoser__Pose::*)(float_t)>(
    &::RootMotion::FinalIK::__AimPoser__Pose::SetAngleBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1294558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__AimPoser__Pose*>::get(), "SetAngleBuffer", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__AimPoser__Pose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__AimPoser__Pose::*)()>(&::RootMotion::FinalIK::__AimPoser__Pose::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1294560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__AimPoser__Pose*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& RootMotion::FinalIK::__AimPoser__Pose::__get_visualize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visualize;
}
constexpr bool const& RootMotion::FinalIK::__AimPoser__Pose::__get_visualize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visualize;
}
constexpr void RootMotion::FinalIK::__AimPoser__Pose::__set_visualize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___visualize = value;
}
constexpr ::StringW& RootMotion::FinalIK::__AimPoser__Pose::__get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& RootMotion::FinalIK::__AimPoser__Pose::__get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void RootMotion::FinalIK::__AimPoser__Pose::__set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__AimPoser__Pose::__get_direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___direction;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__AimPoser__Pose::__get_direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___direction;
}
constexpr void RootMotion::FinalIK::__AimPoser__Pose::__set_direction(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___direction = value;
}
constexpr float_t& RootMotion::FinalIK::__AimPoser__Pose::__get_yaw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yaw;
}
constexpr float_t const& RootMotion::FinalIK::__AimPoser__Pose::__get_yaw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yaw;
}
constexpr void RootMotion::FinalIK::__AimPoser__Pose::__set_yaw(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yaw = value;
}
constexpr float_t& RootMotion::FinalIK::__AimPoser__Pose::__get_pitch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pitch;
}
constexpr float_t const& RootMotion::FinalIK::__AimPoser__Pose::__get_pitch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pitch;
}
constexpr void RootMotion::FinalIK::__AimPoser__Pose::__set_pitch(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pitch = value;
}
constexpr float_t& RootMotion::FinalIK::__AimPoser__Pose::__get_angleBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleBuffer;
}
constexpr float_t const& RootMotion::FinalIK::__AimPoser__Pose::__get_angleBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleBuffer;
}
constexpr void RootMotion::FinalIK::__AimPoser__Pose::__set_angleBuffer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___angleBuffer = value;
}
inline bool RootMotion::FinalIK::__AimPoser__Pose::IsInDirection(::UnityEngine::Vector3 d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__AimPoser__Pose*>::get(), "IsInDirection", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, d);
}
inline void RootMotion::FinalIK::__AimPoser__Pose::SetAngleBuffer(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__AimPoser__Pose*>::get(), "SetAngleBuffer", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::RootMotion::FinalIK::__AimPoser__Pose* RootMotion::FinalIK::__AimPoser__Pose::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__AimPoser__Pose*>());
}
inline void RootMotion::FinalIK::__AimPoser__Pose::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__AimPoser__Pose*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__AimPoser__Pose::__AimPoser__Pose() {}
//  Writing Method size for method: ::RootMotion::FinalIK::AimPoser.GetPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__AimPoser__Pose* (::RootMotion::FinalIK::AimPoser::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::AimPoser::GetPose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1293f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::AimPoser*>::get(), "GetPose", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::AimPoser.SetPoseActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::AimPoser::*)(::RootMotion::FinalIK::__AimPoser__Pose*)>(
    &::RootMotion::FinalIK::AimPoser::SetPoseActive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1294498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::AimPoser*>::get(), "SetPoseActive", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__AimPoser__Pose*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::AimPoser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::AimPoser::*)()>(&::RootMotion::FinalIK::AimPoser::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x12944f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::AimPoser*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& RootMotion::FinalIK::AimPoser::__get_angleBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleBuffer;
}
constexpr float_t const& RootMotion::FinalIK::AimPoser::__get_angleBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleBuffer;
}
constexpr void RootMotion::FinalIK::AimPoser::__set_angleBuffer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___angleBuffer = value;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__AimPoser__Pose*, ::Array<::RootMotion::FinalIK::__AimPoser__Pose*>*>& RootMotion::FinalIK::AimPoser::__get_poses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poses;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__AimPoser__Pose*, ::Array<::RootMotion::FinalIK::__AimPoser__Pose*>*> const& RootMotion::FinalIK::AimPoser::__get_poses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poses;
}
constexpr void RootMotion::FinalIK::AimPoser::__set_poses(::ArrayW<::RootMotion::FinalIK::__AimPoser__Pose*, ::Array<::RootMotion::FinalIK::__AimPoser__Pose*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___poses)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::RootMotion::FinalIK::__AimPoser__Pose* RootMotion::FinalIK::AimPoser::GetPose(::UnityEngine::Vector3 localDirection) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::AimPoser*>::get(), "GetPose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__AimPoser__Pose*, false>(this, ___internal_method, localDirection);
}
inline void RootMotion::FinalIK::AimPoser::SetPoseActive(::RootMotion::FinalIK::__AimPoser__Pose* pose) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::AimPoser*>::get(), "SetPoseActive", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__AimPoser__Pose*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pose);
}
inline ::RootMotion::FinalIK::AimPoser* RootMotion::FinalIK::AimPoser::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::AimPoser*>());
}
inline void RootMotion::FinalIK::AimPoser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::AimPoser*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::AimPoser::AimPoser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
