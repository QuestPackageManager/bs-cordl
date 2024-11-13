#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/TrackedPoseDriver.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__TrackedPoseDriver_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType::__TrackedPoseDriver__TrackingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType::__TrackedPoseDriver__TrackingType() {}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType::RotationAndPosition{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType::RotationOnly{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType::PositionOnly{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingStates::__TrackedPoseDriver__TrackingStates(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingStates::__TrackedPoseDriver__TrackingStates() {}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingStates UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingStates::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingStates UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingStates::Position{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingStates UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingStates::Rotation{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType::__TrackedPoseDriver__UpdateType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType::__TrackedPoseDriver__UpdateType() {}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType::UpdateAndBeforeRender{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType::Update{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType::BeforeRender{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_trackingType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType (
    ::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_trackingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x458204c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "get_trackingType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_trackingType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(
    ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_trackingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4582054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_trackingType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_updateType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType (
    ::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_updateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x458205c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "get_updateType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_updateType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(
    ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_updateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4582064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_updateType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_ignoreTrackingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_ignoreTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x458206c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "get_ignoreTrackingState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_ignoreTrackingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(bool)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_ignoreTrackingState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4582074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_ignoreTrackingState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_positionInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4582080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "get_positionInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_positionInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionInput)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x4582094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_positionInput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_rotationInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4582438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "get_rotationInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_rotationInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationInput)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x458244c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_rotationInput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_trackingStateInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_trackingStateInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x45827f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "get_trackingStateInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_trackingStateInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_trackingStateInput)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x4582804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_trackingStateInput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.BindActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindActions)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4582ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "BindActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnbindActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindActions)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4582bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "UnbindActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.BindPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindPosition)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x4582298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "BindPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.BindRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindRotation)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x4582650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "BindRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.BindTrackingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindTrackingState)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x4582a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "BindTrackingState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnbindPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindPosition)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x4582154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "UnbindPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnbindRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindRotation)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x458250c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "UnbindRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnbindTrackingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindTrackingState)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x45828c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "UnbindTrackingState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnPositionPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionPerformed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4582be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnPositionPerformed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnPositionCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionCanceled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4582c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnPositionCanceled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnRotationPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationPerformed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4582ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnRotationPerformed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnRotationCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationCanceled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4582d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnRotationCanceled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnTrackingStatePerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnTrackingStatePerformed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4582d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnTrackingStatePerformed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnTrackingStateCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnTrackingStateCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4582dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnTrackingStateCanceled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::Reset)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x4582db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::Awake)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4582f88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnEnable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4583038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDisable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x45830f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDestroy)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x458319c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UpdateCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::UpdateCallback)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x45831c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "UpdateCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.ReadTrackingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::ReadTrackingState)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x45832ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "ReadTrackingState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4583420;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnBeforeRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnBeforeRender)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x458343c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.PerformUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::PerformUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x458345c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.SetLocalTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::SetLocalTransform)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x4583478;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.HasStereoCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(ByRef<::UnityEngine::Camera*>)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::HasStereoCamera)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4582fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "HasStereoCamera", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Camera*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_positionAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x45835e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "get_positionAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_positionAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionAction)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x45835f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_positionAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_rotationAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4583638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "get_rotationAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_rotationAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationAction)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4583644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_rotationAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x458368c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                 "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4583690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                    "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4583720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::InputSystem::XR::TrackedPoseDriver::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::InputSystem::XR::TrackedPoseDriver::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_TrackingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingType;
}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_TrackingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingType;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_TrackingType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackingType = value;
}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_UpdateType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateType;
}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_UpdateType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateType;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_UpdateType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateType = value;
}
constexpr bool& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_IgnoreTrackingState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreTrackingState;
}
constexpr bool const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_IgnoreTrackingState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreTrackingState;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_IgnoreTrackingState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IgnoreTrackingState = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_PositionInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionInput;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_PositionInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionInput;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_PositionInput(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PositionInput = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_RotationInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationInput;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_RotationInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationInput;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_RotationInput(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RotationInput = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_TrackingStateInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingStateInput;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_TrackingStateInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingStateInput;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_TrackingStateInput(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackingStateInput = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_CurrentPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_CurrentPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPosition;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_CurrentPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentPosition = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_CurrentRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentRotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_CurrentRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentRotation;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_CurrentRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentRotation = value;
}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingStates& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_CurrentTrackingState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTrackingState;
}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingStates const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_CurrentTrackingState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTrackingState;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_CurrentTrackingState(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingStates value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentTrackingState = value;
}
constexpr bool& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_RotationBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationBound;
}
constexpr bool const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_RotationBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationBound;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_RotationBound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RotationBound = value;
}
constexpr bool& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_PositionBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionBound;
}
constexpr bool const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_PositionBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionBound;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_PositionBound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PositionBound = value;
}
constexpr bool& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_TrackingStateBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingStateBound;
}
constexpr bool const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_TrackingStateBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingStateBound;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_TrackingStateBound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackingStateBound = value;
}
constexpr bool& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_IsFirstUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsFirstUpdate;
}
constexpr bool const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_IsFirstUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsFirstUpdate;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_IsFirstUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsFirstUpdate = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_PositionAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionAction;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_PositionAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionAction;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_PositionAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PositionAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_RotationAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationAction;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_RotationAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationAction;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_RotationAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RotationAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType UnityEngine::InputSystem::XR::TrackedPoseDriver::get_trackingType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "get_trackingType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_trackingType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_trackingType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType UnityEngine::InputSystem::XR::TrackedPoseDriver::get_updateType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "get_updateType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_updateType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_updateType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::XR::TrackedPoseDriver::get_ignoreTrackingState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "get_ignoreTrackingState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_ignoreTrackingState(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_ignoreTrackingState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "get_positionInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionInput(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_positionInput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "get_rotationInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationInput(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_rotationInput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::XR::TrackedPoseDriver::get_trackingStateInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "get_trackingStateInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_trackingStateInput(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_trackingStateInput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::BindActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "BindActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "UnbindActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::BindPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "BindPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::BindRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "BindRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::BindTrackingState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "BindTrackingState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "UnbindPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "UnbindRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindTrackingState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "UnbindTrackingState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnPositionPerformed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnPositionCanceled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnRotationPerformed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnRotationCanceled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnTrackingStatePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnTrackingStatePerformed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnTrackingStateCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnTrackingStateCanceled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::Awake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UpdateCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "UpdateCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::ReadTrackingState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "ReadTrackingState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnBeforeRender() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::PerformUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::SetLocalTransform(::UnityEngine::Vector3 newPosition, ::UnityEngine::Quaternion newRotation) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newPosition, newRotation);
}
inline bool UnityEngine::InputSystem::XR::TrackedPoseDriver::HasStereoCamera(ByRef<::UnityEngine::Camera*> cameraComponent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "HasStereoCamera", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Camera*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cameraComponent);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionAction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "get_positionAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionAction(::UnityEngine::InputSystem::InputAction* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_positionAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationAction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "get_rotationAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationAction(::UnityEngine::InputSystem::InputAction* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_rotationAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::TrackedPoseDriver* UnityEngine::InputSystem::XR::TrackedPoseDriver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>());
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver::TrackedPoseDriver() {}
