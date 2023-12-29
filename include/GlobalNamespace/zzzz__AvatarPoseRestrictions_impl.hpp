#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AvatarPoseRestrictions_def.hpp"
#include "GlobalNamespace/zzzz__AvatarPoseController_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AvatarPoseRestrictions.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarPoseRestrictions::*)()>(&::GlobalNamespace::AvatarPoseRestrictions::Start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x20d2fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseRestrictions*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarPoseRestrictions.HandleAvatarPoseControllerPositionsWillBeSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarPoseRestrictions::*)(
    ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(
    &::GlobalNamespace::AvatarPoseRestrictions::HandleAvatarPoseControllerPositionsWillBeSet)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x20d306c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseRestrictions*>::get(), "HandleAvatarPoseControllerPositionsWillBeSet", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarPoseRestrictions.LimitHandPositionRelativeToHead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::AvatarPoseRestrictions::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::AvatarPoseRestrictions::LimitHandPositionRelativeToHead)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x20d3248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseRestrictions*>::get(), "LimitHandPositionRelativeToHead", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarPoseRestrictions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarPoseRestrictions::*)()>(&::GlobalNamespace::AvatarPoseRestrictions::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x20d32d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseRestrictions*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::AvatarPoseRestrictions::__get__maxHeadSquareDistanceFromCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxHeadSquareDistanceFromCenter;
}
constexpr float_t const& GlobalNamespace::AvatarPoseRestrictions::__get__maxHeadSquareDistanceFromCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxHeadSquareDistanceFromCenter;
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__maxHeadSquareDistanceFromCenter(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxHeadSquareDistanceFromCenter = value;
}
constexpr float_t& GlobalNamespace::AvatarPoseRestrictions::__get__minHeadYPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minHeadYPos;
}
constexpr float_t const& GlobalNamespace::AvatarPoseRestrictions::__get__minHeadYPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minHeadYPos;
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__minHeadYPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minHeadYPos = value;
}
constexpr float_t& GlobalNamespace::AvatarPoseRestrictions::__get__maxHeadYPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxHeadYPos;
}
constexpr float_t const& GlobalNamespace::AvatarPoseRestrictions::__get__maxHeadYPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxHeadYPos;
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__maxHeadYPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxHeadYPos = value;
}
constexpr float_t& GlobalNamespace::AvatarPoseRestrictions::__get__minHandXZSquareDistanceFromHeadCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minHandXZSquareDistanceFromHeadCenter;
}
constexpr float_t const& GlobalNamespace::AvatarPoseRestrictions::__get__minHandXZSquareDistanceFromHeadCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minHandXZSquareDistanceFromHeadCenter;
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__minHandXZSquareDistanceFromHeadCenter(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minHandXZSquareDistanceFromHeadCenter = value;
}
constexpr float_t& GlobalNamespace::AvatarPoseRestrictions::__get__maxHandXZSquareDistanceFromHeadCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxHandXZSquareDistanceFromHeadCenter;
}
constexpr float_t const& GlobalNamespace::AvatarPoseRestrictions::__get__maxHandXZSquareDistanceFromHeadCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxHandXZSquareDistanceFromHeadCenter;
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__maxHandXZSquareDistanceFromHeadCenter(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxHandXZSquareDistanceFromHeadCenter = value;
}
constexpr float_t& GlobalNamespace::AvatarPoseRestrictions::__get__minHandYDistanceFromHeadCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minHandYDistanceFromHeadCenter;
}
constexpr float_t const& GlobalNamespace::AvatarPoseRestrictions::__get__minHandYDistanceFromHeadCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minHandYDistanceFromHeadCenter;
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__minHandYDistanceFromHeadCenter(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minHandYDistanceFromHeadCenter = value;
}
constexpr float_t& GlobalNamespace::AvatarPoseRestrictions::__get__maxHandYDistanceFromHeadCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxHandYDistanceFromHeadCenter;
}
constexpr float_t const& GlobalNamespace::AvatarPoseRestrictions::__get__maxHandYDistanceFromHeadCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxHandYDistanceFromHeadCenter;
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__maxHandYDistanceFromHeadCenter(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxHandYDistanceFromHeadCenter = value;
}
constexpr bool& GlobalNamespace::AvatarPoseRestrictions::__get__forceHeadPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceHeadPosition;
}
constexpr bool const& GlobalNamespace::AvatarPoseRestrictions::__get__forceHeadPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceHeadPosition;
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__forceHeadPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forceHeadPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AvatarPoseRestrictions::__get__centerHeadOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerHeadOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AvatarPoseRestrictions::__get__centerHeadOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerHeadOffset;
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__centerHeadOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centerHeadOffset = value;
}
constexpr ::GlobalNamespace::AvatarPoseController*& GlobalNamespace::AvatarPoseRestrictions::__get__avatarPoseController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPoseController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPoseController*> const& GlobalNamespace::AvatarPoseRestrictions::__get__avatarPoseController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPoseController;
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__avatarPoseController(::GlobalNamespace::AvatarPoseController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarPoseController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::AvatarPoseRestrictions::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseRestrictions*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarPoseRestrictions::HandleAvatarPoseControllerPositionsWillBeSet(::UnityEngine::Quaternion headRotation, ::UnityEngine::Vector3 headPosition,
                                                                                                  ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition,
                                                                                                  ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition,
                                                                                                  ByRef<::UnityEngine::Vector3> newRightHandPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseRestrictions*>::get(), "HandleAvatarPoseControllerPositionsWillBeSet", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headRotation, headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition,
                                                          newRightHandPosition);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AvatarPoseRestrictions::LimitHandPositionRelativeToHead(::UnityEngine::Vector3 handPosition, ::UnityEngine::Vector3 headCenter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseRestrictions*>::get(), "LimitHandPositionRelativeToHead", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, handPosition, headCenter);
}
inline ::GlobalNamespace::AvatarPoseRestrictions* GlobalNamespace::AvatarPoseRestrictions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AvatarPoseRestrictions*>());
}
inline void GlobalNamespace::AvatarPoseRestrictions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseRestrictions*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AvatarPoseRestrictions::AvatarPoseRestrictions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
