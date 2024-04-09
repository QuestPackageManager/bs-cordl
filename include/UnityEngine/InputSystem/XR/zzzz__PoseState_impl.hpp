#pragma once
#include "UnityEngine/XR/zzzz__InputTrackingState_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__PoseState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::PoseState.get_format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::XR::PoseState::*)()>(
    &::UnityEngine::InputSystem::XR::PoseState::get_format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ff2b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::PoseState>::get(), "get_format",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::PoseState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::PoseState::*)(
    bool, ::UnityEngine::XR::InputTrackingState, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::InputSystem::XR::PoseState::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ff2bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::PoseState>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputTrackingState>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr UnityEngine::InputSystem::XR::PoseState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* UnityEngine::InputSystem::XR::PoseState::i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
constexpr bool& UnityEngine::InputSystem::XR::PoseState::__cordl_internal_get_isTracked() {
  return this->___isTracked;
}
constexpr bool const& UnityEngine::InputSystem::XR::PoseState::__cordl_internal_get_isTracked() const {
  return this->___isTracked;
}
constexpr void UnityEngine::InputSystem::XR::PoseState::__cordl_internal_set_isTracked(bool value) {
  this->___isTracked = value;
}
constexpr ::UnityEngine::XR::InputTrackingState& UnityEngine::InputSystem::XR::PoseState::__cordl_internal_get_trackingState() {
  return this->___trackingState;
}
constexpr ::UnityEngine::XR::InputTrackingState const& UnityEngine::InputSystem::XR::PoseState::__cordl_internal_get_trackingState() const {
  return this->___trackingState;
}
constexpr void UnityEngine::InputSystem::XR::PoseState::__cordl_internal_set_trackingState(::UnityEngine::XR::InputTrackingState value) {
  this->___trackingState = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::InputSystem::XR::PoseState::__cordl_internal_get_position() {
  return this->___position;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::InputSystem::XR::PoseState::__cordl_internal_get_position() const {
  return this->___position;
}
constexpr void UnityEngine::InputSystem::XR::PoseState::__cordl_internal_set_position(::UnityEngine::Vector3 value) {
  this->___position = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::InputSystem::XR::PoseState::__cordl_internal_get_rotation() {
  return this->___rotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::InputSystem::XR::PoseState::__cordl_internal_get_rotation() const {
  return this->___rotation;
}
constexpr void UnityEngine::InputSystem::XR::PoseState::__cordl_internal_set_rotation(::UnityEngine::Quaternion value) {
  this->___rotation = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::InputSystem::XR::PoseState::__cordl_internal_get_velocity() {
  return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::InputSystem::XR::PoseState::__cordl_internal_get_velocity() const {
  return this->___velocity;
}
constexpr void UnityEngine::InputSystem::XR::PoseState::__cordl_internal_set_velocity(::UnityEngine::Vector3 value) {
  this->___velocity = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::InputSystem::XR::PoseState::__cordl_internal_get_angularVelocity() {
  return this->___angularVelocity;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::InputSystem::XR::PoseState::__cordl_internal_get_angularVelocity() const {
  return this->___angularVelocity;
}
constexpr void UnityEngine::InputSystem::XR::PoseState::__cordl_internal_set_angularVelocity(::UnityEngine::Vector3 value) {
  this->___angularVelocity = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::PoseState::get_format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::PoseState>::get(), "get_format",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::PoseState::_ctor(bool isTracked, ::UnityEngine::XR::InputTrackingState trackingState, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                           ::UnityEngine::Vector3 velocity, ::UnityEngine::Vector3 angularVelocity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::PoseState>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputTrackingState>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isTracked, trackingState, position, rotation, velocity, angularVelocity);
}
// Ctor Parameters [CppParam { name: "isTracked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackingState", ty: "::UnityEngine::XR::InputTrackingState", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "angularVelocity", ty: "::UnityEngine::Vector3",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::PoseState::PoseState(bool isTracked, ::UnityEngine::XR::InputTrackingState trackingState, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                               ::UnityEngine::Vector3 velocity, ::UnityEngine::Vector3 angularVelocity) noexcept {
  this->isTracked = isTracked;
  this->trackingState = trackingState;
  this->position = position;
  this->rotation = rotation;
  this->velocity = velocity;
  this->angularVelocity = angularVelocity;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::PoseState::PoseState() {}
