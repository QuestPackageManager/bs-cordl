#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerLobbyPoseGeneratorAI.hpp"
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGenerator_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGeneratorAI_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::*)(::GlobalNamespace::IMultiplayerSessionManager*)>(
    &::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c2ee8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::*)()>(
    &::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::Init)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x3c2fa38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::*)()>(
    &::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::Tick)> {
  constexpr static std::size_t size = 0xa04;
  constexpr static std::size_t addrs = 0x3c2fcfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::System::Random*& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::System::Random* const& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_set__random(::System::Random* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Pose& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__headPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPose;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__headPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPose;
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_set__headPose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headPose = value;
}
constexpr ::UnityEngine::Pose& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__leftHandPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandPose;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__leftHandPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandPose;
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_set__leftHandPose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftHandPose = value;
}
constexpr ::UnityEngine::Pose& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__rightHandPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandPose;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__rightHandPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandPose;
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_set__rightHandPose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightHandPose = value;
}
constexpr ::UnityEngine::Pose& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__lastHeadPoseTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastHeadPoseTarget;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__lastHeadPoseTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastHeadPoseTarget;
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_set__lastHeadPoseTarget(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastHeadPoseTarget = value;
}
constexpr ::UnityEngine::Pose& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__lastLeftHandPoseTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastLeftHandPoseTarget;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__lastLeftHandPoseTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastLeftHandPoseTarget;
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_set__lastLeftHandPoseTarget(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastLeftHandPoseTarget = value;
}
constexpr ::UnityEngine::Pose& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__lastRightHandPoseTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastRightHandPoseTarget;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__lastRightHandPoseTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastRightHandPoseTarget;
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_set__lastRightHandPoseTarget(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastRightHandPoseTarget = value;
}
constexpr int64_t& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__lastTargetTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTargetTime;
}
constexpr int64_t const& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__lastTargetTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTargetTime;
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_set__lastTargetTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastTargetTime = value;
}
constexpr ::UnityEngine::Pose& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__headPoseTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPoseTarget;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__headPoseTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPoseTarget;
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_set__headPoseTarget(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headPoseTarget = value;
}
constexpr ::UnityEngine::Pose& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__leftHandPoseTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandPoseTarget;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__leftHandPoseTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandPoseTarget;
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_set__leftHandPoseTarget(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftHandPoseTarget = value;
}
constexpr ::UnityEngine::Pose& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__rightHandPoseTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandPoseTarget;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__rightHandPoseTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandPoseTarget;
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_set__rightHandPoseTarget(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightHandPoseTarget = value;
}
constexpr int64_t& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__nextTargetTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextTargetTime;
}
constexpr int64_t const& GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_get__nextTargetTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextTargetTime;
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__cordl_internal_set__nextTargetTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextTargetTime = value;
}
inline void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerSessionManager);
}
inline void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::Init() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::Tick() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI* GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI*>(multiplayerSessionManager));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::MockPlayerLobbyPoseGeneratorAI() {}
