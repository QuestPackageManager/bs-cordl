#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__LookAtController_def.hpp"
#include "RootMotion/FinalIK/zzzz__LookAtIK_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::LookAtController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::LookAtController::*)()>(&::RootMotion::FinalIK::LookAtController::Start)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x12971b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::LookAtController.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::LookAtController::*)()>(&::RootMotion::FinalIK::LookAtController::LateUpdate)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x12972a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(), "LateUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::LookAtController.get_pivot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::LookAtController::*)()>(
    &::RootMotion::FinalIK::LookAtController::get_pivot)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1297220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(), "get_pivot",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::LookAtController.ApplyMinDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::LookAtController::*)()>(&::RootMotion::FinalIK::LookAtController::ApplyMinDistance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x129778c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(),
                                                                               "ApplyMinDistance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::LookAtController.RootRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::LookAtController::*)()>(&::RootMotion::FinalIK::LookAtController::RootRotation)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x1297910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(), "RootRotation",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::LookAtController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::LookAtController::*)()>(&::RootMotion::FinalIK::LookAtController::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1297b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::RootMotion::FinalIK::LookAtIK*& RootMotion::FinalIK::LookAtController::__get_ik() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ik;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::LookAtIK*> const& RootMotion::FinalIK::LookAtController::__get_ik() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ik;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_ik(::RootMotion::FinalIK::LookAtIK* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ik)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::LookAtController::__get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___target;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::LookAtController::__get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___target;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_target(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___weight;
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___weight;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___weight = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::LookAtController::__get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::LookAtController::__get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___offset;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_offset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___offset = value;
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_targetSwitchSmoothTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___targetSwitchSmoothTime;
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_targetSwitchSmoothTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___targetSwitchSmoothTime;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_targetSwitchSmoothTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___targetSwitchSmoothTime = value;
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_weightSmoothTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___weightSmoothTime;
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_weightSmoothTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___weightSmoothTime;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_weightSmoothTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___weightSmoothTime = value;
}
constexpr bool& RootMotion::FinalIK::LookAtController::__get_smoothTurnTowardsTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___smoothTurnTowardsTarget;
}
constexpr bool const& RootMotion::FinalIK::LookAtController::__get_smoothTurnTowardsTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___smoothTurnTowardsTarget;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_smoothTurnTowardsTarget(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___smoothTurnTowardsTarget = value;
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_maxRadiansDelta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxRadiansDelta;
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_maxRadiansDelta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxRadiansDelta;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_maxRadiansDelta(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___maxRadiansDelta = value;
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_maxMagnitudeDelta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxMagnitudeDelta;
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_maxMagnitudeDelta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxMagnitudeDelta;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_maxMagnitudeDelta(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___maxMagnitudeDelta = value;
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_slerpSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___slerpSpeed;
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_slerpSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___slerpSpeed;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_slerpSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___slerpSpeed = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::LookAtController::__get_pivotOffsetFromRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pivotOffsetFromRoot;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::LookAtController::__get_pivotOffsetFromRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pivotOffsetFromRoot;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_pivotOffsetFromRoot(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___pivotOffsetFromRoot = value;
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_minDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___minDistance;
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_minDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___minDistance;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_minDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___minDistance = value;
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_maxRootAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxRootAngle;
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_maxRootAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxRootAngle;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_maxRootAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___maxRootAngle = value;
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::LookAtController::__get_lastTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastTarget;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::LookAtController::__get_lastTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastTarget;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_lastTarget(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_switchWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___switchWeight;
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_switchWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___switchWeight;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_switchWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___switchWeight = value;
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_switchWeightV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___switchWeightV;
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_switchWeightV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___switchWeightV;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_switchWeightV(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___switchWeightV = value;
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_weightV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___weightV;
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_weightV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___weightV;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_weightV(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___weightV = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::LookAtController::__get_lastPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::LookAtController::__get_lastPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastPosition;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_lastPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lastPosition = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::LookAtController::__get_dir() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dir;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::LookAtController::__get_dir() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dir;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_dir(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___dir = value;
}
constexpr bool& RootMotion::FinalIK::LookAtController::__get_lastSmoothTowardsTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastSmoothTowardsTarget;
}
constexpr bool const& RootMotion::FinalIK::LookAtController::__get_lastSmoothTowardsTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastSmoothTowardsTarget;
}
constexpr void RootMotion::FinalIK::LookAtController::__set_lastSmoothTowardsTarget(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lastSmoothTowardsTarget = value;
}
inline void RootMotion::FinalIK::LookAtController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::LookAtController::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(), "LateUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::LookAtController::get_pivot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(), "get_pivot",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::LookAtController::ApplyMinDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(),
                                                                             "ApplyMinDistance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::LookAtController::RootRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(), "RootRotation",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::LookAtController* RootMotion::FinalIK::LookAtController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::LookAtController*>());
}
inline void RootMotion::FinalIK::LookAtController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::LookAtController::LookAtController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
