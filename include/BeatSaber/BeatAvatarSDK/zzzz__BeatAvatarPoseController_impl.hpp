#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__BeatAvatarPoseController_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__HeadBodyOffsetSO_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController.get_bodyWorldPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::*)()>(
    &::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::get_bodyWorldPosition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe6d1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>::get(),
                                                                               "get_bodyWorldPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController.UpdateTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(
    &::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::UpdateTransforms)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xe6d218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>::get(), "UpdateTransforms", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController.UpdateBodyPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::*)()>(
    &::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::UpdateBodyPosition)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xe6d2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>::get(),
                                                                               "UpdateBodyPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::*)()>(
    &::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe6d4a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__headTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__headTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTransform;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_set__headTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__leftHandTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__leftHandTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandTransform;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_set__leftHandTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftHandTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__rightHandTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__rightHandTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandTransform;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_set__rightHandTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightHandTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__bodyTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__bodyTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyTransform;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_set__bodyTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bodyTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO>& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__headBodyOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headBodyOffset;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO> const& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__headBodyOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headBodyOffset;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_set__headBodyOffset(::UnityW<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headBodyOffset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Vector3 BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::get_bodyWorldPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>::get(),
                                                                             "get_bodyWorldPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::UpdateTransforms(::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition,
                                                                                 ::UnityEngine::Quaternion headRotation, ::UnityEngine::Quaternion leftHandRotation,
                                                                                 ::UnityEngine::Quaternion rightHandRotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>::get(), "UpdateTransforms", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headPosition, leftHandPosition, rightHandPosition, headRotation, leftHandRotation, rightHandRotation);
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::UpdateBodyPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>::get(),
                                                                             "UpdateBodyPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController* BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>());
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::BeatAvatarPoseController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
